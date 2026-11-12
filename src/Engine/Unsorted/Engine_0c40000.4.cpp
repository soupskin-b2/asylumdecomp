// Engine_0c40000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* The original calls every member destructor out of line (and ConditionalDestroy), so nothing from the header is inlined here. */
#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00c45500
/* ~USpeechRecognition is DECLARE_CLASS's inline virtual destructor; this qualified call emits it. */
void DestroyUSpeechRecognition(USpeechRecognition* Obj)
{
    Obj->USpeechRecognition::~USpeechRecognition();
}
