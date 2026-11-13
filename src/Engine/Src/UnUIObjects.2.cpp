// UnUIObjects.cpp (part 2 of 17): 8 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca61c0
void UUIObject::execSetWidgetStyleByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StyleResolverTagToSet);
    P_GET_NAME(StyleFriendlyName);
    P_FINISH;
    *(UBOOL*)Result = SetWidgetStyleByName(StyleResolverTagToSet, StyleFriendlyName);
}

/* Engine.UIRoot.EUIWidgetFace (not in Classes.h) */

// @baa 0x00cc7650
void UUIScreenObject::execGetDockedWidgets(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UUIObject*, out_DockedWidgets);
	P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
	P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
	P_FINISH;
	GetDockedWidgets(out_DockedWidgets, SourceFace, TargetFace);
}

// @baa 0x00daeb80
void UUIScreenObject::execGetWidgetPathName(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FString*)Result = GetWidgetPathName();
}

class IUIStyleResolver;
struct UUIObject_ : public UUIObject
{
    /* FindStyleSubscriberIndex: StyleSubscribers.FindItemIndex(Subscriber) */
    INT sub_00db0fd0(const TScriptInterface<IUIStyleResolver>& Subscriber);
};

// @baa 0x00cb3e00
void UUIObject::execFindStyleSubscriberIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_TINTERFACE_REF(IUIStyleResolver, Subscriber);
    P_FINISH;
    *(INT*)Result = ((UUIObject_*)this)->sub_00db0fd0(Subscriber);
}

/* UnScript.h has this; ue3/Script.h doesn't. */
#define P_GET_OBJECT_OPTX_REF(c, v, d) GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; c* v##T = d; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); c*& v = GPropAddr ? *(c**)GPropAddr : v##T;

// @baa 0x00da8af0
void UUIRoot::execGetCursorPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT_REF(CursorX);
    P_GET_INT_REF(CursorY);
    P_GET_OBJECT_OPTX_REF(UUIScene, Scene, NULL);
    P_FINISH;
    *(UBOOL*)Result = UUIRoot::GetCursorPosition(CursorX, CursorY, Scene);
}

// @baa 0x00ca3240
void UUIScreenObject::execCreateWidget(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UUIScreenObject, Owner);
    P_GET_OBJECT(UClass, WidgetClass);
    P_GET_OBJECT_OPTX(UObject, WidgetArchetype, NULL);
    P_GET_NAME_OPTX(WidgetName, NAME_None);
    P_FINISH;
    *(UUIObject**)Result = this->CreateWidget(Owner, WidgetClass, WidgetArchetype, WidgetName);
}

/* FVector2D(0,0): the kit's FVector2D has no constructors. */
static __forceinline FVector2D MakeVector2D(FLOAT InX, FLOAT InY)
{
    FVector2D V;
    V.X = InX;
    V.Y = InY;
    return V;
}

// @baa 0x00ca3340
void UUIScreenObject::execInstanceUIPrefab(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UUIPrefab, SourcePrefab);
    P_GET_NAME_OPTX(PrefabInstanceName, NAME_None);

    /* P_GET_STRUCT_OPTX_REF(FVector2D, PlacementLocation, FVector2D(0,0)) */
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    FVector2D PlacementLocationT;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &PlacementLocationT);
    FVector2D* pPlacementLocation = (FVector2D*)GPropAddr;
    FVector2D& PlacementLocation = GPropAddr ? *(FVector2D*)GPropAddr : PlacementLocationT;
    if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
    {
        PlacementLocation = MakeVector2D(0, 0);
    }

    P_GET_INT_OPTX(InsertIndex, INDEX_NONE);
    P_GET_UBOOL_OPTX(bRenameExisting, TRUE);
    P_FINISH;
    *(UUIPrefabInstance**)Result = this->InstanceUIPrefab(SourcePrefab, PrefabInstanceName, pPlacementLocation ? &PlacementLocation : NULL, InsertIndex, bRenameExisting);
}

/* TArray<UUIObject*> with the out-of-line copy assignment (00db2910) and destructor (00cc4b80) the original calls. */
struct FUIObjectArray : public TArray<UUIObject*>
{
    FUIObjectArray() {}
    ~FUIObjectArray();
    FUIObjectArray& operator=(const FUIObjectArray& Other);
};

struct UUIScreenObject__00db71b0 : public UUIScreenObject
{
    /* TArray<UUIObject*> GetChildren(UBOOL bRecurse=FALSE, TArray<UUIObject*>* ExclusionSet=NULL) const */
    FUIObjectArray sub_00db7140(UBOOL bRecurse, FUIObjectArray* ExclusionSet) const;
};

// @baa 0x00db71b0
void UUIScreenObject::execGetChildren(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bRecurse, FALSE);

    /* P_GET_TARRAY_OPTX(UUIObject*, ExclusionSet, TArray<UUIObject*>()) */
    FUIObjectArray ExclusionSet;
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    Stack.Step(Stack.Object, &ExclusionSet);
    if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
    {
        ExclusionSet = FUIObjectArray();
    }
    const UBOOL bHasExclusionSet = !(GRuntimeUCFlags & RUC_SkippedOptionalParm);

    P_FINISH;

    const UUIScreenObject__00db71b0* This = (const UUIScreenObject__00db71b0*)this;
    if (bHasExclusionSet)
    {
        *(FUIObjectArray*)Result = This->sub_00db7140(bRecurse, &ExclusionSet);
    }
    else
    {
        *(FUIObjectArray*)Result = This->sub_00db7140(bRecurse, NULL);
    }
}
