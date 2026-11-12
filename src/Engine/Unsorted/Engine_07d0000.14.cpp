// Engine_07d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* PhysX 2.8 NxPhysicsSDK (public NxPhysicsSDK.h order: protected virtual destructor, release, setParameter) and
 * UE3's GNovodexSDK; neither is in the kit. */
enum NxParameter { NX_PENALTY_FORCE = 0, NX_SKIN_WIDTH = 1 };

class NxPhysicsSDK
{
protected:
	virtual ~NxPhysicsSDK() {}
public:
	virtual void release() = 0;
	virtual bool setParameter(NxParameter paramEnum, float paramValue) = 0;
};

extern NxPhysicsSDK* g_026b63dc;
#define GNovodexSDK g_026b63dc
// @baa 0x007da1b0
/* UnLevel.cpp */
void AWorldInfo::PostLoad()
{
	Super::PostLoad();

	// The world info always blocks actors.
	bBlockActors = TRUE;

	// Clamp desaturation to 0..1
	DefaultPostProcessSettings.Scene_Desaturation = Clamp(DefaultPostProcessSettings.Scene_Desaturation, 0.f, 1.f);

	// Set the default skin width for the physics SDK
	if (GNovodexSDK)
	{
		GNovodexSDK->setParameter(NX_SKIN_WIDTH, DefaultSkinWidth);
	}
}
