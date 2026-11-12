// Engine_0a00000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00a06690
void USkeletalMeshComponent::execUpdateClothParams( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateClothParams();
}

struct SkeletalMeshNative : USkeletalMeshComponent
{
    void sub_00a00110(const FVector& ClothOffSet);
};

// @baa 0x00a01210
void USkeletalMeshComponent::execSetClothPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ClothOffSet);
    P_FINISH;
    static_cast<SkeletalMeshNative*>(this)->sub_00a00110(ClothOffSet);
}

struct SkeletalMeshNative_00a01270 : USkeletalMeshComponent
{
    void sub_00a002e0(const FVector& VelocityOffSet);
};

// @baa 0x00a01270
void USkeletalMeshComponent::execSetClothVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, VelocityOffSet);
    P_FINISH;
    static_cast<SkeletalMeshNative_00a01270*>(this)->sub_00a002e0(VelocityOffSet);
}

// @baa 0x00a013c0
void USkeletalMeshComponent::execEnableClothValidBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(IfEnableClothValidBounds);
	P_FINISH;
	sub_00a00500(IfEnableClothValidBounds);
}

// @baa 0x00a019f0
void USkeletalMeshComponent::execSetHasPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bHasInstance);
	P_FINISH;
	sub_00a01980(bHasInstance);
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

// @baa 0x00a07b10
template URB_ConstraintInstance* ConstructObject<URB_ConstraintInstance>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 93 "candidate.cpp"
