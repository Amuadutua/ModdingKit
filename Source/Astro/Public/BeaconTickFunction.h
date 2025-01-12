#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "BeaconTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FBeaconTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ASTRO_API FBeaconTickFunction();
};

template<>
struct TStructOpsTypeTraits<FBeaconTickFunction> : public TStructOpsTypeTraitsBase2<FBeaconTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

