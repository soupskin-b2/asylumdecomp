// UnBsp.cpp (part 1 of 5): 107 functions
// Placed here by: neighbours 105, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_00ec1870 { int a, b, c; C_00ec1870(); };

// @baa 0x00ec1870
C_00ec1870::C_00ec1870() : a(0), b(0), c(0) {}

struct C {
    void sub_00ec1880();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00ec1880
void C::sub_00ec1880(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) != 0) {
    sub_006311e0("!Mark",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnBsp.cpp"
                 ,0x549,&g_01e3f3dc);
  }
  return;
}

struct C_00ec6c20 {
    void sub_00ec6c20();
};

void sub_01826080(void *);
// @baa 0x00ec6c20
void C_00ec6c20::sub_00ec6c20(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec6c30 {
    void sub_00ec6c30();
};

// @baa 0x00ec6c30
void C_00ec6c30::sub_00ec6c30(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_00ec6c40 { int sub_00ec6c40(void); };

// @baa 0x00ec6c40
int C_00ec6c40::sub_00ec6c40(void) { return *(int*)((char*)this + 108); }

struct C_00ec6c50 { int sub_00ec6c50(void); };

// @baa 0x00ec6c50
int C_00ec6c50::sub_00ec6c50(void) { return *(int*)((char*)this + 160); }

struct C_00ec6c60 { int sub_00ec6c60(void); };

// @baa 0x00ec6c60
int C_00ec6c60::sub_00ec6c60(void) { return *(int*)((char*)this + 176); }

struct C_00ec6c70 { int sub_00ec6c70(void); };

// @baa 0x00ec6c70
int C_00ec6c70::sub_00ec6c70(void) { return *(int*)((char*)this + 208); }

struct C_00ec6c80 { int sub_00ec6c80(void); };

// @baa 0x00ec6c80
int C_00ec6c80::sub_00ec6c80(void) { return *(int*)((char*)this + 224); }

struct C_00ec6c90 { int sub_00ec6c90(void); };

// @baa 0x00ec6c90
int C_00ec6c90::sub_00ec6c90(void) { return *(int*)((char*)this + 232); }

struct C_00ec6ca0 { int sub_00ec6ca0(void); };

// @baa 0x00ec6ca0
int C_00ec6ca0::sub_00ec6ca0(void) { return *(int*)((char*)this + 192); }

struct C_00ec6cb0 { int sub_00ec6cb0(void); };

// @baa 0x00ec6cb0
int C_00ec6cb0::sub_00ec6cb0(void) { return *(int*)((char*)this + 44); }

struct C_00ec6cc0 { char* sub_00ec6cc0(void); };

// @baa 0x00ec6cc0
char* C_00ec6cc0::sub_00ec6cc0(void) { return (char*)this + 56; }

struct C_00ec6cd0 { int sub_00ec6cd0(void); };

// @baa 0x00ec6cd0
int C_00ec6cd0::sub_00ec6cd0(void) { return *(int*)((char*)this + 72); }

struct C_00ec6ce0 {
    undefined4 * sub_00ec6ce0(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_02421c20;
// @baa 0x00ec6ce0
undefined4 * C_00ec6ce0::sub_00ec6ce0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02421c20));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void __stdcall sub_018204d0(char *);
extern char g_01e66a54[];
// @baa 0x00ec6d40
void sub_00ec6d40(void)
{
  sub_018204d0(g_01e66a54);
}

struct C_00ec6d50 { int sub_00ec6d50(void); };

// @baa 0x00ec6d50
int C_00ec6d50::sub_00ec6d50(void) { return *(int*)((char*)this + 116); }

struct C_00ec6d60 { int sub_00ec6d60(void); };

// @baa 0x00ec6d60
int C_00ec6d60::sub_00ec6d60(void) { return *(int*)((char*)this + 104); }

struct C_00ec6d70 { int sub_00ec6d70(void); };

// @baa 0x00ec6d70
int C_00ec6d70::sub_00ec6d70(void) { return *(int*)((char*)this + 68); }

struct C_00ec6e00 {
    undefined4 * sub_00ec6e00(byte);
};

// @baa 0x00ec6e00
undefined4 * C_00ec6e00::sub_00ec6e00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02421c20));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ec6e20 {
    undefined4 * sub_00ec6e20(byte);
};

// @baa 0x00ec6e20
undefined4 * C_00ec6e20::sub_00ec6e20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02421c20));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ec6eb0 {
    void sub_00ec6eb0();
};

int sub_005fad90(void);
// @baa 0x00ec6eb0
void C_00ec6eb0::sub_00ec6eb0(void)
{
    int * param_1 = (int *)this;

  if (0 < *param_1) {
    sub_005fad90();
    return;
  }
  return;
}

struct C_00ec6ec0 { int a, b, c; C_00ec6ec0(); };

// @baa 0x00ec6ec0
C_00ec6ec0::C_00ec6ec0() : a(0), b(0), c(0) {}

struct C_00ec6ed0 {
    void sub_00ec6ed0(undefined4 *);
};

// @baa 0x00ec6ed0
void C_00ec6ed0::sub_00ec6ed0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_00ec6ee0 { int a, b, c; C_00ec6ee0(); };

// @baa 0x00ec6ee0
C_00ec6ee0::C_00ec6ee0() : a(0), b(0), c(0) {}

struct C_00ec6ef0 { int a, b, c; C_00ec6ef0(); };

// @baa 0x00ec6ef0
C_00ec6ef0::C_00ec6ef0() : a(0), b(0), c(0) {}

struct C_00ec6f00 { int a, b, c; C_00ec6f00(); };

// @baa 0x00ec6f00
C_00ec6f00::C_00ec6f00() : a(0), b(0), c(0) {}

struct C_00ec6f10 { int a, b, c; C_00ec6f10(); };

// @baa 0x00ec6f10
C_00ec6f10::C_00ec6f10() : a(0), b(0), c(0) {}

struct C_00ec74c0 { int a, b, c; C_00ec74c0(); };

// @baa 0x00ec74c0
C_00ec74c0::C_00ec74c0() : a(0), b(0), c(0) {}

struct C_00ec74d0 { int a, b, c; C_00ec74d0(); };

// @baa 0x00ec74d0
C_00ec74d0::C_00ec74d0() : a(0), b(0), c(0) {}

struct C_00ec7510 {
    undefined1 * sub_00ec7510();
};

extern undefined1 g_026ccbc8;
// @baa 0x00ec7510
undefined1 * C_00ec7510::sub_00ec7510(void)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = &g_026ccbc8;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}

struct C_00ec7520 {
    undefined2 * sub_00ec7520();
};

extern undefined2 g_026ccbcc;
// @baa 0x00ec7520
undefined2 * C_00ec7520::sub_00ec7520(void)
{
    int param_1 = (int)this;

  undefined2 *puVar1;
  
  puVar1 = &g_026ccbcc;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 8);
  }
  return puVar1;
}

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray-like container: count + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Unk04;   // 0x04
    INT Count;   // 0x08
    INT* Data;   // 0x0c
    INT sub_00ec75f0(UINT Index);
};

// @baa 0x00ec75f0
INT FMArray::sub_00ec75f0(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

struct C_00ec7670 { int a, b, c; C_00ec7670(); };

// @baa 0x00ec7670
C_00ec7670::C_00ec7670() : a(0), b(0), c(0) {}

struct C_00ec7680 { int a, b, c; C_00ec7680(); };

// @baa 0x00ec7680
C_00ec7680::C_00ec7680() : a(0), b(0), c(0) {}

struct C_00ec7690 { int sub_00ec7690(void); };

// @baa 0x00ec7690
int C_00ec7690::sub_00ec7690(void) { return *(int*)((char*)this + 44); }

struct C_00ec76a0 {
    undefined4 sub_00ec76a0(byte);
};

int sub_00edc5c0(void);
// @baa 0x00ec76a0
undefined4 C_00ec76a0::sub_00ec76a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00edc5c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ec76d0 {
    void sub_00ec76d0();
};

int sub_0053df70(...);
// @baa 0x00ec76d0
void C_00ec76d0::sub_00ec76d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ec77e0 { int sub_00ec77e0(void); };

// @baa 0x00ec77e0
int C_00ec77e0::sub_00ec77e0(void) { return *(int*)((char*)this + 0); }

struct T_00ec78a0 { int x; };

// @baa 0x00ec78a0
template T_00ec78a0& TIndirectArray<T_00ec78a0>::operator()(INT);

struct C_00ec78f0 { int sub_00ec78f0(void); };

// @baa 0x00ec78f0
int C_00ec78f0::sub_00ec78f0(void) { return *(int*)((char*)this + 0); }

struct C_00ec7900 { int sub_00ec7900(void); };

// @baa 0x00ec7900
int C_00ec7900::sub_00ec7900(void) { return *(int*)((char*)this + 0); }

struct C_00ec7980 {
    int sub_00ec7980();
};

// @baa 0x00ec7980
int C_00ec7980::sub_00ec7980(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7990 {
    int sub_00ec7990();
};

// @baa 0x00ec7990
int C_00ec7990::sub_00ec7990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7b30 { int sub_00ec7b30(void); };

// @baa 0x00ec7b30
int C_00ec7b30::sub_00ec7b30(void) { return *(int*)((char*)this + 0); }

struct C_00ec7bb0 { int sub_00ec7bb0(void); };

// @baa 0x00ec7bb0
int C_00ec7bb0::sub_00ec7bb0(void) { return *(int*)((char*)this + 0); }

struct C_00ec7c70 {
    int sub_00ec7c70();
};

// @baa 0x00ec7c70
int C_00ec7c70::sub_00ec7c70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7c80 {
    int sub_00ec7c80();
};

// @baa 0x00ec7c80
int C_00ec7c80::sub_00ec7c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7c90 {
    int sub_00ec7c90();
};

// @baa 0x00ec7c90
int C_00ec7c90::sub_00ec7c90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7ca0 {
    int sub_00ec7ca0();
};

// @baa 0x00ec7ca0
int C_00ec7ca0::sub_00ec7ca0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ec7cb0 {
    void sub_00ec7cb0();
};

// @baa 0x00ec7cb0
void C_00ec7cb0::sub_00ec7cb0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00ec7cf0 { int sub_00ec7cf0(void); };

// @baa 0x00ec7cf0
int C_00ec7cf0::sub_00ec7cf0(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d00 { int sub_00ec7d00(void); };

// @baa 0x00ec7d00
int C_00ec7d00::sub_00ec7d00(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d10 { int sub_00ec7d10(void); };

// @baa 0x00ec7d10
int C_00ec7d10::sub_00ec7d10(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d20 { int sub_00ec7d20(void); };

// @baa 0x00ec7d20
int C_00ec7d20::sub_00ec7d20(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d30 { int sub_00ec7d30(void); };

// @baa 0x00ec7d30
int C_00ec7d30::sub_00ec7d30(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d40 { int sub_00ec7d40(void); };

// @baa 0x00ec7d40
int C_00ec7d40::sub_00ec7d40(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d50 { int sub_00ec7d50(void); };

// @baa 0x00ec7d50
int C_00ec7d50::sub_00ec7d50(void) { return *(int*)((char*)this + 0); }

struct C_00ec7d60 { int sub_00ec7d60(void); };

// @baa 0x00ec7d60
int C_00ec7d60::sub_00ec7d60(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ec7d70(INT Index);
};

// @baa 0x00ec7d70
DWORD* S::sub_00ec7d70(INT Index)
{
    return &Items(Index);
}

struct C_00ec7e10 { int sub_00ec7e10(void); };

// @baa 0x00ec7e10
int C_00ec7e10::sub_00ec7e10(void) { return *(int*)((char*)this + 0); }

struct C_00ec7e20 { int sub_00ec7e20(void); };

// @baa 0x00ec7e20
int C_00ec7e20::sub_00ec7e20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ec7e60
undefined4 sub_00ec7e60(float * param_1, float * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_00ec7ea0 {
    void sub_00ec7ea0(int *);
};

// @baa 0x00ec7ea0
void C_00ec7ea0::sub_00ec7ea0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_00ec7eb0 { int sub_00ec7eb0(void); };

// @baa 0x00ec7eb0
int C_00ec7eb0::sub_00ec7eb0(void) { return *(int*)((char*)this + 0); }

struct C_00ec7ef0 { int sub_00ec7ef0(void); };

// @baa 0x00ec7ef0
int C_00ec7ef0::sub_00ec7ef0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ec8160 {
    undefined4 sub_00ec8160();
};

// @baa 0x00ec8160
undefined4 C_00ec8160::sub_00ec8160(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00ec8170 { int sub_00ec8170(void); };

// @baa 0x00ec8170
int C_00ec8170::sub_00ec8170(void) { return *(int*)((char*)this + 0); }

struct C_00ec8180 {
    void sub_00ec8180();
};

// @baa 0x00ec8180
void C_00ec8180::sub_00ec8180(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct E { BYTE Bytes[16]; };

struct S_00ec86a0 {
    TArray<E> Items; // 0x00
    const E* sub_00ec86a0(INT Index) const;
};

// @baa 0x00ec86a0
const E* S_00ec86a0::sub_00ec86a0(INT Index) const
{
    return &Items(Index);
}

struct C_00ec86f0 {
    int sub_00ec86f0(int);
};

// @baa 0x00ec86f0
int C_00ec86f0::sub_00ec86f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ec8700 { C_00ec8700* sub_00ec8700(void); };

// @baa 0x00ec8700
C_00ec8700* C_00ec8700::sub_00ec8700(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ec8710 { int sub_00ec8710(void); };

// @baa 0x00ec8710
int C_00ec8710::sub_00ec8710(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ec8720
int sub_00ec8720(int a0) { return a0; }

struct C_00ec8730 {
    int sub_00ec8730(int);
};

// @baa 0x00ec8730
int C_00ec8730::sub_00ec8730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

int sub_00627f70(...);
// @baa 0x00ec8740
void sub_00ec8740(undefined4 param_1)
{
  sub_00627f70(param_1,0xc,0);
  return;
}

struct C_00ec8760 { int sub_00ec8760(void); };

// @baa 0x00ec8760
int C_00ec8760::sub_00ec8760(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ec87a0
int sub_00ec87a0(ushort param_1)
{
  return param_1;
}

struct C_00ec87b0 {
    int sub_00ec87b0(int);
};

// @baa 0x00ec87b0
int C_00ec87b0::sub_00ec87b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ec8870 { int sub_00ec8870(void); };

// @baa 0x00ec8870
int C_00ec8870::sub_00ec8870(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ec8880 { int sub_00ec8880(void); };

// @baa 0x00ec8880
int C_00ec8880::sub_00ec8880(void) { return *(int*)((char*)this + 0); }

struct C_00ec8890 {
    int sub_00ec8890(int);
};

// @baa 0x00ec8890
int C_00ec8890::sub_00ec8890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ec88a0 {
    int sub_00ec88a0(int);
};

// @baa 0x00ec88a0
int C_00ec88a0::sub_00ec88a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ec88b0 {
    int sub_00ec88b0(int);
};

// @baa 0x00ec88b0
int C_00ec88b0::sub_00ec88b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ec88c0 {
    int sub_00ec88c0(int);
};

// @baa 0x00ec88c0
int C_00ec88c0::sub_00ec88c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ec88d0 { int sub_00ec88d0(void); };

// @baa 0x00ec88d0
int C_00ec88d0::sub_00ec88d0(void) { return *(int*)((char*)this + 20); }

struct C_00ec88e0 { int sub_00ec88e0(void); };

// @baa 0x00ec88e0
int C_00ec88e0::sub_00ec88e0(void) { return *(int*)((char*)this + 20); }

struct C_00ec88f0 { int sub_00ec88f0(void); };

// @baa 0x00ec88f0
int C_00ec88f0::sub_00ec88f0(void) { return *(int*)((char*)this + 20); }

struct C_00ec8900 { int sub_00ec8900(void); };

// @baa 0x00ec8900
int C_00ec8900::sub_00ec8900(void) { return *(int*)((char*)this + 20); }

struct C_00ec8910 { int sub_00ec8910(void); };

// @baa 0x00ec8910
int C_00ec8910::sub_00ec8910(void) { return *(int*)((char*)this + 20); }

struct C_00ec8920 { int sub_00ec8920(void); };

// @baa 0x00ec8920
int C_00ec8920::sub_00ec8920(void) { return *(int*)((char*)this + 20); }

struct C_00ec8930 { int sub_00ec8930(void); };

// @baa 0x00ec8930
int C_00ec8930::sub_00ec8930(void) { return *(int*)((char*)this + 20); }

struct C_00ec8a00 {
    void sub_00ec8a00(undefined4, undefined2);
};

int sub_00630f20(...);
// @baa 0x00ec8a00
void C_00ec8a00::sub_00ec8a00(undefined4 param_2, undefined2 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

// @baa 0x00ec8b50
void sub_00ec8b50(undefined2 * param_1, undefined2 * param_2)
{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00ec8b70
void sub_00ec8b70(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00ec8b90
void sub_00ec8b90(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00ec8bb0
void sub_00ec8bb0(undefined2 * param_1, undefined2 * param_2)
{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00ec8bd0
void sub_00ec8bd0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct C_00ec8db0 { C_00ec8db0* sub_00ec8db0(void); };

// @baa 0x00ec8db0
C_00ec8db0* C_00ec8db0::sub_00ec8db0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00ec8e50 {
    void sub_00ec8e50();
};

// @baa 0x00ec8e50
void C_00ec8e50::sub_00ec8e50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_00ec8e70 { C_00ec8e70* sub_00ec8e70(void); };

// @baa 0x00ec8e70
C_00ec8e70* C_00ec8e70::sub_00ec8e70(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_00ec8e80 {
    uint sub_00ec8e80();
};

// @baa 0x00ec8e80
uint C_00ec8e80::sub_00ec8e80(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00ec99c0 {
    int sub_00ec99c0(int);
};

// @baa 0x00ec99c0
int C_00ec99c0::sub_00ec99c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

int sub_00662520(...);
// @baa 0x00ec9d70
INT UBrushBuilder::Vertexv(FVector V)
{
    INT Result = Native_48.Num();  // Vertices
    FVector* Vertex = (FVector*)sub_00662520(sizeof(FVector), &Native_48);  // new(Vertices) FVector(V)
    if (Vertex != NULL)
    {
        *Vertex = V;
    }
    return Result;
}

struct C_00eca3d0 {
    void sub_00eca3d0();
    int sub_00eca2c0(int);
};

// @baa 0x00eca3d0
void C_00eca3d0::sub_00eca3d0(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = 0;
  if (0 < *(int *)(*param_1 + 0x38)) {
    do {
      ((C_00eca3d0 *)(this))->sub_00eca2c0(iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*param_1 + 0x38));
  }
  return;
}

struct C_00eca500 {
    undefined4 sub_00eca500(byte);
};

int sub_0064a760(void);
// @baa 0x00eca500
undefined4 C_00eca500::sub_00eca500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0064a760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x00ec9cf0
/* Vertex i of the built brush, or the origin when i is out of range (Native_48 is UE3's Vertices). */
FVector UBrushBuilder::GetVertex(INT i)
{
	return (i >= 0 && i < Native_48.Num()) ? ((TArrayAt_<FVector>&)Native_48).At(i) : FVector(0, 0, 0);
}

#line 963 "candidate.cpp"
