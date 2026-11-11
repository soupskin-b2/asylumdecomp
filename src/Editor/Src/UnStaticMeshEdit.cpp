// UnStaticMeshEdit.cpp (part 1 of 3): 47 functions
// Placed here by: neighbours 42, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C{
int sub_00ff1f80(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00ff1f80
int C::sub_00ff1f80(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x18);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,0x18*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x18);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
puVar1[5]=param_2[5];
}
return iVar2;
}

struct E { BYTE Bytes[276]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00ff2000(INT Index);
};

// @baa 0x00ff2000
E* S::sub_00ff2000(INT Index)
{
    return &Items(Index);
}

struct E_00ff2050 { BYTE Bytes[24]; };

struct S_00ff2050 {
    TArray<E_00ff2050> Items; // 0x00
    E_00ff2050* sub_00ff2050(INT Index);
};

// @baa 0x00ff2050
E_00ff2050* S_00ff2050::sub_00ff2050(INT Index)
{
    return &Items(Index);
}

struct E_00ff20a0 { BYTE Bytes[16]; };

struct S_00ff20a0 {
    TArray<E_00ff20a0> Items; // 0x00
    E_00ff20a0* sub_00ff20a0(INT Index);
};

// @baa 0x00ff20a0
E_00ff20a0* S_00ff20a0::sub_00ff20a0(INT Index)
{
    return &Items(Index);
}

struct E_00ff20f0 { BYTE Bytes[12]; };

struct S_00ff20f0 {
    TArray<E_00ff20f0> Items; // 0x00
    E_00ff20f0* sub_00ff20f0(INT Index);
};

// @baa 0x00ff20f0
E_00ff20f0* S_00ff20f0::sub_00ff20f0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00ff2140 {
    int sub_00ff2140(int);
    int sub_00ff0640(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ff2140
int C_00ff2140::sub_00ff2140(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ff2140 *)(this))->sub_00ff0640(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E_00ff2180 { BYTE Bytes[24]; };

struct S_00ff2180 {
    TArray<E_00ff2180> Items; // 0x00
    E_00ff2180* sub_00ff2180(INT Index);
};

// @baa 0x00ff2180
E_00ff2180* S_00ff2180::sub_00ff2180(INT Index)
{
    return &Items(Index);
}

struct C_00ff21d0 {
    int sub_00ff21d0(int);
    int sub_00ff06c0(int);
};

// @baa 0x00ff21d0
int C_00ff21d0::sub_00ff21d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ff21d0 *)(this))->sub_00ff06c0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct E_00ff2210 { BYTE Bytes[12]; };

struct S_00ff2210 {
    TArray<E_00ff2210> Items; // 0x00
    E_00ff2210* sub_00ff2210(INT Index);
};

// @baa 0x00ff2210
E_00ff2210* S_00ff2210::sub_00ff2210(INT Index)
{
    return &Items(Index);
}

struct C_00ff2260 {
    int sub_00ff2260(int);
};

// @baa 0x00ff2260
int C_00ff2260::sub_00ff2260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ff22f0 {
    int sub_00ff22f0(int);
};

// @baa 0x00ff22f0
int C_00ff22f0::sub_00ff22f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ff2300 {
    int sub_00ff2300(int);
};

// @baa 0x00ff2300
int C_00ff2300::sub_00ff2300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ff2310 {
    int sub_00ff2310(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00ff2310
int C_00ff2310::sub_00ff2310(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *param_1 + -4 + (param_1[1] - param_2) * 4;
}

struct C_00ff23b0 {
    int sub_00ff23b0(int);
};

// @baa 0x00ff23b0
int C_00ff23b0::sub_00ff23b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ff2430 {
    int sub_00ff2430(int);
};

// @baa 0x00ff2430
int C_00ff2430::sub_00ff2430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

// @baa 0x00ff2450
void __stdcall sub_00ff2450(int a0, int a1) {  }

struct C_00ff2460 {
    int sub_00ff2460(int);
};

// @baa 0x00ff2460
int C_00ff2460::sub_00ff2460(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa8 + *param_1;
}

// @baa 0x00ff2470
void __stdcall sub_00ff2470(int a0, int a1) {  }

struct C_00ff2480 {
    int sub_00ff2480(int);
};

// @baa 0x00ff2480
int C_00ff2480::sub_00ff2480(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00ff2490
void __stdcall sub_00ff2490(int a0, int a1) {  }

struct C_00ff24a0 {
    int sub_00ff24a0(int);
};

// @baa 0x00ff24a0
int C_00ff24a0::sub_00ff24a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00ff24b0
void __stdcall sub_00ff24b0(int a0, int a1) {  }

struct C_00ff24c0 {
    int sub_00ff24c0(int);
};

// @baa 0x00ff24c0
int C_00ff24c0::sub_00ff24c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00ff24d0
void __stdcall sub_00ff24d0(int a0, int a1) {  }

struct C_00ff24e0 {
    int sub_00ff24e0(int);
};

// @baa 0x00ff24e0
int C_00ff24e0::sub_00ff24e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x114 + *param_1;
}

// @baa 0x00ff24f0
void __stdcall sub_00ff24f0(int a0, int a1) {  }

struct C_00ff2500 {
    int sub_00ff2500(int);
};

// @baa 0x00ff2500
int C_00ff2500::sub_00ff2500(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ff2510 {
    int sub_00ff2510(int);
};

// @baa 0x00ff2510
int C_00ff2510::sub_00ff2510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00ff2520
void __stdcall sub_00ff2520(int a0, int a1) {  }

struct C_00ff2530 {
    int sub_00ff2530(int);
};

// @baa 0x00ff2530
int C_00ff2530::sub_00ff2530(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ff2540 {
    int sub_00ff2540(int);
};

// @baa 0x00ff2540
int C_00ff2540::sub_00ff2540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ff2550 {
    int sub_00ff2550(int);
};

// @baa 0x00ff2550
int C_00ff2550::sub_00ff2550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

int sub_005413d0(...);
// @baa 0x00ff25d0
void sub_00ff25d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00ff25e0 {
    int sub_00ff25e0(int);
};

// @baa 0x00ff25e0
int C_00ff25e0::sub_00ff25e0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00ff2690 {
    int sub_00ff2690();
};

// @baa 0x00ff2690
int C_00ff2690::sub_00ff2690(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ff26b0 {
    int sub_00ff26b0();
};

// @baa 0x00ff26b0
int C_00ff26b0::sub_00ff26b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ff26c0 {
    int sub_00ff26c0(int);
};

// @baa 0x00ff26c0
int C_00ff26c0::sub_00ff26c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ff26d0 {
    int sub_00ff26d0();
};

// @baa 0x00ff26d0
int C_00ff26d0::sub_00ff26d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ff26e0 {
    int sub_00ff26e0(int);
};

// @baa 0x00ff26e0
int C_00ff26e0::sub_00ff26e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00ff26f0 {
    int sub_00ff26f0();
};

// @baa 0x00ff26f0
int C_00ff26f0::sub_00ff26f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ff2710 {
    int sub_00ff2710();
};

// @baa 0x00ff2710
int C_00ff2710::sub_00ff2710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ff2720 {
    int sub_00ff2720();
};

// @baa 0x00ff2720
int C_00ff2720::sub_00ff2720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ff6850 { void* Data; int Num; int Max; void sub_00ff6850(); };

// @baa 0x00ff6850
void C_00ff6850::sub_00ff6850() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ff68b0 { void* Data; int Num; int Max; void sub_00ff68b0(); };

// @baa 0x00ff68b0
void C_00ff68b0::sub_00ff68b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ff6910 { void* Data; int Num; int Max; void sub_00ff6910(); };

// @baa 0x00ff6910
void C_00ff6910::sub_00ff6910() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x010000f0
UStaticMeshFactory::UStaticMeshFactory()
{
    *(DWORD*)((BYTE*)this + 0x50) |= 0x4;
}

IMPLEMENT_CLASS_AT(UStaticMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnStaticMeshEdit.cpp", 2399);
// @baa 0x010015c0
