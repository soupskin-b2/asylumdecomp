// UnUIObjects.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gap: the UUIScene helper that works out whether the scene (or any child) supports navigation (00db03a0)
 * isn't declared. */
struct UUIScene_ : public UUIScene
{
	UBOOL sub_00db03a0();
};

// @baa 0x00db0b50
/* Re-evaluates bSupportsNavigation and, when it changes, notifies the game's scene client. */
INT UUIScene::vf_120()
{
	const UBOOL bOldSupportsNavigation = bSupportsNavigation;
	bSupportsNavigation = ((UUIScene_*)this)->sub_00db03a0();
	if (bOldSupportsNavigation != bSupportsNavigation
	&&	GEngine != NULL && GEngine->GameViewport != NULL
	&&	GEngine->GameViewport->UIController != NULL
	&&	GEngine->GameViewport->UIController->SceneClient != NULL)
	{
		GEngine->GameViewport->UIController->SceneClient->sub_00dde4f0();
	}
	return bSupportsNavigation;
}

/* Kit gaps: UClass::GetDefaultObject<T>() and these UUIRoot statics aren't declared. */
template<class T> FORCEINLINE T* GetClassDefaultObject(UClass* Class)
{
	return (T*)Class->GetDefaultObject();
}

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

	UGameViewportClient* DefaultGameViewport = GetClassDefaultObject<UGameViewportClient>(GameViewportClass);
	if (DefaultGameViewport == NULL)
	{
		DefaultGameViewport = GetClassDefaultObject<UGameViewportClient>(UGameViewportClient::StaticClass());
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

	UUIInteraction* DefaultUIController = GetClassDefaultObject<UUIInteraction>(UIControllerClass);
	if (DefaultUIController == NULL)
	{
		DefaultUIController = GetClassDefaultObject<UUIInteraction>(UUIInteraction::StaticClass());
#line 282 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
		check(DefaultUIController);
	}

	return DefaultUIController;
}

#line 83 "candidate.cpp"

/* Kit gaps: UGameUISceneClient::FindSceneIndex (00de2590) and GetActiveScene (00de2770) aren't declared. */
struct UGameUISceneClient_ : public UGameUISceneClient
{
	INT FindSceneIndex(const UUIScene* Scene) const;
	UUIScene* GetActiveScene(ULocalPlayer* SceneFilter, UBOOL bIgnoreUnfocusedScenes);
};

/* Kit gap: UUIRoot::GetSceneClient (the game's scene client, if there is one) isn't declared. */
FORCEINLINE UGameUISceneClient_* GetGameSceneClient()
{
	if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL)
	{
		return (UGameUISceneClient_*)GEngine->GameViewport->UIController->SceneClient;
	}
	return NULL;
}

// @baa 0x00da9be0
/* Whether this scene is open in the game's scene client, and (with bTopmostScene) the active one for its player. */
UBOOL UUIScene::IsSceneActive(UBOOL bTopmostScene)
{
	UGameUISceneClient_* GameSceneClient = GetGameSceneClient();
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
