// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TraceSurfaceMaterials.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MA_PROJECT_PROTV1_API FUTraceSurfaceMaterials : public FTableRowBase
{
	GENERATED_BODY()
	FUTraceSurfaceMaterials(){ reserveSizeForHzArray(); }

public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz63{ 0.0f, 0.0f };

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz125{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz250{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz500{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz1000{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz2000{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz4000{ 0.0f, 0.0f };;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<float> Hz8000{ 0.0f, 0.0f };;

private:
	virtual void reserveSizeForHzArray()
	{
		Hz63.Reserve(2);
		Hz125.Reserve(2);
		Hz250.Reserve(2);
		Hz500.Reserve(2);
		Hz1000.Reserve(2);
		Hz2000.Reserve(2);
		Hz4000.Reserve(2);
		Hz8000.Reserve(2);
	}

};


