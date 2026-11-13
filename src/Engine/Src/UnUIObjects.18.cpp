// UnUIObjects.cpp: 116 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca3190
void UUIScreenObject::execInitializePlayerTracking( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	InitializePlayerTracking();
}

// @baa 0x00ca39b0
void UUIScreenObject::execGetObjectCount( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00ca52d0
void UUIObject::execUpdateRotationMatrix( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00ca64b0
void UUIScene::execRebuildDockingStack( FFrame& Stack, RESULT_DECL )
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
UUIScene* UUIScreenObject::GetScene()
{
    PURE_VIRTUAL(UUIScreenObject::GetScene, return 0;);
}

// @baa 0x00d990f0
BYTE UUIScreenObject::GetInputMask(UBOOL bInheritedMaskOnly, UBOOL bOverrideMaskOnly)
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
	*(AWorldInfo**)Result = this->sub_00da9a10();
}

// @baa 0x00ca3a30
void UUIScreenObject::execRebuildNavigationLinks(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = RebuildNavigationLinks();
}

// @baa 0x00da9a70
void UUIScene::execGetScenePostProcessGroup(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = GetScenePostProcessGroup();
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
	*(BYTE*)Result = this->sub_00da9eb0(0);
}

// @baa 0x00cb3c90
void UUIScreenObject::execGetZDepth(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = ZDepth;
}

struct UUIScreenObject__00cb3cd0 : public UUIScreenObject
{
	UObject* sub_005d7350();
};

UObject* sub_005c1d70();
// @baa 0x00cb3cd0
void UUIScreenObject::execIsRuntimeInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = this->sub_005d7350() == sub_005c1d70();
}

struct UUIScreenObject__00ca44e0 : public UUIScreenObject
{
	void sub_00da94c0(BYTE);
};

// @baa 0x00ca44e0
void UUIScreenObject::execInvalidatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_FINISH;
	this->sub_00da94c0(Face);
}

struct UUIScene__00ca68a0 : public UUIScene
{
	void sub_00da9df0(BYTE);
};

// @baa 0x00ca68a0
void UUIScene::execSetSceneInputMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewInputMode);
	P_FINISH;
	this->sub_00da9df0(NewInputMode);
}

struct UUIObject__00ca50a0 : public UUIObject
{
	void sub_00daa860(INT);
};

// @baa 0x00ca50a0
void UUIObject::execClearDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	this->sub_00daa860(BindingIndex);
}

// @baa 0x00da89e0
void UUIRoot::execGetFaceOrientation(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_FINISH;
	*(BYTE*)Result = Face % 2;
}

struct UUIScreenObject__00ca4180 : public UUIScreenObject
{
	UBOOL sub_00da99e0(INT);
};

// @baa 0x00ca4180
void UUIScreenObject::execAcceptsPlayerInput(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PlayerIndex);
	P_FINISH;
	*(UBOOL*)Result = this->sub_00da99e0(PlayerIndex);
}

struct UUIObject__00ca5030 : public UUIObject
{
	UBOOL sub_00db1130(INT);
};

// @baa 0x00ca5030
void UUIObject::execResolveDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	*(UBOOL*)Result = this->sub_00db1130(BindingIndex);
}

struct UUIObject__00ca5590 : public UUIObject
{
	UBOOL sub_00daa820(UUIObject*);
};

// @baa 0x00ca5590
void UUIObject::execIsContainedBy(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, TestWidget);
	P_FINISH;
	*(UBOOL*)Result = this->sub_00daa820(TestWidget);
}

struct UUIObject__00ca5c80 : public UUIObject
{
	UBOOL sub_00daabb0(INT);
};

// @baa 0x00ca5c80
void UUIObject::execIsPrivateBehaviorSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Behavior);
	P_FINISH;
	*(UBOOL*)Result = this->sub_00daabb0(Behavior);
}

// @baa 0x00ca3e10
void UUIScreenObject::execIsHoldingCtrl(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ControllerId);
	P_FINISH;
	*(UBOOL*)Result = IsHoldingCtrl(ControllerId);
}

// @baa 0x00ca3e80
void UUIScreenObject::execIsHoldingAlt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ControllerId);
	P_FINISH;
	*(UBOOL*)Result = IsHoldingAlt(ControllerId);
}

// @baa 0x00ca3ef0
void UUIScreenObject::execIsHoldingShift(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ControllerId);
	P_FINISH;
	*(UBOOL*)Result = IsHoldingShift(ControllerId);
}

struct UUIScreenObject__00ca31d0 : public UUIScreenObject
{
	INT sub_00daee30(INT);
};

// @baa 0x00ca31d0
void UUIScreenObject::execGetPlayerOwner(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, -1);
	P_FINISH;
	*(UObject**)Result = (UObject*)this->sub_00daee30(PlayerIndex);
}

struct UUIScreenObject__00ca3da0 : public UUIScreenObject
{
	INT sub_00da95c0(INT);
};

// @baa 0x00ca3da0
void UUIScreenObject::execGetCurrentState(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, -1);
	P_FINISH;
	*(UObject**)Result = (UObject*)this->sub_00da95c0(PlayerIndex);
}

struct UUIScreenObject__00ca4f60 : public UUIScreenObject
{
	FLOAT sub_00db0090(INT);
};

// @baa 0x00ca4f60
void UUIScreenObject::execGetAspectRatioAutoScaleFactor(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, 0);
	P_FINISH;
	*(FLOAT*)Result = this->sub_00db0090(PlayerIndex);
}

struct UUIScreenObject__00ca3fa0 : public UUIScreenObject
{
	INT sub_00db02b0();
};

// @baa 0x00ca3fa0
void UUIScreenObject::execCanAcceptFocus(FFrame& Stack, RESULT_DECL)
{
	INT DefaultPlayerIndex = ((UUIScreenObject__00ca3fa0*)this)->sub_00db02b0();
	P_GET_INT_OPTX(PlayerIndex, DefaultPlayerIndex);
	P_FINISH;
	*(UBOOL*)Result = CanAcceptFocus(PlayerIndex);
}

struct UUIRoot_ : public UUIRoot
{
	static EInputPlatformType GetInputPlatformType( ULocalPlayer* OwningPlayer )
	{
		EInputPlatformType Result = IPT_PC;
		if ( OwningPlayer != NULL && OwningPlayer->Actor != NULL && OwningPlayer->Actor->PlayerInput != NULL )
		{
			if ( OwningPlayer->Actor->PlayerInput->bUsingGamepad )
			{
				Result = IPT_360;
			}
		}
		return Result;
	}
};

// @baa 0x00da8a50
void UUIRoot::execGetInputPlatformType(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(ULocalPlayer, OwningPlayer, NULL);
	P_FINISH;
	*(BYTE*)Result = ((UUIRoot_*)this)->GetInputPlatformType(OwningPlayer);
}

struct UUIObject__00ca5180 : public UUIObject
{
	void SetAnchorPosition(FVector NewAnchorPosition, BYTE InputType);
	void execSetAnchorPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5180
void UUIObject__00ca5180::execSetAnchorPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewAnchorPosition);
	P_GET_BYTE_OPTX(InputType, EVALPOS_PixelViewport);
	P_FINISH;
	SetAnchorPosition(NewAnchorPosition, InputType);
}

struct UUIScreenObject__00ca2fc0 : public UUIScreenObject
{
	void SetZDepth(FLOAT NewZDepth, UBOOL bPropagateToChildren);
	void execSetZDepth(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2fc0
void UUIScreenObject__00ca2fc0::execSetZDepth(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewZDepth);
	P_GET_UBOOL_OPTX(bPropagateToChildren, FALSE);
	P_FINISH;
	SetZDepth(NewZDepth, bPropagateToChildren);
}

struct UUIScreenObject__00ca3850 : public UUIScreenObject
{
	UBOOL ContainsChild(UUIObject* Child, UBOOL bRecurse);
	void execContainsChild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3850
void UUIScreenObject__00ca3850::execContainsChild(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, Child);
	P_GET_UBOOL_OPTX(bRecurse, TRUE);
	P_FINISH;
	*(UBOOL*)Result = ContainsChild(Child, bRecurse);
}

struct UUIScreenObject__00ca3900 : public UUIScreenObject
{
	UBOOL ContainsChildOfClass(UClass* SearchClass, UBOOL bRecurse);
	void execContainsChildOfClass(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3900
void UUIScreenObject__00ca3900::execContainsChildOfClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, SearchClass);
	P_GET_UBOOL_OPTX(bRecurse, TRUE);
	P_FINISH;
	*(UBOOL*)Result = ContainsChildOfClass(SearchClass, bRecurse);
}

struct UUIScene__00ca6630 : public UUIScene
{
	UUIDataStore* ResolveDataStore(FName DataStoreTag, ULocalPlayer* InPlayerOwner);
	void execResolveDataStore(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6630
void UUIScene__00ca6630::execResolveDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DataStoreTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, InPlayerOwner, NULL);
	P_FINISH;
	*(UUIDataStore**)Result = ResolveDataStore(DataStoreTag, InPlayerOwner);
}

struct UUIObject__00ca5220 : public UUIObject
{
	void RotateWidget(FRotator NewRotationAmount, UBOOL bAccumulateRotation);
	void execRotateWidget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5220
void UUIObject__00ca5220::execRotateWidget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotationAmount);
	P_GET_UBOOL_OPTX(bAccumulateRotation, FALSE);
	P_FINISH;
	RotateWidget(NewRotationAmount, bAccumulateRotation);
}

struct UUIScreenObject__00ca3650 : public UUIScreenObject
{
	UUIObject* FindChild(FName WidgetName, UBOOL bRecurse) const;
	void execFindChild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3650
void UUIScreenObject__00ca3650::execFindChild(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(WidgetName);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	*(UUIObject**)Result = FindChild(WidgetName, bRecurse);
}

struct UUIObject__00cbdb60 : public UUIObject
{
	FString GetDefaultDataBinding(INT BindingIndex) const;
	void execGetDefaultDataBinding(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbdb60
void UUIObject__00cbdb60::execGetDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	*(FString*)Result = GetDefaultDataBinding(BindingIndex);
}

struct UUIScene__00ca66e0 : public UUIScene
{
	UUIScene* GetNextScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes);
	void execGetNextScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca66e0
void UUIScene__00ca66e0::execGetNextScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(UUIScene**)Result = GetNextScene(bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

struct UUIScene__00ca67a0 : public UUIScene
{
	UUIScene* GetPreviousScene(UBOOL bRequireMatchingPlayerOwner, UBOOL bIgnoreUnfocusedScenes);
	void execGetPreviousScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca67a0
void UUIScene__00ca67a0::execGetPreviousScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(UUIScene**)Result = GetPreviousScene(bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

struct UUIScreenObject__00ca3710 : public UUIScreenObject
{
	UUIObject* FindChildUsingID(FWIDGET_ID WidgetID, UBOOL bRecurse) const;
	void execFindChildUsingID(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3710
void UUIScreenObject__00ca3710::execFindChildUsingID(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FWIDGET_ID, WidgetID);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	*(UUIObject**)Result = FindChildUsingID(WidgetID, bRecurse);
}

struct UUIObject__00ca5a50 : public UUIObject
{
	UBOOL IsDockedTo(const UUIScreenObject* TargetWidget, BYTE SourceFace, BYTE TargetFace) const;
	void execIsDockedTo(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5a50
void UUIObject__00ca5a50::execIsDockedTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScreenObject, TargetWidget);
	P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
	P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
	P_FINISH;
	*(UBOOL*)Result = IsDockedTo(TargetWidget, SourceFace, TargetFace);
}

struct UUIObject__00ca5300 : public UUIObject
{
	FVector GetAnchorPosition(UBOOL bRelativeToWidget, UBOOL bPixelSpace);
	void execGetAnchorPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5300
void UUIObject__00ca5300::execGetAnchorPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRelativeToWidget, TRUE);
	P_GET_UBOOL_OPTX(bPixelSpace, FALSE);
	P_FINISH;
	*(FVector*)Result = GetAnchorPosition(bRelativeToWidget, bPixelSpace);
}

struct UUIObject__00ca5bb0 : public UUIObject
{
	UBOOL SetForcedNavigationTarget(BYTE Face, UUIObject* NavTarget, UBOOL bIsNullOverride);
	void execSetForcedNavigationTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5bb0
void UUIObject__00ca5bb0::execSetForcedNavigationTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_OBJECT(UUIObject, NavTarget);
	P_GET_UBOOL_OPTX(bIsNullOverride, FALSE);
	P_FINISH;
	*(UBOOL*)Result = SetForcedNavigationTarget(Face, NavTarget, bIsNullOverride);
}

struct UUIScreenObject__00ca4980 : public UUIScreenObject
{
	FLOAT ResolveUIExtent(const FUIScreenValue_Extent& ExtentToResolve, UUIScreenObject* OwnerWidget, BYTE OutputType);
	void execResolveUIExtent(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4980
void UUIScreenObject__00ca4980::execResolveUIExtent(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FUIScreenValue_Extent, ExtentToResolve);
	P_GET_OBJECT(UUIScreenObject, OwnerWidget);
	P_GET_BYTE_OPTX(OutputType, UIEXTENTEVAL_Pixels);
	P_FINISH;
	*(FLOAT*)Result = ResolveUIExtent(ExtentToResolve, OwnerWidget, OutputType);
}

struct UUIObject__00cbda80 : public UUIObject
{
	void SetDefaultDataBinding(const FString& MarkupText, INT BindingIndex);
	void execSetDefaultDataBinding(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbda80
void UUIObject__00cbda80::execSetDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(MarkupText);
	P_GET_INT(BindingIndex);
	P_FINISH;
	SetDefaultDataBinding(MarkupText, BindingIndex);
}

struct UUIScreenObject__00ca4810 : public UUIScreenObject
{
	FLOAT GetBounds(BYTE Dimension, BYTE OutputType, UBOOL bIgnoreDockPadding);
	void execGetBounds(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4810
void UUIScreenObject__00ca4810::execGetBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Dimension);
	P_GET_BYTE_OPTX(OutputType, UIEXTENTEVAL_Pixels);
	P_GET_UBOOL_OPTX(bIgnoreDockPadding, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetBounds(Dimension, OutputType, bIgnoreDockPadding);
}

struct UUIObject__00ca5cf0 : public UUIObject
{
	void SetPrivateBehavior(INT Behavior, UBOOL Value, UBOOL bRecurse);
	void execSetPrivateBehavior(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5cf0
void UUIObject__00ca5cf0::execSetPrivateBehavior(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Behavior);
	P_GET_UBOOL(Value);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	SetPrivateBehavior(Behavior, Value, bRecurse);
}

extern UEngine* GEngine;

struct UUIScreenObject__00da96c0 : public UUIScreenObject
{
	static UUIInteraction* GetCurrentUIController()
	{
		UUIInteraction* Result = NULL;
		if ( GEngine != NULL && GEngine->GameViewport != NULL )
		{
			Result = GEngine->GameViewport->UIController;
		}
		return Result;
	}
	static UBOOL PlayUISound( FName SoundCueName, INT PlayerIndex )
	{
		UBOOL bResult = FALSE;
		UUIInteraction* UIController = GetCurrentUIController();
		if ( UIController != NULL )
		{
			bResult = ((UUIInteraction*)UIController)->PlayUISound(SoundCueName, PlayerIndex);
		}
		return bResult;
	}
	void execPlayUISound(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00da96c0
void UUIScreenObject__00da96c0::execPlayUISound(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_INT_OPTX(PlayerIndex, 0);
	P_FINISH;
	*(UBOOL*)Result = PlayUISound(SoundCueName, PlayerIndex);
}

struct UUIObject__00ca6050 : public UUIObject
{
	FLOAT GetPositionExtent(BYTE Face, UBOOL bIncludeRotation, UBOOL bIncludeOrigin);
	void execGetPositionExtent(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6050
void UUIObject__00ca6050::execGetPositionExtent(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_UBOOL_OPTX(bIncludeRotation, FALSE);
	P_GET_UBOOL_OPTX(bIncludeOrigin, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetPositionExtent(Face, bIncludeRotation, bIncludeOrigin);
}

struct UUIScreenObject__00ca4700 : public UUIScreenObject
{
	FLOAT GetPosition(BYTE Face, BYTE OutputType, UBOOL bIncludeOrigin, UBOOL bIgnoreDockPadding) const;
	void execGetPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4700
void UUIScreenObject__00ca4700::execGetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_BYTE_OPTX(OutputType, EVALPOS_None);
	P_GET_UBOOL_OPTX(bIncludeOrigin, FALSE);
	P_GET_UBOOL_OPTX(bIgnoreDockPadding, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetPosition(Face, OutputType, bIncludeOrigin, bIgnoreDockPadding);
}

struct UUIObject__00ca5920 : public UUIObject
{
	UBOOL GetDockParameters(BYTE SourceFace, UUIScreenObject*& TargetWidget, BYTE& TargetFace, FLOAT& TargetPadding);
	void execGetDockParameters(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5920
void UUIObject__00ca5920::execGetDockParameters(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(SourceFace);
	P_GET_OBJECT_REF(UUIScreenObject, TargetWidget);
	P_GET_BYTE_REF(TargetFace);
	P_GET_FLOAT_REF(TargetPadding);
	P_FINISH;
	*(UBOOL*)Result = GetDockParameters(SourceFace, TargetWidget, TargetFace, TargetPadding);
}

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00d99150
void UUIScreenObject::InvalidatePositionDependencies(BYTE)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UUIScreenObject::InvalidatePositionDependencies");
}

// @baa 0x00daa3f0
void UUIObject::RequestSceneInputMaskUpdate()
{
	UUIScene* Scene = (UUIScene*)GetScene();
	if (Scene)
		Scene->RequestSceneInputMaskUpdate();
}

struct UUIObject__00ca5e90 : public UUIObject
{
	void GetPositionExtents(FLOAT& MinX, FLOAT& MaxX, FLOAT& MinY, FLOAT& MaxY, UBOOL bIncludeRotation, UBOOL bIncludeOrigin);
	void execGetPositionExtents(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5e90
void UUIObject__00ca5e90::execGetPositionExtents(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(MinX);
	P_GET_FLOAT_REF(MaxX);
	P_GET_FLOAT_REF(MinY);
	P_GET_FLOAT_REF(MaxY);
	P_GET_UBOOL_OPTX(bIncludeRotation, FALSE);
	P_GET_UBOOL_OPTX(bIncludeOrigin, FALSE);
	P_FINISH;
	GetPositionExtents(MinX, MaxX, MinY, MaxY, bIncludeRotation, bIncludeOrigin);
}

struct UUIObject__00ca57d0 : public UUIObject
{
	UBOOL SetDockParameters(BYTE SourceFace, UUIScreenObject* Target, BYTE TargetFace, FLOAT PaddingValue, BYTE PaddingInputType, UBOOL bModifyPaddingScaleType);
	void execSetDockParameters(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca57d0
void UUIObject__00ca57d0::execSetDockParameters(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(SourceFace);
	P_GET_OBJECT(UUIScreenObject, Target);
	P_GET_BYTE(TargetFace);
	P_GET_FLOAT(PaddingValue);
	P_GET_BYTE_OPTX(PaddingInputType, 0);
	P_GET_UBOOL_OPTX(bModifyPaddingScaleType, FALSE);
	P_FINISH;
	*(UBOOL*)Result = SetDockParameters(SourceFace, Target, TargetFace, PaddingValue, PaddingInputType, bModifyPaddingScaleType);
}

// @baa 0x00da8f30
void UUIScreenObject::execRequestPrimitiveReview(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bReinitializePrimitives);
	P_GET_UBOOL(bReviewPrimitiveUsage);
	P_FINISH;

	RequestPrimitiveReview(bReinitializePrimitives, bReviewPrimitiveUsage);
}

// @baa 0x00ca41f0
void UUIScreenObject::execGetInputMask(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bInheritedMaskOnly, FALSE);
	P_GET_UBOOL_OPTX(bOverrideMaskOnly, FALSE);
	P_FINISH;

	*(BYTE*)Result = GetInputMask(bInheritedMaskOnly, bOverrideMaskOnly);
}

struct UUIRoot__00dc62d0 : public UUIRoot
{
	static FMatrix GetPrimitiveTransform(UUIObject* Widget, UBOOL bIncludeAnchorPosition, UBOOL bIncudeRotation, UBOOL bIncludeScale);
	void execGetPrimitiveTransform(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00dc62d0
void UUIRoot__00dc62d0::execGetPrimitiveTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, Widget);
	P_GET_UBOOL_OPTX(bIncludeAnchorPosition, FALSE);
	P_GET_UBOOL_OPTX(bIncudeRotation, TRUE);
	P_GET_UBOOL_OPTX(bIncludeScale, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GetPrimitiveTransform(Widget, bIncludeAnchorPosition, bIncudeRotation, bIncludeScale);
}

struct UUIScreenObject__00ca45c0 : public UUIScreenObject
{
	void SetPosition(FLOAT NewValue, BYTE Face, BYTE InputType, UBOOL bIncludesViewportOrigin, UBOOL bResolveChange);
	void execSetPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca45c0
void UUIScreenObject__00ca45c0::execSetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewValue);
	P_GET_BYTE(Face);
	P_GET_BYTE_OPTX(InputType, EVALPOS_PixelOwner);
	P_GET_UBOOL_OPTX(bIncludesViewportOrigin, FALSE);
	P_GET_UBOOL_OPTX(bResolveChange, TRUE);
	P_FINISH;
	SetPosition(NewValue, Face, InputType, bIncludesViewportOrigin, bResolveChange);
}

struct UUIScreenObject__00ca4020 : public UUIScreenObject
{
	INT GetBestPlayerIndex() const;
	UUIObject* GetFocusedControl(UBOOL bRecurse, INT PlayerIndex) const;
	void execGetFocusedControl(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4020
void UUIScreenObject__00ca4020::execGetFocusedControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_GET_INT_OPTX(PlayerIndex, GetBestPlayerIndex());
	P_FINISH;
	*(UUIObject**)Result = GetFocusedControl(bRecurse, PlayerIndex);
}

struct UUIScreenObject__00ca40d0 : public UUIScreenObject
{
	INT GetBestPlayerIndex() const;
	UUIObject* GetLastFocusedControl(UBOOL bRecurse, INT PlayerIndex) const;
	void execGetLastFocusedControl(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca40d0
void UUIScreenObject__00ca40d0::execGetLastFocusedControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_GET_INT_OPTX(PlayerIndex, GetBestPlayerIndex());
	P_FINISH;
	*(UUIObject**)Result = GetLastFocusedControl(bRecurse, PlayerIndex);
}

struct UUIScene__00cb3e90 : public UUIScene
{
	UBOOL RegisterTickableObject(const TScriptInterface<IUITickableObject>& ObjectToRegister, INT InsertIndex);
	void execRegisterTickableObject(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cb3e90
void UUIScene__00cb3e90::execRegisterTickableObject(FFrame& Stack, RESULT_DECL)
{
	P_GET_TINTERFACE(IUITickableObject, ObjectToRegister);
	P_GET_INT_OPTX(InsertIndex, INDEX_NONE);
	P_FINISH;
	*(UBOOL*)Result = RegisterTickableObject(ObjectToRegister, InsertIndex);
}

struct UUIObject__00cb3d20 : public UUIObject
{
	void sub_00db5880(FName&);
};

// @baa 0x00cb3d20
void UUIObject::execAddStyleSubscriber(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Subscriber);
	P_FINISH;
	this->sub_00db5880(Subscriber);
}

struct UUIObject__00cb3d90 : public UUIObject
{
	void sub_00db58c0(FName&);
};

// @baa 0x00cb3d90
void UUIObject::execRemoveStyleSubscriber(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Subscriber);
	P_FINISH;
	this->sub_00db58c0(Subscriber);
}

// @baa 0x00d99130
INT UUIScreenObject::HasPositionBeenResolved(BYTE Face)
{
    PURE_VIRTUAL(UUIScreenObject::HasPositionBeenResolved, return 0;);
}

// @baa 0x00daa360
BYTE UUIObject::GetInputMask(UBOOL PlayerIndex, UBOOL bShift)
{
	if (bShift)
		return PlayerInputMask >> 4;
	if (PlayerIndex)
		return PlayerInputMask & 0xf;
	if (PlayerInputMask & 0xf0)
		return PlayerInputMask >> 4;
	return PlayerInputMask & 0xf;
}

struct UUIScreenObject__00ca4ec0 : public UUIScreenObject
{
	FMatrix GetCanvasToScreen();
	void execGetCanvasToScreen(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4ec0
void UUIScreenObject__00ca4ec0::execGetCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FMatrix*)Result = GetCanvasToScreen();
}

struct UUIScreenObject__00ca4f10 : public UUIScreenObject
{
	FMatrix GetInverseCanvasToScreen();
	void execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4f10
void UUIScreenObject__00ca4f10::execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FMatrix*)Result = GetInverseCanvasToScreen();
}

// @baa 0x00da9b10
INT UUIScene::AnimGetCurrentPPSettings(INT OutSettings)
{
	INT Result = 0;
	switch (GetScenePostProcessGroup())
	{
	case 1:
		*(FPostProcessSettings**)(UINT)OutSettings = &CurrentBackgroundSettings;
		Result = 1;
		break;
	case 2:
		*(FPostProcessSettings**)(UINT)OutSettings = &CurrentForegroundSettings;
		Result = 1;
		break;
	}
	return Result;
}

struct UUIScreenObject__00ca4540 : public UUIScreenObject
{
	void InvalidateAllPositions(UBOOL bIgnoreDockedFaces);
	void execInvalidateAllPositions(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4540
void UUIScreenObject__00ca4540::execInvalidateAllPositions(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIgnoreDockedFaces, TRUE);
	P_FINISH;
	InvalidateAllPositions(bIgnoreDockedFaces);
}

struct UUIScene__00ca6580 : public UUIScene
{
	void SaveSceneDataValues(UBOOL bUnbindSubscribers);
	void execSaveSceneDataValues(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6580
void UUIScene__00ca6580::execSaveSceneDataValues(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bUnbindSubscribers, FALSE);
	P_FINISH;
	SaveSceneDataValues(bUnbindSubscribers);
}

struct UUIScreenObject__00ca3a70 : public UUIScreenObject
{
	UBOOL GetViewportOffset(FVector2D& out_ViewportOffset);
	void execGetViewportOffset(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3a70
void UUIScreenObject__00ca3a70::execGetViewportOffset(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportOffset);
	P_FINISH;
	*(UBOOL*)Result = GetViewportOffset(out_ViewportOffset);
}

struct UUIScreenObject__00ca3b30 : public UUIScreenObject
{
	UBOOL GetViewportOrigin(FVector2D& out_ViewportOrigin);
	void execGetViewportOrigin(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3b30
void UUIScreenObject__00ca3b30::execGetViewportOrigin(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportOrigin);
	P_FINISH;
	*(UBOOL*)Result = GetViewportOrigin(out_ViewportOrigin);
}

struct UUIScreenObject__00ca3bb0 : public UUIScreenObject
{
	UBOOL GetViewportSize(FVector2D& out_ViewportSize);
	void execGetViewportSize(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca3bb0
void UUIScreenObject__00ca3bb0::execGetViewportSize(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportSize);
	P_FINISH;
	*(UBOOL*)Result = GetViewportSize(out_ViewportSize);
}

struct UUIScreenObject__00ca2ec0 : public UUIScreenObject
{
	UBOOL IsVisible(UBOOL bIncludeParents);
	void execIsVisible(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2ec0
void UUIScreenObject__00ca2ec0::execIsVisible(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParents, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsVisible(bIncludeParents);
}

struct UUIScreenObject__00ca2f40 : public UUIScreenObject
{
	UBOOL IsHidden(UBOOL bIncludeParents);
	void execIsHidden(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2f40
void UUIScreenObject__00ca2f40::execIsHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParents, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsHidden(bIncludeParents);
}

struct UUIScreenObject__00ca4460 : public UUIScreenObject
{
	INT GetPlayerOwnerIndex(UBOOL bRequireValidIndex);
	void execGetPlayerOwnerIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4460
void UUIScreenObject__00ca4460::execGetPlayerOwnerIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireValidIndex, TRUE);
	P_FINISH;
	*(INT*)Result = GetPlayerOwnerIndex(bRequireValidIndex);
}

struct UUIObject__00ca5100 : public UUIObject
{
	UBOOL HasTransform(UBOOL bIncludeParentTransforms);
	void execHasTransform(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5100
void UUIObject__00ca5100::execHasTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentTransforms, TRUE);
	P_FINISH;
	*(UBOOL*)Result = HasTransform(bIncludeParentTransforms);
}

struct UUIScene__00ca6900 : public UUIScene
{
	BYTE GetSceneInputMode(UBOOL bMemberValueOnly);
	void execGetSceneInputMode(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6900
void UUIScene__00ca6900::execGetSceneInputMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bMemberValueOnly, FALSE);
	P_FINISH;
	*(BYTE*)Result = GetSceneInputMode(bMemberValueOnly);
}

struct UUIScene__00ca6a00 : public UUIScene
{
	UBOOL IsSceneActive(UBOOL bTopmostScene);
	void execIsSceneActive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6a00
void UUIScene__00ca6a00::execIsSceneActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bTopmostScene, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsSceneActive(bTopmostScene);
}

// @baa 0x00ca37d0
void UUIScreenObject::execFindChildIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(WidgetName);
	P_FINISH;
	*(INT*)Result = FindChildIndex(WidgetName);
}

struct UUIObject__00ca6140 : public UUIObject
{
	INT FindStyleSubscriberIndexById(FName StyleSubscriberId);
	void execFindStyleSubscriberIndexById(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6140
void UUIObject__00ca6140::execFindStyleSubscriberIndexById(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(StyleSubscriberId);
	P_FINISH;
	*(INT*)Result = FindStyleSubscriberIndexById(StyleSubscriberId);
}

struct UUIScene__00cb4040 : public UUIScene
{
	void SetSceneRenderMode( BYTE NewRenderMode )
	{
#line 6236 "Engine/Inc\\EngineUIPrivateClasses.h"
		check(NewRenderMode<SPLITRENDER_MAX);
		SceneRenderMode = NewRenderMode;
	}
	void execSetSceneRenderMode(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cb4040
void UUIScene__00cb4040::execSetSceneRenderMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewRenderMode);
	P_FINISH;
	SetSceneRenderMode(NewRenderMode);
}

#line 1432 "candidate.cpp"

struct UUIRoot__00da8920 : public UUIRoot
{
	static UUIInteraction* GetCurrentUIController()
	{
		UUIInteraction* Result = NULL;
		if ( GEngine != NULL && GEngine->GameViewport != NULL )
		{
			Result = GEngine->GameViewport->UIController;
		}
		return Result;
	}
	void execGetCurrentUIController(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00da8920
void UUIRoot__00da8920::execGetCurrentUIController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIInteraction**)Result = GetCurrentUIController();
}

struct UUIObject__00cbdd20 : public UUIObject
{
	FString GetToolTipValue();
	void execGetToolTipValue(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cbdd20
void UUIObject__00cbdd20::execGetToolTipValue(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetToolTipValue();
}

struct UUIScreenObject__00ca4a60 : public UUIScreenObject
{
	FVector Project(const FVector& CanvasPosition);
	void execProject(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4a60
void UUIScreenObject__00ca4a60::execProject(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, CanvasPosition);
	P_FINISH;
	*(FVector*)Result = Project(CanvasPosition);
}

// @baa 0x00ca5dd0
void UUIObject::execSetActiveCursorUpdate(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bShouldReceiveCursorUpdates);
	P_FINISH;
	SetActiveCursorUpdate(bShouldReceiveCursorUpdates);
}

struct UUIScene__00cb3f40 : public UUIScene
{
	UBOOL sub_00db42a0(FName&);
};

// @baa 0x00cb3f40
void UUIScene::execUnregisterTickableObject(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ObjName);
	P_FINISH;
	*(UBOOL*)Result = this->sub_00db42a0(ObjName);
}

struct UUIScene__00cb3fc0 : public UUIScene
{
	INT sub_00db0a90(FName&);
};

// @baa 0x00cb3fc0
void UUIScene::execFindTickableObjectIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ObjName);
	P_FINISH;
	*(INT*)Result = this->sub_00db0a90(ObjName);
}

struct UUIScreenObject__00ca4af0 : public UUIScreenObject
{
	FVector DeProject(const FVector& PixelPosition);
	void execDeProject(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4af0
void UUIScreenObject__00ca4af0::execDeProject(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, PixelPosition);
	P_FINISH;
	*(FVector*)Result = DeProject(PixelPosition);
}

struct UUIScreenObject__00ca4e30 : public UUIScreenObject
{
	FVector PixelToCanvas(const FVector2D& PixelPosition);
	void execPixelToCanvas(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca4e30
void UUIScreenObject__00ca4e30::execPixelToCanvas(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, PixelPosition);
	P_FINISH;
	*(FVector*)Result = PixelToCanvas(PixelPosition);
}

struct UUIObject__00ca53d0 : public UUIObject
{
	FMatrix GenerateTransformMatrix(UBOOL bIncludeParentTransforms);
	void execGenerateTransformMatrix(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca53d0
void UUIObject__00ca53d0::execGenerateTransformMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentTransforms, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GenerateTransformMatrix(bIncludeParentTransforms);
}

struct UUIObject__00ca5460 : public UUIObject
{
	FMatrix GetRotationMatrix(UBOOL bIncludeParentRotations);
	void execGetRotationMatrix(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5460
void UUIObject__00ca5460::execGetRotationMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentRotations, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GetRotationMatrix(bIncludeParentRotations);
}

struct UUIObject__00ca5b20 : public UUIObject
{
	UBOOL SetNavigationTarget(BYTE Face, UUIObject* NewNavTarget);
	void execSetNavigationTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca5b20
void UUIObject__00ca5b20::execSetNavigationTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_OBJECT(UUIObject, NewNavTarget);
	P_FINISH;
	*(UBOOL*)Result = SetNavigationTarget(Face, NewNavTarget);
}

struct UUIScreenObject__00ca48f0 : public UUIScreenObject
{
	FVector GetPositionVector(UBOOL bIncludeParentPosition);
	void execGetPositionVector(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca48f0
void UUIScreenObject__00ca48f0::execGetPositionVector(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentPosition, TRUE);
	P_FINISH;
	*(FVector*)Result = GetPositionVector(bIncludeParentPosition);
}
