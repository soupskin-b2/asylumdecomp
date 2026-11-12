// RBmBehaviourClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x015debc0
/* Slot 0x1a8 (unnamed in the kit): the behaviour's latent sleep; 4000 is the latent action it waits on (the
 * native's index; its EPOLL_ name isn't known). */
void URBMBehaviour::vf_1a8(FLOAT Seconds)
{
	StateFrame->LatentAction = 4000;
	LatentFloat = Seconds;
}
