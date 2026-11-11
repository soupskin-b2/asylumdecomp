// Editor_10b0000.cpp: 76 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00637c10(...);
// @baa 0x010bee70
undefined4 sub_010bee70(undefined4 param_1, int param_2)
{
  sub_00637c10(param_1,param_2);
  sub_00637c10(param_1,param_2 + 0xc);
  sub_00637c10(param_1,param_2 + 0x18);
  sub_00637c10(param_1,param_2 + 0x24);
  return param_1;
}

extern char g_021a53e8[];
struct C { void sub_010bef10(void); };

// @baa 0x010bef10
void C::sub_010bef10(void) { *(int*)((char*)this + 0) = (int)g_021a53e8; }

struct C_010bef20 { void sub_010bef20(int a0); };

// @baa 0x010bef20
void C_010bef20::sub_010bef20(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_010bef60 { void sub_010bef60(void); };

// @baa 0x010bef60
void C_010bef60::sub_010bef60(void) { *(int*)((char*)this + 0) = (int)g_021a53e8; }

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x010bef70
int sub_010bef70(void)
{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  iVar1 = g_025d6818;
  local_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&local_4);
  sub_0062d5a0(uVar2);
  if (local_4 == 0) {
    local_4 = iVar1;
  }
  return local_4;
}

// @baa 0x010befb0
void sub_010befb0(void) {  }

struct C_010befc0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_010befc0* sub_010befc0(INT value);
};

// @baa 0x010befc0
C_010befc0* C_010befc0::sub_010befc0(INT value)
{
    Unk00 = value;
    Unk04 = 1;
    return this;
}

// @baa 0x010befe0
int sub_010befe0(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
}

struct C_010beff0 {
    void sub_010beff0();
};

// @baa 0x010beff0
void C_010beff0::sub_010beff0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffffef;
  return;
}

// @baa 0x010bf000
int sub_010bf000(int * param_1, int * param_2)
{
  return *param_2 - *param_1;
}

// @baa 0x010bf030
void __stdcall sub_010bf030(int a0) {  }

struct C_010bf070 { void sub_010bf070(void); };

// @baa 0x010bf070
void C_010bf070::sub_010bf070(void) { *(int*)((char*)this + 112) = 0; }

struct C_010bf080 { int sub_010bf080(void); };

// @baa 0x010bf080
int C_010bf080::sub_010bf080(void) { return *(int*)((char*)this + 4); }

struct C_010bf090 { int sub_010bf090(void); };

// @baa 0x010bf090
int C_010bf090::sub_010bf090(void) { return *(int*)((char*)this + 4); }

struct C_010bf0a0 { int sub_010bf0a0(void); };

// @baa 0x010bf0a0
int C_010bf0a0::sub_010bf0a0(void) { return *(int*)((char*)this + 4); }

struct C_010bf0b0 { int sub_010bf0b0(void); };

// @baa 0x010bf0b0
int C_010bf0b0::sub_010bf0b0(void) { return *(int*)((char*)this + 4); }

struct C_010bf0c0 { int sub_010bf0c0(void); };

// @baa 0x010bf0c0
int C_010bf0c0::sub_010bf0c0(void) { return *(int*)((char*)this + 4); }

struct C_010bf0d0 { int sub_010bf0d0(void); };

// @baa 0x010bf0d0
int C_010bf0d0::sub_010bf0d0(void) { return *(int*)((char*)this + 4); }

struct C_010bf0e0 { int sub_010bf0e0(void); };

// @baa 0x010bf0e0
int C_010bf0e0::sub_010bf0e0(void) { return *(int*)((char*)this + 4); }

struct C_010bf0f0 { int sub_010bf0f0(void); };

// @baa 0x010bf0f0
int C_010bf0f0::sub_010bf0f0(void) { return *(int*)((char*)this + 132); }

struct C_010bf100 { int sub_010bf100(void); };

// @baa 0x010bf100
int C_010bf100::sub_010bf100(void) { return *(int*)((char*)this + 132); }

struct C_010bf110 { int sub_010bf110(void); };

// @baa 0x010bf110
int C_010bf110::sub_010bf110(void) { return *(int*)((char*)this + 4); }

struct C_010bf120 { int a; C_010bf120(int); };

// @baa 0x010bf120
C_010bf120::C_010bf120(int x) : a(x) {}

struct C_010bf130 {
    int sub_010bf130();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x010bf130
int C_010bf130::sub_010bf130(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("Reference != 0",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\ScopedPointer.h"
                 ,0x3f,&g_01e3f3dc);
  }
  return *param_1;
}

struct C_010bf160 {
    int sub_010bf160();
};

// @baa 0x010bf160
int C_010bf160::sub_010bf160(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("Reference != 0",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\ScopedPointer.h"
                 ,0x45,&g_01e3f3dc);
  }
  return *param_1;
}

struct C_010bf190 { int sub_010bf190(void); };

// @baa 0x010bf190
int C_010bf190::sub_010bf190(void) { return *(int*)((char*)this + 4); }

struct C_010bf1a0 { int sub_010bf1a0(void); };

// @baa 0x010bf1a0
int C_010bf1a0::sub_010bf1a0(void) { return *(int*)((char*)this + 4); }

struct C_010bf1b0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_010bf1b0(INT Index);
};

// @baa 0x010bf1b0
UBOOL C_010bf1b0::sub_010bf1b0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_010bf1d0 { int sub_010bf1d0(void); };

// @baa 0x010bf1d0
int C_010bf1d0::sub_010bf1d0(void) { return *(int*)((char*)this + 4); }

struct C_010bf210 { int a, b; C_010bf210(int, int); };

// @baa 0x010bf210
C_010bf210::C_010bf210(int x, int y) : a(x), b(y) {}

// @baa 0x010bf230
int sub_010bf230(int a0) { return a0; }

struct C_010bf240 { int a, b; C_010bf240(int, int); };

// @baa 0x010bf240
C_010bf240::C_010bf240(int x, int y) : a(x), b(y) {}

struct C_010bf260 { int a, b; C_010bf260(int, int); };

// @baa 0x010bf260
C_010bf260::C_010bf260(int x, int y) : a(x), b(y) {}

struct C_010bf280 { int a, b; C_010bf280(int, int); };

// @baa 0x010bf280
C_010bf280::C_010bf280(int x, int y) : a(x), b(y) {}

struct C_010bf2a0 { int a, b; C_010bf2a0(int, int); };

// @baa 0x010bf2a0
C_010bf2a0::C_010bf2a0(int x, int y) : a(x), b(y) {}

struct C_010bf2c0 { int a, b; C_010bf2c0(int, int); };

// @baa 0x010bf2c0
C_010bf2c0::C_010bf2c0(int x, int y) : a(x), b(y) {}

struct C_010bf2e0 { int a, b; C_010bf2e0(int, int); };

// @baa 0x010bf2e0
C_010bf2e0::C_010bf2e0(int x, int y) : a(x), b(y) {}

struct C_010bf300 { int a, b; C_010bf300(int, int); };

// @baa 0x010bf300
C_010bf300::C_010bf300(int x, int y) : a(x), b(y) {}

struct C_010bf320 { int a, b; C_010bf320(int, int); };

// @baa 0x010bf320
C_010bf320::C_010bf320(int x, int y) : a(x), b(y) {}

// @baa 0x010bf340
int sub_010bf340(int a0) { return *(int*)a0; }

struct C_010bf350 {
    void sub_010bf350(int *);
};

// @baa 0x010bf350
void C_010bf350::sub_010bf350(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010bf360
int sub_010bf360(int a0) { return *(int*)a0; }

struct C_010bf370 { int a, b; C_010bf370(const C_010bf370 &); };

// @baa 0x010bf370
C_010bf370::C_010bf370(const C_010bf370 &o) : a(o.a), b(o.b) {}

// @baa 0x010bf390
int sub_010bf390(int a0) { return *(int*)a0; }

// @baa 0x010bf3a0
bool sub_010bf3a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_010bf3b0 {
    void sub_010bf3b0(undefined4 *);
};

// @baa 0x010bf3b0
void C_010bf3b0::sub_010bf3b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x010bf3d0
int sub_010bf3d0(int a0) { return *(int*)a0; }

// @baa 0x010bf3e0
bool sub_010bf3e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_010bf3f0 { int a, b; C_010bf3f0(const C_010bf3f0 &); };

// @baa 0x010bf3f0
C_010bf3f0::C_010bf3f0(const C_010bf3f0 &o) : a(o.a), b(o.b) {}

// @baa 0x010bf430
int sub_010bf430(int a0) { return *(int*)a0; }

struct C_010bf440 {
    void sub_010bf440(int *);
};

// @baa 0x010bf440
void C_010bf440::sub_010bf440(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010bf450
int sub_010bf450(int a0) { return *(int*)a0; }

struct C_010bf480 {
    void sub_010bf480(int *);
};

// @baa 0x010bf480
void C_010bf480::sub_010bf480(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

// @baa 0x010bf490
int sub_010bf490(int a0) { return *(int*)a0; }

struct C_010bf4a0 {
    void sub_010bf4a0(int *);
};

// @baa 0x010bf4a0
void C_010bf4a0::sub_010bf4a0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010bf4b0
int sub_010bf4b0(int a0) { return *(int*)a0; }

struct C_010bf4e0 {
    void sub_010bf4e0(int *);
};

// @baa 0x010bf4e0
void C_010bf4e0::sub_010bf4e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

// @baa 0x010bf4f0
bool sub_010bf4f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_010bf520 { int a, b; C_010bf520(const C_010bf520 &); };

// @baa 0x010bf520
C_010bf520::C_010bf520(const C_010bf520 &o) : a(o.a), b(o.b) {}

struct C_010bf540 { int a, b; C_010bf540(const C_010bf540 &); };

// @baa 0x010bf540
C_010bf540::C_010bf540(const C_010bf540 &o) : a(o.a), b(o.b) {}

int sub_00627f00(...);
// @baa 0x010bf5a0
void sub_010bf5a0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

// @baa 0x010bf5e0
void sub_010bf5e0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

// @baa 0x010bf600
int sub_010bf600(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
}

// @baa 0x010bf670
void sub_010bf670(void) {  }

// @baa 0x010bf680
void sub_010bf680(void) {  }

// @baa 0x010bf690
void sub_010bf690(void) {  }

// @baa 0x010bf6a0
undefined8 sub_010bf6a0(undefined8 param_1)
{
  return param_1;
}

struct C_010bf6b0 {
    int Unk0;
    int Unk4;
    int sub_010bf6b0();
};

// @baa 0x010bf6b0
int C_010bf6b0::sub_010bf6b0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_010bf6c0 { int sub_010bf6c0(void); };

// @baa 0x010bf6c0
int C_010bf6c0::sub_010bf6c0(void) { return *(int*)((char*)this + 4); }

// @baa 0x010bf710
undefined2 sub_010bf710(void)
{
  return 0x73;
}

struct C_010bf720 { int sub_010bf720(void); };

// @baa 0x010bf720
int C_010bf720::sub_010bf720(void) { return *(int*)((char*)this + 168); }

// @baa 0x010bf730
int sub_010bf730(int a0, int a1) { return a1; }

// @baa 0x010bf7d0
int sub_010bf7d0(int a0, int a1) { return a1; }

// @baa 0x010bf7f0
int sub_010bf7f0(int a0, int a1) { return a1; }

// @baa 0x010bfa50
int sub_010bfa50(int a0, int a1) { return a1; }

// @baa 0x010bfa80
int sub_010bfa80(int a0, int a1) { return a1; }
