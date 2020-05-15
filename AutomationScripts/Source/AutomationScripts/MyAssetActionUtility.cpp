// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAssetActionUtility.h"
#include "EditorUtilityLibrary.h"
#include "Engine/Texture.h"

#pragma region RenameSelectedAssets

void UMyAssetActionUtility::RenameSelectedAssets(FString SearchPattern, FString ReplacePattern, ESearchCase::Type SearchCase)
{
	if (SearchPattern.IsEmpty() || SearchPattern.Equals(ReplacePattern, SearchCase))
	{
		return;
	}
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	uint32 Counter = 0;
	for (UObject* SelectedObject : SelectedObjects)
	{
		if (ensure(SelectedObject))
		{
			FString AssetName = SelectedObject->GetName();
			if (AssetName.Contains(SearchPattern, SearchCase))
			{
				FString NewName = AssetName.Replace(*SearchPattern, *ReplacePattern, SearchCase);
				UEditorUtilityLibrary::RenameAsset(SelectedObject, NewName);
				++Counter;
			}
		}
	}
	GiveFeedback(TEXT("Renamed"), Counter);
}

#pragma endregion

#pragma region CheckPowerOfTwo
void UMyAssetActionUtility::CheckPowerOfTwo()
{
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	uint32 Counter = 0;
	for (UObject* SelectedObject: SelectedObjects)
	{
		if (ensure(SelectedObject))
		{
			UTexture* Texture = dynamic_cast<UTexture*>(SelectedObject);
			if (ensure(Texture))
			{
				int32 width = static_cast<int32>(Texture->GetSurfaceWidth());
				int32 height = static_cast<int32>(Texture->GetSurfaceHeight());
				if (!IsPowerOfTwo(width) || !IsPowerOfTwo(height))
				{
					PrintToScreen(SelectedObject->GetPathName() + " is not a power of 2 texture", FColor::Red);
				}
				else
				{
					Counter++;
				}
			}
			else
			{
				PrintToScreen(SelectedObject->GetPathName() + "is not a texture", FColor::Red);
			}
		}
	}
	GiveFeedback("Power of two", Counter);
}
bool UMyAssetActionUtility::IsPowerOfTwo(int32 NumberToCheck)
{
	if (NumberToCheck==0)
	{
		return false;
	}
	return (NumberToCheck & (NumberToCheck - 1)) == 0;
}
#pragma endregion

#pragma region Helper

void UMyAssetActionUtility::PrintToScreen(FString Message, FColor Color)
{
	if (ensure(GEngine))
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.5f, Color, Message);
	}
}
void UMyAssetActionUtility::GiveFeedback(FString Method, uint32 Counter)
{
	FString Message = FString("No matching files found");
	FColor Color = Counter > 0 ? FColor::Green : FColor::Red;
	if (Counter > 0)
	{
		Message = Method.AppendChar(' ');
		Message.AppendInt(Counter);
		Message.AppendInt(Counter);
		Message.Append(Counter == 1 ? TEXT(" file") : TEXT(" files"));
	}
	PrintToScreen(Message, Color);
}
#pragma endregion