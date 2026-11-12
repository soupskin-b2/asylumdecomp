// WinClient.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00ec0160
/* UWindowsClient's destructor (DECLARE_CLASS's inline one: ConditionalDestroy, then the members' and
 * bases' destructors). */
void Destroy(UWindowsClient* Object)
{
    Object->UWindowsClient::~UWindowsClient();
}
