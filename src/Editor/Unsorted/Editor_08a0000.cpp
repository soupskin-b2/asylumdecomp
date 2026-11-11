// Editor_08a0000.cpp (part 1 of 2): 59 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C {
    int sub_008ad3c0(int);
};

// @baa 0x008ad3c0
int C::sub_008ad3c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008ad3d0 { C_008ad3d0* sub_008ad3d0(int a0); };

// @baa 0x008ad3d0
C_008ad3d0* C_008ad3d0::sub_008ad3d0(int a0) { return this; }

struct C_008ad3e0 { int sub_008ad3e0(void); };

// @baa 0x008ad3e0
int C_008ad3e0::sub_008ad3e0(void) { return *(int*)((char*)this + 0); }

struct C_008ad3f0 { int sub_008ad3f0(void); };

// @baa 0x008ad3f0
int C_008ad3f0::sub_008ad3f0(void) { return *(int*)((char*)this + 0); }

struct C_008ad480 {
    int sub_008ad480(int);
};

// @baa 0x008ad480
int C_008ad480::sub_008ad480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_008ad490 { C_008ad490* sub_008ad490(int a0); };

// @baa 0x008ad490
C_008ad490* C_008ad490::sub_008ad490(int a0) { return this; }

struct C_008ad4a0 { int sub_008ad4a0(void); };

// @baa 0x008ad4a0
int C_008ad4a0::sub_008ad4a0(void) { return *(int*)((char*)this + 0); }

struct C_008ad4b0 { int sub_008ad4b0(void); };

// @baa 0x008ad4b0
int C_008ad4b0::sub_008ad4b0(void) { return *(int*)((char*)this + 0); }

struct C_008ad650 {
    int sub_008ad650(int);
};

// @baa 0x008ad650
int C_008ad650::sub_008ad650(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_008ad660 { C_008ad660* sub_008ad660(int a0); };

// @baa 0x008ad660
C_008ad660* C_008ad660::sub_008ad660(int a0) { return this; }

struct C_008ad670 { int sub_008ad670(void); };

// @baa 0x008ad670
int C_008ad670::sub_008ad670(void) { return *(int*)((char*)this + 0); }

struct C_008ad680 { int sub_008ad680(void); };

// @baa 0x008ad680
int C_008ad680::sub_008ad680(void) { return *(int*)((char*)this + 0); }

struct C_008ad820 {
    int sub_008ad820(int);
};

// @baa 0x008ad820
int C_008ad820::sub_008ad820(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_008ad830 { C_008ad830* sub_008ad830(int a0); };

// @baa 0x008ad830
C_008ad830* C_008ad830::sub_008ad830(int a0) { return this; }

struct C_008ad840 { int sub_008ad840(void); };

// @baa 0x008ad840
int C_008ad840::sub_008ad840(void) { return *(int*)((char*)this + 0); }

struct C_008ad850 { int sub_008ad850(void); };

// @baa 0x008ad850
int C_008ad850::sub_008ad850(void) { return *(int*)((char*)this + 0); }

struct C_008ad860 {
    int sub_008ad860(int);
};

// @baa 0x008ad860
int C_008ad860::sub_008ad860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_008ad870 { C_008ad870* sub_008ad870(int a0); };

// @baa 0x008ad870
C_008ad870* C_008ad870::sub_008ad870(int a0) { return this; }

struct C_008ad880 { int sub_008ad880(void); };

// @baa 0x008ad880
int C_008ad880::sub_008ad880(void) { return *(int*)((char*)this + 0); }

struct C_008ad890 { int sub_008ad890(void); };

// @baa 0x008ad890
int C_008ad890::sub_008ad890(void) { return *(int*)((char*)this + 0); }

struct C_008ad910 {
    int sub_008ad910(int);
};

// @baa 0x008ad910
int C_008ad910::sub_008ad910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008ad920 { C_008ad920* sub_008ad920(int a0); };

// @baa 0x008ad920
C_008ad920* C_008ad920::sub_008ad920(int a0) { return this; }

struct C_008ad930 { int sub_008ad930(void); };

// @baa 0x008ad930
int C_008ad930::sub_008ad930(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008ad940(INT Index);
};

// @baa 0x008ad940
DWORD* S::sub_008ad940(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_008ad990{
void sub_008ad990(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x008ad990
void C_008ad990::sub_008ad990(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

// @baa 0x008adab0
void __stdcall sub_008adab0(int a0, int a1) {  }

struct C_008adac0 { C_008adac0* sub_008adac0(int a0); };

// @baa 0x008adac0
C_008adac0* C_008adac0::sub_008adac0(int a0) { return this; }

struct C_008adad0 { int sub_008adad0(void); };

// @baa 0x008adad0
int C_008adad0::sub_008adad0(void) { return *(int*)((char*)this + 0); }

struct C_008adb50 { int sub_008adb50(void); };

// @baa 0x008adb50
int C_008adb50::sub_008adb50(void) { return *(int*)((char*)this + 0); }

struct C_008adbd0 { C_008adbd0* sub_008adbd0(int a0); };

// @baa 0x008adbd0
C_008adbd0* C_008adbd0::sub_008adbd0(int a0) { return this; }

struct C_008adbe0 { int sub_008adbe0(void); };

// @baa 0x008adbe0
int C_008adbe0::sub_008adbe0(void) { return *(int*)((char*)this + 0); }

struct C_008adbf0 { C_008adbf0* sub_008adbf0(int a0); };

// @baa 0x008adbf0
C_008adbf0* C_008adbf0::sub_008adbf0(int a0) { return this; }

struct C_008adc00 { int sub_008adc00(void); };

// @baa 0x008adc00
int C_008adc00::sub_008adc00(void) { return *(int*)((char*)this + 0); }

struct C_008adc10 { C_008adc10* sub_008adc10(int a0); };

// @baa 0x008adc10
C_008adc10* C_008adc10::sub_008adc10(int a0) { return this; }

struct C_008adc20 { int sub_008adc20(void); };

// @baa 0x008adc20
int C_008adc20::sub_008adc20(void) { return *(int*)((char*)this + 0); }

struct C_008adc30 { C_008adc30* sub_008adc30(int a0); };

// @baa 0x008adc30
C_008adc30* C_008adc30::sub_008adc30(int a0) { return this; }

struct C_008adc40 { int sub_008adc40(void); };

// @baa 0x008adc40
int C_008adc40::sub_008adc40(void) { return *(int*)((char*)this + 0); }

struct C_008adc50 { int sub_008adc50(void); };

// @baa 0x008adc50
int C_008adc50::sub_008adc50(void) { return *(int*)((char*)this + 0); }

struct C_008adc60 {
    int sub_008adc60(int);
};

// @baa 0x008adc60
int C_008adc60::sub_008adc60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_008adc70 { C_008adc70* sub_008adc70(int a0); };

// @baa 0x008adc70
C_008adc70* C_008adc70::sub_008adc70(int a0) { return this; }

struct C_008adc80 { int sub_008adc80(void); };

// @baa 0x008adc80
int C_008adc80::sub_008adc80(void) { return *(int*)((char*)this + 0); }

struct C_008adc90 { int sub_008adc90(void); };

// @baa 0x008adc90
int C_008adc90::sub_008adc90(void) { return *(int*)((char*)this + 0); }

struct C_008adca0 {
    int sub_008adca0(int);
};

// @baa 0x008adca0
int C_008adca0::sub_008adca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_008adcb0 { C_008adcb0* sub_008adcb0(int a0); };

// @baa 0x008adcb0
C_008adcb0* C_008adcb0::sub_008adcb0(int a0) { return this; }

struct C_008adcc0 { int sub_008adcc0(void); };

// @baa 0x008adcc0
int C_008adcc0::sub_008adcc0(void) { return *(int*)((char*)this + 0); }

struct C_008adcd0 { int sub_008adcd0(void); };

// @baa 0x008adcd0
int C_008adcd0::sub_008adcd0(void) { return *(int*)((char*)this + 0); }

struct C_008adce0 {
    int sub_008adce0(int);
};

// @baa 0x008adce0
int C_008adce0::sub_008adce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_008adcf0 { C_008adcf0* sub_008adcf0(int a0); };

// @baa 0x008adcf0
C_008adcf0* C_008adcf0::sub_008adcf0(int a0) { return this; }

struct C_008add00 { int sub_008add00(void); };

// @baa 0x008add00
int C_008add00::sub_008add00(void) { return *(int*)((char*)this + 0); }

struct C_008add90 { int sub_008add90(void); };

// @baa 0x008add90
int C_008add90::sub_008add90(void) { return *(int*)((char*)this + 0); }

struct C_008ade80 { int sub_008ade80(void); };

// @baa 0x008ade80
int C_008ade80::sub_008ade80(void) { return *(int*)((char*)this + 0); }

struct C_008adf60 { int sub_008adf60(void); };

// @baa 0x008adf60
int C_008adf60::sub_008adf60(void) { return *(int*)((char*)this + 0); }

struct C_008adfe0 { int sub_008adfe0(void); };

// @baa 0x008adfe0
int C_008adfe0::sub_008adfe0(void) { return *(int*)((char*)this + 0); }

struct C_008ae060 { int sub_008ae060(void); };

// @baa 0x008ae060
int C_008ae060::sub_008ae060(void) { return *(int*)((char*)this + 0); }

struct C_008ae070 { int sub_008ae070(void); };

// @baa 0x008ae070
int C_008ae070::sub_008ae070(void) { return *(int*)((char*)this + 0); }

struct C_008ae0f0 {
    void sub_008ae0f0(int, int);
};

int sub_00627f00(...);
// @baa 0x008ae0f0
void C_008ae0f0::sub_008ae0f0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_008ae110 { int sub_008ae110(void); };

// @baa 0x008ae110
int C_008ae110::sub_008ae110(void) { return *(int*)((char*)this + 0); }

struct C_008ae190 { int sub_008ae190(void); };

// @baa 0x008ae190
int C_008ae190::sub_008ae190(void) { return *(int*)((char*)this + 0); }

struct C_008ae1a0 { int sub_008ae1a0(void); };

// @baa 0x008ae1a0
int C_008ae1a0::sub_008ae1a0(void) { return *(int*)((char*)this + 0); }
