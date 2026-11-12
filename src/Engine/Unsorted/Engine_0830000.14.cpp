// Engine_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Unnamed ANavigationPoint helper (UE3-style UpdateMaxPathSize): recomputes MaxPathSize from the enabled reach specs. */
struct ANavigationPoint_ : public ANavigationPoint
{
	void sub_0083fc20();
};

// @baa 0x0083fc20
void ANavigationPoint_::sub_0083fc20()
{
	MaxPathSize.Radius = MaxPathSize.Height = 0.f;
	for (INT Idx = 0; Idx < PathList.Num(); Idx++)
	{
		if (!PathList(Idx)->bDisabled)
		{
			MaxPathSize.Radius = Max<FLOAT>(MaxPathSize.Radius, PathList(Idx)->CollisionRadius);
			MaxPathSize.Height = Max<FLOAT>(MaxPathSize.Height, PathList(Idx)->CollisionHeight);
		}
	}
}
