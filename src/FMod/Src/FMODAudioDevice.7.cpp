// FMODAudioDevice.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00e80e20
/* UFMODAudioDevice's destructor (DECLARE_CLASS's inline ~UFMODAudioDevice: ConditionalDestroy,
 * then the C++-only members' destructors, then ~UAudioDevice). */
void Destroy(UFMODAudioDevice* Device)
{
    Device->UFMODAudioDevice::~UFMODAudioDevice();
}
