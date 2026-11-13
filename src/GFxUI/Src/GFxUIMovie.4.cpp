// GFxUIMovie.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/GFx.h"

// @baa 0x00e41fb0
void UGFxMovie::execRefreshDataStoreBindings( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RefreshDataStoreBindings();
}

// @baa 0x00e41ff0
void UGFxMovie::execPublishDataStoreValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PublishDataStoreValues();
}

extern UEngine* g_026c3cdc;
// @baa 0x00e488e0
void UGFxMovie::execGetGameViewportClient(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UGameViewportClient**)Result = g_026c3cdc ? g_026c3cdc->GameViewport : NULL;
}

extern void* g_026caed4;
struct GFxViewport_
{
	void sub_00e63ae0(void*);
};

// @baa 0x00e64f70
void UGFxMovie::execSetTopMost(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (g_026caed4 && pMovie.Dummy)
		((GFxViewport_*)g_026caed4)->sub_00e63ae0((void*)pMovie.Dummy);
}

// @baa 0x00e67ea0
void UGFxMovie::execAddCaptureKey(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Key);
	P_FINISH;
	AddCaptureKey(Key);
}

// @baa 0x00e64ef0
void UGFxMovie::execClose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(Unload, 1);
	P_FINISH;
	Close(Unload);
}

// @baa 0x00e41ec0
void UGFxMovie::execPause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(pauseplay, 1);
	P_FINISH;
	Pause(pauseplay);
}

// @baa 0x00e41e40
// @baa 0x00e41e40
void UGFxMovie::execGetStickMagAng(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Stick);
    P_FINISH;
    *(FName*)Result = GetStickMagAng(Stick);
}

/* UGFxMovie::SetViewport(INT X, INT Y, INT Width, INT Height) is out of line at 00e49d40;
 * the kit doesn't declare it. */

// @baa 0x00e513f0
void UGFxMovie::execSetViewport(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(X);
    P_GET_INT(Y);
    P_GET_INT(Width);
    P_GET_INT(Height);
    P_FINISH;
    this->SetViewport(X, Y, Width, Height);
}

/* GFx.h only forward-declares FGFxEngine (GGFxEngine, 026caed4);
 * FlushPlayerInput(TSet<NAME_INDEX>* Keys) is out of line at 00e68530. */
class FGFxEngine {
public:
    void FlushPlayerInput(void* Keys); /* 0x00e68530 */
};

// @baa 0x00e6a470
void UGFxMovie::execFlushPlayerInput(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(capturekeysonly);
    P_FINISH;
    if (GGFxEngine)
    {
        if (!capturekeysonly)
        {
            GGFxEngine->FlushPlayerInput(NULL);
        }
        else if (pCaptureKeys.Dummy)
        {
            GGFxEngine->FlushPlayerInput((void*)pCaptureKeys.Dummy);
        }
    }
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject::GetTransientPackage();
    }
    return (T*)UObject::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00e58620
template UGFxDataStoreSubscriber* ConstructObject<UGFxDataStoreSubscriber>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 156 "candidate.cpp"
