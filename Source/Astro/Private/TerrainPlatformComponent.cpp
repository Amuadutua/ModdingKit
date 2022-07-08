#include "TerrainPlatformComponent.h"

class AActor;

void UTerrainPlatformComponent::OwnerDestroyed(AActor* DestroyedActor) {
}

UTerrainPlatformComponent::UTerrainPlatformComponent() {
    this->RemoveTopHemisphere = true;
    this->Radius = 400.00f;
    this->SoftEdgeStartRadius = 0.00f;
    this->ExtendedMaterialOverrideRadius = 0.00f;
    this->Intensity = 1.00f;
    this->UseOverrideMaterial = false;
    this->Enabled = true;
    this->m_planet = NULL;
}
