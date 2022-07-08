#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SelectionIndicatorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class ASTRO_API USelectionIndicatorComponent : public UActorComponent
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = true))
    AActor *OtherActor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool IgnoreSelf;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool Indicate;

    USelectionIndicatorComponent();
};