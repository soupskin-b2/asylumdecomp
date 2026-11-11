// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// UUISceneClient::IsSceneInitialized (00de14f0, 32 bytes)
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00de14f0
UINT UUISceneClient::IsSceneInitialized(INT SceneIndex)
{
	PURE_VIRTUAL(UUISceneClient::IsSceneInitialized, return 1;);
}
