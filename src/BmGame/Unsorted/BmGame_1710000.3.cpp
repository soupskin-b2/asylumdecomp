// BmGame_1710000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0171a200
void ARPatrolPoint::execUpdateDisplayLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDisplayLines( 0 );
}

// @baa 0x0171a240
void ARTunnelGrateBase::execUpdateCapeCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	UBOOL bDisabled = (bCachedDisableCapeCollision || bCachedTimedDisableCapeCollision) ? 1 : 0;
	if (bDisabled != bCurrentCollisionDisabledState)
	{
		((UPrimitiveComponent*)CollisionComponent)->sub_009ff970(0xf, bDisabled ? 0 : 1);
		bCurrentCollisionDisabledState = bDisabled;
	}
}

/* ARTunnelGrateBase::GetFinalGrateRotAndTrans (0x1716310) isn't declared in the kit. */

// @baa 0x0171a2b0
void ARTunnelGrateBase::execGetFinalGrateRotAndTrans(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FRotator, GrateRot);
    P_GET_STRUCT_REF(FVector, GrateTrans);
    P_FINISH;
    ((ARTunnelGrateBase*)this)->GetFinalGrateRotAndTrans(GrateRot, GrateTrans);
}

// @baa 0x0171ba20
void ARGameInfo::execSetTrioviz(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Command);
	P_FINISH;
	SetTrioviz(Command);
}

// @baa 0x0171bad0
void ARGameInfo::execGetGameTimePlayedString(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetGameTimePlayedString();
}
