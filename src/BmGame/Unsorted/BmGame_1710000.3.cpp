// BmGame_1710000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARPatrolPoint_ : public ARPatrolPoint
{
	void UpdateDisplayLines(INT bHide);
	void execUpdateDisplayLines(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0171a200
void ARPatrolPoint_::execUpdateDisplayLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDisplayLines( 0 );
}

struct UPrimitiveComponent_ : public UPrimitiveComponent
{
	void sub_009ff970(INT, INT);
};

// @baa 0x0171a240
void ARTunnelGrateBase::execUpdateCapeCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	UBOOL bDisabled = (bCachedDisableCapeCollision || bCachedTimedDisableCapeCollision) ? 1 : 0;
	if (bDisabled != bCurrentCollisionDisabledState)
	{
		((UPrimitiveComponent_*)CollisionComponent)->sub_009ff970(0xf, bDisabled ? 0 : 1);
		bCurrentCollisionDisabledState = bDisabled;
	}
}
