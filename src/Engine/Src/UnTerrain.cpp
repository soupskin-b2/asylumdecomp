// UnTerrain.cpp (part 1 of 4): 395 functions
// Placed here by: neighbours 359, class 16, callers 10, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { int sub_007bf0d0(void); };

// @baa 0x007bf0d0
int C::sub_007bf0d0(void) { return *(int*)((char*)this + 0); }

struct C_007c3720 { void sub_00723aa0(int); C_007c3720 *sub_007c3720(int); };

// @baa 0x007c3720
C_007c3720 *C_007c3720::sub_007c3720(int a) { sub_00723aa0(a); return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007c38c0 { void* Data; int Num; int Max; void sub_007c38c0(); };

// @baa 0x007c38c0
void C_007c38c0::sub_007c38c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007c3920 { void sub_0054e560(int); C_007c3920 *sub_007c3920(int); };

// @baa 0x007c3920
C_007c3920 *C_007c3920::sub_007c3920(int a) { sub_0054e560(a); return this; }

struct C_007c3a40 { void sub_00723aa0(int); C_007c3a40 *sub_007c3a40(int); };

// @baa 0x007c3a40
C_007c3a40 *C_007c3a40::sub_007c3a40(int a) { sub_00723aa0(a); return this; }

struct C_007c3a60 { void sub_00723aa0(int); C_007c3a60 *sub_007c3a60(int); };

// @baa 0x007c3a60
C_007c3a60 *C_007c3a60::sub_007c3a60(int a) { sub_00723aa0(a); return this; }

struct C_00853270 { void sub_00725c60(int); C_00853270 *sub_00853270(int); };

// @baa 0x00853270
C_00853270 *C_00853270::sub_00853270(int a) { sub_00725c60(a); return this; }

struct C_00981fc0 { C_00981fc0* sub_00981fc0(void); };

// @baa 0x00981fc0
C_00981fc0* C_00981fc0::sub_00981fc0(void) { return this; }

struct C_00981fd0 { char* sub_00981fd0(void); };

// @baa 0x00981fd0
char* C_00981fd0::sub_00981fd0(void) { return (char*)this + 256; }

// @baa 0x00981fe0
int sub_00981fe0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00981ff0
void sub_00981ff0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00982070
int ATerrain::sub_00982070(void) { return *(int*)((char*)this + 640); }

int sub_0053dfa0(...);
// @baa 0x00982080
void ATerrain::sub_00982080(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x280) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x280));
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  return;
}

// @baa 0x009820b0
int ATerrain::sub_009820b0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + 0x244 + param_2 * 0xc;
}

// @baa 0x009820d0
int sub_009820d0(int a0, int a1) { return a1; }

// @baa 0x009820e0
void sub_009820e0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00982100
int sub_00982100(int a0, int a1) { return a1; }

// @baa 0x00982110
int sub_00982110(int a0, int a1) { return a1; }

// @baa 0x00982120
void sub_00982120(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00982140
IMPLEMENT_CLASS_AT(ATerrain, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp", 14);

// @baa 0x00982250
int ATerrain::vf_000(void) { return 1; }

// @baa 0x00982260
bool ATerrain::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009822a0
IMPLEMENT_CLASS_AT(UTerrainComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp", 15);

// @baa 0x009823b0
int UTerrainComponent::vf_000(void) { return 1; }

// @baa 0x009823c0
bool UTerrainComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00982400
IMPLEMENT_CLASS_AT(UTerrainMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp", 16);

// @baa 0x00982510
int UTerrainMaterial::vf_000(void) { return 1; }

// @baa 0x00982520
bool UTerrainMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00982560
IMPLEMENT_CLASS_AT(UTerrainLayerSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp", 17);

// @baa 0x00982670
int UTerrainLayerSetup::vf_000(void) { return 1; }

// @baa 0x00982680
bool UTerrainLayerSetup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00982830
void __stdcall sub_00982830(int a0) {  }

// @baa 0x009835f0
IMPLEMENT_CLASS_AT(UTerrainWeightMapTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp", 5863);

// @baa 0x00983700
int UTerrainWeightMapTexture::vf_000(void) { return 1; }

// @baa 0x00983710
bool UTerrainWeightMapTexture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00983770 {
    void sub_00983770(int);
    int sub_0072f930(int, int, int);
};

int sub_006311e0(...);
int sub_00981ee0(...);
extern undefined4 g_01f8c558;
// @baa 0x00983770
void C_00983770::sub_00983770(int param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  undefined4 uVar2;
  if (param_2 == 0) {
    sub_006311e0("InTerrain",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnTerrain.cpp"
                 ,0x1712,&g_01f8c558);
  }
  *(int *)(param_1 + 0x100) = param_2;
  uVar1 = sub_00981ee0(*(undefined4 *)(param_2 + 0x25c));
  uVar2 = sub_00981ee0(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x260));
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffe | 0x108;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  ((C_00983770 *)(this))->sub_0072f930(uVar1, uVar2, 2);
  return;
}

struct C_009839e0 {
    float10 sub_009839e0(float, float, float, float, int);
};

// @baa 0x009839e0
float10 C_009839e0::sub_009839e0(float param_2, float param_3, float param_4, float param_5, int param_6)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = param_6 * 0x10 + param_1;
  return (float10)*(float *)(iVar1 + 0x11c) * (float10)param_5 +
         (float10)*(float *)(iVar1 + 0x118) * (float10)param_4 +
         (float10)*(float *)(iVar1 + 0x114) * (float10)param_3 +
         (float10)*(float *)((param_6 + 0x11) * 0x10 + param_1) * (float10)param_2;
}

struct C_00983a20 { int a, b, c; C_00983a20(); };

// @baa 0x00983a20
C_00983a20::C_00983a20() : a(0), b(0), c(0) {}

struct C_00983a50 { int a, b, c; C_00983a50(); };

// @baa 0x00983a50
C_00983a50::C_00983a50() : a(0), b(0), c(0) {}

struct C_00983a60 { int sub_00983a60(void); };

// @baa 0x00983a60
int C_00983a60::sub_00983a60(void) { return *(int*)((char*)this + 4); }

struct C_00983a70 { int a, b, c; C_00983a70(); };

// @baa 0x00983a70
C_00983a70::C_00983a70() : a(0), b(0), c(0) {}

struct T_00983a80 { int x; };

// @baa 0x00983a80
template T_00983a80& TIndirectArray<T_00983a80>::operator()(INT);

struct T_00983ad0 { int x; };

// @baa 0x00983ad0
template const T_00983ad0& TIndirectArray<T_00983ad0>::operator()(INT) const;

struct T_00983b20 { int x; };

// @baa 0x00983b20
template const T_00983b20& TIndirectArray<T_00983b20>::operator()(INT) const;

struct C_00983e50 { int a, b, c; C_00983e50(); };

// @baa 0x00983e50
C_00983e50::C_00983e50() : a(0), b(0), c(0) {}

struct C_00983e60 { int sub_00983e60(void); };

// @baa 0x00983e60
int C_00983e60::sub_00983e60(void) { return *(int*)((char*)this + 4); }

struct C_00983e70 { int a, b, c; C_00983e70(); };

// @baa 0x00983e70
C_00983e70::C_00983e70() : a(0), b(0), c(0) {}

struct C_00983e80 { int sub_00983e80(void); };

// @baa 0x00983e80
int C_00983e80::sub_00983e80(void) { return *(int*)((char*)this + 4); }

struct C_00983e90 { int a, b, c; C_00983e90(); };

// @baa 0x00983e90
C_00983e90::C_00983e90() : a(0), b(0), c(0) {}

struct C_00983ea0 { int sub_00983ea0(void); };

// @baa 0x00983ea0
int C_00983ea0::sub_00983ea0(void) { return *(int*)((char*)this + 4); }

struct C_00983eb0 { int a, b, c; C_00983eb0(); };

// @baa 0x00983eb0
C_00983eb0::C_00983eb0() : a(0), b(0), c(0) {}

struct C_00983ec0 { int sub_00983ec0(void); };

// @baa 0x00983ec0
int C_00983ec0::sub_00983ec0(void) { return *(int*)((char*)this + 4); }

struct C_00983f00 { int a, b, c; C_00983f00(); };

// @baa 0x00983f00
C_00983f00::C_00983f00() : a(0), b(0), c(0) {}

struct C_00983f10 { int sub_00983f10(void); };

// @baa 0x00983f10
int C_00983f10::sub_00983f10(void) { return *(int*)((char*)this + 4); }

struct C_00983f90 { int a, b, c; C_00983f90(); };

// @baa 0x00983f90
C_00983f90::C_00983f90() : a(0), b(0), c(0) {}

struct C_00983fa0 { int sub_00983fa0(void); };

// @baa 0x00983fa0
int C_00983fa0::sub_00983fa0(void) { return *(int*)((char*)this + 4); }

struct C_00984020 { int a, b, c; C_00984020(); };

// @baa 0x00984020
C_00984020::C_00984020() : a(0), b(0), c(0) {}

struct C_00984030 { int sub_00984030(void); };

// @baa 0x00984030
int C_00984030::sub_00984030(void) { return *(int*)((char*)this + 4); }

struct C_009840b0 { int sub_009840b0(void); };

// @baa 0x009840b0
int C_009840b0::sub_009840b0(void) { return *(int*)((char*)this + 4); }

struct C_009840c0 { int a, b, c; C_009840c0(); };

// @baa 0x009840c0
C_009840c0::C_009840c0() : a(0), b(0), c(0) {}

struct C_009840d0 { int sub_009840d0(void); };

// @baa 0x009840d0
int C_009840d0::sub_009840d0(void) { return *(int*)((char*)this + 4); }

struct C_009840e0 { int sub_009840e0(void); };

// @baa 0x009840e0
int C_009840e0::sub_009840e0(void) { return *(int*)((char*)this + 4); }

struct C_009840f0 { int sub_009840f0(void); };

// @baa 0x009840f0
int C_009840f0::sub_009840f0(void) { return *(int*)((char*)this + 4); }

struct C_00984100 { int sub_00984100(void); };

// @baa 0x00984100
int C_00984100::sub_00984100(void) { return *(int*)((char*)this + 4); }

struct C_00984110 { int sub_00984110(void); };

// @baa 0x00984110
int C_00984110::sub_00984110(void) { return *(int*)((char*)this + 4); }

struct C_00984190 { int sub_00984190(void); };

// @baa 0x00984190
int C_00984190::sub_00984190(void) { return *(int*)((char*)this + 4); }

struct C_009841a0 { int sub_009841a0(void); };

// @baa 0x009841a0
int C_009841a0::sub_009841a0(void) { return *(int*)((char*)this + 4); }

struct C_009841b0 { int sub_009841b0(void); };

// @baa 0x009841b0
int C_009841b0::sub_009841b0(void) { return *(int*)((char*)this + 4); }

struct C_009841c0 { int a, b, c; C_009841c0(); };

// @baa 0x009841c0
C_009841c0::C_009841c0() : a(0), b(0), c(0) {}

struct C_009841d0 { int sub_009841d0(void); };

// @baa 0x009841d0
int C_009841d0::sub_009841d0(void) { return *(int*)((char*)this + 4); }

struct C_009841e0 {
    int sub_009841e0(int);
};

// @baa 0x009841e0
int C_009841e0::sub_009841e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00984260 {
    undefined4 sub_00984260(int);
};

// @baa 0x00984260
undefined4 C_00984260::sub_00984260(int param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 <= *(float *)(param_2 + 0x20)) && (*(float *)(param_2 + 0x20) <= param_1[3])) &&
      (param_1[1] <= *(float *)(param_2 + 0x24))) &&
     (((*(float *)(param_2 + 0x24) <= param_1[4] && (param_1[2] <= *(float *)(param_2 + 0x28))) &&
      (*(float *)(param_2 + 0x28) <= param_1[5])))) {
    return 1;
  }
  return 0;
}

struct C_009843b0 { int sub_009843b0(void); };

// @baa 0x009843b0
int C_009843b0::sub_009843b0(void) { return *(int*)((char*)this + 0); }

struct C_00984430 { int sub_00984430(void); };

// @baa 0x00984430
int C_00984430::sub_00984430(void) { return *(int*)((char*)this + 0); }

struct C_00984470 { int sub_00984470(void); };

// @baa 0x00984470
int C_00984470::sub_00984470(void) { return *(int*)((char*)this + 0); }

struct C_00984480 { int sub_00984480(void); };

// @baa 0x00984480
int C_00984480::sub_00984480(void) { return *(int*)((char*)this + 0); }

struct C_00984530 { int sub_00984530(void); };

// @baa 0x00984530
int C_00984530::sub_00984530(void) { return *(int*)((char*)this + 0); }

struct C_00984540 { int sub_00984540(void); };

// @baa 0x00984540
int C_00984540::sub_00984540(void) { return *(int*)((char*)this + 0); }

struct C_00984550 {
    int sub_00984550(int);
};

// @baa 0x00984550
int C_00984550::sub_00984550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00984560 { int sub_00984560(void); };

// @baa 0x00984560
int C_00984560::sub_00984560(void) { return *(int*)((char*)this + 0); }

struct C_00984570 { int sub_00984570(void); };

// @baa 0x00984570
int C_00984570::sub_00984570(void) { return *(int*)((char*)this + 0); }

struct C_00984580 {
    int sub_00984580(int);
};

// @baa 0x00984580
int C_00984580::sub_00984580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00984590 { C_00984590* sub_00984590(int a0); };

// @baa 0x00984590
C_00984590* C_00984590::sub_00984590(int a0) { return this; }

struct C_009845a0 { int sub_009845a0(void); };

// @baa 0x009845a0
int C_009845a0::sub_009845a0(void) { return *(int*)((char*)this + 0); }

struct C_009845b0 { C_009845b0* sub_009845b0(int a0); };

// @baa 0x009845b0
C_009845b0* C_009845b0::sub_009845b0(int a0) { return this; }

struct C_009845c0 { int sub_009845c0(void); };

// @baa 0x009845c0
int C_009845c0::sub_009845c0(void) { return *(int*)((char*)this + 0); }

struct C_009845d0 { int sub_009845d0(void); };

// @baa 0x009845d0
int C_009845d0::sub_009845d0(void) { return *(int*)((char*)this + 0); }

struct C_009845e0 { int sub_009845e0(void); };

// @baa 0x009845e0
int C_009845e0::sub_009845e0(void) { return *(int*)((char*)this + 0); }

struct C_00984610 {
    int sub_00984610(int);
};

// @baa 0x00984610
int C_00984610::sub_00984610(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_00984620 { C_00984620* sub_00984620(int a0); };

// @baa 0x00984620
C_00984620* C_00984620::sub_00984620(int a0) { return this; }

struct C_00984630 { int sub_00984630(void); };

// @baa 0x00984630
int C_00984630::sub_00984630(void) { return *(int*)((char*)this + 0); }

struct C_00984640 { int sub_00984640(void); };

// @baa 0x00984640
int C_00984640::sub_00984640(void) { return *(int*)((char*)this + 0); }

struct C_00984650 { int sub_00984650(void); };

// @baa 0x00984650
int C_00984650::sub_00984650(void) { return *(int*)((char*)this + 0); }

struct C_00984680 {
    int sub_00984680(int);
};

// @baa 0x00984680
int C_00984680::sub_00984680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_00984690 { C_00984690* sub_00984690(int a0); };

// @baa 0x00984690
C_00984690* C_00984690::sub_00984690(int a0) { return this; }

struct C_009846a0 { int sub_009846a0(void); };

// @baa 0x009846a0
int C_009846a0::sub_009846a0(void) { return *(int*)((char*)this + 0); }

struct C_00984720 { C_00984720* sub_00984720(int a0); };

// @baa 0x00984720
C_00984720* C_00984720::sub_00984720(int a0) { return this; }

struct C_009847b0 { C_009847b0* sub_009847b0(int a0); };

// @baa 0x009847b0
C_009847b0* C_009847b0::sub_009847b0(int a0) { return this; }

struct C_009847c0 { int sub_009847c0(void); };

// @baa 0x009847c0
int C_009847c0::sub_009847c0(void) { return *(int*)((char*)this + 0); }

struct C_009847d0 { int sub_009847d0(void); };

// @baa 0x009847d0
int C_009847d0::sub_009847d0(void) { return *(int*)((char*)this + 0); }

struct C_009847e0 { int sub_009847e0(void); };

// @baa 0x009847e0
int C_009847e0::sub_009847e0(void) { return *(int*)((char*)this + 0); }

struct C_00984890 {
    int sub_00984890(int);
};

// @baa 0x00984890
int C_00984890::sub_00984890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_009848a0 { C_009848a0* sub_009848a0(int a0); };

// @baa 0x009848a0
C_009848a0* C_009848a0::sub_009848a0(int a0) { return this; }

struct C_00984920 { C_00984920* sub_00984920(int a0); };

// @baa 0x00984920
C_00984920* C_00984920::sub_00984920(int a0) { return this; }

struct C_00984930 { int sub_00984930(void); };

// @baa 0x00984930
int C_00984930::sub_00984930(void) { return *(int*)((char*)this + 0); }

struct C_00984940 { int sub_00984940(void); };

// @baa 0x00984940
int C_00984940::sub_00984940(void) { return *(int*)((char*)this + 0); }

struct C_00984950 { int sub_00984950(void); };

// @baa 0x00984950
int C_00984950::sub_00984950(void) { return *(int*)((char*)this + 0); }

struct C_009849a0 {
    int sub_009849a0(int);
};

// @baa 0x009849a0
int C_009849a0::sub_009849a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_009849c0 { C_009849c0* sub_009849c0(int a0); };

// @baa 0x009849c0
C_009849c0* C_009849c0::sub_009849c0(int a0) { return this; }

struct C_009849d0 { int sub_009849d0(void); };

// @baa 0x009849d0
int C_009849d0::sub_009849d0(void) { return *(int*)((char*)this + 0); }

struct C_009849e0 { int sub_009849e0(void); };

// @baa 0x009849e0
int C_009849e0::sub_009849e0(void) { return *(int*)((char*)this + 0); }

struct C_00984a90 { C_00984a90* sub_00984a90(int a0); };

// @baa 0x00984a90
C_00984a90* C_00984a90::sub_00984a90(int a0) { return this; }

struct C_00984aa0 { int sub_00984aa0(void); };

// @baa 0x00984aa0
int C_00984aa0::sub_00984aa0(void) { return *(int*)((char*)this + 0); }

struct C_00984ab0 { C_00984ab0* sub_00984ab0(int a0); };

// @baa 0x00984ab0
C_00984ab0* C_00984ab0::sub_00984ab0(int a0) { return this; }

struct C_00984ac0 { int sub_00984ac0(void); };

// @baa 0x00984ac0
int C_00984ac0::sub_00984ac0(void) { return *(int*)((char*)this + 0); }

struct C_00984b40 { C_00984b40* sub_00984b40(int a0); };

// @baa 0x00984b40
C_00984b40* C_00984b40::sub_00984b40(int a0) { return this; }

struct C_00984b50 { int sub_00984b50(void); };

// @baa 0x00984b50
int C_00984b50::sub_00984b50(void) { return *(int*)((char*)this + 0); }

struct C_00984b60 { C_00984b60* sub_00984b60(int a0); };

// @baa 0x00984b60
C_00984b60* C_00984b60::sub_00984b60(int a0) { return this; }

struct C_00984b70 { int sub_00984b70(void); };

// @baa 0x00984b70
int C_00984b70::sub_00984b70(void) { return *(int*)((char*)this + 0); }

struct C_00984b80 { int sub_00984b80(void); };

// @baa 0x00984b80
int C_00984b80::sub_00984b80(void) { return *(int*)((char*)this + 0); }

struct C_00984b90 { int sub_00984b90(void); };

// @baa 0x00984b90
int C_00984b90::sub_00984b90(void) { return *(int*)((char*)this + 0); }

struct C_00984c10 {
    int sub_00984c10(int);
};

// @baa 0x00984c10
int C_00984c10::sub_00984c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00984c20 {
    int sub_00984c20();
};

// @baa 0x00984c20
int C_00984c20::sub_00984c20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00984c30 { int a, b; C_00984c30(int, int); };

// @baa 0x00984c30
C_00984c30::C_00984c30(int x, int y) : a(x), b(y) {}

struct C_00984c50 {
    int sub_00984c50();
};

// @baa 0x00984c50
int C_00984c50::sub_00984c50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00984c60 { int a, b; C_00984c60(int, int); };

// @baa 0x00984c60
C_00984c60::C_00984c60(int x, int y) : a(x), b(y) {}

struct C_00984c80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00984c80(INT Index);
};

// @baa 0x00984c80
UBOOL C_00984c80::sub_00984c80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x00984ca0
int sub_00984ca0(int a0) { return *(int*)a0; }

void sub_005fa690();
// @baa 0x00984cb0
void sub_00984cb0(void) { sub_005fa690(); }

struct C_00984d00 {
    void sub_00984d00(int *);
};

// @baa 0x00984d00
void C_00984d00::sub_00984d00(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 4;
  return;
}

struct C_00984d50 { int sub_00984d50(void); };

// @baa 0x00984d50
int C_00984d50::sub_00984d50(void) { return *(int*)((char*)this + 0); }

struct C_00984d60 { int sub_00984d60(void); };

// @baa 0x00984d60
int C_00984d60::sub_00984d60(void) { return *(int*)((char*)this + 0); }

struct C_00984d70 { int sub_00984d70(void); };

// @baa 0x00984d70
int C_00984d70::sub_00984d70(void) { return *(int*)((char*)this + 0); }

struct C_00984d80 { int sub_00984d80(void); };

// @baa 0x00984d80
int C_00984d80::sub_00984d80(void) { return *(int*)((char*)this + 0); }

struct C_00984d90 { int sub_00984d90(void); };

// @baa 0x00984d90
int C_00984d90::sub_00984d90(void) { return *(int*)((char*)this + 0); }

struct C_00984da0 { int sub_00984da0(void); };

// @baa 0x00984da0
int C_00984da0::sub_00984da0(void) { return *(int*)((char*)this + 0); }

struct C_00984db0 { int sub_00984db0(void); };

// @baa 0x00984db0
int C_00984db0::sub_00984db0(void) { return *(int*)((char*)this + 0); }

struct C_00984dc0 { int sub_00984dc0(void); };

// @baa 0x00984dc0
int C_00984dc0::sub_00984dc0(void) { return *(int*)((char*)this + 0); }

struct C_00984dd0 { int sub_00984dd0(void); };

// @baa 0x00984dd0
int C_00984dd0::sub_00984dd0(void) { return *(int*)((char*)this + 0); }

struct C_00984de0 { int sub_00984de0(void); };

// @baa 0x00984de0
int C_00984de0::sub_00984de0(void) { return *(int*)((char*)this + 0); }

struct C_00984df0 { int sub_00984df0(void); };

// @baa 0x00984df0
int C_00984df0::sub_00984df0(void) { return *(int*)((char*)this + 0); }

struct C_00984e00 { int sub_00984e00(void); };

// @baa 0x00984e00
int C_00984e00::sub_00984e00(void) { return *(int*)((char*)this + 0); }

struct C_00984e10 { int sub_00984e10(void); };

// @baa 0x00984e10
int C_00984e10::sub_00984e10(void) { return *(int*)((char*)this + 0); }

struct C_00984e20 { int sub_00984e20(void); };

// @baa 0x00984e20
int C_00984e20::sub_00984e20(void) { return *(int*)((char*)this + 0); }

// @baa 0x00984e30
int sub_00984e30(int a0) { return *(int*)a0; }

// @baa 0x00984e40
bool sub_00984e40(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00984e50 { int a, b; C_00984e50(const C_00984e50 &); };

// @baa 0x00984e50
C_00984e50::C_00984e50(const C_00984e50 &o) : a(o.a), b(o.b) {}

struct S_00984eb0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00984eb0(INT Index);
};

// @baa 0x00984eb0
QWORD* S_00984eb0::sub_00984eb0(INT Index)
{
    return &Items(Index);
}

struct C_00985450 {
    int sub_00985450(int);
};

// @baa 0x00985450
int C_00985450::sub_00985450(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00985460 { int sub_00985460(void); };

// @baa 0x00985460
int C_00985460::sub_00985460(void) { return *(int*)((char*)this + 0); }

// @baa 0x00985470
undefined4 sub_00985470(int param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

struct C_00985480 { int sub_00985480(void); };

// @baa 0x00985480
int C_00985480::sub_00985480(void) { return *(int*)((char*)this + 20); }

struct C_00985490 { int sub_00985490(void); };

// @baa 0x00985490
int C_00985490::sub_00985490(void) { return *(int*)((char*)this + 20); }

struct C_009854a0 { int sub_009854a0(void); };

// @baa 0x009854a0
int C_009854a0::sub_009854a0(void) { return *(int*)((char*)this + 20); }

struct C_009854b0 {
    int sub_009854b0(int);
};

// @baa 0x009854b0
int C_009854b0::sub_009854b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct E { BYTE Bytes[84]; };

struct S_009858f0 {
    TArray<E> Items; // 0x00
    const E* sub_009858f0(INT Index) const;
};

// @baa 0x009858f0
const E* S_009858f0::sub_009858f0(INT Index) const
{
    return &Items(Index);
}

struct C_00985940 { int a, b; C_00985940(const C_00985940 &); };

// @baa 0x00985940
C_00985940::C_00985940(const C_00985940 &o) : a(o.a), b(o.b) {}

struct C_00985a00 {
    void sub_00985a00();
};

extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
extern undefined4 g_01f3de50;
extern undefined4 g_01f3de54;
// @baa 0x00985a00
void C_00985a00::sub_00985a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[8] = (undefined4)(&g_01ec1274);
  if (param_1[9] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

// @baa 0x009861f0
undefined4 UTerrainLayerSetup::sub_009861f0(void)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 0x40) == 0) && ((*(uint *)(param_1 + 0x10) & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
    return 1;
  }
  return 0;
}

struct C_00986210 {
    void sub_00986210();
};

// @baa 0x00986210
void C_00986210::sub_00986210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[0xb] = (undefined4)(&g_01ec1274);
  if (param_1[0xc] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

int sub_005e1960(...);
int sub_0090ba90(void);
int sub_00938c70(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b5d84;
// @baa 0x00986360
void sub_00986360(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b5d84 == 0) {
    g_026b5d84 = sub_00938c70(L"Engine");
    sub_0090ba90();
  }
  sub_005e1960(g_026b5d84,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_009863c0 {
    void sub_009863c0();
};

// @baa 0x009863c0
void C_009863c0::sub_009863c0(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x24) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x20) + 4) + -0x20 + param_1) = (undefined **)(&g_01f3de50);
  return;
}

struct C_009863e0 { int sub_009863e0(void); };

// @baa 0x009863e0
int C_009863e0::sub_009863e0(void) { return *(int*)((char*)this + 0); }

struct C_009863f0 { int sub_009863f0(void); };

// @baa 0x009863f0
int C_009863f0::sub_009863f0(void) { return *(int*)((char*)this + 0); }

struct C_00986400 {
    int sub_00986400(int);
};

// @baa 0x00986400
int C_00986400::sub_00986400(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00986410 {
    int sub_00986410(int);
};

// @baa 0x00986410
int C_00986410::sub_00986410(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00986420 {
    void sub_00986420();
};

// @baa 0x00986420
void C_00986420::sub_00986420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f3de54);
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = (undefined **)(&g_01f3de50);
  param_1[9] = (undefined4)(&g_01ec1274);
  if (param_1[10] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_009868f0 {
    float10 sub_009868f0(int);
};

// @baa 0x009868f0
float10 C_009868f0::sub_009868f0(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa4);
  return ((float10)*(float *)(iVar1 + 0x4c) * (float10)*(float *)(iVar1 + 0x48) * (float10)param_2)
         / (float10)*(int *)(iVar1 + 0x34);
}

// @baa 0x009869e0
void sub_009869e0(void) {  }

// @baa 0x0098cde0
void sub_0098cde0(void) {  }

struct C_0098d270 { void* Data; int Num; int Max; void sub_0098d270(); };

// @baa 0x0098d270
void C_0098d270::sub_0098d270() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d320 {
    void sub_0098d320(int);
};

int sub_0053df70(...);
// @baa 0x0098d320
void C_0098d320::sub_0098d320(int param_2)
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

struct C_0098d360 { void* Data; int Num; int Max; void sub_0098d360(); };

// @baa 0x0098d360
void C_0098d360::sub_0098d360() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d520 { void* Data; int Num; int Max; void sub_0098d520(); };

// @baa 0x0098d520
void C_0098d520::sub_0098d520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d580 {
    void sub_0098d580(int);
};

// @baa 0x0098d580
void C_0098d580::sub_0098d580(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098d5c0 { void* Data; int Num; int Max; void sub_0098d5c0(); };

// @baa 0x0098d5c0
void C_0098d5c0::sub_0098d5c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d620 {
    void sub_0098d620(int);
};

// @baa 0x0098d620
void C_0098d620::sub_0098d620(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098d660 { void* Data; int Num; int Max; void sub_0098d660(); };

// @baa 0x0098d660
void C_0098d660::sub_0098d660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d7a0 { void* Data; int Num; int Max; void sub_0098d7a0(); };

// @baa 0x0098d7a0
void C_0098d7a0::sub_0098d7a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d8e0 {
    void sub_0098d8e0(int);
};

// @baa 0x0098d8e0
void C_0098d8e0::sub_0098d8e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098d920 { void* Data; int Num; int Max; void sub_0098d920(); };

// @baa 0x0098d920
void C_0098d920::sub_0098d920() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098d980 {
    void sub_0098d980(int);
};

// @baa 0x0098d980
void C_0098d980::sub_0098d980(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098d9c0 { void* Data; int Num; int Max; void sub_0098d9c0(); };

// @baa 0x0098d9c0
void C_0098d9c0::sub_0098d9c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098da20 {
    void sub_0098da20(int);
};

// @baa 0x0098da20
void C_0098da20::sub_0098da20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098da60 { void* Data; int Num; int Max; void sub_0098da60(); };

// @baa 0x0098da60
void C_0098da60::sub_0098da60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098dac0 {
    void sub_0098dac0(int);
};

// @baa 0x0098dac0
void C_0098dac0::sub_0098dac0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098dc70 { void* Data; int Num; int Max; void sub_0098dc70(); };

// @baa 0x0098dc70
void C_0098dc70::sub_0098dc70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098dcd0 {
    void sub_0098dcd0(int);
};

// @baa 0x0098dcd0
void C_0098dcd0::sub_0098dcd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098dd10 { void* Data; int Num; int Max; void sub_0098dd10(); };

// @baa 0x0098dd10
void C_0098dd10::sub_0098dd10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098de50 {
    void sub_0098de50(int);
};

// @baa 0x0098de50
void C_0098de50::sub_0098de50(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098de90 { void* Data; int Num; int Max; void sub_0098de90(); };

// @baa 0x0098de90
void C_0098de90::sub_0098de90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098def0 {
    void sub_0098def0(int);
};

// @baa 0x0098def0
void C_0098def0::sub_0098def0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0098df30 { void* Data; int Num; int Max; void sub_0098df30(); };

// @baa 0x0098df30
void C_0098df30::sub_0098df30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098e070 { void* Data; int Num; int Max; void sub_0098e070(); };

// @baa 0x0098e070
void C_0098e070::sub_0098e070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0098e0d0 { void* Data; int Num; int Max; void sub_0098e0d0(); };

// @baa 0x0098e0d0
void C_0098e0d0::sub_0098e0d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0098e130
void __stdcall sub_0098e130(int a1, int a2)
{
}

struct C_0098ead0 { int sub_0098ead0(void); };

// @baa 0x0098ead0
int C_0098ead0::sub_0098ead0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0098eae0
void __stdcall sub_0098eae0(int a0, int a1) {  }

void sub_00549310();
// @baa 0x0098eb00
void sub_0098eb00(void) { sub_00549310(); }

void sub_00989150();
// @baa 0x0098eb10
void sub_0098eb10(void) { sub_00989150(); }

struct C_0098ed60 {
    int sub_0098ed60(int);
};

// @baa 0x0098ed60
int C_0098ed60::sub_0098ed60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0098ed70 {
    int sub_0098ed70();
};

// @baa 0x0098ed70
int C_0098ed70::sub_0098ed70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0098ed90 {
    int sub_0098ed90();
};

// @baa 0x0098ed90
int C_0098ed90::sub_0098ed90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0098eda0 {
    int sub_0098eda0();
};

// @baa 0x0098eda0
int C_0098eda0::sub_0098eda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0098ee20 {
    int sub_0098ee20(int);
};

// @baa 0x0098ee20
int C_0098ee20::sub_0098ee20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0098ee30 {
    int sub_0098ee30(int);
};

// @baa 0x0098ee30
int C_0098ee30::sub_0098ee30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0098ee40 {
    int sub_0098ee40();
};

// @baa 0x0098ee40
int C_0098ee40::sub_0098ee40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0098ee60 {
    int sub_0098ee60();
};

// @baa 0x0098ee60
int C_0098ee60::sub_0098ee60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0098ee70 {
    int sub_0098ee70();
};

// @baa 0x0098ee70
int C_0098ee70::sub_0098ee70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0098ee80 {
    int sub_0098ee80();
};

// @baa 0x0098ee80
int C_0098ee80::sub_0098ee80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0098ee90 {
    int sub_0098ee90();
};

// @baa 0x0098ee90
int C_0098ee90::sub_0098ee90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_0098eea0 {
    int sub_0098eea0();
};

// @baa 0x0098eea0
int C_0098eea0::sub_0098eea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_view {
    int sub_0098d2d0(int);
};

// @baa 0x0098f710
undefined4 UTerrainLayerSetup::sub_0098f710(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_view *)(((char *)this + 0x3c)))->sub_0098d2d0((int)((int *)(param_3 + 8)));
  if (((iVar1 == 0) && ((*(uint *)(param_1 + 0x10) & 1) != 0)) &&
     (((*(uint *)(param_1 + 0x10) & 2) == 0 || (*(int *)(param_3 + 8) == param_1)))) {
    return 1;
  }
  return 0;
}

struct M_0098fe30 { void sub_00665e00(); };

struct C_0098fe30 { char pad[16]; M_0098fe30 m; void sub_0098fe30(); };

// @baa 0x0098fe30
void C_0098fe30::sub_0098fe30() { m.sub_00665e00(); }

void sub_0098d520();
// @baa 0x00990240
void sub_00990240(void) { sub_0098d520(); }

struct C_00990250 { int a, b, c; C_00990250(); };

// @baa 0x00990250
C_00990250::C_00990250() : a(0), b(0), c(0) {}

void sub_0098d7a0();
// @baa 0x00990260
void sub_00990260(void) { sub_0098d7a0(); }

void sub_0098da60();
// @baa 0x00990290
void sub_00990290(void) { sub_0098da60(); }

void sub_0098db00();
// @baa 0x009902a0
void sub_009902a0(void) { sub_0098db00(); }

void sub_0098dc70();
// @baa 0x009902b0
void sub_009902b0(void) { sub_0098dc70(); }

// @baa 0x009902c0
void sub_009902c0(void) { sub_0098d7a0(); }

void sub_0098dd10();
// @baa 0x009902d0
void sub_009902d0(void) { sub_0098dd10(); }

void sub_0098de90();
// @baa 0x009902e0
void sub_009902e0(void) { sub_0098de90(); }

void sub_0098df30();
// @baa 0x009902f0
void sub_009902f0(void) { sub_0098df30(); }

void sub_0098e070();
// @baa 0x00990300
void sub_00990300(void) { sub_0098e070(); }

struct C_00990ee0 { int a, b, c; C_00990ee0(); };

// @baa 0x00990ee0
C_00990ee0::C_00990ee0() : a(0), b(0), c(0) {}

struct C_00991980 { void* Data; int Num; int Max; void sub_00991980(); };

// @baa 0x00991980
void C_00991980::sub_00991980() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00991c60 { int a, b, c; C_00991c60(); };

// @baa 0x00991c60
C_00991c60::C_00991c60() : a(0), b(0), c(0) {}

struct C_00991c70 { int a, b, c; C_00991c70(); };

// @baa 0x00991c70
C_00991c70::C_00991c70() : a(0), b(0), c(0) {}

struct C_00991c80 { int sub_00991c80(void); };

// @baa 0x00991c80
int C_00991c80::sub_00991c80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00991f00 { void* Data; int Num; int Max; void sub_00991f00(); };

// @baa 0x00991f00
void C_00991f00::sub_00991f00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00991f60 {
    undefined4 sub_00991f60();
};

// @baa 0x00991f60
undefined4 C_00991f60::sub_00991f60(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00991f70 { C_00991f70* sub_00991f70(void); };

// @baa 0x00991f70
C_00991f70* C_00991f70::sub_00991f70(void) { return this; }

struct C_00992070 { C_00992070* sub_00992070(void); };

// @baa 0x00992070
C_00992070* C_00992070::sub_00992070(void) { return this; }

struct C_00992110 { C_00992110* sub_00992110(void); };

// @baa 0x00992110
C_00992110* C_00992110::sub_00992110(void) { return this; }

struct C_00992120 { C_00992120* sub_00992120(void); };

// @baa 0x00992120
C_00992120* C_00992120::sub_00992120(void) { return this; }

struct C_00992130 { C_00992130* sub_00992130(void); };

// @baa 0x00992130
C_00992130* C_00992130::sub_00992130(void) { return this; }

struct C_00992240 { C_00992240* sub_00992240(void); };

// @baa 0x00992240
C_00992240* C_00992240::sub_00992240(void) { return this; }

struct C_00992250 { C_00992250* sub_00992250(void); };

// @baa 0x00992250
C_00992250* C_00992250::sub_00992250(void) { return this; }

struct C_00992260 { C_00992260* sub_00992260(void); };

// @baa 0x00992260
C_00992260* C_00992260::sub_00992260(void) { return this; }

struct C_00992270 { C_00992270* sub_00992270(void); };

// @baa 0x00992270
C_00992270* C_00992270::sub_00992270(void) { return this; }

struct C_009926f0 {
    int sub_009926f0(int);
};

// @baa 0x009926f0
int C_009926f0::sub_009926f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00992700 {
    int sub_00992700();
};

// @baa 0x00992700
int C_00992700::sub_00992700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00992720 {
    int sub_00992720();
};

// @baa 0x00992720
int C_00992720::sub_00992720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00992730 {
    undefined4 sub_00992730(undefined4);
    int sub_0098f280(int);
};

// @baa 0x00992730
undefined4 C_00992730::sub_00992730(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00992730 *)(this))->sub_0098f280(param_2);
  return param_1;
}

struct C_00992750 {
    int sub_00992750();
};

// @baa 0x00992750
int C_00992750::sub_00992750(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00992770 {
    int sub_00992770();
};

// @baa 0x00992770
int C_00992770::sub_00992770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00992780 {
    int sub_00992780(int);
};

// @baa 0x00992780
int C_00992780::sub_00992780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00992790 {
    int sub_00992790();
};

// @baa 0x00992790
int C_00992790::sub_00992790(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009927b0 {
    int sub_009927b0();
};

// @baa 0x009927b0
int C_009927b0::sub_009927b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_0040fcc0(void);
// @baa 0x009927c0
undefined4 UObject::sub_009927c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00992800 { void sub_00989150(); };

struct C_00992800 { char pad[24]; M_00992800 m; void sub_00992800(); };

// @baa 0x00992800
void C_00992800::sub_00992800() { m.sub_00989150(); }

struct C_00992900 {
    int sub_00992900(int);
};

// @baa 0x00992900
int C_00992900::sub_00992900(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00992980 {
    int sub_00992980(int);
};

// @baa 0x00992980
int C_00992980::sub_00992980(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_00992bd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992bd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992bd0& operator++();
};

TConstSetBitIterator_00992bd0::TConstSetBitIterator_00992bd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992bd0
TConstSetBitIterator_00992bd0& TConstSetBitIterator_00992bd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992bf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992bf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992bf0& operator++();
};

TConstSetBitIterator_00992bf0::TConstSetBitIterator_00992bf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992bf0
TConstSetBitIterator_00992bf0& TConstSetBitIterator_00992bf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992c40& operator++();
};

TConstSetBitIterator_00992c40::TConstSetBitIterator_00992c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992c40
TConstSetBitIterator_00992c40& TConstSetBitIterator_00992c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992c90& operator++();
};

TConstSetBitIterator_00992c90::TConstSetBitIterator_00992c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992c90
TConstSetBitIterator_00992c90& TConstSetBitIterator_00992c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992cb0& operator++();
};

TConstSetBitIterator_00992cb0::TConstSetBitIterator_00992cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992cb0
TConstSetBitIterator_00992cb0& TConstSetBitIterator_00992cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992cd0& operator++();
};

TConstSetBitIterator_00992cd0::TConstSetBitIterator_00992cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992cd0
TConstSetBitIterator_00992cd0& TConstSetBitIterator_00992cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992d20& operator++();
};

TConstSetBitIterator_00992d20::TConstSetBitIterator_00992d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992d20
TConstSetBitIterator_00992d20& TConstSetBitIterator_00992d20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00992d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00992d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00992d70& operator++();
};

TConstSetBitIterator_00992d70::TConstSetBitIterator_00992d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00992d70
TConstSetBitIterator_00992d70& TConstSetBitIterator_00992d70::operator++()
{
    It.Advance();
    return *this;
}

struct C_009939e0 {
    undefined4 sub_009939e0(byte);
};

int sub_00765d90(void);
// @baa 0x009939e0
undefined4 C_009939e0::sub_009939e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00765d90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00991c90(...);
// @baa 0x00995000
undefined4 sub_00995000(undefined4 param_1, undefined4 param_2)
{
  sub_00991c90(param_1,param_2);
  return param_1;
}

void sub_00725cc0();
// @baa 0x00995020
void sub_00995020(void) { sub_00725cc0(); }

struct C_00995030 { C_00995030* sub_00995030(void); };

// @baa 0x00995030
C_00995030* C_00995030::sub_00995030(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_01f8eec8;
// @baa 0x00995040
undefined4 * UObject::sub_00995040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f8eec8);
  return param_1;
}

// @baa 0x00995060
float UTerrainLayerSetup::vf_10c(float *p, int a2)
{
    return p[19];
}

// @baa 0x00995070
// @baa 0x009950e0
extern undefined * g_01f8efd8;
// @baa 0x00995100
undefined4 * UObject::sub_00995100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f8efd8);
  return param_1;
}

// @baa 0x00995120
// @baa 0x00995190
struct C_00995cd0 { void sub_00725c60(int); C_00995cd0 *sub_00995cd0(int); };

// @baa 0x00995cd0
C_00995cd0 *C_00995cd0::sub_00995cd0(int a) { sub_00725c60(a); return this; }

struct C_00995f90 {
    undefined4 * sub_00995f90(byte);
    int sub_00549310();
};

extern undefined4 g_01f8eec4;
// @baa 0x00995f90
undefined4 * C_00995f90::sub_00995f90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01f8eec4);
  ((C_00995f90 *)(((char *)this + 4)))->sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00995fc0 {
    undefined4 * sub_00995fc0(int, undefined4, undefined4, undefined4, undefined4 *, undefined4, undefined4 *);
    int sub_00725c60(int);
};

// @baa 0x00995fc0
undefined4 * C_00995fc0::sub_00995fc0(int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6, undefined4 param_7, undefined4 * param_8)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 uVar1;
  *param_1 = (undefined4)(&g_01f8eec4);
  ((C_00995fc0 *)(((char *)this + 4)))->sub_00725c60(param_3);
  param_1[7] = param_5;
  param_1[6] = param_2;
  param_1[8] = *param_6;
  param_1[9] = param_7;
  param_1[10] = *param_8;
  param_1[0xb] = param_4;
  uVar1 = sub_00981ee0(*(undefined4 *)(param_2 + 0x25c));
  param_1[4] = uVar1;
  uVar1 = sub_00981ee0(*(undefined4 *)(param_1[6] + 0x260));
  param_1[5] = uVar1;
  *(undefined1 *)((int)param_1 + 0x23) = 0x40;
  *(undefined1 *)((int)param_1 + 0x2b) = 0x40;
  return param_1;
}

struct C_00996200 {
    int sub_00996200();
};

// @baa 0x00996200
int C_00996200::sub_00996200(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00996220 {
    int sub_00996220();
};

// @baa 0x00996220
int C_00996220::sub_00996220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00996230 {
    int sub_00996230();
};

// @baa 0x00996230
int C_00996230::sub_00996230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00996360 { void sub_0098f280(int); C_00996360 *sub_00996360(int); };

// @baa 0x00996360
C_00996360 *C_00996360::sub_00996360(int a) { sub_0098f280(a); return this; }

struct C_00996380 {
    int sub_00996380();
};

// @baa 0x00996380
int C_00996380::sub_00996380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009963a0 {
    int sub_009963a0();
};

// @baa 0x009963a0
int C_009963a0::sub_009963a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_009963b0 {
    int sub_009963b0();
};

// @baa 0x009963b0
int C_009963b0::sub_009963b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct C_009963c0 {
    int sub_009963c0();
};

// @baa 0x009963c0
int C_009963c0::sub_009963c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009963e0 {
    int sub_009963e0();
};

// @baa 0x009963e0
int C_009963e0::sub_009963e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_view_009963f0 {
    int sub_00992810(int, int);
};

// @baa 0x009963f0
int UState::sub_009963f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_009963f0 *)(this))->sub_00992810((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_view_00996420 {
    int sub_00921600(int, int);
};

// @baa 0x00996420
int USkeletalMeshComponent::sub_00996420(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00996420 *)(this))->sub_00921600((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00996510 {
    int sub_00996510(int);
    int sub_00992910(int, int);
};

// @baa 0x00996510
int C_00996510::sub_00996510(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00996510 *)(this))->sub_00992910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00996540 {
    int sub_00996540(int);
    int sub_00992910(int, int);
};

// @baa 0x00996540
int C_00996540::sub_00996540(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00996540 *)(this))->sub_00992910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00996650 {
    undefined4 sub_00996650(byte);
    int sub_00989150();
};

// @baa 0x00996650
undefined4 C_00996650::sub_00996650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00996650 *)(((char *)this + 0x18)))->sub_00989150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_009967f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009967f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009967f0& operator++();
};

TConstSetBitIterator_009967f0::TConstSetBitIterator_009967f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009967f0
TConstSetBitIterator_009967f0& TConstSetBitIterator_009967f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00996970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00996970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00996970& operator++();
};

TConstSetBitIterator_00996970::TConstSetBitIterator_00996970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00996970
TConstSetBitIterator_00996970& TConstSetBitIterator_00996970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00996990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00996990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00996990& operator++();
};

TConstSetBitIterator_00996990::TConstSetBitIterator_00996990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00996990
TConstSetBitIterator_00996990& TConstSetBitIterator_00996990::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009969e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009969e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009969e0& operator++();
};

TConstSetBitIterator_009969e0::TConstSetBitIterator_009969e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009969e0
TConstSetBitIterator_009969e0& TConstSetBitIterator_009969e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00996a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00996a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00996a90& operator++();
};

TConstSetBitIterator_00996a90::TConstSetBitIterator_00996a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00996a90
TConstSetBitIterator_00996a90& TConstSetBitIterator_00996a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00996ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00996ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00996ba0& operator++();
};

TConstSetBitIterator_00996ba0::TConstSetBitIterator_00996ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00996ba0
TConstSetBitIterator_00996ba0& TConstSetBitIterator_00996ba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00996bf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00996bf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00996bf0& operator++();
};

TConstSetBitIterator_00996bf0::TConstSetBitIterator_00996bf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00996bf0
TConstSetBitIterator_00996bf0& TConstSetBitIterator_00996bf0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00996c40 { void sub_00992dc0(int); C_00996c40 *sub_00996c40(int); };

// @baa 0x00996c40
C_00996c40 *C_00996c40::sub_00996c40(int a) { sub_00992dc0(a); return this; }

int sub_00993a00(void);
// @baa 0x00997440
undefined4 UStaticMeshComponent::sub_00997440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00993a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00997580
UINT UTerrainComponent::vf_208() { return 0; }

// @baa 0x00997590
UTerrainComponent::UTerrainComponent()
{
    LightMap.Dummy = 0;
    *(DWORD*)((BYTE*)this + 0x218) = 0;
    *(DWORD*)((BYTE*)this + 0x21c) = 0;
    *(DWORD*)((BYTE*)this + 0x220) = 0;
}

int sub_005c7a70(...);
int sub_00997590(void);
// @baa 0x00997680
undefined4 UTerrainComponent::sub_00997680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00997590();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x240);
  }
  return param_1;
}

// @baa 0x00997700
UTerrainWeightMapTexture::UTerrainWeightMapTexture()
{
}

int sub_00997700(void);
// @baa 0x00997770
undefined4 UTerrainWeightMapTexture::sub_00997770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00997700();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x110);
  }
  return param_1;
}

// @baa 0x009977a0
// @baa 0x009977c0
// @baa 0x009977e0
// @baa 0x009978a0
struct C_view_0099a860 {
    int sub_00992810(int, int);
};

// @baa 0x0099a860
int UState::sub_0099a860(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0099a860 *)(this))->sub_00992810((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x24, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_0099ab90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099ab90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099ab90& operator++();
};

TConstSetBitIterator_0099ab90::TConstSetBitIterator_0099ab90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099ab90
TConstSetBitIterator_0099ab90& TConstSetBitIterator_0099ab90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099ac10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099ac10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099ac10& operator++();
};

TConstSetBitIterator_0099ac10::TConstSetBitIterator_0099ac10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099ac10
TConstSetBitIterator_0099ac10& TConstSetBitIterator_0099ac10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099ac30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099ac30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099ac30& operator++();
};

TConstSetBitIterator_0099ac30::TConstSetBitIterator_0099ac30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099ac30
TConstSetBitIterator_0099ac30& TConstSetBitIterator_0099ac30::operator++()
{
    It.Advance();
    return *this;
}

struct C_0099ac50 {
    void sub_0099ac50();
    int sub_00996680(int);
};

// @baa 0x0099ac50
void C_0099ac50::sub_0099ac50(void)
{
    int param_1 = (int)this;
  ((C_0099ac50 *)((*(char **)((char *)this + 0x10))))->sub_00996680(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0099ac70 {
    void sub_0099ac70();
    int sub_00996810(int);
};

// @baa 0x0099ac70
void C_0099ac70::sub_0099ac70(void)
{
    int param_1 = (int)this;
  ((C_0099ac70 *)((*(char **)((char *)this + 0x10))))->sub_00996810(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0099ae50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099ae50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099ae50& operator++();
};

TConstSetBitIterator_0099ae50::TConstSetBitIterator_0099ae50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099ae50
TConstSetBitIterator_0099ae50& TConstSetBitIterator_0099ae50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099aea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099aea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099aea0& operator++();
};

TConstSetBitIterator_0099aea0::TConstSetBitIterator_0099aea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099aea0
TConstSetBitIterator_0099aea0& TConstSetBitIterator_0099aea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099b040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099b040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099b040& operator++();
};

TConstSetBitIterator_0099b040::TConstSetBitIterator_0099b040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099b040
TConstSetBitIterator_0099b040& TConstSetBitIterator_0099b040::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0099b380
void sub_0099a8e0();
// @baa 0x0099b390
void sub_0099b390(void) { sub_0099a8e0(); }

// @baa 0x0099b3b0
// @baa 0x0099b3c0
// @baa 0x0099e150
struct TConstSetBitIterator_0099e210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099e210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099e210& operator++();
};

TConstSetBitIterator_0099e210::TConstSetBitIterator_0099e210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099e210
TConstSetBitIterator_0099e210& TConstSetBitIterator_0099e210::operator++()
{
    It.Advance();
    return *this;
}

struct C_0099e300 { C_0099e300* sub_0099e300(void); };

// @baa 0x0099e300
C_0099e300* C_0099e300::sub_0099e300(void) { return this; }

struct C_0099e310 { C_0099e310* sub_0099e310(void); };

// @baa 0x0099e310
C_0099e310* C_0099e310::sub_0099e310(void) { return this; }

struct TConstSetBitIterator_0099e480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099e480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099e480& operator++();
};

TConstSetBitIterator_0099e480::TConstSetBitIterator_0099e480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099e480
TConstSetBitIterator_0099e480& TConstSetBitIterator_0099e480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099e4a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099e4a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099e4a0& operator++();
};

TConstSetBitIterator_0099e4a0::TConstSetBitIterator_0099e4a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099e4a0
TConstSetBitIterator_0099e4a0& TConstSetBitIterator_0099e4a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0099e6e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099e6e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099e6e0& operator++();
};

TConstSetBitIterator_0099e6e0::TConstSetBitIterator_0099e6e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099e6e0
TConstSetBitIterator_0099e6e0& TConstSetBitIterator_0099e6e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0099e9d0 {
    int sub_0099e9d0();
};

int sub_00996a30(void);
// @baa 0x0099e9d0
int C_0099e9d0::sub_0099e9d0(void)
{
    int param_1 = (int)this;

  sub_00996a30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0099e9f0 {
    int sub_0099e9f0();
};

int sub_00996ae0(void);
// @baa 0x0099e9f0
int C_0099e9f0::sub_0099e9f0(void)
{
    int param_1 = (int)this;

  sub_00996ae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0099ea10 {
    int sub_0099ea10();
};

int sub_00996b40(void);
// @baa 0x0099ea10
int C_0099ea10::sub_0099ea10(void)
{
    int param_1 = (int)this;

  sub_00996b40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_009835f0(void);
int sub_0099e150(...);
extern undefined4 g_026b6020;
// @baa 0x0099eb50
int sub_0099eb50(void)
{
  if (g_026b6020 == 0) {
    g_026b6020 = sub_0099e150(L"Engine");
    sub_009835f0();
  }
  return g_026b6020;
}

void sub_0099e230();
// @baa 0x0099eb80
void sub_0099eb80(void) { sub_0099e230(); }

struct C_view_0099ecd0 {
    int sub_005b4930(int, int);
};

// @baa 0x0099ecd0
void UPackageMap::sub_0099ecd0(void)
{
    int param_1 = (int)this;
  ((C_view_0099ecd0 *)(this))->sub_005b4930(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_0099ee00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0099ee00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0099ee00& operator++();
};

TConstSetBitIterator_0099ee00::TConstSetBitIterator_0099ee00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0099ee00
TConstSetBitIterator_0099ee00& TConstSetBitIterator_0099ee00::operator++()
{
    It.Advance();
    return *this;
}

struct C_0099ee50 {
    undefined4 sub_0099ee50(undefined4, undefined4);
    int sub_0099e730(int, int);
};

// @baa 0x0099ee50
undefined4 C_0099ee50::sub_0099ee50(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0099ee50 *)(this))->sub_0099e730(param_2, param_3);
  return param_1;
}

struct C_0099ee70 {
    void sub_0099ee70();
    int sub_0099e790(int, int);
};

// @baa 0x0099ee70
void C_0099ee70::sub_0099ee70(void)
{
    int param_1 = (int)this;
  ((C_0099ee70 *)(this))->sub_0099e790(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_0099ef40 {
    undefined4 sub_0099ef40(undefined4, undefined4);
    int sub_0099e850(int, int);
};

// @baa 0x0099ef40
undefined4 C_0099ef40::sub_0099ef40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0099ef40 *)(this))->sub_0099e850(param_2, param_3);
  return param_1;
}

struct C_0099ef60 {
    int sub_0099ef60(undefined4, undefined4);
    int sub_0099e8b0(int, int);
};

// @baa 0x0099ef60
int C_0099ef60::sub_0099ef60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0099ef60 *)(this))->sub_0099e8b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0099ef80 {
    int sub_0099ef80(undefined4, undefined4);
    int sub_0099e950(int, int);
};

// @baa 0x0099ef80
int C_0099ef80::sub_0099ef80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0099ef80 *)(this))->sub_0099e950(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0099f000 {
    int sub_0099f000();
};

// @baa 0x0099f000
int C_0099f000::sub_0099f000(void)
{
    int param_1 = (int)this;

  sub_00996a30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0099f020 {
    int sub_0099f020();
};

// @baa 0x0099f020
int C_0099f020::sub_0099f020(void)
{
    int param_1 = (int)this;

  sub_00996ae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0099f040 {
    int sub_0099f040();
};

// @baa 0x0099f040
int C_0099f040::sub_0099f040(void)
{
    int param_1 = (int)this;

  sub_00996b40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0099ebf0();
// @baa 0x009a0390
void sub_009a0390(void) { sub_0099ebf0(); }

struct C_009a03a0 { void sub_0099eb90(int); C_009a03a0 *sub_009a03a0(int); };

// @baa 0x009a03a0
C_009a03a0 *C_009a03a0::sub_009a03a0(int a) { sub_0099eb90(a); return this; }

void sub_0099ec60();
// @baa 0x009a0830
void sub_009a0830(void) { sub_0099ec60(); }

struct TConstSetBitIterator_009a0880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009a0880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009a0880& operator++();
};

TConstSetBitIterator_009a0880::TConstSetBitIterator_009a0880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009a0880
TConstSetBitIterator_009a0880& TConstSetBitIterator_009a0880::operator++()
{
    It.Advance();
    return *this;
}

struct C_009a08d0 {
    int sub_009a08d0(undefined4, undefined4, undefined4);
    int sub_0099e730(int, int);
};

// @baa 0x009a08d0
int C_009a08d0::sub_009a08d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_009a08d0 *)(this))->sub_0099e730(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_005b4930(int, int);
};

struct C_009a0900 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_009a0900(void);
};

// @baa 0x009a0900
void C_009a0900::sub_009a0900(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005b4930(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_009a0960 {
    int sub_009a0960(undefined4, undefined4, undefined4);
    int sub_0099e850(int, int);
};

// @baa 0x009a0960
int C_009a0960::sub_009a0960(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_009a0960 *)(this))->sub_0099e850(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_009a0990 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0099e790(int, int);
};

struct C_009a0990 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_009a0990* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_009a0990(void);
};

// @baa 0x009a0990
void C_009a0990::sub_009a0990(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0099e790(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_009a09b0 {
    int sub_009a09b0();
};

// @baa 0x009a09b0
int C_009a09b0::sub_009a09b0(void)
{
    int param_1 = (int)this;

  sub_00996a30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009a09d0 {
    int sub_009a09d0();
};

// @baa 0x009a09d0
int C_009a09d0::sub_009a09d0(void)
{
    int param_1 = (int)this;

  sub_00996ae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009a09f0 {
    int sub_009a09f0();
};

// @baa 0x009a09f0
int C_009a09f0::sub_009a09f0(void)
{
    int param_1 = (int)this;

  sub_00996b40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0099efa0(void);
// @baa 0x009a0a10
undefined4 UObject::sub_009a0a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0099efa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009a1390
void sub_009a1390(void) { sub_0099ebf0(); }

// @baa 0x009a1420
void sub_009a1420(void) { sub_0099ec60(); }

struct C_009a1430 {
    int sub_009a1430();
};

// @baa 0x009a1430
int C_009a1430::sub_009a1430(void)
{
    int param_1 = (int)this;

  sub_00996a30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009a1450 {
    int sub_009a1450();
};

// @baa 0x009a1450
int C_009a1450::sub_009a1450(void)
{
    int param_1 = (int)this;

  sub_00996ae0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009a1470 {
    int sub_009a1470();
};

// @baa 0x009a1470
int C_009a1470::sub_009a1470(void)
{
    int param_1 = (int)this;

  sub_00996b40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x009a18d0
void sub_009a18d0(void) { sub_0099ebf0(); }

// @baa 0x009a2900
void sub_009a2900(void) { sub_0099ec60(); }

struct C_view_009a2a60 {
    int sub_009a29f0(int);
};

// @baa 0x009a2a60
undefined4 ULensFlare::sub_009a2a60(void)
{
    int param_1 = (int)this;
  ((C_view_009a2a60 *)((*(char **)((char *)this + 4))))->sub_009a29f0(param_1 + 0x10);
  return 0x1e0;
}

// @baa 0x009a2c20
int sub_009a2c20(void) { return 0; }

// @baa 0x009a2c30
int sub_009a2c30(void) { return 0; }

// @baa 0x009a2c40
int sub_009a2c40(void) { return 0; }

// @baa 0x009a2c50
int sub_009a2c50(void) { return 0; }

// @baa 0x009a2c60
int sub_009a2c60(void) { return 0; }

// @baa 0x009a2c70
int sub_009a2c70(void) { return 1; }

// @baa 0x009a2c80
int sub_009a2c80(void) { return 1; }

// @baa 0x009a2c90
int sub_009a2c90(void) { return 0; }

// @baa 0x009a2ca0
int sub_009a2ca0(void) { return 0; }

// @baa 0x009a2cb0
int sub_009a2cb0(void) { return 0; }

// @baa 0x009a2cc0
int sub_009a2cc0(void) { return 0; }

// @baa 0x009a2cd0
int sub_009a2cd0(void) { return 0; }

// @baa 0x009a2ce0
int sub_009a2ce0(void) { return 0; }

// @baa 0x009a2cf0
float10 sub_009a2cf0(void)
{
  return (float10)0;
}

// @baa 0x009a2d00
int sub_009a2d00(void) { return 1; }

struct C_009a2d10 {
    int sub_009a2d10();
};

// @baa 0x009a2d10
int C_009a2d10::sub_009a2d10(void)
{
    int param_1 = (int)this;

  return param_1 + -0xb0;
}

struct A_009a2d20 { virtual void sub_009a2e10(); char pad[172]; };

struct B_009a2d20 { virtual void sub_009a2e10(); };

struct C_009a2d20 : A_009a2d20, B_009a2d20 { virtual void sub_009a2e10(); C_009a2d20(); };

C_009a2d20::C_009a2d20() {}

// @baa 0x009a2d20
void C_009a2d20::sub_009a2e10() {}

struct C_009a2e10 {
    undefined4 sub_009a2e10(byte);
};

int sub_009a2d30(void);
// @baa 0x009a2e10
undefined4 C_009a2e10::sub_009a2e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009a2d30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_009a2910();
// @baa 0x009a2e30
void sub_009a2e30(void) { sub_009a2910(); }

struct C_009a4040 { C_009a4040* sub_009a4040(void); };

// @baa 0x009a4040
C_009a4040* C_009a4040::sub_009a4040(void) { return this; }

int sub_009a40d0(void);
// @baa 0x009a41f0
undefined4 ATerrain::sub_009a41f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009a40d0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x298);
  }
  return param_1;
}

// @baa 0x009a4d00
// @baa 0x009a4d10
int sub_009a54b0(...);
// @baa 0x009a6750
int UTerrainComponent::vf_250(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_009a54b0(*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    return *(int *)(param_1 + 0x1d4) * *(int *)(param_1 + 0x1d0) * 2;
  }
  return 0;
}

// @baa 0x009a9810
void __stdcall sub_009a9810(int a0) {  }

int sub_009a6910(void);
// @baa 0x009aa040
void UTerrainComponent::sub_009aa040(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  *(undefined4 *)(param_1 + 0x1c4) = param_3;
  *(undefined4 *)(param_1 + 0x1c8) = param_4;
  *(undefined4 *)(param_1 + 0x1cc) = param_5;
  *(undefined4 *)(param_1 + 0x1d0) = param_6;
  *(undefined4 *)(param_1 + 0x1d4) = param_7;
  sub_009a6910();
  return;
}

struct C_015b0d70 { void sub_00723aa0(int); C_015b0d70 *sub_015b0d70(int); };

// @baa 0x015b0d70
C_015b0d70 *C_015b0d70::sub_015b0d70(int a) { sub_00723aa0(a); return this; }

struct C_015b0d90 {
    undefined4 sub_015b0d90(int);
    int sub_0054e560(int);
};

// @baa 0x015b0d90
undefined4 C_015b0d90::sub_015b0d90(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_015b0d90 *)(this))->sub_0054e560(param_2);
  ((C_015b0d90 *)(((char *)this + 0xc)))->sub_0054e560(param_2 + 0xc);
  ((C_015b0d90 *)(((char *)this + 0x18)))->sub_0054e560(param_2 + 0x18);
  ((C_015b0d90 *)(((char *)this + 0x24)))->sub_0054e560(param_2 + 0x24);
  ((C_015b0d90 *)(((char *)this + 0x30)))->sub_0054e560(param_2 + 0x30);
  ((C_015b0d90 *)(((char *)this + 0x3c)))->sub_0054e560(param_2 + 0x3c);
  ((C_015b0d90 *)(((char *)this + 0x48)))->sub_0054e560(param_2 + 0x48);
  ((C_015b0d90 *)(((char *)this + 0x54)))->sub_0054e560(param_2 + 0x54);
  ((C_015b0d90 *)(((char *)this + 0x60)))->sub_0054e560(param_2 + 0x60);
  ((C_015b0d90 *)(((char *)this + 0x6c)))->sub_0054e560(param_2 + 0x6c);
  ((C_015b0d90 *)(((char *)this + 0x78)))->sub_0054e560(param_2 + 0x78);
  ((C_015b0d90 *)(((char *)this + 0x84)))->sub_0054e560(param_2 + 0x84);
  return param_1;
}

// @baa 0x00757d70
/* AActor slot 0x20 (kit vf_020): UE3's AActor::BeginDestroy(): detach the components (slot 0x310, UE3
 * ClearComponents) before the object-level BeginDestroy. */
void AActor::BeginDestroy()
{
    vf_310(FALSE);
    Super::BeginDestroy();
}

/* Kit gap: FRenderCommandFence::GetNumPendingFences (0x0071f7e0) isn't declared. */
struct FRenderCommandFence_ : public FRenderCommandFence
{
    UINT GetNumPendingFences() const;
};

// @baa 0x00757d90
/* AActor slot 0x24 (kit vf_024): UE3's AActor::IsReadyForFinishDestroy(): the render thread is done with the
 * components detached in BeginDestroy. */
UBOOL AActor::IsReadyForFinishDestroy()
{
    return ((const FRenderCommandFence_&)DetachFence).GetNumPendingFences() == 0;
}

struct C_00984e90
{
	INT A;
	INT B;
	INT C;

	// 0x00984e90
	C_00984e90* sub_00984e90(const INT* InPair)
	{
		A = *InPair;
		B = InPair[1];
		C = -1;
		return this;
	}
};

C_00984e90 g_Keep_00984e90;
// @baa 0x00984e90
void Use_00984e90(const INT* InPair)
{
	g_Keep_00984e90.sub_00984e90(InPair);
}

struct C_00984660_Target {
    virtual void vf_000(void);
    virtual void vf_004(void);
    virtual void vf_008(void);
    virtual void vf_00c(void);
    virtual void vf_010(void);
    virtual void vf_014(int a, int b);
};

struct C_00984660 {
    int _f00;
    int _f04;
    int _f08;
    void sub_00984660(C_00984660_Target* Other);
};

// @baa 0x00984660
void C_00984660::sub_00984660(C_00984660_Target* Other)
{
    Other->vf_014(_f04, _f08);
}
