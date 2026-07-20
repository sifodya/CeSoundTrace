// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "GameFramework/Actor.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TraceSurfaceMaterials.h"
#include "allHitsForVolume.h"
#include "allSabineSurfaces.h"
#include "tracingControl.h"
#include "ReturnProbeActor.h"
#include "SavedImpulse.h"
#include "DataForWwise.h"
#include "P:\Documents\Unreal Projects\MA_Project_ProtV1 5.7\MA_Project_ProtV1 5.7_WwiseProject\GeneratedSoundBanks\Wwise_IDs.h"
#include "AkgameplayStatics.h"
#include "Wwise/API/WwiseSoundEngineAPI.h"
//#include <Ak/SoundEngine/Common/AkSoundEngine.h>
#include <AkAudioDevice.h>
#include "ActorAudioTrace.generated.h"

//#ifdef __clang__
//#pragma message("__clang__ defined")
//#else
//#pragma message("__clang__ NOT defined")
//#endif
//
//#ifdef _MSC_VER
//#pragma message("_MSC_VER defined")
//#endif

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class MA_PROJECT_PROTV1_API UActorAudioTrace : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorAudioTrace();

	//=================================================================================================================

	void setTotalEnergy(float energy) { totalEnergy = energy; defaultParticleEnergy = energy; }
	void setUsePhysicalMaterials(bool use) { usePhysicalMaterials = use; }
	void setSampleRate(float sr) { sampleRate = sr; }

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Trace Out"), Category = "CeSoundtrace")
	TArray<float> AudioRayTraceV3(const int32 ReflectionAmount,const int32 RayAmount);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Random Vector"), Category = "CeSoundtrace")
	FVector RayCannon(const int32 rayIndex,const FVector ActorPosition) const;

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Diffusion Angle"), Category = "CeSoundtrace", BlueprintPure)
	FVector randomDiffusionOrReflection(const FVector& normal, const FVector& reflectionVector, const float surfaceDiffusion, const FVector& impactPoint);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Remaining Particle Energy"), Category = "CeSoundtrace")
	float getSurfaceAbsorptionByEnum(AActor* hitActor);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Remaining Particle Energy"), Category = "CeSoundtrace")
	void getSurfaceAbsorptionByPhysicalMaterial(const UPhysicalMaterial* hitPhysMat);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Particle Energy New"), Category = "CeSoundtrace", BlueprintPure)
	float getRemainingParticleEnergy(const float materialAbsorption, const float currentParticleEnergy) const;

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Remeainig Particle Energy"), Category = "CeSoundtrace")
	float getParticleEnergy(const float& materialAlpha, const float& currentParticleEnergy);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void addHitToSabineMesh(const FVector& normal, const FVector& hitpoint, AActor* actor, const UPhysicalMaterial* material);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void addHitToAll(const FVector& point, const FVector& actorPosition);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	bool checkAndAddHitToFIR(AActor* hitActor, const float& distance, TArray<float>& impulse);

	UFUNCTION(BlueprintCallable, meta=(ReturnDisplayName = "Energy Out"), Category = "CeSoundtrace")
	float getAirDampening(const float& distance, const float& energyIn, const int32& currentFreq);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Samples"), Category = "CeSoundtrace")
	int32 msToSamps(const int32& ms, const int32& sr);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void completeTrace();

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void saveImpulse(TArray<float> impulse);

	UFUNCTION(BlueprintCallable, meta = (ReturnDisplayName = "Volume"), Category = "CeSoundtrace")
	float getSabineVolume();

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	FVector getReflectionVector(const FVector& start, const FVector& end, const FVector& normal);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	TArray<float> getSabine();

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	TArray<float> getSabineDiffusion();

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	TArray<FVector> debugRayCannon(FVector ActorPosition);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void sendDataToWwise(TArray<FUSavedImpulse> impulse, TArray<float> T60);

	UFUNCTION(BlueprintCallable, Category = "CeSoundtrace")
	void resetSaveImpulseArrays() { 
		if (saveImpulseArrays.Num() == 0)
		{
			saveImpulseArrays.SetNumZeroed(8);
		}
		else
		{
			saveImpulseArrays.Empty();
			saveImpulseArrays.SetNumZeroed(8);
		}
	}

	//=================================================================================================================

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CeSoundtrace")
	UDataTable* physcSurfaceAbsorptionDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CeSoundtrace")
	UDataTable* tracingControl;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CeSoundtrace")
	TSubclassOf<AActor> returnProbe;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CeSoundtrace")
	int currentFreqPass{ 1 }; // 1 = 63HZ, 2 = 125HZ, 3 = 250HZ, 4 = 500HZ, 5 = 1KHZ, 6 = 2KHZ, 7 = 4KHZ, 8 = 8KHZ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CeSoundtrace")
	TArray<FUSavedImpulse> saveImpulseArrays;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Audio")
	TObjectPtr<UAkAudioEvent> AudioEvent;

	


private:
	void resetParticleEnergy() { particleEnergy = defaultParticleEnergy; }
	//void combineImpulses();
	


	//=================================================================================================================
	
	float totalEnergy{ 164.0f }; //aprox 164 dB -> pistol shot
	float particleEnergy{ 1.0f };
	float defaultParticleEnergy{ totalEnergy };
	
	float currentAbsorption{ 0.0f };
	float currentDiffusion{ 0.0f };
	float sampleRate{ 48000.0f };
	bool usePhysicalMaterials{ true };
	TArray<FUallHitsForVolume> allHitsForVolumeArray;
	TArray<FUallSabineSurfaces> allSabineSurfacesArray;
	TArray<TArray<float>> impulseArrays;
	

	//=================================================================================================================

	using Kismet = UKismetMathLibrary;
	using SKismet = UKismetSystemLibrary;
	using AKismet = UKismetArrayLibrary;
};
