// LensFlare.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00bacd70
/* UE3's ULensFlareComponent::SetTemplate (named sub_00bacd70 in the kit): takes the new flare's cone and radius
 * settings, activates if set to auto-activate, and reattaches. */
void ULensFlareComponent::SetTemplate(ULensFlare* NewTemplate)
{
	if (NewTemplate != Template)
	{
		Template = NewTemplate;
		if (Template)
		{
			OuterCone = Template->OuterCone;
			InnerCone = Template->InnerCone;
			ConeFudgeFactor = Template->ConeFudgeFactor;
			Radius = Template->Radius;
			if (bAutoActivate)
			{
				bIsActive = TRUE;
			}
		}
		BeginDeferredReattach();
	}
}
