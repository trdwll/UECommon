// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Int64Utils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UInt64Utils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToFloat (Int64)", CompactNodeTitle = "->", Keywords = "cast convert float", BlueprintAutocast))
	static float ToFloat(int64 Value) { return (float)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToInt32 (Int64)", CompactNodeTitle = "->", Keywords = "cast convert int32", BlueprintAutocast))
	static int32 ToInt32(int64 Value) { return (int32)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToUint8 (Int64)", CompactNodeTitle = "->", Keywords = "cast convert uint8", BlueprintAutocast))
	static uint8 ToUint8(int64 Value) { return (uint8)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToBool (Int64)", CompactNodeTitle = "->", Keywords = "cast convert bool", BlueprintAutocast))
	static bool ToBool(int64 Value) { return (bool)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToString (Int64)", CompactNodeTitle = "->", Keywords = "cast convert fstring", BlueprintAutocast))
	static FString ToString(int64 Value) { return *FString::Printf(TEXT("%lld"), Value); }

	UFUNCTION(BlueprintPure, Category = "UECommon|Int64", meta = (DisplayName = "ToName (Int64)", CompactNodeTitle = "->", Keywords = "cast convert fname", BlueprintAutocast))
	static FName ToName(int64 Value) { return FName(*FString::Printf(TEXT("%lld"), Value)); }

protected:
private:
};
