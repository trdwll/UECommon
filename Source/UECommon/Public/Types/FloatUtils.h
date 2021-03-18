// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "FloatUtils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UFloatUtils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToFloat (float)", CompactNodeTitle = "->", Keywords = "cast convert int32", BlueprintAutocast))
	static int32 ToFloat(float Value) { return (int32)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToInt64 (float)", CompactNodeTitle = "->", Keywords = "cast convert int64", BlueprintAutocast))
	static int64 ToInt64(float Value) { return (int64)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToUint8 (float)", CompactNodeTitle = "->", Keywords = "cast convert uint8", BlueprintAutocast))
	static uint8 ToUint8(float Value) { return (uint8)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToBool (float)", CompactNodeTitle = "->", Keywords = "cast convert bool", BlueprintAutocast))
	static bool ToBool(float Value) { return (bool)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToString (float)", CompactNodeTitle = "->", Keywords = "cast convert fstring", BlueprintAutocast))
	static FString ToString(float Value) { return *FString::Printf(TEXT("%f"), Value); }

	UFUNCTION(BlueprintPure, Category = "UECommon|Float", meta = (DisplayName = "ToName (float)", CompactNodeTitle = "->", Keywords = "cast convert fname", BlueprintAutocast))
	static FName ToName(float Value) { return FName(*FString::Printf(TEXT("%f"), Value)); }

protected:
private:
};
