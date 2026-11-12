// Engine_0980000.cpp (part 1 of 6): 83 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4 g_02676088;
// @baa 0x00981430
void sub_00981430(undefined4 param_1)
{
  g_02676088 = param_1;
  return;
}

// @baa 0x00981440
void sub_00981440(void) {  }

// @baa 0x009814b0
undefined2 sub_009814b0(void)
{
  return 0x69;
}

// @baa 0x009814c0
undefined2 sub_009814c0(void)
{
  return 0x73;
}

struct C { C* sub_00981550(void); };

// @baa 0x00981550
C* C::sub_00981550(void) { return this; }

struct C_00981560 {
    void sub_00981560();
};

extern undefined4 g_01f3de50;
extern undefined4 g_01f3de54;
// @baa 0x00981560
void C_00981560::sub_00981560(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x20) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + -0x1c + param_1) = (undefined **)(&g_01f3de50);
  return;
}

struct C_00981580 {
    uint sub_00981580();
};

// @baa 0x00981580
uint C_00981580::sub_00981580(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x78) >> 9 & 1;
}

int sub_00772090(...);
int sub_007774c0(void);
extern undefined4 g_026b3cdc;
// @baa 0x00981590
int sub_00981590(void)
{
  if (g_026b3cdc == 0) {
    g_026b3cdc = sub_00772090(L"Engine");
    sub_007774c0();
  }
  return g_026b3cdc;
}

struct C_009815c0 { int a, b; C_009815c0(int, int); };

// @baa 0x009815c0
C_009815c0::C_009815c0(int x, int y) : a(x), b(y) {}

struct C_009815e0 { char* sub_009815e0(void); };

// @baa 0x009815e0
char* C_009815e0::sub_009815e0(void) { return (char*)this + 92; }

struct C_009815f0 {
    int sub_009815f0(ushort);
};

// @baa 0x009815f0
int C_009815f0::sub_009815f0(ushort param_2)
{
    int param_1 = (int)this;

  return (uint)param_2 * *(int *)(*(int *)(param_1 + 0xc) + 0x24) +
         *(int *)(*(int *)(param_1 + 0xc) + 0x20);
}

// @baa 0x00981630
int __stdcall sub_00981630(int a0) { return 0; }

// @baa 0x00981640
int __stdcall sub_00981640(int a0) { return 1; }

struct C_00981650 {
    int sub_00981650();
};

// @baa 0x00981650
int C_00981650::sub_00981650(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 0x68;
}

struct C_00981660 {
    int sub_00981660();
};

// @baa 0x00981660
int C_00981660::sub_00981660(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x50;
}

struct C_009816b0 {
    float10 sub_009816b0();
};

// @baa 0x009816b0
float10 C_009816b0::sub_009816b0(void)
{
    int * param_1 = (int *)this;

  return (float10)*(float *)(*param_1 + 0xd4);
}

struct C_009816d0 {
    undefined4 sub_009816d0();
};

// @baa 0x009816d0
undefined4 C_009816d0::sub_009816d0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x18);
}

struct C_009816e0 {
    undefined4 sub_009816e0();
};

// @baa 0x009816e0
undefined4 C_009816e0::sub_009816e0(void)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x78) & 0x200) != 0) && ((*(byte *)(param_1 + 0xbc) & 0x40) == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00981800
void UStaticMeshComponent::sub_00981800(void)
{
    int param_1 = (int)this;

  *(undefined ***)(param_1 + -0x2c) = (undefined **)(&g_01f3de54);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x28) + 4) + -0x28 + param_1) = (undefined **)(&g_01f3de50);
  return;
}

extern char g_01f894fc[];
// @baa 0x009818b0
int sub_009818b0(void) { return (int)g_01f894fc; }

int sub_0053dfa0(...);
int sub_009818c0(void);
// @baa 0x00981910
undefined4 UStaticMeshComponent::sub_00981910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009818c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00981a20 { void sub_00b20de0(); };

struct C_00981a20 { char pad[252]; M_00981a20 m; void sub_00981a20(); };

// @baa 0x00981a20
void C_00981a20::sub_00981a20() { m.sub_00b20de0(); }

struct M_00981b00 { void sub_00b20de0(); };

struct C_00981b00 { char pad[252]; M_00981b00 m; void sub_00981b00(); };

// @baa 0x00981b00
void C_00981b00::sub_00981b00() { m.sub_00b20de0(); }

// @baa 0x00981c00
void UStaticMeshComponent::sub_00981c00(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// @baa 0x00981c90
void sub_00981c90(void)
{
  return;
}

int sub_0079ef20(...);
// @baa 0x00981ca0
undefined4 sub_00981ca0(undefined4 param_1, undefined4 param_2)
{
  sub_0079ef20(param_1,param_2);
  return param_1;
}

struct C_00981de0 { int sub_00981de0(void); };

// @baa 0x00981de0
int C_00981de0::sub_00981de0(void) { return *(int*)((char*)this + 8); }

// @baa 0x00981df0
int sub_00981df0(int a0, int a1) { return a1; }

struct C_00981e30 { C_00981e30* sub_00981e30(void); };

// @baa 0x00981e30
C_00981e30* C_00981e30::sub_00981e30(void) { return this; }

struct C_00981e70 { C_00981e70* sub_00981e70(void); };

// @baa 0x00981e70
C_00981e70* C_00981e70::sub_00981e70(void) { return this; }

struct C_00981e80 {
    C_00981e80* sub_00981e80(BYTE b);
};

// @baa 0x00981e80
C_00981e80* C_00981e80::sub_00981e80(BYTE b)
{
    *(BYTE*)this = b;
    return this;
}

struct C_00981eb0 {
    byte sub_00981eb0();
};

// @baa 0x00981eb0
byte C_00981eb0::sub_00981eb0(void)
{
    byte * param_1 = (byte *)this;

  return ~*param_1 & 1;
}

struct C_00981ec0 {
    void sub_00981ec0(int);
};

// @baa 0x00981ec0
void C_00981ec0::sub_00981ec0(int param_2)
{
    byte * param_1 = (byte *)this;

  if (param_2 != 0) {
    *param_1 = *param_1 & 0xfe;
    return;
  }
  *param_1 = *param_1 | 1;
  return;
}

struct E { BYTE Bytes[52]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00987400(INT Index);
};

// @baa 0x00987400
E* S::sub_00987400(INT Index)
{
    return &Items(Index);
}

struct E_00987450 { BYTE Bytes[32]; };

struct S_00987450 {
    TArray<E_00987450> Items; // 0x00
    const E_00987450* sub_00987450(INT Index) const;
};

// @baa 0x00987450
const E_00987450* S_00987450::sub_00987450(INT Index) const
{
    return &Items(Index);
}

struct S_009874a0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_009874a0(INT Index) const;
};

// @baa 0x009874a0
const DWORD* S_009874a0::sub_009874a0(INT Index) const
{
    return &Items(Index);
}

struct C_009874f0{
int sub_009874f0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x009874f0
int C_009874f0::sub_009874f0(undefined4*param_2)
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

typedef uint size_t;

struct C_009875a0 {
    int sub_009875a0(int);
    int sub_0094ac10(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x009875a0
int C_009875a0::sub_009875a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_009875a0 *)(this))->sub_0094ac10(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct C_009875e0{
int sub_009875e0(undefined4*);
};

// @baa 0x009875e0
int C_009875e0::sub_009875e0(undefined4*param_2)
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

struct S_00987640 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00987640(INT Index) const;
};

// @baa 0x00987640
const QWORD* S_00987640::sub_00987640(INT Index) const
{
    return &Items(Index);
}

struct S_00987d80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00987d80(INT Index);
};

// @baa 0x00987d80
DWORD* S_00987d80::sub_00987d80(INT Index)
{
    return &Items(Index);
}

struct E_00987e30 { BYTE Bytes[12]; };

struct S_00987e30 {
    TArray<E_00987e30> Items; // 0x00
    E_00987e30* sub_00987e30(INT Index);
};

// @baa 0x00987e30
E_00987e30* S_00987e30::sub_00987e30(INT Index)
{
    return &Items(Index);
}

struct E_00987ef0 { BYTE Bytes[12]; };

struct S_00987ef0 {
    TArray<E_00987ef0> Items; // 0x00
    E_00987ef0* sub_00987ef0(INT Index);
};

// @baa 0x00987ef0
E_00987ef0* S_00987ef0::sub_00987ef0(INT Index)
{
    return &Items(Index);
}

struct E_00987f40 { BYTE Bytes[12]; };

struct S_00987f40 {
    TArray<E_00987f40> Items; // 0x00
    const E_00987f40* sub_00987f40(INT Index) const;
};

// @baa 0x00987f40
const E_00987f40* S_00987f40::sub_00987f40(INT Index) const
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
	FFaceFXElement* sub_00987f90(INT Index);
};

// @baa 0x00987f90
FFaceFXElement* UFxRenderWidget::sub_00987f90(INT Index)
{
	return &BoneArray(Index);
}

struct E_00987fe0 { BYTE Bytes[36]; };

struct S_00987fe0 {
    TArray<E_00987fe0> Items; // 0x00
    E_00987fe0* sub_00987fe0(INT Index);
};

// @baa 0x00987fe0
E_00987fe0* S_00987fe0::sub_00987fe0(INT Index)
{
    return &Items(Index);
}

struct S_00988030 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00988030(INT Index);
};

// @baa 0x00988030
DWORD* S_00988030::sub_00988030(INT Index)
{
    return &Items(Index);
}

struct S_00988080 {
    TArray<WORD> Words; // 0x00
    WORD* sub_00988080(INT Index);
};

// @baa 0x00988080
WORD* S_00988080::sub_00988080(INT Index)
{
    return &Words(Index);
}

struct S_009880d0 {
    TArray<WORD> Items; // 0x00
    const WORD* sub_009880d0(INT Index) const;
};

// @baa 0x009880d0
const WORD* S_009880d0::sub_009880d0(INT Index) const
{
    return &Items(Index);
}

struct S_00988120 {
    TArray<BYTE> Items; // 0x00
    BYTE* sub_00988120(INT Index);
};

// @baa 0x00988120
BYTE* S_00988120::sub_00988120(INT Index)
{
    return &Items(Index);
}

struct S_00988160 {
    TArray<BYTE> Items; // 0x00
    const BYTE* sub_00988160(INT Index) const;
};

// @baa 0x00988160
const BYTE* S_00988160::sub_00988160(INT Index) const
{
    return &Items(Index);
}

struct E_009881a0 { BYTE Bytes[48]; };

struct S_009881a0 {
    TArray<E_009881a0> Items; // 0x00
    E_009881a0* sub_009881a0(INT Index);
};

// @baa 0x009881a0
E_009881a0* S_009881a0::sub_009881a0(INT Index)
{
    return &Items(Index);
}

struct C_009881f0 {
    int sub_009881f0(int);
    int sub_009846b0(int);
};

// @baa 0x009881f0
int C_009881f0::sub_009881f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_009881f0 *)(this))->sub_009846b0(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct C_00988230 {
    int sub_00988230(int);
    int sub_00984730(int);
};

// @baa 0x00988230
int C_00988230::sub_00988230(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00988230 *)(this))->sub_00984730(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct E_00988270 { BYTE Bytes[12]; };

struct S_00988270 {
    TArray<E_00988270> Items; // 0x00
    E_00988270* sub_00988270(INT Index);
};

// @baa 0x00988270
E_00988270* S_00988270::sub_00988270(INT Index)
{
    return &Items(Index);
}

struct E_009882c0 { BYTE Bytes[12]; };

struct S_009882c0 {
    TArray<E_009882c0> Items; // 0x00
    const E_009882c0* sub_009882c0(INT Index) const;
};

// @baa 0x009882c0
const E_009882c0* S_009882c0::sub_009882c0(INT Index) const
{
    return &Items(Index);
}

struct C_00988310 {
    int sub_00988310(int);
    int sub_00984820(int);
};

// @baa 0x00988310
int C_00988310::sub_00988310(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00988310 *)(this))->sub_00984820(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_00988500 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00988500(INT Index);
};

// @baa 0x00988500
DWORD* S_00988500::sub_00988500(INT Index)
{
    return &Items(Index);
}

// @baa 0x00988de0
void __stdcall sub_00988de0(int a0, int a1) {  }

struct C_00988df0 {
    int sub_00988df0(int);
};

// @baa 0x00988df0
int C_00988df0::sub_00988df0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00988e00
void __stdcall sub_00988e00(int a0, int a1) {  }

struct C_00988e10 {
    int sub_00988e10(int);
};

// @baa 0x00988e10
int C_00988e10::sub_00988e10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00988e20
void __stdcall sub_00988e20(int a0, int a1) {  }

struct C_00988e30 {
    int sub_00988e30(int);
};

// @baa 0x00988e30
int C_00988e30::sub_00988e30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00988e40
void __stdcall sub_00988e40(int a0, int a1) {  }

struct C_00988e50 {
    int sub_00988e50(int);
};

// @baa 0x00988e50
int C_00988e50::sub_00988e50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x00988e70
void __stdcall sub_00988e70(int a0, int a1) {  }

// @baa 0x00988e80
void __stdcall sub_00988e80(int a0, int a1) {  }

struct C_00989130 { int sub_00989130(void); };

// @baa 0x00989130
int C_00989130::sub_00989130(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00989140 { int sub_00989140(void); };

// @baa 0x00989140
int C_00989140::sub_00989140(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00989150 { void* Data; int Num; int Max; void sub_00989150(); };

// @baa 0x00989150
void C_00989150::sub_00989150() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_009891b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009891b0(INT Index);
};

// @baa 0x009891b0
DWORD* S_009891b0::sub_009891b0(INT Index)
{
    return &Items(Index);
}

struct C_00989200 { int sub_00989200(void); };

// @baa 0x00989200
int C_00989200::sub_00989200(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00989300 {
    int sub_00989300(int);
};

// @baa 0x00989300
int C_00989300::sub_00989300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00989310 {
    int sub_00989310(int);
};

// @baa 0x00989310
int C_00989310::sub_00989310(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00989320 { int sub_00989320(void); };

// @baa 0x00989320
int C_00989320::sub_00989320(void) { return *(int*)((char*)this + 20); }

struct C_00989360 {
    int sub_00989360(int);
};

// @baa 0x00989360
int C_00989360::sub_00989360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00989370 {
    int sub_00989370(int);
};

// @baa 0x00989370
int C_00989370::sub_00989370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00989380 { int sub_00989380(void); };

// @baa 0x00989380
int C_00989380::sub_00989380(void) { return *(int*)((char*)this + 20); }

struct C_00989390 {
    int sub_00989390();
};

// @baa 0x00989390
int C_00989390::sub_00989390(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009893b0 {
    int sub_009893b0(int);
};

// @baa 0x009893b0
int C_009893b0::sub_009893b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_009893c0 {
    int sub_009893c0();
};

// @baa 0x009893c0
int C_009893c0::sub_009893c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009893e0 {
    int sub_009893e0();
};

// @baa 0x009893e0
int C_009893e0::sub_009893e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

