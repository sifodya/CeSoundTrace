// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "surfaceOfSabine.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUsurfaceOfSabine
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector normal;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FVector> hitPoints;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FName materialName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float surfaceArea;
};
