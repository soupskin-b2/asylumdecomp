// Launch_1750000.cpp (part 1 of 4): 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01757150(byte);
};

int sub_0053dfa0(...);
int sub_017570b0(void);
// @baa 0x01757150
undefined4 C::sub_01757150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_017570b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_017571f0 {
    undefined4 sub_017571f0(byte);
};

int sub_01754c20(void);
// @baa 0x017571f0
undefined4 C_017571f0::sub_017571f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01754c20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_017553a0(void);
// @baa 0x01757210
void __stdcall sub_01757210(void *a, void *b)
{
    sub_017553a0();
}

int sub_01746c10(void);
// @baa 0x017572d0
int UTexture2D::sub_017572d0(void)
{
    int param_1 = (int)this;

  sub_01746c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01755af0();
// @baa 0x017572f0
void sub_017572f0(void) { sub_01755af0(); }

void sub_01757260();
// @baa 0x01757300
void sub_01757300(void) { sub_01757260(); }

struct C_01757310 {
    undefined4 * sub_01757310();
};

int sub_011ef810(void);
extern undefined4 g_023d659c;
extern undefined * g_023d65a0;
// @baa 0x01757310
undefined4 * C_01757310::sub_01757310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_023d65a0);
  param_1[0x51] = (undefined4)(&g_023d659c);
  return param_1;
}

// @baa 0x01757380
int __stdcall sub_01757380(int a0) { return 0; }

struct C_01757390 {
    void sub_01757390();
};

int sub_011d3e80(void);
// @baa 0x01757390
void C_01757390::sub_01757390(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  sub_011d3e80();
  return;
}

void sub_011ee210();
// @baa 0x017573b0
void sub_017573b0(void) { sub_011ee210(); }

struct A_017573c0 { virtual void sub_017573d0(); char pad[320]; };

struct B_017573c0 { virtual void sub_017573d0(); };

struct C_017573c0 : A_017573c0, B_017573c0 { virtual void sub_017573d0(); C_017573c0(); };

C_017573c0::C_017573c0() {}

// @baa 0x017573c0
void C_017573c0::sub_017573d0() {}

// @baa 0x01757440
int UTexture2D::sub_01757440(void)
{
    int param_1 = (int)this;

  sub_01746c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x017575b0
void sub_017575b0(void) { sub_01757260(); }

struct C_017575c0 {
    undefined4 * sub_017575c0();
};

extern undefined4 g_023d6898;
extern undefined * g_023d68a0;
// @baa 0x017575c0
undefined4 * C_017575c0::sub_017575c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_023d68a0);
  param_1[0x51] = (undefined4)(&g_023d6898);
  return param_1;
}

struct A_017575f0 { virtual void sub_01757600(); char pad[320]; };

struct B_017575f0 { virtual void sub_01757600(); };

struct C_017575f0 : A_017575f0, B_017575f0 { virtual void sub_01757600(); C_017575f0(); };

C_017575f0::C_017575f0() {}

// @baa 0x017575f0
void C_017575f0::sub_01757600() {}

// @baa 0x01757690
int UTexture2D::sub_01757690(void)
{
    int param_1 = (int)this;

  sub_01746c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01757460(...);
// @baa 0x017576b0
void sub_017576b0(int param_1, int param_2, undefined4 param_3)
{
  sub_01757460(param_1,param_2,(param_2 - param_1) / 0x18,param_3);
  return;
}

// @baa 0x017576f0
void sub_017576f0(void) { sub_01757260(); }

// @baa 0x01758720
void sub_01758720(void) {  }

// @baa 0x01758730
int sub_01758730(int a0, int a1) { return a1; }

// @baa 0x01758740
int sub_01758740(int a0, int a1) { return a1; }

// @baa 0x01758750
int sub_01758750(int a0, int a1) { return a1; }

// @baa 0x01758760
int sub_01758760(int a0, int a1) { return a1; }

// @baa 0x01758770
int sub_01758770(int a0, int a1) { return a1; }

// @baa 0x01758780
int sub_01758780(int a0, int a1) { return a1; }

// @baa 0x01758790
int sub_01758790(int a0, int a1) { return a1; }

// @baa 0x017587a0
IMPLEMENT_CLASS_AT(UBmEdEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\BmEdEngine.cpp", 18);

// @baa 0x017588b0
int UBmEdEngine::vf_000(void) { return 1; }

// @baa 0x017588c0
bool UBmEdEngine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01758900 { C_01758900* sub_01758900(void); };

// @baa 0x01758900
C_01758900* C_01758900::sub_01758900(void) { return this; }

// @baa 0x01758ad0
IMPLEMENT_CLASS_AT(UCheckMapsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\CheckMapsCommandlet.cpp", 31);

int sub_017587a0(void);
int sub_0175f0b0(...);
extern undefined4 g_026e5d90;
// @baa 0x0175f170
int sub_0175f170(void)
{
  if (g_026e5d90 == 0) {
    g_026e5d90 = sub_0175f0b0(L"BmEditor");
    sub_017587a0();
  }
  return g_026e5d90;
}
