// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEditorUtilityWidget.h"
#include "EditorLevelLibrary.h"
#include "EditorAssetLibrary.h"

#pragma region OrganizeWorldOutliner
void UMyEditorUtilityWidget::OrganizeWorldOutliner()
{
	TArray<AActor*> AllActors = UEditorLevelLibrary::GetAllLevelActors();
	for (AActor* Actor : AllActors)
	{
		if (ensure(Actor))
		{
			const FName* FolderName = FolderMap.Find(Actor->GetClass());
			if (ensure(FolderName))
			{
				Actor->SetFolderPath(*FolderName);
			}
		}
	}
}
#pragma endregion

#pragma region OrganizeWorldOutliner
void UMyEditorUtilityWidget::DeleteNullSMActors()
{
	TArray<AActor*> AllActors = UEditorLevelLibrary::GetAllLevelActors();
	for (AActor* Actor : AllActors)
	{
		if (ensure(Actor))
		{
			AStaticMeshActor* StaticMeshActor = dynamic_cast<AStaticMeshActor*>(Actor);
			if (ensure(StaticMeshActor))
			{
				UStaticMeshComponent* StaticMeshComponent = StaticMeshActor->GetStaticMeshComponent();
				if (ensure(StaticMeshComponent) && nullptr == StaticMeshComponent->GetStaticMesh())
				{
					Actor->Destroy();
				}
			}
		}
	}
}
#pragma endregion

#pragma region SetTextureParamter
void UMyEditorUtilityWidget::SetTextureParamter()
{
	TArray<FString> AssetsInPath = UEditorAssetLibrary::ListAssets(FolderPath, bRecursive, false);
	for (FString AssetPath : AssetsInPath)
	{
		for (FString Pattern : LinearColorPattern)
		{
			if (AssetPath.Contains(Pattern))
			{
				UObject* Object = UEditorAssetLibrary::LoadAsset(AssetPath);
				if (!ensure(Object))
				{
					return;
				}
				UTexture2D* Texture = dynamic_cast<UTexture2D*>(Object);
				if (ensure(Texture))
				{
					Texture->SRGB = bSetRGB;
					Texture->CompressionSettings = Compression;
				}
			}
		}
	}
}
#pragma endregion