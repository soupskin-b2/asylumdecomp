// Editor_0740000.cpp (part 1 of 2): 110 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_026b3a84[];
struct C { void sub_006fa300(int, int); void sub_00747480(int); };

// @baa 0x00747480
void C::sub_00747480(int a) { sub_006fa300((int)g_026b3a84, a); }

extern char g_026b349c[];
struct C_007474a0 { void sub_006fa300(int, int); void sub_007474a0(int); };

// @baa 0x007474a0
void C_007474a0::sub_007474a0(int a) { sub_006fa300((int)g_026b349c, a); }

extern char g_026b3694[];
struct C_007474c0 { void sub_006fa300(int, int); void sub_007474c0(int); };

// @baa 0x007474c0
void C_007474c0::sub_007474c0(int a) { sub_006fa300((int)g_026b3694, a); }

extern char g_026b3154[];
struct C_007474e0 { void sub_006fa300(int, int); void sub_007474e0(int); };

// @baa 0x007474e0
void C_007474e0::sub_007474e0(int a) { sub_006fa300((int)g_026b3154, a); }

extern char g_026b35ec[];
struct C_00747500 { void sub_006fa300(int, int); void sub_00747500(int); };

// @baa 0x00747500
void C_00747500::sub_00747500(int a) { sub_006fa300((int)g_026b35ec, a); }

extern char g_026b2974[];
struct C_00747520 { void sub_006fa300(int, int); void sub_00747520(int); };

// @baa 0x00747520
void C_00747520::sub_00747520(int a) { sub_006fa300((int)g_026b2974, a); }

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00747590(INT Index) const;
};

// @baa 0x00747590
const QWORD* S::sub_00747590(INT Index) const
{
    return &Items(Index);
}

struct C_007475e0 { int sub_007475e0(void); };

// @baa 0x007475e0
int C_007475e0::sub_007475e0(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_007475f0 {
    TArray<E> Items; // 0x00
    const E* sub_007475f0(INT Index) const;
};

// @baa 0x007475f0
const E* S_007475f0::sub_007475f0(INT Index) const
{
    return &Items(Index);
}

struct S_007476a0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007476a0(INT Index) const;
};

// @baa 0x007476a0
const QWORD* S_007476a0::sub_007476a0(INT Index) const
{
    return &Items(Index);
}

struct C_007476f0 { int sub_007476f0(void); };

// @baa 0x007476f0
int C_007476f0::sub_007476f0(void) { return *(int*)((char*)this + 4); }

struct E_00747700 { BYTE Bytes[24]; };

struct S_00747700 {
    TArray<E_00747700> Items; // 0x00
    const E_00747700* sub_00747700(INT Index) const;
};

// @baa 0x00747700
const E_00747700* S_00747700::sub_00747700(INT Index) const
{
    return &Items(Index);
}

struct S_007477b0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007477b0(INT Index) const;
};

// @baa 0x007477b0
const QWORD* S_007477b0::sub_007477b0(INT Index) const
{
    return &Items(Index);
}

struct C_00747800 { int sub_00747800(void); };

// @baa 0x00747800
int C_00747800::sub_00747800(void) { return *(int*)((char*)this + 4); }

struct S_00747810 {
    TArray<E> Items; // 0x00
    const E* sub_00747810(INT Index) const;
};

// @baa 0x00747810
const E* S_00747810::sub_00747810(INT Index) const
{
    return &Items(Index);
}

struct C_00747860 {
    void sub_00747860(int);
};

// @baa 0x00747860
void C_00747860::sub_00747860(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_00747880 {
    void sub_00747880(int);
};

// @baa 0x00747880
void C_00747880::sub_00747880(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_007478a0 {
    void sub_007478a0(int);
};

// @baa 0x007478a0
void C_007478a0::sub_007478a0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_007478c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_007478c0* sub_007478c0(INT value);
};

// @baa 0x007478c0
C_007478c0* C_007478c0::sub_007478c0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_007478e0 {
    DWORD _0;
    DWORD count;
    C_007478e0* sub_007478e0();
};

// @baa 0x007478e0
C_007478e0* C_007478e0::sub_007478e0()
{
    C_007478e0* p = this;
    ++p->count;
    return p;
}

struct C_00747940 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00747940* sub_00747940(INT value);
};

// @baa 0x00747940
C_00747940* C_00747940::sub_00747940(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00747960 {
    int x;
    int n;
    C_00747960 *sub_00747960();
};

// @baa 0x00747960
C_00747960 *C_00747960::sub_00747960(void)
{
    n = n + 1;
    return this;
}

struct C_007479c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_007479c0* sub_007479c0(INT value);
};

// @baa 0x007479c0
C_007479c0* C_007479c0::sub_007479c0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_007479e0 {
    char pad[4];
    DWORD Count;
    C_007479e0* sub_007479e0();
};

// @baa 0x007479e0
C_007479e0* C_007479e0::sub_007479e0()
{
    ++Count;
    return this;
}

// @baa 0x00747a40
int sub_00747a40(int param_1)
{
  return param_1 + 0x18;
}

struct C_00747a50 { int a, b, c; C_00747a50(); };

// @baa 0x00747a50
C_00747a50::C_00747a50() : a(0), b(0), c(0) {}

struct C_00747a60 { int a, b, c; C_00747a60(); };

// @baa 0x00747a60
C_00747a60::C_00747a60() : a(0), b(0), c(0) {}

struct C_00747a70 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00747a70(INT Index);
};

// @baa 0x00747a70
UBOOL C_00747a70::sub_00747a70(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x00747a90
int sub_00747a90(int param_1)
{
  return param_1 + 0x18;
}

struct C_00747aa0 { int a, b, c; C_00747aa0(); };

// @baa 0x00747aa0
C_00747aa0::C_00747aa0() : a(0), b(0), c(0) {}

struct C_00747ab0 { int a, b, c; C_00747ab0(); };

// @baa 0x00747ab0
C_00747ab0::C_00747ab0() : a(0), b(0), c(0) {}

struct C_00747ac0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00747ac0(INT Index);
};

// @baa 0x00747ac0
UBOOL C_00747ac0::sub_00747ac0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x00747ae0
int sub_00747ae0(int param_1)
{
  return param_1 + 0x18;
}

struct C_00747af0 { int a, b, c; C_00747af0(); };

// @baa 0x00747af0
C_00747af0::C_00747af0() : a(0), b(0), c(0) {}

struct C_00747b00 { int a, b, c; C_00747b00(); };

// @baa 0x00747b00
C_00747b00::C_00747b00() : a(0), b(0), c(0) {}

struct C_00747b10 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00747b10(INT Index);
};

// @baa 0x00747b10
UBOOL C_00747b10::sub_00747b10(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00747cb0 { int sub_00747cb0(void); };

// @baa 0x00747cb0
int C_00747cb0::sub_00747cb0(void) { return *(int*)((char*)this + 20); }

struct C_00747cc0 {
    int sub_00747cc0();
};

// @baa 0x00747cc0
int C_00747cc0::sub_00747cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00747ce0 { int sub_00747ce0(void); };

// @baa 0x00747ce0
int C_00747ce0::sub_00747ce0(void) { return *(int*)((char*)this + 20); }

struct C_00747cf0 {
    int sub_00747cf0();
};

// @baa 0x00747cf0
int C_00747cf0::sub_00747cf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00747d10 { int sub_00747d10(void); };

// @baa 0x00747d10
int C_00747d10::sub_00747d10(void) { return *(int*)((char*)this + 20); }

struct C_00747d20 {
    int sub_00747d20();
};

// @baa 0x00747d20
int C_00747d20::sub_00747d20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00747d40 { int sub_00747d40(void); };

// @baa 0x00747d40
int C_00747d40::sub_00747d40(void) { return *(int*)((char*)this + 4); }

struct C_00747e30 { int sub_00747e30(void); };

// @baa 0x00747e30
int C_00747e30::sub_00747e30(void) { return *(int*)((char*)this + 4); }

struct C_00747f30 { int sub_00747f30(void); };

// @baa 0x00747f30
int C_00747f30::sub_00747f30(void) { return *(int*)((char*)this + 4); }

struct C_00748340 {
    undefined4 * sub_00748340(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef0488;
// @baa 0x00748340
undefined4 * C_00748340::sub_00748340(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00748340 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef0488);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_00748370 {
    undefined4 * sub_00748370(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef048c;
// @baa 0x00748370
undefined4 * C_00748370::sub_00748370(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00748370 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef048c);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_007483b0 {
    undefined4 * sub_007483b0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef0490;
// @baa 0x007483b0
undefined4 * C_007483b0::sub_007483b0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_007483b0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef0490);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_00748420 { int sub_00748420(void); };

// @baa 0x00748420
int C_00748420::sub_00748420(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00748460 { int sub_00748460(void); };

// @baa 0x00748460
int C_00748460::sub_00748460(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007484a0 { int sub_007484a0(void); };

// @baa 0x007484a0
int C_007484a0::sub_007484a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007484e0 { int sub_007484e0(void); };

// @baa 0x007484e0
int C_007484e0::sub_007484e0(void) { return *(int*)((char*)this + 0); }

struct C_007484f0 {
    void sub_007484f0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x007484f0
void C_007484f0::sub_007484f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00748550 { int sub_00748550(void); };

// @baa 0x00748550
int C_00748550::sub_00748550(void) { return *(int*)((char*)this + 0); }

struct C_00748560 {
    void sub_00748560();
};

// @baa 0x00748560
void C_00748560::sub_00748560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_007485c0 { int sub_007485c0(void); };

// @baa 0x007485c0
int C_007485c0::sub_007485c0(void) { return *(int*)((char*)this + 0); }

struct C_007485d0 {
    void sub_007485d0();
};

// @baa 0x007485d0
void C_007485d0::sub_007485d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

int sub_0053dfa0(...);
// @baa 0x00748600
undefined4 * UShaderCache::sub_00748600(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00748640
undefined4 * UShaderCache::sub_00748640(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00748680
undefined4 * UShaderCache::sub_00748680(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_007486c0 { int sub_00747b90(int); };

// @baa 0x007486c0
int sub_007486c0(S_007486c0 *s, int a) { return s->sub_00747b90(a); }

int sub_0069c170(...);
// @baa 0x007486d0
void sub_007486d0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_007486f0 {
    int sub_007486f0(int);
};

// @baa 0x007486f0
int C_007486f0::sub_007486f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00748700 { int sub_00747bf0(int); };

// @baa 0x00748700
int sub_00748700(S_00748700 *s, int a) { return s->sub_00747bf0(a); }

// @baa 0x00748710
void sub_00748710(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00748730 {
    int sub_00748730(int);
};

// @baa 0x00748730
int C_00748730::sub_00748730(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00748740 { int sub_00747c50(int); };

// @baa 0x00748740
int sub_00748740(S_00748740 *s, int a) { return s->sub_00747c50(a); }

// @baa 0x00748750
void sub_00748750(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00748770 {
    int sub_00748770(int);
};

// @baa 0x00748770
int C_00748770::sub_00748770(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00748d70 {
    int sub_00748d70(int);
};

// @baa 0x00748d70
int C_00748d70::sub_00748d70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00748e70 {
    int sub_00748e70(int);
};

// @baa 0x00748e70
int C_00748e70::sub_00748e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00748f70 {
    int sub_00748f70(int);
};

// @baa 0x00748f70
int C_00748f70::sub_00748f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007491f0
int UTexture2D::sub_007491f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00749270
int UTexture2D::sub_00749270(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007492f0
int UTexture2D::sub_007492f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00749300
int UTexture2D::sub_00749300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x00749310
int UTexture2D::sub_00749310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x00749320
int UTexture2D::sub_00749320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

int sub_0053df70(...);
// @baa 0x00749330
void UTexture2D::sub_00749330(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00749370
void UTexture2D::sub_00749370(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x007493b0
void UTexture2D::sub_007493b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x007493f0
int UTexture2D::sub_007493f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00749540
int UTexture2D::sub_00749540(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007496a0
int UTexture2D::sub_007496a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00749a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749a50& operator++();
};

TConstSetBitIterator_00749a50::TConstSetBitIterator_00749a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749a50
TConstSetBitIterator_00749a50& TConstSetBitIterator_00749a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00749a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749a70& operator++();
};

TConstSetBitIterator_00749a70::TConstSetBitIterator_00749a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749a70
TConstSetBitIterator_00749a70& TConstSetBitIterator_00749a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00749a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749a90& operator++();
};

TConstSetBitIterator_00749a90::TConstSetBitIterator_00749a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749a90
TConstSetBitIterator_00749a90& TConstSetBitIterator_00749a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00749ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749ab0& operator++();
};

TConstSetBitIterator_00749ab0::TConstSetBitIterator_00749ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749ab0
TConstSetBitIterator_00749ab0& TConstSetBitIterator_00749ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00749b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749b00& operator++();
};

TConstSetBitIterator_00749b00::TConstSetBitIterator_00749b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749b00
TConstSetBitIterator_00749b00& TConstSetBitIterator_00749b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00749b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00749b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00749b50& operator++();
};

TConstSetBitIterator_00749b50::TConstSetBitIterator_00749b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00749b50
TConstSetBitIterator_00749b50& TConstSetBitIterator_00749b50::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_007497f0(int, int);
};

// @baa 0x0074a4a0
int UTexture2D::sub_0074a4a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_007497f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0074a530 {
    int sub_007498b0(int, int);
};

// @baa 0x0074a530
int UTexture2D::sub_0074a530(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0074a530 *)(this))->sub_007498b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_0074a5c0 {
    int sub_00749980(int, int);
};

// @baa 0x0074a5c0
int UTexture2D::sub_0074a5c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0074a5c0 *)(this))->sub_00749980((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0074aa40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0074aa40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0074aa40& operator++();
};

TConstSetBitIterator_0074aa40::TConstSetBitIterator_0074aa40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0074aa40
TConstSetBitIterator_0074aa40& TConstSetBitIterator_0074aa40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0074aa90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0074aa90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0074aa90& operator++();
};

TConstSetBitIterator_0074aa90::TConstSetBitIterator_0074aa90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0074aa90
TConstSetBitIterator_0074aa90& TConstSetBitIterator_0074aa90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0074aae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0074aae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0074aae0& operator++();
};

TConstSetBitIterator_0074aae0::TConstSetBitIterator_0074aae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0074aae0
TConstSetBitIterator_0074aae0& TConstSetBitIterator_0074aae0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0074b480 {
    undefined4 sub_0074b480(byte);
};

int sub_00731370(void);
// @baa 0x0074b480
undefined4 C_0074b480::sub_0074b480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00731370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0074b4a0 {
    undefined4 sub_0074b4a0(byte);
};

int sub_007313f0(void);
// @baa 0x0074b4a0
undefined4 C_0074b4a0::sub_0074b4a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007313f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0074b4c0 {
    undefined4 sub_0074b4c0(byte);
};

int sub_00731470(void);
// @baa 0x0074b4c0
undefined4 C_0074b4c0::sub_0074b4c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00731470();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0074c8b0 {
    int sub_0074c8b0(undefined4);
    int sub_0074bf20(int);
};

// @baa 0x0074c8b0
int C_0074c8b0::sub_0074c8b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0074c8b0 *)(this))->sub_0074bf20(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_0074ca00 {
    int sub_0074ca00(undefined4);
    int sub_0074bfe0(int);
};

// @baa 0x0074ca00
int C_0074ca00::sub_0074ca00(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0074ca00 *)(this))->sub_0074bfe0(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_0074cb50 {
    int sub_0074cb50(undefined4);
    int sub_0074c0a0(int);
};

// @baa 0x0074cb50
int C_0074cb50::sub_0074cb50(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0074cb50 *)(this))->sub_0074c0a0(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct CA { int* sub_0074c330(); };

struct CB { void sub_0074b770(int a, int b); };

struct CC { void sub_007480e0(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x0074cc50
void __stdcall sub_0074cc50(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_0074b770(a1, *((CA*)a3)->sub_0074c330());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_007480e0(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct C_view_0074e170 {
    int sub_0074d9d0(int);
};

// @baa 0x0074e170
void UShaderCache::sub_0074e170(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view_0074e170 *)(((char *)this + 0xc)))->sub_0074d9d0(0);
  return;
}

struct C_view_0074e3b0 {
    int sub_0074db80(int);
};

// @baa 0x0074e3b0
void UShaderCache::sub_0074e3b0(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view_0074e3b0 *)(((char *)this + 0xc)))->sub_0074db80(0);
  return;
}

struct C_view_0074e5f0 {
    int sub_0074dd30(int);
};

// @baa 0x0074e5f0
void UShaderCache::sub_0074e5f0(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view_0074e5f0 *)(((char *)this + 0xc)))->sub_0074dd30(0);
  return;
}

int sub_00715ed0(void);
int sub_0073ee40(...);
extern undefined4 g_026b2220;
// @baa 0x0074f120
int sub_0074f120(void)
{
  if (g_026b2220 == 0) {
    g_026b2220 = sub_0073ee40(L"Engine");
    sub_00715ed0();
  }
  return g_026b2220;
}

struct S00747b30
{
	int f0;
	S00747b30* sub_00747b30(int Arg1, int Arg2); /* 0x00747b30 */
};

// @baa 0x00747b30
S00747b30* S00747b30::sub_00747b30(int Arg1, int Arg2)
{
	f0 = Arg1;
	if (Arg1 && Arg2)
	{
		int* P = (int*)(Arg1 + 4);
		*P = *P + 1;
	}
	return this;
}

struct SCounted_
{
	INT Data;
	INT Count;
};

class C_
{
	SCounted_ *Ref;

public:
	C_* sub_00747b70(SCounted_ *NewRef, INT bSomething);
};

// @baa 0x00747b70
C_* C_::sub_00747b70(SCounted_ *NewRef, INT bSomething)
{
	Ref = NewRef;

	if ((NewRef != NULL) && (bSomething != 0))
		++NewRef->Count;

	return this;
}

struct S_00747b50
{
    int Data;
    int Count;
};

struct C_00747b50
{
    C_00747b50* sub_00747b50(S_00747b50* P, int b);
    int _first;
};

// @baa 0x00747b50
C_00747b50* C_00747b50::sub_00747b50(S_00747b50* P, int b)
{
    _first = (int)P;
    if (P && b)
        ++P->Count;
    return this;
}
