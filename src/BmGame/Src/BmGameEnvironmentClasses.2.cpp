// BmGameEnvironmentClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006837e0(void);
// @baa 0x017352d0
undefined4 ULensFlare::sub_017352d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0171a890
/* Caches whether cape collision should be off for the grate; when that (or the timed disable) changes the state,
 * the collision component stops or starts colliding with channel 15 (the cape). */
void ARTunnelGrateBase::SetDisableCapeCollision(UBOOL bDisable)
{
	bCachedDisableCapeCollision = bDisable;
	const UBOOL bDisabled = (bCachedDisableCapeCollision || bCachedTimedDisableCapeCollision) ? TRUE : FALSE;
	if (bDisabled != bCurrentCollisionDisabledState)
	{
		CollisionComponent->sub_009ff970(15, !bDisabled);
		bCurrentCollisionDisabledState = bDisabled;
	}
}
