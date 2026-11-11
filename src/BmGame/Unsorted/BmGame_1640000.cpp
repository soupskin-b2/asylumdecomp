// BmGame_1640000.cpp (part 1 of 5): 132 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { C* sub_01640000(int a0); };

// @baa 0x01640000
C* C::sub_01640000(int a0) { return this; }

struct C_01640010 { C_01640010* sub_01640010(int a0); };

// @baa 0x01640010
C_01640010* C_01640010::sub_01640010(int a0) { return this; }

struct C_01640020 { C_01640020* sub_01640020(int a0); };

// @baa 0x01640020
C_01640020* C_01640020::sub_01640020(int a0) { return this; }

struct C_01640030 { C_01640030* sub_01640030(int a0); };

// @baa 0x01640030
C_01640030* C_01640030::sub_01640030(int a0) { return this; }

struct C_01640040 { C_01640040* sub_01640040(int a0); };

// @baa 0x01640040
C_01640040* C_01640040::sub_01640040(int a0) { return this; }

struct C_01640050 { C_01640050* sub_01640050(int a0); };

// @baa 0x01640050
C_01640050* C_01640050::sub_01640050(int a0) { return this; }

struct C_01640060 { int sub_01640060(void); };

// @baa 0x01640060
int C_01640060::sub_01640060(void) { return *(int*)((char*)this + 0); }

struct C_016400e0 { C_016400e0* sub_016400e0(int a0); };

// @baa 0x016400e0
C_016400e0* C_016400e0::sub_016400e0(int a0) { return this; }

struct C_016400f0 { int sub_016400f0(void); };

// @baa 0x016400f0
int C_016400f0::sub_016400f0(void) { return *(int*)((char*)this + 0); }

struct C_01640100 {
    int sub_01640100(int);
};

// @baa 0x01640100
int C_01640100::sub_01640100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_016401b0 { int sub_016401b0(void); };

// @baa 0x016401b0
int C_016401b0::sub_016401b0(void) { return *(int*)((char*)this + 0); }

struct C_016401c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_016401c0(INT Index);
};

// @baa 0x016401c0
UBOOL C_016401c0::sub_016401c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016401e0(INT Index);
};

// @baa 0x016401e0
DWORD* S::sub_016401e0(INT Index)
{
    return &Items(Index);
}

// @baa 0x01640230
void __stdcall sub_01640230(int a0, int a1) {  }

struct C_01640240 { C_01640240* sub_01640240(int a0); };

// @baa 0x01640240
C_01640240* C_01640240::sub_01640240(int a0) { return this; }

struct C_01640250 { int sub_01640250(void); };

// @baa 0x01640250
int C_01640250::sub_01640250(void) { return *(int*)((char*)this + 0); }

struct C_016402d0 { int sub_016402d0(void); };

// @baa 0x016402d0
int C_016402d0::sub_016402d0(void) { return *(int*)((char*)this + 0); }

struct C_01640350 { int sub_01640350(void); };

// @baa 0x01640350
int C_01640350::sub_01640350(void) { return *(int*)((char*)this + 0); }

struct C_01640360 { int sub_01640360(void); };

// @baa 0x01640360
int C_01640360::sub_01640360(void) { return *(int*)((char*)this + 0); }

struct C_01640370 { int sub_01640370(void); };

// @baa 0x01640370
int C_01640370::sub_01640370(void) { return *(int*)((char*)this + 0); }

struct C_01640380 { int sub_01640380(void); };

// @baa 0x01640380
int C_01640380::sub_01640380(void) { return *(int*)((char*)this + 0); }

struct C_01640390 { int sub_01640390(void); };

// @baa 0x01640390
int C_01640390::sub_01640390(void) { return *(int*)((char*)this + 0); }

struct C_016403a0 { int sub_016403a0(void); };

// @baa 0x016403a0
int C_016403a0::sub_016403a0(void) { return *(int*)((char*)this + 0); }

struct C_016403b0 { int sub_016403b0(void); };

// @baa 0x016403b0
int C_016403b0::sub_016403b0(void) { return *(int*)((char*)this + 0); }

struct C_016403c0 { int sub_016403c0(void); };

// @baa 0x016403c0
int C_016403c0::sub_016403c0(void) { return *(int*)((char*)this + 0); }

struct C_016403d0 { int sub_016403d0(void); };

// @baa 0x016403d0
int C_016403d0::sub_016403d0(void) { return *(int*)((char*)this + 0); }

struct C_016403e0 { int sub_016403e0(void); };

// @baa 0x016403e0
int C_016403e0::sub_016403e0(void) { return *(int*)((char*)this + 0); }

struct C_016403f0 { int sub_016403f0(void); };

// @baa 0x016403f0
int C_016403f0::sub_016403f0(void) { return *(int*)((char*)this + 0); }

struct C_01640400 { int sub_01640400(void); };

// @baa 0x01640400
int C_01640400::sub_01640400(void) { return *(int*)((char*)this + 0); }

struct C_01640410 { int sub_01640410(void); };

// @baa 0x01640410
int C_01640410::sub_01640410(void) { return *(int*)((char*)this + 0); }

struct C_01640420 { int sub_01640420(void); };

// @baa 0x01640420
int C_01640420::sub_01640420(void) { return *(int*)((char*)this + 0); }

struct C_01640430 { int sub_01640430(void); };

// @baa 0x01640430
int C_01640430::sub_01640430(void) { return *(int*)((char*)this + 0); }

struct C_016404b0 { int sub_016404b0(void); };

// @baa 0x016404b0
int C_016404b0::sub_016404b0(void) { return *(int*)((char*)this + 0); }

struct C_016404c0 { int sub_016404c0(void); };

// @baa 0x016404c0
int C_016404c0::sub_016404c0(void) { return *(int*)((char*)this + 0); }

struct C_016404d0 { int sub_016404d0(void); };

// @baa 0x016404d0
int C_016404d0::sub_016404d0(void) { return *(int*)((char*)this + 0); }

struct C_016404e0 { int sub_016404e0(void); };

// @baa 0x016404e0
int C_016404e0::sub_016404e0(void) { return *(int*)((char*)this + 0); }

struct C_016404f0 { int sub_016404f0(void); };

// @baa 0x016404f0
int C_016404f0::sub_016404f0(void) { return *(int*)((char*)this + 0); }

struct C_01640500 { int sub_01640500(void); };

// @baa 0x01640500
int C_01640500::sub_01640500(void) { return *(int*)((char*)this + 0); }

struct C_01640510 { int sub_01640510(void); };

// @baa 0x01640510
int C_01640510::sub_01640510(void) { return *(int*)((char*)this + 0); }

struct C_01640520 { int sub_01640520(void); };

// @baa 0x01640520
int C_01640520::sub_01640520(void) { return *(int*)((char*)this + 0); }

struct C_01640530 { int sub_01640530(void); };

// @baa 0x01640530
int C_01640530::sub_01640530(void) { return *(int*)((char*)this + 0); }

struct C_01640540 { int sub_01640540(void); };

// @baa 0x01640540
int C_01640540::sub_01640540(void) { return *(int*)((char*)this + 0); }

struct C_01640550 { int sub_01640550(void); };

// @baa 0x01640550
int C_01640550::sub_01640550(void) { return *(int*)((char*)this + 0); }

struct C_01640560 { int sub_01640560(void); };

// @baa 0x01640560
int C_01640560::sub_01640560(void) { return *(int*)((char*)this + 0); }

struct C_01640570 { int sub_01640570(void); };

// @baa 0x01640570
int C_01640570::sub_01640570(void) { return *(int*)((char*)this + 0); }

struct C_01640580 { int sub_01640580(void); };

// @baa 0x01640580
int C_01640580::sub_01640580(void) { return *(int*)((char*)this + 0); }

void sub_00572b30();
// @baa 0x01640770
void sub_01640770(void) { sub_00572b30(); }

struct C_01640910 {
    bool sub_01640910();
};

// @baa 0x01640910
bool C_01640910::sub_01640910(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01640920 {
    bool sub_01640920();
};

// @baa 0x01640920
bool C_01640920::sub_01640920(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 1;
}

struct C_01640930 {
    bool sub_01640930();
};

// @baa 0x01640930
bool C_01640930::sub_01640930(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

extern FName g_026e35f8;
struct ARGrapplePointCatchmentArea_ : public ARGrapplePointCatchmentArea {
    UFunction* sub_005d7d10(FName InName, UBOOL Global);               /* FindFunctionChecked */
    void sub_00757e00(UFunction* Function, void* Parms, void* Result); /* ProcessEvent */
    void sub_01641ef0(INT Unused);
};

// @baa 0x01641ef0
void ARGrapplePointCatchmentArea_::sub_01641ef0(INT Unused)
{
    sub_00757e00(sub_005d7d10(g_026e35f8, 0), NULL, NULL);
}

int sub_00839920(...);
// @baa 0x01643640
uint ARBMCombatDangerZone::vf_364(undefined4 param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_00839920(param_2);
  if (iVar1 != 0) {
    return 0;
  }
  return *(uint *)(param_1 + 0x21c) & 1;
}

struct E { BYTE Bytes[92]; };

struct S_01646d90 {
    TArray<E> Items; // 0x00
    E* sub_01646d90(INT Index);
};

// @baa 0x01646d90
E* S_01646d90::sub_01646d90(INT Index)
{
    return &Items(Index);
}

struct E_01646de0 { BYTE Bytes[44]; };

struct S_01646de0 {
    TArray<E_01646de0> Items; // 0x00
    E_01646de0* sub_01646de0(INT Index);
};

// @baa 0x01646de0
E_01646de0* S_01646de0::sub_01646de0(INT Index)
{
    return &Items(Index);
}

struct E_01646e30 { BYTE Bytes[32]; };

struct S_01646e30 {
    TArray<E_01646e30> Items; // 0x00
    E_01646e30* sub_01646e30(INT Index);
};

// @baa 0x01646e30
E_01646e30* S_01646e30::sub_01646e30(INT Index)
{
    return &Items(Index);
}

struct E_01646eb0 { BYTE Bytes[12]; };

struct S_01646eb0 {
    TArray<E_01646eb0> Items; // 0x00
    E_01646eb0* sub_01646eb0(INT Index);
};

// @baa 0x01646eb0
E_01646eb0* S_01646eb0::sub_01646eb0(INT Index)
{
    return &Items(Index);
}

struct S_01646f00 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01646f00(INT Index);
};

// @baa 0x01646f00
QWORD* S_01646f00::sub_01646f00(INT Index)
{
    return &Items(Index);
}

struct C_01646f50{
int sub_01646f50(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x01646f50
int C_01646f50::sub_01646f50(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct E_01646fb0 { BYTE Bytes[52]; };

struct S_01646fb0 {
    TArray<E_01646fb0> Items; // 0x00
    const E_01646fb0* sub_01646fb0(INT Index) const;
};

// @baa 0x01646fb0
const E_01646fb0* S_01646fb0::sub_01646fb0(INT Index) const
{
    return &Items(Index);
}

struct T_01647060;
// @baa 0x01647060
template INT TArray<T_01647060*>::RemoveItem(T_01647060* const&);

typedef uint size_t;

struct C_016471c0 {
    int sub_016471c0(int);
    int sub_00d469d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x016471c0
int C_016471c0::sub_016471c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_016471c0 *)(this))->sub_00d469d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct S_01647200 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01647200(INT Index);
};

// @baa 0x01647200
DWORD* S_01647200::sub_01647200(INT Index)
{
    return &Items(Index);
}

struct E_016472b0 { BYTE Bytes[32]; };

struct S_016472b0 {
    TArray<E_016472b0> Items; // 0x00
    E_016472b0* sub_016472b0(INT Index);
};

// @baa 0x016472b0
E_016472b0* S_016472b0::sub_016472b0(INT Index)
{
    return &Items(Index);
}

struct C_01647360 {
    int sub_01647360(int);
};

// @baa 0x01647360
int C_01647360::sub_01647360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647370 {
    int sub_01647370(int);
};

// @baa 0x01647370
int C_01647370::sub_01647370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01647380
void __stdcall sub_01647380(int a0, int a1) {  }

struct S_01647390 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01647390(INT Index);
};

// @baa 0x01647390
DWORD* S_01647390::sub_01647390(INT Index)
{
    return &Items(Index);
}

struct C_016473e0 {
    int sub_016473e0(int);
};

// @baa 0x016473e0
int C_016473e0::sub_016473e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016473f0
void __stdcall sub_016473f0(int a0, int a1) {  }

struct C_01647400 {
    int sub_01647400(int);
};

// @baa 0x01647400
int C_01647400::sub_01647400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01647410 {
    int sub_01647410(int);
};

// @baa 0x01647410
int C_01647410::sub_01647410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x01647420
void __stdcall sub_01647420(int a0, int a1) {  }

struct C_01647430 {
    int sub_01647430(int);
};

// @baa 0x01647430
int C_01647430::sub_01647430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647440 {
    int sub_01647440(int);
};

// @baa 0x01647440
int C_01647440::sub_01647440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647450 {
    int sub_01647450(int);
};

// @baa 0x01647450
int C_01647450::sub_01647450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01647460 {
    int sub_01647460(int);
};

// @baa 0x01647460
int C_01647460::sub_01647460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01647470 {
    int sub_01647470(int);
};

// @baa 0x01647470
int C_01647470::sub_01647470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647480 {
    int sub_01647480(int);
};

// @baa 0x01647480
int C_01647480::sub_01647480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647490 {
    int sub_01647490(int);
};

// @baa 0x01647490
int C_01647490::sub_01647490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016474a0 {
    int sub_016474a0(int);
};

// @baa 0x016474a0
int C_016474a0::sub_016474a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x016474b0
void __stdcall sub_016474b0(int a0, int a1) {  }

struct S_016474c0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_016474c0(INT Index) const;
};

// @baa 0x016474c0
const DWORD* S_016474c0::sub_016474c0(INT Index) const
{
    return &Items(Index);
}

struct C_01647570 {
    int sub_01647570(int);
};

// @baa 0x01647570
int C_01647570::sub_01647570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01647580 {
    int sub_01647580(int);
};

// @baa 0x01647580
int C_01647580::sub_01647580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 100 + *param_1;
}

struct C_01647590 {
    int sub_01647590(int);
};

// @baa 0x01647590
int C_01647590::sub_01647590(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x016475a0
void __stdcall sub_016475a0(int a0, int a1) {  }

struct C_016475b0 {
    int sub_016475b0(int);
};

// @baa 0x016475b0
int C_016475b0::sub_016475b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x016475c0
void __stdcall sub_016475c0(int a0, int a1) {  }

struct S_016475d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016475d0(INT Index);
};

// @baa 0x016475d0
DWORD* S_016475d0::sub_016475d0(INT Index)
{
    return &Items(Index);
}

struct E_01647620 { BYTE Bytes[24]; };

struct S_01647620 {
    TArray<E_01647620> Items; // 0x00
    E_01647620* sub_01647620(INT Index);
};

// @baa 0x01647620
E_01647620* S_01647620::sub_01647620(INT Index)
{
    return &Items(Index);
}

struct S_01647670 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01647670(INT Index);
};

// @baa 0x01647670
DWORD* S_01647670::sub_01647670(INT Index)
{
    return &Items(Index);
}

struct S_016476c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016476c0(INT Index);
};

// @baa 0x016476c0
DWORD* S_016476c0::sub_016476c0(INT Index)
{
    return &Items(Index);
}

struct S_01647710 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01647710(INT Index);
};

// @baa 0x01647710
QWORD* S_01647710::sub_01647710(INT Index)
{
    return &Items(Index);
}

struct E_01647760 { BYTE Bytes[24]; };

struct S_01647760 {
    TArray<E_01647760> Items; // 0x00
    E_01647760* sub_01647760(INT Index);
};

// @baa 0x01647760
E_01647760* S_01647760::sub_01647760(INT Index)
{
    return &Items(Index);
}

struct S_016477b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_016477b0(INT Index);
};

// @baa 0x016477b0
DWORD* S_016477b0::sub_016477b0(INT Index)
{
    return &Items(Index);
}

struct S_01647800 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01647800(INT Index);
};

// @baa 0x01647800
DWORD* S_01647800::sub_01647800(INT Index)
{
    return &Items(Index);
}

struct S_01647850 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01647850(INT Index);
};

// @baa 0x01647850
DWORD* S_01647850::sub_01647850(INT Index)
{
    return &Items(Index);
}

struct E_016478a0 { BYTE Bytes[52]; };

struct S_016478a0 {
    TArray<E_016478a0> Items; // 0x00
    E_016478a0* sub_016478a0(INT Index);
};

// @baa 0x016478a0
E_016478a0* S_016478a0::sub_016478a0(INT Index)
{
    return &Items(Index);
}

struct E_016478f0 { BYTE Bytes[100]; };

struct S_016478f0 {
    TArray<E_016478f0> Items; // 0x00
    E_016478f0* sub_016478f0(INT Index);
};

// @baa 0x016478f0
E_016478f0* S_016478f0::sub_016478f0(INT Index)
{
    return &Items(Index);
}

struct T_0164a0f0;
// @baa 0x0164a0f0
template INT TArray<T_0164a0f0*>::RemoveItem(T_0164a0f0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0164a270 { void* Data; int Num; int Max; void sub_0164a270(); };

// @baa 0x0164a270
void C_0164a270::sub_0164a270() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164a3b0 { void* Data; int Num; int Max; void sub_0164a3b0(); };

// @baa 0x0164a3b0
void C_0164a3b0::sub_0164a3b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164a690 { void* Data; int Num; int Max; void sub_0164a690(); };

// @baa 0x0164a690
void C_0164a690::sub_0164a690() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164a7a0 { void* Data; int Num; int Max; void sub_0164a7a0(); };

// @baa 0x0164a7a0
void C_0164a7a0::sub_0164a7a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164a840 { void* Data; int Num; int Max; void sub_0164a840(); };

// @baa 0x0164a840
void C_0164a840::sub_0164a840() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0164a8a0
void __stdcall sub_0164a8a0(int a, int b)
{
}

// @baa 0x0164a8b0
void __stdcall sub_0164a8b0(int a0, int a1) {  }

// @baa 0x0164a8c0
void __stdcall sub_0164a8c0(int a0, int a1) {  }

// @baa 0x0164a8d0
void __stdcall sub_0164a8d0(int a0, int a1) {  }

// @baa 0x0164a8e0
void __stdcall sub_0164a8e0(int a0, int a1) {  }

// @baa 0x0164a8f0
void __stdcall sub_0164a8f0(int a0, int a1) {  }

// @baa 0x0164a900
void __stdcall sub_0164a900(int a0, int a1) {  }

// @baa 0x0164a910
void __stdcall sub_0164a910(int a0, int a1) {  }

void sub_0164a170();
// @baa 0x0164a9c0
void sub_0164a9c0(void) { sub_0164a170(); }

void sub_0164a1d0();
// @baa 0x0164a9d0
void sub_0164a9d0(void) { sub_0164a1d0(); }

struct M_0164ac60 { void sub_00665d40(); };

struct C_0164ac60 { char pad[16]; M_0164ac60 m; void sub_0164ac60(); };

// @baa 0x0164ac60
void C_0164ac60::sub_0164ac60() { m.sub_00665d40(); }

void sub_0164a270();
// @baa 0x0164ac70
void sub_0164ac70(void) { sub_0164a270(); }

// @baa 0x0164ac80
void sub_0164ac80(void) { sub_0164a270(); }

void sub_0054eec0();
// @baa 0x0164ac90
void sub_0164ac90(void) { sub_0054eec0(); }

struct C_0164aca0 { C_0164aca0* sub_0164aca0(void); };

// @baa 0x0164aca0
C_0164aca0* C_0164aca0::sub_0164aca0(void) { return this; }

// @baa 0x0164acb0
void sub_0164acb0(void) { sub_0054eec0(); }

void sub_0164a3b0();
// @baa 0x0164acc0
void sub_0164acc0(void) { sub_0164a3b0(); }

struct C_0164ef00 { C_0164ef00* sub_0164ef00(void); };

// @baa 0x0164ef00
C_0164ef00* C_0164ef00::sub_0164ef00(void) { return this; }

struct C_0164f230 { void sub_0163fe90(int); C_0164f230 *sub_0164f230(int); };

// @baa 0x0164f230
C_0164f230 *C_0164f230::sub_0164f230(int a) { sub_0163fe90(a); return this; }

void sub_0164a840();
// @baa 0x0164f2b0
void sub_0164f2b0(void) { sub_0164a840(); }

struct C_0164fe50 { void* Data; int Num; int Max; void sub_0164fe50(); };

// @baa 0x0164fe50
void C_0164fe50::sub_0164fe50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164feb0 {
    undefined4 sub_0164feb0();
};

// @baa 0x0164feb0
undefined4 C_0164feb0::sub_0164feb0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0164fec0 { C_0164fec0* sub_0164fec0(void); };

// @baa 0x0164fec0
C_0164fec0* C_0164fec0::sub_0164fec0(void) { return this; }

struct C_0164fed0 { C_0164fed0* sub_0164fed0(void); };

// @baa 0x0164fed0
C_0164fed0* C_0164fed0::sub_0164fed0(void) { return this; }

struct C_0164fee0 { void* Data; int Num; int Max; void sub_0164fee0(); };

// @baa 0x0164fee0
void C_0164fee0::sub_0164fee0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164ff40 { void* Data; int Num; int Max; void sub_0164ff40(); };

// @baa 0x0164ff40
void C_0164ff40::sub_0164ff40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0164ffa0 { void* Data; int Num; int Max; void sub_0164ffa0(); };

// @baa 0x0164ffa0
void C_0164ffa0::sub_0164ffa0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
