// IpDrv_0e20000.cpp: 62 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e28850
void sub_00e28850(void) {  }

// @baa 0x00e28860
void sub_00e28860(void) {  }

// @baa 0x00e28870
void sub_00e28870(void) {  }

// @baa 0x00e28880
float10 sub_00e28880(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00e28890
void sub_00e28890(void) {  }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00e28990();
};

// @baa 0x00e28990
S *S::sub_00e28990()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C {
    void sub_00e289c0(undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x00e289c0
void C::sub_00e289c0(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 7) = param_5;
  return;
}

struct C_00e28a00 {
    void sub_00e28a00(undefined4 *);
};

// @baa 0x00e28a00
void C_00e28a00::sub_00e28a00(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = *param_2;
  return;
}

struct C_00e28b00 {
    undefined4 sub_00e28b00(short *);
};

// @baa 0x00e28b00
undefined4 C_00e28b00::sub_00e28b00(short * param_2)
{
    short * param_1 = (short *)this;

  if (((*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) && (param_1[1] == param_2[1])) &&
     (*param_1 == *param_2)) {
    return 1;
  }
  return 0;
}

struct C_00e28b30 { C_00e28b30* sub_00e28b30(void); };

// @baa 0x00e28b30
C_00e28b30* C_00e28b30::sub_00e28b30(void) { return this; }

struct C_00e28b40 { C_00e28b40* sub_00e28b40(void); };

// @baa 0x00e28b40
C_00e28b40* C_00e28b40::sub_00e28b40(void) { return this; }

extern char g_020f45e8[];
struct C_00e28b70 { void sub_00e28b70(void); };

// @baa 0x00e28b70
void C_00e28b70::sub_00e28b70(void) { *(int*)((char*)this + 0) = (int)g_020f45e8; }

struct C_00e28b80 {
    undefined4 * sub_00e28b80(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e28b80
undefined4 * C_00e28b80::sub_00e28b80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020f45e8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020f4644[];
struct C_00e28ba0 { C_00e28ba0* sub_00e28ba0(void); };

// @baa 0x00e28ba0
C_00e28ba0* C_00e28ba0::sub_00e28ba0(void) { *(int*)((char*)this + 0) = (int)g_020f4644; return this; }

struct C_00e28bb0 { void sub_00e28bb0(void); };

// @baa 0x00e28bb0
void C_00e28bb0::sub_00e28bb0(void) { *(int*)((char*)this + 0) = (int)g_020f4644; }

struct C_00e28bc0 {
    undefined4 * sub_00e28bc0(byte);
};

// @baa 0x00e28bc0
undefined4 * C_00e28bc0::sub_00e28bc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020f4644);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e28c10
int sub_00e28c10(void) { return 1; }

// @baa 0x00e28c20
int sub_00e28c20(void) { return 0; }

struct C_00e28c50 { void sub_00e28c50(void); };

// @baa 0x00e28c50
void C_00e28c50::sub_00e28c50(void) { *(int*)((char*)this + 0) = (int)g_020f4644; }

struct C_00e28ca0 { void sub_00e28ca0(void); };

// @baa 0x00e28ca0
void C_00e28ca0::sub_00e28ca0(void) { *(int*)((char*)this + 0) = (int)g_020f45e8; }

// @baa 0x00e28cb0
int __stdcall sub_00e28cb0(int a0) { return 1; }

struct C_00e28cc0 {
    undefined4 * sub_00e28cc0(byte);
};

// @baa 0x00e28cc0
undefined4 * C_00e28cc0::sub_00e28cc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020f45e8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020f46c8[];
struct C_00e28d90 { C_00e28d90* sub_00e28d90(void); };

// @baa 0x00e28d90
C_00e28d90* C_00e28d90::sub_00e28d90(void) { *(int*)((char*)this + 0) = (int)g_020f46c8; return this; }

struct C_00e28eb0 { int sub_00e28eb0(void); };

// @baa 0x00e28eb0
int C_00e28eb0::sub_00e28eb0(void) { return *(int*)((char*)this + 12); }

extern char g_020f4748[];
struct C_00e29230 { void sub_00e29230(void); };

// @baa 0x00e29230
void C_00e29230::sub_00e29230(void) { *(int*)((char*)this + 0) = (int)g_020f4748; }

struct C_00e29240 {
    undefined4 * sub_00e29240(byte);
};

// @baa 0x00e29240
undefined4 * C_00e29240::sub_00e29240(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020f4748);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e29260
int sub_00e29260(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00e29270
int sub_00e29270(void) { return (int)g_01e3f3e0; }

extern "C" int g_026cad78;
extern "C" int g_026cad7c;
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
    void sub_00e292c0();
};

// @baa 0x00e292c0
void UObjectThunk::sub_00e292c0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026cad78, g_026cad7c, 0), 0, 0);
}

// @baa 0x00e292f0
int sub_00e292f0(int a0, int a1) { return a1; }

// @baa 0x00e29300
int sub_00e29300(void) { return (int)g_01e3f3e0; }

struct C_00e29310 { C_00e29310* sub_00e29310(int a0); };

// @baa 0x00e29310
C_00e29310* C_00e29310::sub_00e29310(int a0) { return this; }

struct C_00e29320 { C_00e29320* sub_00e29320(int a0); };

// @baa 0x00e29320
C_00e29320* C_00e29320::sub_00e29320(int a0) { return this; }

struct C_00e29330 { C_00e29330* sub_00e29330(int a0); };

// @baa 0x00e29330
C_00e29330* C_00e29330::sub_00e29330(int a0) { return this; }

// @baa 0x00e29530
int sub_00e29530(int a0, int a1) { return a1; }

struct C_00e29540 { C_00e29540* sub_00e29540(int a0); };

// @baa 0x00e29540
C_00e29540* C_00e29540::sub_00e29540(int a0) { return this; }

struct C_00e29550 { C_00e29550* sub_00e29550(int a0); };

// @baa 0x00e29550
C_00e29550* C_00e29550::sub_00e29550(int a0) { return this; }

// @baa 0x00e29960
int sub_00e29960(int a0, int a1) { return a1; }

// @baa 0x00e299e0
int sub_00e299e0(int a0, int a1) { return a1; }

struct C_00e299f0 { C_00e299f0* sub_00e299f0(int a0); };

// @baa 0x00e299f0
C_00e299f0* C_00e299f0::sub_00e299f0(int a0) { return this; }

// @baa 0x00e29a90
int sub_00e29a90(int a0, int a1) { return a1; }

// @baa 0x00e29ae0
int sub_00e29ae0(int a0, int a1) { return a1; }

// @baa 0x00e2b5a0
IMPLEMENT_CLASS_AT(UOnlineSubsystemCommonImpl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\OnlineSubsystemCommonImpl.cpp", 9);

// @baa 0x00e2b6b0
int UOnlineSubsystemCommonImpl::vf_000(void) { return 1; }

// @baa 0x00e2b6c0
bool UOnlineSubsystemCommonImpl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e2b9d0
IMPLEMENT_CLASS_AT(UTcpNetDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\TcpNetDriver.cpp", 423);

// @baa 0x00e2bae0
int UTcpNetDriver::vf_000(void) { return 1; }

// @baa 0x00e2baf0
bool UTcpNetDriver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00e2bc90 { int sub_00e2bc90(void); };

// @baa 0x00e2bc90
int C_00e2bc90::sub_00e2bc90(void) { return *(int*)((char*)this + 284); }

struct C_00e2bca0 { int sub_00e2bca0(void); };

// @baa 0x00e2bca0
int C_00e2bca0::sub_00e2bca0(void) { return *(int*)((char*)this + 280); }

// @baa 0x00e2c240
int __stdcall sub_00e2c240(int a0) { return 1; }

struct C_00e2c810 { int sub_00e2c810(void); };

// @baa 0x00e2c810
int C_00e2c810::sub_00e2c810(void) { return *(int*)((char*)this + 12); }

struct C_00e2c820 { void sub_00e2c820(int a0); };

// @baa 0x00e2c820
void C_00e2c820::sub_00e2c820(int a0) { *(int*)((char*)this + 12) = a0; }

// @baa 0x00e2c830
IMPLEMENT_CLASS_AT(UMCPBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineNewsInterfaceMcp.cpp", 9);

// @baa 0x00e2c960
bool UMCPBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e2c9a0
int UOnlineNewsInterfaceMcp::vf_000(void) { return 1; }

// @baa 0x00e2c9b0
int UOnlineTitleFileDownloadMcp::vf_000(void) { return 1; }

struct S_00e2da70 {
    TArray<BYTE> Items; // 0x00
    BYTE* sub_00e2da70(INT Index);
};

// @baa 0x00e2da70
BYTE* S_00e2da70::sub_00e2da70(INT Index)
{
    return &Items(Index);
}

struct C_00e2dd00 {
    undefined4 sub_00e2dd00();
};

// @baa 0x00e2dd00
undefined4 C_00e2dd00::sub_00e2dd00(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 0x5c) != 1) && (*(int *)(param_1 + 0x88) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_00e2e170 {
    undefined4 * sub_00e2e170();
};

int sub_00e2aba0(void);
extern undefined4 g_020f4828;
// @baa 0x00e2e170
undefined4 * C_00e2e170::sub_00e2e170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e2aba0();
  *param_1 = (undefined4)(&g_020f4828);
  param_1[10] = 0;
  return param_1;
}

typedef uint size_t;

struct C_view {
    int sub_0040cf70(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00e2f030
void UObject::sub_00e2f030(void * param_2, size_t param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = (param_3 - param_1[1]) + param_1[3];
  if (0 < iVar1) {
    ((C_view *)(this))->sub_0040cf70(iVar1);
  }
  if (param_3 != 0) {
    sub_01a375f0((void *)(*param_1 + param_1[3]),param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}

extern int __stdcall sub_018d354a(int First, int Second);
struct UTcpipConnection_ : public UTcpipConnection {
    bool sub_00e2be70(int Second);
};

// @baa 0x00e2be70
bool UTcpipConnection_::sub_00e2be70(int Second)
{
    int First = *(int*)((char*)this + 8);
    return sub_018d354a(First, Second) == 0;
}
