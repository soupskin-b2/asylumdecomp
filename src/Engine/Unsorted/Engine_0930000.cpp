// Engine_0930000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

// @baa 0x00935ee0
int sub_00935ee0(void) { return 0; }

struct C_00935ef0 { int sub_00935ef0(void); };
// @baa 0x00935ef0
int C_00935ef0::sub_00935ef0(void) { return *(int*)((char*)this + 16); }

struct C_00935f00 { int sub_00935f00(void); };
// @baa 0x00935f00
int C_00935f00::sub_00935f00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00935f10(INT Index) const;
};

// @baa 0x00935f10
const DWORD* S::sub_00935f10(INT Index) const
{
    return &Items(Index);
}

struct C { char pad[4]; TArray<int> A; const int* sub_00935f60() const; };

// @baa 0x00935f60
const int* C::sub_00935f60() const { return &A(0); }

int sub_0053df70(...);
struct C_00935f90 { void sub_00935f90(void); };
// @baa 0x00935f90
void C_00935f90::sub_00935f90(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

struct C_00935fe0 { C_00935fe0* sub_00935fe0(void); };

// @baa 0x00935fe0
C_00935fe0* C_00935fe0::sub_00935fe0(void) { return this; }

struct C_00935ff0 { void sub_00921f70(int); C_00935ff0 *sub_00935ff0(int); };

// @baa 0x00935ff0
C_00935ff0 *C_00935ff0::sub_00935ff0(int a) { sub_00921f70(a); return this; }

struct C_009361f0 {
    int sub_009361f0();
};

// @baa 0x009361f0
int C_009361f0::sub_009361f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00936210 {
    int sub_00936210();
};

// @baa 0x00936210
int C_00936210::sub_00936210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_view {
    int sub_0092f270(int, int);
};

struct C_00936230 { int sub_00936230(int param_2); };
// @baa 0x00936230
int C_00936230::sub_00936230(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_0092f270((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x58 + *param_1;
  }
  return 0;
}

struct C_view_00936260 {
    int sub_0092f360(int, int);
};

struct C_00936260 { int sub_00936260(int param_2); };
// @baa 0x00936260
int C_00936260::sub_00936260(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00936260 *)(this))->sub_0092f360((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_00936290 { int sub_00936290(void); };
// @baa 0x00936290
int C_00936290::sub_00936290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00936740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00936740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00936740
FSparseArrayConstIt_00936740::FSparseArrayConstIt_00936740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct M_009367a0 { void sub_00553720(); };

struct C_009367a0 { char pad[8]; M_009367a0 m; void sub_009367a0(); };

// @baa 0x009367a0
void C_009367a0::sub_009367a0() { m.sub_00553720(); }

int sub_005c7a70(...);

struct A_009368e0 { virtual void sub_00936980(); char pad[44]; };

struct B_009368e0 { virtual void sub_00936980(); };

struct C_009368e0 : A_009368e0, B_009368e0 { virtual void sub_00936980(); C_009368e0(); };

C_009368e0::C_009368e0() {}

// @baa 0x009368e0
void C_009368e0::sub_00936980() {}

int sub_009368f0(void);
struct C_00936980 { undefined4 sub_00936980(byte param_2); };
// @baa 0x00936980
undefined4 C_00936980::sub_00936980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009368f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,100);
  }
  return param_1;
}

// @baa 0x00936b50
USkeletalMeshComponent::USkeletalMeshComponent()
{
    *(DWORD*)((BYTE*)this + 0x50c) = 0;
    DepthBiasData.DepthBiasCustomTestPoint.X = 0.0f;
    DepthBiasData.DepthBiasCustomTestPoint.Y = 0.0f;
    DepthBiasData.DepthBiasCustomTestPoint.Z = 0.0f;
    DepthBiasData.DepthBiasMinDistanceFromCameraPlaneOverride = -1.0f;
    DepthBiasData.MinDepthBiasMultiplier = 0.5f;
    *(DWORD*)((BYTE*)this + 0x564) = 0;
    *(DWORD*)((BYTE*)this + 0x568) = 0;
    *(DWORD*)((BYTE*)this + 0x56c) = 0;
    *(DWORD*)((BYTE*)this + 0x570) = 0;
    *(DWORD*)((BYTE*)this + 0x574) = 0;
    *(DWORD*)((BYTE*)this + 0x578) = 0;
    *(DWORD*)((BYTE*)this + 0x57c) = 0;
    *(DWORD*)((BYTE*)this + 0x580) = 0;
    *(DWORD*)((BYTE*)this + 0x584) = 0;
}

int sub_00936b50(void);
struct C_00936d70 { undefined4 sub_00936d70(byte param_2); };
// @baa 0x00936d70
undefined4 C_00936d70::sub_00936d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00936b50();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x5b0);
  }
  return param_1;
}

int sub_0090c4f0(void);
int sub_0092fe50(...);
extern undefined4 g_026b5d88;
// @baa 0x00936f30
int sub_00936f30(void)
{
  if (g_026b5d88 == 0) {
    g_026b5d88 = sub_0092fe50(L"Engine");
    sub_0090c4f0();
  }
  return g_026b5d88;
}

struct FSparseArrayConstIt_00938a40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00938a40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00938a40
FSparseArrayConstIt_00938a40::FSparseArrayConstIt_00938a40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00938a90 {
    undefined4 sub_00938a90(byte);
    int sub_00938060();
};

int sub_0053dfa0(...);
// @baa 0x00938a90
undefined4 C_00938a90::sub_00938a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00938a90 *)(((char *)this + 4)))->sub_00938060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00938d30 {
    int sub_00938d30(undefined4, undefined4);
    int sub_00821430(int, int, int, int, int);
};

// @baa 0x00938d30
int C_00938d30::sub_00938d30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00938d30 *)(this))->sub_00821430(1, 1, param_2, param_3, 1);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}

int sub_00937690(...);
int sub_00937750(void);
extern undefined4 g_026b5d98;
// @baa 0x00938d70
int sub_00938d70(void)
{
  if (g_026b5d98 == 0) {
    g_026b5d98 = sub_00937690(L"Engine");
    sub_00937750();
  }
  return g_026b5d98;
}

int sub_00937060(...);
int sub_00937120(void);
extern undefined4 g_026b5d8c;
// @baa 0x00938da0
int sub_00938da0(void)
{
  if (g_026b5d8c == 0) {
    g_026b5d8c = sub_00937060(L"Engine");
    sub_00937120();
  }
  return g_026b5d8c;
}

// FInit_00936790: a three-word record cleared on construction.
struct FInit_00936790
{
	void* Reserved;
	void* Reserved2;
	INT A; /* 0x8 */
	INT B; /* 0xc */
	INT C; /* 0x10 */

	FInit_00936790* Init(INT Unused);
};

// @baa 0x00936790
FInit_00936790* FInit_00936790::Init(INT Unused)
{
	A = 0;
	B = 0;
	C = 0;
	return this;
}
