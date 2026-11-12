// UnInterpolation.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USeqAct_Interp_ : public USeqAct_Interp
{
	void Stop();
	void execStop(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c98ae0
void USeqAct_Interp_::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
}

struct USeqAct_Interp__00c98b10 : public USeqAct_Interp
{
	void sub_00d14240(APlayerController*);
};

// @baa 0x00c98b10
void USeqAct_Interp::execAddPlayerToDirectorTracks(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APlayerController, PC);
	P_FINISH;
	((USeqAct_Interp__00c98b10*)this)->sub_00d14240(PC);
}

struct USeqAct_Interp__00c98a30 : public USeqAct_Interp
{
	void SetPosition(FLOAT NewPosition, UBOOL bJump);
	void execSetPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c98a30
void USeqAct_Interp__00c98a30::execSetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewPosition);
	P_GET_UBOOL_OPTX(bJump, FALSE);
	P_FINISH;
	SetPosition(NewPosition, bJump);
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

// @baa 0x00cf8a00
template UInterpTrackInst* ConstructObject<UInterpTrackInst>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 85 "candidate.cpp"

// @baa 0x00d11690
template UInterpData* ConstructObject<UInterpData>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
