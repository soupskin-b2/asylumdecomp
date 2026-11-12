// GFxUIMovie.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Implement.h"

/* pCaptureKeys points at a TSet<FName> (sparse array + hash at 0x34/0x38, 0x3c bytes),
 * whose type the kit lacks; its destructor is out of line at 00693af0. */
struct FCaptureKeySet {
    BYTE Pad[0x3c];
    ~FCaptureKeySet(); /* 0x00693af0 */
};

// @baa 0x00e6a420
void UGFxMovie::execClearCaptureKeys(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    delete (FCaptureKeySet*)pCaptureKeys.Dummy;
    pCaptureKeys.Dummy = 0;
}
