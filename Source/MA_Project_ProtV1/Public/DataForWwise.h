// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SavedImpulse.h"
#include <vector>
#include "DataForWwise.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUDataForWwise
{
	GENERATED_BODY()
	
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FUSavedImpulse> arrayOfImpulses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> wwiseT60;*/

	std::vector<std::vector<float>> arrayOfImpulses;

	std::vector<float> wwiseT60;

	int32 version{ 0 };
};
