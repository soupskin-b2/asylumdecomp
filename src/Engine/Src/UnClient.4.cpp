// UnClient.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00cb5b00
void UClient::CloseViewport(FViewport* Viewport) PURE_VIRTUAL(UClient::CloseViewport,)

// @baa 0x00cb5ae0
INT UClient::CreateWindowChildViewport(INT, INT, INT, INT, INT, INT)
{
	PURE_VIRTUAL(UClient::CreateWindowChildViewport, return 0;)
}

// @baa 0x00cb5a60
void UClient::Init(UEngine* InEngine) PURE_VIRTUAL(UClient::Init, );
