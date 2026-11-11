// Core_0540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// FExec's virtual interface (Classes.h only knows its slot 0).

// @baa 0x00544680
UBOOL FExec::Exec(const TCHAR* Cmd, FOutputDevice& Ar)
{
    PURE_VIRTUAL(FExec::Exec, return 0;);
}
