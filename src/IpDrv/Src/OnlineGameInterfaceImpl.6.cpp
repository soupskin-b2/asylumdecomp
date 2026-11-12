// OnlineGameInterfaceImpl.cpp: 7 functions
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

// @baa 0x00e29d20
void UOnlineGameInterfaceImpl::execFreeSearchResults(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UOnlineGameSearch, Search);
	P_FINISH;
	*(UBOOL*)Result = FreeSearchResults(Search);
}

// @baa 0x00e29c40
void UOnlineGameInterfaceImpl::execFindOnlineGames(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(SearchingPlayerNum);
	P_GET_OBJECT(UOnlineGameSearch, SearchSettings);
	P_FINISH;
	*(UBOOL*)Result = FindOnlineGames(SearchingPlayerNum, SearchSettings);
}

// @baa 0x00e2a060
/* BindPlatformSpecificSessionToSearch(byte SearchingPlayerNum, OnlineGameSearch SearchSettings,
 * byte PlatformSpecificInfo[]): the static array is read whole into a stack buffer (0x8000 bytes in this build). */
void UOnlineGameInterfaceImpl::execBindPlatformSpecificSessionToSearch(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(SearchingPlayerNum);
	P_GET_OBJECT(UOnlineGameSearch, SearchSettings);
	BYTE PlatformSpecificInfo[0x8000];
	Stack.Step(Stack.Object, PlatformSpecificInfo);
	P_FINISH;
	*(UBOOL*)Result = BindPlatformSpecificSessionToSearch(SearchingPlayerNum, SearchSettings, PlatformSpecificInfo);
}
