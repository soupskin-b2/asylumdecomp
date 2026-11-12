// BmGame_1710000.cpp (part 1 of 2): 122 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { int sub_01714a90(void); };

// @baa 0x01714a90
int C::sub_01714a90(void) { return *(int*)((char*)this + 4); }

// @baa 0x01714d00
int ARChatteringTeethGadgetBase::vf_000(void) { return 1; }

// @baa 0x01714d10
bool ARChatteringTeethGadgetBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715380
int ARJokerGlassesGadgetBase::vf_000(void) { return 1; }

// @baa 0x01715390
bool ARJokerGlassesGadgetBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x017154e0
int ARJokerGunGadgetBase::vf_000(void) { return 1; }

// @baa 0x017154f0
bool ARJokerGunGadgetBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715640
int ARPhysicsGrabber::vf_000(void) { return 1; }

// @baa 0x01715650
bool ARPhysicsGrabber::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01715690 { C_01715690* sub_01715690(void); };

// @baa 0x01715690
C_01715690* C_01715690::sub_01715690(void) { return this; }

// @baa 0x01716170
int ARSnapToPositionActor::vf_000(void) { return 1; }

// @baa 0x01716180
bool ARSnapToPositionActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x017162a0
void ARSnapToPositionActor::vf_358(int a0) {  }

// @baa 0x017162b0
void ARSnapToPositionActor::vf_35c(void) {  }

// @baa 0x01716830
int ARDisruptableObjectDoor::vf_000(void) { return 1; }

// @baa 0x01716840
bool ARDisruptableObjectDoor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01716c40
int ARHarpoonDragFloatingPlatformBase::vf_000(void) { return 1; }

// @baa 0x01716d60
int ARWaterLevelMarker::vf_000(void) { return 1; }

// @baa 0x01716d70
bool ARWaterLevelMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01717530
void ARHarpoonDragFloatingPlatformBase::SetBase(AActor* NewBase, FVector NewFloor, INT bNotifyActor, USkeletalMeshComponent* SkelComp, FName AttachName) {  }

// @baa 0x01717650
int ARHarpoonDragTrack::vf_000(void) { return 1; }

// @baa 0x01717660
bool ARHarpoonDragTrack::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01718540
int ARTunnelFunnel::vf_000(void) { return 1; }

// @baa 0x01718550
bool ARTunnelFunnel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x017188a0
int ARLevelSelectMenu::vf_000(void) { return 1; }

// @baa 0x017188b0
bool ARLevelSelectMenu::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01718f00
int URSeqVar_DDAIntValue::vf_000(void) { return 1; }

// @baa 0x01718f10
bool URSeqVar_DDAIntValue::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01718f50 {
    uint sub_01718f50();
};

// @baa 0x01718f50
uint C_01718f50::sub_01718f50(void)
{
    uint param_1 = (uint)this;

  return (param_1 & 0xff00 | param_1 << 0x10) << 8 | (param_1 & 0xff0000 | param_1 >> 0x10) >> 8;
}

// @baa 0x017195d0
void __stdcall sub_017195d0(int a0, int a1, int a2) {  }

// @baa 0x017195e0
void __stdcall sub_017195e0(int a0) {  }

// @baa 0x017195f0
void __stdcall sub_017195f0(int a0) {  }

// @baa 0x01719600
void __stdcall sub_01719600(int a0) {  }

// @baa 0x01719800
int ARRandomDelay::vf_000(void) { return 1; }

// @baa 0x01719810
bool ARRandomDelay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01719970 {
    undefined4 sub_01719970();
};

// @baa 0x01719970
undefined4 C_01719970::sub_01719970(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_01719980 { int sub_01719980(void); };

// @baa 0x01719980
int C_01719980::sub_01719980(void) { return *(int*)((char*)this + 4); }

struct C_01719990 { int sub_01719990(void); };

// @baa 0x01719990
int C_01719990::sub_01719990(void) { return *(int*)((char*)this + 4); }

struct C_017199a0 { int sub_017199a0(void); };

// @baa 0x017199a0
int C_017199a0::sub_017199a0(void) { return *(int*)((char*)this + 4); }

struct C_017199b0 { int sub_017199b0(void); };

// @baa 0x017199b0
int C_017199b0::sub_017199b0(void) { return *(int*)((char*)this + 4); }

struct C_017199c0 { int sub_017199c0(void); };

// @baa 0x017199c0
int C_017199c0::sub_017199c0(void) { return *(int*)((char*)this + 4); }

struct C_017199d0 { int sub_017199d0(void); };

// @baa 0x017199d0
int C_017199d0::sub_017199d0(void) { return *(int*)((char*)this + 4); }

struct C_017199e0 { int sub_017199e0(void); };

// @baa 0x017199e0
int C_017199e0::sub_017199e0(void) { return *(int*)((char*)this + 4); }

struct C_017199f0 { int a, b, c; C_017199f0(); };

// @baa 0x017199f0
C_017199f0::C_017199f0() : a(0), b(0), c(0) {}

struct C_01719a00 {
    int sub_01719a00();
};

// @baa 0x01719a00
int C_01719a00::sub_01719a00(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_01719a10 {
    int sub_01719a10(int);
};

// @baa 0x01719a10
int C_01719a10::sub_01719a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01719a20 { int a, b, c; C_01719a20(); };

// @baa 0x01719a20
C_01719a20::C_01719a20() : a(0), b(0), c(0) {}

struct C_01719a30 { int sub_01719a30(void); };

// @baa 0x01719a30
int C_01719a30::sub_01719a30(void) { return *(int*)((char*)this + 4); }

struct C_01719a40 { int a, b, c; C_01719a40(); };

// @baa 0x01719a40
C_01719a40::C_01719a40() : a(0), b(0), c(0) {}

struct C_01719a50 { int sub_01719a50(void); };

// @baa 0x01719a50
int C_01719a50::sub_01719a50(void) { return *(int*)((char*)this + 4); }

struct C_01719a60 { int a, b, c; C_01719a60(); };

// @baa 0x01719a60
C_01719a60::C_01719a60() : a(0), b(0), c(0) {}

struct C_01719a70 { int sub_01719a70(void); };

// @baa 0x01719a70
int C_01719a70::sub_01719a70(void) { return *(int*)((char*)this + 4); }

struct C_01719a80 { C_01719a80* sub_01719a80(int a0); };

// @baa 0x01719a80
C_01719a80* C_01719a80::sub_01719a80(int a0) { return this; }

struct C_01719a90 { int sub_01719a90(void); };

// @baa 0x01719a90
int C_01719a90::sub_01719a90(void) { return *(int*)((char*)this + 0); }

struct C_01719aa0 { C_01719aa0* sub_01719aa0(int a0); };

// @baa 0x01719aa0
C_01719aa0* C_01719aa0::sub_01719aa0(int a0) { return this; }

struct C_01719ab0 { int sub_01719ab0(void); };

// @baa 0x01719ab0
int C_01719ab0::sub_01719ab0(void) { return *(int*)((char*)this + 0); }

struct C_01719b30 { C_01719b30* sub_01719b30(int a0); };

// @baa 0x01719b30
C_01719b30* C_01719b30::sub_01719b30(int a0) { return this; }

struct C_01719b40 { int sub_01719b40(void); };

// @baa 0x01719b40
int C_01719b40::sub_01719b40(void) { return *(int*)((char*)this + 0); }

struct C_01719b50 {
    int sub_01719b50(int);
};

// @baa 0x01719b50
int C_01719b50::sub_01719b50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01719b60 { C_01719b60* sub_01719b60(int a0); };

// @baa 0x01719b60
C_01719b60* C_01719b60::sub_01719b60(int a0) { return this; }

struct C_01719b70 { int sub_01719b70(void); };

// @baa 0x01719b70
int C_01719b70::sub_01719b70(void) { return *(int*)((char*)this + 0); }

struct C_01719b80 {
    int sub_01719b80(int);
};

// @baa 0x01719b80
int C_01719b80::sub_01719b80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01719b90 { C_01719b90* sub_01719b90(int a0); };

// @baa 0x01719b90
C_01719b90* C_01719b90::sub_01719b90(int a0) { return this; }

struct C_01719ba0 { int sub_01719ba0(void); };

// @baa 0x01719ba0
int C_01719ba0::sub_01719ba0(void) { return *(int*)((char*)this + 0); }

struct C_01719bb0 {
    int sub_01719bb0(int);
};

// @baa 0x01719bb0
int C_01719bb0::sub_01719bb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01719bc0 { C_01719bc0* sub_01719bc0(int a0); };

// @baa 0x01719bc0
C_01719bc0* C_01719bc0::sub_01719bc0(int a0) { return this; }

struct C_01719bd0 { int sub_01719bd0(void); };

// @baa 0x01719bd0
int C_01719bd0::sub_01719bd0(void) { return *(int*)((char*)this + 0); }

struct C_01719be0 {
    int sub_01719be0(int);
};

// @baa 0x01719be0
int C_01719be0::sub_01719be0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01719bf0 { C_01719bf0* sub_01719bf0(int a0); };

// @baa 0x01719bf0
C_01719bf0* C_01719bf0::sub_01719bf0(int a0) { return this; }

struct C_01719c00 { int sub_01719c00(void); };

// @baa 0x01719c00
int C_01719c00::sub_01719c00(void) { return *(int*)((char*)this + 0); }

struct C_01719c90 { C_01719c90* sub_01719c90(int a0); };

// @baa 0x01719c90
C_01719c90* C_01719c90::sub_01719c90(int a0) { return this; }

struct C_01719ca0 { int sub_01719ca0(void); };

// @baa 0x01719ca0
int C_01719ca0::sub_01719ca0(void) { return *(int*)((char*)this + 0); }

struct C_01719d20 { int sub_01719d20(void); };

// @baa 0x01719d20
int C_01719d20::sub_01719d20(void) { return *(int*)((char*)this + 0); }

struct C_01719db0 { int sub_01719db0(void); };

// @baa 0x01719db0
int C_01719db0::sub_01719db0(void) { return *(int*)((char*)this + 0); }

// @baa 0x01719dc0
void sub_01719dc0(void) {  }

// @baa 0x01719dd0
void sub_01719dd0(void) {  }

// @baa 0x01719de0
void sub_01719de0(void) {  }

struct C_01719df0 { int sub_01719df0(void); };

// @baa 0x01719df0
int C_01719df0::sub_01719df0(void) { return *(int*)((char*)this + 0); }

struct C_01719e00 { int sub_01719e00(void); };

// @baa 0x01719e00
int C_01719e00::sub_01719e00(void) { return *(int*)((char*)this + 0); }

struct C_01719e10 { int sub_01719e10(void); };

// @baa 0x01719e10
int C_01719e10::sub_01719e10(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_01719e20(INT Index);
};

// @baa 0x01719e20
E* S::sub_01719e20(INT Index)
{
    return &Items(Index);
}

struct C_01719e70 { int sub_01719e70(void); };

// @baa 0x01719e70
int C_01719e70::sub_01719e70(void) { return *(int*)((char*)this + 0); }

struct C_01719e80 { int sub_01719e80(void); };

// @baa 0x01719e80
int C_01719e80::sub_01719e80(void) { return *(int*)((char*)this + 0); }

struct C_01719e90 { int sub_01719e90(void); };

// @baa 0x01719e90
int C_01719e90::sub_01719e90(void) { return *(int*)((char*)this + 0); }

struct C_01719ea0 { int sub_01719ea0(void); };

// @baa 0x01719ea0
int C_01719ea0::sub_01719ea0(void) { return *(int*)((char*)this + 0); }

struct C_01719f20 { int sub_01719f20(void); };

// @baa 0x01719f20
int C_01719f20::sub_01719f20(void) { return *(int*)((char*)this + 0); }

struct C_01719f30 { int sub_01719f30(void); };

// @baa 0x01719f30
int C_01719f30::sub_01719f30(void) { return *(int*)((char*)this + 0); }

struct C_01719f40 { int sub_01719f40(void); };

// @baa 0x01719f40
int C_01719f40::sub_01719f40(void) { return *(int*)((char*)this + 0); }

struct C_01719f50 { int sub_01719f50(void); };

// @baa 0x01719f50
int C_01719f50::sub_01719f50(void) { return *(int*)((char*)this + 0); }

struct C_01719f60 { int sub_01719f60(void); };

// @baa 0x01719f60
int C_01719f60::sub_01719f60(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_0171b340 {
    void sub_0171b340(int, int);
    int sub_0140afe0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0171b340
void C_0171b340::sub_0171b340(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0171b340 *)(this))->sub_0140afe0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct S_0171b380 {
    TArray<E> Items; // 0x00
    E* sub_0171b380(INT Index);
};

// @baa 0x0171b380
E* S_0171b380::sub_0171b380(INT Index)
{
    return &Items(Index);
}

struct E_0171b3d0 { BYTE Bytes[80]; };

struct S_0171b3d0 {
    TArray<E_0171b3d0> Items; // 0x00
    E_0171b3d0* sub_0171b3d0(INT Index);
};

// @baa 0x0171b3d0
E_0171b3d0* S_0171b3d0::sub_0171b3d0(INT Index)
{
    return &Items(Index);
}

struct E_0171b480 { BYTE Bytes[80]; };

struct S_0171b480 {
    TArray<E_0171b480> Items; // 0x00
    const E_0171b480* sub_0171b480(INT Index) const;
};

// @baa 0x0171b480
const E_0171b480* S_0171b480::sub_0171b480(INT Index) const
{
    return &Items(Index);
}

struct E_0171b4d0 { BYTE Bytes[80]; };

struct S_0171b4d0 {
    TArray<E_0171b4d0> Items; // 0x00
    const E_0171b4d0* sub_0171b4d0(INT Index) const;
};

// @baa 0x0171b4d0
const E_0171b4d0* S_0171b4d0::sub_0171b4d0(INT Index) const
{
    return &Items(Index);
}

struct E_0171b520 { BYTE Bytes[80]; };

struct S_0171b520 {
    TArray<E_0171b520> Items; // 0x00
    const E_0171b520* sub_0171b520(INT Index) const;
};

// @baa 0x0171b520
const E_0171b520* S_0171b520::sub_0171b520(INT Index) const
{
    return &Items(Index);
}

struct E_0171b570 { BYTE Bytes[16]; };

struct S_0171b570 {
    TArray<E_0171b570> Items; // 0x00
    const E_0171b570* sub_0171b570(INT Index) const;
};

// @baa 0x0171b570
const E_0171b570* S_0171b570::sub_0171b570(INT Index) const
{
    return &Items(Index);
}

struct E_0171b5c0 { BYTE Bytes[52]; };

struct S_0171b5c0 {
    TArray<E_0171b5c0> Items; // 0x00
    E_0171b5c0* sub_0171b5c0(INT Index);
};

// @baa 0x0171b5c0
E_0171b5c0* S_0171b5c0::sub_0171b5c0(INT Index)
{
    return &Items(Index);
}

struct S_0171b670 {
    TArray<E> Items; // 0x00
    E* sub_0171b670(INT Index);
};

// @baa 0x0171b670
E* S_0171b670::sub_0171b670(INT Index)
{
    return &Items(Index);
}

struct S_0171b6c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0171b6c0(INT Index);
};

// @baa 0x0171b6c0
DWORD* S_0171b6c0::sub_0171b6c0(INT Index)
{
    return &Items(Index);
}

struct C_0171b710 {
    int sub_0171b710(int);
};

// @baa 0x0171b710
int C_0171b710::sub_0171b710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0171b720
void __stdcall sub_0171b720(int a0, int a1) {  }

struct C_0171b730 {
    int sub_0171b730(int);
};

// @baa 0x0171b730
int C_0171b730::sub_0171b730(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x0171b740
void __stdcall sub_0171b740(int a0, int a1) {  }

struct C_0171b750 {
    int sub_0171b750(int);
};

// @baa 0x0171b750
int C_0171b750::sub_0171b750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0171b760 {
    int sub_0171b760(int);
};

// @baa 0x0171b760
int C_0171b760::sub_0171b760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_0171b780 {
    int sub_0171b780(int);
};

// @baa 0x0171b780
int C_0171b780::sub_0171b780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x0171b790
void __stdcall sub_0171b790(int a0, int a1) {  }

struct C_0171b7a0 {
    int sub_0171b7a0(int);
};

// @baa 0x0171b7a0
int C_0171b7a0::sub_0171b7a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0171b810 {
    int sub_0171b810(int);
};

// @baa 0x0171b810
int C_0171b810::sub_0171b810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0171b820
void __stdcall sub_0171b820(int a0, int a1) {  }

struct C_0171b830 {
    undefined4 sub_0171b830(byte);
};

int sub_0053dfa0(...);
// @baa 0x0171b830
undefined4 C_0171b830::sub_0171b830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0171b850 {
    undefined4 sub_0171b850(byte);
};

// @baa 0x0171b850
undefined4 C_0171b850::sub_0171b850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0171b870 {
    undefined4 sub_0171b870(byte);
};

// @baa 0x0171b870
undefined4 C_0171b870::sub_0171b870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_0171b890 { BYTE Bytes[80]; };

struct S_0171b890 {
    TArray<E_0171b890> Items; // 0x00
    E_0171b890* sub_0171b890(INT Index);
};

// @baa 0x0171b890
E_0171b890* S_0171b890::sub_0171b890(INT Index)
{
    return &Items(Index);
}

struct E_0171b8e0 { BYTE Bytes[80]; };

struct S_0171b8e0 {
    TArray<E_0171b8e0> Items; // 0x00
    E_0171b8e0* sub_0171b8e0(INT Index);
};

// @baa 0x0171b8e0
E_0171b8e0* S_0171b8e0::sub_0171b8e0(INT Index)
{
    return &Items(Index);
}

struct E_0171b930 { BYTE Bytes[80]; };

struct S_0171b930 {
    TArray<E_0171b930> Items; // 0x00
    E_0171b930* sub_0171b930(INT Index);
};

// @baa 0x0171b930
E_0171b930* S_0171b930::sub_0171b930(INT Index)
{
    return &Items(Index);
}

struct E_0171b980 { BYTE Bytes[16]; };

struct S_0171b980 {
    TArray<E_0171b980> Items; // 0x00
    E_0171b980* sub_0171b980(INT Index);
};

// @baa 0x0171b980
E_0171b980* S_0171b980::sub_0171b980(INT Index)
{
    return &Items(Index);
}

struct E_0171b9d0 { BYTE Bytes[60]; };

struct S_0171b9d0 {
    TArray<E_0171b9d0> Items; // 0x00
    E_0171b9d0* sub_0171b9d0(INT Index);
};

// @baa 0x0171b9d0
E_0171b9d0* S_0171b9d0::sub_0171b9d0(INT Index)
{
    return &Items(Index);
}

struct C_0171c180 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_0171c180& sub_0171c180(int Arg);
};

// @baa 0x0171c180
C_0171c180& C_0171c180::sub_0171c180(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x017176a0
void ARHarpoonDragTrack::vf_180()
{
    CurrentLocation = Location;
}

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x0171f3d0
/* Hitting one of the instant-kill bones knocks the helmet off. */
INT ARJokerGunGadgetBase::GetShouldKnockHelmetOff(FName BoneName)
{
    const TArray<FName>& BoneNames = InstantKillBoneNames;
    const INT NumBones = BoneNames.Num();
    UBOOL bKnockOff = FALSE;
    for (INT i = 0; i < NumBones; i++)
    {
        if (BoneName == BoneNames(i))
        {
            bKnockOff = TRUE;
            break;
        }
    }
    return bKnockOff;
}
