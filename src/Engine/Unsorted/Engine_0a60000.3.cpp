// Engine_0a60000.cpp (part 3 of 3): 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00a66290
undefined4 UTexture2D::sub_00a66290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a663c0
undefined4 UTexture2D::sub_00a663c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a66500
undefined4 UTexture2D::sub_00a66500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_00a66620(byte);
};

// @baa 0x00a66620
undefined4 C::sub_00a66620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a666e0 {
    undefined4 sub_00a666e0(byte);
};

// @baa 0x00a666e0
undefined4 C_00a666e0::sub_00a666e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00a678d0
int ULensFlare::sub_00a678d0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00a6e9a0 {
    undefined4 sub_00a6e9a0(byte);
};

// @baa 0x00a6e9a0
undefined4 C_00a6e9a0::sub_00a6e9a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6e9c0 {
    undefined4 sub_00a6e9c0(byte);
};

// @baa 0x00a6e9c0
undefined4 C_00a6e9c0::sub_00a6e9c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6e9e0 {
    undefined4 sub_00a6e9e0(byte);
};

// @baa 0x00a6e9e0
undefined4 C_00a6e9e0::sub_00a6e9e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ea00 {
    undefined4 sub_00a6ea00(byte);
};

// @baa 0x00a6ea00
undefined4 C_00a6ea00::sub_00a6ea00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ea20 {
    undefined4 sub_00a6ea20(byte);
};

// @baa 0x00a6ea20
undefined4 C_00a6ea20::sub_00a6ea20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ea40 {
    undefined4 sub_00a6ea40(byte);
};

// @baa 0x00a6ea40
undefined4 C_00a6ea40::sub_00a6ea40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ea60 {
    undefined4 sub_00a6ea60(byte);
};

// @baa 0x00a6ea60
undefined4 C_00a6ea60::sub_00a6ea60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ea80 {
    undefined4 sub_00a6ea80(byte);
};

// @baa 0x00a6ea80
undefined4 C_00a6ea80::sub_00a6ea80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eaa0 {
    undefined4 sub_00a6eaa0(byte);
};

// @baa 0x00a6eaa0
undefined4 C_00a6eaa0::sub_00a6eaa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eac0 {
    undefined4 sub_00a6eac0(byte);
};

// @baa 0x00a6eac0
undefined4 C_00a6eac0::sub_00a6eac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eae0 {
    undefined4 sub_00a6eae0(byte);
};

// @baa 0x00a6eae0
undefined4 C_00a6eae0::sub_00a6eae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eb00 {
    undefined4 sub_00a6eb00(byte);
};

// @baa 0x00a6eb00
undefined4 C_00a6eb00::sub_00a6eb00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eb20 {
    undefined4 sub_00a6eb20(byte);
};

// @baa 0x00a6eb20
undefined4 C_00a6eb20::sub_00a6eb20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eb40 {
    undefined4 sub_00a6eb40(byte);
};

// @baa 0x00a6eb40
undefined4 C_00a6eb40::sub_00a6eb40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eb60 {
    undefined4 sub_00a6eb60(byte);
};

// @baa 0x00a6eb60
undefined4 C_00a6eb60::sub_00a6eb60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eb80 {
    undefined4 sub_00a6eb80(byte);
};

// @baa 0x00a6eb80
undefined4 C_00a6eb80::sub_00a6eb80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eba0 {
    undefined4 sub_00a6eba0(byte);
};

// @baa 0x00a6eba0
undefined4 C_00a6eba0::sub_00a6eba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ec00 {
    undefined4 sub_00a6ec00(byte);
};

// @baa 0x00a6ec00
undefined4 C_00a6ec00::sub_00a6ec00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ec20 {
    undefined4 sub_00a6ec20(byte);
};

// @baa 0x00a6ec20
undefined4 C_00a6ec20::sub_00a6ec20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ec40 {
    undefined4 sub_00a6ec40(byte);
};

// @baa 0x00a6ec40
undefined4 C_00a6ec40::sub_00a6ec40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ec60 {
    undefined4 sub_00a6ec60(byte);
};

// @baa 0x00a6ec60
undefined4 C_00a6ec60::sub_00a6ec60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ec80 {
    undefined4 sub_00a6ec80(byte);
};

// @baa 0x00a6ec80
undefined4 C_00a6ec80::sub_00a6ec80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6eca0 {
    undefined4 sub_00a6eca0(byte);
};

// @baa 0x00a6eca0
undefined4 C_00a6eca0::sub_00a6eca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ecc0 {
    undefined4 sub_00a6ecc0(byte);
};

// @baa 0x00a6ecc0
undefined4 C_00a6ecc0::sub_00a6ecc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ece0 {
    undefined4 sub_00a6ece0(byte);
};

// @baa 0x00a6ece0
undefined4 C_00a6ece0::sub_00a6ece0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6ed00 {
    undefined4 sub_00a6ed00(byte);
};

// @baa 0x00a6ed00
undefined4 C_00a6ed00::sub_00a6ed00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6f260 {
    undefined4 sub_00a6f260(byte);
};

// @baa 0x00a6f260
undefined4 C_00a6f260::sub_00a6f260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6f280 {
    undefined4 sub_00a6f280(byte);
};

// @baa 0x00a6f280
undefined4 C_00a6f280::sub_00a6f280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6f2a0 {
    undefined4 sub_00a6f2a0(byte);
};

// @baa 0x00a6f2a0
undefined4 C_00a6f2a0::sub_00a6f2a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6f2c0 {
    undefined4 sub_00a6f2c0(byte);
};

// @baa 0x00a6f2c0
undefined4 C_00a6f2c0::sub_00a6f2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a6f2e0 {
    undefined4 sub_00a6f2e0(byte);
};

// @baa 0x00a6f2e0
undefined4 C_00a6f2e0::sub_00a6f2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct sub_00a69870_struct
{
    int f0;
    int f4;
    int f8;
    int f12;
    volatile int f16;
    int f20;

    sub_00a69870_struct* sub_00a69870();
};

extern int g_01fcff1c;
// @baa 0x00a69870
sub_00a69870_struct* sub_00a69870_struct::sub_00a69870()
{
    f8 = 0;
    f12 = 0;
    f16 &= 0xfffffffe;
    f0 = (int)&g_01fcff1c;
    f20 = 0;
    return this;
}

extern void* g_01fcfe64;
struct Obj00a69830 {
    void* F0;
    void* F1;
    void* F2;
    void* F3;
    volatile INT F4;
    void* F5;

    Obj00a69830* sub_00a69830();
};

// @baa 0x00a69830
// Clear the low bit of F4 and reset the other slots, leaving F0 pointing at
// the global. Returns this.
Obj00a69830* Obj00a69830::sub_00a69830()
{
    F2 = 0;
    F3 = 0;
    F4 &= 0xfffffffe;
    F0 = &g_01fcfe64;
    F5 = 0;
    return this;
}

struct C_00a60120
{
    char pad_00[0x2];
    WORD First;
    char pad_4[0x6];
    WORD Second;

    C_00a60120* sub_00a60120();
};

// @baa 0x00a60120
C_00a60120* C_00a60120::sub_00a60120()
{
    First = 0;
    Second = 0;
    return this;
}

struct C_00a62300
{
    INT Value;

    C_00a62300* sub_00a62300(INT* Source, INT Unused);
};

// @baa 0x00a62300
C_00a62300* C_00a62300::sub_00a62300(INT* Source, INT)
{
    *(INT*)this = *Source;
    return this;
}

struct C_00a62310
{
    INT Value;

    C_00a62310* sub_00a62310(INT* Source, INT Unused);
};

// @baa 0x00a62310
C_00a62310* C_00a62310::sub_00a62310(INT* Source, INT)
{
    *(INT*)this = *Source;
    return this;
}
