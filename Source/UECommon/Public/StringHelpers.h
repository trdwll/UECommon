// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "StringHelpers.generated.h"

/**
 *
 */
UCLASS()
class UECOMMON_API UStringHelpers : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UECommon|StringHelpers")
	static FString Base64Encode(const FString& Source)
	{
		TArray<uint8> ByteArray;
		const FTCHARToUTF8 StringSrc = FTCHARToUTF8(Source.GetCharArray().GetData());
		ByteArray.Append((uint8*)StringSrc.Get(), StringSrc.Length());

		return FBase64::Encode(ByteArray);
	}

	UFUNCTION(BlueprintCallable, Category = "UECommon|StringHelpers")
	static FString Base64Decode(const FString& Source)
	{
		TArray<uint8> ByteArray;
		const bool bSuccess = FBase64::Decode(Source, ByteArray);
		const FUTF8ToTCHAR StringSrc = FUTF8ToTCHAR((const ANSICHAR*)ByteArray.GetData(), ByteArray.Num());

		FString Dest;
		Dest.AppendChars(StringSrc.Get(), StringSrc.Length());

		return Dest;
	}

protected:
private:
};
