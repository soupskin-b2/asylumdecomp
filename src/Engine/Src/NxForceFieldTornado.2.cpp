// NxForceFieldTornado.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c537c;
	/* ENGINE_GetDrawComponent */
extern FName g_026c42d8;
	/* ENGINE_FillBySphere */
extern FName g_026c3df4;
	/* ENGINE_FillByCylinder */
/* Kit gap: TArray::AddItem isn't declared; this build calls TArray<UActorComponent*>::AddItem out of line (0x0075eeb0). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

/* UForceFieldShape's script events (generated glue, EngineClasses.h) */
struct UForceFieldShape_ : public UForceFieldShape
{
	class UPrimitiveComponent* eventGetDrawComponent()
	{
		struct ForceFieldShape_eventGetDrawComponent_Parms
		{
			class UPrimitiveComponent* ReturnValue;
		} Parms;
		Parms.ReturnValue = NULL;
		ProcessEvent(FindFunctionChecked(g_026c537c), &Parms);
		return Parms.ReturnValue;
	}
	void eventFillBySphere(FLOAT Radius)
	{
		struct ForceFieldShape_eventFillBySphere_Parms
		{
			FLOAT Radius;
		} Parms;
		Parms.Radius = Radius;
		ProcessEvent(FindFunctionChecked(g_026c42d8), &Parms);
	}
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

// @baa 0x00a42c90
void ANxForceFieldTornado::PostLoad()
{
	Super::PostLoad();

	if (Shape)
	{
		DrawComponent = ((UForceFieldShape_*)Shape)->eventGetDrawComponent();
		((UForceFieldShape_*)Shape)->eventFillByCylinder(ForceRadius, ForceTopRadius, ForceHeight, HeightOffset);
		if (DrawComponent)
		{
			((TArray_<UActorComponent*>&)Components).AddItem(DrawComponent);
		}
	}
}
