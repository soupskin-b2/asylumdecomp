// Engine_0960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: the mesh-side handler (0x0095f040; its name isn't known) isn't declared. */

// @baa 0x00968200
/* Slot 0x248 (unnamed in the kit): forwards to the skeletal mesh. */
void USkeletalMeshComponent::vf_248(INT Param)
{
	if (SkeletalMesh)
	{
		SkeletalMesh->sub_0095f040(Param);
	}
}
