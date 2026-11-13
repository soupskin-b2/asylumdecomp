// DiffPackagesCommandlet.cpp (part 1 of 2): 160 functions
// Placed here by: neighbours 148, class 7, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_010149e0();
};

// @baa 0x010149e0
void C::sub_010149e0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x01015c90
IMPLEMENT_CLASS_AT(UDiffPackagesCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\DiffPackagesCommandlet.cpp", 1607);

// @baa 0x01015da0
int UDiffPackagesCommandlet::vf_000(void) { return 1; }

// @baa 0x01015db0
bool UDiffPackagesCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01019140 {
    undefined4 * sub_01019140(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_0218554c;
// @baa 0x01019140
undefined4 * C_01019140::sub_01019140(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0218554c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010191e0{
int sub_010191e0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x010191e0
int C_010191e0::sub_010191e0(undefined4*param_2)
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

struct C_01019240 {
    int sub_01019240(int);
    int sub_01016320(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01019240
int C_01019240::sub_01019240(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01019240 *)(this))->sub_01016320(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01019280(INT Index);
};

// @baa 0x01019280
E* S::sub_01019280(INT Index)
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
	FFaceFXElement* sub_010192d0(INT Index);
};

// @baa 0x010192d0
FFaceFXElement* UFxRenderWidget::sub_010192d0(INT Index)
{
	return &BoneArray(Index);
}

struct S_01019320 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01019320(INT Index);
};

// @baa 0x01019320
DWORD* S_01019320::sub_01019320(INT Index)
{
    return &Items(Index);
}

struct E_01019370 { BYTE Bytes[32]; };

struct S_01019370 {
    TArray<E_01019370> Items; // 0x00
    E_01019370* sub_01019370(INT Index);
};

// @baa 0x01019370
E_01019370* S_01019370::sub_01019370(INT Index)
{
    return &Items(Index);
}

struct E_010193c0 { BYTE Bytes[40]; };

struct S_010193c0 {
    TArray<E_010193c0> Items; // 0x00
    E_010193c0* sub_010193c0(INT Index);
};

// @baa 0x010193c0
E_010193c0* S_010193c0::sub_010193c0(INT Index)
{
    return &Items(Index);
}

// @baa 0x0101a500
void sub_0101a500(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

struct C_0101a530 { int sub_0101a530(void); };

// @baa 0x0101a530
int C_0101a530::sub_0101a530(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a540 { int sub_0101a540(void); };

// @baa 0x0101a540
int C_0101a540::sub_0101a540(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a550 { int sub_0101a550(void); };

// @baa 0x0101a550
int C_0101a550::sub_0101a550(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a560 { int sub_0101a560(void); };

// @baa 0x0101a560
int C_0101a560::sub_0101a560(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a570 { int sub_0101a570(void); };

// @baa 0x0101a570
int C_0101a570::sub_0101a570(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a580 { int sub_0101a580(void); };

// @baa 0x0101a580
int C_0101a580::sub_0101a580(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a590 { int sub_0101a590(void); };

// @baa 0x0101a590
int C_0101a590::sub_0101a590(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a5a0 { int sub_0101a5a0(void); };

// @baa 0x0101a5a0
int C_0101a5a0::sub_0101a5a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a5b0 { int sub_0101a5b0(void); };

// @baa 0x0101a5b0
int C_0101a5b0::sub_0101a5b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a5c0 { int sub_0101a5c0(void); };

// @baa 0x0101a5c0
int C_0101a5c0::sub_0101a5c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a5d0 { int sub_0101a5d0(void); };

// @baa 0x0101a5d0
int C_0101a5d0::sub_0101a5d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a5e0 { int sub_0101a5e0(void); };

// @baa 0x0101a5e0
int C_0101a5e0::sub_0101a5e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0101a630 {
    int sub_0101a630();
};

// @baa 0x0101a630
int C_0101a630::sub_0101a630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a650 {
    int sub_0101a650();
};

// @baa 0x0101a650
int C_0101a650::sub_0101a650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0101a660 {
    int sub_0101a660();
};

// @baa 0x0101a660
int C_0101a660::sub_0101a660(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a680 {
    int sub_0101a680();
};

// @baa 0x0101a680
int C_0101a680::sub_0101a680(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a6a0 {
    int sub_0101a6a0();
};

// @baa 0x0101a6a0
int C_0101a6a0::sub_0101a6a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a6c0 {
    int sub_0101a6c0();
};

// @baa 0x0101a6c0
int C_0101a6c0::sub_0101a6c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a6e0 {
    int sub_0101a6e0();
};

// @baa 0x0101a6e0
int C_0101a6e0::sub_0101a6e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a700 {
    int sub_0101a700();
};

// @baa 0x0101a700
int C_0101a700::sub_0101a700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a720 {
    int sub_0101a720();
};

// @baa 0x0101a720
int C_0101a720::sub_0101a720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a740 {
    int sub_0101a740();
};

// @baa 0x0101a740
int C_0101a740::sub_0101a740(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a760 {
    int sub_0101a760();
};

// @baa 0x0101a760
int C_0101a760::sub_0101a760(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a780 {
    int sub_0101a780();
};

// @baa 0x0101a780
int C_0101a780::sub_0101a780(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a7a0 {
    int sub_0101a7a0();
};

// @baa 0x0101a7a0
int C_0101a7a0::sub_0101a7a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101a7c0 {
    int sub_0101a7c0();
};

// @baa 0x0101a7c0
int C_0101a7c0::sub_0101a7c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct E_0101a7e0 { BYTE Bytes[152]; };

struct S_0101a7e0 {
    TArray<E_0101a7e0> Items; // 0x00
    const E_0101a7e0* sub_0101a7e0(INT Index) const;
};

// @baa 0x0101a7e0
const E_0101a7e0* S_0101a7e0::sub_0101a7e0(INT Index) const
{
    return &Items(Index);
}

struct C_0101a830 {
    int sub_0101a830(int);
};

// @baa 0x0101a830
int C_0101a830::sub_0101a830(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x98 + *param_1;
}

struct E_0101a840 { BYTE Bytes[128]; };

struct S_0101a840 {
    TArray<E_0101a840> Items; // 0x00
    const E_0101a840* sub_0101a840(INT Index) const;
};

// @baa 0x0101a840
const E_0101a840* S_0101a840::sub_0101a840(INT Index) const
{
    return &Items(Index);
}

struct C_0101a890 {
    int sub_0101a890(int);
};

// @baa 0x0101a890
int C_0101a890::sub_0101a890(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x80 + *param_1;
}

struct E_0101a8a0 { BYTE Bytes[176]; };

struct S_0101a8a0 {
    TArray<E_0101a8a0> Items; // 0x00
    const E_0101a8a0* sub_0101a8a0(INT Index) const;
};

// @baa 0x0101a8a0
const E_0101a8a0* S_0101a8a0::sub_0101a8a0(INT Index) const
{
    return &Items(Index);
}

struct C_0101a8f0 {
    int sub_0101a8f0(int);
};

// @baa 0x0101a8f0
int C_0101a8f0::sub_0101a8f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct E_0101a900 { BYTE Bytes[156]; };

struct S_0101a900 {
    TArray<E_0101a900> Items; // 0x00
    const E_0101a900* sub_0101a900(INT Index) const;
};

// @baa 0x0101a900
const E_0101a900* S_0101a900::sub_0101a900(INT Index) const
{
    return &Items(Index);
}

struct C_0101a950 {
    int sub_0101a950(int);
};

// @baa 0x0101a950
int C_0101a950::sub_0101a950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct E_0101a960 { BYTE Bytes[120]; };

struct S_0101a960 {
    TArray<E_0101a960> Items; // 0x00
    const E_0101a960* sub_0101a960(INT Index) const;
};

// @baa 0x0101a960
const E_0101a960* S_0101a960::sub_0101a960(INT Index) const
{
    return &Items(Index);
}

struct C_0101a9b0 {
    int sub_0101a9b0(int);
};

// @baa 0x0101a9b0
int C_0101a9b0::sub_0101a9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

struct S_0101a9d0 { int sub_00544d40(int); };

// @baa 0x0101a9d0
int sub_0101a9d0(S_0101a9d0 *s, int a) { return s->sub_00544d40(a); }

struct C_0101a9e0 {
    int sub_0101a9e0(int);
};

// @baa 0x0101a9e0
int C_0101a9e0::sub_0101a9e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101a9f0 {
    int sub_0101a9f0();
};

// @baa 0x0101a9f0
int C_0101a9f0::sub_0101a9f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0101aa10 { int sub_00544d40(int); };

// @baa 0x0101aa10
int sub_0101aa10(S_0101aa10 *s, int a) { return s->sub_00544d40(a); }

struct C_0101aa20 {
    int sub_0101aa20(int);
};

// @baa 0x0101aa20
int C_0101aa20::sub_0101aa20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101aa30 {
    int sub_0101aa30();
};

// @baa 0x0101aa30
int C_0101aa30::sub_0101aa30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0101aa50 { int sub_00544d40(int); };

// @baa 0x0101aa50
int sub_0101aa50(S_0101aa50 *s, int a) { return s->sub_00544d40(a); }

struct C_0101aa60 {
    int sub_0101aa60(int);
};

// @baa 0x0101aa60
int C_0101aa60::sub_0101aa60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101aa70 {
    int sub_0101aa70();
};

// @baa 0x0101aa70
int C_0101aa70::sub_0101aa70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0101aa90 { int sub_00544d40(int); };

// @baa 0x0101aa90
int sub_0101aa90(S_0101aa90 *s, int a) { return s->sub_00544d40(a); }

struct C_0101aaa0 {
    int sub_0101aaa0(int);
};

// @baa 0x0101aaa0
int C_0101aaa0::sub_0101aaa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101aab0 {
    int sub_0101aab0();
};

// @baa 0x0101aab0
int C_0101aab0::sub_0101aab0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0101aad0 { int sub_00544d40(int); };

// @baa 0x0101aad0
int sub_0101aad0(S_0101aad0 *s, int a) { return s->sub_00544d40(a); }

struct C_0101aae0 {
    int sub_0101aae0(int);
};

// @baa 0x0101aae0
int C_0101aae0::sub_0101aae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101aaf0 {
    int sub_0101aaf0();
};

// @baa 0x0101aaf0
int C_0101aaf0::sub_0101aaf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101ab90 {
    int sub_0101ab90(int);
};

// @baa 0x0101ab90
int C_0101ab90::sub_0101ab90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101ac20 {
    int sub_0101ac20(int);
};

// @baa 0x0101ac20
int C_0101ac20::sub_0101ac20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101acb0 {
    int sub_0101acb0(int);
};

// @baa 0x0101acb0
int C_0101acb0::sub_0101acb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101ad40 {
    int sub_0101ad40(int);
};

// @baa 0x0101ad40
int C_0101ad40::sub_0101ad40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101add0 {
    int sub_0101add0(int);
};

// @baa 0x0101add0
int C_0101add0::sub_0101add0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101ade0 {
    int sub_0101ade0();
};

// @baa 0x0101ade0
int C_0101ade0::sub_0101ade0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101ae00 {
    int sub_0101ae00();
};

// @baa 0x0101ae00
int C_0101ae00::sub_0101ae00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101ae10 {
    int sub_0101ae10();
};

// @baa 0x0101ae10
int C_0101ae10::sub_0101ae10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101ae30 {
    int sub_0101ae30();
};

// @baa 0x0101ae30
int C_0101ae30::sub_0101ae30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101ae40 {
    int sub_0101ae40();
};

// @baa 0x0101ae40
int C_0101ae40::sub_0101ae40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101ae60 {
    int sub_0101ae60();
};

// @baa 0x0101ae60
int C_0101ae60::sub_0101ae60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101ae70 {
    int sub_0101ae70();
};

// @baa 0x0101ae70
int C_0101ae70::sub_0101ae70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101ae90 {
    int sub_0101ae90();
};

// @baa 0x0101ae90
int C_0101ae90::sub_0101ae90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101aea0 {
    int sub_0101aea0();
};

// @baa 0x0101aea0
int C_0101aea0::sub_0101aea0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0101aec0 {
    int sub_0101aec0();
};

// @baa 0x0101aec0
int C_0101aec0::sub_0101aec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101aed0 {
    int sub_0101aed0();
};

// @baa 0x0101aed0
int C_0101aed0::sub_0101aed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101aee0 {
    int sub_0101aee0();
};

// @baa 0x0101aee0
int C_0101aee0::sub_0101aee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101aef0 {
    int sub_0101aef0();
};

// @baa 0x0101aef0
int C_0101aef0::sub_0101aef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101af00 {
    int sub_0101af00();
};

// @baa 0x0101af00
int C_0101af00::sub_0101af00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101af10 {
    int sub_0101af10();
};

// @baa 0x0101af10
int C_0101af10::sub_0101af10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0101af20 {
    FString sub_0101af20();
};

// @baa 0x0101af20
FString C_0101af20::sub_0101af20()
{
    return TEXT("FObjectWriter");
}

struct C_0101af50 {
    FString sub_0101af50();
};

// @baa 0x0101af50
FString C_0101af50::sub_0101af50()
{
    return TEXT("FObjectReader");
}

// @baa 0x0101b220
void __stdcall sub_0101b220(int a0, int a1) {  }

// @baa 0x0101b230
void __stdcall sub_0101b230(int a0, int a1) {  }

// @baa 0x0101b240
void __stdcall sub_0101b240(int a0, int a1) {  }

// @baa 0x0101b250
void __stdcall sub_0101b250(int a0, int a1) {  }

// @baa 0x0101b260
void __stdcall sub_0101b260(int a0, int a1) {  }

// @baa 0x0101b270
void __stdcall sub_0101b270(int a0, int a1) {  }

// @baa 0x0101b280
void __stdcall sub_0101b280(int a0, int a1) {  }

// @baa 0x0101b290
void __stdcall sub_0101b290(int a0, int a1) {  }

// @baa 0x0101b2a0
void __stdcall sub_0101b2a0(int a0, int a1) {  }

// @baa 0x0101b2b0
void __stdcall sub_0101b2b0(int a0, int a1) {  }

struct C_0101b2c0 {
    int sub_0101b2c0(int);
};

// @baa 0x0101b2c0
int C_0101b2c0::sub_0101b2c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0101b2d0 {
    int sub_0101b2d0(int);
};

// @baa 0x0101b2d0
int C_0101b2d0::sub_0101b2d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101b2e0 {
    int sub_0101b2e0(int);
};

// @baa 0x0101b2e0
int C_0101b2e0::sub_0101b2e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_0101b2f0 {
    int sub_0101b2f0(int);
};

// @baa 0x0101b2f0
int C_0101b2f0::sub_0101b2f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

struct C_0101b300 {
    int sub_0101b300(int);
};

// @baa 0x0101b300
int C_0101b300::sub_0101b300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xcc + *param_1;
}

struct C_0101b310 {
    int sub_0101b310(int);
};

// @baa 0x0101b310
int C_0101b310::sub_0101b310(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 300 + *param_1;
}

struct C_0101b320 {
    int sub_0101b320(int);
};

// @baa 0x0101b320
int C_0101b320::sub_0101b320(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 200 + *param_1;
}

struct C_0101b330 {
    int sub_0101b330(int);
};

// @baa 0x0101b330
int C_0101b330::sub_0101b330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101b340 {
    int sub_0101b340(int);
};

// @baa 0x0101b340
int C_0101b340::sub_0101b340(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xc4 + *param_1;
}

struct C_0101b350 {
    int sub_0101b350(int);
};

// @baa 0x0101b350
int C_0101b350::sub_0101b350(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x8c + *param_1;
}

struct C_0101b360 {
    int sub_0101b360(int);
};

// @baa 0x0101b360
int C_0101b360::sub_0101b360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101b370 {
    int sub_0101b370(int);
};

// @baa 0x0101b370
int C_0101b370::sub_0101b370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x94 + *param_1;
}

struct C_0101b380 {
    int sub_0101b380(int);
};

// @baa 0x0101b380
int C_0101b380::sub_0101b380(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x88 + *param_1;
}

struct C_0101b390 {
    int sub_0101b390(int);
};

// @baa 0x0101b390
int C_0101b390::sub_0101b390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xa0 + *param_1;
}

struct C_0101b3a0 {
    int sub_0101b3a0(int);
};

// @baa 0x0101b3a0
int C_0101b3a0::sub_0101b3a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0101b430 {
    int sub_0101b430();
};

// @baa 0x0101b430
int C_0101b430::sub_0101b430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct C_0101b4a0 {
    int sub_0101b4a0();
};

// @baa 0x0101b4a0
int C_0101b4a0::sub_0101b4a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

int sub_005a9220(void);
// @baa 0x01021030
undefined4 UObject::sub_01021030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005a9220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01021190 {
    int sub_01021190();
};

// @baa 0x01021190
int C_01021190::sub_01021190(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010211b0 {
    int sub_010211b0();
};

// @baa 0x010211b0
int C_010211b0::sub_010211b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010211d0 {
    int sub_010211d0();
};

// @baa 0x010211d0
int C_010211d0::sub_010211d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x24;
}

struct C_010211e0 {
    int sub_010211e0();
};

// @baa 0x010211e0
int C_010211e0::sub_010211e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01021200 {
    int sub_01021200();
};

// @baa 0x01021200
int C_01021200::sub_01021200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + 4 + *(int *)*param_1;
}

struct C_01021210 {
    int sub_01021210();
};

// @baa 0x01021210
int C_01021210::sub_01021210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01021230 {
    int sub_01021230();
};

// @baa 0x01021230
int C_01021230::sub_01021230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x1c;
}

struct C_010212f0 { int a, b, c; C_010212f0(); };

// @baa 0x010212f0
C_010212f0::C_010212f0() : a(0), b(0), c(0) {}

// @baa 0x01032e20
UDiffPackagesCommandlet::UDiffPackagesCommandlet()
{
    if (!(ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01032e80
int sub_005c7a70(...);
int sub_01032e80(void);
// @baa 0x01032ee0
undefined4 UDiffPackagesCommandlet::sub_01032ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01032e80();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x88);
  }
  return param_1;
}

void sub_01023c40();
// @baa 0x01032f10
void sub_01032f10(void) { sub_01023c40(); }

int sub_01023c40(...);
// @baa 0x01032f20
bool sub_01032f20(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01023c40(param_1,param_2);
  return iVar1 == 0;
}

int sub_01024750(void);
// @baa 0x010330b0
int UTexture2D::sub_010330b0(void)
{
    int param_1 = (int)this;

  sub_01024750();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_01030280(int, int);
};

// @baa 0x01034350
undefined4 UObject::sub_01034350(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_01030280(param_2, param_3);
  return param_1;
}

struct C_010344a0 {
    void sub_010344a0();
    int sub_01030150(int);
};

// @baa 0x010344a0
void C_010344a0::sub_010344a0(void)
{
    int param_1 = (int)this;
  ((C_010344a0 *)((*(char **)((char *)this + 0x10))))->sub_01030150(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010344c0 {
    undefined4 sub_010344c0(byte);
};

int sub_0102fda0(void);
// @baa 0x010344c0
undefined4 C_010344c0::sub_010344c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0102fda0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_01034f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01034f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01034f60& operator++();
};

TConstSetBitIterator_01034f60::TConstSetBitIterator_01034f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01034f60
TConstSetBitIterator_01034f60& TConstSetBitIterator_01034f60::operator++()
{
    It.Advance();
    return *this;
}

struct C_01035af0 {
    int sub_01035af0();
};

int sub_01028f60(void);
// @baa 0x01035af0
int C_01035af0::sub_01035af0(void)
{
    int param_1 = (int)this;

  sub_01028f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01035b10 {
    int sub_01035b10();
};

int sub_01029010(void);
// @baa 0x01035b10
int C_01035b10::sub_01035b10(void)
{
    int param_1 = (int)this;

  sub_01029010();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01035b30 {
    int sub_01035b30();
};

int sub_01029070(void);
// @baa 0x01035b30
int C_01035b30::sub_01035b30(void)
{
    int param_1 = (int)this;

  sub_01029070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01035b50 {
    int sub_01035b50();
};

int sub_010290d0(void);
// @baa 0x01035b50
int C_01035b50::sub_01035b50(void)
{
    int param_1 = (int)this;

  sub_010290d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_01035bd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035bd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035bd0& operator++();
};

TConstSetBitIterator_01035bd0::TConstSetBitIterator_01035bd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035bd0
TConstSetBitIterator_01035bd0& TConstSetBitIterator_01035bd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035c20& operator++();
};

TConstSetBitIterator_01035c20::TConstSetBitIterator_01035c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035c20
TConstSetBitIterator_01035c20& TConstSetBitIterator_01035c20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035c70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035c70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035c70& operator++();
};

TConstSetBitIterator_01035c70::TConstSetBitIterator_01035c70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035c70
TConstSetBitIterator_01035c70& TConstSetBitIterator_01035c70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035cc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035cc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035cc0& operator++();
};

TConstSetBitIterator_01035cc0::TConstSetBitIterator_01035cc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035cc0
TConstSetBitIterator_01035cc0& TConstSetBitIterator_01035cc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035d10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035d10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035d10& operator++();
};

TConstSetBitIterator_01035d10::TConstSetBitIterator_01035d10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035d10
TConstSetBitIterator_01035d10& TConstSetBitIterator_01035d10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035d60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035d60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035d60& operator++();
};

TConstSetBitIterator_01035d60::TConstSetBitIterator_01035d60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035d60
TConstSetBitIterator_01035d60& TConstSetBitIterator_01035d60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035db0& operator++();
};

TConstSetBitIterator_01035db0::TConstSetBitIterator_01035db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035db0
TConstSetBitIterator_01035db0& TConstSetBitIterator_01035db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035e00& operator++();
};

TConstSetBitIterator_01035e00::TConstSetBitIterator_01035e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035e00
TConstSetBitIterator_01035e00& TConstSetBitIterator_01035e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035e50& operator++();
};

TConstSetBitIterator_01035e50::TConstSetBitIterator_01035e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035e50
TConstSetBitIterator_01035e50& TConstSetBitIterator_01035e50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035ea0& operator++();
};

TConstSetBitIterator_01035ea0::TConstSetBitIterator_01035ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035ea0
TConstSetBitIterator_01035ea0& TConstSetBitIterator_01035ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035ef0& operator++();
};

TConstSetBitIterator_01035ef0::TConstSetBitIterator_01035ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035ef0
TConstSetBitIterator_01035ef0& TConstSetBitIterator_01035ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035f40& operator++();
};

TConstSetBitIterator_01035f40::TConstSetBitIterator_01035f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035f40
TConstSetBitIterator_01035f40& TConstSetBitIterator_01035f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01035f90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01035f90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01035f90& operator++();
};

TConstSetBitIterator_01035f90::TConstSetBitIterator_01035f90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01035f90
TConstSetBitIterator_01035f90& TConstSetBitIterator_01035f90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010360a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010360a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010360a0& operator++();
};

TConstSetBitIterator_010360a0::TConstSetBitIterator_010360a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010360a0
TConstSetBitIterator_010360a0& TConstSetBitIterator_010360a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010361b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010361b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010361b0& operator++();
};

TConstSetBitIterator_010361b0::TConstSetBitIterator_010361b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010361b0
TConstSetBitIterator_010361b0& TConstSetBitIterator_010361b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010362c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010362c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010362c0& operator++();
};

TConstSetBitIterator_010362c0::TConstSetBitIterator_010362c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010362c0
TConstSetBitIterator_010362c0& TConstSetBitIterator_010362c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010363d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010363d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010363d0& operator++();
};

TConstSetBitIterator_010363d0::TConstSetBitIterator_010363d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010363d0
TConstSetBitIterator_010363d0& TConstSetBitIterator_010363d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010364e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010364e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010364e0& operator++();
};

TConstSetBitIterator_010364e0::TConstSetBitIterator_010364e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010364e0
TConstSetBitIterator_010364e0& TConstSetBitIterator_010364e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01036a10 {
    undefined4 sub_01036a10(int *);
    int sub_0071d4a0(int);
};

// @baa 0x01036a10
undefined4 C_01036a10::sub_01036a10(int * param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  if ((*param_1 == 0) == (*param_2 == 0)) {
    iVar1 = ((C_01036a10 *)(((char *)this + 4)))->sub_0071d4a0((int)(param_2 + 1));
    if (iVar1 != 0) {
      iVar1 = sub_01023c40(param_1 + 4,param_2 + 4);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

struct C_01036a60 {
    undefined4 sub_01036a60(int *);
    int sub_007b1a70(int);
};

// @baa 0x01036a60
undefined4 C_01036a60::sub_01036a60(int * param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  if ((*param_1 == 0) == (*param_2 == 0)) {
    iVar1 = ((C_01036a60 *)(((char *)this + 4)))->sub_007b1a70((int)(param_2 + 1));
    if (iVar1 == 0) {
      iVar1 = sub_01023c40(param_1 + 4,param_2 + 4);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

// @baa 0x01036ab0
// @baa 0x01036bd0
int UTexture2D::sub_01036bd0(void)
{
    int param_1 = (int)this;

  sub_01024750();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01033050();
// @baa 0x01036bf0
void sub_01036bf0(void) { sub_01033050(); }

// @baa 0x01037510
