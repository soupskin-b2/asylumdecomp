// Engine_0960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: the mesh-side handler (0x0095f040; its name isn't known) isn't declared. */
struct USkeletalMesh_ : public USkeletalMesh
{
	void sub_0095f040(INT); /* 0x0095f040 */
};

// @baa 0x00968200
/* Slot 0x248 (unnamed in the kit): forwards to the skeletal mesh. */
void USkeletalMeshComponent::vf_248(INT Param)
{
	if (SkeletalMesh)
	{
		((USkeletalMesh_*)SkeletalMesh)->sub_0095f040(Param);
	}
}
