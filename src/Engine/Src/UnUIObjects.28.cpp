// UnUIObjects.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00db0b50
/* Re-evaluates bSupportsNavigation and, when it changes, notifies the game's scene client. */
UBOOL UUIScene::RebuildNavigationLinks()
{
	const UBOOL bOldSupportsNavigation = bSupportsNavigation;
	bSupportsNavigation = this->sub_00db03a0();
	if (bOldSupportsNavigation != bSupportsNavigation
	&&	GEngine != NULL && GEngine->GameViewport != NULL
	&&	GEngine->GameViewport->UIController != NULL
	&&	GEngine->GameViewport->UIController->SceneClient != NULL)
	{
		GEngine->GameViewport->UIController->SceneClient->sub_00dde4f0();
	}
	return bSupportsNavigation;
}

/* Kit gap: these UUIRoot statics aren't declared. */

struct UUIRoot_ : public UUIRoot
{
	static UClass* GetDefaultUIControllerClass();
	static UUIInteraction* GetDefaultUIController();
};

// @baa 0x00dacd00
/* The UIController class the game viewport client's defaults name. */
UClass* UUIRoot_::GetDefaultUIControllerClass()
{
	UClass* GameViewportClass = GEngine->GameViewportClientClass;
#line 252 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
	check(GameViewportClass);

	UGameViewportClient* DefaultGameViewport = GameViewportClass->GetDefaultObject<UGameViewportClient>();
	if (DefaultGameViewport == NULL)
	{
		DefaultGameViewport = UGameViewportClient::StaticClass()->GetDefaultObject<UGameViewportClient>();
#line 261 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
		check(DefaultGameViewport);
	}

	return DefaultGameViewport->UIControllerClass;
}

#line 62 "candidate.cpp"

// @baa 0x00dacda0
/* The default object of the game's UIController class, falling back to UUIInteraction's. */
UUIInteraction* UUIRoot_::GetDefaultUIController()
{
	UClass* UIControllerClass = GetDefaultUIControllerClass();
#line 275 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
	check(UIControllerClass);

	UUIInteraction* DefaultUIController = UIControllerClass->GetDefaultObject<UUIInteraction>();
	if (DefaultUIController == NULL)
	{
		DefaultUIController = UUIInteraction::StaticClass()->GetDefaultObject<UUIInteraction>();
#line 282 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
		check(DefaultUIController);
	}

	return DefaultUIController;
}

#line 83 "candidate.cpp"

/* Kit gap: UUIRoot::GetSceneClient (the game's scene client, if there is one) isn't declared. */
FORCEINLINE UGameUISceneClient* GetGameSceneClient()
{
	if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL)
	{
		return (UGameUISceneClient*)GEngine->GameViewport->UIController->SceneClient;
	}
	return NULL;
}

// @baa 0x00da9be0
/* Whether this scene is open in the game's scene client, and (with bTopmostScene) the active one for its player. */
UBOOL UUIScene::IsSceneActive(UBOOL bTopmostScene)
{
	UGameUISceneClient* GameSceneClient = GetGameSceneClient();
	if (GameSceneClient != NULL)
	{
		UBOOL bResult = GameSceneClient->FindSceneIndex(this) != INDEX_NONE;
		if (bResult && bTopmostScene)
		{
			bResult = this == GameSceneClient->GetActiveScene(PlayerOwner, TRUE);
		}
		return bResult;
	}

	// No game scene client (e.g. in the editor): the scene is active if it's attached to a scene client.
	return SceneClient != NULL;
}
