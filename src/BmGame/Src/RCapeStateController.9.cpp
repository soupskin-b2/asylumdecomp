// RCapeStateController.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* The project's existing name for the cape physics object behind CapePhysicsRef (0x016af420 is bound as
 * S::sub_016af420). */
struct S
{
	UINT sub_016af420();
};

#define CAPESTATECONTROLLER_FILE "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp"
struct URCapeStateController_ : public URCapeStateController
{
	/* GetNumCapeBones (out of line at 0x016ceca0, inlined here). */
	FORCEINLINE UINT GetNumCapeBones()
	{
#line 390 CAPESTATECONTROLLER_FILE
		check(CapePhysicsRef.Dummy != NULL);
		return ((S*)CapePhysicsRef.Dummy)->sub_016af420();
	}
	void sub_016e7050(UINT BoneIndex, FCapeStateData* pCapeStateData);
	void sub_016db6c0(UINT BoneIndex, FCapeStateData* pCapeStateData);
	void sub_016e7490(UINT BoneIndex, FCapeStateData* pCapeStateData);
};

// @baa 0x016e7490
/* Applies a cape state to one cape bone, in two steps. */
void URCapeStateController_::sub_016e7490(UINT boneIndex, FCapeStateData* pCapeStateData)
{
#line 408 CAPESTATECONTROLLER_FILE
	check(boneIndex < GetNumCapeBones());
	check(pCapeStateData != NULL);
	sub_016e7050(boneIndex, pCapeStateData);
	sub_016db6c0(boneIndex, pCapeStateData);
}

#line 40 "candidate.cpp"

struct URCapeStateController__016e7520 : public URCapeStateController
{
	/* GetNumCapeBones (out of line at 0x016ceca0, inlined here). */
	FORCEINLINE UINT GetNumCapeBones()
	{
#line 390 CAPESTATECONTROLLER_FILE
		check(CapePhysicsRef.Dummy != NULL);
		return ((S*)CapePhysicsRef.Dummy)->sub_016af420();
	}
	void sub_016e7050(UINT BoneIndex, FCapeStateData* pCapeStateData);
	void sub_016db6c0(UINT BoneIndex, FCapeStateData* pCapeStateData);
	void sub_016e7490(UINT BoneIndex, FCapeStateData* pCapeStateData);
	FCapeStateData* sub_016deb60(FName StateName);
	void sub_016e7520(FName StateName);
};

// @baa 0x016e7520
/* Applies the named cape state to every cape bone. */
void URCapeStateController__016e7520::sub_016e7520(FName StateName)
{
	FCapeStateData* pThisCapeStateData = sub_016deb60(StateName);
#line 397 CAPESTATECONTROLLER_FILE
	check(pThisCapeStateData != NULL);
	const UINT NumCapeBones = GetNumCapeBones();
	for (UINT BoneIndex = 0; BoneIndex < NumCapeBones; BoneIndex++)
	{
		sub_016e7490(BoneIndex, pThisCapeStateData);
	}
}

#line 72 "candidate.cpp"
