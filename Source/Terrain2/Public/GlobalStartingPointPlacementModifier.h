#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GlobalSurfaceActorPlacementModifier.h"
#include "GlobalStartingPointPlacementModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TERRAIN2_API UGlobalStartingPointPlacementModifier : public UGlobalSurfaceActorPlacementModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreferencePoint;
    
    UGlobalStartingPointPlacementModifier();
};

