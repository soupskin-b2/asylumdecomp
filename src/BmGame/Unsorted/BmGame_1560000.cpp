// BmGame_1560000.cpp (part 1 of 4): 209 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01560ee0
undefined4 sub_01560ee0(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30);
  }
  return uVar1;
}

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01562720(INT Index) const;
};

// @baa 0x01562720
const E* S::sub_01562720(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    void sub_01562770(int, int);
    int sub_0155d220(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01562770
void C::sub_01562770(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C *)(this))->sub_0155d220(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x20 + *param_1),0,param_3 << 5);
  return;
}

struct E_015627a0 { BYTE Bytes[68]; };

struct S_015627a0 {
    TArray<E_015627a0> Items; // 0x00
    const E_015627a0* sub_015627a0(INT Index) const;
};

// @baa 0x015627a0
const E_015627a0* S_015627a0::sub_015627a0(INT Index) const
{
    return &Items(Index);
}

struct S_015627f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015627f0(INT Index);
};

// @baa 0x015627f0
DWORD* S_015627f0::sub_015627f0(INT Index)
{
    return &Items(Index);
}

struct C_01562840 {
    void sub_01562840(int, int);
    int sub_0155d3b0(int, int);
};

// @baa 0x01562840
void C_01562840::sub_01562840(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_01562840 *)(this))->sub_0155d3b0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct E_01562880 { BYTE Bytes[144]; };

struct S_01562880 {
    TArray<E_01562880> Items; // 0x00
    E_01562880* sub_01562880(INT Index);
};

// @baa 0x01562880
E_01562880* S_01562880::sub_01562880(INT Index)
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
	FFaceFXElement* sub_015628d0(INT Index);
};

// @baa 0x015628d0
FFaceFXElement* UFxRenderWidget::sub_015628d0(INT Index)
{
	return &BoneArray(Index);
}

struct C_01562920 {
    int sub_01562920(int);
    int sub_0155d510(int);
};

// @baa 0x01562920
int C_01562920::sub_01562920(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01562920 *)(this))->sub_0155d510(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct S_01562960 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01562960(INT Index);
};

// @baa 0x01562960
DWORD* S_01562960::sub_01562960(INT Index)
{
    return &Items(Index);
}

struct E_015629b0 { BYTE Bytes[32]; };

struct S_015629b0 {
    TArray<E_015629b0> Items; // 0x00
    E_015629b0* sub_015629b0(INT Index);
};

// @baa 0x015629b0
E_015629b0* S_015629b0::sub_015629b0(INT Index)
{
    return &Items(Index);
}

struct E_01562a60 { BYTE Bytes[12]; };

struct S_01562a60 {
    TArray<E_01562a60> Items; // 0x00
    E_01562a60* sub_01562a60(INT Index);
};

// @baa 0x01562a60
E_01562a60* S_01562a60::sub_01562a60(INT Index)
{
    return &Items(Index);
}

struct E_01562ab0 { BYTE Bytes[12]; };

struct S_01562ab0 {
    TArray<E_01562ab0> Items; // 0x00
    const E_01562ab0* sub_01562ab0(INT Index) const;
};

// @baa 0x01562ab0
const E_01562ab0* S_01562ab0::sub_01562ab0(INT Index) const
{
    return &Items(Index);
}

struct S_01562b00 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01562b00(INT Index);
};

// @baa 0x01562b00
QWORD* S_01562b00::sub_01562b00(INT Index)
{
    return &Items(Index);
}

struct S_01562b50 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_01562b50(INT Index) const;
};

// @baa 0x01562b50
const QWORD* S_01562b50::sub_01562b50(INT Index) const
{
    return &Items(Index);
}

struct C_01562ba0 {
    int sub_01562ba0(int);
    int sub_0155d710(int);
};

// @baa 0x01562ba0
int C_01562ba0::sub_01562ba0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01562ba0 *)(this))->sub_0155d710(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct S_01562be0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01562be0(INT Index);
};

// @baa 0x01562be0
DWORD* S_01562be0::sub_01562be0(INT Index)
{
    return &Items(Index);
}

struct S_01562c30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01562c30(INT Index);
};

// @baa 0x01562c30
DWORD* S_01562c30::sub_01562c30(INT Index)
{
    return &Items(Index);
}

struct C_01562c80 {
    int sub_01562c80(int);
};

// @baa 0x01562c80
int C_01562c80::sub_01562c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01562c90 {
    int sub_01562c90(int);
};

// @baa 0x01562c90
int C_01562c90::sub_01562c90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562ca0 {
    int sub_01562ca0(int);
};

// @baa 0x01562ca0
int C_01562ca0::sub_01562ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562cb0 {
    int sub_01562cb0(int);
};

// @baa 0x01562cb0
int C_01562cb0::sub_01562cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01562cc0 {
    int sub_01562cc0(int);
};

// @baa 0x01562cc0
int C_01562cc0::sub_01562cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562cd0 {
    int sub_01562cd0(int);
};

// @baa 0x01562cd0
int C_01562cd0::sub_01562cd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01562ce0
void __stdcall sub_01562ce0(int a0, int a1) {  }

struct C_01562cf0 {
    int sub_01562cf0(int);
};

// @baa 0x01562cf0
int C_01562cf0::sub_01562cf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x90 + *param_1;
}

// @baa 0x01562d00
void __stdcall sub_01562d00(int a0, int a1) {  }

struct C_01562d10 {
    int sub_01562d10(int);
};

// @baa 0x01562d10
int C_01562d10::sub_01562d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01562d20 {
    int sub_01562d20(int);
};

// @baa 0x01562d20
int C_01562d20::sub_01562d20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01562d30
void __stdcall sub_01562d30(int a0, int a1) {  }

struct C_01562d40 {
    int sub_01562d40(int);
};

// @baa 0x01562d40
int C_01562d40::sub_01562d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01562d50 {
    int sub_01562d50(int);
};

// @baa 0x01562d50
int C_01562d50::sub_01562d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01562d60 {
    int sub_01562d60(int);
};

// @baa 0x01562d60
int C_01562d60::sub_01562d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562d70 {
    int sub_01562d70(int);
};

// @baa 0x01562d70
int C_01562d70::sub_01562d70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01562d80
void __stdcall sub_01562d80(int a0, int a1) {  }

struct C_01562d90 {
    int sub_01562d90(int);
};

// @baa 0x01562d90
int C_01562d90::sub_01562d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01562da0 {
    int sub_01562da0(int);
};

// @baa 0x01562da0
int C_01562da0::sub_01562da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01562db0 {
    int sub_01562db0(int);
};

// @baa 0x01562db0
int C_01562db0::sub_01562db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01562dc0 {
    int sub_01562dc0(int);
};

// @baa 0x01562dc0
int C_01562dc0::sub_01562dc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_01562dd0 {
    int sub_01562dd0(int);
};

// @baa 0x01562dd0
int C_01562dd0::sub_01562dd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01562de0 {
    int sub_01562de0(int);
};

// @baa 0x01562de0
int C_01562de0::sub_01562de0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x124 + *param_1;
}

struct C_01562df0 {
    int sub_01562df0(int);
};

// @baa 0x01562df0
int C_01562df0::sub_01562df0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

struct C_01562e10 {
    int sub_01562e10(int);
};

// @baa 0x01562e10
int C_01562e10::sub_01562e10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562e20 {
    int sub_01562e20(int);
};

// @baa 0x01562e20
int C_01562e20::sub_01562e20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01562e30
void __stdcall sub_01562e30(int a0, int a1) {  }

struct C_01562e40 {
    int sub_01562e40(int);
};

// @baa 0x01562e40
int C_01562e40::sub_01562e40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562e50 {
    int sub_01562e50(int);
};

// @baa 0x01562e50
int C_01562e50::sub_01562e50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01562e60 {
    int sub_01562e60(int);
};

// @baa 0x01562e60
int C_01562e60::sub_01562e60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01562e70 {
    int sub_01562e70(int);
};

// @baa 0x01562e70
int C_01562e70::sub_01562e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01562e80 {
    int sub_01562e80(int);
};

// @baa 0x01562e80
int C_01562e80::sub_01562e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01562e90
void __stdcall sub_01562e90(int a0, int a1) {  }

struct C_01562ea0 {
    int sub_01562ea0(int);
};

// @baa 0x01562ea0
int C_01562ea0::sub_01562ea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562eb0 {
    int sub_01562eb0(int);
};

// @baa 0x01562eb0
int C_01562eb0::sub_01562eb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562ec0 {
    int sub_01562ec0(int);
};

// @baa 0x01562ec0
int C_01562ec0::sub_01562ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01562ed0 {
    int sub_01562ed0(int);
};

// @baa 0x01562ed0
int C_01562ed0::sub_01562ed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01562ee0 {
    int sub_01562ee0(int);
};

// @baa 0x01562ee0
int C_01562ee0::sub_01562ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01562ef0 {
    int sub_01562ef0(int);
};

// @baa 0x01562ef0
int C_01562ef0::sub_01562ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct S_01562f00 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01562f00(INT Index);
};

// @baa 0x01562f00
QWORD* S_01562f00::sub_01562f00(INT Index)
{
    return &Items(Index);
}

struct S_01562f50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01562f50(INT Index);
};

// @baa 0x01562f50
DWORD* S_01562f50::sub_01562f50(INT Index)
{
    return &Items(Index);
}

struct S_01562fa0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01562fa0(INT Index);
};

// @baa 0x01562fa0
DWORD* S_01562fa0::sub_01562fa0(INT Index)
{
    return &Items(Index);
}

struct S_01562ff0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01562ff0(INT Index);
};

// @baa 0x01562ff0
QWORD* S_01562ff0::sub_01562ff0(INT Index)
{
    return &Items(Index);
}

struct S_01563040 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563040(INT Index);
};

// @baa 0x01563040
DWORD* S_01563040::sub_01563040(INT Index)
{
    return &Items(Index);
}

struct E_01563090 { BYTE Bytes[24]; };

struct S_01563090 {
    TArray<E_01563090> Items; // 0x00
    E_01563090* sub_01563090(INT Index);
};

// @baa 0x01563090
E_01563090* S_01563090::sub_01563090(INT Index)
{
    return &Items(Index);
}

struct E_015630e0 { BYTE Bytes[12]; };

struct S_015630e0 {
    TArray<E_015630e0> Items; // 0x00
    E_015630e0* sub_015630e0(INT Index);
};

// @baa 0x015630e0
E_015630e0* S_015630e0::sub_015630e0(INT Index)
{
    return &Items(Index);
}

struct S_01563130 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563130(INT Index);
};

// @baa 0x01563130
DWORD* S_01563130::sub_01563130(INT Index)
{
    return &Items(Index);
}

struct E_01563180 { BYTE Bytes[40]; };

struct S_01563180 {
    TArray<E_01563180> Items; // 0x00
    E_01563180* sub_01563180(INT Index);
};

// @baa 0x01563180
E_01563180* S_01563180::sub_01563180(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_015631d0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_015631d0(INT Index);
};

// @baa 0x015631d0
FFaceFXElement* UFxRenderWidget_015631d0::sub_015631d0(INT Index)
{
	return &BoneArray(Index);
}

struct E_01563220 { BYTE Bytes[36]; };

struct S_01563220 {
    TArray<E_01563220> Items; // 0x00
    E_01563220* sub_01563220(INT Index);
};

// @baa 0x01563220
E_01563220* S_01563220::sub_01563220(INT Index)
{
    return &Items(Index);
}

struct E_01563270 { BYTE Bytes[36]; };

struct S_01563270 {
    TArray<E_01563270> Items; // 0x00
    E_01563270* sub_01563270(INT Index);
};

// @baa 0x01563270
E_01563270* S_01563270::sub_01563270(INT Index)
{
    return &Items(Index);
}

struct S_015632c0 {
    TArray<E> Items; // 0x00
    E* sub_015632c0(INT Index);
};

// @baa 0x015632c0
E* S_015632c0::sub_015632c0(INT Index)
{
    return &Items(Index);
}

struct E_01563310 { BYTE Bytes[292]; };

struct S_01563310 {
    TArray<E_01563310> Items; // 0x00
    E_01563310* sub_01563310(INT Index);
};

// @baa 0x01563310
E_01563310* S_01563310::sub_01563310(INT Index)
{
    return &Items(Index);
}

struct E_01563360 { BYTE Bytes[120]; };

struct S_01563360 {
    TArray<E_01563360> Items; // 0x00
    E_01563360* sub_01563360(INT Index);
};

// @baa 0x01563360
E_01563360* S_01563360::sub_01563360(INT Index)
{
    return &Items(Index);
}

struct S_015633b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015633b0(INT Index);
};

// @baa 0x015633b0
DWORD* S_015633b0::sub_015633b0(INT Index)
{
    return &Items(Index);
}

struct S_01563400 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563400(INT Index);
};

// @baa 0x01563400
DWORD* S_01563400::sub_01563400(INT Index)
{
    return &Items(Index);
}

struct S_01563450 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563450(INT Index);
};

// @baa 0x01563450
DWORD* S_01563450::sub_01563450(INT Index)
{
    return &Items(Index);
}

struct S_015634a0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015634a0(INT Index);
};

// @baa 0x015634a0
QWORD* S_015634a0::sub_015634a0(INT Index)
{
    return &Items(Index);
}

struct S_015634f0 {
    TArray<E> Items; // 0x00
    E* sub_015634f0(INT Index);
};

// @baa 0x015634f0
E* S_015634f0::sub_015634f0(INT Index)
{
    return &Items(Index);
}

struct S_01563540 {
    TArray<E> Items; // 0x00
    E* sub_01563540(INT Index);
};

// @baa 0x01563540
E* S_01563540::sub_01563540(INT Index)
{
    return &Items(Index);
}

struct S_01563590 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563590(INT Index);
};

// @baa 0x01563590
DWORD* S_01563590::sub_01563590(INT Index)
{
    return &Items(Index);
}

struct S_015635e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_015635e0(INT Index);
};

// @baa 0x015635e0
DWORD* S_015635e0::sub_015635e0(INT Index)
{
    return &Items(Index);
}

struct S_01563630 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01563630(INT Index);
};

// @baa 0x01563630
DWORD* S_01563630::sub_01563630(INT Index)
{
    return &Items(Index);
}

struct E_01563680 { BYTE Bytes[12]; };

struct S_01563680 {
    TArray<E_01563680> Items; // 0x00
    E_01563680* sub_01563680(INT Index);
};

// @baa 0x01563680
E_01563680* S_01563680::sub_01563680(INT Index)
{
    return &Items(Index);
}

struct S_015636d0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_015636d0(INT Index);
};

// @baa 0x015636d0
QWORD* S_015636d0::sub_015636d0(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_01563720
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_01563720(INT Index);
};

// @baa 0x01563720
FFaceFXElement* UFxRenderWidget_01563720::sub_01563720(INT Index)
{
	return &BoneArray(Index);
}

// @baa 0x01563770
int sub_01563770(int a0) { return *(int*)a0; }

// @baa 0x01563780
void sub_01563780(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x015637a0
void sub_015637a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, code * param_4)
{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

int sub_0155e490(...);
// @baa 0x01563880
void sub_01563880(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0155e490(param_1,param_2,param_3,0,0);
  return;
}

struct C_015638d0 { C_015638d0* sub_015638d0(void); };

// @baa 0x015638d0
C_015638d0* C_015638d0::sub_015638d0(void) { return this; }

int sub_0154e1d0(void);
int sub_0155e760(...);
extern undefined4 g_026e1160;
// @baa 0x015638f0
int sub_015638f0(void)
{
  if (g_026e1160 == 0) {
    g_026e1160 = sub_0155e760(L"BmGame");
    sub_0154e1d0();
  }
  return g_026e1160;
}

struct C_01563920 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01563920& sub_01563920(int Arg);
};

// @baa 0x01563920
C_01563920& C_01563920::sub_01563920(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct M_01563960 { void sub_0040fcc0(); };

struct C_01563960 { char pad[4]; M_01563960 m; void sub_01563960(); };

// @baa 0x01563960
void C_01563960::sub_01563960() { m.sub_0040fcc0(); }

struct M_01563970 { void sub_0040fcc0(); };

struct C_01563970 { char pad[4]; M_01563970 m; void sub_01563970(); };

// @baa 0x01563970
void C_01563970::sub_01563970() { m.sub_0040fcc0(); }

// @baa 0x01563a20
IMPLEMENT_CLASS_AT(URBoneRescaleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 69);

// @baa 0x01563b30
bool URBoneRescaleConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01563b70
IMPLEMENT_CLASS_AT(URCharacterViewerConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 70);

// @baa 0x01563c80
bool URCharacterViewerConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01563cc0
IMPLEMENT_CLASS_AT(URDirectionalAnimConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 74);

// @baa 0x01563dd0
bool URDirectionalAnimConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01563e10
IMPLEMENT_CLASS_AT(URMirrorConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 77);

// @baa 0x01563f20
bool URMirrorConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01563f60
IMPLEMENT_CLASS_AT(URPoseConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 78);

// @baa 0x01564070
bool URPoseConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01564240
IMPLEMENT_CLASS_AT(URWeaponConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 147);

// @baa 0x01564350
bool URWeaponConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01564390
IMPLEMENT_CLASS_AT(URAlternateAnimationAndWeaponConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 148);

// @baa 0x015644a0
bool URAlternateAnimationAndWeaponConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_00547da0(int);
};

// @baa 0x015644e0
int URFMODSound::sub_015644e0(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

// @baa 0x015690b0
undefined4 sub_015690b0(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x30), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 0x40);
  }
  return uVar2;
}

struct C_0156a5f0 {
    void sub_0156a5f0(int);
};

int sub_0053df70(...);
// @baa 0x0156a5f0
void C_0156a5f0::sub_0156a5f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0156a630 { void* Data; int Num; int Max; void sub_0156a630(); };

// @baa 0x0156a630
void C_0156a630::sub_0156a630() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0156a770
void __stdcall sub_0156a770(int a0, int a1) {  }

// @baa 0x0156a780
void __stdcall sub_0156a780(int a0, int a1) {  }

// @baa 0x0156a790
void __stdcall sub_0156a790(int a0, int a1) {  }

// @baa 0x0156a7a0
void __stdcall sub_0156a7a0(int a0, int a1) {  }

// @baa 0x0156a7b0
void __stdcall sub_0156a7b0(int a0, int a1) {  }

// @baa 0x0156a7c0
void __stdcall sub_0156a7c0(int a0, int a1) {  }

// @baa 0x0156a7d0
void __stdcall sub_0156a7d0(int a0, int a1) {  }

// @baa 0x0156a7e0
void __stdcall sub_0156a7e0(int a0, int a1) {  }

// @baa 0x0156a7f0
void __stdcall sub_0156a7f0(int a0, int a1) {  }

// @baa 0x0156a800
void __stdcall sub_0156a800(int a0, int a1) {  }

// @baa 0x0156a810
void __stdcall sub_0156a810(int a0, int a1) {  }

// @baa 0x0156a820
void __stdcall sub_0156a820(int a0, int a1) {  }

// @baa 0x0156a830
void __stdcall sub_0156a830(int a0, int a1) {  }

// @baa 0x0156a840
void __stdcall sub_0156a840(int a0, int a1) {  }

// @baa 0x0156a850
void __stdcall sub_0156a850(int a0, int a1) {  }

// @baa 0x0156a860
void __stdcall sub_0156a860(int a0, int a1) {  }

// @baa 0x0156a870
void __stdcall sub_0156a870(int a0, int a1) {  }

// @baa 0x0156a880
void __stdcall sub_0156a880(int a0, int a1) {  }

// @baa 0x0156a890
void __stdcall sub_0156a890(int a0, int a1) {  }

// @baa 0x0156a8a0
void __stdcall sub_0156a8a0(int a0, int a1) {  }

// @baa 0x0156a8b0
void __stdcall sub_0156a8b0(int a0, int a1) {  }

// @baa 0x0156a8c0
void __stdcall sub_0156a8c0(int a0, int a1) {  }

// @baa 0x0156a8d0
void __stdcall sub_0156a8d0(int a0, int a1) {  }

// @baa 0x0156a8e0
void __stdcall sub_0156a8e0(int a0, int a1) {  }

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x0156a8f0
undefined4 UObject::sub_0156a8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00549160();
// @baa 0x0156a920
void sub_0156a920(void) { sub_00549160(); }

struct C_view_0156a970 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x0156a970
undefined4 * UObject::sub_0156a970(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0156a970 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  return param_1;
}

// @baa 0x0156ab60
void sub_0156ab60(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_0155e490(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01563800(...);
// @baa 0x0156ab90
void sub_0156ab90(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  sub_01563800(param_1,0,(param_2 - (int)param_1) + -4 >> 2,uVar1,param_3);
  return;
}

void sub_0156a310();
// @baa 0x0156abc0
void sub_0156abc0(void) { sub_0156a310(); }

void sub_0156a370();
// @baa 0x0156aca0
void sub_0156aca0(void) { sub_0156a370(); }

void sub_0156a4c0();
// @baa 0x0156acb0
void sub_0156acb0(void) { sub_0156a4c0(); }

void sub_0156a520();
// @baa 0x0156acc0
void sub_0156acc0(void) { sub_0156a520(); }

int sub_0155e9a0(...);
int sub_01563b70(void);
extern undefined4 g_026e1174;
// @baa 0x0156acd0
int sub_0156acd0(void)
{
  if (g_026e1174 == 0) {
    g_026e1174 = sub_0155e9a0(L"BmGame");
    sub_01563b70();
  }
  return g_026e1174;
}

struct C_0156ad00 { int a, b, c; C_0156ad00(); };

// @baa 0x0156ad00
C_0156ad00::C_0156ad00() : a(0), b(0), c(0) {}

void sub_0156a630();
// @baa 0x0156ad10
void sub_0156ad10(void) { sub_0156a630(); }

extern FName g_026c4d88;
struct FString_ {
    static FString sub_005a1b30(const TCHAR* Fmt, ...); /* FString::Printf */
};

struct ARGameInfo_ : public ARGameInfo {
    UFunction* sub_005d7d10(FName InName, INT Global); /* FindFunctionChecked */
    FString sub_0156cff0();
};

// @baa 0x0156cff0
FString ARGameInfo_::sub_0156cff0()
{
    struct { FLOAT ReturnValue; } Parms;
    Parms.ReturnValue = 0.f;
    ProcessEvent(sub_005d7d10(g_026c4d88, 0), &Parms, 0);
    INT Seconds = (INT)Parms.ReturnValue;
    return FString_::sub_005a1b30(TEXT("%2d:%02d:%02d"), Seconds / 3600, (Seconds / 60) % 60, Seconds % 60);
}

struct C_0156ea70 { void* Data; int Num; int Max; void sub_0156ea70(); };

// @baa 0x0156ea70
void C_0156ea70::sub_0156ea70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ead0 { void* Data; int Num; int Max; void sub_0156ead0(); };

// @baa 0x0156ead0
void C_0156ead0::sub_0156ead0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156eb30 { void* Data; int Num; int Max; void sub_0156eb30(); };

// @baa 0x0156eb30
void C_0156eb30::sub_0156eb30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156eb90 { void* Data; int Num; int Max; void sub_0156eb90(); };

// @baa 0x0156eb90
void C_0156eb90::sub_0156eb90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ebf0 { void* Data; int Num; int Max; void sub_0156ebf0(); };

// @baa 0x0156ebf0
void C_0156ebf0::sub_0156ebf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ec50 {
    undefined4 sub_0156ec50();
};

// @baa 0x0156ec50
undefined4 C_0156ec50::sub_0156ec50(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0156ec60 { C_0156ec60* sub_0156ec60(void); };

// @baa 0x0156ec60
C_0156ec60* C_0156ec60::sub_0156ec60(void) { return this; }

struct C_0156ec70 { C_0156ec70* sub_0156ec70(void); };

// @baa 0x0156ec70
C_0156ec70* C_0156ec70::sub_0156ec70(void) { return this; }

struct C_0156ec80 { void* Data; int Num; int Max; void sub_0156ec80(); };

// @baa 0x0156ec80
void C_0156ec80::sub_0156ec80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ece0 { void* Data; int Num; int Max; void sub_0156ece0(); };

// @baa 0x0156ece0
void C_0156ece0::sub_0156ece0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ed40 {
    undefined4 sub_0156ed40();
};

// @baa 0x0156ed40
undefined4 C_0156ed40::sub_0156ed40(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0156ed50 { void* Data; int Num; int Max; void sub_0156ed50(); };

// @baa 0x0156ed50
void C_0156ed50::sub_0156ed50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156edb0 { void* Data; int Num; int Max; void sub_0156edb0(); };

// @baa 0x0156edb0
void C_0156edb0::sub_0156edb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ee10 { void* Data; int Num; int Max; void sub_0156ee10(); };

// @baa 0x0156ee10
void C_0156ee10::sub_0156ee10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ee70 { void* Data; int Num; int Max; void sub_0156ee70(); };

// @baa 0x0156ee70
void C_0156ee70::sub_0156ee70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156eed0 { void* Data; int Num; int Max; void sub_0156eed0(); };

// @baa 0x0156eed0
void C_0156eed0::sub_0156eed0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ef30 { void* Data; int Num; int Max; void sub_0156ef30(); };

// @baa 0x0156ef30
void C_0156ef30::sub_0156ef30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156ef90 { void* Data; int Num; int Max; void sub_0156ef90(); };

// @baa 0x0156ef90
void C_0156ef90::sub_0156ef90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156eff0 { void* Data; int Num; int Max; void sub_0156eff0(); };

// @baa 0x0156eff0
void C_0156eff0::sub_0156eff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f050 { void* Data; int Num; int Max; void sub_0156f050(); };

// @baa 0x0156f050
void C_0156f050::sub_0156f050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f0b0 { void* Data; int Num; int Max; void sub_0156f0b0(); };

// @baa 0x0156f0b0
void C_0156f0b0::sub_0156f0b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f110 { void* Data; int Num; int Max; void sub_0156f110(); };

// @baa 0x0156f110
void C_0156f110::sub_0156f110() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f170 { void* Data; int Num; int Max; void sub_0156f170(); };

// @baa 0x0156f170
void C_0156f170::sub_0156f170() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f1d0 {
    undefined4 sub_0156f1d0();
};

// @baa 0x0156f1d0
undefined4 C_0156f1d0::sub_0156f1d0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0156f1e0 { void* Data; int Num; int Max; void sub_0156f1e0(); };

// @baa 0x0156f1e0
void C_0156f1e0::sub_0156f1e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f240 { void* Data; int Num; int Max; void sub_0156f240(); };

// @baa 0x0156f240
void C_0156f240::sub_0156f240() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f2a0 { void* Data; int Num; int Max; void sub_0156f2a0(); };

// @baa 0x0156f2a0
void C_0156f2a0::sub_0156f2a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f300 { void* Data; int Num; int Max; void sub_0156f300(); };

// @baa 0x0156f300
void C_0156f300::sub_0156f300() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156f360 { void* Data; int Num; int Max; void sub_0156f360(); };

// @baa 0x0156f360
void C_0156f360::sub_0156f360() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_0156f3c0 {
    int sub_0156f3c0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0156f3c0
int C_0156f3c0::sub_0156f3c0()
{
    return g_026a1ca4(Index);
}

struct C_0156f480 {
    int sub_0156f480();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0156f480
int C_0156f480::sub_0156f480()
{
    return g_026a1ca4(Index);
}

int sub_0156ab20(...);
// @baa 0x0156f970
void sub_0156f970(int param_1, int param_2, undefined4 param_3)
{
  if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    sub_0156ab20(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x0156fa50
void sub_0156fa50(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if (4 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    sub_01563800(param_1,0,(int)((param_2 - (int)param_1) - 4U) >> 2,uVar1,param_3);
  }
  return;
}

void sub_0156ea70();
// @baa 0x0156fa90
void sub_0156fa90(void) { sub_0156ea70(); }

void sub_0156ead0();
// @baa 0x0156faa0
void sub_0156faa0(void) { sub_0156ead0(); }

void sub_0156eb30();
// @baa 0x0156fab0
void sub_0156fab0(void) { sub_0156eb30(); }

void sub_0156eb90();
// @baa 0x0156fac0
void sub_0156fac0(void) { sub_0156eb90(); }

void sub_0156ebf0();
// @baa 0x0156fad0
void sub_0156fad0(void) { sub_0156ebf0(); }

int sub_005c7a20(void);
extern undefined * g_022fce00;
// @baa 0x0156fae0
undefined4 * UObject::sub_0156fae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fce00);
  return param_1;
}

// @baa 0x0156fb00
IMPLEMENT_CLASS_AT(URBMScreenShakeModifier, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 68);

// @baa 0x0156fb70
void sub_0156ec80();
// @baa 0x0156fb90
void sub_0156fb90(void) { sub_0156ec80(); }

extern undefined * g_022fcf20;
// @baa 0x0156fba0
undefined4 * UObject::sub_0156fba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fcf20);
  return param_1;
}

extern "C" int g_026e2cc0;
extern "C" int g_026e2cc4;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0156fbc0();
};

// @baa 0x0156fbc0
void UObjectThunk::sub_0156fbc0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2cc0, g_026e2cc4, 0), 0, 0);
}

// @baa 0x0156fc40
int URSeqVar_Croc::vf_198(int a0) { return 0; }

// @baa 0x0156fc50
FString URSeqVar_Croc::vf_194()
{
    return TEXT("Croc");
}

// @baa 0x0156fc80
IMPLEMENT_CLASS_AT(URSeqVar_Croc, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 138);

// @baa 0x0156fce0
extern undefined * g_022fd0d8;
// @baa 0x0156fd10
undefined4 * UObject::sub_0156fd10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fd0d8);
  return param_1;
}

struct UObjectThunk_0156fd30 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0156fd30();
};

// @baa 0x0156fd30
void UObjectThunk_0156fd30::sub_0156fd30()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2cc0, g_026e2cc4, 0), 0, 0);
}

// @baa 0x0156fdb0
int URSeqVar_Frank::vf_198(int a0) { return 0; }

// @baa 0x0156fdc0
FString URSeqVar_Frank::vf_194()
{
    return TEXT("Frank");
}

// @baa 0x0156fdf0
IMPLEMENT_CLASS_AT(URSeqVar_Frank, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 136);

// @baa 0x0156fe50
extern undefined * g_022fd290;
// @baa 0x0156fe80
undefined4 * UObject::sub_0156fe80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fd290);
  return param_1;
}

struct UObjectThunk_0156fea0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0156fea0();
};

// @baa 0x0156fea0
void UObjectThunk_0156fea0::sub_0156fea0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2cc0, g_026e2cc4, 0), 0, 0);
}

// @baa 0x0156ff20
int URSeqVar_Joker::vf_198(int a0) { return 0; }

// @baa 0x0156ff30
FString URSeqVar_Joker::vf_194()
{
    return TEXT("Joker");
}

// @baa 0x0156ff60
IMPLEMENT_CLASS_AT(URSeqVar_Joker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 137);

// @baa 0x0156ffc0
extern undefined * g_022fd448;
// @baa 0x0156fff0
undefined4 * UObject::sub_0156fff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fd448);
  return param_1;
}
