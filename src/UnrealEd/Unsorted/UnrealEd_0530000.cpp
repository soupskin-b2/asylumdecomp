// UnrealEd_0530000.cpp (part 1 of 3): 70 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_00530480(byte);
};

int sub_00402660(...);
int sub_00530420(void);
// @baa 0x00530480
undefined4 C::sub_00530480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00530420();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00532c80 {
    int sub_00532c80();
};

int sub_00532120(void);
// @baa 0x00532c80
int C_00532c80::sub_00532c80(void)
{
    int param_1 = (int)this;

  sub_00532120();
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return param_1;
}

struct C_00532ca0 {
    int sub_00532ca0(undefined4, undefined4, undefined4);
    int sub_00532290(int);
};

// @baa 0x00532ca0
int C_00532ca0::sub_00532ca0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00532ca0 *)(this))->sub_00532290(param_2);
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  return param_1;
}

struct C_00532cd0 {
    int sub_00532cd0(int);
    int sub_00532290(int);
};

// @baa 0x00532cd0
int C_00532cd0::sub_00532cd0(int param_2)
{
    int param_1 = (int)this;
  ((C_00532cd0 *)(this))->sub_00532290(param_2);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  return param_1;
}

struct C_00532d00 {
    undefined4 sub_00532d00(byte);
};

int sub_005323d0(void);
// @baa 0x00532d00
undefined4 C_00532d00::sub_00532d00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005323d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_026660ac[];
// @baa 0x00533410
int sub_00533410(void) { return (int)g_026660ac; }

struct A_00533420 { virtual void sub_00534500(); char pad[320]; };

struct B_00533420 { virtual void sub_00534500(); };

struct C_00533420 : A_00533420, B_00533420 { virtual void sub_00534500(); C_00533420(); };

C_00533420::C_00533420() {}

// @baa 0x00533420
void C_00533420::sub_00534500() {}

extern char g_02665ad8[];
// @baa 0x005340c0
int sub_005340c0(void) { return (int)g_02665ad8; }

struct C_005340d0 {
    undefined4 sub_005340d0(byte);
};

int sub_00533590(void);
// @baa 0x005340d0
undefined4 C_005340d0::sub_005340d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00533590();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00534220 {
    undefined4 sub_00534220(byte);
};

int sub_01ab3290(...);
// @baa 0x00534220
undefined4 C_00534220::sub_00534220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005323d0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x78);
  }
  return param_1;
}

struct S_00534440 { void sub_005323d0(); };

// @baa 0x00534440
void sub_00534440(S_00534440 *p) { if (p) p->sub_005323d0(); }

extern int g_026657b0;
int sub_00534190();
// @baa 0x00534450
int sub_00534450() { if (!g_026657b0) g_026657b0 = sub_00534190(); return g_026657b0; }

struct C_00534500 {
    undefined4 sub_00534500(byte);
};

int sub_00533430(void);
// @baa 0x00534500
undefined4 C_00534500::sub_00534500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00533430();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00534780 { void sub_00533fe0(); void sub_00534780(int); };

// @baa 0x00534780
void C_00534780::sub_00534780(int) { sub_00533fe0(); }

struct C_00535110 {
    undefined4 sub_00535110(byte);
};

int sub_00535020(void);
// @baa 0x00535110
undefined4 C_00535110::sub_00535110(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00535020();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_02665c5c[];
// @baa 0x00535430
int sub_00535430(void) { return (int)g_02665c5c; }

struct A_00535440 { virtual void sub_00538980(); char pad[320]; };

struct B_00535440 { virtual void sub_00538980(); };

struct C_00535440 : A_00535440, B_00535440 { virtual void sub_00538980(); C_00535440(); };

C_00535440::C_00535440() {}

// @baa 0x00535440
void C_00535440::sub_00538980() {}

// @baa 0x0053e350
void sub_0053e350(void) {  }

// @baa 0x0053e360
void sub_0053e360(void) {  }

// @baa 0x0053e370
void sub_0053e370(void) {  }

// @baa 0x0053e380
void sub_0053e380(void) {  }

// @baa 0x0053e390
float10 sub_0053e390(double param_1)
{
  return (float10)param_1;
}

extern char g_01e729c0[];
struct C_0053e3c0 { void sub_0053e3c0(void); };

// @baa 0x0053e3c0
void C_0053e3c0::sub_0053e3c0(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

// @baa 0x0053e3d0
void __stdcall sub_0053e3d0(int a0, int a1) {  }

struct C_0053e400 {
    void sub_0053e400(undefined4);
};

int sub_00630f20(...);
// @baa 0x0053e400
void C_0053e400::sub_0053e400(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2);
  return;
}

struct C_0053e420 { int sub_0053e420(void); };

// @baa 0x0053e420
int C_0053e420::sub_0053e420(void) { return *(int*)((char*)this + 0); }

struct T_0053e430 { BYTE b[4]; };

// @baa 0x0053e430
template INT TArray<T_0053e430>::Add(INT);

struct C_0053e4c0 { int a, b; C_0053e4c0(int, int); };

// @baa 0x0053e4c0
C_0053e4c0::C_0053e4c0(int x, int y) : a(x), b(y) {}

// @baa 0x0053e4e0
bool UObject::sub_0053e4e0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != -1;
}

// @baa 0x0053e500
void UObject::sub_0053e500(int a0) { *(int*)((char*)this + 4) = 1; }

// @baa 0x0053e510
int UObject::sub_0053e510(void) { return *(int*)((char*)this + 0); }

struct T_0053e520 { BYTE b[16]; };

// @baa 0x0053e520
template INT TArray<T_0053e520>::Add(INT);

struct C_0053e760 { int sub_0053e760(void); };

// @baa 0x0053e760
int C_0053e760::sub_0053e760(void) { return *(int*)((char*)this + 0); }

struct C_0053e7a0 { int sub_0053e7a0(void); };

// @baa 0x0053e7a0
int C_0053e7a0::sub_0053e7a0(void) { return *(int*)((char*)this + 0); }

extern char g_01e72a60[];
struct C_0053e8f0 { void sub_0053e8f0(void); };

// @baa 0x0053e8f0
void C_0053e8f0::sub_0053e8f0(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

// @baa 0x0053e900
void __stdcall sub_0053e900(int a0, int a1) {  }

// @baa 0x0053e910
void __stdcall sub_0053e910(int a0) {  }

// @baa 0x0053e920
void __stdcall sub_0053e920(int a0, int a1) {  }

struct C_0053e930 { C_0053e930* sub_0053e930(int a0); };

// @baa 0x0053e930
C_0053e930* C_0053e930::sub_0053e930(int a0) { return this; }

struct C_0053e940 { C_0053e940* sub_0053e940(int a0); };

// @baa 0x0053e940
C_0053e940* C_0053e940::sub_0053e940(int a0) { return this; }

// @baa 0x0053e950
int sub_0053e950(void) { return 0; }

struct C_0053e960 { int a, b; C_0053e960(int, int); };

// @baa 0x0053e960
C_0053e960::C_0053e960(int x, int y) : a(x), b(y) {}

// @baa 0x0053e980
undefined4 sub_0053e980(void)
{
  return 0xffffffff;
}

// @baa 0x0053e990
undefined4 sub_0053e990(void)
{
  return 0xffffffff;
}

// @baa 0x0053e9d0
void __stdcall sub_0053e9d0(int a0) {  }

// @baa 0x0053e9e0
void __stdcall sub_0053e9e0(int a0, int a1) {  }

// @baa 0x0053e9f0
void __stdcall sub_0053e9f0(int a0, int a1) {  }

// @baa 0x0053ea00
int __stdcall sub_0053ea00(int a0, int a1) { return 1; }

// @baa 0x0053ea10
int __stdcall sub_0053ea10(int a0, int a1) { return 0; }

// @baa 0x0053ea20
void sub_0053ea20(void) {  }

// @baa 0x0053ea30
bool UTextBufferFactory::sub_0053ea30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x34) == 0;
}

struct C_0053ea40 { int a, b; C_0053ea40(int, int); };

// @baa 0x0053ea40
C_0053ea40::C_0053ea40(int x, int y) : a(x), b(y) {}

// @baa 0x0053ea60
int USubsystem::sub_0053ea60(void) { return *(int*)((char*)this + 52); }

struct C_0053eac0 { int a, b; C_0053eac0(int, int); };

// @baa 0x0053eac0
C_0053eac0::C_0053eac0(int x, int y) : a(x), b(y) {}

// @baa 0x0053eae0
void __stdcall sub_0053eae0(int a0) {  }

// @baa 0x0053eaf0
void __stdcall sub_0053eaf0(int a0) {  }

struct C_0053eb00 { int a, b; C_0053eb00(int, int); };

// @baa 0x0053eb00
C_0053eb00::C_0053eb00(int x, int y) : a(x), b(y) {}

// @baa 0x0053eb20
int USubsystem::sub_0053eb20(void) { return *(int*)((char*)this + 16); }

struct C_0053eb30 { int sub_0053eb30(void); };

// @baa 0x0053eb30
int C_0053eb30::sub_0053eb30(void) { return *(int*)((char*)this + 52); }

struct C_0053eb40 { int a, b; C_0053eb40(int, int); };

// @baa 0x0053eb40
C_0053eb40::C_0053eb40(int x, int y) : a(x), b(y) {}

struct C_0053eb60 { int sub_0053eb60(void); };

// @baa 0x0053eb60
int C_0053eb60::sub_0053eb60(void) { return *(int*)((char*)this + 72); }

struct C_0053eb70 { int a, b; C_0053eb70(int, int); };

// @baa 0x0053eb70
C_0053eb70::C_0053eb70(int x, int y) : a(x), b(y) {}

struct C_0053eb90 { int sub_0053eb90(void); };

// @baa 0x0053eb90
int C_0053eb90::sub_0053eb90(void) { return *(int*)((char*)this + 108); }

struct C_0053eba0 { int a, b; C_0053eba0(int, int); };

// @baa 0x0053eba0
C_0053eba0::C_0053eba0(int x, int y) : a(x), b(y) {}

struct C_0053ebc0 { void sub_0053ebc0(int a0); };

// @baa 0x0053ebc0
void C_0053ebc0::sub_0053ebc0(int a0) { *(int*)((char*)this + 72) = a0; }

struct C_0053ebd0 { void sub_0053ebd0(int a0); };

// @baa 0x0053ebd0
void C_0053ebd0::sub_0053ebd0(int a0) { *(int*)((char*)this + 108) = a0; }

struct C_0053ebe0 { void sub_0053ebe0(int a0); };

// @baa 0x0053ebe0
void C_0053ebe0::sub_0053ebe0(int a0) { *(int*)((char*)this + 116) = a0; }

struct C_0053ebf0 { int a, b; C_0053ebf0(int, int); };

// @baa 0x0053ebf0
C_0053ebf0::C_0053ebf0(int x, int y) : a(x), b(y) {}

struct C_0053ec30 { int a, b; C_0053ec30(int, int); };

// @baa 0x0053ec30
C_0053ec30::C_0053ec30(int x, int y) : a(x), b(y) {}

extern undefined4 g_025d6820;
extern undefined4 g_025d6824;
extern undefined4 g_025d682c;
// @baa 0x0053ec70
void UTexture2D::sub_0053ec70(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = g_025d6824;
  *(undefined4 *)(param_1 + 8) = g_025d6820;
  *(undefined4 *)(param_1 + 0xc) = g_025d682c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}
