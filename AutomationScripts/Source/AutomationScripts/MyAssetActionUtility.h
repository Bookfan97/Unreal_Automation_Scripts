// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "MyAssetActionUtility.generated.h"

/**
 *
 */
UCLASS()
class AUTOMATIONSCRIPTS_API UMyAssetActionUtility : public UAssetActionUtility
{
	GENERATED_BODY()
public:
	UFUNCTION(CallInEditor)
		void RenameSelectedAssets(FString SearchPattern, FString ReplacePattern, ESearchCase::Type SearchCase);
	UFUNCTION(CallInEditor)
		void CheckPowerOfTwo();
private:
	void PrintToScreen(FString Message, FColor Color);
	void GiveFeedback(FString Method, uint32 Counter);
	bool IsPowerOfTwo(int32 NumberToCheck);
};
