// LightComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* ULightComponent::GetPosition (0x15c in the vtable) is a pure virtual that gives the light's
 * position as a 4-component vector: a point (w = 1) or a direction (w = 0). */
struct ULightComponent_ : public ULightComponent
{
	void GetPosition(FVector4& OutPosition);
};

// @baa 0x006974f0
void ULightComponent_::GetPosition( FVector4& OutPosition ) PURE_VIRTUAL(ULightComponent::GetPosition, OutPosition.X = 0.f; OutPosition.Y = 0.f; OutPosition.Z = 0.f; OutPosition.W = 1.f;);

// @baa 0x006ad3e0
void ULightComponent::execGetDirection(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FVector Direction;
	Direction.X = WorldToLight.XPlane.Z;
	Direction.Y = WorldToLight.YPlane.Z;
	Direction.Z = WorldToLight.ZPlane.Z;
	*(FVector*)Result = Direction;
}

// @baa 0x006ad360
void ULightComponent::execGetOrigin(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FVector Origin;
	Origin.X = LightToWorld.WPlane.X;
	Origin.Y = LightToWorld.WPlane.Y;
	Origin.Z = LightToWorld.WPlane.Z;
	*(FVector*)Result = Origin;
}

struct ULightComponent__006b4b20 : public ULightComponent
{
	void BeginDeferredReattach();
	void SetEnabled( UBOOL bSetEnabled )
	{
		if ( bEnabled != bSetEnabled )
		{
			bEnabled = bSetEnabled;
			BeginDeferredReattach();
		}
	}
	void execSetEnabled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x006b4b20
void ULightComponent__006b4b20::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bSetEnabled);
	P_FINISH;
	SetEnabled(bSetEnabled);
}
