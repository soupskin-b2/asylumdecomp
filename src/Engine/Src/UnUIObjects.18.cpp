// UnUIObjects.cpp: 116 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

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

// @baa 0x00ca3af0
void UUIScreenObject::execGetViewportScale( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportScale();
}

// @baa 0x00ca3c30
void UUIScreenObject::execGetViewportWidth( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportWidth();
}

// @baa 0x00ca3c70
void UUIScreenObject::execGetViewportHeight( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetViewportHeight();
}

// @baa 0x00ca3cb0
void UUIScreenObject::execGetAspectRatio( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetAspectRatio();
}

// @baa 0x00ca3f60
void UUIScreenObject::execIsNeverFocused( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsNeverFocused();
}

// @baa 0x00ca43a0
void UUIScreenObject::execGetSupportedPlayerCount( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetSupportedPlayerCount();
}

// @baa 0x00ca43e0
void UUIScreenObject::execGetBestPlayerIndex( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetBestPlayerIndex();
}

// @baa 0x00ca4420
void UUIScreenObject::execGetBestControllerId( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00ca5e50
void UUIObject::execNeedsActiveCursorUpdates( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00ca64e0
void UUIScene::execResolveScenePositions( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResolveScenePositions();
}

// @baa 0x00ca6550
void UUIScene::execLoadSceneDataValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadSceneDataValues();
}

// @baa 0x00ca6600
void UUIScene::execUnbindSubscribers( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UnbindSubscribers();
}

// @baa 0x00ca6860
void UUIScene::execShouldRenderParentScenes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = ShouldRenderParentScenes();
}

// @baa 0x00ca6a80
void UUIScene::execLogDockingStack( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00dc9730
void UUIScene::execForceImmediateSceneUpdate( FFrame& Stack, RESULT_DECL )
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

// @baa 0x00ca6510
void UUIScene::execGetSceneDataStore(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	*(USceneDataStore**)Result = GetSceneDataStore();
}

// @baa 0x00d990d0
void UUIScreenObject::RequestPrimitiveReview(UBOOL bReinitializePrimitives, UBOOL bReviewPrimitiveUsage)
{
	PURE_VIRTUAL(UUIScreenObject::RequestPrimitiveReview,);
}

// @baa 0x00ca69c0
void UUIScene::execGetWorldInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AWorldInfo**)Result = this->GetWorldInfo();
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

// @baa 0x00ca6980
void UUIScene::execGetSceneRenderMode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = this->GetSceneRenderMode(0);
}

// @baa 0x00cb3c90
void UUIScreenObject::execGetZDepth(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = ZDepth;
}

UObject* sub_005c1d70();
// @baa 0x00cb3cd0
void UUIScreenObject::execIsRuntimeInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = this->GetOutermost() == sub_005c1d70();
}

// @baa 0x00ca44e0
void UUIScreenObject::execInvalidatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_FINISH;
	this->InvalidatePosition(Face);
}

// @baa 0x00ca68a0
void UUIScene::execSetSceneInputMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewInputMode);
	P_FINISH;
	this->SetSceneInputMode(NewInputMode);
}

// @baa 0x00ca50a0
void UUIObject::execClearDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	this->ClearDefaultDataBinding(BindingIndex);
}

// @baa 0x00da89e0
void UUIRoot::execGetFaceOrientation(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_FINISH;
	*(BYTE*)Result = Face % 2;
}

// @baa 0x00ca4180
void UUIScreenObject::execAcceptsPlayerInput(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(PlayerIndex);
	P_FINISH;
	*(UBOOL*)Result = this->AcceptsPlayerInput(PlayerIndex);
}

// @baa 0x00ca5030
void UUIObject::execResolveDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	*(UBOOL*)Result = this->ResolveDefaultDataBinding(BindingIndex);
}

// @baa 0x00ca5590
void UUIObject::execIsContainedBy(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, TestWidget);
	P_FINISH;
	*(UBOOL*)Result = this->IsContainedBy(TestWidget);
}

// @baa 0x00ca5c80
void UUIObject::execIsPrivateBehaviorSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Behavior);
	P_FINISH;
	*(UBOOL*)Result = this->IsPrivateBehaviorSet(Behavior);
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

// @baa 0x00ca31d0
void UUIScreenObject::execGetPlayerOwner(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, -1);
	P_FINISH;
	*(UObject**)Result = (UObject*)this->GetPlayerOwner(PlayerIndex);
}

// @baa 0x00ca3da0
void UUIScreenObject::execGetCurrentState(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, -1);
	P_FINISH;
	*(UObject**)Result = (UObject*)this->GetCurrentState(PlayerIndex);
}

// @baa 0x00ca4f60
void UUIScreenObject::execGetAspectRatioAutoScaleFactor(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, 0);
	P_FINISH;
	*(FLOAT*)Result = this->GetAspectRatioAutoScaleFactor(PlayerIndex);
}

// @baa 0x00ca3fa0
void UUIScreenObject::execCanAcceptFocus(FFrame& Stack, RESULT_DECL)
{
	INT DefaultPlayerIndex = ((UUIScreenObject*)this)->GetBestPlayerIndex();
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

// @baa 0x00ca5180
void UUIObject::execSetAnchorPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewAnchorPosition);
	P_GET_BYTE_OPTX(InputType, EVALPOS_PixelViewport);
	P_FINISH;
	SetAnchorPosition(NewAnchorPosition, InputType);
}

// @baa 0x00ca2fc0
void UUIScreenObject::execSetZDepth(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewZDepth);
	P_GET_UBOOL_OPTX(bPropagateToChildren, FALSE);
	P_FINISH;
	SetZDepth(NewZDepth, bPropagateToChildren);
}

// @baa 0x00ca3850
void UUIScreenObject::execContainsChild(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, Child);
	P_GET_UBOOL_OPTX(bRecurse, TRUE);
	P_FINISH;
	*(UBOOL*)Result = ContainsChild(Child, bRecurse);
}

// @baa 0x00ca3900
void UUIScreenObject::execContainsChildOfClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, SearchClass);
	P_GET_UBOOL_OPTX(bRecurse, TRUE);
	P_FINISH;
	*(UBOOL*)Result = ContainsChildOfClass(SearchClass, bRecurse);
}

// @baa 0x00ca6630
void UUIScene::execResolveDataStore(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DataStoreTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, InPlayerOwner, NULL);
	P_FINISH;
	*(UUIDataStore**)Result = ResolveDataStore(DataStoreTag, InPlayerOwner);
}

// @baa 0x00ca5220
void UUIObject::execRotateWidget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotationAmount);
	P_GET_UBOOL_OPTX(bAccumulateRotation, FALSE);
	P_FINISH;
	RotateWidget(NewRotationAmount, bAccumulateRotation);
}

// @baa 0x00ca3650
void UUIScreenObject::execFindChild(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(WidgetName);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	*(UUIObject**)Result = FindChild(WidgetName, bRecurse);
}

// @baa 0x00cbdb60
void UUIObject::execGetDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BindingIndex);
	P_FINISH;
	*(FString*)Result = GetDefaultDataBinding(BindingIndex);
}

// @baa 0x00ca66e0
void UUIScene::execGetNextScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(UUIScene**)Result = GetNextScene(bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

// @baa 0x00ca67a0
void UUIScene::execGetPreviousScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(UUIScene**)Result = GetPreviousScene(bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

// @baa 0x00ca3710
void UUIScreenObject::execFindChildUsingID(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FWIDGET_ID, WidgetID);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	*(UUIObject**)Result = FindChildUsingID(WidgetID, bRecurse);
}

// @baa 0x00ca5a50
void UUIObject::execIsDockedTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScreenObject, TargetWidget);
	P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
	P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
	P_FINISH;
	*(UBOOL*)Result = IsDockedTo(TargetWidget, SourceFace, TargetFace);
}

// @baa 0x00ca5300
void UUIObject::execGetAnchorPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRelativeToWidget, TRUE);
	P_GET_UBOOL_OPTX(bPixelSpace, FALSE);
	P_FINISH;
	*(FVector*)Result = GetAnchorPosition(bRelativeToWidget, bPixelSpace);
}

// @baa 0x00ca5bb0
void UUIObject::execSetForcedNavigationTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_OBJECT(UUIObject, NavTarget);
	P_GET_UBOOL_OPTX(bIsNullOverride, FALSE);
	P_FINISH;
	*(UBOOL*)Result = SetForcedNavigationTarget(Face, NavTarget, bIsNullOverride);
}

// @baa 0x00ca4980
void UUIScreenObject::execResolveUIExtent(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FUIScreenValue_Extent, ExtentToResolve);
	P_GET_OBJECT(UUIScreenObject, OwnerWidget);
	P_GET_BYTE_OPTX(OutputType, UIEXTENTEVAL_Pixels);
	P_FINISH;
	*(FLOAT*)Result = ResolveUIExtent(ExtentToResolve, OwnerWidget, OutputType);
}

// @baa 0x00cbda80
void UUIObject::execSetDefaultDataBinding(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(MarkupText);
	P_GET_INT(BindingIndex);
	P_FINISH;
	SetDefaultDataBinding(MarkupText, BindingIndex);
}

// @baa 0x00ca4810
void UUIScreenObject::execGetBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Dimension);
	P_GET_BYTE_OPTX(OutputType, UIEXTENTEVAL_Pixels);
	P_GET_UBOOL_OPTX(bIgnoreDockPadding, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetBounds(Dimension, OutputType, bIgnoreDockPadding);
}

// @baa 0x00ca5cf0
void UUIObject::execSetPrivateBehavior(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Behavior);
	P_GET_UBOOL(Value);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	SetPrivateBehavior(Behavior, Value, bRecurse);
}

struct UUIScreenObject__00da96c0 : public UUIScreenObject
{
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

// @baa 0x00ca6050
void UUIObject::execGetPositionExtent(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_UBOOL_OPTX(bIncludeRotation, FALSE);
	P_GET_UBOOL_OPTX(bIncludeOrigin, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetPositionExtent(Face, bIncludeRotation, bIncludeOrigin);
}

// @baa 0x00ca4700
void UUIScreenObject::execGetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_BYTE_OPTX(OutputType, EVALPOS_None);
	P_GET_UBOOL_OPTX(bIncludeOrigin, FALSE);
	P_GET_UBOOL_OPTX(bIgnoreDockPadding, FALSE);
	P_FINISH;
	*(FLOAT*)Result = GetPosition(Face, OutputType, bIncludeOrigin, bIgnoreDockPadding);
}

// @baa 0x00ca5920
void UUIObject::execGetDockParameters(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00ca5e90
void UUIObject::execGetPositionExtents(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00ca57d0
void UUIObject::execSetDockParameters(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00dc62d0
void UUIRoot::execGetPrimitiveTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIObject, Widget);
	P_GET_UBOOL_OPTX(bIncludeAnchorPosition, FALSE);
	P_GET_UBOOL_OPTX(bIncudeRotation, TRUE);
	P_GET_UBOOL_OPTX(bIncludeScale, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GetPrimitiveTransform(Widget, bIncludeAnchorPosition, bIncudeRotation, bIncludeScale);
}

// @baa 0x00ca45c0
void UUIScreenObject::execSetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewValue);
	P_GET_BYTE(Face);
	P_GET_BYTE_OPTX(InputType, EVALPOS_PixelOwner);
	P_GET_UBOOL_OPTX(bIncludesViewportOrigin, FALSE);
	P_GET_UBOOL_OPTX(bResolveChange, TRUE);
	P_FINISH;
	SetPosition(NewValue, Face, InputType, bIncludesViewportOrigin, bResolveChange);
}

// @baa 0x00ca4020
void UUIScreenObject::execGetFocusedControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_GET_INT_OPTX(PlayerIndex, GetBestPlayerIndex());
	P_FINISH;
	*(UUIObject**)Result = GetFocusedControl(bRecurse, PlayerIndex);
}

// @baa 0x00ca40d0
void UUIScreenObject::execGetLastFocusedControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_GET_INT_OPTX(PlayerIndex, GetBestPlayerIndex());
	P_FINISH;
	*(UUIObject**)Result = GetLastFocusedControl(bRecurse, PlayerIndex);
}

// @baa 0x00cb3e90
void UUIScene::execRegisterTickableObject(FFrame& Stack, RESULT_DECL)
{
	P_GET_TINTERFACE(IUITickableObject, ObjectToRegister);
	P_GET_INT_OPTX(InsertIndex, INDEX_NONE);
	P_FINISH;
	*(UBOOL*)Result = RegisterTickableObject(ObjectToRegister, InsertIndex);
}

// @baa 0x00cb3d20
void UUIObject::execAddStyleSubscriber(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Subscriber);
	P_FINISH;
	this->AddStyleSubscriber(Subscriber);
}

// @baa 0x00cb3d90
void UUIObject::execRemoveStyleSubscriber(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Subscriber);
	P_FINISH;
	this->RemoveStyleSubscriber(Subscriber);
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

// @baa 0x00ca4ec0
void UUIScreenObject::execGetCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FMatrix*)Result = GetCanvasToScreen();
}

// @baa 0x00ca4f10
void UUIScreenObject::execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00ca4540
void UUIScreenObject::execInvalidateAllPositions(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIgnoreDockedFaces, TRUE);
	P_FINISH;
	InvalidateAllPositions(bIgnoreDockedFaces);
}

// @baa 0x00ca6580
void UUIScene::execSaveSceneDataValues(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bUnbindSubscribers, FALSE);
	P_FINISH;
	SaveSceneDataValues(bUnbindSubscribers);
}

// @baa 0x00ca3a70
void UUIScreenObject::execGetViewportOffset(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportOffset);
	P_FINISH;
	*(UBOOL*)Result = GetViewportOffset(out_ViewportOffset);
}

// @baa 0x00ca3b30
void UUIScreenObject::execGetViewportOrigin(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportOrigin);
	P_FINISH;
	*(UBOOL*)Result = GetViewportOrigin(out_ViewportOrigin);
}

// @baa 0x00ca3bb0
void UUIScreenObject::execGetViewportSize(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, out_ViewportSize);
	P_FINISH;
	*(UBOOL*)Result = GetViewportSize(out_ViewportSize);
}

// @baa 0x00ca2ec0
void UUIScreenObject::execIsVisible(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParents, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsVisible(bIncludeParents);
}

// @baa 0x00ca2f40
void UUIScreenObject::execIsHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParents, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsHidden(bIncludeParents);
}

// @baa 0x00ca4460
void UUIScreenObject::execGetPlayerOwnerIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRequireValidIndex, TRUE);
	P_FINISH;
	*(INT*)Result = GetPlayerOwnerIndex(bRequireValidIndex);
}

// @baa 0x00ca5100
void UUIObject::execHasTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentTransforms, TRUE);
	P_FINISH;
	*(UBOOL*)Result = HasTransform(bIncludeParentTransforms);
}

// @baa 0x00ca6900
void UUIScene::execGetSceneInputMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bMemberValueOnly, FALSE);
	P_FINISH;
	*(BYTE*)Result = GetSceneInputMode(bMemberValueOnly);
}

// @baa 0x00ca6a00
void UUIScene::execIsSceneActive(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00ca6140
void UUIObject::execFindStyleSubscriberIndexById(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00da8920
void UUIRoot::execGetCurrentUIController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIInteraction**)Result = GetCurrentUIController();
}

// @baa 0x00cbdd20
void UUIObject::execGetToolTipValue(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetToolTipValue();
}

// @baa 0x00ca4a60
void UUIScreenObject::execProject(FFrame& Stack, RESULT_DECL)
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

// @baa 0x00cb3f40
void UUIScene::execUnregisterTickableObject(FFrame& Stack, RESULT_DECL)
{
	P_GET_TINTERFACE(IUITickableObject, ObjectToRemove);
	P_FINISH;
	*(UBOOL*)Result = UnregisterTickableObject(ObjectToRemove);
}

// @baa 0x00cb3fc0
void UUIScene::execFindTickableObjectIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_TINTERFACE(IUITickableObject, SearchObj);
	P_FINISH;
	*(INT*)Result = FindTickableObjectIndex(SearchObj);
}

// @baa 0x00ca4af0
void UUIScreenObject::execDeProject(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, PixelPosition);
	P_FINISH;
	*(FVector*)Result = DeProject(PixelPosition);
}

// @baa 0x00ca4e30
void UUIScreenObject::execPixelToCanvas(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, PixelPosition);
	P_FINISH;
	*(FVector*)Result = PixelToCanvas(PixelPosition);
}

// @baa 0x00ca53d0
void UUIObject::execGenerateTransformMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentTransforms, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GenerateTransformMatrix(bIncludeParentTransforms);
}

// @baa 0x00ca5460
void UUIObject::execGetRotationMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentRotations, TRUE);
	P_FINISH;
	*(FMatrix*)Result = GetRotationMatrix(bIncludeParentRotations);
}

// @baa 0x00ca5b20
void UUIObject::execSetNavigationTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Face);
	P_GET_OBJECT(UUIObject, NewNavTarget);
	P_FINISH;
	*(UBOOL*)Result = SetNavigationTarget(Face, NewNavTarget);
}

// @baa 0x00ca48f0
void UUIScreenObject::execGetPositionVector(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bIncludeParentPosition, TRUE);
	P_FINISH;
	*(FVector*)Result = GetPositionVector(bIncludeParentPosition);
}
