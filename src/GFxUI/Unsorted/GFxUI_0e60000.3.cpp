// GFxUI_0e60000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00e6be10
/* UGFxFSCmdHandler_Kismet's destructor (DECLARE_CLASS's inline one: ConditionalDestroy, then
 * the Events map's destructor, then ~UGFxFSCmdHandler). */
void Destroy(UGFxFSCmdHandler_Kismet* Handler)
{
    Handler->UGFxFSCmdHandler_Kismet::~UGFxFSCmdHandler_Kismet();
}
