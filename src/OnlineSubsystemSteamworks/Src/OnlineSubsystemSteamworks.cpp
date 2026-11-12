// OnlineSubsystemSteamworks.cpp (part 1 of 3): 278 functions
// Placed here by: neighbours 242, class 65, callers 17.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern undefined4 g_026a4bac;
// @baa 0x00629b60
undefined4 sub_00629b60(void)
{
  return g_026a4bac;
}

struct C { C* sub_00d20d90(int a0); };

// @baa 0x00d20d90
C* C::sub_00d20d90(int a0) { return this; }

struct C_00d20da0 { int sub_00d20da0(void); };

// @baa 0x00d20da0
int C_00d20da0::sub_00d20da0(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_00d228e0 {
    int sub_00d228e0(int);
    int sub_00d20d20(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d228e0
int C_00d228e0::sub_00d228e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d228e0 *)(this))->sub_00d20d20(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct C_00d22960 {
    int sub_00d22960(int);
    int sub_00d20db0(int);
};

// @baa 0x00d22960
int C_00d22960::sub_00d22960(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d22960 *)(this))->sub_00d20db0(param_2);
  sub_01a37612((void *)(iVar1 * 0x2c + *param_1),0,param_2 * 0x2c);
  return iVar1;
}

extern "C" int g_026c41d4;
extern "C" int g_026c41d8;
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
    void sub_00e85e20();
};

// @baa 0x00e85e20
void UObjectThunk::sub_00e85e20()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c41d4, g_026c41d8, 0), 0, 0);
}

extern char g_0211bd00[];
struct C_00e85e50 { void sub_00e85e50(void); };

// @baa 0x00e85e50
void C_00e85e50::sub_00e85e50(void) { *(int*)((char*)this + 0) = (int)g_0211bd00; }

struct C_00e85e60 {
    undefined4 * sub_00e85e60(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e85e60
undefined4 * C_00e85e60::sub_00e85e60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0211bd00);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e85e80 { int a; C_00e85e80(int); };

// @baa 0x00e85e80
C_00e85e80::C_00e85e80(int x) : a(x) {}

struct C_00e85e90 { int sub_00e85e90(void); };

// @baa 0x00e85e90
int C_00e85e90::sub_00e85e90(void) { return *(int*)((char*)this + 16); }

int sub_005ec700(int arg1);
// @baa 0x00e88720
void __stdcall sub_00e88720(int arg1)
{
	sub_005ec700(0);
}

// @baa 0x00e88760
void sub_00e88760(void) {  }

// @baa 0x00e88770
void sub_00e88770(void) {  }

// @baa 0x00e88780
int UOnlineSubsystemSteamworks::vf_128(void) { return 0; }

// @baa 0x00e88790
int UOnlineSubsystemSteamworks::vf_12c(int a0) { return 0; }

// @baa 0x00e887e0
int sub_00e887e0(void) { return 0; }

// @baa 0x00e88820
int UOnlineSubsystemSteamworks::vf_1d0(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e88b20
void UOnlineSubsystemSteamworks::vf_1d4(int a0, int a1, int a2, int a3) {  }

// @baa 0x00e88b30
int UOnlineSubsystemSteamworks::vf_1e0(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88b40
int UOnlineSubsystemSteamworks::vf_1e8(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88b50
int UOnlineSubsystemSteamworks::vf_1ec(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88b60
int UOnlineSubsystemSteamworks::vf_1f4(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e88b70
int UOnlineSubsystemSteamworks::vf_1f8(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88b80
int UOnlineSubsystemSteamworks::vf_1fc(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88bd0
BYTE __stdcall sub_00e88bd0(int a) { return 2; }

struct D {
    unsigned char sub_00e88be0(int) { return 2; }
};

// @baa 0x00e88be0
void force_ref() {
    volatile unsigned char r = ((D*)0)->sub_00e88be0(0);
    (void)r;
}

// @baa 0x00e88bf0
int UOnlineSubsystemSteamworks::vf_1c0(int a0) { return 1; }

// @baa 0x00e88c00
int UOnlineSubsystemSteamworks::vf_1b8(void) { return 1; }

// @baa 0x00e88c10
int UOnlineSubsystemSteamworks::vf_120(int a0) { return 0; }

// @baa 0x00e88c20
bool UOnlineSubsystemSteamworks::vf_1c4() {
  return 1;
}

// @baa 0x00e88c30
int UOnlineSubsystemSteamworks::vf_1c8(int a0) { return 0; }

// @baa 0x00e88c40
int UOnlineSubsystemSteamworks::vf_1cc(int a0, int a1) { return 0; }

// @baa 0x00e88cf0
int UOnlineSubsystemSteamworks::vf_23c(int a0, int a1) { return 0; }

// @baa 0x00e88d80
int UOnlineSubsystemSteamworks::vf_21c(int a0) { return 0; }

// @baa 0x00e88dd0
int UOnlineSubsystemSteamworks::vf_220(int a0, int a1) { return 0; }

// @baa 0x00e88de0
int UOnlineSubsystemSteamworks::vf_1d8(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }

// @baa 0x00e88df0
int UOnlineSubsystemSteamworks::vf_254(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e88e00
int UOnlineSubsystemSteamworks::vf_224(int a0, int a1, int a2) { return 0; }

// @baa 0x00e88e10
int UOnlineSubsystemSteamworks::vf_228(int a0) { return 0; }

// @baa 0x00e88e20
int UOnlineSubsystemSteamworks::vf_22c(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e88e30
int UOnlineSubsystemSteamworks::vf_234(int a0, int a1) { return 0; }

// @baa 0x00e89450
IMPLEMENT_CLASS_AT(UOnlineSubsystemSteamworks, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\OnlineSubsystemSteamworks\\Src\\OnlineSubsystemSteamworksPackage.cpp", 72);

// @baa 0x00e89560
int UOnlineSubsystemSteamworks::vf_000(void) { return 1; }

// @baa 0x00e89570
bool UOnlineSubsystemSteamworks::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00e89d20 {
    int sub_00e89d20(int);
    int sub_00e2cdb0(int);
};

// @baa 0x00e89d20
int C_00e89d20::sub_00e89d20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e89d20 *)(this))->sub_00e2cdb0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct C_00e89d60 { int sub_00e89d60(void); };

// @baa 0x00e89d60
int C_00e89d60::sub_00e89d60(void) { return *(int*)((char*)this + 4); }

struct C_00e89d70 { int sub_00e89d70(void); };

// @baa 0x00e89d70
int C_00e89d70::sub_00e89d70(void) { return *(int*)((char*)this + 4); }

struct C_00e89d80 { int sub_00e89d80(void); };

// @baa 0x00e89d80
int C_00e89d80::sub_00e89d80(void) { return *(int*)((char*)this + 4); }

struct C_00e89d90 { int sub_00e89d90(void); };

// @baa 0x00e89d90
int C_00e89d90::sub_00e89d90(void) { return *(int*)((char*)this + 4); }

struct C_00e89da0 { int sub_00e89da0(void); };

// @baa 0x00e89da0
int C_00e89da0::sub_00e89da0(void) { return *(int*)((char*)this + 4); }

struct C_00e89db0 { int sub_00e89db0(void); };

// @baa 0x00e89db0
int C_00e89db0::sub_00e89db0(void) { return *(int*)((char*)this + 4); }

struct C_00e89dc0 { int sub_00e89dc0(void); };

// @baa 0x00e89dc0
int C_00e89dc0::sub_00e89dc0(void) { return *(int*)((char*)this + 4); }

struct C_00e89dd0 { int a, b, c; C_00e89dd0(); };

// @baa 0x00e89dd0
C_00e89dd0::C_00e89dd0() : a(0), b(0), c(0) {}

struct C_00e89de0 { int sub_00e89de0(void); };

// @baa 0x00e89de0
int C_00e89de0::sub_00e89de0(void) { return *(int*)((char*)this + 4); }

struct C_00e89df0 { int a, b, c; C_00e89df0(); };

// @baa 0x00e89df0
C_00e89df0::C_00e89df0() : a(0), b(0), c(0) {}

struct C_00e89e00 { int sub_00e89e00(void); };

// @baa 0x00e89e00
int C_00e89e00::sub_00e89e00(void) { return *(int*)((char*)this + 4); }

struct C_00e89e10 { int a, b, c; C_00e89e10(); };

// @baa 0x00e89e10
C_00e89e10::C_00e89e10() : a(0), b(0), c(0) {}

struct C_00e89e20 { int a, b, c; C_00e89e20(); };

// @baa 0x00e89e20
C_00e89e20::C_00e89e20() : a(0), b(0), c(0) {}

struct C_00e89e30 { int sub_00e89e30(void); };

// @baa 0x00e89e30
int C_00e89e30::sub_00e89e30(void) { return *(int*)((char*)this + 4); }

struct C_00e89e40 { int a, b, c; C_00e89e40(); };

// @baa 0x00e89e40
C_00e89e40::C_00e89e40() : a(0), b(0), c(0) {}

struct C_00e89e50 { int a, b, c; C_00e89e50(); };

// @baa 0x00e89e50
C_00e89e50::C_00e89e50() : a(0), b(0), c(0) {}

// @baa 0x00e89fd0
int sub_00e89fd0(void) { return 8; }

// @baa 0x00e8a0c0
int sub_00e8a0c0(void) { return 24; }

struct C_00e8a110 { C_00e8a110* sub_00e8a110(int a0); };

// @baa 0x00e8a110
C_00e8a110* C_00e8a110::sub_00e8a110(int a0) { return this; }

struct C_00e8a120 { int sub_00e8a120(void); };

// @baa 0x00e8a120
int C_00e8a120::sub_00e8a120(void) { return *(int*)((char*)this + 0); }

struct C_00e8a1a0 { C_00e8a1a0* sub_00e8a1a0(int a0); };

// @baa 0x00e8a1a0
C_00e8a1a0* C_00e8a1a0::sub_00e8a1a0(int a0) { return this; }

struct C_00e8a1b0 { int sub_00e8a1b0(void); };

// @baa 0x00e8a1b0
int C_00e8a1b0::sub_00e8a1b0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a1c0 { int sub_00e8a1c0(void); };

// @baa 0x00e8a1c0
int C_00e8a1c0::sub_00e8a1c0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a240 { C_00e8a240* sub_00e8a240(int a0); };

// @baa 0x00e8a240
C_00e8a240* C_00e8a240::sub_00e8a240(int a0) { return this; }

struct C_00e8a250 { int sub_00e8a250(void); };

// @baa 0x00e8a250
int C_00e8a250::sub_00e8a250(void) { return *(int*)((char*)this + 0); }

struct C_00e8a2d0 { C_00e8a2d0* sub_00e8a2d0(int a0); };

// @baa 0x00e8a2d0
C_00e8a2d0* C_00e8a2d0::sub_00e8a2d0(int a0) { return this; }

struct C_00e8a2e0 { int sub_00e8a2e0(void); };

// @baa 0x00e8a2e0
int C_00e8a2e0::sub_00e8a2e0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a370 { C_00e8a370* sub_00e8a370(int a0); };

// @baa 0x00e8a370
C_00e8a370* C_00e8a370::sub_00e8a370(int a0) { return this; }

struct C_00e8a380 { C_00e8a380* sub_00e8a380(int a0); };

// @baa 0x00e8a380
C_00e8a380* C_00e8a380::sub_00e8a380(int a0) { return this; }

struct C_00e8a390 { C_00e8a390* sub_00e8a390(int a0); };

// @baa 0x00e8a390
C_00e8a390* C_00e8a390::sub_00e8a390(int a0) { return this; }

struct C_00e8a3a0 { int sub_00e8a3a0(void); };

// @baa 0x00e8a3a0
int C_00e8a3a0::sub_00e8a3a0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a430 { int sub_00e8a430(void); };

// @baa 0x00e8a430
int C_00e8a430::sub_00e8a430(void) { return *(int*)((char*)this + 0); }

struct C_00e8a440 { int sub_00e8a440(void); };

// @baa 0x00e8a440
int C_00e8a440::sub_00e8a440(void) { return *(int*)((char*)this + 0); }

struct C_00e8a450 {
    int sub_00e8a450(int);
};

// @baa 0x00e8a450
int C_00e8a450::sub_00e8a450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e8a4d0 { int sub_00e8a4d0(void); };

// @baa 0x00e8a4d0
int C_00e8a4d0::sub_00e8a4d0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a4e0 {
    void sub_00e8a4e0();
};

extern "C" __declspec(dllimport) int SteamAPI_UnregisterCallback(...);
// @baa 0x00e8a4e0
void C_00e8a4e0::sub_00e8a4e0(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a4f0 {
    void sub_00e8a4f0();
};

// @baa 0x00e8a4f0
void C_00e8a4f0::sub_00e8a4f0(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a500 {
    void sub_00e8a500();
};

// @baa 0x00e8a500
void C_00e8a500::sub_00e8a500(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a510 {
    void sub_00e8a510();
};

// @baa 0x00e8a510
void C_00e8a510::sub_00e8a510(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a520 {
    void sub_00e8a520();
};

// @baa 0x00e8a520
void C_00e8a520::sub_00e8a520(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a530 {
    void sub_00e8a530();
};

// @baa 0x00e8a530
void C_00e8a530::sub_00e8a530(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a540 {
    void sub_00e8a540();
};

// @baa 0x00e8a540
void C_00e8a540::sub_00e8a540(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a550 {
    void sub_00e8a550();
};

// @baa 0x00e8a550
void C_00e8a550::sub_00e8a550(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a560 {
    void sub_00e8a560();
};

// @baa 0x00e8a560
void C_00e8a560::sub_00e8a560(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a570 {
    void sub_00e8a570();
};

// @baa 0x00e8a570
void C_00e8a570::sub_00e8a570(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a580 {
    void sub_00e8a580();
};

// @baa 0x00e8a580
void C_00e8a580::sub_00e8a580(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a590 {
    void sub_00e8a590();
};

// @baa 0x00e8a590
void C_00e8a590::sub_00e8a590(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a5a0 {
    void sub_00e8a5a0();
};

// @baa 0x00e8a5a0
void C_00e8a5a0::sub_00e8a5a0(void)
{
    undefined4 param_1 = (undefined4)this;

  SteamAPI_UnregisterCallback(param_1);
  return;
}

struct C_00e8a5e0 {
    int sub_00e8a5e0();
};

// @baa 0x00e8a5e0
int C_00e8a5e0::sub_00e8a5e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xc) != -1) - 1;
}

struct M_00e8a610 { void sub_00d67c50(); };

struct C_00e8a610 { char pad[8]; M_00e8a610 m; void sub_00e8a610(); };

// @baa 0x00e8a610
void C_00e8a610::sub_00e8a610() { m.sub_00d67c50(); }

struct C_00e8a620 { int sub_00e8a620(void); };

// @baa 0x00e8a620
int C_00e8a620::sub_00e8a620(void) { return *(int*)((char*)this + 0); }

struct C_00e8a630 { int sub_00e8a630(void); };

// @baa 0x00e8a630
int C_00e8a630::sub_00e8a630(void) { return *(int*)((char*)this + 0); }

struct C_00e8a640 { int sub_00e8a640(void); };

// @baa 0x00e8a640
int C_00e8a640::sub_00e8a640(void) { return *(int*)((char*)this + 0); }

struct C_00e8a650 { int sub_00e8a650(void); };

// @baa 0x00e8a650
int C_00e8a650::sub_00e8a650(void) { return *(int*)((char*)this + 0); }

struct C_00e8a660 { int sub_00e8a660(void); };

// @baa 0x00e8a660
int C_00e8a660::sub_00e8a660(void) { return *(int*)((char*)this + 0); }

struct C_00e8a670 { int sub_00e8a670(void); };

// @baa 0x00e8a670
int C_00e8a670::sub_00e8a670(void) { return *(int*)((char*)this + 0); }

struct C_00e8a680 { int sub_00e8a680(void); };

// @baa 0x00e8a680
int C_00e8a680::sub_00e8a680(void) { return *(int*)((char*)this + 0); }

struct C_00e8a690 { int sub_00e8a690(void); };

// @baa 0x00e8a690
int C_00e8a690::sub_00e8a690(void) { return *(int*)((char*)this + 0); }

struct C_00e8a6a0 { int sub_00e8a6a0(void); };

// @baa 0x00e8a6a0
int C_00e8a6a0::sub_00e8a6a0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a6b0 { int sub_00e8a6b0(void); };

// @baa 0x00e8a6b0
int C_00e8a6b0::sub_00e8a6b0(void) { return *(int*)((char*)this + 0); }

struct C_00e8a6c0 { int sub_00e8a6c0(void); };

// @baa 0x00e8a6c0
int C_00e8a6c0::sub_00e8a6c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e8a6d0
undefined8 sub_00e8a6d0(undefined8 * param_1)
{
  return *param_1;
}

// @baa 0x00e8a6e0
undefined4 sub_00e8a6e0(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

struct C_00e8a700 {
    void sub_00e8a700(undefined4 *);
};

// @baa 0x00e8a700
void C_00e8a700::sub_00e8a700(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = (undefined4)(param_1 + 2);
  return;
}

struct C_00e8a720 { int sub_00e8a720(void); };

// @baa 0x00e8a720
int C_00e8a720::sub_00e8a720(void) { return *(int*)((char*)this + 0); }

struct C_00e8a730 { int sub_00e8a730(void); };

// @baa 0x00e8a730
int C_00e8a730::sub_00e8a730(void) { return *(int*)((char*)this + 0); }

struct C_00e8a740 { int sub_00e8a740(void); };

// @baa 0x00e8a740
int C_00e8a740::sub_00e8a740(void) { return *(int*)((char*)this + 0); }

struct C_00e8a750 { int sub_00e8a750(void); };

// @baa 0x00e8a750
int C_00e8a750::sub_00e8a750(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e8a790
undefined8 sub_00e8a790(undefined8 * param_1)
{
  return *param_1;
}

// @baa 0x00e8a7a0
undefined4 sub_00e8a7a0(int param_1, int param_2, int param_3, int param_4)
{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

// @baa 0x00e8a7c0
int sub_00e8a7c0(int param_1, int param_2)
{
  return param_2 * 0x17 + param_1;
}

// @baa 0x00e8a7d0
int* sub_00e8a7d0(int* a, int b)
{
  *a = b;
  return a;
}

// @baa 0x00e8a7e0
int sub_00e8a7e0(int param_1, int param_2)
{
  return param_2 * 0x17 + param_1;
}

struct C_00e8a810 { int sub_00e8a810(void); };

// @baa 0x00e8a810
int C_00e8a810::sub_00e8a810(void) { return *(int*)((char*)this + 20); }

struct C_00e8a820 { int sub_00e8a820(void); };

// @baa 0x00e8a820
int C_00e8a820::sub_00e8a820(void) { return *(int*)((char*)this + 20); }

void sub_00572b30();
// @baa 0x00e8a830
void sub_00e8a830(void) { sub_00572b30(); }

struct C_00e8a900 { char pad[4]; TArray<int> A; int* sub_00e8a900(); };

// @baa 0x00e8a900
int* C_00e8a900::sub_00e8a900() { return &A(0); }

struct C_00e8a930 { int a, b; C_00e8a930(int, int); };

// @baa 0x00e8a930
C_00e8a930::C_00e8a930(int x, int y) : a(x), b(y) {}

// @baa 0x00e8aed0
void __stdcall sub_00e8aed0(int a0, int a1) {  }

extern char g_0211bea8[];
struct C_00e8aee0 { C_00e8aee0* sub_00e8aee0(void); };

// @baa 0x00e8aee0
C_00e8aee0* C_00e8aee0::sub_00e8aee0(void) { *(int*)((char*)this + 0) = (int)g_0211bea8; return this; }

// @baa 0x00e8aef0
int __stdcall sub_00e8aef0(int a0) { return 0; }

// @baa 0x00e8af00
int __stdcall sub_00e8af00(int a0) { return 0; }

// @baa 0x00e8af10
int __stdcall sub_00e8af10(int a0, int a1) { return 0; }

// @baa 0x00e8af20
int __stdcall sub_00e8af20(int a0, int a1) { return 0; }

// @baa 0x00e8af30
int __stdcall sub_00e8af30(int a0) { return 0; }

// @baa 0x00e8af40
int __stdcall sub_00e8af40(int a0) { return 0; }

// @baa 0x00e8af50
int __stdcall sub_00e8af50(int a0, int a1) { return 0; }

// @baa 0x00e8af60
int __stdcall sub_00e8af60(int a0, int a1) { return 0; }

// @baa 0x00e8af70
int __stdcall sub_00e8af70(int a0) { return 0; }

// @baa 0x00e8af80
int __stdcall sub_00e8af80(int a0) { return 0; }

// @baa 0x00e8af90
int __stdcall sub_00e8af90(int a0, int a1) { return 0; }

// @baa 0x00e8afa0
int sub_00e8afa0(void) { return 0; }

// @baa 0x00e8afb0
int __stdcall sub_00e8afb0(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00e8afc0
int __stdcall sub_00e8afc0(int a0, int a1, int a2) { return 0; }

// @baa 0x00e8afd0
int __stdcall sub_00e8afd0(int a0, int a1, int a2, int a3) { return 0; }

struct C_00e8afe0 {
    undefined4 * sub_00e8afe0(byte);
};

// @baa 0x00e8afe0
undefined4 * C_00e8afe0::sub_00e8afe0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0211bd00);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00e8b000(INT Index) const;
};

// @baa 0x00e8b000
const QWORD* S::sub_00e8b000(INT Index) const
{
    return &Items(Index);
}

struct C_00e8b0a0 {
    void sub_00e8b0a0(int);
};

int sub_0053df70(...);
// @baa 0x00e8b0a0
void C_00e8b0a0::sub_00e8b0a0(int param_2)
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

struct S_00e8b230 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00e8b230(INT Index);
};

// @baa 0x00e8b230
QWORD* S_00e8b230::sub_00e8b230(INT Index)
{
    return &Items(Index);
}

struct C_00e8b280 {
    int sub_00e8b280(int);
    int sub_00e8a130(int);
};

// @baa 0x00e8b280
int C_00e8b280::sub_00e8b280(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b280 *)(this))->sub_00e8a130(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct S_00e8b2c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00e8b2c0(INT Index);
};

// @baa 0x00e8b2c0
QWORD* S_00e8b2c0::sub_00e8b2c0(INT Index)
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
	FFaceFXElement* sub_00e8b310(INT Index);
};

// @baa 0x00e8b310
FFaceFXElement* UFxRenderWidget::sub_00e8b310(INT Index)
{
	return &BoneArray(Index);
}

struct C_00e8b360 {
    int sub_00e8b360(int);
    int sub_00e8a1d0(int);
};

// @baa 0x00e8b360
int C_00e8b360::sub_00e8b360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b360 *)(this))->sub_00e8a1d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct E { BYTE Bytes[12]; };

struct S_00e8b3a0 {
    TArray<E> Items; // 0x00
    E* sub_00e8b3a0(INT Index);
};

// @baa 0x00e8b3a0
E* S_00e8b3a0::sub_00e8b3a0(INT Index)
{
    return &Items(Index);
}

struct C_00e8b3f0 {
    int sub_00e8b3f0(int);
    int sub_00e8a260(int);
};

// @baa 0x00e8b3f0
int C_00e8b3f0::sub_00e8b3f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b3f0 *)(this))->sub_00e8a260(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E_00e8b430 { BYTE Bytes[72]; };

struct S_00e8b430 {
    TArray<E_00e8b430> Items; // 0x00
    E_00e8b430* sub_00e8b430(INT Index);
};

// @baa 0x00e8b430
E_00e8b430* S_00e8b430::sub_00e8b430(INT Index)
{
    return &Items(Index);
}

struct C_00e8b480 {
    int sub_00e8b480(int);
    int sub_00e8a2f0(int);
};

// @baa 0x00e8b480
int C_00e8b480::sub_00e8b480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b480 *)(this))->sub_00e8a2f0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x48),0,param_2 * 0x48);
  return iVar1;
}

struct S_00e8b5b0 {
    TArray<E> Items; // 0x00
    E* sub_00e8b5b0(INT Index);
};

// @baa 0x00e8b5b0
E* S_00e8b5b0::sub_00e8b5b0(INT Index)
{
    return &Items(Index);
}

struct C_00e8b600 {
    int sub_00e8b600(int);
    int sub_00d90d20(int);
};

// @baa 0x00e8b600
int C_00e8b600::sub_00e8b600(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b600 *)(this))->sub_00d90d20(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct E_00e8b640 { BYTE Bytes[16]; };

struct S_00e8b640 {
    TArray<E_00e8b640> Items; // 0x00
    const E_00e8b640* sub_00e8b640(INT Index) const;
};

// @baa 0x00e8b640
const E_00e8b640* S_00e8b640::sub_00e8b640(INT Index) const
{
    return &Items(Index);
}

struct C_00e8b690 {
    int sub_00e8b690(int);
    int sub_00e8a460(int);
};

// @baa 0x00e8b690
int C_00e8b690::sub_00e8b690(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00e8b690 *)(this))->sub_00e8a460(param_2);
  sub_01a37612((void *)(iVar1 * 0x34 + *param_1),0,param_2 * 0x34);
  return iVar1;
}

struct E_00e8b6c0 { BYTE Bytes[32]; };

struct S_00e8b6c0 {
    TArray<E_00e8b6c0> Items; // 0x00
    E_00e8b6c0* sub_00e8b6c0(INT Index);
};

// @baa 0x00e8b6c0
E_00e8b6c0* S_00e8b6c0::sub_00e8b6c0(INT Index)
{
    return &Items(Index);
}

extern undefined4 g_0211bf0c;
extern undefined4 g_0211bf18;
extern undefined4 g_0211bf24;
extern undefined4 g_0211bf30;
extern undefined4 g_0211bf3c;
extern undefined4 g_0211bf48;
extern undefined4 g_0211bf54;
extern undefined4 g_0211bf60;
extern undefined4 g_0211bf6c;
extern undefined4 g_0211bf78;
extern undefined4 g_0211bf84;
extern undefined4 g_0211bf90;
extern undefined4 g_0211bf9c;
struct C_00e8bc20 {
    int sub_00e8bc20(int);
};

// @baa 0x00e8bc20
int C_00e8bc20::sub_00e8bc20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00e8bc30
void __stdcall sub_00e8bc30(int a0, int a1) {  }

struct C_00e8bc40 {
    int sub_00e8bc40(int);
};

// @baa 0x00e8bc40
int C_00e8bc40::sub_00e8bc40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00e8bc50
void __stdcall sub_00e8bc50(int a0, int a1) {  }

struct C_00e8bc60 {
    int sub_00e8bc60(int);
};

// @baa 0x00e8bc60
int C_00e8bc60::sub_00e8bc60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e8bc70 {
    int sub_00e8bc70(int);
};

// @baa 0x00e8bc70
int C_00e8bc70::sub_00e8bc70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00e8bc80
void __stdcall sub_00e8bc80(int a0, int a1) {  }

struct C_00e8bc90 {
    int sub_00e8bc90(int);
};

// @baa 0x00e8bc90
int C_00e8bc90::sub_00e8bc90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00e8bca0 {
    int sub_00e8bca0(int);
};

// @baa 0x00e8bca0
int C_00e8bca0::sub_00e8bca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00e8bcb0 {
    int sub_00e8bcb0(int);
};

// @baa 0x00e8bcb0
int C_00e8bcb0::sub_00e8bcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e8bcc0 {
    int sub_00e8bcc0(int);
};

// @baa 0x00e8bcc0
int C_00e8bcc0::sub_00e8bcc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00e8bce0
void __stdcall sub_00e8bce0(int a0, int a1) {  }

struct C_00e8bcf0 {
    int sub_00e8bcf0(int);
};

// @baa 0x00e8bcf0
int C_00e8bcf0::sub_00e8bcf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00e8bd00
void __stdcall sub_00e8bd00(int a0, int a1) {  }

struct C_00e8bd10 {
    int sub_00e8bd10(int);
};

// @baa 0x00e8bd10
int C_00e8bd10::sub_00e8bd10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e8bd20 {
    int sub_00e8bd20(int);
};

// @baa 0x00e8bd20
int C_00e8bd20::sub_00e8bd20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

extern "C" __declspec(dllimport) int SteamAPI_RegisterCallback(...);
struct C_00e8c0c0 {
    undefined4 sub_00e8c0c0(byte);
    int sub_00d67c50();
};

// @baa 0x00e8c0c0
undefined4 C_00e8c0c0::sub_00e8c0c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e8c0c0 *)(((char *)this + 8)))->sub_00d67c50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_00e8c0f0 { BYTE Bytes[36]; };

struct S_00e8c0f0 {
    TArray<E_00e8c0f0> Items; // 0x00
    E_00e8c0f0* sub_00e8c0f0(INT Index);
};

// @baa 0x00e8c0f0
E_00e8c0f0* S_00e8c0f0::sub_00e8c0f0(INT Index)
{
    return &Items(Index);
}

struct E_00e8c140 { BYTE Bytes[16]; };

struct S_00e8c140 {
    TArray<E_00e8c140> Items; // 0x00
    E_00e8c140* sub_00e8c140(INT Index);
};

// @baa 0x00e8c140
E_00e8c140* S_00e8c140::sub_00e8c140(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_00e8c190
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00e8c190(INT Index);
};

// @baa 0x00e8c190
FFaceFXElement* UFxRenderWidget_00e8c190::sub_00e8c190(INT Index)
{
	return &BoneArray(Index);
}

struct E_00e8c1e0 { BYTE Bytes[16]; };

struct S_00e8c1e0 {
    TArray<E_00e8c1e0> Items; // 0x00
    E_00e8c1e0* sub_00e8c1e0(INT Index);
};

// @baa 0x00e8c1e0
E_00e8c1e0* S_00e8c1e0::sub_00e8c1e0(INT Index)
{
    return &Items(Index);
}

struct C_00e8c260 { int sub_00e8c260(void); };

// @baa 0x00e8c260
int C_00e8c260::sub_00e8c260(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e8c2c0 {
    int sub_00e8c2c0(int);
};

// @baa 0x00e8c2c0
int C_00e8c2c0::sub_00e8c2c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e8c300 {
    int sub_00e8c300(int);
};

// @baa 0x00e8c300
int C_00e8c300::sub_00e8c300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00e8c310 { int sub_00e8c310(void); };

// @baa 0x00e8c310
int C_00e8c310::sub_00e8c310(void) { return *(int*)((char*)this + 20); }

struct C_00e8c320 {
    int sub_00e8c320();
};

// @baa 0x00e8c320
int C_00e8c320::sub_00e8c320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e8c340 {
    int sub_00e8c340(int);
};

// @baa 0x00e8c340
int C_00e8c340::sub_00e8c340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e8c350 {
    int sub_00e8c350(int);
};

// @baa 0x00e8c350
int C_00e8c350::sub_00e8c350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00e8c360 {
    int sub_00e8c360();
};

// @baa 0x00e8c360
int C_00e8c360::sub_00e8c360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct FData {
    INT X;
    INT Y;
    INT Z;
};

struct C_00e8dd80 {
    void sub_00e8dd80(FData *p);
};

// @baa 0x00e8dd80
void C_00e8dd80::sub_00e8dd80(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_00e8dda0 {
    void sub_00e8dda0(FData *p);
};

// @baa 0x00e8dda0
void C_00e8dda0::sub_00e8dda0(FData *p)
{
    volatile DWORD pad;
    pad = 0;
    p->X = 0;
    p->Y = 0;
    p->Z = 0;
}

struct C_00e8ddc0 {
    FString sub_00e8ddc0();
};

// @baa 0x00e8ddc0
FString C_00e8ddc0::sub_00e8ddc0()
{
    return TEXT("profile.bin");
}

struct M_00e8df20 { void sub_00549310(); };

struct C_00e8df20 { char pad[4]; M_00e8df20 m; void sub_00e8df20(); };

// @baa 0x00e8df20
void C_00e8df20::sub_00e8df20() { m.sub_00549310(); }

void sub_004025d0(void*);
struct D_00e8efb0 { void* p; ~D_00e8efb0(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e8efb0 { void* Data; int Num; int Max; void sub_00e8efb0(); };

// @baa 0x00e8efb0
void C_00e8efb0::sub_00e8efb0() {
    void* t = Data;
    {
    D_00e8efb0 d;
    Max = 0; Num = 0;
    d.~D_00e8efb0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e8f0f0 {
    void sub_00e8f0f0(int);
};

// @baa 0x00e8f0f0
void C_00e8f0f0::sub_00e8f0f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct D_00e8f130 { void* p; ~D_00e8f130(){ if(0) sub_004025d0(p);} };

struct C_00e8f130 { void* Data; int Num; int Max; void sub_00e8f130(); };

// @baa 0x00e8f130
void C_00e8f130::sub_00e8f130() {
    void* t = Data;
    {
    D_00e8f130 d;
    Max = 0; Num = 0;
    d.~D_00e8f130();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_00e8f290 { void* p; ~D_00e8f290(){ if(0) sub_004025d0(p);} };

struct C_00e8f290 { void* Data; int Num; int Max; void sub_00e8f290(); };

// @baa 0x00e8f290
void C_00e8f290::sub_00e8f290() {
    void* t = Data;
    {
    D_00e8f290 d;
    Max = 0; Num = 0;
    d.~D_00e8f290();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00e8f690
void __stdcall sub_00e8f690(int a0, int a1) {  }

struct M_00e8f6e0 { void sub_00549310(); };

struct C_00e8f6e0 { char pad[8]; M_00e8f6e0 m; void sub_00e8f6e0(); };

// @baa 0x00e8f6e0
void C_00e8f6e0::sub_00e8f6e0() { m.sub_00549310(); }

struct M_00e8f750 { void sub_0040fcc0(); };

struct C_00e8f750 { char pad[4]; M_00e8f750 m; void sub_00e8f750(); };

// @baa 0x00e8f750
void C_00e8f750::sub_00e8f750() { m.sub_0040fcc0(); }

struct M_00e8f760 { void sub_0040fcc0(); };

struct C_00e8f760 { char pad[4]; M_00e8f760 m; void sub_00e8f760(); };

// @baa 0x00e8f760
void C_00e8f760::sub_00e8f760() { m.sub_0040fcc0(); }

struct C_00e8f770 {
    int sub_00e8f770(int);
};

// @baa 0x00e8f770
int C_00e8f770::sub_00e8f770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e8f970 {
    undefined4 sub_00e8f970(byte);
    int sub_00549310();
};

// @baa 0x00e8f970
undefined4 C_00e8f970::sub_00e8f970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e8f970 *)(((char *)this + 8)))->sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00e90140 { void sub_0076ab30(); };

struct C_00e90140 { char pad[16]; M_00e90140 m; void sub_00e90140(); };

// @baa 0x00e90140
void C_00e90140::sub_00e90140() { m.sub_0076ab30(); }

void sub_00e8f130();
// @baa 0x00e90150
void sub_00e90150(void) { sub_00e8f130(); }

struct C_00e92bb0 { C_00e92bb0* sub_00e92bb0(void); };

// @baa 0x00e92bb0
C_00e92bb0* C_00e92bb0::sub_00e92bb0(void) { return this; }

struct C_00e92bc0 { C_00e92bc0* sub_00e92bc0(void); };

// @baa 0x00e92bc0
C_00e92bc0* C_00e92bc0::sub_00e92bc0(void) { return this; }

struct D_00e92bd0 { void* p; ~D_00e92bd0(){ if(0) sub_004025d0(p);} };

struct C_00e92bd0 { void* Data; int Num; int Max; void sub_00e92bd0(); };

// @baa 0x00e92bd0
void C_00e92bd0::sub_00e92bd0() {
    void* t = Data;
    {
    D_00e92bd0 d;
    Max = 0; Num = 0;
    d.~D_00e92bd0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e92cc0 {
    int sub_00e92cc0(int);
};

// @baa 0x00e92cc0
int C_00e92cc0::sub_00e92cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00e92cd0 {
    int sub_00e92cd0();
};

// @baa 0x00e92cd0
int C_00e92cd0::sub_00e92cd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e92cf0 {
    int sub_00e92cf0();
};

// @baa 0x00e92cf0
int C_00e92cf0::sub_00e92cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00e92d00 {
    undefined4 sub_00e92d00(byte);
};

int sub_00e8f6f0(void);
// @baa 0x00e92d00
undefined4 C_00e92d00::sub_00e92d00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e8f6f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e92d20 {
    undefined4 sub_00e92d20(byte);
    int sub_0040fcc0();
};

// @baa 0x00e92d20
undefined4 C_00e92d20::sub_00e92d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e92d20 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e92d50 {
    undefined4 sub_00e92d50(byte);
    int sub_0040fcc0();
};

// @baa 0x00e92d50
undefined4 C_00e92d50::sub_00e92d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e92d50 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e92e80
int UOnlineSubsystemSteamworks::sub_00e92e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_view {
    int sub_00549310();
};

// @baa 0x00e92f20
undefined4 UOnlineSubsystemSteamworks::sub_00e92f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_00549310();
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

struct TConstSetBitIterator_00e93090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e93090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e93090& operator++();
};

TConstSetBitIterator_00e93090::TConstSetBitIterator_00e93090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e93090
TConstSetBitIterator_00e93090& TConstSetBitIterator_00e93090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e930b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e930b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e930b0& operator++();
};

TConstSetBitIterator_00e930b0::TConstSetBitIterator_00e930b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e930b0
TConstSetBitIterator_00e930b0& TConstSetBitIterator_00e930b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e93100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e93100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e93100& operator++();
};

TConstSetBitIterator_00e93100::TConstSetBitIterator_00e93100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e93100
TConstSetBitIterator_00e93100& TConstSetBitIterator_00e93100::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e93150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e93150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e93150& operator++();
};

TConstSetBitIterator_00e93150::TConstSetBitIterator_00e93150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e93150
TConstSetBitIterator_00e93150& TConstSetBitIterator_00e93150::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e93170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e93170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e93170& operator++();
};

TConstSetBitIterator_00e93170::TConstSetBitIterator_00e93170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e93170
TConstSetBitIterator_00e93170& TConstSetBitIterator_00e93170::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00e94400
int UOnlineSubsystemSteamworks::vf_1ac(int a0, int a1, int a2, int a3, int a4) { return 1; }

// @baa 0x00e94410
int UOnlineSubsystemSteamworks::vf_1b4(int a0, int a1, int a2, int a3) { return 1; }

struct C_view_00e954f0 {
    int sub_00e92e00(int, int, int);
};

// @baa 0x00e954f0
int UOnlineSubsystemSteamworks::sub_00e954f0(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  ((C_view_00e954f0 *)(this))->sub_00e92e00((int)(&param_2), param_2, param_3);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct TConstSetBitIterator_00e95680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e95680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e95680& operator++();
};

TConstSetBitIterator_00e95680::TConstSetBitIterator_00e95680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e95680
TConstSetBitIterator_00e95680& TConstSetBitIterator_00e95680::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e956a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e956a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e956a0& operator++();
};

TConstSetBitIterator_00e956a0::TConstSetBitIterator_00e956a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e956a0
TConstSetBitIterator_00e956a0& TConstSetBitIterator_00e956a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e956f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e956f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e956f0& operator++();
};

TConstSetBitIterator_00e956f0::TConstSetBitIterator_00e956f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e956f0
TConstSetBitIterator_00e956f0& TConstSetBitIterator_00e956f0::operator++()
{
    It.Advance();
    return *this;
}

struct S_00e958c0 {
    void sub_00e937e0(int);
};

struct D_00e958c0 {
    S_00e958c0* pS;
    void sub_00e958c0(int a1);
};

// @baa 0x00e958c0
void D_00e958c0::sub_00e958c0(int a1) { pS->sub_00e937e0(a1); }

struct T { void sub_00e938d0(int); };

struct S_00e958d0 { T* p; void sub_00e958d0(int arg1); };

// @baa 0x00e958d0
void S_00e958d0::sub_00e958d0(int arg1)
{
    p->sub_00e938d0(arg1);
}

struct S_00e95980;
struct T_00e95980 {
    S_00e95980* p;
    int sub_00e95980(int arg1);
};

struct S_00e95980 {
    int sub_00e93ac0(int arg1);
};

// @baa 0x00e95980
int T_00e95980::sub_00e95980(int arg1)
{
    return p->sub_00e93ac0(arg1);
}

struct C_00e95990 {
    void sub_00e93b30();
    void sub_00e95990();
};

// @baa 0x00e95990
void C_00e95990::sub_00e95990()
{
    ((C_00e95990*)*(C_00e95990**)this)->sub_00e93b30();
}

struct S_00e959a0 { void sub_00e93c00(int a1); };

struct C_00e959a0 { void sub_00e959a0(int a1); };

// @baa 0x00e959a0
void C_00e959a0::sub_00e959a0(int a1)
{
  ((S_00e959a0 *)(*(void **)this))->sub_00e93c00(a1);
}

struct C_00e962c0 { void sub_00e931c0(int); C_00e962c0 *sub_00e962c0(int); };

// @baa 0x00e962c0
C_00e962c0 *C_00e962c0::sub_00e962c0(int a) { sub_00e931c0(a); return this; }

struct C_00e96780 {
    int sub_00e96780(int, undefined4);
    int sub_00e92d80(int, int, int);
};

// @baa 0x00e96780
int C_00e96780::sub_00e96780(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00e96780 *)(this))->sub_00e92d80((int)(&param_2), param_2, param_3);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_view_00e967c0 {
    int sub_00e92e00(int, int, int);
};

// @baa 0x00e967c0
int UOnlineSubsystemSteamworks::sub_00e967c0(int param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00e967c0 *)(this))->sub_00e92e00((int)(&param_2), param_2, param_3);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_view_00e96800 {
    int sub_00e95600(int);
};

// @baa 0x00e96800
void UOnlineSubsystemSteamworks::sub_00e96800(void)
{
    int param_1 = (int)this;
  ((C_view_00e96800 *)((*(char **)((char *)this + 0x1c))))->sub_00e95600(*(undefined4 *)(param_1 + 0x14));
  return;
}

struct TConstSetBitIterator_00e96810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e96810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e96810& operator++();
};

TConstSetBitIterator_00e96810::TConstSetBitIterator_00e96810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e96810
TConstSetBitIterator_00e96810& TConstSetBitIterator_00e96810::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00e96830 {
    int sub_00e95600(int);
};

// @baa 0x00e96830
void UOnlineSubsystemSteamworks::sub_00e96830(void)
{
    int param_1 = (int)this;
  ((C_view_00e96830 *)((*(char **)((char *)this + 0x14))))->sub_00e95600(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}

int sub_00e95580(void);
// @baa 0x00e96850
undefined4 UOnlineSubsystemSteamworks::sub_00e96850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e95580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00e96bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e96bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e96bc0& operator++();
};

TConstSetBitIterator_00e96bc0::TConstSetBitIterator_00e96bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e96bc0
TConstSetBitIterator_00e96bc0& TConstSetBitIterator_00e96bc0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e895b0(void);
int sub_00e95c90(...);
extern undefined4 g_026cc2bc;
// @baa 0x00e96c10
int sub_00e96c10(void)
{
  if (g_026cc2bc == 0) {
    g_026cc2bc = sub_00e95c90(L"OnlineSubsystemSteamworks");
    sub_00e895b0();
  }
  return g_026cc2bc;
}

void sub_00e962e0();
// @baa 0x00e96fa0
void sub_00e96fa0(void) { sub_00e962e0(); }

void sub_00e96490();
// @baa 0x00e96fb0
void sub_00e96fb0(void) { sub_00e96490(); }

int sub_00e95a00(void);
// @baa 0x00e97420
undefined4 UOnlineSubsystemSteamworks::sub_00e97420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e95a00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e98a60 { C_00e98a60* sub_00e98a60(void); };

// @baa 0x00e98a60
C_00e98a60* C_00e98a60::sub_00e98a60(void) { return this; }

struct C_00e98a70 { C_00e98a70* sub_00e98a70(void); };

// @baa 0x00e98a70
C_00e98a70* C_00e98a70::sub_00e98a70(void) { return this; }

struct C_00e98a80 {
    void sub_00e98a80();
    int sub_00e95600(int);
};

// @baa 0x00e98a80
void C_00e98a80::sub_00e98a80(void)
{
    int param_1 = (int)this;
  ((C_00e98a80 *)((*(char **)((char *)this + 0x1c))))->sub_00e95600(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

struct TConstSetBitIterator_00e98aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e98aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e98aa0& operator++();
};

TConstSetBitIterator_00e98aa0::TConstSetBitIterator_00e98aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e98aa0
TConstSetBitIterator_00e98aa0& TConstSetBitIterator_00e98aa0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00e95740(void);
// @baa 0x00e98df0
int UOnlineSubsystemSteamworks::sub_00e98df0(void)
{
    int param_1 = (int)this;

  sub_00e95740();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e957a0(void);
// @baa 0x00e98e10
int UOnlineSubsystemSteamworks::sub_00e98e10(void)
{
    int param_1 = (int)this;

  sub_00e957a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00e991e0 {
    int sub_00e98c50(int, int);
};

// @baa 0x00e991e0
void UOnlineSubsystemSteamworks::sub_00e991e0(void)
{
    int param_1 = (int)this;
  ((C_view_00e991e0 *)(this))->sub_00e98c50(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00e992f0 {
    int sub_00e98d10(int, int);
};

// @baa 0x00e992f0
undefined4 UOnlineSubsystemSteamworks::sub_00e992f0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00e992f0 *)(this))->sub_00e98d10(param_2, param_3);
  return param_1;
}

struct C_view_00e99310 {
    int sub_00e98d70(int, int, int);
};

// @baa 0x00e99310
int UOnlineSubsystemSteamworks::sub_00e99310(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00e99310 *)(this))->sub_00e98d70(param_2, param_3, param_4);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return param_1;
}

// @baa 0x00e99340
int UOnlineSubsystemSteamworks::sub_00e99340(void)
{
    int param_1 = (int)this;

  sub_00e95740();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e99360
int UOnlineSubsystemSteamworks::sub_00e99360(void)
{
    int param_1 = (int)this;

  sub_00e957a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e98fa0();
// @baa 0x00e99380
void sub_00e99380(void) { sub_00e98fa0(); }

// @baa 0x00e99490
int UOnlineSubsystemSteamworks::vf_1b0(int a0, int a1) { return 1; }

void sub_00e99100();
// @baa 0x00e994a0
void sub_00e994a0(void) { sub_00e99100(); }

void sub_00e99170();
// @baa 0x00e994b0
void sub_00e994b0(void) { sub_00e99170(); }

struct C_00e994c0 { C_00e994c0* sub_00e994c0(void); };

// @baa 0x00e994c0
C_00e994c0* C_00e994c0::sub_00e994c0(void) { return this; }

struct C_view_00e99520 {
    int sub_00e98d10(int, int);
};

// @baa 0x00e99520
int UOnlineSubsystemSteamworks::sub_00e99520(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00e99520 *)(this))->sub_00e98d10(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00e98c50(int, int);
};

struct C_00e99550 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00e99550(void);
};

// @baa 0x00e99550
void C_00e99550::sub_00e99550(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00e98c50(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00e99570
int UOnlineSubsystemSteamworks::sub_00e99570(void)
{
    int param_1 = (int)this;

  sub_00e95740();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e99590
int UOnlineSubsystemSteamworks::sub_00e99590(void)
{
    int param_1 = (int)this;

  sub_00e957a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00d88570(void);
extern undefined * g_0211c19c;
extern undefined * g_0211c1b8;
// @baa 0x00e995b0
undefined4 * UOnlineSubsystem::sub_00e995b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d88570();
  *param_1 = (undefined4)(&g_0211c1b8);
  param_1[0xc] = (undefined4)(&g_0211c19c);
  return param_1;
}

struct A_00e995d0 { virtual void sub_00e99970(); char pad[44]; };

struct B_00e995d0 { virtual void sub_00e99970(); };

struct C_00e995d0 : A_00e995d0, B_00e995d0 { virtual void sub_00e99970(); C_00e995d0(); };

C_00e995d0::C_00e995d0() {}

// @baa 0x00e995d0
void C_00e995d0::sub_00e99970() {}

// @baa 0x00e995e0
// @baa 0x00e99970
// @baa 0x00e99b80
void sub_00e99b80(void) { sub_00e99100(); }

// @baa 0x00e99b90
void sub_00e99b90(void) { sub_00e99170(); }

// @baa 0x00e9a000
int UOnlineSubsystemSteamworks::sub_00e9a000(void)
{
    int param_1 = (int)this;

  sub_00e95740();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e9a020
int UOnlineSubsystemSteamworks::sub_00e9a020(void)
{
    int param_1 = (int)this;

  sub_00e957a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e9a040
// @baa 0x00e9a170
void UOnlineSubsystemSteamworks::sub_00e9a170(void) { *(int*)((char*)this + 4) = 1; }

struct Inner {
    void sub_00e98910(int);
};

struct Outer {
    char pad[8];
    Inner* field;
    void sub_00e9a180();
};

// @baa 0x00e9a180
void Outer::sub_00e9a180() {
    field->sub_00e98910((int)this);
}

struct X {};

extern FName g_026c4acc;
 /* ENGINE_SetVoiceInterface */
struct UOnlineSubsystem_ : public UOnlineSubsystem
{
    UBOOL eventSetVoiceInterface(UObject* NewInterface);
};

// @baa 0x00e85c40
/* OnlineSubsystem.uc's SetVoiceInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem_::eventSetVoiceInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetVoiceInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetVoiceInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c4acc), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c5344;
 /* ENGINE_SetGameInterface */
struct UOnlineSubsystem__00e85c90 : public UOnlineSubsystem
{
    UBOOL eventSetGameInterface(UObject* NewInterface);
};

// @baa 0x00e85c90
/* OnlineSubsystem.uc's SetGameInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem__00e85c90::eventSetGameInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetGameInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetGameInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c5344), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c3eb0;
 /* ENGINE_SetSystemInterface */
struct UOnlineSubsystem__00e85ce0 : public UOnlineSubsystem
{
    UBOOL eventSetSystemInterface(UObject* NewInterface);
};

// @baa 0x00e85ce0
/* OnlineSubsystem.uc's SetSystemInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem__00e85ce0::eventSetSystemInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetSystemInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetSystemInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c3eb0), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c50f4;
 /* ENGINE_SetPlayerInterfaceEx */
struct UOnlineSubsystem__00e85d30 : public UOnlineSubsystem
{
    UBOOL eventSetPlayerInterfaceEx(UObject* NewInterface);
};

// @baa 0x00e85d30
/* OnlineSubsystem.uc's SetPlayerInterfaceEx script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem__00e85d30::eventSetPlayerInterfaceEx(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetPlayerInterfaceEx_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetPlayerInterfaceEx_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c50f4), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c3edc;
 /* ENGINE_SetPlayerInterface */
struct UOnlineSubsystem__00e85d80 : public UOnlineSubsystem
{
    UBOOL eventSetPlayerInterface(UObject* NewInterface);
};

// @baa 0x00e85d80
/* OnlineSubsystem.uc's SetPlayerInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem__00e85d80::eventSetPlayerInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetPlayerInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetPlayerInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c3edc), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c4288;
 /* ENGINE_SetAccountInterface */
struct UOnlineSubsystem__00e85dd0 : public UOnlineSubsystem
{
    UBOOL eventSetAccountInterface(UObject* NewInterface);
};

// @baa 0x00e85dd0
/* OnlineSubsystem.uc's SetAccountInterface script event, generated glue (EngineClasses.h). */
UBOOL UOnlineSubsystem__00e85dd0::eventSetAccountInterface(UObject* NewInterface)
{
    struct OnlineSubsystem_eventSetAccountInterface_Parms
    {
        UObject* NewInterface;
        UBOOL ReturnValue;
    };
    OnlineSubsystem_eventSetAccountInterface_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.NewInterface = NewInterface;
    ProcessEvent(FindFunctionChecked(g_026c4288), &Parms);
    return Parms.ReturnValue;
}
