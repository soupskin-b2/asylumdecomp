// UnPhysAsset.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_01fb3738;
// @baa 0x009f7520
undefined4 * UObject::sub_009f7520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb3738);
  return param_1;
}

// @baa 0x009f74f0
undefined4 sub_009f74f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x009f7500
int sub_009f7500(int a0, int a1) { return a1; }

// @baa 0x009f7510
int sub_009f7510(int a0, int a1) { return a1; }

// @baa 0x009f8e20
IMPLEMENT_CLASS_AT(UPhysicsAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 15);

// @baa 0x009f8f30
int UPhysicsAsset::vf_000(void) { return 1; }

// @baa 0x009f8f40
bool UPhysicsAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f8f80
IMPLEMENT_CLASS_AT(URB_BodySetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 16);

// @baa 0x009f9090
int URB_BodySetup::vf_000(void) { return 1; }

// @baa 0x009f90a0
bool URB_BodySetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct S {
    void sub_00a2c3b0();
    void sub_005db340();
    void sub_00a2c820();
};

// @baa 0x00a2c820
void S::sub_00a2c820() {
    sub_00a2c3b0();
    sub_005db340();
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x00a0bc60
/* Sets the damping ramp-up proportion on every body (BAA addition; name unknown) */
void UPhysicsAssetInstance::SetDampingRampupProportion(FLOAT NewProportion)
{
    if (NewProportion != CachedDampingRampupProportion)
    {
        const INT NumBodies = Bodies.Num();
        for (INT i = 0; i < NumBodies; i++)
        {
            URB_BodyInstance* BodyInst = ((TArrayAt_<URB_BodyInstance*>&)Bodies).At(i);
            if (BodyInst && BodyInst->DampingRampupProportion != NewProportion)
            {
                BodyInst->DampingRampupProportion = NewProportion;
                BodyInst->UpdateDampingProperties();
            }
        }
        CachedDampingRampupProportion = NewProportion;
    }
}

#line 105 "candidate.cpp"
