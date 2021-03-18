// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "VectorUtils.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UFVectorUtils : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "UECommon|Vector", meta = (DisplayName = "ToVec2D (FVector)", CompactNodeTitle = "->", Keywords = "cast convert vector", BlueprintAutocast))
	static FVector2D ToVec2D(const FVector& Value) { return {Value.X, Value.Y}; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Vector", meta = (DisplayName = "ToIntVec (FVector)", CompactNodeTitle = "->", Keywords = "cast convert vector", BlueprintAutocast))
	static FIntVector ToIntVec(const FVector& Value) { return {(int32)Value.X, (int32)Value.Y, (int32)Value.Z}; }

	UFUNCTION(BlueprintPure, Category = "UECommon|Vector", meta = (DisplayName = "ToRotator (FVector)", CompactNodeTitle = "->", Keywords = "cast convert vector", BlueprintAutocast))
	static FRotator ToRotator(const FVector& Value) { return {Value.X, Value.Y, Value.Z}; }

protected:
private:
};
