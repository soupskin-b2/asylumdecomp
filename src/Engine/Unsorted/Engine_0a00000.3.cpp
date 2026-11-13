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
	EnableClothValidBounds(IfEnableClothValidBounds);
}

// @baa 0x00a019f0
void USkeletalMeshComponent::execSetHasPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bHasInstance);
	P_FINISH;
	SetHasPhysicsAssetInstance(bHasInstance);
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

// @baa 0x00a07b10
template URB_ConstraintInstance* ConstructObject<URB_ConstraintInstance>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 93 "candidate.cpp"
