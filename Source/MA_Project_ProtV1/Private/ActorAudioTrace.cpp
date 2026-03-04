// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorAudioTrace.h"

// Sets default values for this component's properties
UActorAudioTrace::UActorAudioTrace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("ActorAudioTrace Constructor called!"));
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


TArray<float> UActorAudioTrace::AudioRayTraceV3(int32 ReflectionAmount, int32 RayAmount)
{
	return TArray<float>();
}


