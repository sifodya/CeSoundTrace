// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "surfaceOfSabine.h"
#include "allSabineSurfaces.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUallSabineSurfaces
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AActor* Actor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FUsurfaceOfSabine> meshes;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float actorVolume;
};
