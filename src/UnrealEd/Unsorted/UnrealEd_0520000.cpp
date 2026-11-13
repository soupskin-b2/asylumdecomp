// UnrealEd_0520000.cpp (part 1 of 2): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C { int sub_00520250(void); };

// @baa 0x00520250
int C::sub_00520250(void) { return *(int*)((char*)this + 20); }

struct C_00520260 { int sub_00520260(void); };

// @baa 0x00520260
int C_00520260::sub_00520260(void) { return *(int*)((char*)this + 28); }

struct C_00520280 { int sub_00520280(void); };

// @baa 0x00520280
int C_00520280::sub_00520280(void) { return *(int*)((char*)this + 4); }

// @baa 0x00520440
void sub_00520440(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00520450(volatile FFaceData *Other);
};

// @baa 0x00520450
void FFaceData::sub_00520450(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

int sub_01ab3290(...);
// @baa 0x005204d0
void sub_005204d0(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

// @baa 0x005204f0
void sub_005204f0(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x00520560
void sub_00520560(undefined4 * param_1)
{
  sub_01ab3290(*param_1,0xc);
  *param_1 = 0;
  return;
}

// @baa 0x00520580
void sub_00520580(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

struct C_005205a0 {
    int sub_005205a0(undefined4, undefined4, undefined4);
    int sub_0051ffa0(int);
};

// @baa 0x005205a0
int C_005205a0::sub_005205a0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_005205a0 *)(this))->sub_0051ffa0(param_2);
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  *(undefined4 *)(param_1 + 0xbc) = param_4;
  return param_1;
}

struct S_005205d0 { void sub_005193b0(); };

// @baa 0x005205d0
void sub_005205d0(S_005205d0 *p) { if (p) p->sub_005193b0(); }

struct S_005205e0 { void sub_005196d0(); };

// @baa 0x005205e0
void sub_005205e0(S_005205e0 *p) { if (p) p->sub_005196d0(); }

struct C_005205f0 {
    int sub_005205f0(int);
    int sub_0051ffa0(int);
};

// @baa 0x005205f0
int C_005205f0::sub_005205f0(int param_2)
{
    int param_1 = (int)this;
  ((C_005205f0 *)(this))->sub_0051ffa0(param_2);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  return param_1;
}

struct C_00520f40 { void sub_0051d860(); void sub_00520f40(int); };

// @baa 0x00520f40
void C_00520f40::sub_00520f40(int) { sub_0051d860(); }

struct C_00521300 {
    undefined4 * sub_00521300();
    int sub_005210c0();
    int sub_01ab3c10(int);
};

extern undefined * g_01e6b310;
extern undefined4 g_027be4bc;
// @baa 0x00521300
undefined4 * C_00521300::sub_00521300(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00521300 *)(this))->sub_005210c0();
  *param_1 = (undefined4)(&g_01e6b310);
  ((C_00521300 *)(((char *)this + 0xa4)))->sub_01ab3c10((int)(&g_027be4bc));
  param_1[0x28] = 0;
  return param_1;
}

struct C_00521600 {
    void sub_00521600();
};

// @baa 0x00521600
void C_00521600::sub_00521600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00521a70 {
    void sub_00521a70(int);
};

// @baa 0x00521a70
void C_00521a70::sub_00521a70(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_00521aa0 {
    int sub_00521aa0();
};

int sub_005211a0(void);
// @baa 0x00521aa0
int C_00521aa0::sub_00521aa0(void)
{
    int param_1 = (int)this;

  sub_005211a0();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return param_1;
}

struct C_00521ac0 {
    undefined4 * sub_00521ac0();
    int sub_005210c0();
    int sub_01ab3c10(int);
};

// @baa 0x00521ac0
undefined4 * C_00521ac0::sub_00521ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00521ac0 *)(this))->sub_005210c0();
  *param_1 = (undefined4)(&g_01e6b310);
  ((C_00521ac0 *)(((char *)this + 0xa4)))->sub_01ab3c10((int)(&g_027be4bc));
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}

struct C_00521b00 {
    int sub_00521b00(undefined4, undefined4, undefined4);
    int sub_00521330(int);
};

// @baa 0x00521b00
int C_00521b00::sub_00521b00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00521b00 *)(this))->sub_00521330(param_2);
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  *(undefined4 *)(param_1 + 0xac) = param_4;
  return param_1;
}

struct C_00521ba0 {
    int sub_00521ba0(int);
    int sub_00521330(int);
};

// @baa 0x00521ba0
int C_00521ba0::sub_00521ba0(int param_2)
{
    int param_1 = (int)this;
  ((C_00521ba0 *)(this))->sub_00521330(param_2);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  return param_1;
}

class wxWindow { public: __declspec(dllimport) wxWindow(); __declspec(dllimport) ~wxWindow(); virtual void vf(); char pad[0x140]; };

extern void *g_01e6a6f8;
struct C_00522670 : wxWindow { int a,b; char c; int d,e,f,g,h; float i,j,k,l; C_00522670(int,int,int,int,int); void sub_00520660(int,int,int,int,int); int helper() { return a; } };

// @baa 0x00522670
C_00522670::C_00522670(int p1,int p2,int p3,int p4,int p5) : a(0),b(0),c(0),d(0),e(0),f(0),g(0),h(0) { *(void**)this = &g_01e6a6f8; i=-2147483648.0f; j=-2147483648.0f; k=-2147483648.0f; l=-2147483648.0f; sub_00520660(p1,p2,p3,p4,p5); }

struct C_00523280 {
    void sub_00523280();
};

// @baa 0x00523280
void C_00523280::sub_00523280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// sub_00521670: out-of-line TArray<T>::add(T& Item) — grows the array and
// appends the element pointed to by its stack argument.
struct TArrayInt
{
    INT* Data; // 0x00
    INT    Num; // 0x04
    INT    Max; // 0x08
    void __thiscall add(INT* Item); // sub_00521670
};

class FData
{
public:
    virtual void VFunc00();
    void* Unk04; // 0x04
    TArrayInt Items; // 0x08
    void sub_00523330(INT Value);
};

// @baa 0x00523330
void FData::sub_00523330(INT Value)
{
    Items.add(&Value);
}

struct C_00523400 {
    undefined4 sub_00523400(byte);
};

int sub_00402660(...);
int sub_00523340(void);
// @baa 0x00523400
undefined4 C_00523400::sub_00523400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00523340();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00524430 {
    void sub_00524430();
};

int sub_00521790(void);
// @baa 0x00524430
void C_00524430::sub_00524430(void)
{
    int * param_1 = (int *)this;

  sub_00521790();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_00524460 {
    void sub_00524460();
};

int sub_00521a20(void);
// @baa 0x00524460
void C_00524460::sub_00524460(void)
{
    int * param_1 = (int *)this;

  sub_00521a20();
  if (*param_1 != 0) {
    sub_01ab3290(*param_1,0xc);
    *param_1 = 0;
  }
  return;
}

struct C_00524490 {
    void sub_00524490(int);
};

// @baa 0x00524490
void C_00524490::sub_00524490(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}

struct C_00524820 {
    int sub_00524820();
};

int sub_00523420(void);
// @baa 0x00524820
int C_00524820::sub_00524820(void)
{
    int param_1 = (int)this;

  sub_00523420();
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return param_1;
}

struct C_00524ab0 {
    int sub_00524ab0(int);
    int sub_00524840(int);
};

// @baa 0x00524ab0
int C_00524ab0::sub_00524ab0(int param_2)
{
    int param_1 = (int)this;
  ((C_00524ab0 *)(this))->sub_00524840(param_2);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return param_1;
}

struct C_00524ae0 {
    undefined4 sub_00524ae0(byte);
};

// @baa 0x00524ae0
undefined4 C_00524ae0::sub_00524ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00523340();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct S2 { void sub_005230e0(); };

struct S1 {
    char pad[0x144];
    S2 *f_144;
    void sub_00524d20();
};

// @baa 0x00524d20
void S1::sub_00524d20() { f_144->sub_005230e0(); }

extern char g_02666560[];
// @baa 0x00524d70
int sub_00524d70(void) { return (int)g_02666560; }

struct A_00524d80 { virtual void sub_00529030(); char pad[320]; };

struct B_00524d80 { virtual void sub_00529030(); };

struct C_00524d80 : A_00524d80, B_00524d80 { virtual void sub_00529030(); C_00524d80(); };

C_00524d80::C_00524d80() {}

// @baa 0x00524d80
void C_00524d80::sub_00529030() {}

struct C_00524e10 {
    undefined4 sub_00524e10(byte);
};

int sub_005232b0(void);
// @baa 0x00524e10
undefined4 C_00524e10::sub_00524e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005232b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00528dc0 {
    int sub_00528dc0(undefined4, undefined4, undefined4);
    int sub_00524840(int);
};

// @baa 0x00528dc0
int C_00528dc0::sub_00528dc0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00528dc0 *)(this))->sub_00524840(param_2);
  *(undefined4 *)(param_1 + 0x114) = param_3;
  *(undefined4 *)(param_1 + 0x118) = param_4;
  return param_1;
}

struct S_00528e60 { void sub_00523340(); };

// @baa 0x00528e60
void sub_00528e60(S_00528e60 *p) { if (p) p->sub_00523340(); }

struct C_00529080 { void sub_00525140(); void sub_00529080(int); };

// @baa 0x00529080
void C_00529080::sub_00529080(int) { sub_00525140(); }

struct C_00529580 { void sub_00525820(); void sub_00529580(int); };

// @baa 0x00529580
void C_00529580::sub_00529580(int) { sub_00525820(); }

extern char g_02665f20[];
// @baa 0x0052b760
int sub_0052b760(void) { return (int)g_02665f20; }

struct C_0052b810 {
    undefined4 sub_0052b810(byte);
};

int sub_0052b770(void);
// @baa 0x0052b810
undefined4 C_0052b810::sub_0052b810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0052b770();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0052d1d0 {
    int sub_0052d1d0();
};

int sub_00524790(...);
int sub_01ab3960(...);
// @baa 0x0052d1d0
int C_0052d1d0::sub_0052d1d0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = sub_01ab3960(0xb0);
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    sub_00524790(uVar1);
    *(int *)(*(int *)(param_1 + 0x1bc) + 0xa8) = *(int *)(param_1 + 0x1bc);
    *(int *)(*(int *)(param_1 + 0x1bc) + 0xac) = *(int *)(param_1 + 0x1bc);
  }
  return *(int *)(*(int *)(param_1 + 0x1bc) + 0xa8) + 0xa4;
}

struct C_0052e0e0 {
    void sub_0052e0e0(int);
};

int sub_00528bf0(...);
// @baa 0x0052e0e0
void C_0052e0e0::sub_0052e0e0(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = sub_01ab3960(0x11c);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      sub_00528bf0(uVar3);
      *(int *)(*(int *)(param_1 + 0x10) + 0x114) = *(int *)(param_1 + 0x10);
      *(int *)(*(int *)(param_1 + 0x10) + 0x118) = *(int *)(param_1 + 0x10);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x114);
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = sub_01ab3960(0x11c);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      sub_00528bf0(uVar3);
      *(int *)(*(int *)(param_1 + 0x10) + 0x114) = *(int *)(param_1 + 0x10);
      *(int *)(*(int *)(param_1 + 0x10) + 0x118) = *(int *)(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    for (; iVar1 != iVar2; iVar1 = *(int *)(iVar1 + 0x114)) {
      *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
    }
  }
  return;
}

struct C_0052e2a0 {
    int sub_0052e2a0();
};

// @baa 0x0052e2a0
int C_0052e2a0::sub_0052e2a0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = sub_01ab3960(0x11c);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      sub_00528bf0(uVar1);
      *(int *)(*(int *)(param_1 + 0x10) + 0x114) = *(int *)(param_1 + 0x10);
      *(int *)(*(int *)(param_1 + 0x10) + 0x118) = *(int *)(param_1 + 0x10);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x114);
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar1 = sub_01ab3960(0x11c);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      sub_00528bf0(uVar1);
      *(int *)(*(int *)(param_1 + 0x10) + 0x114) = *(int *)(param_1 + 0x10);
      *(int *)(*(int *)(param_1 + 0x10) + 0x118) = *(int *)(param_1 + 0x10);
    }
    if (iVar2 != *(int *)(param_1 + 0x10)) {
      do {
        if (iVar2 == *(int *)(param_1 + 0x48)) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 0x114);
      } while (iVar2 != *(int *)(param_1 + 0x10));
    }
  }
  return 0;
}

// The out-of-line TArray<INT>::AddItem the engine calls (sub_00521950).
struct FIntArray_00523d90 : public TArray<INT>
{
	INT AddItem(const INT& Item);
};

// Appends a value to the integer list at +0x8.
struct FLoader_00523d90
{
	BYTE Header[0x8];
	TArray<INT> List; /* 0x8 */

	INT Add(INT Value);
};

// @baa 0x00523d90
INT FLoader_00523d90::Add(INT Value)
{
	return ((FIntArray_00523d90*)&List)->AddItem(Value);
}
