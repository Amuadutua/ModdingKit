#include "RailComponent.h"

class AActor;
class APhysicalItem;

bool URailComponent::SendItem(APhysicalItem* Item, AActor* Source) {
    return false;
}

void URailComponent::MulticastSendRail_Implementation(bool Immediate) {
}

URailComponent::URailComponent() {
    this->MoveSpeed = 400.00f;
    this->OwnerConnection = NULL;
}

