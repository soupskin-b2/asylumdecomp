// BmGame_0580000.cpp (part 2 of 2): 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" double cos(double x);
// @baa 0x0058c4d0
double sub_0058c4d0(float param_1)
{
    return cos((double)param_1);
}

extern "C" float tan(float);
// @baa 0x0058c520
float sub_0058c520(float arg1)
{
	return tan(arg1);
}

extern "C" double atan(double);
// @baa 0x0058c530
double sub_0058c530(float f) { return atan(f); }

// @baa 0x0058c640
void sub_0058c640(void) {  }

// @baa 0x0058c650
void sub_0058c650(void) {  }

// @baa 0x0058c660
void sub_0058c660(void) {  }

// @baa 0x0058c670
undefined8 sub_0058c670(undefined8 param_1)
{
  return param_1;
}

// @baa 0x0058c680
float10 sub_0058c680(double param_1)
{
  return (float10)param_1;
}

struct C {
    void sub_0058c690(undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x0058c690
void C::sub_0058c690(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3);
  return;
}

struct C_0058c6b0 { C_0058c6b0* sub_0058c6b0(int a0); };

// @baa 0x0058c6b0
C_0058c6b0* C_0058c6b0::sub_0058c6b0(int a0) { return this; }

struct C_0058c730 { void sub_0058c730(void); };

// @baa 0x0058c730
void C_0058c730::sub_0058c730(void) { *(int*)((char*)this + 60) = 1; }

struct C_0058c740 { int sub_0058c740(void); };

// @baa 0x0058c740
int C_0058c740::sub_0058c740(void) { return *(int*)((char*)this + 104); }

struct C_0058c750 { void sub_0058c750(int a0); };

// @baa 0x0058c750
void C_0058c750::sub_0058c750(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_0058c760 { void sub_0058c760(int a0); };

// @baa 0x0058c760
void C_0058c760::sub_0058c760(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_0058c790 { int sub_0058c790(void); };

// @baa 0x0058c790
int C_0058c790::sub_0058c790(void) { return *(int*)((char*)this + 0); }

struct C_0058c7a0 { int sub_0058c7a0(void); };

// @baa 0x0058c7a0
int C_0058c7a0::sub_0058c7a0(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_0058c940 {
    int sub_0058c940(int, int);
    int sub_0058c8d0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0058c940
int C_0058c940::sub_0058c940(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0058c940 *)(this))->sub_0058c8d0(param_2, param_3);
  sub_01a37612((void *)(iVar1 * param_3 + *param_1),0,param_2 * param_3);
  return iVar1;
}

struct C_0058c980 {
    void sub_0058c980(int, int, int);
};

int sub_0053d240(...);
void * sub_0053df30(void *, void *, size_t);
int sub_0053df70(...);
// @baa 0x0058c980
void C_0058c980::sub_0058c980(int param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = (param_1[1] - param_2) - param_3;
  if (iVar1 != 0) {
    sub_0053df30((void *)(param_2 * param_4 + *param_1),
            (void *)((param_2 + param_3) * param_4 + *param_1),iVar1 * param_4);
  }
  param_1[1] = param_1[1] - param_3;
  iVar1 = sub_0053d240(param_1[1],param_1[2],param_4);
  if (iVar1 != param_1[2]) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * param_4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0058ca00 { int a, b; C_0058ca00(int, int); };

// @baa 0x0058ca00
C_0058ca00::C_0058ca00(int x, int y) : a(x), b(y) {}

struct C_0058ca20 { int sub_0058ca20(void); };

// @baa 0x0058ca20
int C_0058ca20::sub_0058ca20(void) { return *(int*)((char*)this + 0); }

struct C_0058ca30 {
    int sub_0058ca30();
};

// @baa 0x0058ca30
int C_0058ca30::sub_0058ca30(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return param_1[1];
  }
  return 0;
}

struct C_0058ca40 { void sub_0058ca40(int a0); };

// @baa 0x0058ca40
void C_0058ca40::sub_0058ca40(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_0058cad0 { C_0058cad0* sub_0058cad0(int a0); };

// @baa 0x0058cad0
C_0058cad0* C_0058cad0::sub_0058cad0(int a0) { *(int*)((char*)this + 8) = 1; return this; }

struct C_0058cae0 {
    uint sub_0058cae0();
};

// @baa 0x0058cae0
uint C_0058cae0::sub_0058cae0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 1;
}

struct C_0058caf0 {
    int sub_0058caf0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0058caf0
int C_0058caf0::sub_0058caf0(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    sub_006311e0("IsUnicode()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnName.h"
                 ,0xaa,&g_01e3f3dc);
  }
  return param_1 + 0x10;
}

struct C_0058cc20 { C_0058cc20* sub_0058cc20(void); };

// @baa 0x0058cc20
C_0058cc20* C_0058cc20::sub_0058cc20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0058cc30 { int a, b; C_0058cc30(int, int); };

// @baa 0x0058cc30
C_0058cc30::C_0058cc30(int x, int y) : a(x), b(y) {}

// @baa 0x0058cc50
void __stdcall sub_0058cc50(int a0) {  }

struct C_0058cc60 { int sub_0058cc60(void); };

// @baa 0x0058cc60
int C_0058cc60::sub_0058cc60(void) { return *(int*)((char*)this + 24); }

struct C_0058cc70 { int a, b; C_0058cc70(int, int); };

// @baa 0x0058cc70
C_0058cc70::C_0058cc70(int x, int y) : a(x), b(y) {}

struct C_0058ce30 { C_0058ce30* sub_0058ce30(void); };

// @baa 0x0058ce30
C_0058ce30* C_0058ce30::sub_0058ce30(void) { return this; }

struct C_0058ce40 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_0058ce40& sub_0058ce40(int Arg);
};

// @baa 0x0058ce40
C_0058ce40& C_0058ce40::sub_0058ce40(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_0058ce50 {
    undefined4 sub_0058ce50(int *);
};

// @baa 0x0058ce50
undefined4 C_0058ce50::sub_0058ce50(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_0058ce80 {
    undefined4 sub_0058ce80(int *);
};

// @baa 0x0058ce80
undefined4 C_0058ce80::sub_0058ce80(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

struct C_0058d770 { C_0058d770* sub_0058d770(void); };

// @baa 0x0058d770
C_0058d770* C_0058d770::sub_0058d770(void) { return this; }

struct C_0058d7f0 {
    float10 sub_0058d7f0(float *);
};

// @baa 0x0058d7f0
float10 C_0058d7f0::sub_0058d7f0(float * param_2)
{
    float * param_1 = (float *)this;

  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] + (float10)param_2[2] * (float10)param_1[2];
}

struct C_0058da30 {
    float10 sub_0058da30();
};

// @baa 0x0058da30
float10 C_0058da30::sub_0058da30(void)
{
    float * param_1 = (float *)this;

  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1] +
         (float10)param_1[2] * (float10)param_1[2];
}

struct C_0058da60 {
    float10 sub_0058da60();
};

// @baa 0x0058da60
float10 C_0058da60::sub_0058da60(void)
{
    float * param_1 = (float *)this;
  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1];
}

struct C_0058e170 { C_0058e170* sub_0058e170(void); };

// @baa 0x0058e170
C_0058e170* C_0058e170::sub_0058e170(void) { return this; }

struct C_0058e3b0 {
    float10 sub_0058e3b0(float *);
};

// @baa 0x0058e3b0
float10 C_0058e3b0::sub_0058e3b0(float * param_2)
{
    float * param_1 = (float *)this;

  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] +
         (float10)param_2[2] * (float10)param_1[2] + (float10)param_2[3] * (float10)param_1[3];
}

struct C_0058e3e0 {
    float10 sub_0058e3e0();
};

// @baa 0x0058e3e0
float10 C_0058e3e0::sub_0058e3e0(void)
{
    float * param_1 = (float *)this;

  return (float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1] +
         (float10)param_1[2] * (float10)param_1[2] + (float10)param_1[3] * (float10)param_1[3];
}

// @baa 0x0058cb30
INT __stdcall sub_0058cb30(void* A)
{
    return A == 0;
}

// @baa 0x0058cb20
INT __stdcall sub_0058cb20(INT Value)
{
    return Value == 3;
}

struct SSomeClass {
    virtual ~SSomeClass() {}
    virtual void sub_0058c770(int * A, int B) { }
};

// @baa 0x0058c770
SSomeClass * sub_0058c770(SSomeClass * Obj, int * Arg)
{
    Obj->sub_0058c770(Arg, 1);
    return Obj;
}
