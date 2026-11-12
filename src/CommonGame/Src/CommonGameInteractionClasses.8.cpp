// CommonGameInteractionClasses.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0150d010
void URInteractionManager::execRegisterNewActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URInteractionComponent, NewActor);
    P_FINISH;
    RegisterNewActor(NewActor);
}

// @baa 0x0150d080
void URInteractionManager::execUnRegisterActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URInteractionComponent, OldActor);
    P_FINISH;
    UnRegisterActor(OldActor);
}

// @baa 0x0150cf90
// @baa 0x0150cf90
void URInteractionManager::execGetInteractionClass(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ClassName);
    P_FINISH;
    *(INT*)Result = GetInteractionClass(ClassName);
}
