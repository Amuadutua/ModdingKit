#pragma once
#include "CoreMinimal.h"
#include "AstroEntityComponent.h"
#include "AstroDatumRef.h"
#include "ResearchSubjectComponent.generated.h"

class UResearchSubjectDefinition;

USTRUCT(BlueprintType)
struct FResearchSubjectComponent : public FAstroEntityComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UResearchSubjectDefinition> ResearchSubjectDefinition;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentResearchPhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    float CurrentResearchPhaseSecondsElapsed;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    float ResearchStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    float ExpirationTimestamp;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
    FAstroDatumRef ResearcherRef;
    
    ASTRO_API FResearchSubjectComponent();
};
