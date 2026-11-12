// UnUIStyles.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca7660
void UUIStyle_Combo::execGetComboTextStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Text**)Result = sub_00ddbb50();
}

// @baa 0x00ca76a0
void UUIStyle_Combo::execGetComboImageStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Image**)Result = sub_00ddbb70();
}

// @baa 0x00ca1c60
void UUIStyle::execGetStyleForState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIState, StateObject);
	P_FINISH;
	*(UUIStyle_Data**)Result = sub_00ddaa80(StateObject);
}

// @baa 0x00ca1cd0
void UUIStyle::execGetStyleForStateByClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, StateClass);
	P_FINISH;
	*(UUIStyle_Data**)Result = sub_00ddac00(StateClass);
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */
struct UClass_ : public UClass
{
    UBOOL IsChildOf(const UField* SomeBase) const
    {
        for (const UField* Struct = this; Struct; Struct = Struct->SuperField)
            if (Struct == SomeBase)
                return 1;
        return 0;
    }
};

struct UObject_ : public UObject
{
    static UObject* GetTransientPackage();                                    // 005c1d70
    static UObject* StaticConstructObject(UClass* Class, UObject* InOuter, FName Name, QWORD SetFlags, UObject* Template, FOutputDevice* Error, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph); // 005e44e0
};

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject_::GetTransientPackage();
    }
    return (T*)UObject_::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00dd0180
template UUIStyle_Data* ConstructObject<UUIStyle_Data>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 74 "candidate.cpp"
