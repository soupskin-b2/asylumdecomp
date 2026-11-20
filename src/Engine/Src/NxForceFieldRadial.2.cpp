// NxForceFieldRadial.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3df4;
	/* ENGINE_FillByCylinder */
/* out of line in the exe (0075eeb0) */
extern template INT TArray<UActorComponent*>::AddItem(UActorComponent* const& Item);

/* UForceFieldShape's script events (generated glue, EngineClasses.h) */
struct UForceFieldShape_ : public UForceFieldShape
{
	void eventFillByCylinder(FLOAT BottomRadius, FLOAT TopRadius, FLOAT Height, FLOAT HeightOffset)
	{
		struct ForceFieldShape_eventFillByCylinder_Parms
		{
			FLOAT BottomRadius;
			FLOAT TopRadius;
			FLOAT Height;
			FLOAT HeightOffset;
		} Parms;
		Parms.BottomRadius = BottomRadius;
		Parms.TopRadius = TopRadius;
		Parms.Height = Height;
		Parms.HeightOffset = HeightOffset;
		ProcessEvent(FindFunctionChecked(g_026c3df4), &Parms);
	}
};

// @baa 0x00a42830
void ANxForceFieldRadial::PostLoad()
{
	Super::PostLoad();

	if (Shape)
	{
		DrawComponent = ((UForceFieldShape_*)Shape)->eventGetDrawComponent();
		((UForceFieldShape_*)Shape)->eventFillBySphere(ForceRadius);
		if (DrawComponent)
		{
			Components.AddItem(DrawComponent);
		}
	}
}
