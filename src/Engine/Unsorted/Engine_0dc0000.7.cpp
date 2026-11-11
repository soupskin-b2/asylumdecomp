// Engine_0dc0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00dc2e20
FString UUIScene::GetWidgetPathName()
{
	return SceneTag.ToString();
}

// @baa 0x00dc2d00
UINT UUIScene::GetNumResolvedFaces()
{
    return bUpdateScenePositions == TRUE ? 0 : 4;
}

// GetTag returns the scene's tag by value (the header's INT GetTag(INT) is the wrong shape).

// @baa 0x00dc2ce0
FName UUIScene::GetTag()
{
    return SceneTag;
}
