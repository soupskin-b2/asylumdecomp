// Engine_0ba0000.cpp (part 1 of 2): 249 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00baa7a0
void sub_00baa7a0(void) {  }

// @baa 0x00baa7b0
float10 sub_00baa7b0(double param_1)
{
  return (float10)param_1;
}

int sub_00c4a700(void);
int sub_00c5a7d0(...);
extern undefined4 g_026c2af4;
// @baa 0x00baa880
int sub_00baa880(void)
{
  if (g_026c2af4 == 0) {
    g_026c2af4 = sub_00c5a7d0(L"Engine");
    sub_00c4a700();
  }
  return g_026c2af4;
}

extern char g_02019ce8[];
// @baa 0x00baa8b0
int sub_00baa8b0(void) { return (int)g_02019ce8; }

// @baa 0x00baa8c0
int sub_00baa8c0(int a0, int a1) { return a1; }

// @baa 0x00baa8d0
int sub_00baa8d0(int a0, int a1) { return a1; }

// @baa 0x00baa8e0
int sub_00baa8e0(int a0, int a1) { return a1; }

struct C { int sub_00baa910(void); };

// @baa 0x00baa910
int C::sub_00baa910(void) { return *(int*)((char*)this + 16); }

struct C_00baa920 { char* sub_00baa920(void); };

// @baa 0x00baa920
char* C_00baa920::sub_00baa920(void) { return (char*)this + 32; }

struct C_00baa950 { float sub_00baa950(void); };

// @baa 0x00baa950
float C_00baa950::sub_00baa950(void) { return *(float*)((char*)this + 96); }

struct C_00baa960 { int sub_00baa960(void); };

// @baa 0x00baa960
int C_00baa960::sub_00baa960(void) { return *(int*)((char*)this + 232); }

struct C_00baa970 {
    uint sub_00baa970();
};

// @baa 0x00baa970
uint C_00baa970::sub_00baa970(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xf4) & 1;
}

struct C_00baa980 {
    uint sub_00baa980();
};

// @baa 0x00baa980
uint C_00baa980::sub_00baa980(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xf4) >> 4 & 1;
}

struct C_00baa990 { char* sub_00baa990(void); };

// @baa 0x00baa990
char* C_00baa990::sub_00baa990(void) { return (char*)this + 280; }

struct C_00baa9a0 { float sub_00baa9a0(void); };

// @baa 0x00baa9a0
float C_00baa9a0::sub_00baa9a0(void) { return *(float*)((char*)this + 268); }

struct C_00baa9b0 { float sub_00baa9b0(void); };

// @baa 0x00baa9b0
float C_00baa9b0::sub_00baa9b0(void) { return *(float*)((char*)this + 272); }

// @baa 0x00baa9c0
int sub_00baa9c0(int a0, int a1) { return a1; }

// @baa 0x00baa9d0
int sub_00baa9d0(int a0, int a1) { return a1; }

// @baa 0x00baa9e0
int sub_00baa9e0(int a0, int a1) { return a1; }

// @baa 0x00baa9f0
int sub_00baa9f0(int a0, int a1) { return a1; }

// @baa 0x00baaa00
int sub_00baaa00(int a0, int a1) { return a1; }

// @baa 0x00baaf70
int sub_00baaf70(int a0, int a1) { return a1; }

// @baa 0x00baaf80
int sub_00baaf80(int a0, int a1) { return a1; }

struct C_00baaf90 { C_00baaf90* sub_00baaf90(void); };

// @baa 0x00baaf90
C_00baaf90* C_00baaf90::sub_00baaf90(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00baafa0
int sub_00baafa0(int a0, int a1) { return a1; }

// @baa 0x00baafb0
int sub_00baafb0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_02019cf8;
// @baa 0x00baafc0
undefined4 * UObject::sub_00baafc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02019cf8);
  return param_1;
}

// @baa 0x00baafe0
IMPLEMENT_CLASS_AT(USpeedTreeComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTreeComponentFactory.cpp", 9);

// @baa 0x00bab040
bool USpeedTreeComponentFactory::vf_10c(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x38) != 0;
}

// @baa 0x00bab050
// @baa 0x00bab070
undefined4 sub_00bab070(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02019e10;
// @baa 0x00bab080
undefined4 * UObject::sub_00bab080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02019e10);
  return param_1;
}

// @baa 0x00bab0a0
IMPLEMENT_CLASS_AT(USpeedTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTree.cpp", 89);

// @baa 0x00bab100
extern char g_02019f1c[];
// @baa 0x00bab160
void USpeedTree::sub_00bab160(void) { *(int*)((char*)this + 0) = (int)g_02019f1c; }

int sub_0053dfa0(...);
// @baa 0x00bab170
undefined4 * USpeedTree::sub_00bab170(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02019f1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab2f0
// @baa 0x00bab400
int USpeedTree::vf_000(void) { return 1; }

// @baa 0x00bab410
bool USpeedTree::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_01ebb554[];
// @baa 0x00bab4d0
void USpeedTree::sub_00bab4d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00bab4e0
undefined4 * USpeedTree::sub_00bab4e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab5c0
void USpeedTree::sub_00bab5c0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00bab5d0
void USpeedTree::sub_00bab5d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00bab5e0
void USpeedTree::sub_00bab5e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00bab5f0
void USpeedTree::sub_00bab5f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00bab600
undefined4 * USpeedTree::sub_00bab600(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab620
undefined4 * USpeedTree::sub_00bab620(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab640
undefined4 * USpeedTree::sub_00bab640(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab660
undefined4 * USpeedTree::sub_00bab660(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bab860
undefined4 USpeedTree::sub_00bab860(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x14);
  }
  return 0;
}

// @baa 0x00bab9a0
int USpeedTreeActorFactory::vf_000(void) { return 1; }

// @baa 0x00bab9b0
bool USpeedTreeActorFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00babb00
int USpeedTreeComponent::vf_000(void) { return 1; }

// @baa 0x00babb10
bool USpeedTreeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00babc40
void sub_00babc40(void) {  }

// @baa 0x00babd90
// @baa 0x00babea0
int USpeedTreeComponentFactory::vf_000(void) { return 1; }

// @baa 0x00babeb0
bool USpeedTreeComponentFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00babef0
int __stdcall sub_00babef0(int a0) { return 0; }

// @baa 0x00babf00
int __stdcall sub_00babf00(int a0) { return 0; }

// @baa 0x00babf10
int __stdcall sub_00babf10(int a0) { return 1; }

struct C_00babf20 { C_00babf20* sub_00babf20(void); };

// @baa 0x00babf20
C_00babf20* C_00babf20::sub_00babf20(void) { return this; }

extern char g_025d67c0[];
// @baa 0x00babf30
int sub_00babf30(void) { return (int)g_025d67c0; }

// @baa 0x00babf60
float10 sub_00babf60(void)
{
  return (float10)1;
}

struct C_00babf70 { int sub_00babf70(void); };

// @baa 0x00babf70
int C_00babf70::sub_00babf70(void) { return *(int*)((char*)this + 32); }

struct C_00babf80 { char* sub_00babf80(void); };

// @baa 0x00babf80
char* C_00babf80::sub_00babf80(void) { return (char*)this + 48; }

struct C_00babf90 { int sub_00babf90(void); };

// @baa 0x00babf90
int C_00babf90::sub_00babf90(void) { return *(int*)((char*)this + 272); }

struct C_00babfa0 { int sub_00babfa0(void); };

// @baa 0x00babfa0
int C_00babfa0::sub_00babfa0(void) { return *(int*)((char*)this + 8); }

struct C_00babfb0 { int sub_00babfb0(void); };

// @baa 0x00babfb0
int C_00babfb0::sub_00babfb0(void) { return *(int*)((char*)this + 72); }

// @baa 0x00babfc0
int sub_00babfc0(void) { return 0; }

extern char g_01ecdfc8[];
struct C_00bac100 { void sub_00bac100(void); };

// @baa 0x00bac100
void C_00bac100::sub_00bac100(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

// @baa 0x00bac110
int sub_00bac110(int a0, int a1) { return a1; }

// @baa 0x00bac120
int sub_00bac120(int a0, int a1) { return a1; }

// @baa 0x00bac270
int UFoliageComponent::vf_000(void) { return 1; }

// @baa 0x00bac280
bool UFoliageComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_02019f6c[];
struct C_00bac2c0 { void sub_00bac2c0(void); };

// @baa 0x00bac2c0
void C_00bac2c0::sub_00bac2c0(void) { *(int*)((char*)this + 0) = (int)g_02019f6c; }

// @baa 0x00bac2d0
void __stdcall sub_00bac2d0(int a0, int a1) {  }

// @baa 0x00bac2e0
int sub_00bac2e0(void) { return 0; }

// @baa 0x00bac2f0
int sub_00bac2f0(void) { return 0; }

// @baa 0x00bac300
int sub_00bac300(void) { return 0; }

struct C_00bac310 {
    undefined4 * sub_00bac310(byte);
};

// @baa 0x00bac310
undefined4 * C_00bac310::sub_00bac310(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02019f6c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bac3e0 { void sub_00bac3e0(void); };

// @baa 0x00bac3e0
void C_00bac3e0::sub_00bac3e0(void) { *(int*)((char*)this + 0) = (int)g_02019f6c; }

struct C_00bac3f0 { void sub_00bac3f0(void); };

// @baa 0x00bac3f0
void C_00bac3f0::sub_00bac3f0(void) { *(int*)((char*)this + 0) = (int)g_02019f6c; }

// @baa 0x00bac510
int AFoliageFactory::vf_000(void) { return 1; }

// @baa 0x00bac520
bool AFoliageFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_02019f88[];
struct C_00bac560 { C_00bac560* sub_00bac560(void); };

// @baa 0x00bac560
C_00bac560* C_00bac560::sub_00bac560(void) { *(int*)((char*)this + 0) = (int)g_02019f88; return this; }

struct C_00bac5a0 {
    void sub_00bac5a0(undefined4);
};

int sub_00716170(...);
// @baa 0x00bac5a0
void C_00bac5a0::sub_00bac5a0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  return;
}

// @baa 0x00bac5d0
void __stdcall sub_00bac5d0(int a0, int a1, int a2) {  }

struct C_00bac630 { void sub_00bac630(void); };

// @baa 0x00bac630
void C_00bac630::sub_00bac630(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

// @baa 0x00bac680
void sub_00bac680(void)
{
  return;
}

struct C_00bac690 { int sub_00bac690(void); };

// @baa 0x00bac690
int C_00bac690::sub_00bac690(void) { return *(int*)((char*)this + 2260); }

struct C_00bac6a0 { C_00bac6a0* sub_00bac6a0(void); };

// @baa 0x00bac6a0
C_00bac6a0* C_00bac6a0::sub_00bac6a0(void) { return this; }

// @baa 0x00bacfd0
void sub_00bacfd0(void) {  }

// @baa 0x00bacfe0
void sub_00bacfe0(void) {  }

// @baa 0x00bad1b0
void __stdcall sub_00bad1b0(int a0, int a1, int a2, int a3, int a4) {  }

struct C_00bad1c0 { C_00bad1c0* sub_00bad1c0(void); };

// @baa 0x00bad1c0
C_00bad1c0* C_00bad1c0::sub_00bad1c0(void) { return this; }

// @baa 0x00bad1d0
void __stdcall sub_00bad1d0(int a0) {  }

extern char g_02016dac[];
// @baa 0x00bad310
int sub_00bad310(void) { return (int)g_02016dac; }

struct C_00bad320 { void sub_00bad320(void); };

// @baa 0x00bad320
void C_00bad320::sub_00bad320(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00bad330 {
    undefined4 * sub_00bad330(byte);
};

// @baa 0x00bad330
undefined4 * C_00bad330::sub_00bad330(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bad350 { void sub_00bad350(int a0); };

// @baa 0x00bad350
void C_00bad350::sub_00bad350(int a0) { *(int*)((char*)this + 236) = a0; }

struct C_00bad360 { int a, b, c; C_00bad360(); };

// @baa 0x00bad360
C_00bad360::C_00bad360() : a(0), b(0), c(0) {}

struct C_00bad370 { int sub_00bad370(void); };

// @baa 0x00bad370
int C_00bad370::sub_00bad370(void) { return *(int*)((char*)this + 4); }

struct C_00bad380 { int sub_00bad380(void); };

// @baa 0x00bad380
int C_00bad380::sub_00bad380(void) { return *(int*)((char*)this + 4); }

struct C_00bad390 { int sub_00bad390(void); };

// @baa 0x00bad390
int C_00bad390::sub_00bad390(void) { return *(int*)((char*)this + 4); }

struct C_00bad3a0 { int a, b, c; C_00bad3a0(); };

// @baa 0x00bad3a0
C_00bad3a0::C_00bad3a0() : a(0), b(0), c(0) {}

struct C_00bad3b0 { int sub_00bad3b0(void); };

// @baa 0x00bad3b0
int C_00bad3b0::sub_00bad3b0(void) { return *(int*)((char*)this + 4); }

struct C_00bad3c0 { int a, b, c; C_00bad3c0(); };

// @baa 0x00bad3c0
C_00bad3c0::C_00bad3c0() : a(0), b(0), c(0) {}

struct C_00bad3d0 { int sub_00bad3d0(void); };

// @baa 0x00bad3d0
int C_00bad3d0::sub_00bad3d0(void) { return *(int*)((char*)this + 4); }

struct C_00bad3e0 { int sub_00bad3e0(void); };

// @baa 0x00bad3e0
int C_00bad3e0::sub_00bad3e0(void) { return *(int*)((char*)this + 4); }

struct C_00bad3f0 { int a, b, c; C_00bad3f0(); };

// @baa 0x00bad3f0
C_00bad3f0::C_00bad3f0() : a(0), b(0), c(0) {}

struct C_00bad400 { int sub_00bad400(void); };

// @baa 0x00bad400
int C_00bad400::sub_00bad400(void) { return *(int*)((char*)this + 4); }

struct C_00bad410 { int a, b, c; C_00bad410(); };

// @baa 0x00bad410
C_00bad410::C_00bad410() : a(0), b(0), c(0) {}

struct C_00bad420 { int sub_00bad420(void); };

// @baa 0x00bad420
int C_00bad420::sub_00bad420(void) { return *(int*)((char*)this + 4); }

struct C_00bad430 { int a, b, c; C_00bad430(); };

// @baa 0x00bad430
C_00bad430::C_00bad430() : a(0), b(0), c(0) {}

struct C_00bad440 { int sub_00bad440(void); };

// @baa 0x00bad440
int C_00bad440::sub_00bad440(void) { return *(int*)((char*)this + 4); }

struct C_00bad450 { int a, b, c; C_00bad450(); };

// @baa 0x00bad450
C_00bad450::C_00bad450() : a(0), b(0), c(0) {}

struct C_00bad460 { int sub_00bad460(void); };

// @baa 0x00bad460
int C_00bad460::sub_00bad460(void) { return *(int*)((char*)this + 4); }

struct C_00bad470 { int a, b, c; C_00bad470(); };

// @baa 0x00bad470
C_00bad470::C_00bad470() : a(0), b(0), c(0) {}

struct C_00bad480 { int sub_00bad480(void); };

// @baa 0x00bad480
int C_00bad480::sub_00bad480(void) { return *(int*)((char*)this + 4); }

struct C_00bad5a0 {
    uint sub_00bad5a0();
};

// @baa 0x00bad5a0
uint C_00bad5a0::sub_00bad5a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) & 1;
}

struct C_00bad610 { int a, b, c; C_00bad610(); };

// @baa 0x00bad610
C_00bad610::C_00bad610() : a(0), b(0), c(0) {}

struct C_00bad620 {
    bool sub_00bad620();
};

// @baa 0x00bad620
bool C_00bad620::sub_00bad620(void)
{
    int * param_1 = (int *)this;
  return (param_1[1] - *param_1 & 0xfffffffcU) == 0;
}

struct C_00bad630 {
    void sub_00bad630();
};

// @baa 0x00bad630
void C_00bad630::sub_00bad630(void)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}

struct C_00bad640 {
    int sub_00bad640();
};

// @baa 0x00bad640
int C_00bad640::sub_00bad640(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + -4;
}

struct C_00bad650 { int a, b, c; C_00bad650(); };

// @baa 0x00bad650
C_00bad650::C_00bad650() : a(0), b(0), c(0) {}

struct C_00bad6a0 { int sub_00bad6a0(void); };

// @baa 0x00bad6a0
int C_00bad6a0::sub_00bad6a0(void) { return *(int*)((char*)this + 0); }

struct C_00bad6f0 { int sub_00bad6f0(void); };

// @baa 0x00bad6f0
int C_00bad6f0::sub_00bad6f0(void) { return *(int*)((char*)this + 0); }

struct C_00bad700 { int a, b, c; C_00bad700(); };

// @baa 0x00bad700
C_00bad700::C_00bad700() : a(0), b(0), c(0) {}

struct C_00bad710 { int sub_00bad710(void); };

// @baa 0x00bad710
int C_00bad710::sub_00bad710(void) { return *(int*)((char*)this + 4); }

struct C_00bad8d0 { int sub_00bad8d0(void); };

// @baa 0x00bad8d0
int C_00bad8d0::sub_00bad8d0(void) { return *(int*)((char*)this + 0); }

struct C_00bad8e0 { int sub_00bad8e0(void); };

// @baa 0x00bad8e0
int C_00bad8e0::sub_00bad8e0(void) { return *(int*)((char*)this + 4); }

struct C_00bad8f0 { int sub_00bad8f0(void); };

// @baa 0x00bad8f0
int C_00bad8f0::sub_00bad8f0(void) { return *(int*)((char*)this + 4); }

struct C_00bad930 { int a, b, c; C_00bad930(); };

// @baa 0x00bad930
C_00bad930::C_00bad930() : a(0), b(0), c(0) {}

struct C_00bad940 { int sub_00bad940(void); };

// @baa 0x00bad940
int C_00bad940::sub_00bad940(void) { return *(int*)((char*)this + 4); }

struct C_00bad950 {
    bool sub_00bad950();
};

// @baa 0x00bad950
bool C_00bad950::sub_00bad950(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00bad960 { int sub_00bad960(void); };

// @baa 0x00bad960
int C_00bad960::sub_00bad960(void) { return *(int*)((char*)this + 0); }

struct C_00bad970 { char* sub_00bad970(void); };

// @baa 0x00bad970
char* C_00bad970::sub_00bad970(void) { return (char*)this + 16; }

struct C_00bad980 {
    int a;
    int field;
    C_00bad980* sub_00bad980();
};

// @baa 0x00bad980
C_00bad980* C_00bad980::sub_00bad980()
{
    field++;
    return this;
}

struct C_00bad990 { char* sub_00bad990(void); };

// @baa 0x00bad990
char* C_00bad990::sub_00bad990(void) { return (char*)this + 2300; }

struct C_00bad9a0 { int a, b, c; C_00bad9a0(); };

// @baa 0x00bad9a0
C_00bad9a0::C_00bad9a0() : a(0), b(0), c(0) {}

struct C_00bad9b0 { int sub_00bad9b0(void); };

// @baa 0x00bad9b0
int C_00bad9b0::sub_00bad9b0(void) { return *(int*)((char*)this + 4); }

struct C_00bad9c0 {
    undefined4 sub_00bad9c0(byte);
};

int sub_00bd0800(void);
// @baa 0x00bad9c0
undefined4 C_00bad9c0::sub_00bad9c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bd0800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bada10 {
    int sub_00bada10();
};

int sub_009d4650(void);
// @baa 0x00bada10
int C_00bada10::sub_00bada10(void)
{
    int param_1 = (int)this;
  sub_009d4650();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
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

struct C_00badac0 {
    undefined4 sub_00badac0(undefined4 param_1);
};

// @baa 0x00badac0
undefined4 C_00badac0::sub_00badac0(undefined4 param_1)
{
    return (undefined4)this;
}

struct C_00badb40 { C_00badb40* sub_00badb40(int a0); };

// @baa 0x00badb40
C_00badb40* C_00badb40::sub_00badb40(int a0) { return this; }

struct C_00badb50 { int sub_00badb50(void); };

// @baa 0x00badb50
int C_00badb50::sub_00badb50(void) { return *(int*)((char*)this + 0); }

struct C_00badb60 { int sub_00badb60(void); };

// @baa 0x00badb60
int C_00badb60::sub_00badb60(void) { return *(int*)((char*)this + 0); }

struct C_00badb70 {
    int sub_00badb70(int);
};

// @baa 0x00badb70
int C_00badb70::sub_00badb70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x140 + *param_1;
}

struct C_00badb80 { C_00badb80* sub_00badb80(int a0); };

// @baa 0x00badb80
C_00badb80* C_00badb80::sub_00badb80(int a0) { return this; }

struct C_00badc00 { int sub_00badc00(void); };

// @baa 0x00badc00
int C_00badc00::sub_00badc00(void) { return *(int*)((char*)this + 0); }

struct C_00badc10 { int sub_00badc10(void); };

// @baa 0x00badc10
int C_00badc10::sub_00badc10(void) { return *(int*)((char*)this + 0); }

struct C_00badc20 { C_00badc20* sub_00badc20(int a0); };

// @baa 0x00badc20
C_00badc20* C_00badc20::sub_00badc20(int a0) { return this; }

struct C_00badc30 { int sub_00badc30(void); };

// @baa 0x00badc30
int C_00badc30::sub_00badc30(void) { return *(int*)((char*)this + 0); }

struct C_00badc40 {
    int sub_00badc40(int);
};

// @baa 0x00badc40
int C_00badc40::sub_00badc40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00badc50 { int sub_00badc50(void); };

// @baa 0x00badc50
int C_00badc50::sub_00badc50(void) { return *(int*)((char*)this + 0); }

struct C_00badc60 { int sub_00badc60(void); };

// @baa 0x00badc60
int C_00badc60::sub_00badc60(void) { return *(int*)((char*)this + 0); }

struct C_00badce0 {
    int sub_00badce0(int);
};

// @baa 0x00badce0
int C_00badce0::sub_00badce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00badcf0 { int sub_00badcf0(void); };

// @baa 0x00badcf0
int C_00badcf0::sub_00badcf0(void) { return *(int*)((char*)this + 0); }

struct C_00badd00 {
    int sub_00badd00(int);
};

// @baa 0x00badd00
int C_00badd00::sub_00badd00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00badd10 { int sub_00badd10(void); };

// @baa 0x00badd10
int C_00badd10::sub_00badd10(void) { return *(int*)((char*)this + 0); }

struct C_00badd20 { int sub_00badd20(void); };

// @baa 0x00badd20
int C_00badd20::sub_00badd20(void) { return *(int*)((char*)this + 0); }

struct C_00badd30 {
    int sub_00badd30(int);
};

// @baa 0x00badd30
int C_00badd30::sub_00badd30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00badd40 { int sub_00badd40(void); };

// @baa 0x00badd40
int C_00badd40::sub_00badd40(void) { return *(int*)((char*)this + 0); }

struct C_00badd50 { int sub_00badd50(void); };

// @baa 0x00badd50
int C_00badd50::sub_00badd50(void) { return *(int*)((char*)this + 0); }

struct C_00badd60 {
    int sub_00badd60(int);
};

// @baa 0x00badd60
int C_00badd60::sub_00badd60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x60 + *param_1;
}

struct C_00badd70 { int sub_00badd70(void); };

// @baa 0x00badd70
int C_00badd70::sub_00badd70(void) { return *(int*)((char*)this + 0); }

struct C_00badd80 { int sub_00badd80(void); };

// @baa 0x00badd80
int C_00badd80::sub_00badd80(void) { return *(int*)((char*)this + 0); }

struct C_00bade00 {
    int sub_00bade00(int);
};

// @baa 0x00bade00
int C_00bade00::sub_00bade00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00bade10 {
    void sub_00bade10();
};

int sub_0053df70(...);
// @baa 0x00bade10
void C_00bade10::sub_00bade10(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00badeb0 { int sub_00badeb0(void); };

// @baa 0x00badeb0
int C_00badeb0::sub_00badeb0(void) { return *(int*)((char*)this + 0); }

struct C_00badf50 { C_00badf50* sub_00badf50(int a0); };

// @baa 0x00badf50
C_00badf50* C_00badf50::sub_00badf50(int a0) { return this; }

struct C_00badf60 { int sub_00badf60(void); };

// @baa 0x00badf60
int C_00badf60::sub_00badf60(void) { return *(int*)((char*)this + 0); }

struct C_00badf70 { C_00badf70* sub_00badf70(int a0); };

// @baa 0x00badf70
C_00badf70* C_00badf70::sub_00badf70(int a0) { return this; }

struct C_00badf80 { int sub_00badf80(void); };

// @baa 0x00badf80
int C_00badf80::sub_00badf80(void) { return *(int*)((char*)this + 0); }

struct C_00badf90 { int sub_00badf90(void); };

// @baa 0x00badf90
int C_00badf90::sub_00badf90(void) { return *(int*)((char*)this + 0); }

struct C_00badfa0 {
    int sub_00badfa0(int);
};

// @baa 0x00badfa0
int C_00badfa0::sub_00badfa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00badfe0 {
    undefined4 sub_00badfe0(uint);
};

// @baa 0x00badfe0
undefined4 C_00badfe0::sub_00badfe0(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x850 + (param_2 & 7) * 4);
}

struct C_00bae000 { int sub_00bae000(void); };

// @baa 0x00bae000
int C_00bae000::sub_00bae000(void) { return *(int*)((char*)this + 0); }

struct C_00bae0e0 { int sub_00bae0e0(void); };

// @baa 0x00bae0e0
int C_00bae0e0::sub_00bae0e0(void) { return *(int*)((char*)this + 6352); }

struct C_00bae0f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00bae0f0* sub_00bae0f0(INT value);
};

// @baa 0x00bae0f0
C_00bae0f0* C_00bae0f0::sub_00bae0f0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00bae2e0 { int sub_00bae2e0(void); };

// @baa 0x00bae2e0
int C_00bae2e0::sub_00bae2e0(void) { return *(int*)((char*)this + 0); }

struct C_00bae2f0 {
    int sub_00bae2f0();
};

// @baa 0x00bae2f0
int C_00bae2f0::sub_00bae2f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bae300 { int a, b; C_00bae300(int, int); };

// @baa 0x00bae300
C_00bae300::C_00bae300(int x, int y) : a(x), b(y) {}

struct C_00bae320 {
    int sub_00bae320();
};

// @baa 0x00bae320
int C_00bae320::sub_00bae320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bae330 { int a, b; C_00bae330(int, int); };

// @baa 0x00bae330
C_00bae330::C_00bae330(int x, int y) : a(x), b(y) {}

struct C_00bae350 {
    undefined4 sub_00bae350(byte);
};

// @baa 0x00bae350
undefined4 C_00bae350::sub_00bae350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bae390 {
    void sub_00bae390();
};

// @baa 0x00bae390
void C_00bae390::sub_00bae390(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00bae3b0 { int sub_00bae3b0(void); };

// @baa 0x00bae3b0
int C_00bae3b0::sub_00bae3b0(void) { return *(int*)((char*)this + 0); }

struct C_00bae3c0 { int sub_00bae3c0(void); };

// @baa 0x00bae3c0
int C_00bae3c0::sub_00bae3c0(void) { return *(int*)((char*)this + 0); }

struct C_00bae3d0 { int sub_00bae3d0(void); };

// @baa 0x00bae3d0
int C_00bae3d0::sub_00bae3d0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00bae3e0(INT Index) const;
};

// @baa 0x00bae3e0
const DWORD* S::sub_00bae3e0(INT Index) const
{
    return &Items(Index);
}

struct C_00bae430 { int sub_00bae430(void); };

// @baa 0x00bae430
int C_00bae430::sub_00bae430(void) { return *(int*)((char*)this + 0); }

struct C_00bae440 { int sub_00bae440(void); };

// @baa 0x00bae440
int C_00bae440::sub_00bae440(void) { return *(int*)((char*)this + 0); }

struct C_00bae450 { int sub_00bae450(void); };

// @baa 0x00bae450
int C_00bae450::sub_00bae450(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bae460
int sub_00bae460(int a0) { return *(int*)a0; }

// @baa 0x00bae470
bool sub_00bae470(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00bae480 {
    void sub_00bae480(undefined4 *);
};

// @baa 0x00bae480
void C_00bae480::sub_00bae480(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00bae4a0 { int sub_00bae4a0(void); };

// @baa 0x00bae4a0
int C_00bae4a0::sub_00bae4a0(void) { return *(int*)((char*)this + 0); }

struct S_00bae4b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bae4b0(INT Index);
};

// @baa 0x00bae4b0
DWORD* S_00bae4b0::sub_00bae4b0(INT Index)
{
    return &Items(Index);
}

struct C_00bae500 { int sub_00bae500(void); };

// @baa 0x00bae500
int C_00bae500::sub_00bae500(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bae510
int sub_00bae510(int a0) { return *(int*)a0; }

// @baa 0x00bae520
bool sub_00bae520(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00bae530 { int a, b; C_00bae530(const C_00bae530 &); };

// @baa 0x00bae530
C_00bae530::C_00bae530(const C_00bae530 &o) : a(o.a), b(o.b) {}

struct C_00bae590 { int sub_00bae590(void); };

// @baa 0x00bae590
int C_00bae590::sub_00bae590(void) { return *(int*)((char*)this + 0); }

struct S_00bae5a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bae5a0(INT Index);
};

// @baa 0x00bae5a0
DWORD* S_00bae5a0::sub_00bae5a0(INT Index)
{
    return &Items(Index);
}

struct S_00bae5f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00bae5f0(INT Index) const;
};

// @baa 0x00bae5f0
const DWORD* S_00bae5f0::sub_00bae5f0(INT Index) const
{
    return &Items(Index);
}

struct C_00bae670 { int sub_00bae670(void); };

// @baa 0x00bae670
int C_00bae670::sub_00bae670(void) { return *(int*)((char*)this + 0); }

struct C_00bae680 {
    void sub_00bae680();
};

// @baa 0x00bae680
void C_00bae680::sub_00bae680(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00bae6e0 { int sub_00bae6e0(void); };

// @baa 0x00bae6e0
int C_00bae6e0::sub_00bae6e0(void) { return *(int*)((char*)this + 0); }

struct C_00bae6f0 { int sub_00bae6f0(void); };

// @baa 0x00bae6f0
int C_00bae6f0::sub_00bae6f0(void) { return *(int*)((char*)this + 0); }

struct C_00baec50 { C_00baec50* sub_00baec50(void); };

// @baa 0x00baec50
C_00baec50* C_00baec50::sub_00baec50(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00baec60
int* sub_00baec60(int* a, int b)
{
  *a = b;
  return a;
}

struct C_00baec70 { C_00baec70* sub_00baec70(void); };

// @baa 0x00baec70
C_00baec70* C_00baec70::sub_00baec70(void) { return this; }

struct C_00baec80 { C_00baec80* sub_00baec80(void); };

// @baa 0x00baec80
C_00baec80* C_00baec80::sub_00baec80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00baec90 { int sub_00baec90(void); };

// @baa 0x00baec90
int C_00baec90::sub_00baec90(void) { return *(int*)((char*)this + 0); }

struct C_00baeca0 {
    int sub_00baeca0(int);
};

// @baa 0x00baeca0
int C_00baeca0::sub_00baeca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00baecb0 {
    int sub_00baecb0(int);
};

// @baa 0x00baecb0
int C_00baecb0::sub_00baecb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00baecc0 { C_00baecc0* sub_00baecc0(void); };

// @baa 0x00baecc0
C_00baecc0* C_00baecc0::sub_00baecc0(void) { return this; }

struct C_00baecd0 { int sub_00baecd0(void); };

// @baa 0x00baecd0
int C_00baecd0::sub_00baecd0(void) { return *(int*)((char*)this + 0); }

struct C_00baece0 { int sub_00baece0(void); };

// @baa 0x00baece0
int C_00baece0::sub_00baece0(void) { return *(int*)((char*)this + 20); }

// @baa 0x00baed20
undefined4 sub_00baed20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baed60
undefined4 sub_00baed60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baeda0
undefined4 sub_00baeda0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baede0
undefined4 sub_00baede0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baee20
undefined4 sub_00baee20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baee60
undefined4 sub_00baee60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baeea0
undefined4 sub_00baeea0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baeee0
undefined4 sub_00baeee0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baef20
undefined4 sub_00baef20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baef60
undefined4 sub_00baef60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baefa0
undefined4 sub_00baefa0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baefe0
undefined4 sub_00baefe0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  switch(param_1) {
  case 0:
    return param_2;
  case 1:
    return param_3;
  case 2:
    return param_4;
  case 3:
    return param_5;
  default:
    return param_6;
  }
}

// @baa 0x00baf460
uint sub_00baf460(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00baf480
uint sub_00baf480(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_00baf810 { int sub_00baf810(void); };

// @baa 0x00baf810
int C_00baf810::sub_00baf810(void) { return *(int*)((char*)this + 2116); }

struct C_00baf820 { int a, b; C_00baf820(const C_00baf820 &); };

// @baa 0x00baf820
C_00baf820::C_00baf820(const C_00baf820 &o) : a(o.a), b(o.b) {}

struct C_00baf970 { unsigned sub_00baf970(void); };

// @baa 0x00baf970
unsigned C_00baf970::sub_00baf970(void) { return *(unsigned*)((char*)this + 2160) >> 31; }

struct C_00baf980 {
    bool sub_00baf980();
};

// @baa 0x00baf980
bool C_00baf980::sub_00baf980(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00baf990 { int sub_00baf990(void); };

// @baa 0x00baf990
int C_00baf990::sub_00baf990(void) { return *(int*)((char*)this + 0); }

struct C_00baf9a0 { char* sub_00baf9a0(void); };

// @baa 0x00baf9a0
char* C_00baf9a0::sub_00baf9a0(void) { return (char*)this + 16; }

struct C_00baf9b0 { int sub_00baf9b0(void); };

// @baa 0x00baf9b0
int C_00baf9b0::sub_00baf9b0(void) { return *(int*)((char*)this + 80); }

struct C_00baf9c0 {
    void sub_00baf9c0();
};

// @baa 0x00baf9c0
void C_00baf9c0::sub_00baf9c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_00baf9e0 { C_00baf9e0* sub_00baf9e0(void); };

// @baa 0x00baf9e0
C_00baf9e0* C_00baf9e0::sub_00baf9e0(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00bafa20 { C_00bafa20* sub_00bafa20(void); };

// @baa 0x00bafa20
C_00bafa20* C_00bafa20::sub_00bafa20(void) { return this; }

int sub_00627f00(...);
// @baa 0x00bafa30
void sub_00bafa30(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x84c);
  return;
}

// @baa 0x00bafa50
void sub_00bafa50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00bafc40 { int sub_00bafc40(void); };

// @baa 0x00bafc40
int C_00bafc40::sub_00bafc40(void) { return *(int*)((char*)this + 16); }

struct Singleton_026b0d94
{
    virtual void vf_000() = 0;
    virtual void vf_001() = 0;
    virtual void vf_002() = 0;
    virtual void vf_003() = 0;
    virtual void vf_004() = 0;
    virtual void vf_005() = 0;
    virtual void vf_006() = 0;
    virtual void vf_007() = 0;
    virtual void vf_008() = 0;
    virtual void vf_009() = 0;
    virtual void vf_010() = 0;
    virtual void vf_011() = 0;
    virtual void vf_012() = 0;
    virtual void vf_013() = 0;
    virtual void vf_014() = 0;
    virtual void vf_015() = 0;
    virtual void vf_016() = 0;
    virtual void vf_017() = 0;
    virtual void vf_018() = 0;
    virtual void vf_019() = 0;
    virtual void vf_020() = 0;
    virtual void vf_021() = 0;
    virtual void vf_022() = 0;
    virtual void vf_023() = 0;
    virtual void vf_024() = 0;
    virtual void vf_025() = 0;
    virtual void vf_026() = 0;
    virtual void vf_027() = 0;
    virtual void vf_028() = 0;
    virtual void vf_029() = 0;
    virtual void vf_030() = 0;
    virtual void vf_031() = 0;
    virtual void vf_032() = 0;
    virtual void vf_033() = 0;
    virtual void vf_034() = 0;
    virtual void vf_035() = 0;
    virtual void vf_036() = 0;
    virtual void vf_037() = 0;
    virtual void vf_038() = 0;
    virtual void vf_039() = 0;
    virtual void vf_040() = 0;
    virtual void vf_041() = 0;
    virtual void vf_042() = 0;
    virtual void vf_043() = 0;
    virtual void vf_044() = 0;
    virtual void vf_045() = 0;
    virtual void vf_046() = 0;
    virtual void vf_047() = 0;
    virtual void vf_048() = 0;
    virtual void vf_049() = 0;
    virtual void vf_050() = 0;
    virtual void vf_051() = 0;
    virtual void vf_052() = 0;
    virtual void vf_053() = 0;
    virtual void vf_054() = 0;
    virtual void vf_055() = 0;
    virtual void vf_056() = 0;
    virtual void vf_057() = 0;
    virtual void vf_058() = 0;
    virtual void vf_059() = 0;
    virtual void vf_060() = 0;
    virtual void vf_061() = 0;
    virtual void vf_062() = 0;
    virtual void vf_063() = 0;
    virtual void vf_064() = 0;
    virtual void vf_065() = 0;
    virtual void vf_066() = 0;
    virtual void vf_067() = 0;
    virtual void vf_068() = 0;
    virtual void vf_069() = 0;
    virtual void vf_070() = 0;
    virtual void vf_071() = 0;
    virtual void vf_072() = 0;
    virtual void vf_073() = 0;
    virtual void vf_074() = 0;
    virtual void vf_075() = 0;
    virtual void vf_076() = 0;
    virtual void vf_077() = 0;
    virtual void vf_078() = 0;
    virtual void vf_079() = 0;
    virtual void vf_080() = 0;
    virtual void vf_081() = 0;
    virtual void vf_082() = 0;
    virtual void vf_083() = 0;
    virtual void vf_084() = 0;
    virtual void vf_085() = 0;
    virtual void vf_086() = 0;
    virtual void vf_087() = 0;
    virtual void vf_088() = 0;
    virtual void vf_089() = 0;
    virtual void vf_090() = 0;
    virtual void vf_091() = 0;
    virtual void vf_092() = 0;
    virtual void vf_093() = 0;
    virtual void vf_094() = 0;
    virtual void vf_095() = 0;
    virtual void vf_096() = 0;
    virtual void vf_097() = 0;
    virtual void vf_098() = 0;
    virtual void vf_099() = 0;
    virtual void vf_100() = 0;
    virtual void vf_101() = 0;
    virtual void vf_102() = 0;
    virtual void vf_103() = 0;
    virtual void vf_104() = 0;
    virtual void vf_105() = 0;
    virtual void vf_106() = 0;
    virtual void vf_107() = 0;
    virtual void vf_108() = 0;
    virtual void vf_109() = 0;
    virtual void vf_110() = 0;
    virtual void vf_111() = 0;
    virtual void vf_112() = 0;
    virtual void vf_113() = 0;
    virtual void vf_114() = 0;
    virtual void vf_115() = 0;
    virtual void vf_116() = 0;
    virtual void vf_117() = 0;
    virtual void vf_118() = 0;
    virtual void vf_119() = 0;
    virtual void vf_120() = 0;
    virtual void vf_121() = 0;
    virtual void vf_122() = 0;
    virtual void vf_123() = 0;
    virtual void vf_124() = 0;
    virtual void vf_125() = 0;
    virtual void vf_126() = 0;
    virtual void vf_127() = 0;
    virtual void vf_128() = 0;
    virtual void vf_129() = 0;
    virtual void vf_130() = 0;
    virtual void vf_131() = 0;
    virtual void vf_132() = 0;
    virtual void vf_133() = 0;
    virtual void sub_218(DWORD Value) = 0;
};

extern Singleton_026b0d94* g_026b0d94;
struct C_SingletonClient
{
    void* Pad_00;
    DWORD Field_04;
    void sub_00bae6c0();
};

// @baa 0x00bae6c0
void C_SingletonClient::sub_00bae6c0()
{
    if (Field_04 != 0)
    {
        g_026b0d94->sub_218(Field_04);
    }
}
