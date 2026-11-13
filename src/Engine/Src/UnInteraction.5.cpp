// UnInteraction.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ce4;
	/* ENGINE_Tick */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_PROBEMIN 0x12c
#define NAME_Tick 0x150
struct UInteraction_ : public UInteraction
{
	void eventTick(FLOAT DeltaTime);
};

// @baa 0x00888f20
/* The script event's generated glue (EngineClasses.h), out of line here. Tick is a probe
 * function: the glue only calls into script when the current state probes for it. */
void UInteraction_::eventTick(FLOAT DeltaTime)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Tick - NAME_PROBEMIN))))
	{
		struct Interaction_eventTick_Parms
		{
			FLOAT DeltaTime;
		} Parms;
		Parms.DeltaTime = DeltaTime;
		ProcessEvent(FindFunctionChecked(g_026c4ce4), &Parms);
	}
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */

struct UObject_ : public UObject
{
    static UObject* GetTransientPackage();                                    // 005c1d70
};

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject_::GetTransientPackage();
    }
    return (T*)UObject::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00d8e5a0
template UUIInputConfiguration* ConstructObject<UUIInputConfiguration>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 70 "candidate.cpp"
