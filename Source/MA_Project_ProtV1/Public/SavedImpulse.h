// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SavedImpulse.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUSavedImpulse
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Impluses;

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> T60;*/
};
