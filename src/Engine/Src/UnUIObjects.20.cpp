// UnUIObjects.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* TArray<UUIObject*> with the out-of-line copy assignment (00db2910) and destructor (00cc4b80) the original calls. */
struct FUIObjectArray : public TArray<UUIObject*>
{
    FUIObjectArray() {}
    ~FUIObjectArray();
    FUIObjectArray& operator=(const FUIObjectArray& Other);
};

struct UUIScreenObject_ : public UUIScreenObject
{
    /* INT GetDockClients(TArray<UUIObject*>* out_DockClients, UBOOL bDirectDockClientsOnly, BYTE TargetFace, BYTE SourceFace) */
    INT sub_00db3360(FUIObjectArray* out_DockClients, UBOOL bDirectDockClientsOnly, BYTE TargetFace, BYTE SourceFace);
};

// @baa 0x00db7330
void UUIScreenObject::execGetDockClients(FFrame& Stack, RESULT_DECL)
{
    /* P_GET_TARRAY_OPTX_REF(UUIObject*, DockClients, TArray<UUIObject*>()) */
    FUIObjectArray DockClientsT;
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &DockClientsT);
    FUIObjectArray* pDockClients = (FUIObjectArray*)GPropAddr;
    FUIObjectArray& DockClients = GPropAddr ? *(FUIObjectArray*)GPropAddr : DockClientsT;
    if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
    {
        DockClients = FUIObjectArray();
    }

    P_GET_UBOOL_OPTX(bDirectDockClientsOnly, TRUE);
    P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
    P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
    P_FINISH;

    *(INT*)Result = ((UUIScreenObject_*)this)->sub_00db3360(pDockClients, bDirectDockClientsOnly, TargetFace, SourceFace);
}

/* TArray<UUIDataStore*> with the out-of-line destructor (00cc4a60) the original calls. */
struct FUIDataStoreArray : public TArray<UUIDataStore*>
{
    FUIDataStoreArray() {}
    ~FUIDataStoreArray();
};

struct UUIObject_ : public UUIObject
{
    /* GetDefaultDataStores(TArray<UUIDataStore*>& out_BoundDataStores); Classes.h doesn't declare it. */
    void sub_00db5ac0(FUIDataStoreArray& out_BoundDataStores);
};

// @baa 0x00cc7770
void UUIObject::execGetDefaultDataStores(FFrame& Stack, RESULT_DECL)
{
    /* P_GET_TARRAY_REF(UUIDataStore*, out_BoundDataStores) */
    FUIDataStoreArray out_BoundDataStoresT;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &out_BoundDataStoresT);
    FUIDataStoreArray& out_BoundDataStores = GPropAddr ? *(FUIDataStoreArray*)GPropAddr : out_BoundDataStoresT;
    P_FINISH;
    ((UUIObject_*)this)->sub_00db5ac0(out_BoundDataStores);
}

// @baa 0x00ca4b80
void UUIScreenObject::execCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, CanvasPosition);
    P_FINISH;
    *(FVector4*)Result = CanvasToScreen(CanvasPosition);
}

// @baa 0x00ca4cd0
void UUIScreenObject::execPixelToScreen(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector2D, PixelPosition);
    P_FINISH;
    *(FVector4*)Result = PixelToScreen(PixelPosition);
}

// @baa 0x00ca4c20
void UUIScreenObject::execScreenToPixel(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector4, ScreenPosition);
    P_FINISH;
    *(FVector2D*)Result = ScreenToPixel(ScreenPosition);
}

// @baa 0x00ca4d70
void UUIScreenObject::execScreenToCanvas(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector4, ScreenPosition);
    P_FINISH;
    *(FVector*)Result = ScreenToCanvas(ScreenPosition);
}

extern FName g_026c4040;
	/* ENGINE_RemovedFromParent */
struct UUIScreenObject__00da6e00 : public UUIScreenObject
{
	void eventRemovedFromParent(class UUIScreenObject* WidgetOwner);
};

// @baa 0x00da6e00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIScreenObject__00da6e00::eventRemovedFromParent(class UUIScreenObject* WidgetOwner)
{
	struct UIScreenObject_eventRemovedFromParent_Parms
	{
		class UUIScreenObject* WidgetOwner;
	} Parms;
	Parms.WidgetOwner = WidgetOwner;
	ProcessEvent(FindFunctionChecked(g_026c4040), &Parms);
}

extern FName g_026c5534;
	/* ENGINE_AddedChild */
struct UUIScreenObject__00da6e40 : public UUIScreenObject
{
	void eventAddedChild(class UUIScreenObject* WidgetOwner, class UUIObject* NewChild);
};

// @baa 0x00da6e40
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIScreenObject__00da6e40::eventAddedChild(class UUIScreenObject* WidgetOwner, class UUIObject* NewChild)
{
	struct UIScreenObject_eventAddedChild_Parms
	{
		class UUIScreenObject* WidgetOwner;
		class UUIObject* NewChild;
	} Parms;
	Parms.WidgetOwner = WidgetOwner;
	Parms.NewChild = NewChild;
	ProcessEvent(FindFunctionChecked(g_026c5534), &Parms);
}

extern FName g_026c4e18;
	/* ENGINE_SceneActivated */
struct UUIScene_ : public UUIScene
{
	void eventSceneActivated(UBOOL bInitialActivation);
};

// @baa 0x00da73e0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIScene_::eventSceneActivated(UBOOL bInitialActivation)
{
	struct UIScene_eventSceneActivated_Parms
	{
		UBOOL bInitialActivation;
	} Parms;
	Parms.bInitialActivation = bInitialActivation ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4e18), &Parms);
}

	/* ENGINE_AddedChild */
struct UUIScreenObject__00da9010 : public UUIScreenObject
{
	void eventAddedChild(class UUIScreenObject* WidgetOwner, class UUIObject* NewChild);
};

// @baa 0x00da9010
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUIScreenObject__00da9010::eventAddedChild(class UUIScreenObject* WidgetOwner, class UUIObject* NewChild)
{
	struct UIScreenObject_eventAddedChild_Parms
	{
		class UUIScreenObject* WidgetOwner;
		class UUIObject* NewChild;
	} Parms;
	Parms.WidgetOwner = WidgetOwner;
	Parms.NewChild = NewChild;
	ProcessEvent(FindFunctionChecked(g_026c5534), &Parms);
}

// @baa 0x00da8ef0
void UUIScreenObject::execRequestFormattingUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	RequestFormattingUpdate();
}

// @baa 0x00ca39f0
void UUIScreenObject::execRequestSceneInputMaskUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	RequestSceneInputMaskUpdate();
}

/* Kit gaps: the native's exec and CreateScene (00d707e0) aren't declared (names from the exe's native table). */
struct UUIInteraction_ : public UUIInteraction
{
	class UUIScene* CreateScene(class UClass* SceneClass, FName SceneTag, class UUIScene* SceneTemplate);	/* 0x00d707e0 */
	void execCreateScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca0df0
void UUIInteraction_::execCreateScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, SceneClass);
	P_GET_NAME_OPTX(SceneTag, NAME_None);
	P_GET_OBJECT_OPTX(UUIScene, SceneTemplate, NULL);
	P_FINISH;
	*(class UUIScene**)Result = CreateScene(SceneClass, SceneTag, SceneTemplate);
}

// @baa 0x00ca34d0
void UUIScreenObject::execInitialize(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, inOwnerScene);
	P_GET_OBJECT_OPTX(UUIObject, InOwner, NULL);
	P_FINISH;
	Initialize(inOwnerScene, InOwner);
}

// @baa 0x00ca54f0
void UUIObject::execNotifyValueChanged(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(PlayerIndex, INDEX_NONE);
	P_GET_INT_OPTX(NotifyFlags, 0);
	P_FINISH;
	NotifyValueChanged(PlayerIndex, NotifyFlags);
}
