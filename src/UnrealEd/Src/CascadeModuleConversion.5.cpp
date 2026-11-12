// CascadeModuleConversion.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

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

// @baa 0x012c5e60
template UDistributionFloatUniformCurve* ConstructObject<UDistributionFloatUniformCurve>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x012c5f00
template UDistributionFloatParticleParameter* ConstructObject<UDistributionFloatParticleParameter>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c5fa0
template UDistributionVectorConstantCurve* ConstructObject<UDistributionVectorConstantCurve>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c6040
template UDistributionVectorUniform* ConstructObject<UDistributionVectorUniform>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c60e0
template UDistributionVectorUniformCurve* ConstructObject<UDistributionVectorUniformCurve>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012c6180
template UDistributionVectorParticleParameter* ConstructObject<UDistributionVectorParticleParameter>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
