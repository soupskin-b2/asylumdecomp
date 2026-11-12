// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* The Z range the bounds start from (values not known here; presumably -/+ a big number). */
extern FLOAT g_01f29700;
extern FLOAT g_01f296fc;
struct UFracturedStaticMeshComponent_ : public UFracturedStaticMeshComponent
{
    void sub_007b1890(); /* 0x007b1890 */
};

// @baa 0x007b1890
/* Unnamed in the kit: for a non-movable owner, recompute FragmentBoundsMaxZ/MinZ from the visible fragments' boxes. */
void UFracturedStaticMeshComponent_::sub_007b1890()
{
    if (Owner != NULL && !Owner->bMovable)
    {
        FragmentBoundsMaxZ = g_01f29700;
        FragmentBoundsMinZ = g_01f296fc;
        for (INT i = 0; i < GetNumFragments(); i++)
        {
            if (IsFragmentVisible(i))
            {
                FBox Box = GetFragmentBox(i);
                FragmentBoundsMaxZ = Max(FragmentBoundsMaxZ, Box.Max.Z);
                FragmentBoundsMinZ = Min(FragmentBoundsMinZ, Box.Min.Z);
            }
        }
    }
}
