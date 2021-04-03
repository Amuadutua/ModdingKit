// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControlSymbol.generated.h"

/**
 * 
 */
UCLASS()
class ASTRO_API UControlSymbol : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = "true"))
		FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = "true"))
		FText AllCapsName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = "true"))
		FText TooltipSubtitle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = "true"))
		FText Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString SoundEvent;

	// This seems to be completely unused, you can probably just ignore it
	UStaticMesh* IconMesh;
};
