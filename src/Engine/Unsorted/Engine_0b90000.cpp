// Engine_0b90000.cpp (part 1 of 3): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00b921b0(int);
};

int sub_0053df70(...);
// @baa 0x00b921b0
void C::sub_00b921b0(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00b921f0 { void* Data; int Num; int Max; void sub_00b921f0(); };

// @baa 0x00b921f0
void C_00b921f0::sub_00b921f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b92250 {
    void sub_00b92250(int);
};

// @baa 0x00b92250
void C_00b92250::sub_00b92250(int param_2)
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

void sub_00b3d3a0();
// @baa 0x00b95790
void sub_00b95790(void) { sub_00b3d3a0(); }

struct C_00b97030 {
    undefined4 sub_00b97030(byte);
};

int sub_0053dfa0(...);
int sub_00b921f0(void);
// @baa 0x00b97030
undefined4 C_00b97030::sub_00b97030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b921f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x00b97050
undefined4 UObject::sub_00b97050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_0200e3c8;
// @baa 0x00b9a9f0
undefined4 * UObject::sub_00b9a9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e3c8);
  return param_1;
}

struct T_00b9ab10;
// @baa 0x00b9ab10
template INT TArray<T_00b9ab10*>::RemoveItem(T_00b9ab10* const&);

// @baa 0x00b9abd0
IMPLEMENT_CLASS_AT(URParticleAttractorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6471);

// @baa 0x00b9ac50
