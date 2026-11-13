// UnUIObjects.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's UGameUISceneClient::GetNextScene/GetPreviousScene(const UUIScene* CurrentScene, UBOOL
 * bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes). */
struct UGameUISceneClient_ : public UGameUISceneClient
{
    UUIScene* sub_00de5640(UUIScene* CurrentScene, UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes);
};

// @baa 0x00da9b60
/* UE3's UUIScene::GetNextScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes): ask the game's scene
 * client (GEngine->GameViewport->UIController->SceneClient). */
UUIScene* UUIScene::GetNextScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes)
{
    UUIScene* Result = NULL;
    if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL
        && GEngine->GameViewport->UIController->SceneClient != NULL)
    {
        Result = ((UGameUISceneClient_*)GEngine->GameViewport->UIController->SceneClient)->sub_00de5640(this,
            bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
    }
    return Result;
}

/* Unnamed in the kit: UE3's UGameUISceneClient::GetNextScene/GetPreviousScene(const UUIScene* CurrentScene, UBOOL
 * bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes). */
struct UGameUISceneClient__00da9ba0 : public UGameUISceneClient
{
    UUIScene* sub_00de5550(UUIScene* CurrentScene, UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes);
};

// @baa 0x00da9ba0
/* UE3's UUIScene::GetPreviousScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes): ask the game's scene
 * client (GEngine->GameViewport->UIController->SceneClient). */
UUIScene* UUIScene::GetPreviousScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes)
{
    UUIScene* Result = NULL;
    if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL
        && GEngine->GameViewport->UIController->SceneClient != NULL)
    {
        Result = ((UGameUISceneClient__00da9ba0*)GEngine->GameViewport->UIController->SceneClient)->sub_00de5550(this,
            bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
    }
    return Result;
}

// @baa 0x00da9a10
/* The current world's WorldInfo, if there is a world. */
AWorldInfo* UUIScene::sub_00da9a10()
{
	return GWorld ? GWorld->GetWorldInfo() : NULL;
}
