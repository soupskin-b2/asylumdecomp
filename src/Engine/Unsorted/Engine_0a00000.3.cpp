// Engine_0a00000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateClothParams();
	void execUpdateClothParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a06690
void USkeletalMeshComponent_::execUpdateClothParams( FFrame& Stack, RESULT_DECL )
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

struct USkeletalMeshComponent__00a013c0 : public USkeletalMeshComponent
{
	void sub_00a00500(UBOOL);
};

// @baa 0x00a013c0
void USkeletalMeshComponent::execEnableClothValidBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(IfEnableClothValidBounds);
	P_FINISH;
	((USkeletalMeshComponent__00a013c0*)this)->sub_00a00500(IfEnableClothValidBounds);
}

struct USkeletalMeshComponent__00a019f0 : public USkeletalMeshComponent
{
	void sub_00a01980(UBOOL);
};

// @baa 0x00a019f0
void USkeletalMeshComponent::execSetHasPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bHasInstance);
	P_FINISH;
	((USkeletalMeshComponent__00a019f0*)this)->sub_00a01980(bHasInstance);
}
