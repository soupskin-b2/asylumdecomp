// UPartyBeacon.cpp (part 1 of 4): 173 functions
// Placed here by: neighbours 120, class 46, callers 4, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e2c9c0
IMPLEMENT_CLASS_AT(UPartyBeacon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UPartyBeacon.cpp", 7);

// @baa 0x00e2caf0
bool UPartyBeacon::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e2cb30
int UPartyBeaconHost::vf_000(void) { return 1; }

// @baa 0x00e2cb40
int UPartyBeaconClient::vf_000(void) { return 1; }

struct C { int sub_00e2cda0(void); };

// @baa 0x00e2cda0
int C::sub_00e2cda0(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce20 { int sub_00e2ce20(void); };

// @baa 0x00e2ce20
int C_00e2ce20::sub_00e2ce20(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce30 { int sub_00e2ce30(void); };

// @baa 0x00e2ce30
int C_00e2ce30::sub_00e2ce30(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce40 { int sub_00e2ce40(void); };

// @baa 0x00e2ce40
int C_00e2ce40::sub_00e2ce40(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce50 { int a, b, c; C_00e2ce50(); };

// @baa 0x00e2ce50
C_00e2ce50::C_00e2ce50() : a(0), b(0), c(0) {}

struct C_00e2ce60 { int sub_00e2ce60(void); };

// @baa 0x00e2ce60
int C_00e2ce60::sub_00e2ce60(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce70 { int sub_00e2ce70(void); };

// @baa 0x00e2ce70
int C_00e2ce70::sub_00e2ce70(void) { return *(int*)((char*)this + 4); }

struct C_00e2ce80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00e2ce80(INT Index);
};

// @baa 0x00e2ce80
UBOOL C_00e2ce80::sub_00e2ce80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00e2cea0 { int sub_00e2cea0(void); };

// @baa 0x00e2cea0
int C_00e2cea0::sub_00e2cea0(void) { return *(int*)((char*)this + 4); }

struct C_00e2ceb0 { int sub_00e2ceb0(void); };

// @baa 0x00e2ceb0
int C_00e2ceb0::sub_00e2ceb0(void) { return *(int*)((char*)this + 4); }

struct C_00e2cec0 { int sub_00e2cec0(void); };

// @baa 0x00e2cec0
int C_00e2cec0::sub_00e2cec0(void) { return *(int*)((char*)this + 4); }

struct C_00e2ced0 { int sub_00e2ced0(void); };

// @baa 0x00e2ced0
int C_00e2ced0::sub_00e2ced0(void) { return *(int*)((char*)this + 4); }

struct C_00e2cee0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00e2cee0(INT Index);
};

// @baa 0x00e2cee0
UBOOL C_00e2cee0::sub_00e2cee0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00e2cf00 { int sub_00e2cf00(void); };

// @baa 0x00e2cf00
int C_00e2cf00::sub_00e2cf00(void) { return *(int*)((char*)this + 4); }

struct C_00e2cf80 { C_00e2cf80* sub_00e2cf80(int a0); };

// @baa 0x00e2cf80
C_00e2cf80* C_00e2cf80::sub_00e2cf80(int a0) { return this; }

struct C_00e2cf90 { int sub_00e2cf90(void); };

// @baa 0x00e2cf90
int C_00e2cf90::sub_00e2cf90(void) { return *(int*)((char*)this + 0); }

struct C_00e2cfa0 { int sub_00e2cfa0(void); };

// @baa 0x00e2cfa0
int C_00e2cfa0::sub_00e2cfa0(void) { return *(int*)((char*)this + 0); }

struct C_00e2d030 {
    int sub_00e2d030(int);
};

// @baa 0x00e2d030
int C_00e2d030::sub_00e2d030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00e2d050 { C_00e2d050* sub_00e2d050(int a0); };

// @baa 0x00e2d050
C_00e2d050* C_00e2d050::sub_00e2d050(int a0) { return this; }

struct C_00e2d060 { int sub_00e2d060(void); };

// @baa 0x00e2d060
int C_00e2d060::sub_00e2d060(void) { return *(int*)((char*)this + 0); }

struct C_00e2d0e0 { C_00e2d0e0* sub_00e2d0e0(int a0); };

// @baa 0x00e2d0e0
C_00e2d0e0* C_00e2d0e0::sub_00e2d0e0(int a0) { return this; }

struct C_00e2d0f0 { int sub_00e2d0f0(void); };

// @baa 0x00e2d0f0
int C_00e2d0f0::sub_00e2d0f0(void) { return *(int*)((char*)this + 0); }

struct C_00e2d180 { C_00e2d180* sub_00e2d180(int a0); };

// @baa 0x00e2d180
C_00e2d180* C_00e2d180::sub_00e2d180(int a0) { return this; }

struct C_00e2d190 { int sub_00e2d190(void); };

// @baa 0x00e2d190
int C_00e2d190::sub_00e2d190(void) { return *(int*)((char*)this + 0); }

struct C_00e2d1a0 { C_00e2d1a0* sub_00e2d1a0(int a0); };

// @baa 0x00e2d1a0
C_00e2d1a0* C_00e2d1a0::sub_00e2d1a0(int a0) { return this; }

struct C_00e2d1b0 { int sub_00e2d1b0(void); };

// @baa 0x00e2d1b0
int C_00e2d1b0::sub_00e2d1b0(void) { return *(int*)((char*)this + 0); }

struct C_00e2d230 { C_00e2d230* sub_00e2d230(int a0); };

// @baa 0x00e2d230
C_00e2d230* C_00e2d230::sub_00e2d230(int a0) { return this; }

struct C_00e2d240 { int sub_00e2d240(void); };

// @baa 0x00e2d240
int C_00e2d240::sub_00e2d240(void) { return *(int*)((char*)this + 0); }

struct C_00e2d250 { C_00e2d250* sub_00e2d250(int a0); };

// @baa 0x00e2d250
C_00e2d250* C_00e2d250::sub_00e2d250(int a0) { return this; }

struct C_00e2d260 { int sub_00e2d260(void); };

// @baa 0x00e2d260
int C_00e2d260::sub_00e2d260(void) { return *(int*)((char*)this + 0); }

struct C_00e2d2f0 {
    int sub_00e2d2f0();
};

// @baa 0x00e2d2f0
int C_00e2d2f0::sub_00e2d2f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e2d300 { int a, b; C_00e2d300(int, int); };

// @baa 0x00e2d300
C_00e2d300::C_00e2d300(int x, int y) : a(x), b(y) {}

struct C_00e2d320 {
    int sub_00e2d320();
};

// @baa 0x00e2d320
int C_00e2d320::sub_00e2d320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e2d330 { int a, b; C_00e2d330(int, int); };

// @baa 0x00e2d330
C_00e2d330::C_00e2d330(int x, int y) : a(x), b(y) {}

// @baa 0x00e2d350
int sub_00e2d350(int a0) { return *(int*)a0; }

struct C_00e2d360 {
    void sub_00e2d360(int *);
};

// @baa 0x00e2d360
void C_00e2d360::sub_00e2d360(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00e2d370
int sub_00e2d370(int a0) { return *(int*)a0; }

// @baa 0x00e2d380
bool sub_00e2d380(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00e2d390
int sub_00e2d390(int a0) { return a0; }

struct C_00e2d3c0 {
    void sub_00e2d3c0(undefined4 *);
};

// @baa 0x00e2d3c0
void C_00e2d3c0::sub_00e2d3c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00e2d3e0 { int sub_00e2d3e0(void); };

// @baa 0x00e2d3e0
int C_00e2d3e0::sub_00e2d3e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e2d420 { int sub_00e2d420(void); };

// @baa 0x00e2d420
int C_00e2d420::sub_00e2d420(void) { return *(int*)((char*)this + 0); }

struct C_00e2d430 { int sub_00e2d430(void); };

// @baa 0x00e2d430
int C_00e2d430::sub_00e2d430(void) { return *(int*)((char*)this + 0); }

struct C_00e2d440 { int sub_00e2d440(void); };

// @baa 0x00e2d440
int C_00e2d440::sub_00e2d440(void) { return *(int*)((char*)this + 0); }

struct C_00e2d450 { int sub_00e2d450(void); };

// @baa 0x00e2d450
int C_00e2d450::sub_00e2d450(void) { return *(int*)((char*)this + 0); }

struct C_00e2d460 { int sub_00e2d460(void); };

// @baa 0x00e2d460
int C_00e2d460::sub_00e2d460(void) { return *(int*)((char*)this + 0); }

struct C_00e2d470 { int sub_00e2d470(void); };

// @baa 0x00e2d470
int C_00e2d470::sub_00e2d470(void) { return *(int*)((char*)this + 0); }

struct C_00e2d480 { int sub_00e2d480(void); };

// @baa 0x00e2d480
int C_00e2d480::sub_00e2d480(void) { return *(int*)((char*)this + 20); }

struct C_00e2d490 { int sub_00e2d490(void); };

// @baa 0x00e2d490
int C_00e2d490::sub_00e2d490(void) { return *(int*)((char*)this + 20); }

struct C_00e2d4a0 { int sub_00e2d4a0(void); };

// @baa 0x00e2d4a0
int C_00e2d4a0::sub_00e2d4a0(void) { return *(int*)((char*)this + 20); }

void sub_00572b30();
// @baa 0x00e2d4b0
void sub_00e2d4b0(void) { sub_00572b30(); }

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00e2d4f0(INT Index) const;
};

// @baa 0x00e2d4f0
const E* S::sub_00e2d4f0(INT Index) const
{
    return &Items(Index);
}

struct A_00e2d560 { virtual void sub_00e2f000(); };

struct B_00e2d560 { virtual void sub_00e2f000(); };

struct C_00e2d560 : A_00e2d560, B_00e2d560 { virtual void sub_00e2f000(); C_00e2d560(); };

C_00e2d560::C_00e2d560() {}

// @baa 0x00e2d560
void C_00e2d560::sub_00e2f000() {}

struct C_00e2d570 {
    undefined4 * sub_00e2d570(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_020f4644;
// @baa 0x00e2d570
undefined4 * C_00e2d570::sub_00e2d570(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020f4644);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e2d590 { int sub_00e2d590(void); };

// @baa 0x00e2d590
int C_00e2d590::sub_00e2d590(void) { return *(int*)((char*)this + 0); }

struct C_00e2d5a0 { int sub_00e2d5a0(void); };

// @baa 0x00e2d5a0
int C_00e2d5a0::sub_00e2d5a0(void) { return *(int*)((char*)this + 4); }

int sub_00e2d630(...);
// @baa 0x00e2d980
void sub_00e2d980(undefined4 param_1, undefined4 * param_2)
{
  param_2 = (undefined4 *)*param_2;
  sub_00e2d630(param_1,&param_2);
  return;
}

int sub_00e2d760(...);
// @baa 0x00e2d9d0
undefined4 sub_00e2d9d0(undefined4 param_1, undefined4 param_2)
{
  sub_00e2d760(param_1,param_2);
  return param_1;
}

struct C_00e2f270{
int sub_00e2f270(undefined4*);
};

uint sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00e2f270
int C_00e2f270::sub_00e2f270(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4 iVar2;
int iVar3;
undefined4*puVar1;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1)||(iVar3!=0)){
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

typedef uint size_t;

struct C_00e2f370 {
    int sub_00e2f370(int);
    int sub_00e2cfb0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00e2f370
int C_00e2f370::sub_00e2f370(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e2f370 *)(this))->sub_00e2cfb0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct E_00e2f3b0 { BYTE Bytes[16]; };

struct S_00e2f3b0 {
    TArray<E_00e2f3b0> Items; // 0x00
    E_00e2f3b0* sub_00e2f3b0(INT Index);
};

// @baa 0x00e2f3b0
E_00e2f3b0* S_00e2f3b0::sub_00e2f3b0(INT Index)
{
    return &Items(Index);
}

struct C_00e2f400 {
    int sub_00e2f400(int);
    int sub_00e2d070(int);
};

// @baa 0x00e2f400
int C_00e2f400::sub_00e2f400(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e2f400 *)(this))->sub_00e2d070(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct E_00e2f430 { BYTE Bytes[24]; };

struct S_00e2f430 {
    TArray<E_00e2f430> Items; // 0x00
    E_00e2f430* sub_00e2f430(INT Index);
};

// @baa 0x00e2f430
E_00e2f430* S_00e2f430::sub_00e2f430(INT Index)
{
    return &Items(Index);
}

struct C_00e2f480 {
    int sub_00e2f480(int);
    int sub_00e2d100(int);
};

// @baa 0x00e2f480
int C_00e2f480::sub_00e2f480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e2f480 *)(this))->sub_00e2d100(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct E_00e2f4c0 { BYTE Bytes[24]; };

struct S_00e2f4c0 {
    TArray<E_00e2f4c0> Items; // 0x00
    E_00e2f4c0* sub_00e2f4c0(INT Index);
};

// @baa 0x00e2f4c0
E_00e2f4c0* S_00e2f4c0::sub_00e2f4c0(INT Index)
{
    return &Items(Index);
}

struct S_00e2f510 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e2f510(INT Index);
};

// @baa 0x00e2f510
DWORD* S_00e2f510::sub_00e2f510(INT Index)
{
    return &Items(Index);
}

struct E_00e2f5c0 { BYTE Bytes[36]; };

struct S_00e2f5c0 {
    TArray<E_00e2f5c0> Items; // 0x00
    E_00e2f5c0* sub_00e2f5c0(INT Index);
};

// @baa 0x00e2f5c0
E_00e2f5c0* S_00e2f5c0::sub_00e2f5c0(INT Index)
{
    return &Items(Index);
}

struct C_00e2f660 {
    int sub_00e2f660(int);
    int sub_00e2d270(int);
};

// @baa 0x00e2f660
int C_00e2f660::sub_00e2f660(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e2f660 *)(this))->sub_00e2d270(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct C_00e2f6a0 {
    int sub_00e2f6a0();
};

// @baa 0x00e2f6a0
int C_00e2f6a0::sub_00e2f6a0(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

// @baa 0x00e2f6b0
void __stdcall sub_00e2f6b0(int a0, int a1) {  }

struct C_00e2f6c0 {
    int sub_00e2f6c0(int);
};

// @baa 0x00e2f6c0
int C_00e2f6c0::sub_00e2f6c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00e2f6d0
void __stdcall sub_00e2f6d0(int a0, int a1) {  }

struct C_00e2f6e0 {
    int sub_00e2f6e0(int);
};

// @baa 0x00e2f6e0
int C_00e2f6e0::sub_00e2f6e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00e2f6f0 {
    int sub_00e2f6f0(int);
};

// @baa 0x00e2f6f0
int C_00e2f6f0::sub_00e2f6f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00e2f700 {
    int sub_00e2f700(int);
};

// @baa 0x00e2f700
int C_00e2f700::sub_00e2f700(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e2f710
void __stdcall sub_00e2f710(int a0, int a1) {  }

struct C_00e2f720 {
    int sub_00e2f720(int);
};

// @baa 0x00e2f720
int C_00e2f720::sub_00e2f720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00e2f730 {
    int sub_00e2f730(int);
};

// @baa 0x00e2f730
int C_00e2f730::sub_00e2f730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_00e2f750 { int sub_00544d40(int); };

// @baa 0x00e2f750
int sub_00e2f750(S_00e2f750 *s, int a) { return s->sub_00544d40(a); }

struct C_00e2f760 { int sub_00e2f760(void); };

// @baa 0x00e2f760
int C_00e2f760::sub_00e2f760(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e2f7f0 {
    int sub_00e2f7f0(int);
};

// @baa 0x00e2f7f0
int C_00e2f7f0::sub_00e2f7f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00e2f800 {
    int sub_00e2f800(int);
};

// @baa 0x00e2f800
int C_00e2f800::sub_00e2f800(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e2f810 { int sub_00e2f810(void); };

// @baa 0x00e2f810
int C_00e2f810::sub_00e2f810(void) { return *(int*)((char*)this + 20); }

struct C_00e2f820 {
    int sub_00e2f820();
};

// @baa 0x00e2f820
int C_00e2f820::sub_00e2f820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e2f840 {
    int sub_00e2f840(int);
};

// @baa 0x00e2f840
int C_00e2f840::sub_00e2f840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00e2f850 {
    int sub_00e2f850(int);
};

// @baa 0x00e2f850
int C_00e2f850::sub_00e2f850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e2f860 {
    int sub_00e2f860();
};

// @baa 0x00e2f860
int C_00e2f860::sub_00e2f860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e2f880 {
    int sub_00e2f880();
};

// @baa 0x00e2f880
int C_00e2f880::sub_00e2f880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00e2fb40
void sub_00e2fb40(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00e33440
int UPartyBeaconHost::sub_00e33440(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e33450 { void* Data; int Num; int Max; void sub_00e33450(); };

// @baa 0x00e33450
void C_00e33450::sub_00e33450() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e334b0 { void* Data; int Num; int Max; void sub_00e334b0(); };

// @baa 0x00e334b0
void C_00e334b0::sub_00e334b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e33630 { void* Data; int Num; int Max; void sub_00e33630(); };

// @baa 0x00e33630
void C_00e33630::sub_00e33630() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_00e33780 { void sub_0040fcc0(); };

struct C_00e33780 { char pad[4]; M_00e33780 m; void sub_00e33780(); };

// @baa 0x00e33780
void C_00e33780::sub_00e33780() { m.sub_0040fcc0(); }

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00e338f0
undefined4 * UPartyBeaconHost::sub_00e338f0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = puVar1[3];
  return param_1;
}

// @baa 0x00e33940
int UPartyBeaconHost::sub_00e33940(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_view_00e33950 {
    int sub_00e338f0(int);
};

// @baa 0x00e33950
int UPartyBeaconHost::sub_00e33950(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_00e33950 *)(this))->sub_00e338f0(param_2);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return param_1;
}

// @baa 0x00e33a00
int UPartyBeaconHost::sub_00e33a00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00e33a10
int UPartyBeaconHost::sub_00e33a10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00e33a30
int UPartyBeaconHost::sub_00e33a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_0040fcc0();
// @baa 0x00e33a40
void sub_00e33a40(void) { sub_0040fcc0(); }

// @baa 0x00e33a50
int UPartyBeaconHost::sub_00e33a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00e33a60
int UPartyBeaconHost::sub_00e33a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00e33a70
int UPartyBeaconHost::sub_00e33a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00e33a80
int UPartyBeaconHost::sub_00e33a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x00e33a90
int UPartyBeaconHost::sub_00e33a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x00e33aa0
int UPartyBeaconHost::sub_00e33aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00e37a70 { C_00e37a70* sub_00e37a70(void); };

// @baa 0x00e37a70
C_00e37a70* C_00e37a70::sub_00e37a70(void) { return this; }

struct C_00e37a80 { C_00e37a80* sub_00e37a80(void); };

// @baa 0x00e37a80
C_00e37a80* C_00e37a80::sub_00e37a80(void) { return this; }

struct C_00e37a90 { C_00e37a90* sub_00e37a90(void); };

// @baa 0x00e37a90
C_00e37a90* C_00e37a90::sub_00e37a90(void) { return this; }

// @baa 0x00e37aa0
int UPartyBeaconHost::sub_00e37aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00e37ab0
int UPartyBeaconHost::sub_00e37ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e37ac0 { void sub_00e33df0(int); C_00e37ac0 *sub_00e37ac0(int); };

// @baa 0x00e37ac0
C_00e37ac0 *C_00e37ac0::sub_00e37ac0(int a) { sub_00e33df0(a); return this; }

// @baa 0x00e37ae0
int UPartyBeaconHost::sub_00e37ae0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00e37b00
int UPartyBeaconHost::sub_00e37b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_view_00e37b10 {
    int sub_00e33450();
};

// @baa 0x00e37b10
undefined4 UPartyBeaconHost::sub_00e37b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e37b10 *)(((char *)this + 0xc)))->sub_00e33450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00e37b40 {
    int sub_0040fcc0();
};

// @baa 0x00e37b40
undefined4 UPartyBeaconHost::sub_00e37b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e37b40 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e33790(void);
// @baa 0x00e37b70
undefined4 UPartyBeaconHost::sub_00e37b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e33790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e337f0(void);
// @baa 0x00e37b90
undefined4 UPartyBeaconHost::sub_00e37b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e337f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e37c30
int UPartyBeaconHost::sub_00e37c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00e37ca0
int UPartyBeaconHost::sub_00e37ca0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
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

struct TConstSetBitIterator_00e37f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e37f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e37f20& operator++();
};

TConstSetBitIterator_00e37f20::TConstSetBitIterator_00e37f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e37f20
TConstSetBitIterator_00e37f20& TConstSetBitIterator_00e37f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e37f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e37f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e37f40& operator++();
};

TConstSetBitIterator_00e37f40::TConstSetBitIterator_00e37f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e37f40
TConstSetBitIterator_00e37f40& TConstSetBitIterator_00e37f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e37f90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e37f90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e37f90& operator++();
};

TConstSetBitIterator_00e37f90::TConstSetBitIterator_00e37f90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e37f90
TConstSetBitIterator_00e37f90& TConstSetBitIterator_00e37f90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e37fe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e37fe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e37fe0& operator++();
};

TConstSetBitIterator_00e37fe0::TConstSetBitIterator_00e37fe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e37fe0
TConstSetBitIterator_00e37fe0& TConstSetBitIterator_00e37fe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e38000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e38000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e38000& operator++();
};

TConstSetBitIterator_00e38000::TConstSetBitIterator_00e38000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e38000
TConstSetBitIterator_00e38000& TConstSetBitIterator_00e38000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e38020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e38020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e38020& operator++();
};

TConstSetBitIterator_00e38020::TConstSetBitIterator_00e38020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e38020
TConstSetBitIterator_00e38020& TConstSetBitIterator_00e38020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e38070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e38070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e38070& operator++();
};

TConstSetBitIterator_00e38070::TConstSetBitIterator_00e38070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e38070
TConstSetBitIterator_00e38070& TConstSetBitIterator_00e38070::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00e38140
// @baa 0x00e39270
struct C_00e395a0 { void sub_00e33df0(int); C_00e395a0 *sub_00e395a0(int); };

// @baa 0x00e395a0
C_00e395a0 *C_00e395a0::sub_00e395a0(int a) { sub_00e33df0(a); return this; }

// @baa 0x00e395c0
int UPartyBeaconHost::sub_00e395c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00e395e0
int UPartyBeaconHost::sub_00e395e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct C_00e395f0 {
    int sub_00e395f0(int);
    int sub_00e37bb0(int, int);
};

// @baa 0x00e395f0
int C_00e395f0::sub_00e395f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00e395f0 *)(this))->sub_00e37bb0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct TConstSetBitIterator_00e399e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e399e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e399e0& operator++();
};

TConstSetBitIterator_00e399e0::TConstSetBitIterator_00e399e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e399e0
TConstSetBitIterator_00e399e0& TConstSetBitIterator_00e399e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e39a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e39a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e39a00& operator++();
};

TConstSetBitIterator_00e39a00::TConstSetBitIterator_00e39a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e39a00
TConstSetBitIterator_00e39a00& TConstSetBitIterator_00e39a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e39a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e39a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e39a50& operator++();
};

TConstSetBitIterator_00e39a50::TConstSetBitIterator_00e39a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e39a50
TConstSetBitIterator_00e39a50& TConstSetBitIterator_00e39a50::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00e39c30
IMPLEMENT_CLASS_AT(UPartyBeaconClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UPartyBeacon.cpp", 9);

// @baa 0x00e3a7f0
IMPLEMENT_CLASS_AT(UPartyBeaconHost, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UPartyBeacon.cpp", 8);

// @baa 0x00e3a900
bool UPartyBeaconHost::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e3a940
// @baa 0x00e3aa00
// @baa 0x00e3ab10
bool UPartyBeaconClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00e3ac20 {
    int m_00;
    void sub_00e37bb0(int *, int);
    int sub_00e3ac20(int);
};

// @baa 0x00e3ac20
int C_00e3ac20::sub_00e3ac20(int i)
{
    sub_00e37bb0(&i, i);
    if (i != -1)
    {
        int p = i * 36 + m_00;
        if (p != 0)
            return p + 12;
    }
    return 0;
}

struct TConstSetBitIterator_00e3b260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e3b260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e3b260& operator++();
};

TConstSetBitIterator_00e3b260::TConstSetBitIterator_00e3b260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e3b260
TConstSetBitIterator_00e3b260& TConstSetBitIterator_00e3b260::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e3b280 {
    void sub_00e3b280();
    int sub_00e398e0(int);
};

// @baa 0x00e3b280
void C_00e3b280::sub_00e3b280(void)
{
    int param_1 = (int)this;
  ((C_00e3b280 *)((*(char **)((char *)this + 0x10))))->sub_00e398e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00e3b2a0 {
    void sub_00e3b2a0();
    int sub_00e39960(int);
};

// @baa 0x00e3b2a0
void C_00e3b2a0::sub_00e3b2a0(void)
{
    int param_1 = (int)this;
  ((C_00e3b2a0 *)((*(char **)((char *)this + 0x10))))->sub_00e39960(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00e3b1e0();
// @baa 0x00e3c9d0
void sub_00e3c9d0(void) { sub_00e3b1e0(); }

struct C_00e3c9e0 { C_00e3c9e0* sub_00e3c9e0(void); };

// @baa 0x00e3c9e0
C_00e3c9e0* C_00e3c9e0::sub_00e3c9e0(void) { return this; }

struct C_00e3c9f0 { C_00e3c9f0* sub_00e3c9f0(void); };

// @baa 0x00e3c9f0
C_00e3c9f0* C_00e3c9f0::sub_00e3c9f0(void) { return this; }

struct C_00e3ca00 { C_00e3ca00* sub_00e3ca00(void); };

// @baa 0x00e3ca00
C_00e3ca00* C_00e3ca00::sub_00e3ca00(void) { return this; }

struct C_00e3ca10 { C_00e3ca10* sub_00e3ca10(void); };

// @baa 0x00e3ca10
C_00e3ca10* C_00e3ca10::sub_00e3ca10(void) { return this; }

struct TConstSetBitIterator_00e3ca20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e3ca20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e3ca20& operator++();
};

TConstSetBitIterator_00e3ca20::TConstSetBitIterator_00e3ca20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e3ca20
TConstSetBitIterator_00e3ca20& TConstSetBitIterator_00e3ca20::operator++()
{
    It.Advance();
    return *this;
}

struct C_00e3cd90 {
    int sub_00e3cd90();
};

int sub_00e39aa0(void);
// @baa 0x00e3cd90
int C_00e3cd90::sub_00e3cd90(void)
{
    int param_1 = (int)this;

  sub_00e39aa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e34900(void);
extern undefined * g_020f5064;
extern undefined * g_020f5080;
// @baa 0x00e3cdb0
undefined4 * UPartyBeacon::sub_00e3cdb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e34900();
  *param_1 = (undefined4)(&g_020f5080);
  param_1[0xc] = (undefined4)(&g_020f5064);
  return param_1;
}

struct A_00e3cdd0 { virtual void sub_00e3ce70(); char pad[44]; };

struct B_00e3cdd0 { virtual void sub_00e3ce70(); };

struct C_00e3cdd0 : A_00e3cdd0, B_00e3cdd0 { virtual void sub_00e3ce70(); C_00e3cdd0(); };

C_00e3cdd0::C_00e3cdd0() {}

// @baa 0x00e3cdd0
void C_00e3cdd0::sub_00e3ce70() {}

// @baa 0x00e3cde0
// @baa 0x00e3ce70
int sub_00e34780(void);
extern undefined * g_020f51a8;
extern undefined * g_020f51c0;
// @baa 0x00e3cea0
undefined4 * UMCPBase::sub_00e3cea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e34780();
  *param_1 = (undefined4)(&g_020f51c0);
  param_1[0xc] = (undefined4)(&g_020f51a8);
  return param_1;
}

// @baa 0x00e3cec0
undefined8 sub_00e3cec0(undefined8 param_1)
{
  return param_1;
}

struct A_00e3ced0 { virtual void sub_00e3cfa0(); char pad[44]; };

struct B_00e3ced0 { virtual void sub_00e3cfa0(); };

struct C_00e3ced0 : A_00e3ced0, B_00e3ced0 { virtual void sub_00e3cfa0(); C_00e3ced0(); };

C_00e3ced0::C_00e3ced0() {}

// @baa 0x00e3ced0
void C_00e3ced0::sub_00e3cfa0() {}

struct C_00e3e2e0 {
    void sub_00e3e2e0();
    int sub_00e3cb80(int, int);
};

// @baa 0x00e3e2e0
void C_00e3e2e0::sub_00e3e2e0(void)
{
    int param_1 = (int)this;
  ((C_00e3e2e0 *)(this))->sub_00e3cb80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00e3e3c0 {
    undefined4 sub_00e3e3c0(undefined4, undefined4);
    int sub_00e3cc40(int, int);
};

// @baa 0x00e3e3c0
undefined4 C_00e3e3c0::sub_00e3e3c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e3e3c0 *)(this))->sub_00e3cc40(param_2, param_3);
  return param_1;
}

struct C_00e3e3e0 {
    int sub_00e3e3e0(undefined4, undefined4);
    int sub_00e3cca0(int, int);
};

// @baa 0x00e3e3e0
int C_00e3e3e0::sub_00e3e3e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e3e3e0 *)(this))->sub_00e3cca0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e3e400 {
    int sub_00e3e400(undefined4, undefined4);
    int sub_00e3cd20(int, int);
};

// @baa 0x00e3e400
int C_00e3e400::sub_00e3e400(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e3e400 *)(this))->sub_00e3cd20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e3e420 {
    int sub_00e3e420();
};

// @baa 0x00e3e420
int C_00e3e420::sub_00e3e420(void)
{
    int param_1 = (int)this;

  sub_00e39aa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e3e100();
// @baa 0x00e3e440
void sub_00e3e440(void) { sub_00e3e100(); }

// @baa 0x00e3e450
// @baa 0x00e3f300
