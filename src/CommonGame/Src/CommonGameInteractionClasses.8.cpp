// CommonGameInteractionClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0150d010
void URInteractionManager::execRegisterNewActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URInteractionComponent, NewActor);
    P_FINISH;
    vf_114((INT)NewActor);
}

// @baa 0x0150d080
void URInteractionManager::execUnRegisterActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URInteractionComponent, OldActor);
    P_FINISH;
    vf_118((INT)OldActor);
}
