// Editor_0f70000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00f73120
void UTransactor::Reset( INT Flag ) PURE_VIRTUAL(UTransactor::Reset,);

// @baa 0x00f730c0
INT UTransactor::Begin(INT)
{
    GError->Logf(TEXT("Pure virtual not implemented (%s)"), TEXT("UTransactor::Begin"));
    return 0;
}

// @baa 0x00f73160
UBOOL UTransactor::CanUndo(FString* Str)
{
	PURE_VIRTUAL(UTransactor::CanUndo, return 0;)
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

// @baa 0x00f76940
template UEditorUserSettings* ConstructObject<UEditorUserSettings>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 60 "candidate.cpp"
