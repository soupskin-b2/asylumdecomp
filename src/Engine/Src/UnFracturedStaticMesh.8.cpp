// UnFracturedStaticMesh.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_007a5160
{
    float X;
    float Y;
    float Z;

    C_007a5160& sub_007a5160(const C_007a5160& Other);
};

// @baa 0x007a5160
C_007a5160& C_007a5160::sub_007a5160(const C_007a5160& Other)
{
    X = Other.X;
    Y = Other.Y;
    Z = Other.Z;
    return *this;
}

static void use_007a5160(C_007a5160& A, const C_007a5160& B)
{
    A.sub_007a5160(B);
}

int sub_008038f0(void);
// @baa 0x007a7ac0
undefined4 AFracturedStaticMeshPart::vf_178(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
    iVar1 = sub_008038f0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

extern float g_026c0dd4;
// @baa 0x007a7b30
float AFractureManager::vf_354(void) { return g_026c0dd4; }

extern float g_026c0dd8;
// @baa 0x007a7b40
float AFractureManager::vf_358(void) { return g_026c0dd8; }

extern float g_026c0ddc;
// @baa 0x007a7b50
float AFractureManager::vf_35c() {
    return g_026c0ddc;
}

extern float g_026c0de0;
// @baa 0x007a7b60
float AFractureManager::vf_360(void)
{
    return g_026c0de0;
}

struct C {
    undefined4 sub_007c3370();
};

int sub_007c2df0(...);
// @baa 0x007c3370
undefined4 C::sub_007c3370(void)
{
    int param_1 = (int)this;

  sub_007c2df0(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return 0x14;
}

// @baa 0x007a7ae0
/* A fracture part's gravity is the zone's gravity scaled by FracPartGravScale. */
FLOAT AFracturedStaticMeshPart::GetGravityZ()
{
    return Super::GetGravityZ() * FracPartGravScale;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x007b8a60
/* Whether a fragment is currently drawn; out-of-range indices aren't. */
UBOOL UFracturedBaseComponent::IsFragmentVisible(INT FragmentIndex)
{
    if (FragmentIndex >= 0 && FragmentIndex < VisibleFragments.Num())
    {
        return ((const TArrayAt_<BYTE>&)VisibleFragments).At(FragmentIndex) != 0;
    }
    return FALSE;
}

#line 119 "candidate.cpp"

/* Kit gaps, with UE3's definitions (UnName.h, UnObjBas.h): FName has no constructor from a string and no
 * comparison operators, and UObject has no GetFName(). */
struct FName_ : public FName
{
    FName_(const TCHAR* Name, INT FindType = 1, UBOOL bSplitName = 1); /* 0x005d5620 */
};

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

static __forceinline FName GetFName(const UObject* Object)
{
    return Object->ObjectInternalInteger != INDEX_NONE ? (const FName_&)Object->Name : FName_(TEXT("<uninitialized>"));
}

// @baa 0x007a7460
/* Fractured meshes that only touch aren't world geometry; any other collision type makes them world geometry. */
void AFracturedStaticMeshActor::PostEditChange(UProperty* PropertyThatChanged)
{
    if (PropertyThatChanged && GetFName(PropertyThatChanged) == FName_(TEXT("CollisionType")))
    {
        if (CollisionType == COLLIDE_TouchAll || CollisionType == COLLIDE_TouchWeapons || CollisionType == COLLIDE_TouchAllButWeapons)
        {
            bWorldGeometry = FALSE;
        }
        else
        {
            bWorldGeometry = TRUE;
        }
    }
    Super::PostEditChange(PropertyThatChanged);
}
