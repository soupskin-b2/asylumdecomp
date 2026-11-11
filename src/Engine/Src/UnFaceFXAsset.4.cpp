// UnFaceFXAsset.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UFaceFXAsset_ : public UFaceFXAsset
{
	void sub_00bf70e0(UFaceFXAnimSet*);
};

// @baa 0x00c8c910
void UFaceFXAsset::execMountFaceFXAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UFaceFXAnimSet, AnimSet);
	P_FINISH;
	((UFaceFXAsset_*)this)->sub_00bf70e0(AnimSet);
}

struct UFaceFXAsset__00c8c970 : public UFaceFXAsset
{
	void sub_00bf71b0(UFaceFXAnimSet*);
};

// @baa 0x00c8c970
void UFaceFXAsset::execUnmountFaceFXAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UFaceFXAnimSet, AnimSet);
	P_FINISH;
	((UFaceFXAsset__00c8c970*)this)->sub_00bf71b0(AnimSet);
}
