// UnUIObjects.cpp: 1 function
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
