// Engine_07a0000.cpp (part 1 of 4): 241 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_007814b0(void);
extern undefined4 g_026b62b8;
// @baa 0x007a02f0
void AController::vf_180(void)
{
    int param_1 = (int)this;

  sub_007814b0();
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(g_026b62b8 + 0x144);
  *(int *)(g_026b62b8 + 0x144) = *(int *)(g_026b62b8 + 0x144) + 1;
  return;
}

// @baa 0x007a0320
int AController::vf_354(void) { return 0; }

// @baa 0x007a0390
int AController::vf_3a4(void) { return 0; }

// @baa 0x007a05e0
undefined4 APlayerController::vf_3a8(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x1a8) != 0) && ((*(byte *)(*(int *)(param_1 + 0x1a8) + 0x1c8) & 10) != 0)
     ) {
    return 1;
  }
  return 0;
}

// @baa 0x007a0600
int APlayerController::vf_3ac(void) { return 0; }

// @baa 0x007a06e0
int sub_007a06e0(void) { return 0; }

// @baa 0x007a06f0
void ADroppedPickup::sub_007a06f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x240) == param_1)) {
    *(undefined4 *)(iVar1 + 0x240) = 0;
  }
  return;
}

// @baa 0x007a0c40
void AController::vf_36c(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x007a0da0
bool AController::sub_007a0da0(uint param_2)
{
    int param_1 = (int)this;

  return *(ushort *)(*(int *)(param_1 + 0x18) + 0x34) == param_2;
}

// @baa 0x007a0ec0
void AController::sub_007a0ec0(void)
{
    int param_1 = (int)this;

  *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0x1fd;
  return;
}

// @baa 0x007a0f00
int __stdcall sub_007a0f00(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x007a12c0
int AController::vf_3b8(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x1a8) == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// @baa 0x007a14f0
void APlayerController::sub_007a14f0(int a0) { *(int*)((char*)this + 876) = a0; }

// @baa 0x007a1500
UInterpTrackInstDirector* APlayerController::sub_007a1500() { return *(UInterpTrackInstDirector**)((char*)this + 876); }

extern undefined4 g_026c3cdc;
// @baa 0x007a1f40
INT APlayerController::vf_448() {
  return *(uint *)(g_026c3cdc + 0x1e4) >> 5 & 1;
}

// @baa 0x007a1f80
int APlayerController::vf_41c(void) { return 0; }

// @baa 0x007a1f90
void APlayerController::vf_420(int a0) {  }

// @baa 0x007a1fa0
void APlayerController::vf_424(int a0) {  }

// @baa 0x007a1fb0
void APlayerController::vf_428(int a0) {  }

// @baa 0x007a1fc0
void APlayerController::vf_42c(int a0) {  }

// @baa 0x007a1fd0
int APlayerController::vf_430(void) { return 1; }

// @baa 0x007a1fe0
int APlayerController::vf_434(void) { return 1; }

// @baa 0x007a2020
undefined1 ATeamInfo::GetTeamNum(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1bc);
}

// @baa 0x007a2050
void APlayerController::vf_38c(int a0, int a1, int a2, int a3) {  }

// @baa 0x007a2640
int UDistributionFloatParameterBase::vf_000(void) { return 1; }

// @baa 0x007a4cb0
int sub_007a4cb0(int a0, int a1) { return a1; }

struct C { int sub_007a4cc0(void); };

// @baa 0x007a4cc0
int C::sub_007a4cc0(void) { return *(int*)((char*)this + 492); }

// @baa 0x007a4cd0
int sub_007a4cd0(int a0, int a1) { return a1; }

// @baa 0x007a4ce0
int sub_007a4ce0(int a0, int a1) { return a1; }

// @baa 0x007a4cf0
int sub_007a4cf0(int a0, int a1) { return a1; }

struct C_007a4d00 { C_007a4d00* sub_007a4d00(int a0); };

// @baa 0x007a4d00
C_007a4d00* C_007a4d00::sub_007a4d00(int a0) { return this; }

extern "C" int g_026c5408;
extern "C" int g_026c540c;
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
    void sub_007a4d10();
};

// @baa 0x007a4d10
void UObjectThunk::sub_007a4d10()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5408, g_026c540c, 0), 0, 0);
}

extern "C" int g_026c52e0;
extern "C" int g_026c52e4;
struct UObjectThunk_007a4d40 {
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
    void sub_007a4d40();
};

// @baa 0x007a4d40
void UObjectThunk_007a4d40::sub_007a4d40()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c52e0, g_026c52e4, 0), 0, 0);
}

// @baa 0x007a4db0
undefined4 sub_007a4db0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x007a4dc0
int sub_007a4dc0(int a0, int a1) { return a1; }

struct C_007a4dd0 { C_007a4dd0* sub_007a4dd0(int a0); };

// @baa 0x007a4dd0
C_007a4dd0* C_007a4dd0::sub_007a4dd0(int a0) { return this; }

struct C_007a4de0 { C_007a4de0* sub_007a4de0(int a0); };

// @baa 0x007a4de0
C_007a4de0* C_007a4de0::sub_007a4de0(int a0) { return this; }

struct C_007a4df0 { C_007a4df0* sub_007a4df0(int a0); };

// @baa 0x007a4df0
C_007a4df0* C_007a4df0::sub_007a4df0(int a0) { return this; }

struct C_007a7b70 { int a, b, c; C_007a7b70(); };

// @baa 0x007a7b70
C_007a7b70::C_007a7b70() : a(0), b(0), c(0) {}

// @baa 0x007a7b80
int sub_007a7b80(void) { return 1; }

// @baa 0x007a7b90
bool sub_007a7b90(int * param_1)
{
  return *param_1 != 0;
}

// @baa 0x007a7ba0
int sub_007a7ba0(void) { return 2; }

struct C_007a7bb0 {
    int sub_007a7bb0();
};

// @baa 0x007a7bb0
int C_007a7bb0::sub_007a7bb0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 2;
}

// @baa 0x007a7bc0
int sub_007a7bc0(void) { return 2; }

struct C_007a7bd0 { int sub_007a7bd0(void); };

// @baa 0x007a7bd0
int C_007a7bd0::sub_007a7bd0(void) { return *(int*)((char*)this + 4); }

struct C_007a7be0 { int a, b, c; C_007a7be0(); };

// @baa 0x007a7be0
C_007a7be0::C_007a7be0() : a(0), b(0), c(0) {}

struct C_007a7bf0 { int sub_007a7bf0(void); };

// @baa 0x007a7bf0
int C_007a7bf0::sub_007a7bf0(void) { return *(int*)((char*)this + 4); }

struct C_007a7c00 { int a, b, c; C_007a7c00(); };

// @baa 0x007a7c00
C_007a7c00::C_007a7c00() : a(0), b(0), c(0) {}

struct C_007a7c10 { int sub_007a7c10(void); };

// @baa 0x007a7c10
int C_007a7c10::sub_007a7c10(void) { return *(int*)((char*)this + 4); }

struct C_007a7c20 { int sub_007a7c20(void); };

// @baa 0x007a7c20
int C_007a7c20::sub_007a7c20(void) { return *(int*)((char*)this + 4); }

struct C_007a7c30 { int sub_007a7c30(void); };

// @baa 0x007a7c30
int C_007a7c30::sub_007a7c30(void) { return *(int*)((char*)this + 4); }

struct C_007a7c40 { int sub_007a7c40(void); };

// @baa 0x007a7c40
int C_007a7c40::sub_007a7c40(void) { return *(int*)((char*)this + 4); }

struct C_007a7c50 { int a, b, c; C_007a7c50(); };

// @baa 0x007a7c50
C_007a7c50::C_007a7c50() : a(0), b(0), c(0) {}

struct C_007a7c60 {
    bool sub_007a7c60();
};

// @baa 0x007a7c60
bool C_007a7c60::sub_007a7c60(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0xc) != '\0';
}

struct C_007a7c70 {
    bool sub_007a7c70();
};

// @baa 0x007a7c70
bool C_007a7c70::sub_007a7c70(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0xc) != '\0';
}

struct C_007a7c80 { int sub_007a7c80(void); };

// @baa 0x007a7c80
int C_007a7c80::sub_007a7c80(void) { return *(int*)((char*)this + 4); }

struct C_007a7c90 {
    bool sub_007a7c90();
};

// @baa 0x007a7c90
bool C_007a7c90::sub_007a7c90(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0xc) != '\0';
}

struct C_007a7ca0 {
    bool sub_007a7ca0();
};

// @baa 0x007a7ca0
bool C_007a7ca0::sub_007a7ca0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0xc) != '\0';
}

struct C_007a7cb0 { int sub_007a7cb0(void); };

// @baa 0x007a7cb0
int C_007a7cb0::sub_007a7cb0(void) { return *(int*)((char*)this + 4); }

struct C_007a7cc0 { int sub_007a7cc0(void); };

// @baa 0x007a7cc0
int C_007a7cc0::sub_007a7cc0(void) { return *(int*)((char*)this + 0); }

struct C_007a7cd0 { int a, b, c; C_007a7cd0(); };

// @baa 0x007a7cd0
C_007a7cd0::C_007a7cd0() : a(0), b(0), c(0) {}

struct C_007a7ce0 { int sub_007a7ce0(void); };

// @baa 0x007a7ce0
int C_007a7ce0::sub_007a7ce0(void) { return *(int*)((char*)this + 4); }

struct C_007a7cf0 { int sub_007a7cf0(void); };

// @baa 0x007a7cf0
int C_007a7cf0::sub_007a7cf0(void) { return *(int*)((char*)this + 4); }

struct C_007a7d00 { int a, b, c; C_007a7d00(); };

// @baa 0x007a7d00
C_007a7d00::C_007a7d00() : a(0), b(0), c(0) {}

struct C_007a7d10 { int a, b, c; C_007a7d10(); };

// @baa 0x007a7d10
C_007a7d10::C_007a7d10() : a(0), b(0), c(0) {}

struct C_007a7d20 { int sub_007a7d20(void); };

// @baa 0x007a7d20
int C_007a7d20::sub_007a7d20(void) { return *(int*)((char*)this + 4); }

struct T_007a7d30 { int x; };

// @baa 0x007a7d30
template T_007a7d30& TIndirectArray<T_007a7d30>::operator()(INT);

struct C_007a7d80 { int a, b, c; C_007a7d80(); };

// @baa 0x007a7d80
C_007a7d80::C_007a7d80() : a(0), b(0), c(0) {}

struct C_007a7d90 { int a, b, c; C_007a7d90(); };

// @baa 0x007a7d90
C_007a7d90::C_007a7d90() : a(0), b(0), c(0) {}

struct C_007a7da0 { int sub_007a7da0(void); };

// @baa 0x007a7da0
int C_007a7da0::sub_007a7da0(void) { return *(int*)((char*)this + 4); }

struct C_007a7db0 { int sub_007a7db0(void); };

// @baa 0x007a7db0
int C_007a7db0::sub_007a7db0(void) { return *(int*)((char*)this + 4); }

struct C_007a7dc0 { int sub_007a7dc0(void); };

// @baa 0x007a7dc0
int C_007a7dc0::sub_007a7dc0(void) { return *(int*)((char*)this + 4); }

struct T_007a7dd0 { int x; };

// @baa 0x007a7dd0
template T_007a7dd0& TIndirectArray<T_007a7dd0>::operator()(INT);

struct C_007a7e20 { int a, b, c; C_007a7e20(); };

// @baa 0x007a7e20
C_007a7e20::C_007a7e20() : a(0), b(0), c(0) {}

struct C_007a7e30 { int sub_007a7e30(void); };

// @baa 0x007a7e30
int C_007a7e30::sub_007a7e30(void) { return *(int*)((char*)this + 4); }

struct C_007a7e70 { int a, b, c; C_007a7e70(); };

// @baa 0x007a7e70
C_007a7e70::C_007a7e70() : a(0), b(0), c(0) {}

struct C_007a7e80 { int sub_007a7e80(void); };

// @baa 0x007a7e80
int C_007a7e80::sub_007a7e80(void) { return *(int*)((char*)this + 0); }

// @baa 0x007a7e90
int sub_007a7e90(void) { return 368; }

struct C_007a7ea0 { int sub_007a7ea0(void); };

// @baa 0x007a7ea0
int C_007a7ea0::sub_007a7ea0(void) { return *(int*)((char*)this + 4); }

struct C_007a7eb0 { int a, b, c; C_007a7eb0(); };

// @baa 0x007a7eb0
C_007a7eb0::C_007a7eb0() : a(0), b(0), c(0) {}

struct C_007a7ec0 { int sub_007a7ec0(void); };

// @baa 0x007a7ec0
int C_007a7ec0::sub_007a7ec0(void) { return *(int*)((char*)this + 4); }

struct C_007a7ed0 { int sub_007a7ed0(void); };

// @baa 0x007a7ed0
int C_007a7ed0::sub_007a7ed0(void) { return *(int*)((char*)this + 4); }

struct C_007a7ee0 { int sub_007a7ee0(void); };

// @baa 0x007a7ee0
int C_007a7ee0::sub_007a7ee0(void) { return *(int*)((char*)this + 4); }

struct C_007a7ef0 { int a, b, c; C_007a7ef0(); };

// @baa 0x007a7ef0
C_007a7ef0::C_007a7ef0() : a(0), b(0), c(0) {}

struct C_007a7f00 { int sub_007a7f00(void); };

// @baa 0x007a7f00
int C_007a7f00::sub_007a7f00(void) { return *(int*)((char*)this + 4); }

struct C_007a7f10 { int a, b, c; C_007a7f10(); };

// @baa 0x007a7f10
C_007a7f10::C_007a7f10() : a(0), b(0), c(0) {}

struct C_007a7f20 { int sub_007a7f20(void); };

// @baa 0x007a7f20
int C_007a7f20::sub_007a7f20(void) { return *(int*)((char*)this + 4); }

struct C_007a7f30 { int sub_007a7f30(void); };

// @baa 0x007a7f30
int C_007a7f30::sub_007a7f30(void) { return *(int*)((char*)this + 4); }

struct C_007a7fb0 { int a, b, c; C_007a7fb0(); };

// @baa 0x007a7fb0
C_007a7fb0::C_007a7fb0() : a(0), b(0), c(0) {}

struct C_007a8030 { int a, b, c; C_007a8030(); };

// @baa 0x007a8030
C_007a8030::C_007a8030() : a(0), b(0), c(0) {}

struct C_007a8040 { int sub_007a8040(void); };

// @baa 0x007a8040
int C_007a8040::sub_007a8040(void) { return *(int*)((char*)this + 4); }

struct C_007a8050 { int a, b, c; C_007a8050(); };

// @baa 0x007a8050
C_007a8050::C_007a8050() : a(0), b(0), c(0) {}

struct C_007a8060 { int sub_007a8060(void); };

// @baa 0x007a8060
int C_007a8060::sub_007a8060(void) { return *(int*)((char*)this + 4); }

struct C_007a8070 { int a, b, c; C_007a8070(); };

// @baa 0x007a8070
C_007a8070::C_007a8070() : a(0), b(0), c(0) {}

struct C_007a8080 { int sub_007a8080(void); };

// @baa 0x007a8080
int C_007a8080::sub_007a8080(void) { return *(int*)((char*)this + 4); }

struct C_007a8090 {
    int sub_007a8090();
};

// @baa 0x007a8090
int C_007a8090::sub_007a8090(void)
{
    int * param_1 = (int *)this;

  return param_1[1] - *param_1 >> 2;
}

struct C_007a80a0 {
    int sub_007a80a0(int);
};

// @baa 0x007a80a0
int C_007a80a0::sub_007a80a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007a80b0 { int sub_007a80b0(void); };

// @baa 0x007a80b0
int C_007a80b0::sub_007a80b0(void) { return *(int*)((char*)this + 4); }

struct C_007a80e0 {
    void sub_007a80e0();
};

// @baa 0x007a80e0
void C_007a80e0::sub_007a80e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined4 *)*param_1 = param_1[1];
  return;
}

struct C_007a83d0 { int a, b, c; C_007a83d0(); };

// @baa 0x007a83d0
C_007a83d0::C_007a83d0() : a(0), b(0), c(0) {}

struct C_007a83e0 { int sub_007a83e0(void); };

// @baa 0x007a83e0
int C_007a83e0::sub_007a83e0(void) { return *(int*)((char*)this + 4); }

struct C_007a8420 { int sub_007a8420(void); };

// @baa 0x007a8420
int C_007a8420::sub_007a8420(void) { return *(int*)((char*)this + 0); }

struct C_007a8460 { int sub_007a8460(void); };

// @baa 0x007a8460
int C_007a8460::sub_007a8460(void) { return *(int*)((char*)this + 0); }

struct C_007a84a0{
int*sub_007a84a0(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x007a84a0
int*C_007a84a0::sub_007a84a0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(iVar1));
}
return param_1;
}

struct C_007a84d0 {
    void sub_007a84d0();
};

int sub_0053dfa0(...);
// @baa 0x007a84d0
void C_007a84d0::sub_007a84d0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_007a84f0 { int sub_007a84f0(void); };

// @baa 0x007a84f0
int C_007a84f0::sub_007a84f0(void) { return *(int*)((char*)this + 0); }

struct C_007a8500 { int sub_007a8500(void); };

// @baa 0x007a8500
int C_007a8500::sub_007a8500(void) { return *(int*)((char*)this + 0); }

struct C_007a8580 { int sub_007a8580(void); };

// @baa 0x007a8580
int C_007a8580::sub_007a8580(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_007a8600{
void sub_007a8600(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x007a8600
void C_007a8600::sub_007a8600(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_007a8840 { C_007a8840* sub_007a8840(int a0); };

// @baa 0x007a8840
C_007a8840* C_007a8840::sub_007a8840(int a0) { return this; }

struct C_007a8850 { int sub_007a8850(void); };

// @baa 0x007a8850
int C_007a8850::sub_007a8850(void) { return *(int*)((char*)this + 0); }

struct C_007a8aa0 { C_007a8aa0* sub_007a8aa0(int a0); };

// @baa 0x007a8aa0
C_007a8aa0* C_007a8aa0::sub_007a8aa0(int a0) { return this; }

struct C_007a8ab0 { int sub_007a8ab0(void); };

// @baa 0x007a8ab0
int C_007a8ab0::sub_007a8ab0(void) { return *(int*)((char*)this + 0); }

struct C_007a8bf0 { int sub_007a8bf0(void); };

// @baa 0x007a8bf0
int C_007a8bf0::sub_007a8bf0(void) { return *(int*)((char*)this + 0); }

struct C_007a8c00 { C_007a8c00* sub_007a8c00(int a0); };

// @baa 0x007a8c00
C_007a8c00* C_007a8c00::sub_007a8c00(int a0) { return this; }

struct C_007a8c10 { int sub_007a8c10(void); };

// @baa 0x007a8c10
int C_007a8c10::sub_007a8c10(void) { return *(int*)((char*)this + 0); }

struct C_007a8c90 {
    int sub_007a8c90(int);
};

// @baa 0x007a8c90
int C_007a8c90::sub_007a8c90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_007a8ca0 { int sub_007a8ca0(void); };

// @baa 0x007a8ca0
int C_007a8ca0::sub_007a8ca0(void) { return *(int*)((char*)this + 0); }

struct C_007a8cb0 {
    int sub_007a8cb0(int);
};

// @baa 0x007a8cb0
int C_007a8cb0::sub_007a8cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_007a8cc0 { int sub_007a8cc0(void); };

// @baa 0x007a8cc0
int C_007a8cc0::sub_007a8cc0(void) { return *(int*)((char*)this + 0); }

struct C_007a8d40 {
    int sub_007a8d40(int);
};

// @baa 0x007a8d40
int C_007a8d40::sub_007a8d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_007a8d50 { int sub_007a8d50(void); };

// @baa 0x007a8d50
int C_007a8d50::sub_007a8d50(void) { return *(int*)((char*)this + 0); }

struct C_007a8de0 { int sub_007a8de0(void); };

// @baa 0x007a8de0
int C_007a8de0::sub_007a8de0(void) { return *(int*)((char*)this + 4); }

struct C_007a8df0 { int sub_007a8df0(void); };

// @baa 0x007a8df0
int C_007a8df0::sub_007a8df0(void) { return *(int*)((char*)this + 0); }

struct C_007a8e70 { int sub_007a8e70(void); };

// @baa 0x007a8e70
int C_007a8e70::sub_007a8e70(void) { return *(int*)((char*)this + 0); }

struct C_007a8e80 { int sub_007a8e80(void); };

// @baa 0x007a8e80
int C_007a8e80::sub_007a8e80(void) { return *(int*)((char*)this + 0); }

// @baa 0x007a9000
int sub_007a9000(int a0) { return a0; }

struct C_007a9010 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_007a9010* sub_007a9010(INT value);
};

// @baa 0x007a9010
C_007a9010* C_007a9010::sub_007a9010(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_007a9030 { int sub_007a9030(void); };

// @baa 0x007a9030
int C_007a9030::sub_007a9030(void) { return *(int*)((char*)this + 0); }

struct C_007a9080 { C_007a9080* sub_007a9080(int a0); };

// @baa 0x007a9080
C_007a9080* C_007a9080::sub_007a9080(int a0) { return this; }

struct C_007a9090 { int sub_007a9090(void); };

// @baa 0x007a9090
int C_007a9090::sub_007a9090(void) { return *(int*)((char*)this + 0); }

struct C_007a9110 { C_007a9110* sub_007a9110(int a0); };

// @baa 0x007a9110
C_007a9110* C_007a9110::sub_007a9110(int a0) { return this; }

struct C_007a9120 { int sub_007a9120(void); };

// @baa 0x007a9120
int C_007a9120::sub_007a9120(void) { return *(int*)((char*)this + 0); }

struct C_007a9130 { int sub_007a9130(void); };

// @baa 0x007a9130
int C_007a9130::sub_007a9130(void) { return *(int*)((char*)this + 0); }

struct C_007a9140 { int sub_007a9140(void); };

// @baa 0x007a9140
int C_007a9140::sub_007a9140(void) { return *(int*)((char*)this + 0); }

struct C_007a9200 {
    int sub_007a9200(int);
};

// @baa 0x007a9200
int C_007a9200::sub_007a9200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xbc + *param_1;
}

struct C_007a9210 { C_007a9210* sub_007a9210(int a0); };

// @baa 0x007a9210
C_007a9210* C_007a9210::sub_007a9210(int a0) { return this; }

struct C_007a9220 { int sub_007a9220(void); };

// @baa 0x007a9220
int C_007a9220::sub_007a9220(void) { return *(int*)((char*)this + 0); }

struct C_007a9230 { int sub_007a9230(void); };

// @baa 0x007a9230
int C_007a9230::sub_007a9230(void) { return *(int*)((char*)this + 0); }

struct C_007a92b0 {
    int sub_007a92b0(int);
};

// @baa 0x007a92b0
int C_007a92b0::sub_007a92b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007a92c0 { int sub_007a92c0(void); };

// @baa 0x007a92c0
int C_007a92c0::sub_007a92c0(void) { return *(int*)((char*)this + 0); }

struct C_007a9340 { C_007a9340* sub_007a9340(int a0); };

// @baa 0x007a9340
C_007a9340* C_007a9340::sub_007a9340(int a0) { return this; }

struct C_007a9350 { int sub_007a9350(void); };

// @baa 0x007a9350
int C_007a9350::sub_007a9350(void) { return *(int*)((char*)this + 0); }

struct C_007a9360 { int sub_007a9360(void); };

// @baa 0x007a9360
int C_007a9360::sub_007a9360(void) { return *(int*)((char*)this + 0); }

struct C_007a93e0 {
    int sub_007a93e0(int);
};

// @baa 0x007a93e0
int C_007a93e0::sub_007a93e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007a93f0 { C_007a93f0* sub_007a93f0(int a0); };

// @baa 0x007a93f0
C_007a93f0* C_007a93f0::sub_007a93f0(int a0) { return this; }

struct C_007a9400 { int sub_007a9400(void); };

// @baa 0x007a9400
int C_007a9400::sub_007a9400(void) { return *(int*)((char*)this + 0); }

struct C_007a9410 { C_007a9410* sub_007a9410(int a0); };

// @baa 0x007a9410
C_007a9410* C_007a9410::sub_007a9410(int a0) { return this; }

struct C_007a9420 { int sub_007a9420(void); };

// @baa 0x007a9420
int C_007a9420::sub_007a9420(void) { return *(int*)((char*)this + 0); }

struct C_007a94a0 { int sub_007a94a0(void); };

// @baa 0x007a94a0
int C_007a94a0::sub_007a94a0(void) { return *(int*)((char*)this + 0); }

struct C_007a94b0 { int sub_007a94b0(void); };

// @baa 0x007a94b0
int C_007a94b0::sub_007a94b0(void) { return *(int*)((char*)this + 0); }

struct C_007a94c0 { int sub_007a94c0(void); };

// @baa 0x007a94c0
int C_007a94c0::sub_007a94c0(void) { return *(int*)((char*)this + 0); }

struct C_007a9550 {
    int sub_007a9550(int);
};

// @baa 0x007a9550
int C_007a9550::sub_007a9550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x240 + *param_1;
}

struct C_007a9560 { int sub_007a9560(void); };

// @baa 0x007a9560
int C_007a9560::sub_007a9560(void) { return *(int*)((char*)this + 0); }

struct C_007a9570 { int sub_007a9570(void); };

// @baa 0x007a9570
int C_007a9570::sub_007a9570(void) { return *(int*)((char*)this + 0); }

struct C_007a95f0 {
    int sub_007a95f0(int);
};

// @baa 0x007a95f0
int C_007a95f0::sub_007a95f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007a9600 { int sub_007a9600(void); };

// @baa 0x007a9600
int C_007a9600::sub_007a9600(void) { return *(int*)((char*)this + 0); }

struct C_007a9610 { int sub_007a9610(void); };

// @baa 0x007a9610
int C_007a9610::sub_007a9610(void) { return *(int*)((char*)this + 0); }

struct C_007a9690 { int sub_007a9690(void); };

// @baa 0x007a9690
int C_007a9690::sub_007a9690(void) { return *(int*)((char*)this + 0); }

struct C_007a96a0 { int sub_007a96a0(void); };

// @baa 0x007a96a0
int C_007a96a0::sub_007a96a0(void) { return *(int*)((char*)this + 0); }

struct C_007a9720 {
    int sub_007a9720(int);
};

// @baa 0x007a9720
int C_007a9720::sub_007a9720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007a9730 { int sub_007a9730(void); };

// @baa 0x007a9730
int C_007a9730::sub_007a9730(void) { return *(int*)((char*)this + 0); }

struct C_007a9740 { int sub_007a9740(void); };

// @baa 0x007a9740
int C_007a9740::sub_007a9740(void) { return *(int*)((char*)this + 4); }

// @baa 0x007a9770
void __stdcall sub_007a9770(int a0, int a1) {  }

struct C_007a9780 { int sub_007a9780(void); };

// @baa 0x007a9780
int C_007a9780::sub_007a9780(void) { return *(int*)((char*)this + 0); }

struct C_007a9800 {
    undefined4 sub_007a9800(int);
};

// @baa 0x007a9800
undefined4 C_007a9800::sub_007a9800(int param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 <= *(float *)(param_2 + 0x20)) && (*(float *)(param_2 + 0x20) <= param_1[3])) &&
      (param_1[1] <= *(float *)(param_2 + 0x24))) &&
     (((*(float *)(param_2 + 0x24) <= param_1[4] && (param_1[2] <= *(float *)(param_2 + 0x28))) &&
      (*(float *)(param_2 + 0x28) <= param_1[5])))) {
    return 1;
  }
  return 0;
}

struct C_007a9850 { int sub_007a9850(void); };

// @baa 0x007a9850
int C_007a9850::sub_007a9850(void) { return *(int*)((char*)this + 0); }

struct C_007a9860 { int sub_007a9860(void); };

// @baa 0x007a9860
int C_007a9860::sub_007a9860(void) { return *(int*)((char*)this + 4); }

struct T_007a9870 { int x; };

// @baa 0x007a9870
template T_007a9870& TIndirectArray<T_007a9870>::operator()(INT);

struct C_007a98e0 { int sub_007a98e0(void); };

// @baa 0x007a98e0
int C_007a98e0::sub_007a98e0(void) { return *(int*)((char*)this + 0); }

struct C_007a9960 {
    undefined4 sub_007a9960(byte);
};

// @baa 0x007a9960
undefined4 C_007a9960::sub_007a9960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007a9990 { int sub_007a9990(void); };

// @baa 0x007a9990
int C_007a9990::sub_007a9990(void) { return *(int*)((char*)this + 0); }

struct C_007a99a0 { int sub_007a99a0(void); };

// @baa 0x007a99a0
int C_007a99a0::sub_007a99a0(void) { return *(int*)((char*)this + 0); }

struct C_007a99b0 { int sub_007a99b0(void); };

// @baa 0x007a99b0
int C_007a99b0::sub_007a99b0(void) { return *(int*)((char*)this + 0); }

struct C_007a99c0 { int sub_007a99c0(void); };

// @baa 0x007a99c0
int C_007a99c0::sub_007a99c0(void) { return *(int*)((char*)this + 0); }

struct C_007a99d0 { int sub_007a99d0(void); };

// @baa 0x007a99d0
int C_007a99d0::sub_007a99d0(void) { return *(int*)((char*)this + 0); }

struct C_007a99e0 { int sub_007a99e0(void); };

// @baa 0x007a99e0
int C_007a99e0::sub_007a99e0(void) { return *(int*)((char*)this + 0); }

struct C_007a99f0 { int sub_007a99f0(void); };

// @baa 0x007a99f0
int C_007a99f0::sub_007a99f0(void) { return *(int*)((char*)this + 0); }

struct C_007a9a00 { int sub_007a9a00(void); };

// @baa 0x007a9a00
int C_007a9a00::sub_007a9a00(void) { return *(int*)((char*)this + 0); }

struct C_007a9a10 { int sub_007a9a10(void); };

// @baa 0x007a9a10
int C_007a9a10::sub_007a9a10(void) { return *(int*)((char*)this + 0); }

struct C_007a9a20 { int sub_007a9a20(void); };

// @baa 0x007a9a20
int C_007a9a20::sub_007a9a20(void) { return *(int*)((char*)this + 0); }

struct C_007a9a30 { int sub_007a9a30(void); };

// @baa 0x007a9a30
int C_007a9a30::sub_007a9a30(void) { return *(int*)((char*)this + 0); }

struct C_007a9a40 { int sub_007a9a40(void); };

// @baa 0x007a9a40
int C_007a9a40::sub_007a9a40(void) { return *(int*)((char*)this + 0); }

// @baa 0x007a9a50
bool sub_007a9a50(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x007a9a60
int sub_007a9a60(int a0) { return a0; }

struct C_007a9a70 { int sub_007a9a70(void); };

// @baa 0x007a9a70
int C_007a9a70::sub_007a9a70(void) { return *(int*)((char*)this + 0); }

struct C_007a9a80 { int sub_007a9a80(void); };

// @baa 0x007a9a80
int C_007a9a80::sub_007a9a80(void) { return *(int*)((char*)this + 0); }

struct C_007a9a90 { int sub_007a9a90(void); };

// @baa 0x007a9a90
int C_007a9a90::sub_007a9a90(void) { return *(int*)((char*)this + 0); }

struct C_007a9aa0 { int sub_007a9aa0(void); };

// @baa 0x007a9aa0
int C_007a9aa0::sub_007a9aa0(void) { return *(int*)((char*)this + 0); }

struct C_007a9ab0 { int sub_007a9ab0(void); };

// @baa 0x007a9ab0
int C_007a9ab0::sub_007a9ab0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007a9ac0(INT Index);
};

// @baa 0x007a9ac0
DWORD* S::sub_007a9ac0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_007a9b10 {
    TArray<E> Items; // 0x00
    E* sub_007a9b10(INT Index);
};

// @baa 0x007a9b10
E* S_007a9b10::sub_007a9b10(INT Index)
{
    return &Items(Index);
}

struct C_007a9b60 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_007a9b60(INT Index);
};

// @baa 0x007a9b60
UBOOL C_007a9b60::sub_007a9b60(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_007a9b80 { int sub_007a9b80(void); };

// @baa 0x007a9b80
int C_007a9b80::sub_007a9b80(void) { return *(int*)((char*)this + 0); }

struct C_007a9b90 { int sub_007a9b90(void); };

// @baa 0x007a9b90
int C_007a9b90::sub_007a9b90(void) { return *(int*)((char*)this + 0); }

struct C_007a9ba0 { int sub_007a9ba0(void); };

// @baa 0x007a9ba0
int C_007a9ba0::sub_007a9ba0(void) { return *(int*)((char*)this + 0); }

struct C_007a9bb0 { int sub_007a9bb0(void); };

// @baa 0x007a9bb0
int C_007a9bb0::sub_007a9bb0(void) { return *(int*)((char*)this + 0); }

struct C_007a9bc0 {
    int sub_007a9bc0(int);
};

// @baa 0x007a9bc0
int C_007a9bc0::sub_007a9bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_007a9be0 { int sub_007a9be0(void); };

// @baa 0x007a9be0
int C_007a9be0::sub_007a9be0(void) { return *(int*)((char*)this + 0); }

struct C_007a9bf0 { int sub_007a9bf0(void); };

// @baa 0x007a9bf0
int C_007a9bf0::sub_007a9bf0(void) { return *(int*)((char*)this + 0); }

struct C_007a9c00 {
    int sub_007a9c00(int);
};

// @baa 0x007a9c00
int C_007a9c00::sub_007a9c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007a9c10 {
    int sub_007a9c10(int);
};

// @baa 0x007a9c10
int C_007a9c10::sub_007a9c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_007a9c20 {
    int sub_007a9c20();
};

// @baa 0x007a9c20
int C_007a9c20::sub_007a9c20(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    return 0;
  }
  return param_1[2] - *param_1 >> 2;
}

struct C_007aa1c0 { int sub_007aa1c0(void); };

// @baa 0x007aa1c0
int C_007aa1c0::sub_007aa1c0(void) { return *(int*)((char*)this + 20); }

struct C_007aa1d0 { int sub_007aa1d0(void); };

// @baa 0x007aa1d0
int C_007aa1d0::sub_007aa1d0(void) { return *(int*)((char*)this + 0); }

struct C_007aa1e0 { int sub_007aa1e0(void); };

// @baa 0x007aa1e0
int C_007aa1e0::sub_007aa1e0(void) { return *(int*)((char*)this + 0); }

struct C_007aa1f0 { int sub_007aa1f0(void); };

// @baa 0x007aa1f0
int C_007aa1f0::sub_007aa1f0(void) { return *(int*)((char*)this + 20); }

void sub_00572b30();
// @baa 0x007aa440
void sub_007aa440(void) { sub_00572b30(); }

// @baa 0x007aacc0
void sub_007aacc0(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

struct S_007aad40 {
    TArray<E> Items; // 0x00
    const E* sub_007aad40(INT Index) const;
};

// @baa 0x007aad40
const E* S_007aad40::sub_007aad40(INT Index) const
{
    return &Items(Index);
}

struct E_007aad90 { BYTE Bytes[16]; };

struct S_007aad90 {
    TArray<E_007aad90> Items; // 0x00
    const E_007aad90* sub_007aad90(INT Index) const;
};

// @baa 0x007aad90
const E_007aad90* S_007aad90::sub_007aad90(INT Index) const
{
    return &Items(Index);
}

struct E_007aade0 { BYTE Bytes[48]; };

struct S_007aade0 {
    TArray<E_007aade0> Items; // 0x00
    const E_007aade0* sub_007aade0(INT Index) const;
};

// @baa 0x007aade0
const E_007aade0* S_007aade0::sub_007aade0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x007aae80
void sub_007aae80(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)
{
  *param_5 = ((*param_3 - *param_2) + (*param_2 - *param_1)) * (1.0 - *param_4);
  return;
}

// @baa 0x007ab130
void sub_007ab130(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x007ab170
void sub_007ab170(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct S_007ab1b0 {
    float x;
    float y;
    double sub_007ab1b0();
};

// @baa 0x007ab1b0
double S_007ab1b0::sub_007ab1b0() {
    float f;
    if (x >= y)
        f = x;
    else
        f = y;
    return f;
}

void sub_00656790();
// @baa 0x007ab300
void sub_007ab300(void) { sub_00656790(); }

// @baa 0x007ab700
IMPLEMENT_CLASS_AT(UDistributionFloatParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 12);

// @baa 0x007ab770
int UDistributionFloatParameterBase::vf_124(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x007ab780
UINT UDistributionFloatParameterBase::vf_120() { return 0; }

// @baa 0x007ab790
// @baa 0x007ab7d0
IMPLEMENT_CLASS_AT(UDistributionFloatUniform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 10);

// @baa 0x007ab840

// The spec object: virtual method at vtable offset 0x118 (slot 70),
// taking the controller that owns it as its single argument.
struct FMoveSpec_
{
    virtual void vf_000();
    virtual void vf_004();
    virtual void vf_008();
    virtual void vf_00c();
    virtual void vf_010();
    virtual void vf_014();
    virtual void vf_018();
    virtual void vf_01c();
    virtual void vf_020();
    virtual void vf_024();
    virtual void vf_028();
    virtual void vf_02c();
    virtual void vf_030();
    virtual void vf_034();
    virtual void vf_038();
    virtual void vf_03c();
    virtual void vf_040();
    virtual void vf_044();
    virtual void vf_048();
    virtual void vf_04c();
    virtual void vf_050();
    virtual void vf_054();
    virtual void vf_058();
    virtual void vf_05c();
    virtual void vf_060();
    virtual void vf_064();
    virtual void vf_068();
    virtual void vf_06c();
    virtual void vf_070();
    virtual void vf_074();
    virtual void vf_078();
    virtual void vf_07c();
    virtual void vf_080();
    virtual void vf_084();
    virtual void vf_088();
    virtual void vf_08c();
    virtual void vf_090();
    virtual void vf_094();
    virtual void vf_098();
    virtual void vf_09c();
    virtual void vf_0a0();
    virtual void vf_0a4();
    virtual void vf_0a8();
    virtual void vf_0ac();
    virtual void vf_0b0();
    virtual void vf_0b4();
    virtual void vf_0b8();
    virtual void vf_0bc();
    virtual void vf_0c0();
    virtual void vf_0c4();
    virtual void vf_0c8();
    virtual void vf_0cc();
    virtual void vf_0d0();
    virtual void vf_0d4();
    virtual void vf_0d8();
    virtual void vf_0dc();
    virtual void vf_0e0();
    virtual void vf_0e4();
    virtual void vf_0e8();
    virtual void vf_0ec();
    virtual void vf_0f0();
    virtual void vf_0f4();
    virtual void vf_0f8();
    virtual void vf_0fc();
    virtual void vf_100();
    virtual void vf_104();
    virtual void vf_108();
    virtual void vf_10c();
    virtual void vf_110();
    virtual void vf_114();
    virtual void vf_118(AController *Controller);
};

struct AController_ : public AController
{
    // slot 0x394: let the spec prepare itself for the move on this controller, and hand it back.
    INT sub_007a0de0(INT Arg1, FMoveSpec_ *Spec)
    {
        Spec->vf_118(this);
        return (INT)Spec;
    }
};

// @baa 0x007a0de0
void use_it(AController_ *C, INT A, FMoveSpec_ *S)
{
    C->sub_007a0de0(A, S);
}

// @baa 0x007a2030
BYTE APlayerReplicationInfo::GetTeamNum()
{
    return Team ? Team->TeamIndex : 255;
}

// @baa 0x007a1ff0
/* The team of this controller's player, or 255 when it has none. */
BYTE AController::GetTeamNum()
{
    return (PlayerReplicationInfo && PlayerReplicationInfo->Team) ? PlayerReplicationInfo->Team->TeamIndex : 255;
}

// @baa 0x007afdc0
/* Two actors are on the same team only in team games, and only when both have a team. */
UBOOL AGameReplicationInfo::OnSameTeam(AActor* A, AActor* B)
{
    if (!A || !B)
    {
        return FALSE;
    }
    if (GameClass)
    {
        AGameInfo* DefaultGame = (AGameInfo*)GameClass->GetDefaultObject();
        if (DefaultGame && !DefaultGame->bTeamGame)
        {
            return FALSE;
        }
    }
    const BYTE ATeamIndex = A->GetTeamNum();
    if (ATeamIndex == 255)
    {
        return FALSE;
    }
    const BYTE BTeamIndex = B->GetTeamNum();
    if (BTeamIndex == 255)
    {
        return FALSE;
    }
    return ATeamIndex == BTeamIndex;
}

// @baa 0x007a0650
/* AController slot 0x3d4 (kit vf_3d4): fails the current move (UE3 does this inline as MoveTimer = -1.f, e.g. in
 * StopAtLedge, which this build routes through the slot). */
void AController::vf_3d4()
{
    MoveTimer = -1.f;
}

// @baa 0x007a0610
/* AController slot 0x3ac (kit vf_3ac, UE3 StopAtLedge()): stop at a ledge unless the pawn can jump down it. */
INT AController::vf_3ac()
{
    if (!Pawn || !Pawn->bCanJump || Pawn->bStopAtLedges)
    {
        vf_3d4();
        return TRUE;
    }
    return FALSE;
}

// @baa 0x007a0710
/* UE3's AController::CanSee(APawn* Other) (execCanSee's native): SeePawn without skipping checks. */
UBOOL AController::sub_007a0710(APawn* Other)
{
    return SeePawn(Other, FALSE);
}

/* Unnamed in the kit: UE3's INT APawn::pointReachable(FVector aPoint, INT bKnowVisible = 0). */
struct APawn_ : public APawn
{
    INT sub_00873000(FVector aPoint, INT bKnowVisible);
};

// @baa 0x007a08d0
/* UE3's AController::PointReachable(FVector aPoint) (execPointReachable's native). */
UBOOL AController::sub_007a08d0(FVector aPoint)
{
    if (!Pawn)
    {
        return FALSE;
    }
    return ((APawn_*)Pawn)->sub_00873000(aPoint, 0);
}

/* Unnamed in the kit: UE3's void FBasedPosition::Set(AActor* InBase, const FVector& InPosition). */
struct FBasedPosition_ : public FBasedPosition
{
    void sub_007ab4e0(AActor* InBase, const FVector& InPosition);
};

/* Unnamed in the kit: UE3's AController::SetFocalPoint(FVector FP, UBOOL bOffsetFromBase). */
struct AController__007ad790 : public AController
{
    void sub_007ad790(FVector FP, UBOOL bOffsetFromBase);
};

// @baa 0x007ad790
void AController__007ad790::sub_007ad790(FVector FP, UBOOL bOffsetFromBase)
{
    ((FBasedPosition_&)FocalPosition).sub_007ab4e0((bOffsetFromBase && Pawn) ? Pawn->Base : NULL, FP);
}

/* Unnamed in the kit: UE3's AController::SetDestinationPosition(FVector Dest, UBOOL bOffsetFromBase). */
struct AController__007ad9c0 : public AController
{
    void sub_007ad9c0(FVector Dest, UBOOL bOffsetFromBase);
};

// @baa 0x007ad9c0
void AController__007ad9c0::sub_007ad9c0(FVector Dest, UBOOL bOffsetFromBase)
{
    ((FBasedPosition_&)DestinationPosition).sub_007ab4e0((bOffsetFromBase && Pawn) ? Pawn->Base : NULL, Dest);
}

/* Unnamed in the kit: UE3's AController::SetBasedPosition(FBasedPosition& BP, FVector Pos, AActor* ForcedBase):
 * base the position on ForcedBase, else on the pawn's base. */
struct AController__007ad5d0 : public AController
{
    void sub_007ad5d0(FBasedPosition& BP, FVector Pos, AActor* ForcedBase);
};

// @baa 0x007ad5d0
void AController__007ad5d0::sub_007ad5d0(FBasedPosition& BP, FVector Pos, AActor* ForcedBase)
{
    if (!ForcedBase)
    {
        ForcedBase = Pawn ? Pawn->Base : NULL;
    }
    ((FBasedPosition_&)BP).sub_007ab4e0(ForcedBase, Pos);
}

/* UnPlayerController.cpp's file-local BlendRot (007afc20); not in Classes.h. */
INT BlendRot(FLOAT DeltaTime, INT BlendC, INT NewC);
// @baa 0x007afcb0
void APlayerController::SmoothTargetViewRotation(APawn* TargetPawn, FLOAT DeltaSeconds)
{
	if (TargetPawn->bSimulateGravity)
	{
		TargetViewRotation.Roll = 0;
	}
	BlendedTargetViewRotation.Pitch = BlendRot(DeltaSeconds, BlendedTargetViewRotation.Pitch, TargetViewRotation.Pitch & 65535);
	BlendedTargetViewRotation.Yaw = BlendRot(DeltaSeconds, BlendedTargetViewRotation.Yaw, TargetViewRotation.Yaw & 65535);
	BlendedTargetViewRotation.Roll = BlendRot(DeltaSeconds, BlendedTargetViewRotation.Roll, TargetViewRotation.Roll & 65535);
}

/* Kit gaps: FRotationMatrix (constructor out of line, 004029a0), FMatrix::TransformFVector/TransformFVector4
 * (UnMath.h), FVector's operator+ and operator!=, and FRotator's operator!= aren't declared. */

struct FMatrix_ : public FMatrix
{
	FORCEINLINE FVector4 TransformFVector4(const FVector4& P) const
	{
		FVector4 Result;
		Result.X = P.X * XPlane.X + P.Y * YPlane.X + P.Z * ZPlane.X + P.W * WPlane.X;
		Result.Y = P.X * XPlane.Y + P.Y * YPlane.Y + P.Z * ZPlane.Y + P.W * WPlane.Y;
		Result.Z = P.X * XPlane.Z + P.Y * YPlane.Z + P.Z * ZPlane.Z + P.W * WPlane.Z;
		Result.W = P.X * XPlane.W + P.Y * YPlane.W + P.Z * ZPlane.W + P.W * WPlane.W;
		return Result;
	}
	FORCEINLINE FVector4 TransformFVector(const FVector& V) const
	{
		return TransformFVector4(FVector4(V.X, V.Y, V.Z, 1.0f));
	}
};

static FORCEINLINE FVector AddVectors(const FVector& A, const FVector4& B)
{
	return FVector(A.X + B.X, A.Y + B.Y, A.Z + B.Z);
}

static FORCEINLINE UBOOL VectorsDiffer(const FVector& A, const FVector& B)
{
	return A.X != B.X || A.Y != B.Y || A.Z != B.Z;
}

static FORCEINLINE UBOOL RotatorsDiffer(const FRotator& A, const FRotator& B)
{
	return A.Pitch != B.Pitch || A.Yaw != B.Yaw || A.Roll != B.Roll;
}

struct AController__007ad610 : public AController
{
	FVector GetBasedPosition(FBasedPosition BP); /* 0x007ad610 */
};

// @baa 0x007ad610
/* The world position of a based position: Position in its base's frame (cached while the base hasn't moved), or
 * Position itself when there's no base. Same body as APawn::GetBasedPosition. */
FVector AController__007ad610::GetBasedPosition(FBasedPosition BP)
{
	if (BP.Base != NULL)
	{
		if (VectorsDiffer(BP.CachedBaseLocation, BP.Base->Location) || RotatorsDiffer(BP.CachedBaseRotation, BP.Base->Rotation))
		{
			BP.CachedBaseLocation = BP.Base->Location;
			BP.CachedBaseRotation = BP.Base->Rotation;
			BP.CachedTransPosition = AddVectors(BP.Base->Location, ((const FMatrix_&)FRotationMatrix(BP.Base->Rotation)).TransformFVector(BP.Position));
		}
		return BP.CachedTransPosition;
	}
	return BP.Position;
}

struct FBasedPosition__007ad7e0 : public FBasedPosition
{
	/* FBasedPosition::operator* (out of line at 0x007ab350), inlined here. */
	FORCEINLINE FVector operator*()
	{
		AActor* const BaseActor = Base;
		if (BaseActor != NULL)
		{
			if (VectorsDiffer(CachedBaseLocation, BaseActor->Location) || RotatorsDiffer(CachedBaseRotation, BaseActor->Rotation))
			{
				CachedBaseLocation = BaseActor->Location;
				CachedBaseRotation = BaseActor->Rotation;
				CachedTransPosition = AddVectors(BaseActor->Location, ((const FMatrix_&)FRotationMatrix(BaseActor->Rotation)).TransformFVector(Position));
			}
			return CachedTransPosition;
		}
		return Position;
	}
};

struct AController__007ad7e0 : public AController
{
	FVector GetFocalPoint(); /* 0x007ad7e0 */
};

// @baa 0x007ad7e0
/* UnController.cpp: the world location the controller is looking at. */
FVector AController__007ad7e0::GetFocalPoint()
{
	return *(FBasedPosition__007ad7e0&)FocalPosition;
}

struct FBasedPosition__007ada10 : public FBasedPosition
{
	/* FBasedPosition::operator* (out of line at 0x007ab350), inlined here. */
	FORCEINLINE FVector operator*()
	{
		AActor* const BaseActor = Base;
		if (BaseActor != NULL)
		{
			if (VectorsDiffer(CachedBaseLocation, BaseActor->Location) || RotatorsDiffer(CachedBaseRotation, BaseActor->Rotation))
			{
				CachedBaseLocation = BaseActor->Location;
				CachedBaseRotation = BaseActor->Rotation;
				CachedTransPosition = AddVectors(BaseActor->Location, ((const FMatrix_&)FRotationMatrix(BaseActor->Rotation)).TransformFVector(Position));
			}
			return CachedTransPosition;
		}
		return Position;
	}
};

struct AController__007ada10 : public AController
{
	FVector GetDestinationPosition(); /* 0x007ada10 */
};

// @baa 0x007ada10
/* UnController.cpp: the world location the controller is moving to. */
FVector AController__007ada10::GetDestinationPosition()
{
	return *(FBasedPosition__007ada10&)DestinationPosition;
}

struct FBasedPosition__007adc50 : public FBasedPosition
{
	/* FBasedPosition::operator* (out of line at 0x007ab350), inlined here. */
	FORCEINLINE FVector operator*()
	{
		AActor* const BaseActor = Base;
		if (BaseActor != NULL)
		{
			if (VectorsDiffer(CachedBaseLocation, BaseActor->Location) || RotatorsDiffer(CachedBaseRotation, BaseActor->Rotation))
			{
				CachedBaseLocation = BaseActor->Location;
				CachedBaseRotation = BaseActor->Rotation;
				CachedTransPosition = AddVectors(BaseActor->Location, ((const FMatrix_&)FRotationMatrix(BaseActor->Rotation)).TransformFVector(Position));
			}
			return CachedTransPosition;
		}
		return Position;
	}
};

struct AController__007adc50 : public AController
{
	FVector GetAdjustLocation(); /* 0x007adc50 */
};

// @baa 0x007adc50
/* UnController.cpp: the adjusted world location the controller is moving to. */
FVector AController__007adc50::GetAdjustLocation()
{
	return *(FBasedPosition__007adc50&)AdjustPosition;
}

// @baa 0x007a1f60
/* ModifyPostProcessSettings: lets the camera adjust the post-process settings. */
void APlayerController::vf_460(INT PPSettings)
{
	if (PlayerCamera)
	{
		PlayerCamera->vf_360(*(FPostProcessSettings*)PPSettings);
	}
}

// @baa 0x007afa70
/* The offset from the pawn to where the AI is heading. */
FVector AAIController::vf_3d0()
{
	return GetDestinationPosition() - Pawn->Location;
}
