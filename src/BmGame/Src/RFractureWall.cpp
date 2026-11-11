// RFractureWall.cpp: 13 functions
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
