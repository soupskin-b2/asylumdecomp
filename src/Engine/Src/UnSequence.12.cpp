// UnSequence.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00cc3b10
void USequenceOp::execGetLinkedObjects(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(USequenceObject*, out_Objects);
	P_GET_OBJECT_OPTX(UClass, ObjectType, NULL);
	P_GET_UBOOL_OPTX(bRecurse, FALSE);
	P_FINISH;
	GetLinkedObjects(out_Objects, ObjectType, bRecurse);
}

// @baa 0x00c98110
void USequenceOp::execHasLinkedOps(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bConsiderInputLinks, FALSE);
	P_FINISH;
	*(UBOOL*)Result = HasLinkedOps(bConsiderInputLinks);
}

// @baa 0x00c98630
// @baa 0x00c98630
void USeqAct_GetMatInstVectorParam::execGetColour(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FLinearColor, Colour);
    P_FINISH;
    GetColour(Colour);
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

// @baa 0x008b4010
template UMaterialInstanceConstant* ConstructObject<UMaterialInstanceConstant>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 71 "candidate.cpp"

// @baa 0x008b40b0
template UParticleSystemComponent* ConstructObject<UParticleSystemComponent>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x008f7ee0
template USequenceOp* ConstructObject<USequenceOp>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x008b4200
template UPrefabSequenceContainer* ConstructObject<UPrefabSequenceContainer>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
