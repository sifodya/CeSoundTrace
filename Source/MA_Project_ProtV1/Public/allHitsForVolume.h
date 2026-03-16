// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "allHitsForVolume.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUallHitsForVolume
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Angle{ 0.0f };
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector Hit{ FVector::ZeroVector };
};
