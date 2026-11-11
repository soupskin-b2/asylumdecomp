// UnUIObjects.cpp: 32 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca3190
void UUIScreenObject::execInitializePlayerTracking( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_114();
}

struct UUIScreenObject_ : public UUIScreenObject
{
	INT GetObjectCount();
	void execGetObjectCount(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca39b0
void UUIScreenObject_::execGetObjectCount( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetObjectCount();
}

struct UUIScreenObject__00ca3af0 : public UUIScreenObject
{
	FLOAT GetViewportScale();
	void execGetViewportScale(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3af0
void UUIScreenObject__00ca3af0::execGetViewportScale( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportScale();
}

struct UUIScreenObject__00ca3c30 : public UUIScreenObject
{
	FLOAT GetViewportWidth();
	void execGetViewportWidth(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3c30
void UUIScreenObject__00ca3c30::execGetViewportWidth( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportWidth();
}

struct UUIScreenObject__00ca3c70 : public UUIScreenObject
{
	FLOAT GetViewportHeight();
	void execGetViewportHeight(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3c70
void UUIScreenObject__00ca3c70::execGetViewportHeight( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportHeight();
}

struct UUIScreenObject__00ca3cb0 : public UUIScreenObject
{
	FLOAT GetAspectRatio();
	void execGetAspectRatio(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3cb0
void UUIScreenObject__00ca3cb0::execGetAspectRatio( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetAspectRatio();
}

struct UUIScreenObject__00ca3f60 : public UUIScreenObject
{
	UBOOL IsNeverFocused();
	void execIsNeverFocused(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3f60
void UUIScreenObject__00ca3f60::execIsNeverFocused( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsNeverFocused();
}

struct UUIScreenObject__00ca43a0 : public UUIScreenObject
{
	INT GetSupportedPlayerCount();
	void execGetSupportedPlayerCount(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca43a0
void UUIScreenObject__00ca43a0::execGetSupportedPlayerCount( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetSupportedPlayerCount();
}

struct UUIScreenObject__00ca43e0 : public UUIScreenObject
{
	INT GetBestPlayerIndex();
	void execGetBestPlayerIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca43e0
void UUIScreenObject__00ca43e0::execGetBestPlayerIndex( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetBestPlayerIndex();
}

struct UUIScreenObject__00ca4420 : public UUIScreenObject
{
	INT GetBestControllerId();
	void execGetBestControllerId(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4420
void UUIScreenObject__00ca4420::execGetBestControllerId( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetBestControllerId();
}

struct UUIObject_ : public UUIObject
{
	void UpdateRotationMatrix();
	void execUpdateRotationMatrix(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca52d0
void UUIObject_::execUpdateRotationMatrix( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateRotationMatrix();
}

struct UUIObject__00ca5e50 : public UUIObject
{
	UBOOL NeedsActiveCursorUpdates();
	void execNeedsActiveCursorUpdates(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5e50
void UUIObject__00ca5e50::execNeedsActiveCursorUpdates( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = NeedsActiveCursorUpdates();
}

struct UUIScene_ : public UUIScene
{
	void RebuildDockingStack();
	void execRebuildDockingStack(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca64b0
void UUIScene_::execRebuildDockingStack( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RebuildDockingStack();
}

struct UUIScene__00ca64e0 : public UUIScene
{
	void ResolveScenePositions();
	void execResolveScenePositions(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca64e0
void UUIScene__00ca64e0::execResolveScenePositions( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResolveScenePositions();
}

struct UUIScene__00ca6550 : public UUIScene
{
	void LoadSceneDataValues();
	void execLoadSceneDataValues(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6550
void UUIScene__00ca6550::execLoadSceneDataValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadSceneDataValues();
}

struct UUIScene__00ca6600 : public UUIScene
{
	void UnbindSubscribers();
	void execUnbindSubscribers(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6600
void UUIScene__00ca6600::execUnbindSubscribers( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UnbindSubscribers();
}

struct UUIScene__00ca6860 : public UUIScene
{
	UBOOL ShouldRenderParentScenes();
	void execShouldRenderParentScenes(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6860
void UUIScene__00ca6860::execShouldRenderParentScenes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = ShouldRenderParentScenes();
}

struct UUIScene__00ca6a80 : public UUIScene
{
	void LogDockingStack();
	void execLogDockingStack(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6a80
void UUIScene__00ca6a80::execLogDockingStack( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LogDockingStack();
}

/* UUIScreenObject::GetTag (0x14c in the vtable) is a pure virtual: the derived widget classes
 * return the name they were tagged with. */
struct UUIScreenObject__00d99000 : public UUIScreenObject
{
	void GetTag(FName& OutTag);
};

// @baa 0x00d99000
void UUIScreenObject__00d99000::GetTag(FName& OutTag) PURE_VIRTUAL(UUIScreenObject::GetTag, OutTag.Index = 0; OutTag.Number = 0;);

// @baa 0x00d99030
FString UUIScreenObject::GetWidgetPathName() PURE_VIRTUAL(UUIScreenObject::GetWidgetPathName, return TEXT(""););

// @baa 0x00d99070
INT UUIScreenObject::AnimGetCurrentPPSettings(INT PlayerIndex) PURE_VIRTUAL(UUIScreenObject::AnimGetCurrentPPSettings, return 0;);

/* UnUIObjects.cpp's helper (0x00d70710): the number of active players. */
INT sub_00d70710();
// @baa 0x00da8fe0
void UUIScreenObject::execGetActivePlayerCount( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = sub_00d70710();
}

struct UUIScene__00dc9730 : public UUIScene
{
	void ForceImmediateSceneUpdate();
	void execForceImmediateSceneUpdate(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00dc9730
void UUIScene__00dc9730::execForceImmediateSceneUpdate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceImmediateSceneUpdate();
}

// @baa 0x00d98fc0
INT UUIScreenObject::GetScene()
{
    PURE_VIRTUAL(UUIScreenObject::GetScene, return 0;);
}

// @baa 0x00d990f0
BYTE UUIScreenObject::GetInputMask(UINT, UINT)
{
    PURE_VIRTUAL(UUIScreenObject::GetInputMask, return 0xff;);
}

struct UUIScene__00ca6510 : public UUIScene
{
	USceneDataStore* sub_00db0a70();
	void execGetSceneDataStore(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6510
void UUIScene__00ca6510::execGetSceneDataStore(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	*(USceneDataStore**)Result = sub_00db0a70();
}

struct UUIScreenObject__00d990d0 : public UUIScreenObject
{
	void sub_00d990d0(INT bReinitialize, INT bReviewNow);
};

// @baa 0x00d990d0
void UUIScreenObject__00d990d0::sub_00d990d0(INT bReinitialize, INT bReviewNow)
{
	PURE_VIRTUAL(UUIScreenObject::RequestPrimitiveReview,);
}

struct UUIScene__00ca69c0 : public UUIScene
{
	AWorldInfo* sub_00da9a10();
};

// @baa 0x00ca69c0
void UUIScene::execGetWorldInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AWorldInfo**)Result = ((UUIScene__00ca69c0*)this)->sub_00da9a10();
}

// @baa 0x00ca3a30
void UUIScreenObject::execRebuildNavigationLinks(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_120();
}

// @baa 0x00da9a70
void UUIScene::execGetScenePostProcessGroup(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_1f8();
}

// @baa 0x00da8d90
void UUIScreenObject::execIsInitialized(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = bInitialized;
}

struct UUIScene__00ca6980 : public UUIScene
{
	BYTE sub_00da9eb0(INT);
};

// @baa 0x00ca6980
void UUIScene::execGetSceneRenderMode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = ((UUIScene__00ca6980*)this)->sub_00da9eb0(0);
}
