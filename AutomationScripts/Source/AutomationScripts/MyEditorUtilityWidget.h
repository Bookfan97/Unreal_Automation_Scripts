// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/ReflectionCapture.h"
#include "Engine/SkyLight.h"
#include "MyEditorUtilityWidget.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMATIONSCRIPTS_API UMyEditorUtilityWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganizeWorldOutline")
	TMap<UClass*, FName> FolderMap = {
			{AStaticMeshActor::StaticClass(), "Static Meshes"},
			{AReflectionCapture::StaticClass(), "Reflection Captures"},
			{ASkyLight::StaticClass(), "Lights"}
	};
		UFUNCTION(CallInEditor, BlueprintCallable)
		void OrganizeWorldOutliner();
	
};
