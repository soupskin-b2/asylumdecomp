// UnAudioNodes.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* The original calls every member destructor out of line (and ConditionalDestroy), so nothing from the header is inlined here. */
#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00cdbc30
/* ~USoundNodeWave is DECLARE_CLASS's inline virtual destructor; this qualified call emits it. */
void DestroyUSoundNodeWave(USoundNodeWave* Obj)
{
    Obj->USoundNodeWave::~USoundNodeWave();
}
