// UnActor.cpp: 2 functions
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
