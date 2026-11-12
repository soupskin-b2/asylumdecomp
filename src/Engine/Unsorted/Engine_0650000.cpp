// Engine_0650000.cpp (part 1 of 9): 740 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00650060
void __stdcall sub_00650060(int a0) {  }

// @baa 0x00650070
int sub_00650070(void) { return 1; }

// @baa 0x00650080
void __stdcall sub_00650080(int a0, int a1, int a2) {  }

extern char g_01ebc3cc[];
struct C { C* sub_00650090(void); };

// @baa 0x00650090
C* C::sub_00650090(void) { *(int*)((char*)this + 0) = (int)g_01ebc3cc; return this; }

// @baa 0x006502f0
bool sub_006502f0(int param_1)
{
  return param_1 == 3;
}

void sub_007249d0();
// @baa 0x00650300
void sub_00650300(void) { sub_007249d0(); }

int sub_00716170(...);
// @baa 0x006504b0
undefined4 sub_006504b0(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  return param_1;
}

// @baa 0x006504e0
int sub_006504e0(void) { return 1; }

// @baa 0x006504f0
void sub_006504f0(void) {  }

struct C_00650dc0 { C_00650dc0* sub_00650dc0(void); };

// @baa 0x00650dc0
C_00650dc0* C_00650dc0::sub_00650dc0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650e50 { int sub_00650e50(void); };

// @baa 0x00650e50
int C_00650e50::sub_00650e50(void) { return *(int*)((char*)this + 0); }

struct C_00650eb0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00650eb0(INT Index);
};

// @baa 0x00650eb0
UBOOL C_00650eb0::sub_00650eb0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00650ed0 { int a, b, c; C_00650ed0(); };

// @baa 0x00650ed0
C_00650ed0::C_00650ed0() : a(0), b(0), c(0) {}

struct C_00650ee0 { int a, b, c; C_00650ee0(); };

// @baa 0x00650ee0
C_00650ee0::C_00650ee0() : a(0), b(0), c(0) {}

struct C_00650f70 { int a, b, c; C_00650f70(); };

// @baa 0x00650f70
C_00650f70::C_00650f70() : a(0), b(0), c(0) {}

struct C_00650f80 { int a, b, c; C_00650f80(); };

// @baa 0x00650f80
C_00650f80::C_00650f80() : a(0), b(0), c(0) {}

struct C_00650f90 { int a, b, c; C_00650f90(); };

// @baa 0x00650f90
C_00650f90::C_00650f90() : a(0), b(0), c(0) {}

struct C_00650fa0 { int a, b, c; C_00650fa0(); };

// @baa 0x00650fa0
C_00650fa0::C_00650fa0() : a(0), b(0), c(0) {}

// @baa 0x00651030
void sub_00651030(void) {  }

struct C_006510a0 { int a, b, c; C_006510a0(); };

// @baa 0x006510a0
C_006510a0::C_006510a0() : a(0), b(0), c(0) {}

struct T_006510b0 { int x; };

// @baa 0x006510b0
template T_006510b0& TIndirectArray<T_006510b0>::operator()(INT);

struct C_00651100 { int a, b, c; C_00651100(); };

// @baa 0x00651100
C_00651100::C_00651100() : a(0), b(0), c(0) {}

struct C_00651110 { int sub_00651110(void); };

// @baa 0x00651110
int C_00651110::sub_00651110(void) { return *(int*)((char*)this + 4); }

struct C_00651120 { int sub_00651120(void); };

// @baa 0x00651120
int C_00651120::sub_00651120(void) { return *(int*)((char*)this + 4); }

struct C_00651130 { int a, b, c; C_00651130(); };

// @baa 0x00651130
C_00651130::C_00651130() : a(0), b(0), c(0) {}

struct C_00651140 { int sub_00651140(void); };

// @baa 0x00651140
int C_00651140::sub_00651140(void) { return *(int*)((char*)this + 0); }

struct C_00651150 { int sub_00651150(void); };

// @baa 0x00651150
int C_00651150::sub_00651150(void) { return *(int*)((char*)this + 4); }

struct C_00651160 { int a, b, c; C_00651160(); };

// @baa 0x00651160
C_00651160::C_00651160() : a(0), b(0), c(0) {}

struct C_00651170 { int sub_00651170(void); };

// @baa 0x00651170
int C_00651170::sub_00651170(void) { return *(int*)((char*)this + 4); }

struct C_00651180 { int a, b, c; C_00651180(); };

// @baa 0x00651180
C_00651180::C_00651180() : a(0), b(0), c(0) {}

struct C_00651190 { int sub_00651190(void); };

// @baa 0x00651190
int C_00651190::sub_00651190(void) { return *(int*)((char*)this + 4); }

// @baa 0x006511a0
bool sub_006511a0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006511b0
bool sub_006511b0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006511c0
bool sub_006511c0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006511d0
undefined4 sub_006511d0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006511f0
undefined4 sub_006511f0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00651210
undefined4 sub_00651210(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00651230
undefined4 sub_00651230(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00651250
undefined4 sub_00651250(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00651270
undefined4 sub_00651270(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

struct C_00651290 { int sub_00651290(void); };

// @baa 0x00651290
int C_00651290::sub_00651290(void) { return *(int*)((char*)this + 0); }

struct C_006512a0 { int sub_006512a0(void); };

// @baa 0x006512a0
int C_006512a0::sub_006512a0(void) { return *(int*)((char*)this + 0); }

struct C_006512b0 { int sub_006512b0(void); };

// @baa 0x006512b0
int C_006512b0::sub_006512b0(void) { return *(int*)((char*)this + 0); }

struct C_006512c0 { int sub_006512c0(void); };

// @baa 0x006512c0
int C_006512c0::sub_006512c0(void) { return *(int*)((char*)this + 0); }

struct C_006512d0 { int sub_006512d0(void); };

// @baa 0x006512d0
int C_006512d0::sub_006512d0(void) { return *(int*)((char*)this + 0); }

struct C_006512e0 { int sub_006512e0(void); };

// @baa 0x006512e0
int C_006512e0::sub_006512e0(void) { return *(int*)((char*)this + 0); }

struct C_006512f0 { int sub_006512f0(void); };

// @baa 0x006512f0
int C_006512f0::sub_006512f0(void) { return *(int*)((char*)this + 0); }

struct C_00651300 { int sub_00651300(void); };

// @baa 0x00651300
int C_00651300::sub_00651300(void) { return *(int*)((char*)this + 0); }

struct C_00651310 { int sub_00651310(void); };

// @baa 0x00651310
int C_00651310::sub_00651310(void) { return *(int*)((char*)this + 0); }

struct C_00651320 { int a, b, c; C_00651320(); };

// @baa 0x00651320
C_00651320::C_00651320() : a(0), b(0), c(0) {}

struct C_00651330 { int sub_00651330(void); };

// @baa 0x00651330
int C_00651330::sub_00651330(void) { return *(int*)((char*)this + 4); }

struct C_00651340 { int a, b, c; C_00651340(); };

// @baa 0x00651340
C_00651340::C_00651340() : a(0), b(0), c(0) {}

struct C_00651350 { int a, b, c; C_00651350(); };

// @baa 0x00651350
C_00651350::C_00651350() : a(0), b(0), c(0) {}

struct C_00651360 { int a, b, c; C_00651360(); };

// @baa 0x00651360
C_00651360::C_00651360() : a(0), b(0), c(0) {}

struct C_00651370 { int a, b, c; C_00651370(); };

// @baa 0x00651370
C_00651370::C_00651370() : a(0), b(0), c(0) {}

struct C_00651380 { int a, b, c; C_00651380(); };

// @baa 0x00651380
C_00651380::C_00651380() : a(0), b(0), c(0) {}

struct C_00651390 { int a, b, c; C_00651390(); };

// @baa 0x00651390
C_00651390::C_00651390() : a(0), b(0), c(0) {}

struct C_006513a0 { int sub_006513a0(void); };

// @baa 0x006513a0
int C_006513a0::sub_006513a0(void) { return *(int*)((char*)this + 4); }

struct C_006513b0 { int sub_006513b0(void); };

// @baa 0x006513b0
int C_006513b0::sub_006513b0(void) { return *(int*)((char*)this + 4); }

struct C_006513c0 { int sub_006513c0(void); };

// @baa 0x006513c0
int C_006513c0::sub_006513c0(void) { return *(int*)((char*)this + 4); }

struct C_006513d0 {
    void sub_006513d0();
};

int sub_0053df70(...);
// @baa 0x006513d0
void C_006513d0::sub_006513d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00651420 {
    void sub_00651420();
};

// @baa 0x00651420
void C_00651420::sub_00651420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined4 *)*param_1 = param_1[1];
  return;
}

// @baa 0x00651470
void sub_00651470(void) {  }

struct C_006516e0 {
    uint sub_006516e0();
};

// @baa 0x006516e0
uint C_006516e0::sub_006516e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_006516f0 { int sub_006516f0(void); };

// @baa 0x006516f0
int C_006516f0::sub_006516f0(void) { return *(int*)((char*)this + 0); }

struct C_00651700 { int sub_00651700(void); };

// @baa 0x00651700
int C_00651700::sub_00651700(void) { return *(int*)((char*)this + 0); }

struct C_00651710 { int sub_00651710(void); };

// @baa 0x00651710
int C_00651710::sub_00651710(void) { return *(int*)((char*)this + 0); }

struct C_00651720 { int sub_00651720(void); };

// @baa 0x00651720
int C_00651720::sub_00651720(void) { return *(int*)((char*)this + 0); }

struct C_00651730 { int sub_00651730(void); };

// @baa 0x00651730
int C_00651730::sub_00651730(void) { return *(int*)((char*)this + 0); }

struct C_00651740 { int sub_00651740(void); };

// @baa 0x00651740
int C_00651740::sub_00651740(void) { return *(int*)((char*)this + 0); }

// @baa 0x00651750
bool sub_00651750(int param_1)
{
  return param_1 != 3;
}

// @baa 0x006518e0
int sub_006518e0(void) { return 1; }

// @baa 0x006518f0
bool sub_006518f0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00651900
int sub_00651900(void) { return 1; }

struct C_00651910 { int sub_00651910(void); };

// @baa 0x00651910
int C_00651910::sub_00651910(void) { return *(int*)((char*)this + 0); }

struct C_00651920 { int sub_00651920(void); };

// @baa 0x00651920
int C_00651920::sub_00651920(void) { return *(int*)((char*)this + 0); }

struct C_00651930 { int sub_00651930(void); };

// @baa 0x00651930
int C_00651930::sub_00651930(void) { return *(int*)((char*)this + 0); }

struct C_00651940 { int sub_00651940(void); };

// @baa 0x00651940
int C_00651940::sub_00651940(void) { return *(int*)((char*)this + 0); }

struct C_00651950 { int sub_00651950(void); };

// @baa 0x00651950
int C_00651950::sub_00651950(void) { return *(int*)((char*)this + 0); }

struct C_00651960 { int sub_00651960(void); };

// @baa 0x00651960
int C_00651960::sub_00651960(void) { return *(int*)((char*)this + 0); }

struct C_00651970 { int sub_00651970(void); };

// @baa 0x00651970
int C_00651970::sub_00651970(void) { return *(int*)((char*)this + 0); }

struct C_00651980 { int sub_00651980(void); };

// @baa 0x00651980
int C_00651980::sub_00651980(void) { return *(int*)((char*)this + 0); }

struct C_00651990 { int sub_00651990(void); };

// @baa 0x00651990
int C_00651990::sub_00651990(void) { return *(int*)((char*)this + 0); }

struct C_006519a0 { int sub_006519a0(void); };

// @baa 0x006519a0
int C_006519a0::sub_006519a0(void) { return *(int*)((char*)this + 0); }

struct C_006519b0 { int sub_006519b0(void); };

// @baa 0x006519b0
int C_006519b0::sub_006519b0(void) { return *(int*)((char*)this + 0); }

struct C_006519c0 { int sub_006519c0(void); };

// @baa 0x006519c0
int C_006519c0::sub_006519c0(void) { return *(int*)((char*)this + 0); }

struct C_006519d0 { int sub_006519d0(void); };

// @baa 0x006519d0
int C_006519d0::sub_006519d0(void) { return *(int*)((char*)this + 0); }

struct C_006519e0 { int sub_006519e0(void); };

// @baa 0x006519e0
int C_006519e0::sub_006519e0(void) { return *(int*)((char*)this + 0); }

int sub_0053dfa0(...);
int sub_00651040(void);
// @baa 0x00651a10
undefined4 ULensFlare::sub_00651a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00651040();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00651a50 { C_00651a50* sub_00651a50(int a0); };

// @baa 0x00651a50
C_00651a50* C_00651a50::sub_00651a50(int a0) { return this; }

struct C_00651a60 { int sub_00651a60(void); };

// @baa 0x00651a60
int C_00651a60::sub_00651a60(void) { return *(int*)((char*)this + 0); }

struct C_00651a70 { int sub_00651a70(void); };

// @baa 0x00651a70
int C_00651a70::sub_00651a70(void) { return *(int*)((char*)this + 0); }

struct C_00651a80 {
    int sub_00651a80(int);
};

// @baa 0x00651a80
int C_00651a80::sub_00651a80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00651a90 { C_00651a90* sub_00651a90(int a0); };

// @baa 0x00651a90
C_00651a90* C_00651a90::sub_00651a90(int a0) { return this; }

struct C_00651aa0 { int sub_00651aa0(void); };

// @baa 0x00651aa0
int C_00651aa0::sub_00651aa0(void) { return *(int*)((char*)this + 0); }

struct C_00651ab0 {
    int sub_00651ab0(int);
};

// @baa 0x00651ab0
int C_00651ab0::sub_00651ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00651b10 { C_00651b10* sub_00651b10(int a0); };

// @baa 0x00651b10
C_00651b10* C_00651b10::sub_00651b10(int a0) { return this; }

struct C_00651b20 { int sub_00651b20(void); };

// @baa 0x00651b20
int C_00651b20::sub_00651b20(void) { return *(int*)((char*)this + 0); }

struct C_00651b30 { int sub_00651b30(void); };

// @baa 0x00651b30
int C_00651b30::sub_00651b30(void) { return *(int*)((char*)this + 0); }

struct C_00651b40 { int sub_00651b40(void); };

// @baa 0x00651b40
int C_00651b40::sub_00651b40(void) { return *(int*)((char*)this + 0); }

struct C_00651b70 {
    int sub_00651b70(int);
};

// @baa 0x00651b70
int C_00651b70::sub_00651b70(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00651b80{
int*sub_00651b80(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x00651b80
int*C_00651b80::sub_00651b80(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x210))((int)(iVar1));
}
return param_1;
}

struct C_00651bf0{
int*sub_00651bf0(int*);
};

// @baa 0x00651bf0
int*C_00651bf0::sub_00651bf0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x20c))((int)(iVar1));
}
return param_1;
}

struct C_00651c20{
int*sub_00651c20(int*);
};

// @baa 0x00651c20
int*C_00651c20::sub_00651c20(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x208))((int)(iVar1));
}
return param_1;
}

struct C_00651c50{
int*sub_00651c50(int*);
};

// @baa 0x00651c50
int*C_00651c50::sub_00651c50(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x204))((int)(iVar1));
}
return param_1;
}

struct C_00651c80{
int*sub_00651c80(int*);
};

// @baa 0x00651c80
int*C_00651c80::sub_00651c80(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x200))((int)(iVar1));
}
return param_1;
}

struct C_00651d90 { int sub_00651d90(void); };

// @baa 0x00651d90
int C_00651d90::sub_00651d90(void) { return *(int*)((char*)this + 0); }

struct C_00651da0 { int sub_00651da0(void); };

// @baa 0x00651da0
int C_00651da0::sub_00651da0(void) { return *(int*)((char*)this + 0); }

struct C_00651e20 { C_00651e20* sub_00651e20(int a0); };

// @baa 0x00651e20
C_00651e20* C_00651e20::sub_00651e20(int a0) { return this; }

struct C_00651e30 { int sub_00651e30(void); };

// @baa 0x00651e30
int C_00651e30::sub_00651e30(void) { return *(int*)((char*)this + 0); }

struct C_00651e40 { int sub_00651e40(void); };

// @baa 0x00651e40
int C_00651e40::sub_00651e40(void) { return *(int*)((char*)this + 0); }

struct C_00651e50 { int sub_00651e50(void); };

// @baa 0x00651e50
int C_00651e50::sub_00651e50(void) { return *(int*)((char*)this + 0); }

struct C_00651e60 { C_00651e60* sub_00651e60(int a0); };

// @baa 0x00651e60
C_00651e60* C_00651e60::sub_00651e60(int a0) { return this; }

struct C_00651e70 { C_00651e70* sub_00651e70(int a0); };

// @baa 0x00651e70
C_00651e70* C_00651e70::sub_00651e70(int a0) { return this; }

struct C_00651e80 { int sub_00651e80(void); };

// @baa 0x00651e80
int C_00651e80::sub_00651e80(void) { return *(int*)((char*)this + 0); }

struct C_00651e90 {
    int sub_00651e90(int);
};

// @baa 0x00651e90
int C_00651e90::sub_00651e90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x120 + *param_1;
}

struct C_00651ea0 { int sub_00651ea0(void); };

// @baa 0x00651ea0
int C_00651ea0::sub_00651ea0(void) { return *(int*)((char*)this + 0); }

struct C_00651eb0 { C_00651eb0* sub_00651eb0(int a0); };

// @baa 0x00651eb0
C_00651eb0* C_00651eb0::sub_00651eb0(int a0) { return this; }

struct C_00651ec0 { C_00651ec0* sub_00651ec0(int a0); };

// @baa 0x00651ec0
C_00651ec0* C_00651ec0::sub_00651ec0(int a0) { return this; }

struct C_00651ed0 { int sub_00651ed0(void); };

// @baa 0x00651ed0
int C_00651ed0::sub_00651ed0(void) { return *(int*)((char*)this + 0); }

struct C_00651ee0 { C_00651ee0* sub_00651ee0(int a0); };

// @baa 0x00651ee0
C_00651ee0* C_00651ee0::sub_00651ee0(int a0) { return this; }

struct C_00651ef0 { C_00651ef0* sub_00651ef0(int a0); };

// @baa 0x00651ef0
C_00651ef0* C_00651ef0::sub_00651ef0(int a0) { return this; }

struct C_00651f00 { C_00651f00* sub_00651f00(int a0); };

// @baa 0x00651f00
C_00651f00* C_00651f00::sub_00651f00(int a0) { return this; }

struct C_00651f10 { C_00651f10* sub_00651f10(int a0); };

// @baa 0x00651f10
C_00651f10* C_00651f10::sub_00651f10(int a0) { return this; }

struct C_00651f20 { int sub_00651f20(void); };

// @baa 0x00651f20
int C_00651f20::sub_00651f20(void) { return *(int*)((char*)this + 0); }

struct C_00651f30 { int sub_00651f30(void); };

// @baa 0x00651f30
int C_00651f30::sub_00651f30(void) { return *(int*)((char*)this + 0); }

struct C_00651f40 { int sub_00651f40(void); };

// @baa 0x00651f40
int C_00651f40::sub_00651f40(void) { return *(int*)((char*)this + 0); }

struct C_00651f50 { int sub_00651f50(void); };

// @baa 0x00651f50
int C_00651f50::sub_00651f50(void) { return *(int*)((char*)this + 0); }

struct C_00651f60 { int sub_00651f60(void); };

// @baa 0x00651f60
int C_00651f60::sub_00651f60(void) { return *(int*)((char*)this + 0); }

struct C_00651f70 { int sub_00651f70(void); };

// @baa 0x00651f70
int C_00651f70::sub_00651f70(void) { return *(int*)((char*)this + 0); }

struct C_00651f80 { int sub_00651f80(void); };

// @baa 0x00651f80
int C_00651f80::sub_00651f80(void) { return *(int*)((char*)this + 0); }

struct C_00651f90 { C_00651f90* sub_00651f90(int a0); };

// @baa 0x00651f90
C_00651f90* C_00651f90::sub_00651f90(int a0) { return this; }

struct C_00651fa0 { int sub_00651fa0(void); };

// @baa 0x00651fa0
int C_00651fa0::sub_00651fa0(void) { return *(int*)((char*)this + 0); }

struct C_00651fb0 { int sub_00651fb0(void); };

// @baa 0x00651fb0
int C_00651fb0::sub_00651fb0(void) { return *(int*)((char*)this + 0); }

struct C_00651fc0 { int sub_00651fc0(void); };

// @baa 0x00651fc0
int C_00651fc0::sub_00651fc0(void) { return *(int*)((char*)this + 0); }

struct C_00651fd0 {
    int sub_00651fd0(int);
};

// @baa 0x00651fd0
int C_00651fd0::sub_00651fd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

void sub_008044f0();
// @baa 0x00651fe0
void sub_00651fe0(void) { sub_008044f0(); }

// @baa 0x00651ff0
void sub_00651ff0(void) {  }

struct C_00652000 { int sub_00652000(void); };

// @baa 0x00652000
int C_00652000::sub_00652000(void) { return *(int*)((char*)this + 0); }

void sub_0064bc00();
// @baa 0x00652010
void sub_00652010(void) { sub_0064bc00(); }

// @baa 0x00652020
void sub_00652020(void) {  }

struct C_00652030 { int sub_00652030(void); };

// @baa 0x00652030
int C_00652030::sub_00652030(void) { return *(int*)((char*)this + 0); }

// @baa 0x00652100
void sub_00652100(void) {  }

void sub_00804410();
// @baa 0x00652110
void sub_00652110(void) { sub_00804410(); }

// @baa 0x00652120
void sub_00652120(void) {  }

struct C_00652130 { int sub_00652130(void); };

// @baa 0x00652130
int C_00652130::sub_00652130(void) { return *(int*)((char*)this + 0); }

struct C_00652140 { int sub_00652140(void); };

// @baa 0x00652140
int C_00652140::sub_00652140(void) { return *(int*)((char*)this + 0); }

struct C_00652150 {
    int sub_00652150(int);
};

// @baa 0x00652150
int C_00652150::sub_00652150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00652160 { int sub_00652160(void); };

// @baa 0x00652160
int C_00652160::sub_00652160(void) { return *(int*)((char*)this + 0); }

struct C_00652170 { int sub_00652170(void); };

// @baa 0x00652170
int C_00652170::sub_00652170(void) { return *(int*)((char*)this + 0); }

struct C_00652180 { int sub_00652180(void); };

// @baa 0x00652180
int C_00652180::sub_00652180(void) { return *(int*)((char*)this + 4); }

struct C_006521c0 { int sub_006521c0(void); };

// @baa 0x006521c0
int C_006521c0::sub_006521c0(void) { return *(int*)((char*)this + 0); }

struct C_006521d0 { int sub_006521d0(void); };

// @baa 0x006521d0
int C_006521d0::sub_006521d0(void) { return *(int*)((char*)this + 4); }

struct C_00652210 { int sub_00652210(void); };

// @baa 0x00652210
int C_00652210::sub_00652210(void) { return *(int*)((char*)this + 0); }

struct C_00652220 {
    int sub_00652220(int);
};

// @baa 0x00652220
int C_00652220::sub_00652220(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00652240 { int sub_00652240(void); };

// @baa 0x00652240
int C_00652240::sub_00652240(void) { return *(int*)((char*)this + 0); }

struct C_006522c0 { int sub_006522c0(void); };

// @baa 0x006522c0
int C_006522c0::sub_006522c0(void) { return *(int*)((char*)this + 0); }

struct C_006522d0 { int sub_006522d0(void); };

// @baa 0x006522d0
int C_006522d0::sub_006522d0(void) { return *(int*)((char*)this + 0); }

struct C_006523a0 {
    int sub_006523a0(int);
};

// @baa 0x006523a0
int C_006523a0::sub_006523a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_006523c0 { int sub_006523c0(void); };

// @baa 0x006523c0
int C_006523c0::sub_006523c0(void) { return *(int*)((char*)this + 0); }

struct C_006523d0 { int sub_006523d0(void); };

// @baa 0x006523d0
int C_006523d0::sub_006523d0(void) { return *(int*)((char*)this + 0); }

struct C_006523e0 {
    int sub_006523e0(int);
};

// @baa 0x006523e0
int C_006523e0::sub_006523e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_006523f0 { int sub_006523f0(void); };

// @baa 0x006523f0
int C_006523f0::sub_006523f0(void) { return *(int*)((char*)this + 0); }

struct C_00652470 { C_00652470* sub_00652470(int a0); };

// @baa 0x00652470
C_00652470* C_00652470::sub_00652470(int a0) { return this; }

struct C_00652480 { int sub_00652480(void); };

// @baa 0x00652480
int C_00652480::sub_00652480(void) { return *(int*)((char*)this + 0); }

struct C_00652490 {
    int sub_00652490(int);
};

// @baa 0x00652490
int C_00652490::sub_00652490(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_006524a0 { int sub_006524a0(void); };

// @baa 0x006524a0
int C_006524a0::sub_006524a0(void) { return *(int*)((char*)this + 0); }

struct C_006524b0 { int sub_006524b0(void); };

// @baa 0x006524b0
int C_006524b0::sub_006524b0(void) { return *(int*)((char*)this + 0); }

struct C_006524c0 { int sub_006524c0(void); };

// @baa 0x006524c0
int C_006524c0::sub_006524c0(void) { return *(int*)((char*)this + 0); }

struct C_006524d0 { int sub_006524d0(void); };

// @baa 0x006524d0
int C_006524d0::sub_006524d0(void) { return *(int*)((char*)this + 0); }

struct C_006524e0 { C_006524e0* sub_006524e0(int a0); };

// @baa 0x006524e0
C_006524e0* C_006524e0::sub_006524e0(int a0) { return this; }

struct C_006524f0 { int sub_006524f0(void); };

// @baa 0x006524f0
int C_006524f0::sub_006524f0(void) { return *(int*)((char*)this + 0); }

struct C_00652500 { C_00652500* sub_00652500(int a0); };

// @baa 0x00652500
C_00652500* C_00652500::sub_00652500(int a0) { return this; }

struct C_00652510 { int sub_00652510(void); };

// @baa 0x00652510
int C_00652510::sub_00652510(void) { return *(int*)((char*)this + 0); }

struct C_00652520 { C_00652520* sub_00652520(int a0); };

// @baa 0x00652520
C_00652520* C_00652520::sub_00652520(int a0) { return this; }

struct C_00652530 { int sub_00652530(void); };

// @baa 0x00652530
int C_00652530::sub_00652530(void) { return *(int*)((char*)this + 0); }

struct C_006525b0 {
    undefined4 * sub_006525b0(undefined4);
    int sub_00afb400(int);
};

extern undefined4 g_01ebc510;
extern undefined * g_01ebc518;
// @baa 0x006525b0
undefined4 * C_006525b0::sub_006525b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_006525b0 *)(this))->sub_00afb400(param_2);
  *param_1 = (undefined4)(&g_01ebc518);
  param_1[5] = (undefined4)(&g_01ebc510);
  return param_1;
}

// @baa 0x006525d0
int sub_006525d0(void) { return 0; }

// @baa 0x006525e0
void __stdcall sub_006525e0(int a0) {  }

// @baa 0x00652610
bool sub_00652610(int param_1)
{
  return param_1 != 2;
}

// @baa 0x00652620
int sub_00652620(void) { return 1; }

// @baa 0x00652630
undefined4 sub_00652630(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00652650
bool sub_00652650(int param_1)
{
  return param_1 == 0;
}

// @baa 0x00652660
bool sub_00652660(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00652670
undefined4 sub_00652670(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x00652690
undefined4 sub_00652690(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006526b0
undefined4 sub_006526b0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x006526d0
undefined4 sub_006526d0(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x006526f0
undefined4 sub_006526f0(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00652710
undefined4 sub_00652710(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00652730
bool sub_00652730(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00652740
bool sub_00652740(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00652750
bool sub_00652750(int param_1)
{
  return param_1 != 3;
}

struct C_view {
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x006527f0
uint UMorphWeightSequence::sub_006527f0(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}

// @baa 0x006528a0
undefined4 UMorphWeightSequence::sub_006528a0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00652ad0
undefined4 UMorphWeightSequence::sub_00652ad0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

struct C_00652b00 {
    int sub_00652b00();
};

// @baa 0x00652b00
int C_00652b00::sub_00652b00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00652b10 { int a, b; C_00652b10(int, int); };

// @baa 0x00652b10
C_00652b10::C_00652b10(int x, int y) : a(x), b(y) {}

struct C_00652b30 {
    int sub_00652b30();
};

// @baa 0x00652b30
int C_00652b30::sub_00652b30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00652b40 { int a, b; C_00652b40(int, int); };

// @baa 0x00652b40
C_00652b40::C_00652b40(int x, int y) : a(x), b(y) {}

// @baa 0x00653140
void ULensFlare::sub_00653140(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x00653160
void ULensFlare::sub_00653160(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x00653270
void ULensFlare::sub_00653270(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x00653290
void ULensFlare::sub_00653290(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_006532b0 {
    DWORD d;
    DWORD sub_006532b0();
};

// @baa 0x006532b0
DWORD C_006532b0::sub_006532b0()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_006532c0 {
    DWORD d;
    DWORD sub_006532c0();
};

// @baa 0x006532c0
DWORD C_006532c0::sub_006532c0()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_006532d0 {
    DWORD d;
    DWORD sub_006532d0();
};

// @baa 0x006532d0
DWORD C_006532d0::sub_006532d0()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_006532e0 {
    char pad[2];
    WORD w;
    C_006532e0* sub_006532e0();
};

// @baa 0x006532e0
C_006532e0* C_006532e0::sub_006532e0()
{
    w = 0;
    return this;
}

int sub_00652b60(void);
// @baa 0x00653340
undefined4 ULensFlare::sub_00653340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652b60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652be0(void);
// @baa 0x00653360
undefined4 ULensFlare::sub_00653360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652be0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652c60(void);
// @baa 0x00653380
undefined4 ULensFlare::sub_00653380(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652c60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652d40(void);
// @baa 0x006533a0
undefined4 ULensFlare::sub_006533a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652dc0(void);
// @baa 0x006533c0
undefined4 ULensFlare::sub_006533c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652dc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652e40(void);
// @baa 0x006533e0
undefined4 ULensFlare::sub_006533e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652e40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652ec0(void);
// @baa 0x00653400
undefined4 ULensFlare::sub_00653400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652ec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652f40(void);
// @baa 0x00653420
undefined4 ULensFlare::sub_00653420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652f40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00652fc0(void);
// @baa 0x00653440
undefined4 ULensFlare::sub_00653440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00652fc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00653040(void);
// @baa 0x00653460
undefined4 ULensFlare::sub_00653460(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00653040();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006530c0(void);
// @baa 0x00653480
undefined4 ULensFlare::sub_00653480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006530c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00653530
void sub_00653530(void) {  }

struct C_00653610 { C_00653610* sub_00653610(void); };

// @baa 0x00653610
C_00653610* C_00653610::sub_00653610(void) { return this; }

struct C_00653620 { C_00653620* sub_00653620(void); };

// @baa 0x00653620
C_00653620* C_00653620::sub_00653620(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653630 { int sub_00653630(void); };

// @baa 0x00653630
int C_00653630::sub_00653630(void) { return *(int*)((char*)this + 0); }

struct C_00653640 { C_00653640* sub_00653640(void); };

// @baa 0x00653640
C_00653640* C_00653640::sub_00653640(void) { return this; }

struct C_00653650 { C_00653650* sub_00653650(void); };

// @baa 0x00653650
C_00653650* C_00653650::sub_00653650(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653660 { C_00653660* sub_00653660(void); };

// @baa 0x00653660
C_00653660* C_00653660::sub_00653660(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653670 { C_00653670* sub_00653670(void); };

// @baa 0x00653670
C_00653670* C_00653670::sub_00653670(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653680 { C_00653680* sub_00653680(void); };

// @baa 0x00653680
C_00653680* C_00653680::sub_00653680(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00653690
int sub_00653690(int a0) { return *(int*)a0; }

// @baa 0x006536a0
undefined4 sub_006536a0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_006536e0 {
    void sub_006536e0(int *);
};

// @baa 0x006536e0
void C_006536e0::sub_006536e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_006536f0 { int sub_006536f0(void); };

// @baa 0x006536f0
int C_006536f0::sub_006536f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00653730 { int sub_00653730(void); };

// @baa 0x00653730
int C_00653730::sub_00653730(void) { return *(int*)((char*)this + 0); }

struct C_00653740 { int sub_00653740(void); };

// @baa 0x00653740
int C_00653740::sub_00653740(void) { return *(int*)((char*)this + 0); }

struct C_00653750 { C_00653750* sub_00653750(void); };

// @baa 0x00653750
C_00653750* C_00653750::sub_00653750(void) { return this; }

struct C_00653760 { C_00653760* sub_00653760(void); };

// @baa 0x00653760
C_00653760* C_00653760::sub_00653760(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653770 { int sub_00653770(void); };

// @baa 0x00653770
int C_00653770::sub_00653770(void) { return *(int*)((char*)this + 0); }

struct C_00653780 { int sub_00653780(void); };

// @baa 0x00653780
int C_00653780::sub_00653780(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[292]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00653790(INT Index) const;
};

// @baa 0x00653790
const E* S::sub_00653790(INT Index) const
{
    return &Items(Index);
}

struct C_006537e0 { int sub_006537e0(void); };

// @baa 0x006537e0
int C_006537e0::sub_006537e0(void) { return *(int*)((char*)this + 0); }

struct C_006537f0 { int sub_006537f0(void); };

// @baa 0x006537f0
int C_006537f0::sub_006537f0(void) { return *(int*)((char*)this + 0); }

struct C_00653800 { int sub_00653800(void); };

// @baa 0x00653800
int C_00653800::sub_00653800(void) { return *(int*)((char*)this + 0); }

struct C_00653880 { int sub_00653880(void); };

// @baa 0x00653880
int C_00653880::sub_00653880(void) { return *(int*)((char*)this + 0); }

struct C_00653890 { int sub_00653890(void); };

// @baa 0x00653890
int C_00653890::sub_00653890(void) { return *(int*)((char*)this + 0); }

struct C_006538a0 { int sub_006538a0(void); };

// @baa 0x006538a0
int C_006538a0::sub_006538a0(void) { return *(int*)((char*)this + 0); }

struct C_006538b0 { int sub_006538b0(void); };

// @baa 0x006538b0
int C_006538b0::sub_006538b0(void) { return *(int*)((char*)this + 0); }

struct C_006538c0 { int sub_006538c0(void); };

// @baa 0x006538c0
int C_006538c0::sub_006538c0(void) { return *(int*)((char*)this + 0); }

struct C_006538d0 { int sub_006538d0(void); };

// @baa 0x006538d0
int C_006538d0::sub_006538d0(void) { return *(int*)((char*)this + 0); }

struct C_006538e0 { int sub_006538e0(void); };

// @baa 0x006538e0
int C_006538e0::sub_006538e0(void) { return *(int*)((char*)this + 0); }

struct C_006538f0 { int sub_006538f0(void); };

// @baa 0x006538f0
int C_006538f0::sub_006538f0(void) { return *(int*)((char*)this + 0); }

struct C_00653900 { int sub_00653900(void); };

// @baa 0x00653900
int C_00653900::sub_00653900(void) { return *(int*)((char*)this + 0); }

struct C_00653910 { int sub_00653910(void); };

// @baa 0x00653910
int C_00653910::sub_00653910(void) { return *(int*)((char*)this + 0); }

struct C_00653920 { int sub_00653920(void); };

// @baa 0x00653920
int C_00653920::sub_00653920(void) { return *(int*)((char*)this + 0); }

struct C_006539a0 { int sub_006539a0(void); };

// @baa 0x006539a0
int C_006539a0::sub_006539a0(void) { return *(int*)((char*)this + 0); }

struct C_006539b0 { int sub_006539b0(void); };

// @baa 0x006539b0
int C_006539b0::sub_006539b0(void) { return *(int*)((char*)this + 0); }

struct C_006539c0 { int sub_006539c0(void); };

// @baa 0x006539c0
int C_006539c0::sub_006539c0(void) { return *(int*)((char*)this + 0); }

struct C_006539d0 { int sub_006539d0(void); };

// @baa 0x006539d0
int C_006539d0::sub_006539d0(void) { return *(int*)((char*)this + 0); }

struct C_006539e0 { int sub_006539e0(void); };

// @baa 0x006539e0
int C_006539e0::sub_006539e0(void) { return *(int*)((char*)this + 0); }

struct E_006539f0 { BYTE Bytes[64]; };

struct S_006539f0 {
    TArray<E_006539f0> Items; // 0x00
    const E_006539f0* sub_006539f0(INT Index) const;
};

// @baa 0x006539f0
const E_006539f0* S_006539f0::sub_006539f0(INT Index) const
{
    return &Items(Index);
}

struct C_00653ab0 { int sub_00653ab0(void); };

// @baa 0x00653ab0
int C_00653ab0::sub_00653ab0(void) { return *(int*)((char*)this + 0); }

struct C_00653ac0 { int sub_00653ac0(void); };

// @baa 0x00653ac0
int C_00653ac0::sub_00653ac0(void) { return *(int*)((char*)this + 4); }

struct E_00653ad0 { BYTE Bytes[24]; };

struct S_00653ad0 {
    TArray<E_00653ad0> Items; // 0x00
    const E_00653ad0* sub_00653ad0(INT Index) const;
};

// @baa 0x00653ad0
const E_00653ad0* S_00653ad0::sub_00653ad0(INT Index) const
{
    return &Items(Index);
}

struct C_00653b20 { int sub_00653b20(void); };

// @baa 0x00653b20
int C_00653b20::sub_00653b20(void) { return *(int*)((char*)this + 0); }

struct E_00653b30 { BYTE Bytes[64]; };

struct S_00653b30 {
    TArray<E_00653b30> Items; // 0x00
    const E_00653b30* sub_00653b30(INT Index) const;
};

// @baa 0x00653b30
const E_00653b30* S_00653b30::sub_00653b30(INT Index) const
{
    return &Items(Index);
}

struct C_00653bf0 { int sub_00653bf0(void); };

// @baa 0x00653bf0
int C_00653bf0::sub_00653bf0(void) { return *(int*)((char*)this + 0); }

struct C_00653c00 { int sub_00653c00(void); };

// @baa 0x00653c00
int C_00653c00::sub_00653c00(void) { return *(int*)((char*)this + 0); }

struct C_00653c10 { int sub_00653c10(void); };

// @baa 0x00653c10
int C_00653c10::sub_00653c10(void) { return *(int*)((char*)this + 0); }

struct C_00653c20 { int sub_00653c20(void); };

// @baa 0x00653c20
int C_00653c20::sub_00653c20(void) { return *(int*)((char*)this + 0); }

struct C_00653c30 { int sub_00653c30(void); };

// @baa 0x00653c30
int C_00653c30::sub_00653c30(void) { return *(int*)((char*)this + 0); }

struct C_00653c40 { int sub_00653c40(void); };

// @baa 0x00653c40
int C_00653c40::sub_00653c40(void) { return *(int*)((char*)this + 0); }

struct C_00653c50 { int sub_00653c50(void); };

// @baa 0x00653c50
int C_00653c50::sub_00653c50(void) { return *(int*)((char*)this + 0); }

// @baa 0x00653c60
int sub_00653c60(int a0) { return *(int*)a0; }

int sub_0053de70(...);
// @baa 0x00653c70
undefined4 sub_00653c70(int * param_1, int * param_2)
{
  int iVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    iVar1 = sub_0053de70(param_1 + 3,param_2 + 3,0x10);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

struct C_00653cd0 {
    void sub_00653cd0(int *);
};

// @baa 0x00653cd0
void C_00653cd0::sub_00653cd0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x1c);
  return;
}

struct C_00653d10 { int sub_00653d10(void); };

// @baa 0x00653d10
int C_00653d10::sub_00653d10(void) { return *(int*)((char*)this + 0); }

struct C_00653d20 { int sub_00653d20(void); };

// @baa 0x00653d20
int C_00653d20::sub_00653d20(void) { return *(int*)((char*)this + 0); }

struct C_00653d30 { int sub_00653d30(void); };

// @baa 0x00653d30
int C_00653d30::sub_00653d30(void) { return *(int*)((char*)this + 0); }

struct C_00653d40 { C_00653d40* sub_00653d40(void); };

// @baa 0x00653d40
C_00653d40* C_00653d40::sub_00653d40(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653d50 { C_00653d50* sub_00653d50(void); };

// @baa 0x00653d50
C_00653d50* C_00653d50::sub_00653d50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653d60 { int sub_00653d60(void); };

// @baa 0x00653d60
int C_00653d60::sub_00653d60(void) { return *(int*)((char*)this + 0); }

struct C_00653d70 { int sub_00653d70(void); };

// @baa 0x00653d70
int C_00653d70::sub_00653d70(void) { return *(int*)((char*)this + 0); }

struct C_00653d80 { int sub_00653d80(void); };

// @baa 0x00653d80
int C_00653d80::sub_00653d80(void) { return *(int*)((char*)this + 0); }

struct C_00653d90 { int sub_00653d90(void); };

// @baa 0x00653d90
int C_00653d90::sub_00653d90(void) { return *(int*)((char*)this + 0); }

struct C_00653da0 { C_00653da0* sub_00653da0(void); };

// @baa 0x00653da0
C_00653da0* C_00653da0::sub_00653da0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00653db0 { int sub_00653db0(void); };

// @baa 0x00653db0
int C_00653db0::sub_00653db0(void) { return *(int*)((char*)this + 0); }

struct C_00653dc0 { int sub_00653dc0(void); };

// @baa 0x00653dc0
int C_00653dc0::sub_00653dc0(void) { return *(int*)((char*)this + 0); }

struct C_00653f80 { int sub_00653f80(void); };

// @baa 0x00653f80
int C_00653f80::sub_00653f80(void) { return *(int*)((char*)this + 0); }

struct C_00653f90 { int sub_00653f90(void); };

// @baa 0x00653f90
int C_00653f90::sub_00653f90(void) { return *(int*)((char*)this + 0); }

struct C_00653fa0 { int sub_00653fa0(void); };

// @baa 0x00653fa0
int C_00653fa0::sub_00653fa0(void) { return *(int*)((char*)this + 0); }

struct C_00653fb0 { int sub_00653fb0(void); };

// @baa 0x00653fb0
int C_00653fb0::sub_00653fb0(void) { return *(int*)((char*)this + 0); }

struct C_00653fc0 { int sub_00653fc0(void); };

// @baa 0x00653fc0
int C_00653fc0::sub_00653fc0(void) { return *(int*)((char*)this + 0); }

struct C_00653fd0 { int sub_00653fd0(void); };

// @baa 0x00653fd0
int C_00653fd0::sub_00653fd0(void) { return *(int*)((char*)this + 0); }

struct C_00653fe0 { int sub_00653fe0(void); };

// @baa 0x00653fe0
int C_00653fe0::sub_00653fe0(void) { return *(int*)((char*)this + 0); }

struct C_00653ff0 { int sub_00653ff0(void); };

// @baa 0x00653ff0
int C_00653ff0::sub_00653ff0(void) { return *(int*)((char*)this + 0); }

struct C_00654000 { int sub_00654000(void); };

// @baa 0x00654000
int C_00654000::sub_00654000(void) { return *(int*)((char*)this + 0); }

struct C_00654010 { int sub_00654010(void); };

// @baa 0x00654010
int C_00654010::sub_00654010(void) { return *(int*)((char*)this + 0); }

struct C_00654020 { int a, b, c; C_00654020(); };

// @baa 0x00654020
C_00654020::C_00654020() : a(0), b(0), c(0) {}

struct C_00654050 { int sub_00654050(void); };

// @baa 0x00654050
int C_00654050::sub_00654050(void) { return *(int*)((char*)this + 0); }

struct C_00654060 { int sub_00654060(void); };

// @baa 0x00654060
int C_00654060::sub_00654060(void) { return *(int*)((char*)this + 0); }

struct C_00654190 { int sub_00654190(void); };

// @baa 0x00654190
int C_00654190::sub_00654190(void) { return *(int*)((char*)this + 0); }

struct C_006541a0 { int sub_006541a0(void); };

// @baa 0x006541a0
int C_006541a0::sub_006541a0(void) { return *(int*)((char*)this + 0); }

void sub_00823610();
// @baa 0x006541b0
void sub_006541b0(void) { sub_00823610(); }

struct C_006541c0 { int sub_006541c0(void); };

// @baa 0x006541c0
int C_006541c0::sub_006541c0(void) { return *(int*)((char*)this + 0); }

struct C_006541d0 { int sub_006541d0(void); };

// @baa 0x006541d0
int C_006541d0::sub_006541d0(void) { return *(int*)((char*)this + 0); }

struct C_006541e0 { int sub_006541e0(void); };

// @baa 0x006541e0
int C_006541e0::sub_006541e0(void) { return *(int*)((char*)this + 0); }

struct C_006541f0 { int sub_006541f0(void); };

// @baa 0x006541f0
int C_006541f0::sub_006541f0(void) { return *(int*)((char*)this + 0); }

struct C_00654200 { int sub_00654200(void); };

// @baa 0x00654200
int C_00654200::sub_00654200(void) { return *(int*)((char*)this + 0); }

struct C_00654210 { int sub_00654210(void); };

// @baa 0x00654210
int C_00654210::sub_00654210(void) { return *(int*)((char*)this + 0); }

struct C_00654220 { int sub_00654220(void); };

// @baa 0x00654220
int C_00654220::sub_00654220(void) { return *(int*)((char*)this + 0); }

struct C_00654230 { int sub_00654230(void); };

// @baa 0x00654230
int C_00654230::sub_00654230(void) { return *(int*)((char*)this + 0); }

struct C_00654240 { int sub_00654240(void); };

// @baa 0x00654240
int C_00654240::sub_00654240(void) { return *(int*)((char*)this + 0); }

struct C_00654250 { int sub_00654250(void); };

// @baa 0x00654250
int C_00654250::sub_00654250(void) { return *(int*)((char*)this + 0); }

struct C_00654260 { int sub_00654260(void); };

// @baa 0x00654260
int C_00654260::sub_00654260(void) { return *(int*)((char*)this + 0); }

struct C_00654270 { int sub_00654270(void); };

// @baa 0x00654270
int C_00654270::sub_00654270(void) { return *(int*)((char*)this + 0); }

struct C_00654280 { int sub_00654280(void); };

// @baa 0x00654280
int C_00654280::sub_00654280(void) { return *(int*)((char*)this + 0); }

struct C_00654290 { int sub_00654290(void); };

// @baa 0x00654290
int C_00654290::sub_00654290(void) { return *(int*)((char*)this + 0); }

struct C_006542a0 { int sub_006542a0(void); };

// @baa 0x006542a0
int C_006542a0::sub_006542a0(void) { return *(int*)((char*)this + 0); }

struct C_006542b0 { int sub_006542b0(void); };

// @baa 0x006542b0
int C_006542b0::sub_006542b0(void) { return *(int*)((char*)this + 0); }

struct C_006542c0 { int sub_006542c0(void); };

// @baa 0x006542c0
int C_006542c0::sub_006542c0(void) { return *(int*)((char*)this + 0); }

struct C_006542d0 { int sub_006542d0(void); };

// @baa 0x006542d0
int C_006542d0::sub_006542d0(void) { return *(int*)((char*)this + 0); }

struct C_006542e0 { int sub_006542e0(void); };

// @baa 0x006542e0
int C_006542e0::sub_006542e0(void) { return *(int*)((char*)this + 0); }

struct C_006542f0 { int sub_006542f0(void); };

// @baa 0x006542f0
int C_006542f0::sub_006542f0(void) { return *(int*)((char*)this + 0); }

struct C_00654300 { int sub_00654300(void); };

// @baa 0x00654300
int C_00654300::sub_00654300(void) { return *(int*)((char*)this + 0); }

struct C_00654310 { C_00654310* sub_00654310(void); };

// @baa 0x00654310
C_00654310* C_00654310::sub_00654310(void) { return this; }

struct C_00654320 { int sub_00654320(void); };

// @baa 0x00654320
int C_00654320::sub_00654320(void) { return *(int*)((char*)this + 0); }

struct C_00654330 { int sub_00654330(void); };

// @baa 0x00654330
int C_00654330::sub_00654330(void) { return *(int*)((char*)this + 0); }

struct C_00654340 { int sub_00654340(void); };

// @baa 0x00654340
int C_00654340::sub_00654340(void) { return *(int*)((char*)this + 0); }

struct C_00654350 { int sub_00654350(void); };

// @baa 0x00654350
int C_00654350::sub_00654350(void) { return *(int*)((char*)this + 0); }

struct C_00654360 { int sub_00654360(void); };

// @baa 0x00654360
int C_00654360::sub_00654360(void) { return *(int*)((char*)this + 0); }

struct C_00654410 {
    void sub_00654410();
};

// @baa 0x00654410
void C_00654410::sub_00654410(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_00654430 { int sub_00654430(void); };

// @baa 0x00654430
int C_00654430::sub_00654430(void) { return *(int*)((char*)this + 0); }

struct C_00654440 { C_00654440* sub_00654440(void); };

// @baa 0x00654440
C_00654440* C_00654440::sub_00654440(void) { return this; }

struct C_00654450 { int sub_00654450(void); };

// @baa 0x00654450
int C_00654450::sub_00654450(void) { return *(int*)((char*)this + 0); }

struct C_00654460 { C_00654460* sub_00654460(void); };

// @baa 0x00654460
C_00654460* C_00654460::sub_00654460(void) { return this; }

struct C_00654470 { int sub_00654470(void); };

// @baa 0x00654470
int C_00654470::sub_00654470(void) { return *(int*)((char*)this + 0); }

struct C_00654480 { int sub_00654480(void); };

// @baa 0x00654480
int C_00654480::sub_00654480(void) { return *(int*)((char*)this + 0); }

struct C_00654490 { int sub_00654490(void); };

// @baa 0x00654490
int C_00654490::sub_00654490(void) { return *(int*)((char*)this + 0); }

struct C_006544a0 { int sub_006544a0(void); };

// @baa 0x006544a0
int C_006544a0::sub_006544a0(void) { return *(int*)((char*)this + 20); }

struct C_006544b0 { int sub_006544b0(void); };

// @baa 0x006544b0
int C_006544b0::sub_006544b0(void) { return *(int*)((char*)this + 20); }

struct C_006544c0 { int sub_006544c0(void); };

// @baa 0x006544c0
int C_006544c0::sub_006544c0(void) { return *(int*)((char*)this + 20); }

struct C_006544d0 { int sub_006544d0(void); };

// @baa 0x006544d0
int C_006544d0::sub_006544d0(void) { return *(int*)((char*)this + 20); }

struct C_006544e0 { int sub_006544e0(void); };

// @baa 0x006544e0
int C_006544e0::sub_006544e0(void) { return *(int*)((char*)this + 20); }

struct C_006544f0 { int sub_006544f0(void); };

// @baa 0x006544f0
int C_006544f0::sub_006544f0(void) { return *(int*)((char*)this + 20); }

struct C_00654500 { int sub_00654500(void); };

// @baa 0x00654500
int C_00654500::sub_00654500(void) { return *(int*)((char*)this + 20); }

struct C_00654510 { int sub_00654510(void); };

// @baa 0x00654510
int C_00654510::sub_00654510(void) { return *(int*)((char*)this + 20); }

struct C_00654520 { int sub_00654520(void); };

// @baa 0x00654520
int C_00654520::sub_00654520(void) { return *(int*)((char*)this + 20); }

struct C_00654530 { int sub_00654530(void); };

// @baa 0x00654530
int C_00654530::sub_00654530(void) { return *(int*)((char*)this + 20); }

struct C_00654540 { int sub_00654540(void); };

// @baa 0x00654540
int C_00654540::sub_00654540(void) { return *(int*)((char*)this + 20); }

struct C_00654550 {
    int sub_00654550(int);
};

// @baa 0x00654550
int C_00654550::sub_00654550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00654560 {
    int sub_00654560(int);
};

// @baa 0x00654560
int C_00654560::sub_00654560(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00654570 {
    int sub_00654570(int);
};

// @baa 0x00654570
int C_00654570::sub_00654570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00654580 {
    int sub_00654580(int);
};

// @baa 0x00654580
int C_00654580::sub_00654580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_006545a0 {
    int sub_006545a0(int);
};

// @baa 0x006545a0
int C_006545a0::sub_006545a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_006545b0 { int sub_006545b0(void); };

// @baa 0x006545b0
int C_006545b0::sub_006545b0(void) { return *(int*)((char*)this + 0); }

struct C_006545c0 { int sub_006545c0(void); };

// @baa 0x006545c0
int C_006545c0::sub_006545c0(void) { return *(int*)((char*)this + 0); }

struct C_006545d0 { int sub_006545d0(void); };

// @baa 0x006545d0
int C_006545d0::sub_006545d0(void) { return *(int*)((char*)this + 0); }

struct C_006545e0 { int sub_006545e0(void); };

// @baa 0x006545e0
int C_006545e0::sub_006545e0(void) { return *(int*)((char*)this + 0); }

struct C_006545f0 { int sub_006545f0(void); };

// @baa 0x006545f0
int C_006545f0::sub_006545f0(void) { return *(int*)((char*)this + 0); }

struct C_00654600 { int sub_00654600(void); };

// @baa 0x00654600
int C_00654600::sub_00654600(void) { return *(int*)((char*)this + 0); }

struct C_00654610 { int sub_00654610(void); };

// @baa 0x00654610
int C_00654610::sub_00654610(void) { return *(int*)((char*)this + 0); }

struct C_00654620 { C_00654620* sub_00654620(void); };

// @baa 0x00654620
C_00654620* C_00654620::sub_00654620(void) { return this; }

struct C_00654630 { int sub_00654630(void); };

// @baa 0x00654630
int C_00654630::sub_00654630(void) { return *(int*)((char*)this + 0); }

struct C_00654640 { int sub_00654640(void); };

// @baa 0x00654640
int C_00654640::sub_00654640(void) { return *(int*)((char*)this + 0); }

struct C_00654650 { int sub_00654650(void); };

// @baa 0x00654650
int C_00654650::sub_00654650(void) { return *(int*)((char*)this + 0); }

struct C_00654660 { int sub_00654660(void); };

// @baa 0x00654660
int C_00654660::sub_00654660(void) { return *(int*)((char*)this + 0); }

struct C_00654670 { int sub_00654670(void); };

// @baa 0x00654670
int C_00654670::sub_00654670(void) { return *(int*)((char*)this + 0); }

struct C_00654680 { int sub_00654680(void); };

// @baa 0x00654680
int C_00654680::sub_00654680(void) { return *(int*)((char*)this + 0); }

struct C_00654690 { int sub_00654690(void); };

// @baa 0x00654690
int C_00654690::sub_00654690(void) { return *(int*)((char*)this + 0); }

struct C_006546a0 { int sub_006546a0(void); };

// @baa 0x006546a0
int C_006546a0::sub_006546a0(void) { return *(int*)((char*)this + 0); }

struct C_006546d0 { int sub_006546d0(void); };

// @baa 0x006546d0
int C_006546d0::sub_006546d0(void) { return *(int*)((char*)this + 0); }

struct C_00654700 { int sub_00654700(void); };

// @baa 0x00654700
int C_00654700::sub_00654700(void) { return *(int*)((char*)this + 0); }

struct C_00654730 { int sub_00654730(void); };

// @baa 0x00654730
int C_00654730::sub_00654730(void) { return *(int*)((char*)this + 0); }

struct C_00654c90 {
    void sub_00654c90(int);
};

// @baa 0x00654c90
void C_00654c90::sub_00654c90(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

// @baa 0x00654e20
uint sub_00654e20(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00654e40
uint sub_00654e40(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00654e60
uint sub_00654e60(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00654e80
uint sub_00654e80(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x00654ea0
uint sub_00654ea0(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct S_00654f30 {
    TArray<WORD> Items; // 0x00
    const WORD* sub_00654f30(INT Index) const;
};

// @baa 0x00654f30
const WORD* S_00654f30::sub_00654f30(INT Index) const
{
    return &Items(Index);
}

struct C_00654fa0 { int sub_00654fa0(void); };

// @baa 0x00654fa0
int C_00654fa0::sub_00654fa0(void) { return *(int*)((char*)this + 0); }

struct S_00654fb0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00654fb0(INT Index) const;
};

// @baa 0x00654fb0
const DWORD* S_00654fb0::sub_00654fb0(INT Index) const
{
    return &Items(Index);
}

struct S_00655000 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00655000(INT Index) const;
};

// @baa 0x00655000
const DWORD* S_00655000::sub_00655000(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00655090
int UObject::sub_00655090(void) { return *(int*)((char*)this + 4); }

struct S_006550a0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006550a0(INT Index) const;
};

// @baa 0x006550a0
const DWORD* S_006550a0::sub_006550a0(INT Index) const
{
    return &Items(Index);
}

struct T_00655200 { int x; };

// @baa 0x00655200
template const T_00655200& TIndirectArray<T_00655200>::operator()(INT) const;

struct C_00655250 { int sub_00655250(void); };

// @baa 0x00655250
int C_00655250::sub_00655250(void) { return *(int*)((char*)this + 4); }

struct C_00655680 {
    int sub_00655680(int);
};

// @baa 0x00655680
int C_00655680::sub_00655680(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 8;
}

struct C_00655690 { int sub_00655690(void); };

// @baa 0x00655690
int C_00655690::sub_00655690(void) { return *(int*)((char*)this + 2048); }

struct C_00655750 { int sub_00655750(void); };

// @baa 0x00655750
int C_00655750::sub_00655750(void) { return *(int*)((char*)this + 0); }

struct C_00655760 { int sub_00655760(void); };

// @baa 0x00655760
int C_00655760::sub_00655760(void) { return *(int*)((char*)this + 0); }

// @baa 0x00655770
int sub_00655770(int a0) { return *(int*)a0; }

// @baa 0x00655780
bool sub_00655780(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00655790
int sub_00655790(int a0) { return a0; }

struct C_006557a0 {
    int sub_006557a0(int);
};

// @baa 0x006557a0
int C_006557a0::sub_006557a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006557b0 { int a, b; C_006557b0(int, int); };

// @baa 0x006557b0
C_006557b0::C_006557b0(int x, int y) : a(x), b(y) {}

// @baa 0x006559d0
uint sub_006559d0(int param_1, int param_2)
{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

struct FOwner;
struct UTarget {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void Apply(FOwner* Owner, int Arg1, int Arg3);
};

struct FOwner {
    UINT Unk00;  // 0x00
    UINT Unk04;  // 0x04
    UINT Unk08;  // 0x08
    UINT Unk0C;  // 0x0C
    UINT Unk10;  // 0x10
    UINT Unk14;  // 0x14
    UINT Unk18;  // 0x18
    UINT Unk1C;  // 0x1C
    UINT Unk20;  // 0x20
    UINT Unk24;  // 0x24
    UINT Unk28;  // 0x28
    UINT Unk2C;  // 0x2C
    UINT Unk30;  // 0x30
    UINT Unk34;  // 0x34
    UINT Unk38;  // 0x38
    UINT Unk3C;  // 0x3C
    UINT Unk40;  // 0x40
    UINT Unk44;  // 0x44
    UINT Unk48;  // 0x48
    UTarget* Target;  // 0x4C

    void sub_006559f0(int Arg1, int Arg2, int Arg3);
};

// @baa 0x006559f0
void FOwner::sub_006559f0(int Arg1, int Arg2, int Arg3)
{
    UTarget* T = Target;
    if (T) {
        T->Apply(this, Arg1, Arg3);
    }
}

extern char g_026b0044[];
struct C_00655a90 { void sub_006fa300(int, int); void sub_00655a90(int); };

// @baa 0x00655a90
void C_00655a90::sub_00655a90(int a) { sub_006fa300((int)g_026b0044, a); }

extern char g_026b062c[];
struct C_00655ab0 { void sub_006fa300(int, int); void sub_00655ab0(int); };

// @baa 0x00655ab0
void C_00655ab0::sub_00655ab0(int a) { sub_006fa300((int)g_026b062c, a); }

struct A_00655ad0 { virtual void sub_0065d3c0(); char pad[16]; };

struct B_00655ad0 { virtual void sub_0065d3c0(); };

struct C_00655ad0 : A_00655ad0, B_00655ad0 { virtual void sub_0065d3c0(); C_00655ad0(); };

C_00655ad0::C_00655ad0() {}

// @baa 0x00655ad0
void C_00655ad0::sub_0065d3c0() {}

struct A_00655ae0 { virtual void sub_00657c30(); char pad[16]; };

struct B_00655ae0 { virtual void sub_00657c30(); };

struct C_00655ae0 : A_00655ae0, B_00655ae0 { virtual void sub_00657c30(); C_00655ae0(); };

C_00655ae0::C_00655ae0() {}

// @baa 0x00655ae0
void C_00655ae0::sub_00657c30() {}

struct A_00655af0 { virtual void sub_0065d310(); char pad[16]; };

struct B_00655af0 { virtual void sub_0065d310(); };

struct C_00655af0 : A_00655af0, B_00655af0 { virtual void sub_0065d310(); C_00655af0(); };

C_00655af0::C_00655af0() {}

// @baa 0x00655af0
void C_00655af0::sub_0065d310() {}

struct A_00655b00 { virtual void sub_0065d420(); char pad[16]; };

struct B_00655b00 { virtual void sub_0065d420(); };

struct C_00655b00 : A_00655b00, B_00655b00 { virtual void sub_0065d420(); C_00655b00(); };

C_00655b00::C_00655b00() {}

// @baa 0x00655b00
void C_00655b00::sub_0065d420() {}

struct A_00655b10 { virtual void sub_00651a30(); char pad[16]; };

struct B_00655b10 { virtual void sub_00651a30(); };

struct C_00655b10 : A_00655b10, B_00655b10 { virtual void sub_00651a30(); C_00655b10(); };

C_00655b10::C_00655b10() {}

// @baa 0x00655b10
void C_00655b10::sub_00651a30() {}

struct A_00655b20 { virtual void sub_00657cf0(); char pad[16]; };

struct B_00655b20 { virtual void sub_00657cf0(); };

struct C_00655b20 : A_00655b20, B_00655b20 { virtual void sub_00657cf0(); C_00655b20(); };

C_00655b20::C_00655b20() {}

// @baa 0x00655b20
void C_00655b20::sub_00657cf0() {}

struct A_00655b30 { virtual void sub_00657c10(); char pad[16]; };

struct B_00655b30 { virtual void sub_00657c10(); };

struct C_00655b30 : A_00655b30, B_00655b30 { virtual void sub_00657c10(); C_00655b30(); };

C_00655b30::C_00655b30() {}

// @baa 0x00655b30
void C_00655b30::sub_00657c10() {}

struct A_00655b40 { virtual void sub_00657d80(); char pad[16]; };

struct B_00655b40 { virtual void sub_00657d80(); };

struct C_00655b40 : A_00655b40, B_00655b40 { virtual void sub_00657d80(); C_00655b40(); };

C_00655b40::C_00655b40() {}

// @baa 0x00655b40
void C_00655b40::sub_00657d80() {}

struct A_00655b50 { virtual void sub_006590e0(); char pad[16]; };

struct B_00655b50 { virtual void sub_006590e0(); };

struct C_00655b50 : A_00655b50, B_00655b50 { virtual void sub_006590e0(); C_00655b50(); };

C_00655b50::C_00655b50() {}

// @baa 0x00655b50
void C_00655b50::sub_006590e0() {}

struct A_00655b60 { virtual void sub_0065d400(); char pad[16]; };

struct B_00655b60 { virtual void sub_0065d400(); };

struct C_00655b60 : A_00655b60, B_00655b60 { virtual void sub_0065d400(); C_00655b60(); };

C_00655b60::C_00655b60() {}

// @baa 0x00655b60
void C_00655b60::sub_0065d400() {}

struct A_00655b70 { virtual void sub_00659050(); char pad[16]; };

struct B_00655b70 { virtual void sub_00659050(); };

struct C_00655b70 : A_00655b70, B_00655b70 { virtual void sub_00659050(); C_00655b70(); };

C_00655b70::C_00655b70() {}

// @baa 0x00655b70
void C_00655b70::sub_00659050() {}

struct A_00655b80 { virtual void sub_0065d3e0(); char pad[16]; };

struct B_00655b80 { virtual void sub_0065d3e0(); };

struct C_00655b80 : A_00655b80, B_00655b80 { virtual void sub_0065d3e0(); C_00655b80(); };

C_00655b80::C_00655b80() {}

// @baa 0x00655b80
void C_00655b80::sub_0065d3e0() {}

struct A_00655b90 { virtual void sub_006566c0(); char pad[16]; };

struct B_00655b90 { virtual void sub_006566c0(); };

struct C_00655b90 : A_00655b90, B_00655b90 { virtual void sub_006566c0(); C_00655b90(); };

C_00655b90::C_00655b90() {}

// @baa 0x00655b90
void C_00655b90::sub_006566c0() {}

void sub_0064a760();
// @baa 0x006561c0
void sub_006561c0(void) { sub_0064a760(); }

struct C_006562b0 { int sub_006562b0(void); };

// @baa 0x006562b0
int C_006562b0::sub_006562b0(void) { return *(int*)((char*)this + 4); }

extern char g_01ebc804[];
// @baa 0x006562c0
int sub_006562c0(void) { return (int)g_01ebc804; }

extern char g_01ebb554[];
struct C_006562d0 { void sub_006562d0(void); };

// @baa 0x006562d0
void C_006562d0::sub_006562d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_006562e0 {
    undefined4 * sub_006562e0(byte);
};

// @baa 0x006562e0
undefined4 * C_006562e0::sub_006562e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00656320
void sub_00656320(void) {  }

int sub_0071f8a0(void);
// @baa 0x00656330
undefined4 ULensFlare::sub_00656330(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071f8a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006563a0
int sub_006563a0(void) { return 0; }

// @baa 0x006563b0
int sub_006563b0(void) { return 0; }

struct C_006563c0{
void sub_006563c0();
};

// @baa 0x006563c0
void C_006563c0::sub_006563c0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x22c))((int)(iVar1));
}
return;
}

int sub_006563e0(void);
// @baa 0x00656470
undefined4 UTextureCube::sub_00656470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006563e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656490(void);
// @baa 0x00656500
undefined4 ULensFlare::sub_00656500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656520(void);
// @baa 0x006565d0
undefined4 UTexture2DComposite::sub_006565d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00656770
int sub_00656770(void) { return 0; }

// @baa 0x00656780
int sub_00656780(void) { return 0; }

int sub_00656790(void);
// @baa 0x00656880
undefined4 ULensFlare::sub_00656880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006568a0
void sub_006568a0(undefined4 * param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_006568f0 {
    int sub_006568f0();
};

int sub_009d4650(void);
// @baa 0x006568f0
int C_006568f0::sub_006568f0(void)
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
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return param_1;
}

// @baa 0x00656f10
void sub_00656f10(int*param_1,int*param_2,int param_3)
{
int iVar1;
DWORD iVar2;

iVar1=*param_2;
iVar2=(iVar1+-1+param_3&~(param_3-1U))-iVar1;
(*(int(__stdcall**)(int,int))(*param_1+4))((int)(iVar1),(int)(iVar2));
*param_2=*param_2+iVar2;
return;
}

int sub_00654a90(...);
int sub_00716270(void);
// @baa 0x00657cc0
void UObject::sub_00657cc0(undefined4 param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00716270();
  sub_00654a90(*puVar1,param_1 + 0x4c,param_2,0);
  return;
}

struct C_00657da0 { int sub_00657da0(void); };

// @baa 0x00657da0
int C_00657da0::sub_00657da0(void) { return *(int*)((char*)this + 4); }

struct C_00657de0 { int sub_00657de0(void); };

// @baa 0x00657de0
int C_00657de0::sub_00657de0(void) { return *(int*)((char*)this + 12); }

struct C_00657df0 { int sub_00657df0(void); };

// @baa 0x00657df0
int C_00657df0::sub_00657df0(void) { return *(int*)((char*)this + 24); }

struct C_006584c0 {
    undefined4 * sub_006584c0(byte);
};

int sub_00702e60(void);
extern undefined * g_01ebb568;
// @baa 0x006584c0
undefined4 * C_006584c0::sub_006584c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb568);
  sub_00702e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00658f80 {
    undefined4 * sub_00658f80(undefined4);
    int sub_00651760(int);
};

extern undefined4 g_01ebc994;
extern undefined * g_01ebc99c;
// @baa 0x00658f80
undefined4 * C_00658f80::sub_00658f80(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00658f80 *)(this))->sub_00651760(param_2);
  *param_1 = (undefined4)(&g_01ebc99c);
  param_1[5] = (undefined4)(&g_01ebc994);
  return param_1;
}

struct A_00658fb0 { virtual void sub_00658fc0(); char pad[16]; };

struct B_00658fb0 { virtual void sub_00658fc0(); };

struct C_00658fb0 : A_00658fb0, B_00658fb0 { virtual void sub_00658fc0(); C_00658fb0(); };

C_00658fb0::C_00658fb0() {}

// @baa 0x00658fb0
void C_00658fb0::sub_00658fc0() {}

struct C_00659270 {
    undefined4 * sub_00659270(byte);
};

extern undefined * g_01ebbe1c;
// @baa 0x00659270
undefined4 * C_00659270::sub_00659270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebbe1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00659290 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659290(INT Index);
};

// @baa 0x00659290
DWORD* S_00659290::sub_00659290(INT Index)
{
    return &Items(Index);
}

struct E_006592e0 { BYTE Bytes[12]; };

struct S_006592e0 {
    TArray<E_006592e0> Items; // 0x00
    E_006592e0* sub_006592e0(INT Index);
};

// @baa 0x006592e0
E_006592e0* S_006592e0::sub_006592e0(INT Index)
{
    return &Items(Index);
}

struct E_00659330 { BYTE Bytes[12]; };

struct S_00659330 {
    TArray<E_00659330> Items; // 0x00
    const E_00659330* sub_00659330(INT Index) const;
};

// @baa 0x00659330
const E_00659330* S_00659330::sub_00659330(INT Index) const
{
    return &Items(Index);
}

struct E_00659380 { BYTE Bytes[16]; };

struct S_00659380 {
    TArray<E_00659380> Items; // 0x00
    E_00659380* sub_00659380(INT Index);
};

// @baa 0x00659380
E_00659380* S_00659380::sub_00659380(INT Index)
{
    return &Items(Index);
}

struct E_006593d0 { BYTE Bytes[16]; };

struct S_006593d0 {
    TArray<E_006593d0> Items; // 0x00
    const E_006593d0* sub_006593d0(INT Index) const;
};

// @baa 0x006593d0
const E_006593d0* S_006593d0::sub_006593d0(INT Index) const
{
    return &Items(Index);
}

struct C_00659420{
int*sub_00659420(int*);
};

// @baa 0x00659420
int*C_00659420::sub_00659420(int*param_2)
{
int*param_1=(int*)this;

undefined4 iVar2;
int iVar1;

iVar1=*param_2;
iVar2=*param_1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x210))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar2));
}
return param_1;
}

struct C_00659470{
void sub_00659470();
};

// @baa 0x00659470
void C_00659470::sub_00659470(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

int sub_00654ca0(...);
// @baa 0x00659490
void sub_00659490(undefined4 param_1)
{
  sub_00654ca0(param_1,0);
  return;
}

int sub_00654d20(...);
// @baa 0x006594a0
void sub_006594a0(undefined4 param_1)
{
  sub_00654d20(param_1,0);
  return;
}

int sub_00654da0(...);
// @baa 0x006594b0
void sub_006594b0(undefined4 param_1)
{
  sub_00654da0(param_1,0);
  return;
}

struct C_006594c0{
void sub_006594c0();
};

// @baa 0x006594c0
void C_006594c0::sub_006594c0(void)
{
int*param_1=(int*)this;
int iVar1;
iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((iVar1));
}
return;
}

struct C_006594e0{
int*sub_006594e0(int*);
};

// @baa 0x006594e0
int*C_006594e0::sub_006594e0(int*param_2)
{
int*param_1=(int*)this;

int iVar2;
int iVar1;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1){
(*(int(__stdcall**)(undefined4))(*g_026b0d94+0x1e8))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((DWORD)(iVar2));
}
return param_1;
}

struct C_00659530{
void sub_00659530();
};

// @baa 0x00659530
void C_00659530::sub_00659530(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct S_00659550 {
    TArray<E> Items; // 0x00
    E* sub_00659550(INT Index);
};

// @baa 0x00659550
E* S_00659550::sub_00659550(INT Index)
{
    return &Items(Index);
}

struct S_00659600 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659600(INT Index);
};

// @baa 0x00659600
DWORD* S_00659600::sub_00659600(INT Index)
{
    return &Items(Index);
}

struct S_00659650 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659650(INT Index);
};

// @baa 0x00659650
DWORD* S_00659650::sub_00659650(INT Index)
{
    return &Items(Index);
}

struct S_006596a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006596a0(INT Index);
};

// @baa 0x006596a0
DWORD* S_006596a0::sub_006596a0(INT Index)
{
    return &Items(Index);
}

struct S_006596f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006596f0(INT Index);
};

// @baa 0x006596f0
DWORD* S_006596f0::sub_006596f0(INT Index)
{
    return &Items(Index);
}

struct S_00659740 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659740(INT Index);
};

// @baa 0x00659740
DWORD* S_00659740::sub_00659740(INT Index)
{
    return &Items(Index);
}

struct S_00659790 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659790(INT Index);
};

// @baa 0x00659790
DWORD* S_00659790::sub_00659790(INT Index)
{
    return &Items(Index);
}

struct S_006597e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006597e0(INT Index);
};

// @baa 0x006597e0
DWORD* S_006597e0::sub_006597e0(INT Index)
{
    return &Items(Index);
}

struct E_00659830 { BYTE Bytes[48]; };

struct S_00659830 {
    TArray<E_00659830> Items; // 0x00
    E_00659830* sub_00659830(INT Index);
};

// @baa 0x00659830
E_00659830* S_00659830::sub_00659830(INT Index)
{
    return &Items(Index);
}

struct E_00659880 { BYTE Bytes[12]; };

struct S_00659880 {
    TArray<E_00659880> Items; // 0x00
    E_00659880* sub_00659880(INT Index);
};

// @baa 0x00659880
E_00659880* S_00659880::sub_00659880(INT Index)
{
    return &Items(Index);
}

struct E_006598d0 { BYTE Bytes[12]; };

struct S_006598d0 {
    TArray<E_006598d0> Items; // 0x00
    E_006598d0* sub_006598d0(INT Index);
};

// @baa 0x006598d0
E_006598d0* S_006598d0::sub_006598d0(INT Index)
{
    return &Items(Index);
}

struct E_00659920 { BYTE Bytes[16]; };

struct S_00659920 {
    TArray<E_00659920> Items; // 0x00
    E_00659920* sub_00659920(INT Index);
};

// @baa 0x00659920
E_00659920* S_00659920::sub_00659920(INT Index)
{
    return &Items(Index);
}

struct E_00659970 { BYTE Bytes[184]; };

struct S_00659970 {
    TArray<E_00659970> Items; // 0x00
    E_00659970* sub_00659970(INT Index);
};

// @baa 0x00659970
E_00659970* S_00659970::sub_00659970(INT Index)
{
    return &Items(Index);
}

struct S_006599c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006599c0(INT Index);
};

// @baa 0x006599c0
DWORD* S_006599c0::sub_006599c0(INT Index)
{
    return &Items(Index);
}

struct S_00659a10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659a10(INT Index);
};

// @baa 0x00659a10
DWORD* S_00659a10::sub_00659a10(INT Index)
{
    return &Items(Index);
}

struct E_00659aa0 { BYTE Bytes[64]; };

struct S_00659aa0 {
    TArray<E_00659aa0> Items; // 0x00
    E_00659aa0* sub_00659aa0(INT Index);
};

// @baa 0x00659aa0
E_00659aa0* S_00659aa0::sub_00659aa0(INT Index)
{
    return &Items(Index);
}

struct E_00659b30 { BYTE Bytes[24]; };

struct S_00659b30 {
    TArray<E_00659b30> Items; // 0x00
    E_00659b30* sub_00659b30(INT Index);
};

// @baa 0x00659b30
E_00659b30* S_00659b30::sub_00659b30(INT Index)
{
    return &Items(Index);
}

struct E_00659b80 { BYTE Bytes[64]; };

struct S_00659b80 {
    TArray<E_00659b80> Items; // 0x00
    E_00659b80* sub_00659b80(INT Index);
};

// @baa 0x00659b80
E_00659b80* S_00659b80::sub_00659b80(INT Index)
{
    return &Items(Index);
}

struct S_00659bd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659bd0(INT Index);
};

// @baa 0x00659bd0
DWORD* S_00659bd0::sub_00659bd0(INT Index)
{
    return &Items(Index);
}

struct S_00659c20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659c20(INT Index);
};

// @baa 0x00659c20
DWORD* S_00659c20::sub_00659c20(INT Index)
{
    return &Items(Index);
}

struct S_00659d70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659d70(INT Index);
};

// @baa 0x00659d70
DWORD* S_00659d70::sub_00659d70(INT Index)
{
    return &Items(Index);
}

struct S_00659dc0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00659dc0(INT Index) const;
};

// @baa 0x00659dc0
const QWORD* S_00659dc0::sub_00659dc0(INT Index) const
{
    return &Items(Index);
}

struct S_00659e10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00659e10(INT Index);
};

// @baa 0x00659e10
DWORD* S_00659e10::sub_00659e10(INT Index)
{
    return &Items(Index);
}

struct E_00659ec0 { BYTE Bytes[44]; };

struct S_00659ec0 {
    TArray<E_00659ec0> Items; // 0x00
    const E_00659ec0* sub_00659ec0(INT Index) const;
};

// @baa 0x00659ec0
const E_00659ec0* S_00659ec0::sub_00659ec0(INT Index) const
{
    return &Items(Index);
}

struct E_00659f60 { BYTE Bytes[32]; };

struct S_00659f60 {
    TArray<E_00659f60> Items; // 0x00
    E_00659f60* sub_00659f60(INT Index);
};

// @baa 0x00659f60
E_00659f60* S_00659f60::sub_00659f60(INT Index)
{
    return &Items(Index);
}

struct E_0065a000 { BYTE Bytes[96]; };

struct S_0065a000 {
    TArray<E_0065a000> Items; // 0x00
    E_0065a000* sub_0065a000(INT Index);
};

// @baa 0x0065a000
E_0065a000* S_0065a000::sub_0065a000(INT Index)
{
    return &Items(Index);
}

struct S_0065a050 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0065a050(INT Index);
};

// @baa 0x0065a050
QWORD* S_0065a050::sub_0065a050(INT Index)
{
    return &Items(Index);
}

struct S_0065a0a0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0065a0a0(INT Index);
};

// @baa 0x0065a0a0
QWORD* S_0065a0a0::sub_0065a0a0(INT Index)
{
    return &Items(Index);
}

struct S_0065a0f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065a0f0(INT Index);
};

// @baa 0x0065a0f0
DWORD* S_0065a0f0::sub_0065a0f0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0065a1a0 {
    int sub_0065a1a0(int);
    int sub_00652540(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0065a1a0
int C_0065a1a0::sub_0065a1a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0065a1a0 *)(this))->sub_00652540(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

// @baa 0x0065a250
bool sub_0065a250(int param_1)
{
  return param_1 != 2;
}

// @baa 0x0065a260
int sub_0065a260(void) { return 1; }

// @baa 0x0065a270
undefined4 sub_0065a270(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a290
bool sub_0065a290(int param_1)
{
  return param_1 == 0;
}

// @baa 0x0065a2a0
bool sub_0065a2a0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0065a2b0
undefined4 sub_0065a2b0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a2d0
undefined4 sub_0065a2d0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a2f0
undefined4 sub_0065a2f0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a310
undefined4 sub_0065a310(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a330
undefined4 sub_0065a330(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a350
undefined4 sub_0065a350(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0065a370
bool sub_0065a370(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0065a380
bool sub_0065a380(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0065a390
bool sub_0065a390(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0065a5d0
void __stdcall sub_0065a5d0(int a0, int a1) {  }

// @baa 0x0065a5e0
void __stdcall sub_0065a5e0(int a0, int a1) {  }

struct C_0065a5f0 { C_0065a5f0* sub_0065a5f0(void); };

// @baa 0x0065a5f0
C_0065a5f0* C_0065a5f0::sub_0065a5f0(void) { *(int*)((char*)this + 96) = 0; return this; }

struct C_0065a600 {
    void sub_0065a600();
};

// @baa 0x0065a600
void C_0065a600::sub_0065a600(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x60) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

struct C_0065a6c0 { C_0065a6c0* sub_0065a6c0(void); };

// @baa 0x0065a6c0
C_0065a6c0* C_0065a6c0::sub_0065a6c0(void) { *(int*)((char*)this + 128) = 0; return this; }

struct C_0065a6d0 {
    void sub_0065a6d0();
};

// @baa 0x0065a6d0
void C_0065a6d0::sub_0065a6d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x80) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

struct C_0065a700 {
    uint sub_0065a700();
};

// @baa 0x0065a700
uint C_0065a700::sub_0065a700(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

// @baa 0x0065a7e0
void __stdcall sub_0065a7e0(int a0, int a1) {  }

struct C_0065a7f0 {
    int sub_0065a7f0(int);
};

// @baa 0x0065a7f0
int C_0065a7f0::sub_0065a7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0065a800 {
    int sub_0065a800(int);
};

// @baa 0x0065a800
int C_0065a800::sub_0065a800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0065a810 { C_0065a810* sub_0065a810(void); };

// @baa 0x0065a810
C_0065a810* C_0065a810::sub_0065a810(void) { *(int*)((char*)this + 192) = 0; return this; }

struct C_0065a820 {
    void sub_0065a820();
};

// @baa 0x0065a820
void C_0065a820::sub_0065a820(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

struct C_0065a850 {
    uint sub_0065a850();
};

// @baa 0x0065a850
uint C_0065a850::sub_0065a850(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct C_0065a930 {
    int sub_0065a930(int);
};

// @baa 0x0065a930
int C_0065a930::sub_0065a930(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x124 + *param_1;
}

struct C_0065a940 {
    int sub_0065a940(int);
};

// @baa 0x0065a940
int C_0065a940::sub_0065a940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065a950
void __stdcall sub_0065a950(int a0, int a1) {  }

struct C_0065a9c0 {
    int sub_0065a9c0(int);
};

// @baa 0x0065a9c0
int C_0065a9c0::sub_0065a9c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065a9d0
void __stdcall sub_0065a9d0(int a0, int a1) {  }

struct C_0065a9e0 {
    int sub_0065a9e0(int);
};

// @baa 0x0065a9e0
int C_0065a9e0::sub_0065a9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065a9f0 {
    int sub_0065a9f0(int);
};

// @baa 0x0065a9f0
int C_0065a9f0::sub_0065a9f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065aa00
void __stdcall sub_0065aa00(int a0, int a1) {  }

struct C_0065aa10 {
    int sub_0065aa10(int);
};

// @baa 0x0065aa10
int C_0065aa10::sub_0065aa10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aa20 {
    int sub_0065aa20(int);
};

// @baa 0x0065aa20
int C_0065aa20::sub_0065aa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aa30 {
    int sub_0065aa30(int);
};

// @baa 0x0065aa30
int C_0065aa30::sub_0065aa30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aa70 {
    int sub_0065aa70(int);
};

// @baa 0x0065aa70
int C_0065aa70::sub_0065aa70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x0065aa80
void __stdcall sub_0065aa80(int a0, int a1) {  }

struct C_0065aa90 {
    int sub_0065aa90(int);
};

// @baa 0x0065aa90
int C_0065aa90::sub_0065aa90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0065aab0 {
    int sub_0065aab0(int);
};

// @baa 0x0065aab0
int C_0065aab0::sub_0065aab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aac0 {
    int sub_0065aac0(int);
};

// @baa 0x0065aac0
int C_0065aac0::sub_0065aac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aad0 {
    int sub_0065aad0(int);
};

// @baa 0x0065aad0
int C_0065aad0::sub_0065aad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0065ab40 {
    int sub_0065ab40(int);
};

// @baa 0x0065ab40
int C_0065ab40::sub_0065ab40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065ab50
void __stdcall sub_0065ab50(int a0, int a1) {  }

struct C_0065ab60 {
    int sub_0065ab60(int);
};

// @baa 0x0065ab60
int C_0065ab60::sub_0065ab60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065ab70 {
    int sub_0065ab70(int);
};

// @baa 0x0065ab70
int C_0065ab70::sub_0065ab70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065ab80 {
    int sub_0065ab80(int);
};

// @baa 0x0065ab80
int C_0065ab80::sub_0065ab80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065ab90 {
    int sub_0065ab90(int);
};

// @baa 0x0065ab90
int C_0065ab90::sub_0065ab90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065aba0
void __stdcall sub_0065aba0(int a0, int a1) {  }

// @baa 0x0065abf0
void __stdcall sub_0065abf0(int a0, int a1) {  }

// @baa 0x0065ac00
void __stdcall sub_0065ac00(int a0, int a1) {  }

// @baa 0x0065ac50
void __stdcall sub_0065ac50(int a0, int a1) {  }

struct S_0065ac60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065ac60(INT Index);
};

// @baa 0x0065ac60
DWORD* S_0065ac60::sub_0065ac60(INT Index)
{
    return &Items(Index);
}

// @baa 0x0065acb0
void __stdcall sub_0065acb0(int a0, int a1) {  }

struct E_0065acc0 { BYTE Bytes[36]; };

struct S_0065acc0 {
    TArray<E_0065acc0> Items; // 0x00
    E_0065acc0* sub_0065acc0(INT Index);
};

// @baa 0x0065acc0
E_0065acc0* S_0065acc0::sub_0065acc0(INT Index)
{
    return &Items(Index);
}

struct C_0065ad10 {
    int sub_0065ad10(int);
};

// @baa 0x0065ad10
int C_0065ad10::sub_0065ad10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x0065ad20
void __stdcall sub_0065ad20(int a0, int a1) {  }

struct E_0065ad30 { BYTE Bytes[40]; };

struct S_0065ad30 {
    TArray<E_0065ad30> Items; // 0x00
    E_0065ad30* sub_0065ad30(INT Index);
};

// @baa 0x0065ad30
E_0065ad30* S_0065ad30::sub_0065ad30(INT Index)
{
    return &Items(Index);
}

struct C_0065ad80 {
    int sub_0065ad80(int);
};

// @baa 0x0065ad80
int C_0065ad80::sub_0065ad80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x0065ad90
void __stdcall sub_0065ad90(int a0, int a1) {  }

struct S_0065ada0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065ada0(INT Index);
};

// @baa 0x0065ada0
DWORD* S_0065ada0::sub_0065ada0(INT Index)
{
    return &Items(Index);
}

struct C_0065adf0 {
    int sub_0065adf0(int);
};

// @baa 0x0065adf0
int C_0065adf0::sub_0065adf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_0065ae00 {
    int sub_0065ae00(int);
};

// @baa 0x0065ae00
int C_0065ae00::sub_0065ae00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0065ae10 {
    int sub_0065ae10(int);
};

// @baa 0x0065ae10
int C_0065ae10::sub_0065ae10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0065ae20 { C_0065ae20* sub_0065ae20(void); };

// @baa 0x0065ae20
C_0065ae20* C_0065ae20::sub_0065ae20(void) { *(int*)((char*)this + 52) = 0; return this; }

struct C_0065ae30 {
    void sub_0065ae30();
};

// @baa 0x0065ae30
void C_0065ae30::sub_0065ae30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x34) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

struct C_0065ae50 { C_0065ae50* sub_0065ae50(void); };

// @baa 0x0065ae50
C_0065ae50* C_0065ae50::sub_0065ae50(void) { *(int*)((char*)this + 192) = 0; return this; }

struct C_0065ae60 {
    void sub_0065ae60();
};

// @baa 0x0065ae60
void C_0065ae60::sub_0065ae60(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

struct C_0065ae90 {
    int sub_0065ae90(int);
};

// @baa 0x0065ae90
int C_0065ae90::sub_0065ae90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0065aea0 {
    int sub_0065aea0(int);
};

// @baa 0x0065aea0
int C_0065aea0::sub_0065aea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aeb0 {
    int sub_0065aeb0(int);
};

// @baa 0x0065aeb0
int C_0065aeb0::sub_0065aeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065aec0 { int sub_0065aec0(void); };

// @baa 0x0065aec0
int C_0065aec0::sub_0065aec0(void) { return *(int*)((char*)this + 0); }

struct C_0065aed0 { int a, b, c; C_0065aed0(); };

// @baa 0x0065aed0
C_0065aed0::C_0065aed0() : a(0), b(0), c(0) {}

// @baa 0x0065af30
void __stdcall sub_0065af30(int a0, int a1) {  }

struct C_0065af40 {
    int sub_0065af40(int);
};

// @baa 0x0065af40
int C_0065af40::sub_0065af40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065af50
void __stdcall sub_0065af50(int a0, int a1) {  }

struct C_0065af60 {
    int sub_0065af60(int);
};

// @baa 0x0065af60
int C_0065af60::sub_0065af60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065b180
void sub_0065b180(void) {  }

struct C_0065b190 { char* sub_0065b190(void); };

// @baa 0x0065b190
char* C_0065b190::sub_0065b190(void) { return (char*)this + 176; }

struct C_0065b1a0 { char* sub_0065b1a0(void); };

// @baa 0x0065b1a0
char* C_0065b1a0::sub_0065b1a0(void) { return (char*)this + 188; }

struct C_0065b1c0 {
    undefined4 sub_0065b1c0(undefined4);
    int sub_0073f030(int);
};

int sub_007161b0(...);
int sub_00afa590(...);
// @baa 0x0065b1c0
undefined4 C_0065b1c0::sub_0065b1c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065b1c0 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xce);
  sub_00716170(param_2,param_1 + 0xec);
  sub_00716170(param_2,param_1 + 0x10a);
  sub_007161b0(param_2,param_1 + 0xf2);
  sub_007161b0(param_2,param_1 + 0xf8);
  sub_00716170(param_2,param_1 + 0xfe);
  sub_00716170(param_2,param_1 + 0x104);
  sub_00716170(param_2,param_1 + 0x110);
  return uVar1;
}

// @baa 0x0065b250
int sub_0065b250(void) { return 1; }

int sub_0065b2a0(void);
// @baa 0x0065b420
undefined4 ULensFlare::sub_0065b420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065b2a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0065b320(void);
// @baa 0x0065b440
undefined4 ULensFlare::sub_0065b440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065b320();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0065b3a0(void);
// @baa 0x0065b460
undefined4 ULensFlare::sub_0065b460(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065b3a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_0065b580 { virtual void sub_0065d170(); char pad[16]; };

struct B_0065b580 { virtual void sub_0065d170(); };

struct C_0065b580 : A_0065b580, B_0065b580 { virtual void sub_0065d170(); C_0065b580(); };

C_0065b580::C_0065b580() {}

// @baa 0x0065b580
void C_0065b580::sub_0065d170() {}

struct C_0065b590{
int*sub_0065b590(int*);
};

// @baa 0x0065b590
int*C_0065b590::sub_0065b590(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1dc))((int)(iVar1));
}
*param_1=iVar1;
if(0!=iVar2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar2));
}
return param_1;
}

struct C_0065b760 {
    undefined4 sub_0065b760(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065b760
undefined4 C_0065b760::sub_0065b760(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065b760 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x14e);
  sub_00716170(param_2,param_1 + 0x16c);
  sub_00716170(param_2,param_1 + 0x18a);
  sub_007161b0(param_2,param_1 + 0x172);
  sub_007161b0(param_2,param_1 + 0x178);
  sub_00716170(param_2,param_1 + 0x17e);
  sub_00716170(param_2,param_1 + 0x184);
  sub_00716170(param_2,param_1 + 400);
  return uVar1;
}

// @baa 0x0065b7f0
int sub_0065b7f0(void) { return 2; }

struct A_0065b800 { virtual void sub_0065d190(); char pad[16]; };

struct B_0065b800 { virtual void sub_0065d190(); };

struct C_0065b800 : A_0065b800, B_0065b800 { virtual void sub_0065d190(); C_0065b800(); };

C_0065b800::C_0065b800() {}

// @baa 0x0065b800
void C_0065b800::sub_0065d190() {}

struct C_0065b990 {
    undefined4 sub_0065b990(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065b990
undefined4 C_0065b990::sub_0065b990(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065b990 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x18e);
  sub_00716170(param_2,param_1 + 0x1ac);
  sub_00716170(param_2,param_1 + 0x1ca);
  sub_007161b0(param_2,param_1 + 0x1b2);
  sub_007161b0(param_2,param_1 + 0x1b8);
  sub_00716170(param_2,param_1 + 0x1be);
  sub_00716170(param_2,param_1 + 0x1c4);
  sub_00716170(param_2,param_1 + 0x1d0);
  return uVar1;
}

// @baa 0x0065ba20
int sub_0065ba20(void) { return 2; }

struct A_0065ba30 { virtual void sub_0065d1b0(); char pad[16]; };

struct B_0065ba30 { virtual void sub_0065d1b0(); };

struct C_0065ba30 : A_0065ba30, B_0065ba30 { virtual void sub_0065d1b0(); C_0065ba30(); };

C_0065ba30::C_0065ba30() {}

// @baa 0x0065ba30
void C_0065ba30::sub_0065d1b0() {}

struct C_0065bbc0 {
    undefined4 sub_0065bbc0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065bbc0
undefined4 C_0065bbc0::sub_0065bbc0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065bbc0 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x8e);
  sub_00716170(param_2,param_1 + 0xac);
  sub_00716170(param_2,param_1 + 0xca);
  sub_007161b0(param_2,param_1 + 0xb2);
  sub_007161b0(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xd0);
  return uVar1;
}

// @baa 0x0065bc50
int sub_0065bc50(void) { return 1; }

struct A_0065bc60 { virtual void sub_0065d1d0(); char pad[16]; };

struct B_0065bc60 { virtual void sub_0065d1d0(); };

struct C_0065bc60 : A_0065bc60, B_0065bc60 { virtual void sub_0065d1d0(); C_0065bc60(); };

C_0065bc60::C_0065bc60() {}

// @baa 0x0065bc60
void C_0065bc60::sub_0065d1d0() {}

struct C_0065bdf0 {
    undefined4 sub_0065bdf0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065bdf0
undefined4 C_0065bdf0::sub_0065bdf0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065bdf0 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xae);
  sub_00716170(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xea);
  sub_007161b0(param_2,param_1 + 0xd2);
  sub_007161b0(param_2,param_1 + 0xd8);
  sub_00716170(param_2,param_1 + 0xde);
  sub_00716170(param_2,param_1 + 0xe4);
  sub_00716170(param_2,param_1 + 0xf0);
  return uVar1;
}

// @baa 0x0065be80
int sub_0065be80(void) { return 1; }

struct A_0065be90 { virtual void sub_0065d1f0(); char pad[16]; };

struct B_0065be90 { virtual void sub_0065d1f0(); };

struct C_0065be90 : A_0065be90, B_0065be90 { virtual void sub_0065d1f0(); C_0065be90(); };

C_0065be90::C_0065be90() {}

// @baa 0x0065be90
void C_0065be90::sub_0065d1f0() {}

struct C_0065c020 {
    undefined4 sub_0065c020(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065c020
undefined4 C_0065c020::sub_0065c020(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065c020 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xee);
  sub_00716170(param_2,param_1 + 0x10c);
  sub_00716170(param_2,param_1 + 0x12a);
  sub_007161b0(param_2,param_1 + 0x112);
  sub_007161b0(param_2,param_1 + 0x118);
  sub_00716170(param_2,param_1 + 0x11e);
  sub_00716170(param_2,param_1 + 0x124);
  sub_00716170(param_2,param_1 + 0x130);
  return uVar1;
}

// @baa 0x0065c0b0
int sub_0065c0b0(void) { return 2; }

struct A_0065c0c0 { virtual void sub_0065d210(); char pad[16]; };

struct B_0065c0c0 { virtual void sub_0065d210(); };

struct C_0065c0c0 : A_0065c0c0, B_0065c0c0 { virtual void sub_0065d210(); C_0065c0c0(); };

C_0065c0c0::C_0065c0c0() {}

// @baa 0x0065c0c0
void C_0065c0c0::sub_0065d210() {}

struct C_0065c250 {
    undefined4 sub_0065c250(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065c250
undefined4 C_0065c250::sub_0065c250(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065c250 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x8e);
  sub_00716170(param_2,param_1 + 0xac);
  sub_00716170(param_2,param_1 + 0xca);
  sub_007161b0(param_2,param_1 + 0xb2);
  sub_007161b0(param_2,param_1 + 0xb8);
  sub_00716170(param_2,param_1 + 0xbe);
  sub_00716170(param_2,param_1 + 0xc4);
  sub_00716170(param_2,param_1 + 0xd0);
  return uVar1;
}

// @baa 0x0065c2e0
int sub_0065c2e0(void) { return 1; }

struct A_0065c2f0 { virtual void sub_0065d230(); char pad[16]; };

struct B_0065c2f0 { virtual void sub_0065d230(); };

struct C_0065c2f0 : A_0065c2f0, B_0065c2f0 { virtual void sub_0065d230(); C_0065c2f0(); };

C_0065c2f0::C_0065c2f0() {}

// @baa 0x0065c2f0
void C_0065c2f0::sub_0065d230() {}

struct C_0065c480 {
    undefined4 sub_0065c480(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065c480
undefined4 C_0065c480::sub_0065c480(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065c480 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xae);
  sub_00716170(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xea);
  sub_007161b0(param_2,param_1 + 0xd2);
  sub_007161b0(param_2,param_1 + 0xd8);
  sub_00716170(param_2,param_1 + 0xde);
  sub_00716170(param_2,param_1 + 0xe4);
  sub_00716170(param_2,param_1 + 0xf0);
  return uVar1;
}

// @baa 0x0065c510
int sub_0065c510(void) { return 1; }

struct A_0065c520 { virtual void sub_0065d250(); char pad[16]; };

struct B_0065c520 { virtual void sub_0065d250(); };

struct C_0065c520 : A_0065c520, B_0065c520 { virtual void sub_0065d250(); C_0065c520(); };

C_0065c520::C_0065c520() {}

// @baa 0x0065c520
void C_0065c520::sub_0065d250() {}

struct C_0065c6b0 {
    undefined4 sub_0065c6b0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065c6b0
undefined4 C_0065c6b0::sub_0065c6b0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065c6b0 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xee);
  sub_00716170(param_2,param_1 + 0x10c);
  sub_00716170(param_2,param_1 + 0x12a);
  sub_007161b0(param_2,param_1 + 0x112);
  sub_007161b0(param_2,param_1 + 0x118);
  sub_00716170(param_2,param_1 + 0x11e);
  sub_00716170(param_2,param_1 + 0x124);
  sub_00716170(param_2,param_1 + 0x130);
  return uVar1;
}

// @baa 0x0065c740
int sub_0065c740(void) { return 2; }

struct A_0065c750 { virtual void sub_0065d270(); char pad[16]; };

struct B_0065c750 { virtual void sub_0065d270(); };

struct C_0065c750 : A_0065c750, B_0065c750 { virtual void sub_0065d270(); C_0065c750(); };

C_0065c750::C_0065c750() {}

// @baa 0x0065c750
void C_0065c750::sub_0065d270() {}

struct C_0065c760 {
    int sub_0065c760(int);
};

// @baa 0x0065c760
int C_0065c760::sub_0065c760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065c770
void __stdcall sub_0065c770(int a0, int a1) {  }

struct C_0065c780 {
    int sub_0065c780(int);
};

// @baa 0x0065c780
int C_0065c780::sub_0065c780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0065c790 {
    int sub_0065c790(int);
};

// @baa 0x0065c790
int C_0065c790::sub_0065c790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0065c7b0
void __stdcall sub_0065c7b0(int a0, int a1) {  }

struct C_0065c7c0 {
    int sub_0065c7c0(int);
};

// @baa 0x0065c7c0
int C_0065c7c0::sub_0065c7c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0065c7d0 {
    int sub_0065c7d0(int);
};

// @baa 0x0065c7d0
int C_0065c7d0::sub_0065c7d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x0065c7e0
void __stdcall sub_0065c7e0(int a0, int a1) {  }

struct C_0065c7f0 {
    int sub_0065c7f0(int);
};

// @baa 0x0065c7f0
int C_0065c7f0::sub_0065c7f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0065c810
void __stdcall sub_0065c810(int a0, int a1) {  }

struct C_0065c820 {
    int sub_0065c820(int);
};

// @baa 0x0065c820
int C_0065c820::sub_0065c820(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x60 + *param_1;
}

struct C_0065c830 {
    int sub_0065c830(int);
};

// @baa 0x0065c830
int C_0065c830::sub_0065c830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0065c840
void __stdcall sub_0065c840(int a0, int a1) {  }

struct C_0065c850 {
    int sub_0065c850(int);
};

// @baa 0x0065c850
int C_0065c850::sub_0065c850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0065c860
void __stdcall sub_0065c860(int a0, int a1) {  }

struct C_0065c870 {
    int sub_0065c870(int);
};

// @baa 0x0065c870
int C_0065c870::sub_0065c870(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0065c880
void __stdcall sub_0065c880(int a0, int a1) {  }

// @baa 0x0065c940
void __stdcall sub_0065c940(int a0) {  }

struct C_0065c950 {
    void sub_0065c950(undefined4);
};

// @baa 0x0065c950
void C_0065c950::sub_0065c950(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_0065c970 {
    uint sub_0065c970(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065c970
uint C_0065c970::sub_0065c970(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_0065c970 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x54);
  return uVar2 | uVar1;
}

struct A_0065ca00 { virtual void sub_0065d2b0(); char pad[16]; };

struct B_0065ca00 { virtual void sub_0065d2b0(); };

struct C_0065ca00 : A_0065ca00, B_0065ca00 { virtual void sub_0065d2b0(); C_0065ca00(); };

C_0065ca00::C_0065ca00() {}

// @baa 0x0065ca00
void C_0065ca00::sub_0065d2b0() {}

struct C_0065cae0 {
    void sub_0065cae0(undefined4);
};

// @baa 0x0065cae0
void C_0065cae0::sub_0065cae0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_0065cb00 {
    uint sub_0065cb00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065cb00
uint C_0065cb00::sub_0065cb00(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_0065cb00 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x58);
  return uVar2 | uVar1;
}

struct A_0065cba0 { virtual void sub_0065d2d0(); char pad[16]; };

struct B_0065cba0 { virtual void sub_0065d2d0(); };

struct C_0065cba0 : A_0065cba0, B_0065cba0 { virtual void sub_0065d2d0(); C_0065cba0(); };

C_0065cba0::C_0065cba0() {}

// @baa 0x0065cba0
void C_0065cba0::sub_0065d2d0() {}

struct C_0065cc60 {
    uint sub_0065cc60(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065cc60
uint C_0065cc60::sub_0065cc60(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_0065cc60 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x54);
  return uVar2 | uVar1;
}

struct A_0065ccf0 { virtual void sub_0065d2f0(); char pad[16]; };

struct B_0065ccf0 { virtual void sub_0065d2f0(); };

struct C_0065ccf0 : A_0065ccf0, B_0065ccf0 { virtual void sub_0065d2f0(); C_0065ccf0(); };

C_0065ccf0::C_0065ccf0() {}

// @baa 0x0065ccf0
void C_0065ccf0::sub_0065d2f0() {}

// @baa 0x0065cd60
void ULensFlare::sub_0065cd60(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(DWORD*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

struct C_0065d290 {
    undefined4 sub_0065d290(byte);
};

// @baa 0x0065d290
undefined4 C_0065d290::sub_0065d290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0065d2b0 {
    undefined4 sub_0065d2b0(byte);
};

int sub_0065c9a0(void);
// @baa 0x0065d2b0
undefined4 C_0065d2b0::sub_0065d2b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065c9a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0065d2d0 {
    undefined4 sub_0065d2d0(byte);
};

int sub_0065cb40(void);
// @baa 0x0065d2d0
undefined4 C_0065d2d0::sub_0065d2d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065cb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0065d2f0 {
    undefined4 sub_0065d2f0(byte);
};

int sub_0065cc90(void);
// @baa 0x0065d2f0
undefined4 C_0065d2f0::sub_0065d2f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0065cc90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0065d3c0 {
    undefined4 sub_0065d3c0(byte);
};

int sub_00653550(void);
// @baa 0x0065d3c0
undefined4 C_0065d3c0::sub_0065d3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00653550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0065d440 {
    uint sub_0065d440();
};

// @baa 0x0065d440
uint C_0065d440::sub_0065d440(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

struct C_0065d460 {
    uint sub_0065d460();
};

// @baa 0x0065d460
uint C_0065d460::sub_0065d460(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_0065d480 {
    uint sub_0065d480();
};

// @baa 0x0065d480
uint C_0065d480::sub_0065d480(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct S_0065d4a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d4a0(INT Index);
};

// @baa 0x0065d4a0
DWORD* S_0065d4a0::sub_0065d4a0(INT Index)
{
    return &Items(Index);
}

struct C_0065d4f0{
int*sub_0065d4f0(int*);
};

// @baa 0x0065d4f0
int*C_0065d4f0::sub_0065d4f0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x20c))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+600))((int)(iVar2));
}
return param_1;
}

struct C_0065d540{
void sub_0065d540();
};

// @baa 0x0065d540
void C_0065d540::sub_0065d540(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+600))((int)(iVar1));
}
return;
}

struct C_0065d560{
int*sub_0065d560(int*);
};

// @baa 0x0065d560
int*C_0065d560::sub_0065d560(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x208))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(iVar2));
}
return param_1;
}

struct C_0065d5b0{
void sub_0065d5b0();
};

// @baa 0x0065d5b0
void C_0065d5b0::sub_0065d5b0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((iVar1));
}
return;
}

struct C_0065d5d0{
int*sub_0065d5d0(int*);
};

// @baa 0x0065d5d0
int*C_0065d5d0::sub_0065d5d0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
DWORD iVar2;

iVar2=*param_1;
iVar1=*param_2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x204))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar2));
}
return param_1;
}

struct C_0065d620{
void sub_0065d620();
};

// @baa 0x0065d620
void C_0065d620::sub_0065d620(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_0065d640{
int*sub_0065d640(int*);
};

// @baa 0x0065d640
int*C_0065d640::sub_0065d640(int*param_2)
{
int*param_1=(int*)this;

int iVar2;
DWORD iVar1;

iVar1=*param_2;
iVar2=*param_1;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x200))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar2));
}
return param_1;
}

struct C_0065d690{
void sub_0065d690();
};

// @baa 0x0065d690
void C_0065d690::sub_0065d690(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct E_0065d6b0 { BYTE Bytes[16]; };

struct S_0065d6b0 {
    TArray<E_0065d6b0> Items; // 0x00
    E_0065d6b0* sub_0065d6b0(INT Index);
};

// @baa 0x0065d6b0
E_0065d6b0* S_0065d6b0::sub_0065d6b0(INT Index)
{
    return &Items(Index);
}

struct E_0065d700 { BYTE Bytes[16]; };

struct S_0065d700 {
    TArray<E_0065d700> Items; // 0x00
    E_0065d700* sub_0065d700(INT Index);
};

// @baa 0x0065d700
E_0065d700* S_0065d700::sub_0065d700(INT Index)
{
    return &Items(Index);
}

struct S_0065d750 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d750(INT Index);
};

// @baa 0x0065d750
DWORD* S_0065d750::sub_0065d750(INT Index)
{
    return &Items(Index);
}

struct E_0065d7a0 { BYTE Bytes[288]; };

struct S_0065d7a0 {
    TArray<E_0065d7a0> Items; // 0x00
    E_0065d7a0* sub_0065d7a0(INT Index);
};

// @baa 0x0065d7a0
E_0065d7a0* S_0065d7a0::sub_0065d7a0(INT Index)
{
    return &Items(Index);
}

struct S_0065d7f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d7f0(INT Index);
};

// @baa 0x0065d7f0
DWORD* S_0065d7f0::sub_0065d7f0(INT Index)
{
    return &Items(Index);
}

struct S_0065d840 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d840(INT Index);
};

// @baa 0x0065d840
DWORD* S_0065d840::sub_0065d840(INT Index)
{
    return &Items(Index);
}

struct S_0065d890 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d890(INT Index);
};

// @baa 0x0065d890
DWORD* S_0065d890::sub_0065d890(INT Index)
{
    return &Items(Index);
}

struct S_0065d930 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d930(INT Index);
};

// @baa 0x0065d930
DWORD* S_0065d930::sub_0065d930(INT Index)
{
    return &Items(Index);
}

struct S_0065d980 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065d980(INT Index);
};

// @baa 0x0065d980
DWORD* S_0065d980::sub_0065d980(INT Index)
{
    return &Items(Index);
}

struct E_0065d9d0 { BYTE Bytes[40]; };

struct S_0065d9d0 {
    TArray<E_0065d9d0> Items; // 0x00
    E_0065d9d0* sub_0065d9d0(INT Index);
};

// @baa 0x0065d9d0
E_0065d9d0* S_0065d9d0::sub_0065d9d0(INT Index)
{
    return &Items(Index);
}

struct S_0065da20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065da20(INT Index);
};

// @baa 0x0065da20
DWORD* S_0065da20::sub_0065da20(INT Index)
{
    return &Items(Index);
}

struct S_0065da70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065da70(INT Index);
};

// @baa 0x0065da70
DWORD* S_0065da70::sub_0065da70(INT Index)
{
    return &Items(Index);
}

struct S_0065dac0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065dac0(INT Index);
};

// @baa 0x0065dac0
DWORD* S_0065dac0::sub_0065dac0(INT Index)
{
    return &Items(Index);
}

struct S_0065db10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065db10(INT Index);
};

// @baa 0x0065db10
DWORD* S_0065db10::sub_0065db10(INT Index)
{
    return &Items(Index);
}

struct S_0065db60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065db60(INT Index);
};

// @baa 0x0065db60
DWORD* S_0065db60::sub_0065db60(INT Index)
{
    return &Items(Index);
}

// @baa 0x0065dbb0
void __stdcall sub_0065dbb0(int a0, int a1) {  }

struct C_0065dc40 { int sub_0065dc40(void); };

// @baa 0x0065dc40
int C_0065dc40::sub_0065dc40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct E_0065dc50 { BYTE Bytes[48]; };

struct S_0065dc50 {
    TArray<E_0065dc50> Items; // 0x00
    E_0065dc50* sub_0065dc50(INT Index);
};

// @baa 0x0065dc50
E_0065dc50* S_0065dc50::sub_0065dc50(INT Index)
{
    return &Items(Index);
}

struct E_0065dca0 { BYTE Bytes[24]; };

struct S_0065dca0 {
    TArray<E_0065dca0> Items; // 0x00
    E_0065dca0* sub_0065dca0(INT Index);
};

// @baa 0x0065dca0
E_0065dca0* S_0065dca0::sub_0065dca0(INT Index)
{
    return &Items(Index);
}

struct E_0065dcf0 { BYTE Bytes[32]; };

struct S_0065dcf0 {
    TArray<E_0065dcf0> Items; // 0x00
    E_0065dcf0* sub_0065dcf0(INT Index);
};

// @baa 0x0065dcf0
E_0065dcf0* S_0065dcf0::sub_0065dcf0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0065dd40(INT Index);
};

// @baa 0x0065dd40
FFaceFXElement* UFxRenderWidget::sub_0065dd40(INT Index)
{
	return &BoneArray(Index);
}

struct S_0065dd90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065dd90(INT Index);
};

// @baa 0x0065dd90
DWORD* S_0065dd90::sub_0065dd90(INT Index)
{
    return &Items(Index);
}

struct S_0065dde0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0065dde0(INT Index);
};

// @baa 0x0065dde0
DWORD* S_0065dde0::sub_0065dde0(INT Index)
{
    return &Items(Index);
}

struct C_0065de70 {
    uint sub_0065de70();
};

// @baa 0x0065de70
uint C_0065de70::sub_0065de70(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

struct S_0065de90 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0065de90(INT Index);
};

// @baa 0x0065de90
QWORD* S_0065de90::sub_0065de90(INT Index)
{
    return &Items(Index);
}

struct E_0065dee0 { BYTE Bytes[44]; };

struct S_0065dee0 {
    TArray<E_0065dee0> Items; // 0x00
    E_0065dee0* sub_0065dee0(INT Index);
};

// @baa 0x0065dee0
E_0065dee0* S_0065dee0::sub_0065dee0(INT Index)
{
    return &Items(Index);
}

struct E_0065df30 { BYTE Bytes[24]; };

struct S_0065df30 {
    TArray<E_0065df30> Items; // 0x00
    E_0065df30* sub_0065df30(INT Index);
};

// @baa 0x0065df30
E_0065df30* S_0065df30::sub_0065df30(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_0065df80
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0065df80(INT Index);
};

// @baa 0x0065df80
FFaceFXElement* UFxRenderWidget_0065df80::sub_0065df80(INT Index)
{
	return &BoneArray(Index);
}

// @baa 0x0065e100
int UTexture2D::sub_0065e100(int param_2)
{
    int param_1 = (int)this;

  return param_1 + 0x158 + param_2 * 0xc;
}

// @baa 0x0065e120
undefined4 UTexture2D::sub_0065e120(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x8a);
  sub_007161b0(param_2,param_1 + 0x90);
  sub_00716170(param_2,param_1 + 0xba);
  sub_00716170(param_2,param_1 + 0xc0);
  return uVar1;
}

// @baa 0x0065e180
int sub_0065e180(void) { return 0; }

struct A_0065e230 { virtual void sub_0065e190(); char pad[16]; };

struct B_0065e230 { virtual void sub_0065e190(); };

struct C_0065e230 : A_0065e230, B_0065e230 { virtual void sub_0065e190(); C_0065e230(); };

C_0065e230::C_0065e230() {}

// @baa 0x0065e230
void C_0065e230::sub_0065e190() {}

// @baa 0x0065e370
undefined4 UTexture2D::sub_0065e370(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x8a);
  sub_007161b0(param_2,param_1 + 0x90);
  sub_00716170(param_2,param_1 + 0xba);
  sub_00716170(param_2,param_1 + 0xc0);
  return uVar1;
}

// @baa 0x0065e3d0
int sub_0065e3d0(void) { return 0; }

struct A_0065e400 { virtual void sub_0065e3e0(); char pad[16]; };

struct B_0065e400 { virtual void sub_0065e3e0(); };

struct C_0065e400 : A_0065e400, B_0065e400 { virtual void sub_0065e3e0(); C_0065e400(); };

C_0065e400::C_0065e400() {}

// @baa 0x0065e400
void C_0065e400::sub_0065e3e0() {}

struct C_0065e550 {
    undefined4 sub_0065e550(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065e550
undefined4 C_0065e550::sub_0065e550(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065e550 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xea);
  sub_007161b0(param_2,param_1 + 0xf0);
  sub_00716170(param_2,param_1 + 0x11a);
  sub_00716170(param_2,param_1 + 0x120);
  return uVar1;
}

// @baa 0x0065e5b0
int sub_0065e5b0(void) { return 0; }

struct A_0065e5e0 { virtual void sub_0065e5c0(); char pad[16]; };

struct B_0065e5e0 { virtual void sub_0065e5c0(); };

struct C_0065e5e0 : A_0065e5e0, B_0065e5e0 { virtual void sub_0065e5c0(); C_0065e5e0(); };

C_0065e5e0::C_0065e5e0() {}

// @baa 0x0065e5e0
void C_0065e5e0::sub_0065e5c0() {}

struct C_0065e730 {
    undefined4 sub_0065e730(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065e730
undefined4 C_0065e730::sub_0065e730(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065e730 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xea);
  sub_007161b0(param_2,param_1 + 0xf0);
  sub_00716170(param_2,param_1 + 0x11a);
  sub_00716170(param_2,param_1 + 0x120);
  return uVar1;
}

// @baa 0x0065e790
int sub_0065e790(void) { return 0; }

struct A_0065e7c0 { virtual void sub_0065e7a0(); char pad[16]; };

struct B_0065e7c0 { virtual void sub_0065e7a0(); };

struct C_0065e7c0 : A_0065e7c0, B_0065e7c0 { virtual void sub_0065e7a0(); C_0065e7c0(); };

C_0065e7c0::C_0065e7c0() {}

// @baa 0x0065e7c0
void C_0065e7c0::sub_0065e7a0() {}

struct C_0065e910 {
    undefined4 sub_0065e910(undefined4);
    int sub_0073f030(int);
};

// @baa 0x0065e910
undefined4 C_0065e910::sub_0065e910(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065e910 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0xcc);
  sub_00716170(param_2,param_1 + 0xea);
  sub_007161b0(param_2,param_1 + 0xf0);
  sub_00716170(param_2,param_1 + 0x11a);
  sub_00716170(param_2,param_1 + 0x120);
  return uVar1;
}

// @baa 0x0065e970
int sub_0065e970(void) { return 0; }

struct A_0065e9a0 { virtual void sub_0065e980(); char pad[16]; };

struct B_0065e9a0 { virtual void sub_0065e980(); };

struct C_0065e9a0 : A_0065e9a0, B_0065e9a0 { virtual void sub_0065e980(); C_0065e9a0(); };

C_0065e9a0::C_0065e9a0() {}

// @baa 0x0065e9a0
void C_0065e9a0::sub_0065e980() {}

struct C_0065ea80 {
    undefined4 sub_0065ea80(undefined4);
    int sub_0065bbc0(int);
};

// @baa 0x0065ea80
undefined4 C_0065ea80::sub_0065ea80(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065ea80 *)(this))->sub_0065bbc0(param_2);
  sub_00716170(param_2,param_1 + 0xd8);
  sub_00716170(param_2,param_1 + 0xde);
  sub_00716170(param_2,param_1 + 0xe4);
  sub_00716170(param_2,param_1 + 0xea);
  return uVar1;
}

struct A_0065eb50 { virtual void sub_0065f990(); char pad[16]; };

struct B_0065eb50 { virtual void sub_0065f990(); };

struct C_0065eb50 : A_0065eb50, B_0065eb50 { virtual void sub_0065f990(); C_0065eb50(); };

C_0065eb50::C_0065eb50() {}

// @baa 0x0065eb50
void C_0065eb50::sub_0065f990() {}

struct C_0065ec30 {
    undefined4 sub_0065ec30(undefined4);
    int sub_0065bdf0(int);
};

// @baa 0x0065ec30
undefined4 C_0065ec30::sub_0065ec30(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065ec30 *)(this))->sub_0065bdf0(param_2);
  sub_00716170(param_2,param_1 + 0xf8);
  sub_00716170(param_2,param_1 + 0xfe);
  sub_00716170(param_2,param_1 + 0x104);
  sub_00716170(param_2,param_1 + 0x10a);
  return uVar1;
}

struct A_0065ec80 { virtual void sub_0065f9b0(); char pad[16]; };

struct B_0065ec80 { virtual void sub_0065f9b0(); };

struct C_0065ec80 : A_0065ec80, B_0065ec80 { virtual void sub_0065f9b0(); C_0065ec80(); };

C_0065ec80::C_0065ec80() {}

// @baa 0x0065ec80
void C_0065ec80::sub_0065f9b0() {}

struct C_0065ed60 {
    undefined4 sub_0065ed60(undefined4);
    int sub_0065c020(int);
};

// @baa 0x0065ed60
undefined4 C_0065ed60::sub_0065ed60(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065ed60 *)(this))->sub_0065c020(param_2);
  sub_00716170(param_2,param_1 + 0x138);
  sub_00716170(param_2,param_1 + 0x13e);
  sub_00716170(param_2,param_1 + 0x144);
  sub_00716170(param_2,param_1 + 0x14a);
  return uVar1;
}

struct A_0065edb0 { virtual void sub_0065f9d0(); char pad[16]; };

struct B_0065edb0 { virtual void sub_0065f9d0(); };

struct C_0065edb0 : A_0065edb0, B_0065edb0 { virtual void sub_0065f9d0(); C_0065edb0(); };

C_0065edb0::C_0065edb0() {}

// @baa 0x0065edb0
void C_0065edb0::sub_0065f9d0() {}

struct C_0065ee90 {
    undefined4 sub_0065ee90(undefined4);
    int sub_0065c250(int);
};

// @baa 0x0065ee90
undefined4 C_0065ee90::sub_0065ee90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065ee90 *)(this))->sub_0065c250(param_2);
  sub_00716170(param_2,param_1 + 0xd8);
  sub_00716170(param_2,param_1 + 0xde);
  sub_00716170(param_2,param_1 + 0xe4);
  sub_00716170(param_2,param_1 + 0xea);
  return uVar1;
}

struct A_0065eee0 { virtual void sub_0065f9f0(); char pad[16]; };

struct B_0065eee0 { virtual void sub_0065f9f0(); };

struct C_0065eee0 : A_0065eee0, B_0065eee0 { virtual void sub_0065f9f0(); C_0065eee0(); };

C_0065eee0::C_0065eee0() {}

// @baa 0x0065eee0
void C_0065eee0::sub_0065f9f0() {}

struct C_0065efc0 {
    undefined4 sub_0065efc0(undefined4);
    int sub_0065c480(int);
};

// @baa 0x0065efc0
undefined4 C_0065efc0::sub_0065efc0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065efc0 *)(this))->sub_0065c480(param_2);
  sub_00716170(param_2,param_1 + 0xf8);
  sub_00716170(param_2,param_1 + 0xfe);
  sub_00716170(param_2,param_1 + 0x104);
  sub_00716170(param_2,param_1 + 0x10a);
  return uVar1;
}

struct A_0065f010 { virtual void sub_0065fa10(); char pad[16]; };

struct B_0065f010 { virtual void sub_0065fa10(); };

struct C_0065f010 : A_0065f010, B_0065f010 { virtual void sub_0065fa10(); C_0065f010(); };

C_0065f010::C_0065f010() {}

// @baa 0x0065f010
void C_0065f010::sub_0065fa10() {}

struct C_0065f0f0 {
    undefined4 sub_0065f0f0(undefined4);
    int sub_0065c6b0(int);
};

// @baa 0x0065f0f0
undefined4 C_0065f0f0::sub_0065f0f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065f0f0 *)(this))->sub_0065c6b0(param_2);
  sub_00716170(param_2,param_1 + 0x138);
  sub_00716170(param_2,param_1 + 0x13e);
  sub_00716170(param_2,param_1 + 0x144);
  sub_00716170(param_2,param_1 + 0x14a);
  return uVar1;
}

struct A_0065f140 { virtual void sub_0065fa30(); char pad[16]; };

struct B_0065f140 { virtual void sub_0065fa30(); };

struct C_0065f140 : A_0065f140, B_0065f140 { virtual void sub_0065fa30(); C_0065f140(); };

C_0065f140::C_0065f140() {}

// @baa 0x0065f140
void C_0065f140::sub_0065fa30() {}

struct C_0065f220 {
    undefined4 sub_0065f220(undefined4);
    int sub_0065b1c0(int);
};

// @baa 0x0065f220
undefined4 C_0065f220::sub_0065f220(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065f220 *)(this))->sub_0065b1c0(param_2);
  sub_00716170(param_2,param_1 + 0x118);
  sub_00716170(param_2,param_1 + 0x11e);
  sub_00716170(param_2,param_1 + 0x124);
  sub_00716170(param_2,param_1 + 0x12a);
  return uVar1;
}

struct A_0065f270 { virtual void sub_0065fa50(); char pad[16]; };

struct B_0065f270 { virtual void sub_0065fa50(); };

struct C_0065f270 : A_0065f270, B_0065f270 { virtual void sub_0065fa50(); C_0065f270(); };

C_0065f270::C_0065f270() {}

// @baa 0x0065f270
void C_0065f270::sub_0065fa50() {}

struct C_0065f350 {
    undefined4 sub_0065f350(undefined4);
    int sub_0065b760(int);
};

// @baa 0x0065f350
undefined4 C_0065f350::sub_0065f350(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065f350 *)(this))->sub_0065b760(param_2);
  sub_00716170(param_2,param_1 + 0x198);
  sub_00716170(param_2,param_1 + 0x19e);
  sub_00716170(param_2,param_1 + 0x1a4);
  sub_00716170(param_2,param_1 + 0x1aa);
  return uVar1;
}

struct A_0065f3a0 { virtual void sub_0065fa70(); char pad[16]; };

struct B_0065f3a0 { virtual void sub_0065fa70(); };

struct C_0065f3a0 : A_0065f3a0, B_0065f3a0 { virtual void sub_0065fa70(); C_0065f3a0(); };

C_0065f3a0::C_0065f3a0() {}

// @baa 0x0065f3a0
void C_0065f3a0::sub_0065fa70() {}

struct C_0065f480 {
    undefined4 sub_0065f480(undefined4);
    int sub_0065b990(int);
};

// @baa 0x0065f480
undefined4 C_0065f480::sub_0065f480(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0065f480 *)(this))->sub_0065b990(param_2);
  sub_00716170(param_2,param_1 + 0x1d8);
  sub_00716170(param_2,param_1 + 0x1de);
  sub_00716170(param_2,param_1 + 0x1e4);
  sub_00716170(param_2,param_1 + 0x1ea);
  return uVar1;
}

struct A_0065f4d0 { virtual void sub_0065fa90(); char pad[16]; };

struct B_0065f4d0 { virtual void sub_0065fa90(); };

struct C_0065f4d0 : A_0065f4d0, B_0065f4d0 { virtual void sub_0065fa90(); C_0065f4d0(); };

C_0065f4d0::C_0065f4d0() {}

// @baa 0x0065f4d0
void C_0065f4d0::sub_0065fa90() {}

// @baa 0x0065f870
void ULensFlare::sub_0065f870(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

// @baa 0x0065f8f0
void ULensFlare::sub_0065f8f0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

struct C_0065f970{
void sub_0065f970();
};

// @baa 0x0065f970
void C_0065f970::sub_0065f970(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

struct C_0065fae0 {
    int sub_0065fae0(int);
};

// @baa 0x0065fae0
int C_0065fae0::sub_0065fae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0065fbb0 {
    int sub_0065fbb0(int);
};

// @baa 0x0065fbb0
int C_0065fbb0::sub_0065fbb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0065fbc0 {
    int sub_0065fbc0(int);
};

// @baa 0x0065fbc0
int C_0065fbc0::sub_0065fbc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0065fbd0 {
    int sub_0065fbd0(int);
};

// @baa 0x0065fbd0
int C_0065fbd0::sub_0065fbd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0065fbe0 {
    void sub_0065fbe0();
};

// @baa 0x0065fbe0
void C_0065fbe0::sub_0065fbe0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

struct C_0065fc00 {
    uint sub_0065fc00();
};

// @baa 0x0065fc00
uint C_0065fc00::sub_0065fc00(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x34) | -(uint)(*(uint *)(param_1 + 0x34) == 0) & param_1;
}

struct C_0065fc20 {
    uint sub_0065fc20();
};

// @baa 0x0065fc20
uint C_0065fc20::sub_0065fc20(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct C_0065fc40 { int sub_0065fc40(void); };

// @baa 0x0065fc40
int C_0065fc40::sub_0065fc40(void) { return *(int*)((char*)this + 0); }

struct C_0065fc50 {
    int sub_0065fc50(int);
};

// @baa 0x0065fc50
int C_0065fc50::sub_0065fc50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0065fd20 {
    int sub_0065fd20();
};

// @baa 0x0065fd20
int C_0065fd20::sub_0065fd20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fd40 {
    int sub_0065fd40();
};

// @baa 0x0065fd40
int C_0065fd40::sub_0065fd40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fd60 {
    int sub_0065fd60();
};

// @baa 0x0065fd60
int C_0065fd60::sub_0065fd60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fd80 {
    int sub_0065fd80();
};

// @baa 0x0065fd80
int C_0065fd80::sub_0065fd80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fda0 {
    int sub_0065fda0();
};

// @baa 0x0065fda0
int C_0065fda0::sub_0065fda0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fdc0 {
    int sub_0065fdc0();
};

// @baa 0x0065fdc0
int C_0065fdc0::sub_0065fdc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fde0 {
    int sub_0065fde0();
};

// @baa 0x0065fde0
int C_0065fde0::sub_0065fde0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fe00 {
    int sub_0065fe00();
};

// @baa 0x0065fe00
int C_0065fe00::sub_0065fe00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fe20 {
    int sub_0065fe20();
};

// @baa 0x0065fe20
int C_0065fe20::sub_0065fe20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065fe40 {
    int sub_0065fe40(int);
};

// @baa 0x0065fe40
int C_0065fe40::sub_0065fe40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0065fe50 {
    int sub_0065fe50(int);
};

// @baa 0x0065fe50
int C_0065fe50::sub_0065fe50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0065fe60 {
    int sub_0065fe60(int);
};

// @baa 0x0065fe60
int C_0065fe60::sub_0065fe60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0065fe70 {
    int sub_0065fe70(int);
};

// @baa 0x0065fe70
int C_0065fe70::sub_0065fe70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0065fe80 {
    int sub_0065fe80(int);
};

// @baa 0x0065fe80
int C_0065fe80::sub_0065fe80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0065fea0 { int sub_0065fea0(void); };

// @baa 0x0065fea0
int C_0065fea0::sub_0065fea0(void) { return *(int*)((char*)this + 0); }

struct C_0065feb0 {
    int sub_0065feb0(int);
};

// @baa 0x0065feb0
int C_0065feb0::sub_0065feb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0065fec0 {
    int sub_0065fec0(int);
};

// @baa 0x0065fec0
int C_0065fec0::sub_0065fec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0065fed0 {
    int sub_0065fed0(int);
};

// @baa 0x0065fed0
int C_0065fed0::sub_0065fed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct E_0065fee0 { BYTE Bytes[80]; };

struct S_0065fee0 {
    TArray<E_0065fee0> Items; // 0x00
    E_0065fee0* sub_0065fee0(INT Index);
};

// @baa 0x0065fee0
E_0065fee0* S_0065fee0::sub_0065fee0(INT Index)
{
    return &Items(Index);
}

struct C_0065ff30 {
    int sub_0065ff30(int);
};

// @baa 0x0065ff30
int C_0065ff30::sub_0065ff30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0065ff40 {
    int sub_0065ff40(int);
};

// @baa 0x0065ff40
int C_0065ff40::sub_0065ff40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0065ff50 {
    int sub_0065ff50(int);
};

// @baa 0x0065ff50
int C_0065ff50::sub_0065ff50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0065ff60 {
    int sub_0065ff60(int);
};

// @baa 0x0065ff60
int C_0065ff60::sub_0065ff60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0065ff70 {
    int sub_0065ff70();
};

// @baa 0x0065ff70
int C_0065ff70::sub_0065ff70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065ff90 {
    int sub_0065ff90();
};

// @baa 0x0065ff90
int C_0065ff90::sub_0065ff90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0065ffb0 {
    uint sub_0065ffb0();
};

// @baa 0x0065ffb0
uint C_0065ffb0::sub_0065ffb0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18) | -(uint)(*(uint *)(param_1 + 0x18) == 0) & param_1;
}

struct S_0065ffd0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0065ffd0(INT Index);
};

// @baa 0x0065ffd0
QWORD* S_0065ffd0::sub_0065ffd0(INT Index)
{
    return &Items(Index);
}
