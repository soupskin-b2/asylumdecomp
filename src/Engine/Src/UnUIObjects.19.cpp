// UnUIObjects.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

// @baa 0x00da8cf0
void UUIRoot::execSetMouseCaptureOverride(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bCaptureMouse);
    P_FINISH;

    if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL)
    {
        GEngine->GameViewport->UIController->GetOuterUGameViewportClient()->bUIMouseCaptureOverride = bCaptureMouse;
    }
}

/* Kit gap: UUIRoot::GetCurrentUIController and GetSceneClient (inline in this build) aren't declared. */
struct UUIRoot_ : public UUIRoot
{
	static FORCEINLINE UUIInteraction* GetCurrentUIController()
	{
		UUIInteraction* Result = NULL;
		if (GEngine != NULL && GEngine->GameViewport != NULL)
		{
			Result = GEngine->GameViewport->UIController;
		}
		return Result;
	}
	static FORCEINLINE UGameUISceneClient* GetSceneClient()
	{
		UGameUISceneClient* Result = NULL;
		UUIInteraction* UIController = GetCurrentUIController();
		if (UIController != NULL)
		{
			Result = UIController->SceneClient;
		}
		return Result;
	}
};

// @baa 0x00da8980
/* GameUISceneClient GetSceneClient() */
void UUIRoot::execGetSceneClient(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UGameUISceneClient**)Result = UUIRoot_::GetSceneClient();
}
