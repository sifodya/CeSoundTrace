// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorAudioTrace.h"

// Sets default values for this component's properties
UActorAudioTrace::UActorAudioTrace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	allHitsForVolumeArray.SetNumZeroed(8);
	impulseArrays.SetNumZeroed(8);
	//UE_LOG(LogTemp, Log, TEXT(" ActorAudioTrace Constructor"));
	/*ECollisionChannel Channel1 = UEngineTypes::ConvertToCollisionChannel(ETraceTypeQuery::TraceTypeQuery1);
	ECollisionChannel Channel2 = UEngineTypes::ConvertToCollisionChannel(ETraceTypeQuery::TraceTypeQuery2);
	FName ChannelName1 = UCollisionProfile::Get()->ReturnChannelNameFromContainerIndex(Channel1);
	FName ChannelName2 = UCollisionProfile::Get()->ReturnChannelNameFromContainerIndex(Channel2);

	UE_LOG(LogTemp, Warning, TEXT("Channel name: %s, %s"), *ChannelName1.ToString(), *ChannelName2.ToString());*/
}


// Called when the game starts
void UActorAudioTrace::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UActorAudioTrace::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UActorAudioTrace::completeTrace()
{
	static const FString ContextString(TEXT("Get Row names from tracing control"));
	TArray<FName> tracingControlNames = tracingControl->GetRowNames();
	for(FName currentRow : tracingControlNames)
	{
		static const FString ContextString2(TEXT("Find Row in Tracing Control by Name"));
		FUtracingControl* RowData = tracingControl->FindRow<FUtracingControl>(currentRow, ContextString2, true);
		if (!RowData)
		{
			UE_LOG(LogTemp, Error, TEXT("RowData is null"));
			return;
		}
		currentFreqPass = RowData->freq;
		for (int i = 1; i < RowData->amountOfTraces; i++) //RowData->amountOfTraces
		{
			FTransform spawnTransform = Kismet::MakeTransform(GetOwner()->GetActorLocation() + FVector{ 0.0f, 0.0f, 50.0f }, FRotator::ZeroRotator, FVector::One());
			if(returnProbe == nullptr)
				return;
			AActor* spawnedRetrunProbe = GetWorld()->SpawnActor<AActor>(returnProbe->StaticClass(), spawnTransform);
			saveImpulse(AudioRayTraceV3(RowData->amountOfReflections, RowData->amountOfTraces));
			spawnedRetrunProbe->Destroy();
		}
	}
	TArray<float> T60 = getSabine();
	//UE_LOG(LogTemp, Log, TEXT(" Trace complete"));
	//sendDataToWwise();
}

TArray<float> UActorAudioTrace::AudioRayTraceV3(int32 ReflectionAmount, int32 RayAmount)
{
	TArray<float> impulse;
	impulse.SetNumZeroed(8);
	float totalDistance{ 0.0f };
	FVector SaveLocationVector = FVector::ZeroVector;
	FVector SaveReflectionVector = FVector::ZeroVector;
	FVector actorLocation{ GetOwner()->GetActorLocation() };
	actorLocation += FVector{ 0.0f, 0.0f, 50.0f };
	//UE_LOG(LogTemp, Log, TEXT("Starting audio ray trace with %d rays and %d reflections"), RayAmount, ReflectionAmount);
	for (int i = 1; i <= RayAmount; i++)
	{
		//UE_LOG(LogTemp, Log, TEXT("Starting ray %d"), i);
		TArray<AActor*> actorsToIgnore;
		bool firstTrace{ true };
		actorsToIgnore.Add(GetOwner());
		FHitResult hitResult;
		resetParticleEnergy();
		FVector initialRay = RayCannon(i, actorLocation);
		ETraceTypeQuery traceChannel{ firstTrace ? ETraceTypeQuery::TraceTypeQuery1 : ETraceTypeQuery::TraceTypeQuery2 }; //Visibility, Camera
		for (int j = 1 ; j <= ReflectionAmount; j++)
		{
			//UE_LOG(LogTemp, Log, TEXT("Performing trace %d for ray %d"), j, i);
			if(SKismet::LineTraceSingle(GetWorld(),
				Kismet::SelectVector(actorLocation, SaveLocationVector, firstTrace), 
				Kismet::SelectVector(initialRay, SaveReflectionVector, firstTrace),
				traceChannel,
				false,
				actorsToIgnore,
				EDrawDebugTrace::Type::None,
				hitResult,
				true,
				FLinearColor::Red,
				FLinearColor::Green,
				5.0f
				))
			{
				//UE_LOG(LogTemp, Log, TEXT("Selected Vector Start is: %s first Trace is %s"), *UKismetStringLibrary::Conv_VectorToString( (Kismet::SelectVector(actorLocation, SaveLocationVector, firstTrace))), *UKismetStringLibrary::Conv_BoolToString( firstTrace));
				if (usePhysicalMaterials)
				{
					UActorComponent* returnHit = hitResult.GetActor()->AActor::GetComponentByClass(UReturnProbe::StaticClass());
					if (IsValid(returnHit))
						break;
					if (hitResult.PhysMaterial.Get()->GetName() == "DefaultPhysicalMaterial")
					{
						//UE_LOG(LogTemp, Warning, TEXT("Hit actor %s has default physical material, skipping absorption and diffusion calculations"), *SKismet::GetDisplayName(hitResult.GetActor()));
						actorsToIgnore.Empty();
						SaveLocationVector = hitResult.Location;
						SaveReflectionVector = getReflectionVector(hitResult.TraceStart, hitResult.TraceEnd, hitResult.Normal);
						actorsToIgnore.Add(hitResult.GetActor());
						actorsToIgnore.Add(GetOwner());
						firstTrace = false;
						totalDistance += hitResult.Distance;
						//addHitToSabineMesh
						addHitToAll(hitResult.Location, hitResult.TraceStart);
						if (particleEnergy <= 0.0f)
						{
							UE_LOG(LogTemp, Warning, TEXT("Particle energy depleted, breaking out of reflection loop"));
							break;
						}
						continue;
					}
					getSurfaceAbsorptionByPhysicalMaterial(hitResult.PhysMaterial.Get());
					//UE_LOG(LogTemp, Log, TEXT("Physical Material Absorption: %f"), currentAbsorption);
				}
				actorsToIgnore.Empty();
				SaveLocationVector = hitResult.Location;
				SaveReflectionVector = randomDiffusionOrReflection(hitResult.Normal,
					getReflectionVector(hitResult.TraceStart, hitResult.TraceEnd,hitResult.Normal),
					currentDiffusion,
					hitResult.ImpactPoint);
				actorsToIgnore.Add(hitResult.GetActor());
				actorsToIgnore.Add(GetOwner());
				firstTrace = false;
				totalDistance += hitResult.Distance;
				addHitToSabineMesh(hitResult.Normal,
					hitResult.Location,
					hitResult.GetActor(),
					hitResult.PhysMaterial.Get());
				addHitToAll(hitResult.Location, hitResult.TraceStart);
				if(particleEnergy <= 0.0f)
				{
					UE_LOG(LogTemp, Warning, TEXT("Particle energy depleted, breaking out of reflection loop"));
					break;
				}
				checkAndAddHitToFIR(hitResult.GetActor(), totalDistance, impulse);
			}
		}
	}
	return impulse;
}

 FVector UActorAudioTrace::RayCannon(int32 rayIndex, FVector ActorPosition) const
{
	FRandomStream randomStream(Kismet::RandomInteger(1748918998));
	int32 randomInt = Kismet::RandomIntegerInRangeFromStream(randomStream, 1, 10);
	float pitch{ 0.0f };
	float yaw = Kismet::RandomFloatInRangeFromStream(randomStream, 0.0f, 360.0f);
	if (rayIndex % 2)
	{
		pitch = Kismet::RandomFloatInRangeFromStream(randomStream, Kismet::Conv_IntToDouble((randomInt - 1) * 9), Kismet::Conv_IntToDouble(randomInt * 9));
		//UE_LOG(LogTemp, Log, TEXT("Ray %d is odd, pitch: %f yaw: %f"), rayIndex, pitch, yaw);
	}
	else
	{
		pitch = Kismet::RandomFloatInRangeFromStream(randomStream, Kismet::Conv_IntToDouble((randomInt - 1) * -9), Kismet::Conv_IntToDouble(randomInt * -9));
		//UE_LOG(LogTemp, Log, TEXT("Ray %d is even, pitch: %f yaw: %f"), rayIndex, pitch, yaw);
	}
	//UE_LOG(LogTemp, Log, TEXT("Ray %d initial vector: %s"), rayIndex, *Kismet::CreateVectorFromYawPitch(yaw, pitch, 100000.0f).ToString());
	FVector v = Kismet::CreateVectorFromYawPitch(yaw, pitch, 100000.0f) + ActorPosition;
	return v;
}

 FVector UActorAudioTrace::randomDiffusionOrReflection(const FVector& normal, const FVector& reflectionVector, const float surfaceDiffusion, const FVector& impactPoint)
 {
	 FRandomStream randomStream(Kismet::RandomInteger(185941));
	 float randFloat{ Kismet::RandomFloatInRangeFromStream(randomStream, 0.0f, 1.0f) };
	 FRotator randomRotator = Kismet::MakeRotator(0.0f, 90.0f - (Kismet::DegAsin(Kismet::RandomFloatInRangeFromStream(randomStream, 0.0f, 1.0f))), Kismet::RandomFloatInRangeFromStream(randomStream, -180.0f, 180.0f));
	 FVector randomVector = Kismet::GetForwardVector(randomRotator);
	 FVector ranDiffVector = Kismet::TransformDirection(Kismet::MakeTransform(FVector::ZeroVector, Kismet::MakeRotFromZ(normal), FVector::One()), randomVector) * 1000.0f;
	 FVector selectedVector = Kismet::SelectVector(impactPoint + ranDiffVector, reflectionVector, randFloat < surfaceDiffusion);
	 return selectedVector;
 }

 FVector UActorAudioTrace::getReflectionVector(const FVector& start, const FVector& end, const FVector& normal)
 {
	 return Kismet::GetReflectionVector(Kismet::GetDirectionUnitVector(start, end), normal) * 100000.0f;
 }

 float UActorAudioTrace::getSurfaceAbsorptionByEnum(AActor* hitActor)
 {
	 //AActor::FindComponentByClass<>;
	 return 0.0f;
 }

 float UActorAudioTrace::getRemainingParticleEnergy(const float materialAbsorption, const float currentParticleEnergy) const
 {
	 return currentParticleEnergy * (1.0f - materialAbsorption);
 }

 void UActorAudioTrace::getSurfaceAbsorptionByPhysicalMaterial(const UPhysicalMaterial* hitPhysMat)
 {
	 if (physcSurfaceAbsorptionDataTable == nullptr)
		 return;
	 if (hitPhysMat == nullptr)
		 return;
	 static const FString ContextString(TEXT("Find Row in Surface Materials with Physical Material"));

	 FUTraceSurfaceMaterials* RowData = physcSurfaceAbsorptionDataTable->FindRow<FUTraceSurfaceMaterials>(FName(*hitPhysMat->GetName()), ContextString, true);
	 if (RowData == nullptr)
		 return;
	 switch (currentFreqPass)
	 {
	 case 1:
		 currentAbsorption = RowData->Hz63[0];
		 currentDiffusion = RowData->Hz63[1];
		 break;
	 case 2:
		 currentAbsorption = RowData->Hz125[0];
		 currentDiffusion = RowData->Hz125[1];
		 break;
	 case 3:
		 currentAbsorption = RowData->Hz250[0];
		 currentDiffusion = RowData->Hz250[1];
		 break;
	 case 4:
		 currentAbsorption = RowData->Hz500[0];
		 currentDiffusion = RowData->Hz500[1];
		 break;
	 case 5:
		 currentAbsorption = RowData->Hz1000[0];
		 currentDiffusion = RowData->Hz1000[1];
		 break;
	 case 6:
		 currentAbsorption = RowData->Hz2000[0];
		 currentDiffusion = RowData->Hz2000[1];
		 break;
	 case 7:
		 currentAbsorption = RowData->Hz4000[0];
		 currentDiffusion = RowData->Hz4000[1];
		 break;
	 case 8:
		 currentAbsorption = RowData->Hz8000[0];
		 currentDiffusion = RowData->Hz8000[1];
		 break;
	 default:
		 currentAbsorption = RowData->Hz1000[0];
		 currentDiffusion = RowData->Hz1000[1];
		 break;
	 }
	 particleEnergy = getParticleEnergy(currentAbsorption, particleEnergy);
 }

 float UActorAudioTrace::getParticleEnergy(const float& materialAlpha, const float& currentParticleEnergy)
 {
	 return (1.0f - materialAlpha) * currentParticleEnergy;
 }

 void UActorAudioTrace::addHitToSabineMesh(const FVector& normal, const FVector& hitpoint, AActor* actor, const UPhysicalMaterial* material)
 {
	 if(material == nullptr)
		 return;
	 FName materialName = *material->GetName();
	 
	 if (allSabineSurfacesArray.IsEmpty())
		 allSabineSurfacesArray.Add({ actor, { {normal, {hitpoint}, materialName, 0.0f} }, 0.0f });
	 else
	 {
		 bool surfaceFound{ false };
		 for (FUallSabineSurfaces currentSurface : allSabineSurfacesArray)
		 {
			if(currentSurface.Actor == actor)
			{
				surfaceFound = true;
				bool meshFound{ false };
				for (FUsurfaceOfSabine currentMesh : currentSurface.meshes)
				{
					if (currentMesh.normal.Equals(normal, 0.01f))
					{
						currentMesh.hitPoints.Add(hitpoint);
						meshFound = true;
						break;
					}
				}
				if (!meshFound)
					currentSurface.meshes.Add({ normal, {hitpoint}, materialName, 0.0f });
				break;
			}
		 }
		 if (!surfaceFound)
			 allSabineSurfacesArray.Add({ actor, { {normal, {hitpoint}, materialName, 0.0f} }, 0.0f });
	 }
 }

 void UActorAudioTrace::addHitToAll(const FVector& point, const FVector& actorPosition)
 {
	 int selector{ 0 };
	 float roll, pitch, yaw{ 0.0f };
	 Kismet::BreakRotator(Kismet::FindLookAtRotation(actorPosition, point), roll, pitch, yaw);
	 if(pitch < 0.0f)
	 {
		 if (Kismet::InRange_FloatFloat(yaw, 0.0f, 90.0f, true, true))
			 selector = 4;
		 if (Kismet::InRange_FloatFloat(yaw, 90.0f, 180.0f, false, true))
			 selector = 5;
		 if (Kismet::InRange_FloatFloat(yaw, -90.0f, 0.0f, true, false))
			 selector = 6;
		 if (Kismet::InRange_FloatFloat(yaw, -90.0f, -180.0f, true, false))
			 selector = 7;
	 }
	 else
	 {
		 if (Kismet::InRange_FloatFloat(yaw, 0.0f, 90.0f, true, true))
			 selector = 0;
		 if (Kismet::InRange_FloatFloat(yaw, 90.0f, 180.0f, false, true))
			 selector = 1;
		 if (Kismet::InRange_FloatFloat(yaw, -90.0f, 0.0f, true, false))
			 selector = 2;
		 if (Kismet::InRange_FloatFloat(yaw, -90.0f, -180.0f, true, false))
			 selector = 3;
	 }
	 if (selector > 3)
	 {
		 if (Kismet::Abs(allHitsForVolumeArray[selector].Angle - ( - 45.0f)) < Kismet::Abs(pitch - ( - 45.0f)))
		 {
			 allHitsForVolumeArray[selector].Angle = pitch;
			 allHitsForVolumeArray[selector].Hit = point;
		 }
	 }
	 else
	 {
		 if (Kismet::Abs(allHitsForVolumeArray[selector].Angle - 45.0f) < Kismet::Abs(pitch - 45.0f))
		 {
			 allHitsForVolumeArray[selector].Angle = pitch;
			 allHitsForVolumeArray[selector].Hit = point;
		 }
	 }
 }

 void UActorAudioTrace::checkAndAddHitToFIR(AActor* hitActor, const float& distance, TArray<float> impulse)
 {
	 //UE_LOG(LogTemp, Log, TEXT("Checking hit for FIR with energy %f at distance %f"), particleEnergy, distance);
	 UActorComponent* returnHit = hitActor->AActor::GetComponentByClass(UReturnProbe::StaticClass());
	 UActorComponent* returnComponent = hitActor->AActor::FindComponentByTag(UReturnProbe::StaticClass(), FName("Probe"));
	 if(IsValid(returnHit))
		 UE_LOG(LogTemp, Warning, TEXT("Hit actor has return probe component"));
	 if (IsValid(returnComponent))
		 UE_LOG(LogTemp, Warning, TEXT("Hit actor has return probe tag"));
	 //UE_LOG(LogTemp, Log, TEXT("Hit actor: %s"), *SKismet::GetDisplayName(hitActor));
	 if (IsValid(returnHit))
	 {
		 particleEnergy = getAirDampening(distance, particleEnergy, currentFreqPass);
		 int32 index = msToSamps(distance / 1000.0f / 343.0f * 1000.0f, sampleRate);
		 if (impulse.IsValidIndex(index))
			 impulse[index] += particleEnergy;
		 else
		 {
			 impulse.SetNum(index+1, false);
			 impulse[index] = particleEnergy;
		 }
		 UE_LOG(LogTemp, Warning, TEXT("Hit added to FIR with energy %f at index %d"), particleEnergy, index - 1);
	 }
	 //UE_LOG(LogTemp, Log, TEXT("Hit checked for FIR with energy %f at distance %f"), particleEnergy, distance);
 }

 float UActorAudioTrace::getAirDampening(const float& distance, const float& energyIn, const int32& currentFreq)
 {
	 constexpr float dampeningCoefficient[8] = { 0.1f, 0.3f, 1.1f, 2.8f, 5.0f, 9.0f, 22.9f, 76.6f };
	 return energyIn - (distance / 100000.0) * Kismet::MultiplyMultiply_FloatFloat(10.0, dampeningCoefficient[currentFreq - 1] * -1.0f / 20.0f);
 }

 int32 UActorAudioTrace::msToSamps(const int32& ms, const int32& sr)
 {
	 return Kismet::Round((ms/1000.0f) * sr);
 }

 void UActorAudioTrace::saveImpulse(TArray<float> impulse)
 {
	 switch (currentFreqPass - 1)
	 {
	 case 1:
		 //check(impulseArrays.IsValidIndex(0));
		 impulseArrays[0] = impulse;
		 break;
	 case 2:
		 //check(impulseArrays.IsValidIndex(1));
		 impulseArrays[1] = impulse;
		 break;
	 case 3:
		 //check(impulseArrays.IsValidIndex(2));
		 impulseArrays[2] = impulse;
		 break;
	 case 4:
		 //check(impulseArrays.IsValidIndex(3));
		 impulseArrays[3] = impulse;
		 break;
	 case 5:
		 //check(impulseArrays.IsValidIndex(4));
		 impulseArrays[4] = impulse;
		 break;
	 case 6:
		 //check(impulseArrays.IsValidIndex(5));
		 impulseArrays[5] = impulse;
		 break;
	 case 7:
		 //check(impulseArrays.IsValidIndex(6));
		 impulseArrays[6] = impulse;
		 break;
	 case 8:
		 //check(impulseArrays.IsValidIndex(7));
		 impulseArrays[7] = impulse;
		 break;
	 default:
		 //check(impulseArrays.IsValidIndex(4));
		 impulseArrays[4] = impulse;
		 break;
	 }
 }

 TArray<float> UActorAudioTrace::getSabine()
 {
	 TArray<float> T60;
	 T60.SetNumZeroed(8);
	 TArray<float> totalAbsorption = getSabineDiffusion();
	 float roomVolume = getSabineVolume();
	 for(int i = 0; i<8; i++)
	 {
		 if(T60.IsValidIndex(i))
		 {
			 if(totalAbsorption.IsValidIndex(i))
			 T60[i] = (roomVolume * 0.161) / totalAbsorption[i];
			 //UE_LOG(LogTemp, Log, TEXT("T60 for band %d is %f"), i, T60[i]);
		 }
	 }
	 return T60;
 }
 TArray<float> UActorAudioTrace::getSabineDiffusion()
 {
	 TArray<float> diffusionArrays;
	 diffusionArrays.SetNumZeroed(8);
	 for (FUallSabineSurfaces currentSurface : allSabineSurfacesArray)
	 {
		 for (FUsurfaceOfSabine currentMesh : currentSurface.meshes)
		 {
			 FVector highestZ{ FVector::ZeroVector };
			 FVector lowestZ{ FVector::ZeroVector };
			 FVector highestY{ FVector::ZeroVector };
			 FVector lowestY{ FVector::ZeroVector };
			 FVector highestX{ FVector::ZeroVector };
			 FVector lowestX{ FVector::ZeroVector };
			 for (FVector currentHit : currentMesh.hitPoints)
			 {
				 if(highestZ.Z > currentHit.Z)
					 highestZ = currentHit;
				 if (lowestZ.Z < currentHit.Z)
					 lowestZ = currentHit;
				 if (highestY.Y > currentHit.Y)
					 highestY = currentHit;
				 if (lowestY.Y < currentHit.Y)
					 lowestY = currentHit;
				 if (highestX.X > currentHit.X)
					 highestX = currentHit;
				 if (lowestX.X < currentHit.X)
					 lowestX = currentHit;
			 }
			 if (highestZ.Z == lowestZ.Z)
				 currentMesh.surfaceArea = Kismet::Vector_Distance(highestX, lowestX) * Kismet::Vector_Distance(highestY, lowestY);
			 else
			 {
				 FVector rightestVector{ FVector::ZeroVector };
				 FVector leftestVector{ FVector::ZeroVector };
				 float roll{ 0.0f };
				 float pitch{ 0.0f };
				 float yaw{ 0.0f };
				 float leftestDot{ 0.0f };
				 float rightestDot{ 0.0f };
				 int32 randInt = Kismet::RandomIntegerInRange(0, currentMesh.hitPoints.Num() - 1);
				 FVector randPointInArray = currentMesh.hitPoints[randInt];
				 FVector randRefVector = currentMesh.normal + randPointInArray;
				 Kismet::BreakRotator(Kismet::FindLookAtRotation(randPointInArray, randRefVector), roll, pitch, yaw);
				 randPointInArray += Kismet::RotateAngleAxis(Kismet::GreaterGreater_VectorRotator(Kismet::Vector_Forward(), Kismet::MakeRotator(0.0f, 0.0f, yaw)), -90.0f, Kismet::Vector_Up());
				 for (FVector currentHit : currentMesh.hitPoints)
				 { 
					 FVector dotVector = currentHit - randPointInArray;
					 float dotProduct = Kismet::Dot_VectorVector(dotVector, randRefVector);
					 if (dotProduct < leftestDot)
					 {
						 leftestDot = dotProduct;
						 leftestVector = currentHit;
					 }
					 if (dotProduct > rightestDot)
					 {
						 rightestDot = dotProduct;
						 rightestVector = currentHit;
					 }
				 }
				 currentMesh.surfaceArea = Kismet::Vector_Distance(rightestVector, leftestVector) * Kismet::Vector_Distance(highestZ, lowestZ);
			 }
			 static const FString ContextString(TEXT("Find Row in Surface Materials by Sabine Mesh material name"));
			 FUTraceSurfaceMaterials* RowData = physcSurfaceAbsorptionDataTable->FindRow<FUTraceSurfaceMaterials>(FName(currentMesh.materialName), ContextString, true);
			 if(RowData == nullptr)
				 return TArray<float>();
			 for (int i = 0; i < 8; i++)
			 {
				 switch(i)
				 {
					 case 0:
						 diffusionArrays[0] += currentMesh.surfaceArea * RowData->Hz63[0];
						 break;
					 case 1:
						 diffusionArrays[1] += currentMesh.surfaceArea * RowData->Hz125[0];
						 break;
					 case 2:
						 diffusionArrays[2] += currentMesh.surfaceArea * RowData->Hz250[0];
						 break;
					 case 3:
						 diffusionArrays[3] += currentMesh.surfaceArea * RowData->Hz500[0];
						 break;
					 case 4:
						 diffusionArrays[4] += currentMesh.surfaceArea * RowData->Hz1000[0];
						 break;
					 case 5:
						 diffusionArrays[5] += currentMesh.surfaceArea * RowData->Hz2000[0];
						 break;
					 case 6:
						 diffusionArrays[6] += currentMesh.surfaceArea * RowData->Hz4000[0];
						 break;
					 case 7:
						 diffusionArrays[7] += currentMesh.surfaceArea * RowData->Hz8000[0];
						 break;
					 default:
						 diffusionArrays[4] += currentMesh.surfaceArea * RowData->Hz1000[0];
						 break;
				 }
			 }
		 }
	 }
	 return diffusionArrays;
 }

 float UActorAudioTrace::getSabineVolume()
 {
	 float height{ 0.0f };
	 float width{ 0.0f };
	 float length{ 0.0f };
	 TArray<double> heightArray; 
	 TArray<double> lengthArray;
	 TArray<double> widthArray;
		 heightArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[0].Hit, allHitsForVolumeArray[4].Hit));
		 heightArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[3].Hit, allHitsForVolumeArray[7].Hit));
		 heightArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[1].Hit, allHitsForVolumeArray[5].Hit));
		 heightArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[2].Hit, allHitsForVolumeArray[6].Hit));
		 lengthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[0].Hit, allHitsForVolumeArray[1].Hit));
		 lengthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[3].Hit, allHitsForVolumeArray[2].Hit));
		 lengthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[4].Hit, allHitsForVolumeArray[5].Hit));
		 lengthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[7].Hit, allHitsForVolumeArray[6].Hit));
		 widthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[0].Hit, allHitsForVolumeArray[3].Hit));
		 widthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[1].Hit, allHitsForVolumeArray[2].Hit));
		 widthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[4].Hit, allHitsForVolumeArray[7].Hit));
		 widthArray.Add(Kismet::Vector_Distance(allHitsForVolumeArray[5].Hit, allHitsForVolumeArray[6].Hit));
	 AKismet::SortFloatArray(heightArray, false, EArraySortOrder::Descending);
	 AKismet::SortFloatArray(lengthArray, false, EArraySortOrder::Descending);
	 AKismet::SortFloatArray(widthArray, false, EArraySortOrder::Descending);
	 return heightArray[0] * lengthArray[0] * widthArray[0];
 }

 TArray<FVector> UActorAudioTrace::debugRayCannon(FVector ActorPosition)
 {
	 TArray<FVector> rayVectors;
	 for (int rayIndex = 1; rayIndex <= 20; rayIndex++)
	 {
		 FRandomStream randomStream(Kismet::RandomInteger(1748918998));
		 int32 randomInt = Kismet::RandomIntegerInRangeFromStream(randomStream, 1, 10);
		 float pitch{ 0.0f };
		 float yaw = Kismet::RandomFloatInRangeFromStream(randomStream, 0.0f, 360.0f);
		 if (rayIndex % 2)
		 {
			 pitch = Kismet::RandomFloatInRangeFromStream(randomStream, Kismet::Conv_IntToDouble((randomInt - 1) * 9), Kismet::Conv_IntToDouble(randomInt * 9));
			 //UE_LOG(LogTemp, Log, TEXT("Ray %d is odd, pitch: %f yaw: %f"), rayIndex, pitch, yaw);
		 }
		 else
		 {
			 pitch = Kismet::RandomFloatInRangeFromStream(randomStream, Kismet::Conv_IntToDouble((randomInt - 1) * -9), Kismet::Conv_IntToDouble(randomInt * -9));
			 //UE_LOG(LogTemp, Log, TEXT("Ray %d is even, pitch: %f yaw: %f"), rayIndex, pitch, yaw);
		 }
		 //UE_LOG(LogTemp, Log, TEXT("Ray %d initial vector: %s"), rayIndex, *Kismet::CreateVectorFromYawPitch(yaw, pitch, 100000.0f).ToString());
		  rayVectors.Add(UKismetMathLibrary::CreateVectorFromYawPitch(yaw, pitch, 100000.0f) + ActorPosition);
	 }
	 return rayVectors;
 }