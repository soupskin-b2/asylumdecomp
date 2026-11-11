// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdatePermanentFixing();
	void execUpdatePermanentFixing(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00940310
void USkeletalMeshComponent_::execUpdatePermanentFixing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePermanentFixing();
}
