// PointLightComponent.cpp: 15 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00708890
IMPLEMENT_CLASS_AT(UPointLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PointLightComponent.cpp", 11);

// @baa 0x007092b0

// @baa 0x006da6e0

// @baa 0x006da7f0
int UPointLightComponent::vf_000(void) { return 1; }

// @baa 0x006da800
bool UPointLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006da8b0
int sub_006da8b0(void) { return 1; }

extern char g_01ed493c[];
// @baa 0x006da8f0
int sub_006da8f0(void) { return (int)g_01ed493c; }

extern char g_01ebb554[];
// @baa 0x006da900
void UPointLightComponent::sub_006da900(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x006da910
undefined4 * UPointLightComponent::sub_006da910(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct UPointLightComponent_ : public UPointLightComponent
{
    void sub_006da930(const FMatrix* In);
};

// @baa 0x006da930
void UPointLightComponent_::sub_006da930(const FMatrix* In)
{
    CachedParentToWorld = *In;
}

struct FPointLightSceneProxy
{
	FPointLightSceneProxy(UPointLightComponent* Light);
	INT Member[692];
};

// @baa 0x00713300
UINT UPointLightComponent::CreateSceneInfo()
{
	FPointLightSceneProxy* Proxy = new FPointLightSceneProxy(this);
	return (UINT)Proxy;
}

// @baa 0x006da9e0
/* A point light's position is its world origin (LightToWorld.GetOrigin(), W = 1). */
FVector4 UPointLightComponent::GetPosition() const
{
    return FVector4(FVector(LightToWorld.WPlane.X, LightToWorld.WPlane.Y, LightToWorld.WPlane.Z), 1.f);
}

/* Kit gap: UPointLightComponent::UpdatePreviewLightRadius (PointLightComponent.cpp) isn't declared. */
struct UPointLightComponent__006da950 : public UPointLightComponent
{
	void UpdatePreviewLightRadius();
};

// @baa 0x006da950
/* Keeps the editor's light radius preview in step with the light. */
void UPointLightComponent__006da950::UpdatePreviewLightRadius()
{
	if (PreviewLightRadius)
	{
		PreviewLightRadius->SphereRadius = Radius;
		PreviewLightRadius->Translation = Translation;
	}
}

#define SMALL_NUMBER (1.e-8f)
/* FMatrix's operator* (0x0058e560), RemoveScaling (0x006a7f30) and Inverse (0x006e1510) (UnMath.h, out of line
 * here); the kit's FMatrix has no methods. */
struct FMatrix_ : public FMatrix
{
    void RemoveScaling(FLOAT Tolerance = SMALL_NUMBER);
    FMatrix operator*(const FMatrix& Other) const;
    FMatrix Inverse() const;
};

// @baa 0x006e42d0
/* Slot 0x184 (unnamed in the kit; UE3's SetTransformedToWorld): the light's frame is the parent's, translated
 * and with X and Z swapped, without scaling. */
void UPointLightComponent::vf_184()
{
    LightToWorld = (const FMatrix_&)((const FMatrix_&)FMatrix(
            FPlane(+0, +0, +1, +0),
            FPlane(+0, +1, +0, +0),
            FPlane(+1, +0, +0, +0),
            FPlane(+0, +0, +0, +1)
            ) *
        FTranslationMatrix(Translation)) *
        CachedParentToWorld;
    ((FMatrix_&)LightToWorld).RemoveScaling();
    WorldToLight = ((FMatrix_&)LightToWorld).Inverse();
}

/* UnMath.h inlines the kit's FVector/FMatrix don't declare yet (data-free helpers). */
struct FVector_ : public FVector
{
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) : FVector(InX, InY, InZ) {}
	FORCEINLINE FVector operator+(const FVector& V) const { return FVector(X + V.X, Y + V.Y, Z + V.Z); }
	FORCEINLINE FVector operator-(const FVector& V) const { return FVector(X - V.X, Y - V.Y, Z - V.Z); }
};

struct FMatrix__006daa30 : public FMatrix
{
	FORCEINLINE FVector_ GetOrigin() const { return FVector_(WPlane.X, WPlane.Y, WPlane.Z);	/* M[3][0..2] */ }
};

// @baa 0x006daa30
FBox UPointLightComponent::GetBoundingBox() const
{
	return FBox(((const FMatrix__006daa30&)LightToWorld).GetOrigin() - FVector(Radius, Radius, Radius),
		((const FMatrix__006daa30&)LightToWorld).GetOrigin() + FVector(Radius, Radius, Radius));
}
