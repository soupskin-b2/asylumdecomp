// UnUIObjects.cpp: 6 functions
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
