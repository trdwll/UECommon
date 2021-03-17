// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Int32Utils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UInt32Utils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToFloat (Int32)", CompactNodeTitle = "->", Keywords = "cast convert float", BlueprintAutocast))
	static float ToFloat(int32 Value) { return (float)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToInt64 (Int32)", CompactNodeTitle = "->", Keywords = "cast convert int64", BlueprintAutocast))
	static int64 ToInt32(int32 Value) { return (int64)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToUint8 (Int32)", CompactNodeTitle = "->", Keywords = "cast convert uint8", BlueprintAutocast))
	static uint8 ToUint8(int32 Value) { return (uint8)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToBool (Int32)", CompactNodeTitle = "->", Keywords = "cast convert bool", BlueprintAutocast))
	static bool ToBool(int32 Value) { return (bool)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToString (Int32)", CompactNodeTitle = "->", Keywords = "cast convert fstring", BlueprintAutocast))
	static FString ToString(int32 Value) { return *FString::Printf(TEXT("%d"), Value); }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int32", meta = (DisplayName = "ToName (Int32)", CompactNodeTitle = "->", Keywords = "cast convert fname", BlueprintAutocast))
	static FName ToName(int32 Value) { return FName(*FString::Printf(TEXT("%d"), Value)); }

protected:
private:
};
