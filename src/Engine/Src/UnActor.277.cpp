// UnActor.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00784e60
bool ADynamicBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap: UModel::BuildBound() (0x0081ced0) isn't declared. */
struct UModel_ : public UModel
{
    void BuildBound(); /* 0x0081ced0 */
};

// @baa 0x00784510
/* Editing a brush rebuilds its model's bounds. */
void ABrush::PostEditChange(UProperty* PropertyThatChanged)
{
    if (Brush)
    {
        ((UModel_*)Brush)->BuildBound();
    }
    Super::PostEditChange(PropertyThatChanged);
}

/* Unnamed in the kit: UE3's AActor::GetTopOwner() (the last actor up the Owner chain). */
struct AActor_ : public AActor
{
    AActor* sub_0068f1e0();
};

// @baa 0x0068f1e0
AActor* AActor_::sub_0068f1e0()
{
    AActor* Top;
    for (Top = this; Top->Owner; Top = Top->Owner);
    return Top;
}

/* Kit gap: UObject::HasAnyFlags and RF_PendingKill (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_PendingKill ((QWORD)0x2000000000000000)
struct UObject_ : public UObject
{
    FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
};

// @baa 0x0068ee40
/* AActor slot 0x38 (kit vf_038): UE3's AActor::IsPendingKill(): destroyed or marked for killing. */
UBOOL AActor::IsPendingKill()
{
    return bDeleteMe || ((UObject_*)this)->HasAnyFlags(RF_PendingKill);
}
