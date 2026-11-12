// GFxUI_0e50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00e51d10
void UGFxFSCmdHandler_Kismet::execFSCommand(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UGFxMovie, Movie);
    P_GET_STR(Cmd);
    P_GET_STR(Arg);
    P_FINISH;
    *(UBOOL*)Result = FSCommand(Movie, Cmd, Arg);
}
