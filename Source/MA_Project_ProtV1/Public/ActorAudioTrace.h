// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorAudioTrace.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class MA_PROJECT_PROTV1_API UActorAudioTrace : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorAudioTrace();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, meta=(ReturnDisplayName = "Trace Out"), Category=CesSoundtrace)
	TArray<float> AudioRayTraceV3(int32 ReflectionAmount, int32 RayAmount);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
