// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "UInt8Utils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UInt8Utils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToFloat (uint8)", CompactNodeTitle = "->", Keywords = "cast convert float", BlueprintAutocast))
	static float ToFloat(uint8 Value) { return (float)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToInt64 (uint8)", CompactNodeTitle = "->", Keywords = "cast convert int64", BlueprintAutocast))
	static int64 TouInt8(uint8 Value) { return (uint8)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToInt32 (uint8)", CompactNodeTitle = "->", Keywords = "cast convert int32", BlueprintAutocast))
	static int32 ToInt32(int32 Value) { return (int32)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToBool (uint8)", CompactNodeTitle = "->", Keywords = "cast convert bool", BlueprintAutocast))
	static bool ToBool(uint8 Value) { return (bool)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToString (uint8)", CompactNodeTitle = "->", Keywords = "cast convert fstring", BlueprintAutocast))
	static FString ToString(uint8 Value) { return *FString::Printf(TEXT("%d"), Value); }

	UFUNCTION(BlueprintPure, Category = "UECommon|uInt8", meta = (DisplayName = "ToName (uint8)", CompactNodeTitle = "->", Keywords = "cast convert fname", BlueprintAutocast))
	static FName ToName(uint8 Value) { return FName(*FString::Printf(TEXT("%d"), Value)); }

protected:
private:
};
