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
// @baa 0x00a42830
void ANxForceFieldRadial::PostLoad()
{
	Super::PostLoad();

	if (Shape)
	{
		DrawComponent = Shape->eventGetDrawComponent();
		Shape->eventFillBySphere(ForceRadius);
		if (DrawComponent)
		{
			Components.AddItem(DrawComponent);
		}
	}
}
