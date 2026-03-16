// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "tracingControl.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUtracingControl : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 freq{ 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 amountOfReflections{ 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 amountOfTraces{ 0 };
};
