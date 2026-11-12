// BmGame_1660000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0166d6d0
FVector ARPawnCombat::GetHeading()
{
	return FVector(appCos(Rot), appSin(Rot), 0.f);
}
