// UnSkeletalMesh.cpp (part 2 of 2): 47 functions
// Placed here by: neighbours 34, file 7, callers 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct T_00947630 { int x; };

// @baa 0x00947630
template const T_00947630& TIndirectArray<T_00947630>::operator()(INT) const;

struct C_00947680 { int a, b, c; C_00947680(); };

// @baa 0x00947680
C_00947680::C_00947680() : a(0), b(0), c(0) {}

struct C_009476c0 { int a, b, c; C_009476c0(); };

// @baa 0x009476c0
C_009476c0::C_009476c0() : a(0), b(0), c(0) {}

struct C { int sub_009476d0(void); };

// @baa 0x009476d0
int C::sub_009476d0(void) { return *(int*)((char*)this + 4); }

struct C_009476e0 { int a, b, c; C_009476e0(); };

// @baa 0x009476e0
C_009476e0::C_009476e0() : a(0), b(0), c(0) {}

struct C_009476f0 { int sub_009476f0(void); };

// @baa 0x009476f0
int C_009476f0::sub_009476f0(void) { return *(int*)((char*)this + 4); }

struct C_00947700 { int a, b, c; C_00947700(); };

// @baa 0x00947700
C_00947700::C_00947700() : a(0), b(0), c(0) {}

struct C_00947710 { int a, b, c; C_00947710(); };

// @baa 0x00947710
C_00947710::C_00947710() : a(0), b(0), c(0) {}

struct C_00947720 { int a, b, c; C_00947720(); };

// @baa 0x00947720
C_00947720::C_00947720() : a(0), b(0), c(0) {}

struct C_00947730 { int a, b, c; C_00947730(); };

// @baa 0x00947730
C_00947730::C_00947730() : a(0), b(0), c(0) {}

struct C_00947740 { int a, b, c; C_00947740(); };

// @baa 0x00947740
C_00947740::C_00947740() : a(0), b(0), c(0) {}

struct C_00947750 { int sub_00947750(void); };

// @baa 0x00947750
int C_00947750::sub_00947750(void) { return *(int*)((char*)this + 4); }

struct C_00947760 { int a, b, c; C_00947760(); };

// @baa 0x00947760
C_00947760::C_00947760() : a(0), b(0), c(0) {}

struct C_00947770 { int sub_00947770(void); };

// @baa 0x00947770
int C_00947770::sub_00947770(void) { return *(int*)((char*)this + 4); }

struct C_00947780 { int a, b, c; C_00947780(); };

// @baa 0x00947780
C_00947780::C_00947780() : a(0), b(0), c(0) {}

struct C_00947790 { int sub_00947790(void); };

// @baa 0x00947790
int C_00947790::sub_00947790(void) { return *(int*)((char*)this + 4); }

struct C_009477a0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_009477a0(INT Index);
};

// @baa 0x009477a0
UBOOL C_009477a0::sub_009477a0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_009477c0 { int a, b, c; C_009477c0(); };

// @baa 0x009477c0
C_009477c0::C_009477c0() : a(0), b(0), c(0) {}

struct C_009477d0 { int sub_009477d0(void); };

// @baa 0x009477d0
int C_009477d0::sub_009477d0(void) { return *(int*)((char*)this + 4); }

struct C_009477e0 { int a, b, c; C_009477e0(); };

// @baa 0x009477e0
C_009477e0::C_009477e0() : a(0), b(0), c(0) {}

struct C_009477f0 { int sub_009477f0(void); };

// @baa 0x009477f0
int C_009477f0::sub_009477f0(void) { return *(int*)((char*)this + 4); }

struct C_00947800 { int sub_00947800(void); };

// @baa 0x00947800
int C_00947800::sub_00947800(void) { return *(int*)((char*)this + 4); }

struct C_00947810 { int sub_00947810(void); };

// @baa 0x00947810
int C_00947810::sub_00947810(void) { return *(int*)((char*)this + 4); }

struct C_00947820 { int sub_00947820(void); };

// @baa 0x00947820
int C_00947820::sub_00947820(void) { return *(int*)((char*)this + 4); }

struct C_00947870 { int sub_00947870(void); };

// @baa 0x00947870
int C_00947870::sub_00947870(void) { return *(int*)((char*)this + 4); }

struct C_00947880 { int a, b, c; C_00947880(); };

// @baa 0x00947880
C_00947880::C_00947880() : a(0), b(0), c(0) {}

// @baa 0x0094b670
IMPLEMENT_CLASS_AT(USkeletalMeshSocket, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 28);

// @baa 0x0094b8e0
void USkeletalMeshSocket::sub_0094b8e0(int param_2)
{
    int param_1 = (int)this;

  if (4 < param_2) {
    param_2 = 4;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_0094b900 {
    int sub_0094b900();
};

int sub_007b1050(void);
// @baa 0x0094b900
int C_0094b900::sub_0094b900(void)
{
    int param_1 = (int)this;

  sub_007b1050();
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return param_1;
}

// @baa 0x0094b940
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00957dc0 { void* Data; int Num; int Max; void sub_00957dc0(); };

// @baa 0x00957dc0
void C_00957dc0::sub_00957dc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_00975910 { void sub_0096a320(); };

struct C_00975910 { char pad[8]; M_00975910 m; void sub_00975910(); };

// @baa 0x00975910
void C_00975910::sub_00975910() { m.sub_0096a320(); }

struct M_00975990 { void sub_0096a8e0(); };

struct C_00975990 { char pad[8]; M_00975990 m; void sub_00975990(); };

// @baa 0x00975990
void C_00975990::sub_00975990() { m.sub_0096a8e0(); }

struct C_00976590 {
    int sub_00976590(undefined4);
    int sub_0096e6c0();
    int sub_00975920(int);
};

int sub_006311e0(...);
extern undefined4 g_01f7a2c8;
// @baa 0x00976590
int C_00976590::sub_00976590(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    sub_006311e0("!bUseFullPrecisionUVs",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp"
                 ,0x112,&g_01f7a2c8);
  }
  ((C_00976590 *)(this))->sub_0096e6c0();
  ((C_00976590 *)((*(char **)((char *)this + 0x24))))->sub_00975920(param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return param_1;
}

struct C_00976600 {
    int sub_00976600(undefined4);
    int sub_0096e6c0();
    int sub_009759a0(int);
};

extern undefined4 g_01f7a3b8;
// @baa 0x00976600
int C_00976600::sub_00976600(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    sub_006311e0("bUseFullPrecisionUVs",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp"
                 ,0x124,&g_01f7a3b8);
  }
  ((C_00976600 *)(this))->sub_0096e6c0();
  ((C_00976600 *)((*(char **)((char *)this + 0x24))))->sub_009759a0(param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return param_1;
}

// @baa 0x00977410
int sub_00977410(void) { return 1686; }

struct C_00977420 {
    int sub_00977420();
};

// @baa 0x00977420
int C_00977420::sub_00977420(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0xc;
}

struct C_00977430 {
    int sub_00977430();
};

// @baa 0x00977430
int C_00977430::sub_00977430(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xc0) * 3 + *(int *)(param_1 + 0x84)) * 4;
}

struct C_00977450 {
    int sub_00977450();
};

// @baa 0x00977450
int C_00977450::sub_00977450(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xc0) + 0x14) * 3 + *(int *)(param_1 + 0x84)) * 4;
}

int sub_0053dfa0(...);
int sub_00977470(void);
// @baa 0x0097b450
undefined4 ULensFlare::sub_0097b450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00977470();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0097d760
IMPLEMENT_CLASS_AT(ASkeletalMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 29);

// @baa 0x0097d790
IMPLEMENT_CLASS_AT(ASkeletalMeshActorBasedOnExtremeContent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 31);

// @baa 0x0097d7c0
IMPLEMENT_CLASS_AT(ASkeletalMeshActorMAT, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 30);

// @baa 0x0097d7f0
// @baa 0x0097d8b0
// @baa 0x0097d970
// @baa 0x0097fe70
IMPLEMENT_CLASS_AT(USkeletalMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 27);
