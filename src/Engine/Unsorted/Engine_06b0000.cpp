// Engine_06b0000.cpp (part 1 of 3): 145 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_006b1c90(void); };

// @baa 0x006b1c90
int C::sub_006b1c90(void) { return *(int*)((char*)this + 80); }

struct C_006b1ca0 {
    undefined4 sub_006b1ca0();
};

// @baa 0x006b1ca0
undefined4 C_006b1ca0::sub_006b1ca0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    return 1;
  }
  return 0;
}

struct C_006b1d30 {
    undefined4 sub_006b1d30(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x006b1d30
undefined4 C_006b1d30::sub_006b1d30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b1dc0 {
    undefined4 sub_006b1dc0(byte);
};

// @baa 0x006b1dc0
undefined4 C_006b1dc0::sub_006b1dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b1e50 {
    undefined4 sub_006b1e50(byte);
};

// @baa 0x006b1e50
undefined4 C_006b1e50::sub_006b1e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b1eb0 {
    int sub_006b1eb0();
};

// @baa 0x006b1eb0
int C_006b1eb0::sub_006b1eb0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

int sub_006efb40(void);
// @baa 0x006b1ec0
undefined4 ULensFlare::sub_006b1ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006b1f60
int UDrawLightRadiusComponent::sub_006b1f60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x006b1f70
undefined4 UDrawLightRadiusComponent::sub_006b1f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b3690 {
    void sub_006b3690();
};

// @baa 0x006b3690
void C_006b3690::sub_006b3690(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}

struct C_006b36a0 {
    undefined4 sub_006b36a0(byte);
};

// @baa 0x006b36a0
undefined4 C_006b36a0::sub_006b36a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_006b0ee0(int);
};

extern undefined * g_01ece640;
// @baa 0x006b3a40
undefined4 * UTexture2D::sub_006b3a40(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_006b0ee0(param_2);
  *param_1 = (undefined4)(&g_01ece640);
  return param_1;
}

struct C_006b3a60 {
    undefined4 * sub_006b3a60(byte);
};

extern undefined * g_01e72a60;
// @baa 0x006b3a60
undefined4 * C_006b3a60::sub_006b3a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b3d90 { char* sub_006b3d90(void); };

// @baa 0x006b3d90
char* C_006b3d90::sub_006b3d90(void) { return (char*)this + 560; }

int sub_00716170(...);
// @baa 0x006b3df0
void ULensFlare::sub_006b3df0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  return;
}

// @baa 0x006b3e30
int ULensFlare::sub_006b3e30(void) { return *(int*)((char*)this + 0); }

// @baa 0x006b3e40
int ULensFlare::sub_006b3e40(void) { return *(int*)((char*)this + 4); }

extern undefined * g_01ecdfc8;
// @baa 0x006b4030
undefined4 * ULensFlare::sub_006b4030(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_01ece6a0;
// @baa 0x006b4170
undefined4 * sub_006b4170(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x1c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ece6a0);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x006b41d0
char* ULensFlare::sub_006b41d0(void) { return (char*)this + 16; }

// @baa 0x006b41e0
char* ULensFlare::sub_006b41e0(void) { return (char*)this + 80; }

// @baa 0x006b4270
void ULensFlare::sub_006b4270(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_00716170(param_2,param_1 + 0x1c);
  sub_00716170(param_2,param_1 + 0x22);
  sub_00716170(param_2,param_1 + 0x28);
  return;
}

struct C_006b4470 {
    undefined4 * sub_006b4470(byte);
};

// @baa 0x006b4470
undefined4 * C_006b4470::sub_006b4470(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ece72c;
// @baa 0x006b4490
undefined4 * sub_006b4490(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x30,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *puVar1 = (undefined4)(&g_01ece72c);
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006b4be0 { char* sub_006b4be0(void); };

// @baa 0x006b4be0
char* C_006b4be0::sub_006b4be0(void) { return (char*)this + 92; }

struct C_006b4bf0 { char* sub_006b4bf0(void); };

// @baa 0x006b4bf0
char* C_006b4bf0::sub_006b4bf0(void) { return (char*)this + 100; }

struct C_006b4c00 { char* sub_006b4c00(void); };

// @baa 0x006b4c00
char* C_006b4c00::sub_006b4c00(void) { return (char*)this + 112; }

struct C_006b4c30 { char* sub_006b4c30(void); };

// @baa 0x006b4c30
char* C_006b4c30::sub_006b4c30(void) { return (char*)this + 136; }

struct C_006b4d70 {
    void sub_006b4d70(undefined4);
};

// @baa 0x006b4d70
void C_006b4d70::sub_006b4d70(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_00716170(param_2,param_1 + 0x1c);
  sub_00716170(param_2,param_1 + 0x22);
  sub_00716170(param_2,param_1 + 0x28);
  sub_00716170(param_2,param_1 + 0x2e);
  sub_00716170(param_2,param_1 + 0x34);
  return;
}

struct C_006b4ef0 {
    undefined4 * sub_006b4ef0(byte);
};

// @baa 0x006b4ef0
undefined4 * C_006b4ef0::sub_006b4ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern void *g_026b2234;
extern void *g_026c3cdc;
struct ResA { char pa[0x50]; int f50; };

struct ObjA {
    virtual void d0(void) {} virtual void d1(void) {} virtual void d2(void) {} virtual void d3(void) {}
    virtual void d4(void) {} virtual void d5(void) {} virtual void d6(void) {} virtual void d7(void) {}
    virtual void d8(void) {} virtual void d9(void) {} virtual void d10(void) {} virtual void d11(void) {}
    virtual void d12(void) {} virtual void d13(void) {} virtual void d14(void) {} virtual void d15(void) {}
    virtual void d16(void) {} virtual void d17(void) {} virtual void d18(void) {} virtual void d19(void) {}
    virtual void d20(void) {} virtual void d21(void) {} virtual void d22(void) {} virtual void d23(void) {}
    virtual void d24(void) {} virtual void d25(void) {} virtual void d26(void) {} virtual void d27(void) {}
    virtual void d28(void) {} virtual void d29(void) {} virtual void d30(void) {} virtual void d31(void) {}
    virtual void d32(void) {} virtual void d33(void) {} virtual void d34(void) {} virtual void d35(void) {}
    virtual void d36(void) {} virtual void d37(void) {} virtual void d38(void) {} virtual void d39(void) {}
    virtual void d40(void) {} virtual void d41(void) {} virtual void d42(void) {} virtual void d43(void) {}
    virtual void d44(void) {} virtual void d45(void) {} virtual void d46(void) {} virtual void d47(void) {}
    virtual void d48(void) {} virtual void d49(void) {} virtual void d50(void) {} virtual void d51(void) {}
    virtual void d52(void) {} virtual void d53(void) {} virtual void d54(void) {} virtual void d55(void) {}
    virtual void d56(void) {} virtual void d57(void) {} virtual void d58(void) {} virtual void d59(void) {}
    virtual void d60(void) {} virtual void d61(void) {} virtual void d62(void) {} virtual void d63(void) {}
    virtual void d64(void) {} virtual void d65(void) {} virtual void d66(void) {} virtual void d67(void) {}
    virtual void d68(void) {} virtual void d69(void) {} virtual void d70(void) {} virtual void d71(void) {}
    virtual void d72(void) {} virtual void d73(void) {} virtual void d74(void) {} virtual void d75(void) {}
    virtual void d76(void) {} virtual void d77(void) {} virtual void d78(void) {} virtual void d79(void) {}
    virtual void d80(void) {} virtual void d81(void) {} virtual void d82(void) {}
    virtual ResA *fA(void *);
};

ResA *ObjA::fA(void *) { return 0; }

struct ObjB {
    virtual void d0(void) {}
    virtual void d1(void) {} virtual void d2(void) {} virtual void d3(void) {} virtual void d4(void) {}
    virtual void d5(void) {} virtual void d6(void) {} virtual void d7(void) {} virtual void d8(void) {}
    virtual void d9(void) {} virtual void d10(void) {} virtual void d11(void) {} virtual void d12(void) {}
    virtual void d13(void) {} virtual void d14(void) {} virtual void d15(void) {} virtual void d16(void) {}
    virtual void d17(void) {} virtual void d18(void) {} virtual void d19(void) {} virtual void d20(void) {}
    virtual void d21(void) {} virtual void d22(void) {} virtual void d23(void) {} virtual void d24(void) {}
    virtual void d25(void) {} virtual void d26(void) {} virtual void d27(void) {} virtual void d28(void) {}
    virtual void d29(void) {} virtual void d30(void) {} virtual void d31(void) {} virtual void d32(void) {}
    virtual void d33(void) {} virtual void d34(void) {} virtual void d35(void) {} virtual void d36(void) {}
    virtual void d37(void) {} virtual void d38(void) {} virtual void d39(void) {} virtual void d40(void) {}
    virtual void d41(void) {} virtual void d42(void) {} virtual void d43(void) {} virtual void d44(void) {}
    virtual void d45(void) {} virtual void d46(void) {} virtual void d47(void) {} virtual void d48(void) {}
    virtual void d49(void) {} virtual void d50(void) {} virtual void d51(void) {} virtual void d52(void) {}
    virtual void d53(void) {} virtual void d54(void) {} virtual void d55(void) {} virtual void d56(void) {}
    virtual void d57(void) {} virtual void d58(void) {} virtual void d59(void) {} virtual void d60(void) {}
    virtual void d61(void) {} virtual void d62(void) {} virtual void d63(void) {} virtual void d64(void) {}
    virtual void d65(void) {} virtual void d66(void) {} virtual void d67(void) {} virtual void d68(void) {}
    virtual void d69(void) {} virtual void d70(void) {} virtual void d71(void) {} virtual void d72(void) {}
    virtual void d73(void) {} virtual void d74(void) {} virtual void d75(void) {} virtual void d76(void) {}
    virtual void d77(void) {}
    virtual void *fB(void *);
};

void *ObjB::fB(void *) { return 0; }

struct ResB {
    virtual void d0(void) {} virtual void d1(void) {}
    virtual int fC(void *, void *, void *);
};

int ResB::fC(void *, void *, void *) { return 0; }

struct Host {
    char p4[4];
    ObjA *fa;
    void *f8;
    int sub_006b55f0(void *a, void *b, void *c);
};

// @baa 0x006b55f0
int Host::sub_006b55f0(void *a, void *b, void *c)
{
    ResA *r = fa->fA(g_026b2234);
    if (r != 0 && r->f50 != 0)
        return 0;
    ResB *r2 = (ResB *)((ObjB **)((char *)g_026c3cdc + 0xdc))[0]->fB(f8);
    return r2->fC(a, b, c);
}

struct C_006b5690 {
    undefined4 * sub_006b5690(byte);
};

extern undefined4 g_01ecdfdc;
// @baa 0x006b5690
undefined4 * C_006b5690::sub_006b5690(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006b56b0 { C_006b56b0* sub_006b56b0(void); };

// @baa 0x006b56b0
C_006b56b0* C_006b56b0::sub_006b56b0(void) { return this; }

struct C_006b56c0 { C_006b56c0* sub_006b56c0(void); };

// @baa 0x006b56c0
C_006b56c0* C_006b56c0::sub_006b56c0(void) { return this; }

struct C_006b56d0 { C_006b56d0* sub_006b56d0(void); };

// @baa 0x006b56d0
C_006b56d0* C_006b56d0::sub_006b56d0(void) { return this; }

struct C_006b6060{
int sub_006b6060(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x006b6060
int C_006b6060::sub_006b6060(undefined4*param_2)
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

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_006b60c0(INT Index);
};

// @baa 0x006b60c0
E* S::sub_006b60c0(INT Index)
{
    return &Items(Index);
}

struct E_006b6110 { BYTE Bytes[264]; };

struct S_006b6110 {
    TArray<E_006b6110> Items; // 0x00
    E_006b6110* sub_006b6110(INT Index);
};

// @baa 0x006b6110
E_006b6110* S_006b6110::sub_006b6110(INT Index)
{
    return &Items(Index);
}

struct S_006b6160 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006b6160(INT Index) const;
};

// @baa 0x006b6160
const DWORD* S_006b6160::sub_006b6160(INT Index) const
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
	FFaceFXElement* sub_006b61b0(INT Index);
};

// @baa 0x006b61b0
FFaceFXElement* UFxRenderWidget::sub_006b61b0(INT Index)
{
	return &BoneArray(Index);
}

struct E_006b6200 { BYTE Bytes[20]; };

struct S_006b6200 {
    TArray<E_006b6200> Items; // 0x00
    const E_006b6200* sub_006b6200(INT Index) const;
};

// @baa 0x006b6200
const E_006b6200* S_006b6200::sub_006b6200(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_006b6250 {
    int sub_006b6250(int);
    int sub_006af570(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x006b6250
int C_006b6250::sub_006b6250(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_006b6250 *)(this))->sub_006af570(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct E_006b6290 { BYTE Bytes[32]; };

struct S_006b6290 {
    TArray<E_006b6290> Items; // 0x00
    E_006b6290* sub_006b6290(INT Index);
};

// @baa 0x006b6290
E_006b6290* S_006b6290::sub_006b6290(INT Index)
{
    return &Items(Index);
}

struct E_006b62e0 { BYTE Bytes[32]; };

struct S_006b62e0 {
    TArray<E_006b62e0> Items; // 0x00
    const E_006b62e0* sub_006b62e0(INT Index) const;
};

// @baa 0x006b62e0
const E_006b62e0* S_006b62e0::sub_006b62e0(INT Index) const
{
    return &Items(Index);
}

struct C_006b6330 {
    int sub_006b6330(int);
    int sub_006af640(int);
};

// @baa 0x006b6330
int C_006b6330::sub_006b6330(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_006b6330 *)(this))->sub_006af640(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

struct E_006b6360 { BYTE Bytes[288]; };

struct S_006b6360 {
    TArray<E_006b6360> Items; // 0x00
    const E_006b6360* sub_006b6360(INT Index) const;
};

// @baa 0x006b6360
const E_006b6360* S_006b6360::sub_006b6360(INT Index) const
{
    return &Items(Index);
}

struct S_006b63b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b63b0(INT Index);
};

// @baa 0x006b63b0
DWORD* S_006b63b0::sub_006b63b0(INT Index)
{
    return &Items(Index);
}

struct E_006b6400 { BYTE Bytes[24]; };

struct S_006b6400 {
    TArray<E_006b6400> Items; // 0x00
    const E_006b6400* sub_006b6400(INT Index) const;
};

// @baa 0x006b6400
const E_006b6400* S_006b6400::sub_006b6400(INT Index) const
{
    return &Items(Index);
}

struct S_006b6450 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006b6450(INT Index) const;
};

// @baa 0x006b6450
const DWORD* S_006b6450::sub_006b6450(INT Index) const
{
    return &Items(Index);
}

struct C_006b64a0{
int sub_006b64a0(undefined4*);
};

// @baa 0x006b64a0
int C_006b64a0::sub_006b64a0(undefined4*param_2)
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

struct C_006b6500{
int sub_006b6500(undefined4*);
};

// @baa 0x006b6500
int C_006b6500::sub_006b6500(undefined4*param_2)
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

struct C_006b6610 {
    int sub_006b6610(undefined4 *, int);
    int sub_006af900(int, int);
};

// @baa 0x006b6610
int C_006b6610::sub_006b6610(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_006b6610 *)(this))->sub_006af900(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_006b6640{
int sub_006b6640(undefined4*);
};

// @baa 0x006b6640
int C_006b6640::sub_006b6640(undefined4*param_2)
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

struct S_006b66a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b66a0(INT Index);
};

// @baa 0x006b66a0
DWORD* S_006b66a0::sub_006b66a0(INT Index)
{
    return &Items(Index);
}

struct S_006b66f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006b66f0(INT Index) const;
};

// @baa 0x006b66f0
const DWORD* S_006b66f0::sub_006b66f0(INT Index) const
{
    return &Items(Index);
}

struct C_006b6740 { int sub_006b6740(void); };

// @baa 0x006b6740
int C_006b6740::sub_006b6740(void) { return *(int*)((char*)this + 20); }

struct E_006b67a0 { BYTE Bytes[60]; };

struct S_006b67a0 {
    TArray<E_006b67a0> Items; // 0x00
    E_006b67a0* sub_006b67a0(INT Index);
};

// @baa 0x006b67a0
E_006b67a0* S_006b67a0::sub_006b67a0(INT Index)
{
    return &Items(Index);
}

struct E_006b67f0 { BYTE Bytes[60]; };

struct S_006b67f0 {
    TArray<E_006b67f0> Items; // 0x00
    const E_006b67f0* sub_006b67f0(INT Index) const;
};

// @baa 0x006b67f0
const E_006b67f0* S_006b67f0::sub_006b67f0(INT Index) const
{
    return &Items(Index);
}

struct S_006b6840 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b6840(INT Index);
};

// @baa 0x006b6840
DWORD* S_006b6840::sub_006b6840(INT Index)
{
    return &Items(Index);
}

struct S_006b6890 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006b6890(INT Index) const;
};

// @baa 0x006b6890
const DWORD* S_006b6890::sub_006b6890(INT Index) const
{
    return &Items(Index);
}

struct C_006b68e0 {
    bool sub_006b68e0();
};

// @baa 0x006b68e0
bool C_006b68e0::sub_006b68e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) != 0;
}

struct S_006b68f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b68f0(INT Index);
};

// @baa 0x006b68f0
DWORD* S_006b68f0::sub_006b68f0(INT Index)
{
    return &Items(Index);
}

// @baa 0x006b69a0
void __stdcall sub_006b69a0(int a0, int a1) {  }

struct C_006b69b0 {
    int sub_006b69b0(int);
};

// @baa 0x006b69b0
int C_006b69b0::sub_006b69b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006b69c0 {
    int sub_006b69c0(int);
};

// @baa 0x006b69c0
int C_006b69c0::sub_006b69c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_006b69d0 {
    int sub_006b69d0(int);
};

// @baa 0x006b69d0
int C_006b69d0::sub_006b69d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x108 + *param_1;
}

struct C_006b69e0 {
    int sub_006b69e0(int);
};

// @baa 0x006b69e0
int C_006b69e0::sub_006b69e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x006b69f0
void __stdcall sub_006b69f0(int a0, int a1) {  }

// @baa 0x006b6a00
void __stdcall sub_006b6a00(int a0, int a1) {  }

// @baa 0x006b6a40
void __stdcall sub_006b6a40(void *a, void *b)
{
}

struct C_006b6a50 {
    int sub_006b6a50(int);
};

// @baa 0x006b6a50
int C_006b6a50::sub_006b6a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006b6a90 {
    int sub_006b6a90(int);
};

// @baa 0x006b6a90
int C_006b6a90::sub_006b6a90(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_006b6aa0 {
    int sub_006b6aa0(int);
};

// @baa 0x006b6aa0
int C_006b6aa0::sub_006b6aa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006b6ab0 {
    int sub_006b6ab0(int);
};

// @baa 0x006b6ab0
int C_006b6ab0::sub_006b6ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006b6ac0 {
    int sub_006b6ac0(int);
};

// @baa 0x006b6ac0
int C_006b6ac0::sub_006b6ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_006b6ae0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b6ae0(INT Index);
};

// @baa 0x006b6ae0
DWORD* S_006b6ae0::sub_006b6ae0(INT Index)
{
    return &Items(Index);
}

struct C_006b6b30{
int sub_006b6b30(undefined4*);
};

// @baa 0x006b6b30
int C_006b6b30::sub_006b6b30(undefined4*param_2)
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

// @baa 0x006b6b90
void __stdcall sub_006b6b90(int a0, int a1) {  }

struct C_006b6ba0 {
    void sub_006b6ba0(undefined4 *);
};

// @baa 0x006b6ba0
void C_006b6ba0::sub_006b6ba0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;

  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_006b6bb0 {
    void sub_006b6bb0();
};

// @baa 0x006b6bb0
void C_006b6bb0::sub_006b6bb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct S_006b6c10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006b6c10(INT Index);
};

// @baa 0x006b6c10
DWORD* S_006b6c10::sub_006b6c10(INT Index)
{
    return &Items(Index);
}

struct E_006b6c60 { BYTE Bytes[16]; };

struct S_006b6c60 {
    TArray<E_006b6c60> Items; // 0x00
    E_006b6c60* sub_006b6c60(INT Index);
};

// @baa 0x006b6c60
E_006b6c60* S_006b6c60::sub_006b6c60(INT Index)
{
    return &Items(Index);
}

struct C_006b6cb0 { int sub_006b6cb0(void); };

// @baa 0x006b6cb0
int C_006b6cb0::sub_006b6cb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct UFxRenderWidget_006b6cc0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_006b6cc0(INT Index);
};

// @baa 0x006b6cc0
FFaceFXElement* UFxRenderWidget_006b6cc0::sub_006b6cc0(INT Index)
{
	return &BoneArray(Index);
}

struct C_006b6d10 {
    int sub_006b6d10(int);
};

// @baa 0x006b6d10
int C_006b6d10::sub_006b6d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_006b7130 {
    int sub_006b7130(int);
};

// @baa 0x006b7130
int C_006b7130::sub_006b7130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_006b7150 {
    uint sub_006b7150();
};

// @baa 0x006b7150
uint C_006b7150::sub_006b7150(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x220) | -(uint)(*(uint *)(param_1 + 0x220) == 0) & param_1;
}

struct C_006b7230 {
    int sub_006b7230();
};

// @baa 0x006b7230
int C_006b7230::sub_006b7230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b7250 {
    int sub_006b7250();
};

// @baa 0x006b7250
int C_006b7250::sub_006b7250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006b7260 {
    int sub_006b7260();
};

// @baa 0x006b7260
int C_006b7260::sub_006b7260(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006b7280 { C_006b7280* sub_006b7280(void); };

// @baa 0x006b7280
C_006b7280* C_006b7280::sub_006b7280(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_006b7290 {
    int sub_006b7290();
};

// @baa 0x006b7290
int C_006b7290::sub_006b7290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x006b7750
void sub_006b7750(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_006b7820 { C_006b7820* sub_006b7820(void); };

// @baa 0x006b7820
C_006b7820* C_006b7820::sub_006b7820(void) { *(int*)((char*)this + 544) = 0; return this; }

struct C_view_006b8910 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x006b8910
undefined4 * UObject::sub_006b8910(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_006b8910 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}

struct M_006b9140 { void sub_0040fcc0(); };

struct C_006b9140 { char pad[4]; M_006b9140 m; void sub_006b9140(); };

// @baa 0x006b9140
void C_006b9140::sub_006b9140() { m.sub_0040fcc0(); }

int sub_006b9220(void);
// @baa 0x006b93a0
int sub_006b93a0(void)
{
  int iVar1;
  
  iVar1 = sub_006b9220();
  return iVar1 * 2 + 2;
}

extern undefined * g_01ece79c;
// @baa 0x006bad30
undefined4 * sub_006bad30(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)sub_0053df40(0x3c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *puVar1 = (undefined4)(&g_01ece79c);
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

void sub_006b6940();
// @baa 0x006bc5c0
void sub_006bc5c0(void) { sub_006b6940(); }

struct T_006bc7a0;
// @baa 0x006bc7a0
template INT TArray<T_006bc7a0*>::RemoveItem(T_006bc7a0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_006bc820 { void* Data; int Num; int Max; void sub_006bc820(); };

// @baa 0x006bc820
void C_006bc820::sub_006bc820() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006bc880 { void* Data; int Num; int Max; void sub_006bc880(); };

// @baa 0x006bc880
void C_006bc880::sub_006bc880() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_006bcbd0;
// @baa 0x006bcbd0
template INT TArray<T_006bcbd0*>::RemoveItem(T_006bcbd0* const&);

struct C_006bcd20 {
    int sub_006bcd20();
};

// @baa 0x006bcd20
int C_006bcd20::sub_006bcd20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006bcd40 {
    int sub_006bcd40();
};

// @baa 0x006bcd40
int C_006bcd40::sub_006bcd40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006bcf00 {
    int sub_006bcf00();
};

// @baa 0x006bcf00
int C_006bcf00::sub_006bcf00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006bcf20 {
    int sub_006bcf20();
};

// @baa 0x006bcf20
int C_006bcf20::sub_006bcf20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x006bcf30
void __stdcall sub_006bcf30(int a0, int a1) {  }

// @baa 0x006bcfb0
void __stdcall sub_006bcfb0(int a0, int a1) {  }

// @baa 0x006bd130
void __stdcall sub_006bd130(int a0, int a1) {  }

struct C_006bd140 {
    int sub_006bd140(int);
};

// @baa 0x006bd140
int C_006bd140::sub_006bd140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006bd150 {
    int sub_006bd150(int);
};

// @baa 0x006bd150
int C_006bd150::sub_006bd150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006bd160 {
    int sub_006bd160(int);
};

// @baa 0x006bd160
int C_006bd160::sub_006bd160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006bd170 {
    int sub_006bd170();
};

// @baa 0x006bd170
int C_006bd170::sub_006bd170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006bd190 {
    int sub_006bd190();
};

// @baa 0x006bd190
int C_006bd190::sub_006bd190(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_006b90d0(void);
// @baa 0x006bd1b0
undefined4 UObject::sub_006bd1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006b90d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_006bd1d0 {
    int sub_0040fcc0();
};

// @baa 0x006bd1d0
undefined4 UObject::sub_006bd1d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_006bd1d0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006bd270 {
    int sub_006bd270(int);
};

// @baa 0x006bd270
int C_006bd270::sub_006bd270(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006bd280 {
    int sub_006bd280(int);
};

// @baa 0x006bd280
int C_006bd280::sub_006bd280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006bd300 {
    int sub_006bd300();
};

// @baa 0x006bd300
int C_006bd300::sub_006bd300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006bd330 {
    uint sub_006bd330();
};

// @baa 0x006bd330
uint C_006bd330::sub_006bd330(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_006bd350 {
    int sub_006bd350();
};

// @baa 0x006bd350
int C_006bd350::sub_006bd350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_006bd370 {
    int sub_006bd370();
};

// @baa 0x006bd370
int C_006bd370::sub_006bd370(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006bd390 {
    int sub_006bd390();
};

// @baa 0x006bd390
int C_006bd390::sub_006bd390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x006bd4a0
int UState::sub_006bd4a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006bd540 {
    int sub_006bd540(int);
};

// @baa 0x006bd540
int C_006bd540::sub_006bd540(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006bd550 {
    int sub_006bd550(int);
};

// @baa 0x006bd550
int C_006bd550::sub_006bd550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_006bd570 {
    uint sub_006bd570();
};

// @baa 0x006bd570
uint C_006bd570::sub_006bd570(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x220) | -(uint)(*(uint *)(param_1 + 0x220) == 0) & param_1;
}

struct C_006bd590 {
    uint sub_006bd590();
};

// @baa 0x006bd590
uint C_006bd590::sub_006bd590(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_006bd5b0 {
    int sub_006bd5b0();
};

// @baa 0x006bd5b0
int C_006bd5b0::sub_006bd5b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_006bd5c0 {
    int sub_006bd5c0();
};

// @baa 0x006bd5c0
int C_006bd5c0::sub_006bd5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006bd5f0 {
    uint sub_006bd5f0();
};

// @baa 0x006bd5f0
uint C_006bd5f0::sub_006bd5f0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x220) | -(uint)(*(uint *)(param_1 + 0x220) == 0) & param_1;
}

struct C_006bd690 {
    int sub_006bd690();
};

// @baa 0x006bd690
int C_006bd690::sub_006bd690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_006bdac0 {
    undefined4 sub_006bdac0(byte);
    int sub_00675b80();
};

// @baa 0x006bdac0
undefined4 C_006bdac0::sub_006bdac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006bdac0 *)(((char *)this + 8)))->sub_00675b80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006be470 {
    undefined4 * sub_006be470(undefined4, int);
    int sub_006b7c00(int);
};

extern undefined * g_01eceb54;
extern undefined4 g_0266e834;
// @baa 0x006be470
undefined4 * C_006be470::sub_006be470(undefined4 param_2, int param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01eceb54);
  if ((g_0266e834 == 0) && (param_3 != 0)) {
    ((C_006be470 *)(this))->sub_006b7c00(param_2);
  }
  return param_1;
}

// @baa 0x006be4a0
int sub_006be4a0(void) { return 0; }

struct C_006be5b0 {
    undefined4 sub_006be5b0(byte);
};

int sub_006be4d0(void);
// @baa 0x006be5b0
undefined4 C_006be5b0::sub_006be5b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006be740
int sub_006be740(void) { return 1; }

// @baa 0x006be750
void __stdcall sub_006be750(int a0) {  }

// @baa 0x006be760
void sub_006be760(void) {  }

// @baa 0x006be770
void __stdcall sub_006be770(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {  }

// @baa 0x006be780
int sub_006be780(void) { return 0; }

struct C_006be790 {
    void sub_006be790();
};

extern undefined * g_01eceb88;
extern undefined * g_01ecebe8;
// @baa 0x006be790
void C_006be790::sub_006be790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecebe8);
  param_1[1] = (undefined4)(&g_01eceb88);
  sub_006be4d0();
  return;
}

struct C_006be7b0 {
    undefined4 * sub_006be7b0(byte);
};

// @baa 0x006be7b0
undefined4 * C_006be7b0::sub_006be7b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecebe8);
  param_1[1] = (undefined4)(&g_01eceb88);
  sub_006be4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00665ce0();
// @baa 0x006be7e0
void sub_006be7e0(void) { sub_00665ce0(); }
