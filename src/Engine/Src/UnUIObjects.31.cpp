// UnUIObjects.cpp: 28 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FGuid's comparison (UnMisc.h), for the script-struct mirror FWIDGET_ID. */
inline UBOOL operator==(const FGuidImplementation& X, const FGuidImplementation& Y)
{
    return ((X.A ^ Y.A) | (X.B ^ Y.B) | (X.C ^ Y.C) | (X.D ^ Y.D)) == 0;
}

// @baa 0x00daf4f0
/* UE3's UUIScreenObject::FindChildUsingID(FWIDGET_ID WidgetID, UBOOL bRecurse): the child tagged WidgetName (FindChildIndex inlined), else, with bRecurse, the first match among the descendants. */
UUIObject* UUIScreenObject::FindChildUsingID(FWIDGET_ID WidgetID, UBOOL bRecurse) const
{
    UUIObject* Result = NULL;
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i)->WidgetID == WidgetID)
        {
            Result = Children(i);
            break;
        }
    }
    if (Result == NULL && bRecurse)
    {
        for (INT i = 0; i < Children.Num(); i++)
        {
            Result = Children(i)->FindChildUsingID(WidgetID, TRUE);
            if (Result != NULL)
            {
                break;
            }
        }
    }
    return Result;
}

// @baa 0x00db5b00
/* UUIScreenObject::PostLoad inlined (UObject's PostLoad, then drop
 * any NULL entries from Children). */
void UUIObject::PostLoad()
{
    UObject::PostLoad();
    Children.RemoveItem(NULL);
}

/* Unnamed in the kit: UE3's FUIRotation::SetAnchorLocation(UUIObject* OwnerWidget, const FVector& AnchorPos, BYTE
 * InputType)-style setter for the rotation anchor. */

// @baa 0x00dc8f60
/* UE3's UUIObject::SetAnchorPosition(FVector NewAnchorPosition, BYTE InputType): move the rotation anchor and
 * rebuild the rotation matrix. */
void UUIObject::SetAnchorPosition(FVector NewAnchorPosition, BYTE InputType)
{
    ((FUIRotation&)Rotation).sub_00de3490(this, NewAnchorPosition, InputType);
    UpdateRotationMatrix();
}

/* Unnamed in the kit: a FUIDataStoreBinding refresh (UE3 FUIDataStoreBinding::ClearSubscriber/RefreshSubscriberValue
 * style, no arguments). */

// @baa 0x00daa860
/* UUIObject helper: refresh the tooltip binding (index 100, UCONST_TOOLTIP_BINDING_INDEX) or the context menu binding
 * (101, UCONST_CONTEXTMENU_BINDING_INDEX). */
void UUIObject::ClearDefaultDataBinding(INT BindingIndex)
{
    if (BindingIndex == 100)
    {
        ((FUIDataStoreBinding&)ToolTip).sub_00dcc550();
    }
    else if (BindingIndex == 101)
    {
        ((FUIDataStoreBinding&)ContextMenuData).sub_00dcc550();
    }
}

// @baa 0x00daa820
/* UE3's UUIObject::IsContainedBy(UUIObject* Container): whether Container is somewhere up the Owner chain. */
UBOOL UUIObject::IsContainedBy(UUIObject* Container)
{
    UBOOL bResult = FALSE;
    if (Container != NULL)
    {
        for (UUIObject* NextOwner = Owner; NextOwner != NULL; NextOwner = NextOwner->Owner)
        {
            if (NextOwner == Container)
            {
                bResult = TRUE;
                break;
            }
        }
    }
    return bResult;
}

/* TArray::AddUniqueItem (Array.h; not in the kit's TArray), out of line as the project binds it (0x00d91ae0). */
template<typename T> struct TArrayAddUnique_ : public TArray<T>
{
    INT AddUniqueItem(const T& Item);
};

/* Unnamed in the kit: UE3's UUIObject::GetBoundDataStores(TArray<UUIDataStore*>& out_BoundDataStores)
 * (UIDataStoreSubscriber): the data stores the tooltip and context menu bindings resolved to. */
struct UUIObject_ : public UUIObject
{
    void GetDefaultDataStores(TArray<UUIDataStore*>& out_BoundDataStores);
};

// @baa 0x00db5ac0
void UUIObject_::GetDefaultDataStores(TArray<UUIDataStore*>& out_BoundDataStores)
{
    if (ToolTip.ResolvedDataStore != NULL)
    {
        ((TArrayAddUnique_<UUIDataStore*>&)out_BoundDataStores).AddUniqueItem(ToolTip.ResolvedDataStore);
    }
    if (ContextMenuData.ResolvedDataStore != NULL)
    {
        ((TArrayAddUnique_<UUIDataStore*>&)out_BoundDataStores).AddUniqueItem(ContextMenuData.ResolvedDataStore);
    }
}

// @baa 0x00db1250
/* UE3's UUIObject::CanAcceptFocus(INT PlayerIndex): never while the not-focusable private behavior (bit 2,
 * UCONST_PRIVATE_NotFocusable) is set. */
INT UUIObject::CanAcceptFocus(INT PlayerIndex)
{
    INT bResult = FALSE;
    if ((PrivateFlags & 4) == 0)
    {
        bResult = Super::CanAcceptFocus(PlayerIndex);
    }
    return bResult;
}

/* Unnamed in the kit: a FUINavigationData helper taking (Face, Arg), and the UUIObject wrapper that skips
 * UIFACE_MAX (4). */


// @baa 0x00daab70
UBOOL UUIObject::sub_00daab70(INT Face, INT Arg)
{
    UBOOL bResult = FALSE;
    if (Face != 4)
    {
        bResult = ((FUINavigationData&)NavigationTargets).sub_00ddef10(Face, Arg);
    }
    return bResult;
}

// @baa 0x00dc45f0
/* UE3's UUIObject::ContainsPoint(const FVector2D& Coordinates): whether the point, taken into canvas space, is inside
 * the widget's RenderBounds. */
UBOOL UUIObject::ContainsPoint(const FVector2D& Coordinates)
{
    FVector CanvasPosition = PixelToCanvas(Coordinates);
    if (CanvasPosition.X >= RenderBounds[0] && CanvasPosition.X <= RenderBounds[2] && CanvasPosition.Y >= RenderBounds[1]
        && CanvasPosition.Y <= RenderBounds[3])
    {
        return TRUE;
    }
    return FALSE;
}

/* Unnamed in the kit: UE3's FUINavigationData::SetNavigationTarget(Left, Top, Right, Bottom)-style setter for all
 * four faces; reports whether anything changed. */

// @baa 0x00daa990
/* UUIObject slot 0x1fc (kit vf_1fc, UE3 SetNavigationTarget(LeftTarget, TopTarget, RightTarget, BottomTarget)): when
 * every face accepts its target (slot 0x230, UE3 CanSetNavigationTarget-style), store them and request a position
 * update (slot 0x164) if they changed. */
UBOOL UUIObject::vf_1fc(class UUIObject* LeftTarget, class UUIObject* TopTarget, class UUIObject* RightTarget, class UUIObject* BottomTarget)
{
    if (vf_230(0, LeftTarget) && vf_230(1, TopTarget) && vf_230(2, RightTarget) && vf_230(3, BottomTarget))
    {
        if (NavigationTargets.sub_00ddee10(LeftTarget, TopTarget, RightTarget, BottomTarget))
        {
            RequestSceneUpdate(FALSE, FALSE, TRUE, FALSE);
        }
    }
    return TRUE;
}

// @baa 0x00db0f20
/* UUIObject slot 0x23c (kit vf_23c): run slot 0x240 for each face and clear its docking bResolved flag, then pass the
 * call on to every child; the result is cleared when a face's slot 0x240 fails or a child returns nonzero. */
INT UUIObject::vf_23c(INT Arg)
{
    INT bResult = TRUE;
    for (INT Face = 0; Face < 4; Face++)
    {
        if (!vf_240(Arg, Face))
        {
            bResult = FALSE;
        }
        DockTargets.bResolved[(BYTE)Face] = 0;
    }
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        if (Children(ChildIndex)->vf_23c(Arg))
        {
            bResult = FALSE;
        }
    }
    return bResult;
}

/* Unnamed in the kit: UE3's FUINavigationData::SetForcedNavigationTarget(Left, Top, Right, Bottom)-style setter for
 * all four faces; reports whether anything changed. */

// @baa 0x00daaaa0
/* UUIObject slot 0x200 (kit vf_200, UE3 SetForcedNavigationTarget(LeftTarget, TopTarget, RightTarget, BottomTarget)):
 * when every face accepts its target (slot 0x230), mark the widget modified (slot 0x18, UE3 Modify), store them and request a position update
 * (slot 0x164) if they changed. */
UBOOL UUIObject::vf_200(class UUIObject* LeftTarget, class UUIObject* TopTarget, class UUIObject* RightTarget, class UUIObject* BottomTarget)
{
    INT bResult = FALSE;
    if (vf_230(0, LeftTarget) && vf_230(1, TopTarget) && vf_230(2, RightTarget) && vf_230(3, BottomTarget))
    {
        Modify(FALSE);
        if (NavigationTargets.sub_00ddeeb0(LeftTarget, TopTarget, RightTarget, BottomTarget))
        {
            RequestSceneUpdate(FALSE, FALSE, TRUE, FALSE);
        }
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x00da9df0
/* UE3's UUIScene::SetSceneInputMode(BYTE NewInputMode): store the mode and, when it changed, request a scene input
 * mask update. */
void UUIScene::SetSceneInputMode(BYTE NewInputMode)
{
    UBOOL bChanged = SceneInputMode != NewInputMode;
    SceneInputMode = NewInputMode;
    if (bChanged)
    {
        RequestSceneInputMaskUpdate();
    }
}

// @baa 0x00db0850
/* UUIScene slot 0x10c: UUIScreenObject's version, then request a scene input mask update and a position update (slot
 * 0x164). */
void UUIScene::CreatePlayerData(INT Arg1, ULocalPlayer* Arg2)
{
    UUIScreenObject::CreatePlayerData(Arg1, Arg2);
    RequestSceneInputMaskUpdate();
    RequestSceneUpdate(FALSE, TRUE, TRUE, FALSE);
}

/* Unnamed in the kit: whether any of the scene's pending-update requests (the first seven bUpdate/bRefresh/bRecalculate
 * flags) is set. */

// @baa 0x00da9d70
UBOOL UUIScene::sub_00da9d70()
{
    return bUpdateDockingStack || bUpdateScenePositions || bUpdateNavigationLinks || bUpdatePrimitiveUsage
        || bRefreshWidgetStyles || bRefreshStringFormatting || bRecalculateInputMask;
}

// @baa 0x00dacf60
/* With bEnableScenePostProcessing, the configured ScenePostProcessGroup, where the dynamic group resolves to
 * group 1 for the topmost active scene, group 2 for an active scene below it, else none. */
EUIPostProcessGroup UUIScene::GetScenePostProcessGroup()
{
    INT Result = 0;
    if (bEnableScenePostProcessing)
    {
        Result = ScenePostProcessGroup;
        if (Result == UIPostProcess_Dynamic)
        {
            if (IsSceneActive(TRUE))
            {
                return UIPostProcess_Background;
            }
            Result = IsSceneActive(FALSE) ? UIPostProcess_Foreground : UIPostProcess_None;
        }
    }
    return (EUIPostProcessGroup)Result;
}

// @baa 0x00db0a90
INT UUIScene::FindTickableObjectIndex(const TScriptInterface<IUITickableObject>& SearchObj) const
{
    INT Result = INDEX_NONE;
    if (SearchObj.Object != NULL && SearchObj.Interface != NULL)
    {
        Result = TickableObjects.FindItemIndex(SearchObj);
    }
    return Result;
}

// @baa 0x00dafa80
/* UUIScreenObject slot 0x1cc (kit vf_1cc, unnamed in UE3 terms): pass the notification on to every child. */
void UUIScreenObject::vf_1cc()
{
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        Children(ChildIndex)->vf_1cc();
    }
}

// @baa 0x00db42a0
UBOOL UUIScene::UnregisterTickableObject(const TScriptInterface<IUITickableObject>& ObjectToRemove)
{
    UBOOL bResult = FALSE;
    if (ObjectToRemove.Object != NULL && ObjectToRemove.Interface != NULL)
    {
        INT ObjIndex = TickableObjects.FindItemIndex(ObjectToRemove);
        if (TickableObjects.IsValidIndex(ObjIndex))
        {
            TickableObjects.Remove(ObjIndex, 1);
            bResult = TRUE;
        }
    }
    return bResult;
}

// @baa 0x00da9930
UBOOL UUIScreenObject::IsVisible(UBOOL bIncludeParents)
{
	return !bHidden && (!bIncludeParents || GetParent() == NULL || GetParent()->IsVisible(TRUE));
}

// @baa 0x00da9980
UBOOL UUIScreenObject::IsHidden(UBOOL bIncludeParents)
{
	return bHidden || (bIncludeParents && GetParent() != NULL && GetParent()->IsHidden(TRUE));
}

// @baa 0x00dc2d20
/* A scene's positions are resolved for every face once no position update is pending. */
INT UUIScene::HasPositionBeenResolved(BYTE Face)
{
	return !bUpdateScenePositions;
}

// @baa 0x00da9d30
/* Asks the scene client to reinitialize this scene's primitives and/or flags the primitive usage for review. */
void UUIScene::RequestPrimitiveReview(UBOOL bReinitializePrimitives, UBOOL bReviewPrimitiveUsage)
{
	if (bReinitializePrimitives && SceneClient != NULL)
	{
		SceneClient->RequestPrimitiveReinitialization(this);
	}
	if (bReviewPrimitiveUsage)
	{
		bUpdatePrimitiveUsage = TRUE;
	}
}

// UUIScene: hands an update down to the scene's event sequence.

// @baa 0x00da9d90
void UUIScene::sub_00da9d90(FLOAT DeltaTime)
{
	if (EventProvider != NULL && EventProvider->EventContainer != NULL)
	{
		EventProvider->EventContainer->UpdateOp(DeltaTime);
	}
}


// @baa 0x00daa8b0
/* PostRename: keeps WidgetTag in step with the object's name. */
void UUIObject::PostRename()
{
	if (WidgetTag != GetFName())
	{
		WidgetTag = GetFName();
		((UObject*)this)->MarkPackageDirty();
	}
}

#include "ue3/ConstructObject.h"

// @baa 0x00dae3d0
template UUIState* ConstructObject<UUIState>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 441 "candidate.cpp"

// @baa 0x00dae470
template USceneDataStore* ConstructObject<USceneDataStore>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// FInit_00db2cb0: a three-word record cleared on construction.
struct FInit_00db2cb0
{
	void* Reserved;
	void* Reserved2;
	INT A; /* 0x8 */
	INT B; /* 0xc */
	INT C; /* 0x10 */

	FInit_00db2cb0* Init(INT Unused);
};

// @baa 0x00db2cb0
FInit_00db2cb0* FInit_00db2cb0::Init(INT Unused)
{
	A = 0;
	B = 0;
	C = 0;
	return this;
}
