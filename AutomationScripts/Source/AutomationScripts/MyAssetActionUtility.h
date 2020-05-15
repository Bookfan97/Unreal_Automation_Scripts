// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetActionUtility.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Sound/SoundWave.h"
#include "Engine/Texture.h"
#include "Blueprint/UserWidget.h"
#include "Animation/MorphTarget.h"
#include "Components/SkeletalMeshComponent.h"
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
	UFUNCTION(CallInEditor)
		void AddPrefixes();
private:
	const TMap<UClass*, FString> PrefixMap = {
		{UBlueprint::StaticClass(), TEXT("BP_")},
		{UStaticMesh::StaticClass(), TEXT("SM_")},
		{UMaterial::StaticClass(), TEXT("M_")},
		{UMaterialInstance::StaticClass(), TEXT("MI_")},
		{UMaterialFunctionInterface::StaticClass(), TEXT("MF_")},
		{UParticleSystem::StaticClass(), TEXT("PS_")},
		{USoundCue::StaticClass(), TEXT("SC_")},
		{USoundWave::StaticClass(), TEXT("SW_")},
		{UTexture::StaticClass(), TEXT("T_")},
		{UTexture2D::StaticClass(), TEXT("T_")},
		{UUserWidget::StaticClass(), TEXT("UW_")},
		{UMorphTarget::StaticClass(), TEXT("MT_")},
		{USkeletalMeshComponent::StaticClass(), TEXT("T_")}
	};
	void PrintToScreen(FString Message, FColor Color);
	void GiveFeedback(FString Method, uint32 Counter);
	bool IsPowerOfTwo(int32 NumberToCheck);
};
