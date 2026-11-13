// UnUIStyles.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca7660
void UUIStyle_Combo::execGetComboTextStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Text**)Result = GetComboTextStyle();
}

// @baa 0x00ca76a0
void UUIStyle_Combo::execGetComboImageStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Image**)Result = GetComboImageStyle();
}

// @baa 0x00ca1c60
void UUIStyle::execGetStyleForState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIState, StateObject);
	P_FINISH;
	*(UUIStyle_Data**)Result = GetStyleForState(StateObject);
}

// @baa 0x00ca1cd0
void UUIStyle::execGetStyleForStateByClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, StateClass);
	P_FINISH;
	*(UUIStyle_Data**)Result = GetStyleForStateByClass(StateClass);
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

// @baa 0x00dd0180
template UUIStyle_Data* ConstructObject<UUIStyle_Data>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 74 "candidate.cpp"
