// BmGame_1700000.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARGrapplePoint_ : public ARGrapplePoint
{
	void RegisterGrapplePoint();
	void execRegisterGrapplePoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017011c0
void ARGrapplePoint_::execRegisterGrapplePoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RegisterGrapplePoint();
}

struct ARShimmyEdgeMarker_ : public ARShimmyEdgeMarker
{
	void SetupEndPoints();
	void execSetupEndPoints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701220
void ARShimmyEdgeMarker_::execSetupEndPoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SetupEndPoints();
}

struct ARShimmyEdgeMarker__01701250 : public ARShimmyEdgeMarker
{
	void RegisterShimmyEdgeMarker();
	void execRegisterShimmyEdgeMarker(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701250
void ARShimmyEdgeMarker__01701250::execRegisterShimmyEdgeMarker( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RegisterShimmyEdgeMarker();
}

struct URCapeRenderingComponent_ : public URCapeRenderingComponent
{
	void HandleDebugLineDrawing();
	void execHandleDebugLineDrawing(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702eb0
void URCapeRenderingComponent_::execHandleDebugLineDrawing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	HandleDebugLineDrawing();
}

struct ARBMWeaponStunStickBase_ : public ARBMWeaponStunStickBase
{
	UBOOL IsOn();
	void execIsOn(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01703d10
void ARBMWeaponStunStickBase_::execIsOn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsOn();
}

struct ARGrappleGun_ : public ARGrappleGun
{
	void DrawGrapplePointDebug();
	void execDrawGrapplePointDebug(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01707740
void ARGrappleGun_::execDrawGrapplePointDebug( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DrawGrapplePointDebug();
}

struct ARGrappleGun__01707770 : public ARGrappleGun
{
	void FindEscapeVantagePoint();
	void execFindEscapeVantagePoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01707770
void ARGrappleGun__01707770::execFindEscapeVantagePoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FindEscapeVantagePoint();
}

struct ARGrappleGun__017077a0 : public ARGrappleGun
{
	INT GetNumAvailableGrapplePoints();
	void execGetNumAvailableGrapplePoints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017077a0
void ARGrappleGun__017077a0::execGetNumAvailableGrapplePoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetNumAvailableGrapplePoints();
}

struct ARHarpoonGun_ : public ARHarpoonGun
{
	void HarpoonFired();
	void execHarpoonFired(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017077e0
void ARHarpoonGun_::execHarpoonFired( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	HarpoonFired();
}

struct ARBatarangProjectile_ : public ARBatarangProjectile
{
	void StartedFlightPath();
	void execStartedFlightPath(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01708160
void ARBatarangProjectile_::execStartedFlightPath( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StartedFlightPath();
}

struct ARBatarangProjectile_Controllable_ : public ARBatarangProjectile_Controllable
{
	void ExtraHitCheck();
	void execExtraHitCheck(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01708200
void ARBatarangProjectile_Controllable_::execExtraHitCheck( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ExtraHitCheck();
}

struct ARSilentPredatorCamera_ : public ARSilentPredatorCamera
{
	UBOOL OutOfPredatorView();
	void execOutOfPredatorView(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0170a3a0
void ARSilentPredatorCamera_::execOutOfPredatorView( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = OutOfPredatorView();
}
