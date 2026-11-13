// RBmPawnSpawner.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gaps: Cast<URCharacterRandom> (out of line, 0x015f7190), the GetRandomType script event glue
 * (0x015d94e0) and UMeshComponent::SetMaterial (0x006ea640) aren't declared. */
template<class T> T* Cast(UObject* Src);


// @baa 0x015fa180
/* Applies the preset character's meshes, physics asset, x-ray skeleton and override materials to the body,
 * then clears the preset. */
void ARDeadBodyBase::PostEditChange(UProperty* PropertyThatChanged)
{
    if (PresetCharacterType)
    {
        static INT RandomIndex = 0;

        HeadMesh->Materials.Empty();
        SkeletalMeshComponent->Materials.Empty();

        URCharacter* Character = (URCharacter*)PresetCharacterType->GetDefaultObject();
        if (Character->bIsRandom)
        {
            UClass* RandomType = ((URCharacterRandom*)Cast<URCharacterRandom>(Character))->eventGetRandomType(RandomIndex++);
            Character = (URCharacter*)RandomType->GetDefaultObject(FALSE);
        }

        SkeletalMeshComponent->SkeletalMesh = Character->BodySkeletalMesh;
        SkeletalMeshComponent->PhysicsAsset = Character->BodyPhysicsAsset;
        if (Character->bUseHeadMesh)
        {
            HeadMesh->SkeletalMesh = Character->HeadSkeletalMesh;
        }
        else
        {
            HeadMesh->SkeletalMesh = NULL;
        }

        if (Character->XraySkeleton)
        {
            XraySkeleton = Character->XraySkeleton;
        }

        if (Character->HeadOverrideMaterial)
        {
            if (Character->bUseHeadMesh)
            {
                HeadMesh->SetMaterial(Character->HeadOverrideMaterialSlotIndex, Character->HeadOverrideMaterial);
            }
            else
            {
                SkeletalMeshComponent->SetMaterial(Character->HeadOverrideMaterialSlotIndex, Character->HeadOverrideMaterial);
            }
        }
        if (Character->Head2OverrideMaterial)
        {
            if (Character->bUseHeadMesh)
            {
                HeadMesh->SetMaterial(Character->Head2OverrideMaterialSlotIndex, Character->Head2OverrideMaterial);
            }
            else
            {
                SkeletalMeshComponent->SetMaterial(Character->Head2OverrideMaterialSlotIndex, Character->Head2OverrideMaterial);
            }
        }
        if (Character->BodyOverrideMaterial)
        {
            SkeletalMeshComponent->SetMaterial(Character->BodyOverrideMaterialSlotIndex, Character->BodyOverrideMaterial);
        }
    }
    PresetCharacterType = NULL;
    Super::PostEditChange(PropertyThatChanged);
}
