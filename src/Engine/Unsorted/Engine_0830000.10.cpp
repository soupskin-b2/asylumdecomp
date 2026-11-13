// Engine_0830000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ba8;
	/* SetDisabled */
struct ACoverLink_ : public ACoverLink
{
	void eventSetDisabled(UBOOL bNewDisabled);
};

// @baa 0x00833c90
/* CoverLink.SetDisabled script event: the generated glue, out of line here. */
void ACoverLink_::eventSetDisabled(UBOOL bNewDisabled)
{
	struct CoverLink_eventSetDisabled_Parms
	{
		UBOOL bNewDisabled;
	} Parms;
	Parms.bNewDisabled = bNewDisabled ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ba8), &Parms);
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

// @baa 0x0083d400
template UReachSpec* ConstructObject<UReachSpec>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 63 "candidate.cpp"
