// OnlineGameInterfaceImpl.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00e29ce0
void UOnlineGameInterfaceImpl::execCancelFindOnlineGames(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_118();
}

// @baa 0x00e29bc0
// @baa 0x00e29bc0
void UOnlineGameInterfaceImpl::execDestroyOnlineGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(SessionName);
    P_FINISH;
    *(INT*)Result = DestroyOnlineGame(SessionName);
}

// @baa 0x00e29e70
// @baa 0x00e29e70
void UOnlineGameInterfaceImpl::execStartOnlineGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(SessionName);
    P_FINISH;
    *(INT*)Result = StartOnlineGame(SessionName);
}

// @baa 0x00e29ef0
// @baa 0x00e29ef0
void UOnlineGameInterfaceImpl::execEndOnlineGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(SessionName);
    P_FINISH;
    *(INT*)Result = EndOnlineGame(SessionName);
}
