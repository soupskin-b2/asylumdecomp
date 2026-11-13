// Engine_0760000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

/* UnMath.h */
#define SMALL_NUMBER	(1.e-8f)

// @baa 0x00764a50
/* UnActor.cpp: has every mesh component prestream its textures for Seconds (0 = indefinitely, i.e. 30 days). */
void AActor::PrestreamTextures(FLOAT Seconds, UBOOL bEnableStreaming)
{
	// This only handles non-location-based streaming.
	FLOAT Duration = 0.0;
	if (bEnableStreaming)
	{
		// A Seconds==0.0f, it means infinite (e.g. 30 days)
		Duration = appAbs(Seconds) < SMALL_NUMBER ? (60.0f * 60.0f * 24.0f * 30.0f) : Seconds;
	}

	// Iterate over all components of that actor
	for (INT ComponentIndex = 0; ComponentIndex < AllComponents.Num(); ComponentIndex++)
	{
		UActorComponent* Component = AllComponents(ComponentIndex);
		UMeshComponent* MeshComponent = Cast<UMeshComponent>(Component);
		if (MeshComponent)
		{
			MeshComponent->PrestreamTextures(Duration, FALSE);
		}
	}
}
