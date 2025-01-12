#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameplayTask.h"
#include "AstroInterpolateItemTask.generated.h"

class APhysicalItem;
class UAstroAction;
class UAstroInterpolateItemTask;
class UCurveFloat;

UCLASS(Blueprintable)
class ASTRO_API UAstroInterpolateItemTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UAstroInterpolateItemTask();
    UFUNCTION(BlueprintCallable)
    void OnTargetItemMotionStateChanged();
    
    UFUNCTION(BlueprintCallable)
    static UAstroInterpolateItemTask* CreateAstroInterpolateItemTask(UAstroAction* OwningAction, FName TaskInstanceName, APhysicalItem* ItemToInterpolate, FTransform TargetTransform, float InterpolationDuration, bool bMaintainAttachmentDuringMovement, UCurveFloat* OptionalInterpolationProgressCurve);
    
};

