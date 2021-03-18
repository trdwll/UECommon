// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "BoolUtils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UBoolUtils : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToFloat (bool)", CompactNodeTitle = "->", Keywords = "cast convert float", BlueprintAutocast))
	static float ToFloat(bool Value) { return (float)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToInt64 (bool)", CompactNodeTitle = "->", Keywords = "cast convert int64", BlueprintAutocast))
	static int64 TouInt8(bool Value) { return (int64)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToInt32 (bool)", CompactNodeTitle = "->", Keywords = "cast convert int32", BlueprintAutocast))
	static int32 ToInt32(bool Value) { return (int32)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToBool (bool)", CompactNodeTitle = "->", Keywords = "cast convert uint8", BlueprintAutocast))
	static uint8 ToBool(bool Value) { return (uint8)Value; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToString (bool)", CompactNodeTitle = "->", Keywords = "cast convert fstring", BlueprintAutocast))
	static FString ToString(bool Value) { return *FString::Printf(TEXT("%d"), Value); }

	UFUNCTION(BlueprintPure, Category = "UECommon|Bool", meta = (DisplayName = "ToName (bool)", CompactNodeTitle = "->", Keywords = "cast convert fname", BlueprintAutocast))
	static FName ToName(bool Value) { return FName(*FString::Printf(TEXT("%d"), Value)); }

protected:
private:
};
