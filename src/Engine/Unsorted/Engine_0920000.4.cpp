// Engine_0920000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Array.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void sub_00765d00();
};

// @baa 0x0092ea10
void USkeletalMeshComponent::execClearAdditionalMaterialsForTextureStreaming(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AdditionalMaterialsForTextureStreaming.Empty();
	((USkeletalMeshComponent_*)this)->sub_00765d00();
}
