// Engine_0780000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0078e4c0
void UAudioComponent::execGetMinDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMinDistance();
}

// @baa 0x0078e500
void UAudioComponent::execGetMaxDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMaxDistance();
}

struct UAudioComponent_ : public UAudioComponent
{
    /* SetFloatParameter (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078dbc0(FName InName, FLOAT InFloat);
};

// @baa 0x0078e540
void UAudioComponent::execSetFloatParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    ((UAudioComponent_*)this)->sub_0078dbc0(InName, InFloat);
}

struct UAudioComponent__0078e5e0 : public UAudioComponent
{
    /* SetVelocity (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078df40(FName InName, FLOAT InFloat);
};

// @baa 0x0078e5e0
void UAudioComponent::execSetVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    ((UAudioComponent__0078e5e0*)this)->sub_0078df40(InName, InFloat);
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

// @baa 0x0078cfb0
template USoundCue* ConstructObject<USoundCue>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 88 "candidate.cpp"

// @baa 0x0078cf10
template UAudioComponent* ConstructObject<UAudioComponent>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
