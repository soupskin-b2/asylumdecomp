// Engine_0a00000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateClothParams();
	void execUpdateClothParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a06690
void USkeletalMeshComponent_::execUpdateClothParams( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateClothParams();
}
