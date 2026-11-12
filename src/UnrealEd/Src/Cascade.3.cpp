// Cascade.cpp: 8 functions
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

// @baa 0x012a2bf0
template UParticleEmitter* ConstructObject<UParticleEmitter>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x012a2c90
template UInterpCurveEdSetup* ConstructObject<UInterpCurveEdSetup>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012a2d30
template UParticleModuleUberRainDrops* ConstructObject<UParticleModuleUberRainDrops>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012a2dd0
template UParticleModuleUberRainImpacts* ConstructObject<UParticleModuleUberRainImpacts>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012a2e70
template UParticleModuleUberRainSplashA* ConstructObject<UParticleModuleUberRainSplashA>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012a2f10
template UParticleModuleUberRainSplashB* ConstructObject<UParticleModuleUberRainSplashB>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012a2fb0
template UParticleModule* ConstructObject<UParticleModule>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x012be6a0
template UCascadeOptions* ConstructObject<UCascadeOptions>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
