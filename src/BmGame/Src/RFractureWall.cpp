// RFractureWall.cpp: 16 functions
// Placed here by: class 8, neighbours 2, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016cf110
int sub_016cf110(int a0, int a1) { return a1; }

int sub_01658a50(...);
int sub_0165af10(void);
extern undefined4 g_026e1b68;
// @baa 0x016cf120
int sub_016cf120(void)
{
  if (g_026e1b68 == 0) {
    g_026e1b68 = sub_01658a50(L"BmGame");
    sub_0165af10();
  }
  return g_026e1b68;
}

// @baa 0x016cf150
IMPLEMENT_CLASS_AT(ARFractureWallBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RFractureWall.cpp", 27);

// @baa 0x016cf260
int ARFractureWallBase::vf_000(void) { return 1; }

// @baa 0x016cf270
bool ARFractureWallBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006311e0(...);
int sub_007839c0(void);
extern undefined4 g_0239dec0;
// @baa 0x016d03a0
void ARFractureWallBase::vf_01c(void)
{
    int param_1 = (int)this;

  sub_007839c0();
  if ((*(int *)(param_1 + 0x1ac) == 0) &&
     (sub_006311e0("FracturedStaticMeshComponent != NULL",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RFractureWall.cpp"
                   ,0x146,&g_0239dec0), *(int *)(param_1 + 0x1ac) == 0)) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0x20c) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0x20d) = 1;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_016d84d0(); };

// @baa 0x016d84d0
void C::sub_016d84d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x016e10b0
int ARFractureWallBase::sub_016e10b0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x230;
}

struct A_016e12d0 { virtual void sub_016e16e0(); char pad[556]; };

struct B_016e12d0 { virtual void sub_016e16e0(); };

struct C_016e12d0 : A_016e12d0, B_016e12d0 { virtual void sub_016e16e0(); C_016e12d0(); };

C_016e12d0::C_016e12d0() {}

// @baa 0x016e12d0
void C_016e12d0::sub_016e16e0() {}

// @baa 0x016e1620
// @baa 0x016e16e0
// @baa 0x016e39f0
// @baa 0x016e3a30

struct C_Mesh280
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual INT vf280() = 0;
};

struct C_016d0400
{
    BYTE Pad[0x1ac];
    C_Mesh280* Comp;
    INT sub_016d0400();
};

// @baa 0x016d0400
INT C_016d0400::sub_016d0400()
{
    if (Comp != NULL)
        return Comp->vf280();
    return 0;
}

struct C_Mesh284
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual void d160() = 0;
    virtual INT vf284() = 0;
};

struct C_016d0420
{
    BYTE Pad[0x1ac];
    C_Mesh284* Comp;
    INT sub_016d0420();
};

// @baa 0x016d0420
INT C_016d0420::sub_016d0420()
{
    if (Comp != NULL)
        return Comp->vf284();
    return 0;
}

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

// @baa 0x016d0910
/* A fracture wall is never world geometry, whatever collision type it's given. */
void ARFractureWallBase::PostEditChange(UProperty* PropertyThatChanged)
{
    if (PropertyThatChanged && GetFName(PropertyThatChanged) == FName_(TEXT("CollisionType")))
    {
        bWorldGeometry = FALSE;
    }
    Super::PostEditChange(PropertyThatChanged);
}
