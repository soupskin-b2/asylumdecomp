// GFxUI_0e40000.cpp: 233 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00e41a20();
};

// @baa 0x00e41a20
undefined4 C::sub_00e41a20(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x00e41cc0
int sub_00e41cc0(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x00e41cd0
int sub_00e41cd0(void) { return (int)g_01ebc268; }

struct C_00e41ce0 { C_00e41ce0* sub_00e41ce0(void); };

// @baa 0x00e41ce0
C_00e41ce0* C_00e41ce0::sub_00e41ce0(void) { return this; }

// @baa 0x00e41cf0
int sub_00e41cf0(int a0, int a1) { return a1; }

// @baa 0x00e41d00
int sub_00e41d00(int a0, int a1) { return a1; }

// @baa 0x00e41d10
IMPLEMENT_CLASS_AT(UGFxFSCmdHandler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIMovie.cpp", 41);

extern char g_02106244[];
struct C_00e432c0 { void sub_00e432c0(void); };

// @baa 0x00e432c0
void C_00e432c0::sub_00e432c0(void) { *(int*)((char*)this + 0) = (int)g_02106244; }

struct C_00e432d0 {
    undefined4 * sub_00e432d0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e432d0
undefined4 * C_00e432d0::sub_00e432d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02106244);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e432f0 { int sub_00e432f0(void); };

// @baa 0x00e432f0
int C_00e432f0::sub_00e432f0(void) { return *(int*)((char*)this + 188); }

struct C_00e43300 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00e43300* sub_00e43300(INT value);
};

// @baa 0x00e43300
C_00e43300* C_00e43300::sub_00e43300(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_00e43320 { int a, b; C_00e43320(int, int); };

// @baa 0x00e43320
C_00e43320::C_00e43320(int x, int y) : a(x), b(y) {}

struct C_00e43340 {
    void *field0;
    void *field4;
    C_00e43340 *sub_00e43340();
};

// @baa 0x00e43340
C_00e43340 *C_00e43340::sub_00e43340()
{
    field0 = this;
    field4 = this;
    return this;
}

struct C_00e43350 {
    void sub_00e43350();
};

// @baa 0x00e43350
void C_00e43350::sub_00e43350(void)
{
    int * param_1 = (int *)this;

  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_00e43370 { int sub_00e43370(void); };

// @baa 0x00e43370
int C_00e43370::sub_00e43370(void) { return *(int*)((char*)this + 24); }

struct C_00e43380 { int sub_00e43380(void); };

// @baa 0x00e43380
int C_00e43380::sub_00e43380(void) { return *(int*)((char*)this + 28); }

struct C_00e43390 {
    undefined4 sub_00e43390();
};

// @baa 0x00e43390
undefined4 C_00e43390::sub_00e43390(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xac);
  }
  return 0;
}

struct C_00e433d0 { char* sub_00e433d0(void); };

// @baa 0x00e433d0
char* C_00e433d0::sub_00e433d0(void) { return (char*)this + 160; }

struct C_00e433e0 {
    bool sub_00e433e0();
};

// @baa 0x00e433e0
bool C_00e433e0::sub_00e433e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_00e433f0 { char* sub_00e433f0(void); };

// @baa 0x00e433f0
char* C_00e433f0::sub_00e433f0(void) { return (char*)this + 324; }

struct C_00e43400 { char* sub_00e43400(void); };

// @baa 0x00e43400
char* C_00e43400::sub_00e43400(void) { return (char*)this + 336; }

extern char g_023f4ef8[];
struct C_00e43410 { C_00e43410* sub_00e43410(void); };

// @baa 0x00e43410
C_00e43410* C_00e43410::sub_00e43410(void) { *(int*)((char*)this + 0) = (int)g_023f4ef8; return this; }

extern char g_023f4d60[];
struct C_00e43440 { void sub_00e43440(void); };

// @baa 0x00e43440
void C_00e43440::sub_00e43440(void) { *(int*)((char*)this + 0) = (int)g_023f4d60; }

struct C_00e43450 { C_00e43450* sub_00e43450(void); };

// @baa 0x00e43450
C_00e43450* C_00e43450::sub_00e43450(void) { *(int*)((char*)this + 0) = (int)g_023f4d60; return this; }

struct C_00e43650 { C_00e43650* sub_00e43650(void); };

// @baa 0x00e43650
C_00e43650* C_00e43650::sub_00e43650(void) { *(int*)((char*)this + 0) = (int)g_02106244; return this; }

extern int g_02106248;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00e43660(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e43660
FDecalValue* FDecalValue::sub_00e43660(int* Src)
{
    Value = (int)&g_02106248;
    Unk04 = *Src;
    return this;
}

extern char g_020f76dc[];
// @baa 0x00e43680
int sub_00e43680(void) { return (int)g_020f76dc; }

extern char g_01ebb554[];
struct C_00e43690 { void sub_00e43690(void); };

// @baa 0x00e43690
void C_00e43690::sub_00e43690(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e436a0 {
    undefined4 * sub_00e436a0(byte);
};

// @baa 0x00e436a0
undefined4 * C_00e436a0::sub_00e436a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02106254;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00e436c0
{
    FDecalValue_00e436c0* sub_00e436c0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e436c0
FDecalValue_00e436c0* FDecalValue_00e436c0::sub_00e436c0(int* Src)
{
    Value = (int)&g_02106254;
    Unk04 = *Src;
    return this;
}

extern char g_020f7b44[];
// @baa 0x00e436e0
int sub_00e436e0(void) { return (int)g_020f7b44; }

extern int g_02106260;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00e436f0
{
    FDecalValue_00e436f0* sub_00e436f0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e436f0
FDecalValue_00e436f0* FDecalValue_00e436f0::sub_00e436f0(int* Src)
{
    Value = (int)&g_02106260;
    Unk04 = *Src;
    return this;
}

extern char g_020f7bb4[];
// @baa 0x00e43710
int sub_00e43710(void) { return (int)g_020f7bb4; }

struct C_00e43720 { void sub_00e43720(void); };

// @baa 0x00e43720
void C_00e43720::sub_00e43720(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e43730 { void sub_00e43730(void); };

// @baa 0x00e43730
void C_00e43730::sub_00e43730(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e43740 {
    undefined4 * sub_00e43740(byte);
};

// @baa 0x00e43740
undefined4 * C_00e43740::sub_00e43740(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e43760 {
    undefined4 * sub_00e43760(byte);
};

// @baa 0x00e43760
undefined4 * C_00e43760::sub_00e43760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e43890 {
    void sub_00e43890();
};

int sub_018d3de0(void);
extern undefined * g_02106270;
// @baa 0x00e43890
void C_00e43890::sub_00e43890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02106270);
  sub_018d3de0();
  return;
}

struct C_00e438a0 { char* sub_00e438a0(void); };

// @baa 0x00e438a0
char* C_00e438a0::sub_00e438a0(void) { return (char*)this + 28; }

struct C_00e438b0 {
    char pad[16];
    DWORD field_10;
    char sub_00e438b0();
};

// @baa 0x00e438b0
char C_00e438b0::sub_00e438b0()
{
    return field_10 != 0;
}

struct C_00e438c0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void sub_00e438c0();
};

void C_00e438c0::v0() {}

void C_00e438c0::v1() {}

void C_00e438c0::v2() {}

// @baa 0x00e438c0
void C_00e438c0::sub_00e438c0()
{
    v2();
}

struct C_00e438d0 { int sub_00e438d0(void); };

// @baa 0x00e438d0
int C_00e438d0::sub_00e438d0(void) { return *(int*)((char*)this + 24); }

struct C_00e438e0 {
    char pad[0x18];
    INT f;
    SQWORD sub_00e438e0(void);
};

// @baa 0x00e438e0
SQWORD C_00e438e0::sub_00e438e0(void) { return f; }

struct C_00e438f0 { int sub_00e438f0(void); };

// @baa 0x00e438f0
int C_00e438f0::sub_00e438f0(void) { return *(int*)((char*)this + 20); }

struct C_00e43900 {
    char pad[0x14];
    INT field14;
    QWORD sub_00e43900();
};

// @baa 0x00e43900
QWORD C_00e43900::sub_00e43900() {
    return field14;
}

struct C_00e43910 { int sub_00e43910(void); };

// @baa 0x00e43910
int C_00e43910::sub_00e43910(void) { return *(int*)((char*)this + 92); }

struct C_00e439f0 { int sub_00e439f0(void); };

// @baa 0x00e439f0
int C_00e439f0::sub_00e439f0(void) { return *(int*)((char*)this + 20) - *(int*)((char*)this + 24); }

// @baa 0x00e43a00
undefined1 sub_00e43a00(void)
{
  return 1;
}

// @baa 0x00e43aa0
BYTE __stdcall sub_00e43aa0(DWORD a1)
{
  return 1;
}

// @baa 0x00e43ab0
int __stdcall sub_00e43ab0(int a0, int a1) { return 0; }

// @baa 0x00e43ac0
undefined1 sub_00e43ac0(void)
{
  return 1;
}

// @baa 0x00e43c00
bool UGFxGameViewportClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e43de0
int UGFxGameViewportClient::vf_144(void) { return 0; }

// @baa 0x00e43df0
void UGFxGameViewportClient::vf_148(int a0) {  }

// @baa 0x00e44a20
int UGFxEvent_FsCommand::vf_000(void) { return 1; }

// @baa 0x00e44a30
bool UGFxEvent_FsCommand::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44af0
void sub_00e44af0(void) {  }

extern undefined4 g_026caed4;
// @baa 0x00e44b00
INT UGFxInteraction::vf_124() {
  if (*(int *)(g_026caed4 + 0xbc) != 0) {
    return *(undefined4 *)(*(int *)(g_026caed4 + 0xbc) + 0x50);
  }
  return 0;
}

struct C_00e450d0 { int a, b, c; C_00e450d0(); };

// @baa 0x00e450d0
C_00e450d0::C_00e450d0() : a(0), b(0), c(0) {}

struct C_00e450e0 {
    undefined4 sub_00e450e0();
};

// @baa 0x00e450e0
undefined4 C_00e450e0::sub_00e450e0(void)
{
    int * param_1 = (int *)this;

  if (((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) {
    return 1;
  }
  return 0;
}

struct C_00e483b0 {
    void sub_00e483b0(undefined4 *);
};

// @baa 0x00e483b0
void C_00e483b0::sub_00e483b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = *(undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  param_1[2] = puVar1[1];
  return;
}

// @baa 0x00e483d0
void __stdcall sub_00e483d0(int a0) {  }

struct S {
    int Unk0; // 0x00
    BYTE sub_00e48430(S* Other);
};

// @baa 0x00e48430
BYTE S::sub_00e48430(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct A_00e48450 { virtual void sub_00e42600(); char pad[44]; };

struct B_00e48450 { virtual void sub_00e42600(); };

struct C_00e48450 : A_00e48450, B_00e48450 { virtual void sub_00e42600(); C_00e48450(); };

C_00e48450::C_00e48450() {}

// @baa 0x00e48450
void C_00e48450::sub_00e42600() {}

struct A_00e48460 { virtual void sub_00e42200(); char pad[92]; };

struct B_00e48460 { virtual void sub_00e42200(); };

struct C_00e48460 : A_00e48460, B_00e48460 { virtual void sub_00e42200(); C_00e48460(); };

C_00e48460::C_00e48460() {}

// @baa 0x00e48460
void C_00e48460::sub_00e42200() {}

struct C_00e48ab0 {
    undefined4 * sub_00e48ab0();
    int sub_00e48990(int);
};

extern undefined * g_021065e4;
// @baa 0x00e48ab0
undefined4 * C_00e48ab0::sub_00e48ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48ab0 *)(this))->sub_00e48990(8);
  *param_1 = (undefined4)(&g_021065e4);
  return param_1;
}

struct C_00e48ad0 {
    void sub_00e48ad0();
};

extern undefined * g_023f4f44;
// @baa 0x00e48ad0
void C_00e48ad0::sub_00e48ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48ae0 {
    undefined4 * sub_00e48ae0(undefined1);
    int sub_00e48990(int);
};

extern undefined4 g_023f4f4c;
// @baa 0x00e48ae0
undefined4 * C_00e48ae0::sub_00e48ae0(undefined1 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48ae0 *)(this))->sub_00e48990(0xc);
  *(undefined1 *)(param_1 + 5) = param_2;
  *param_1 = (undefined4)((&g_023f4f4c));
  return param_1;
}

struct C_00e48b00 {
    void sub_00e48b00();
};

// @baa 0x00e48b00
void C_00e48b00::sub_00e48b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48b10 {
    undefined4 * sub_00e48b10();
    int sub_00e48990(int);
};

extern undefined * g_021065ec;
// @baa 0x00e48b10
undefined4 * C_00e48b10::sub_00e48b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48b10 *)(this))->sub_00e48990(0x1d);
  *param_1 = (undefined4)(&g_021065ec);
  return param_1;
}

struct C_00e48b30 {
    void sub_00e48b30();
};

// @baa 0x00e48b30
void C_00e48b30::sub_00e48b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e48eb0 {
    undefined4 * sub_00e48eb0();
    int sub_00e48990(int);
};

extern undefined * g_0210669c;
// @baa 0x00e48eb0
undefined4 * C_00e48eb0::sub_00e48eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e48eb0 *)(this))->sub_00e48990(9);
  *param_1 = (undefined4)(&g_0210669c);
  return param_1;
}

struct C_00e48ed0 {
    void sub_00e48ed0();
};

// @baa 0x00e48ed0
void C_00e48ed0::sub_00e48ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_00e49050 { int sub_00e49050(void); };

// @baa 0x00e49050
int C_00e49050::sub_00e49050(void) { return *(int*)((char*)this + 56); }

struct C_00e498e0 {
    undefined4 * sub_00e498e0();
};

int sub_00e48fd0(void);
// @baa 0x00e498e0
undefined4 * C_00e498e0::sub_00e498e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e48fd0();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = (undefined4)(&g_02106270);
  return param_1;
}

struct C_00e49c30 {
    undefined4 * sub_00e49c30();
    int sub_00e48990(int);
};

extern undefined4 g_0210674c;
// @baa 0x00e49c30
undefined4 * C_00e49c30::sub_00e49c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e49c30 *)(this))->sub_00e48990(3);
  param_1[5] = 0;
  *param_1 = (undefined4)(&g_0210674c);
  return param_1;
}

struct C_00e49c50 {
    int sub_00e49c50(int);
};

// @baa 0x00e49c50
int C_00e49c50::sub_00e49c50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

// @baa 0x00e49c60
int sub_00e49c60(void) { return 4; }

struct C_00e49c70 {
    void sub_00e49c70();
};

// @baa 0x00e49c70
void C_00e49c70::sub_00e49c70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

void sub_00547220();
// @baa 0x00e4b630
void sub_00e4b630(void) { sub_00547220(); }

struct C_00e4b640 { void sub_00bfa4d0(int); void sub_00e4b640(); };

// @baa 0x00e4b640
void C_00e4b640::sub_00e4b640() { sub_00bfa4d0(0); }

struct C_00e4b650 {
    int sub_00e4b650();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00e4b650
int C_00e4b650::sub_00e4b650(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *param_1 + -4 + param_1[1] * 4;
}

struct C_00e4b760{
int sub_00e4b760(uint*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00e4b760
int C_00e4b760::sub_00e4b760(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(0!=iVar3)){
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

struct E { BYTE Bytes[16]; };

struct S_00e4b7c0 {
    TArray<E> Items; // 0x00
    E* sub_00e4b7c0(INT Index);
};

// @baa 0x00e4b7c0
E* S_00e4b7c0::sub_00e4b7c0(INT Index)
{
    return &Items(Index);
}

struct E_00e4b810 { BYTE Bytes[64]; };

struct S_00e4b810 {
    TArray<E_00e4b810> Items; // 0x00
    E_00e4b810* sub_00e4b810(INT Index);
};

// @baa 0x00e4b810
E_00e4b810* S_00e4b810::sub_00e4b810(INT Index)
{
    return &Items(Index);
}

struct E_00e4b860 { BYTE Bytes[24]; };

struct S_00e4b860 {
    TArray<E_00e4b860> Items; // 0x00
    E_00e4b860* sub_00e4b860(INT Index);
};

// @baa 0x00e4b860
E_00e4b860* S_00e4b860::sub_00e4b860(INT Index)
{
    return &Items(Index);
}

struct E_00e4b8b0 { BYTE Bytes[24]; };

struct S_00e4b8b0 {
    TArray<E_00e4b8b0> Items; // 0x00
    const E_00e4b8b0* sub_00e4b8b0(INT Index) const;
};

// @baa 0x00e4b8b0
const E_00e4b8b0* S_00e4b8b0::sub_00e4b8b0(INT Index) const
{
    return &Items(Index);
}

struct C_00e4b910 { C_00e4b910* sub_00e4b910(void); };

// @baa 0x00e4b910
C_00e4b910* C_00e4b910::sub_00e4b910(void) { return this; }

typedef long LONG;

extern "C" __declspec(dllimport) int __stdcall InterlockedExchangeAdd(LONG *, LONG);
struct C_00e4b920 {
    void sub_00e4b920();
};

// @baa 0x00e4b920
void C_00e4b920::sub_00e4b920(void)
{
    InterlockedExchangeAdd((LONG *)this, 1);
}

struct S_00e4b930 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e4b930(INT Index);
};

// @baa 0x00e4b930
DWORD* S_00e4b930::sub_00e4b930(INT Index)
{
    return &Items(Index);
}

struct S_00e4b980 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00e4b980(INT Index) const;
};

// @baa 0x00e4b980
const DWORD* S_00e4b980::sub_00e4b980(INT Index) const
{
    return &Items(Index);
}

struct S_00e4c010 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e4c010(INT Index);
};

// @baa 0x00e4c010
DWORD* S_00e4c010::sub_00e4c010(INT Index)
{
    return &Items(Index);
}

struct S_00e4c060 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00e4c060(INT Index) const;
};

// @baa 0x00e4c060
const DWORD* S_00e4c060::sub_00e4c060(INT Index) const
{
    return &Items(Index);
}

struct C_00e4c0b0 {
    int sub_00e4c0b0(int);
};

// @baa 0x00e4c0b0
int C_00e4c0b0::sub_00e4c0b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00e4c0c0 {
    int sub_00e4c0c0(int);
};

// @baa 0x00e4c0c0
int C_00e4c0c0::sub_00e4c0c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e4c0d0 {
    int sub_00e4c0d0(int);
};

// @baa 0x00e4c0d0
int C_00e4c0d0::sub_00e4c0d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00e4c100
void __stdcall sub_00e4c100(int a0, int a1) {  }

struct C_00e4c1b0 {
    int sub_00e4c1b0(int);
};

// @baa 0x00e4c1b0
int C_00e4c1b0::sub_00e4c1b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e4c1c0
void __stdcall sub_00e4c1c0(int a0, int a1) {  }

struct C_00e4c3b0 {
    int sub_00e4c3b0();
};

// @baa 0x00e4c3b0
int C_00e4c3b0::sub_00e4c3b0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4c3c0 {
    uint sub_00e4c3c0(void);
};

// @baa 0x00e4c3c0
uint C_00e4c3c0::sub_00e4c3c0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4c3d0 {
    undefined4 sub_00e4c3d0(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_007161b0(...);
// @baa 0x00e4c3d0
undefined4 C_00e4c3d0::sub_00e4c3d0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4c3d0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

void sub_007249d0();
// @baa 0x00e4c430
void sub_00e4c430(void) { sub_007249d0(); }

struct A_00e4c4c0 { virtual void sub_00e50580(); char pad[16]; };

struct B_00e4c4c0 { virtual void sub_00e50580(); };

struct C_00e4c4c0 : A_00e4c4c0, B_00e4c4c0 { virtual void sub_00e50580(); C_00e4c4c0(); };

C_00e4c4c0::C_00e4c4c0() {}

// @baa 0x00e4c4c0
void C_00e4c4c0::sub_00e50580() {}

struct C_00e4c4d0 {
    void sub_00e4c4d0(undefined4, undefined4);
};

int sub_0065ead0(...);
// @baa 0x00e4c4d0
void C_00e4c4d0::sub_00e4c4d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4c7a0 {
    int sub_00e4c7a0();
};

// @baa 0x00e4c7a0
int C_00e4c7a0::sub_00e4c7a0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4c7b0 {
    uint sub_00e4c7b0();
};

// @baa 0x00e4c7b0
uint C_00e4c7b0::sub_00e4c7b0() {
    uint x = (uint)this;
    uint d = x - 0x4c;
    return d != 0 ? x : 0;
}

struct C_00e4c7c0 {
    undefined4 sub_00e4c7c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4c7c0
undefined4 C_00e4c7c0::sub_00e4c7c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4c7c0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4c820
void sub_00e4c820(void) { sub_007249d0(); }

struct A_00e4c830 { virtual void sub_00e505a0(); char pad[16]; };

struct B_00e4c830 { virtual void sub_00e505a0(); };

struct C_00e4c830 : A_00e4c830, B_00e4c830 { virtual void sub_00e505a0(); C_00e4c830(); };

C_00e4c830::C_00e4c830() {}

// @baa 0x00e4c830
void C_00e4c830::sub_00e505a0() {}

struct C_00e4c840 {
    void sub_00e4c840(undefined4, undefined4);
};

// @baa 0x00e4c840
void C_00e4c840::sub_00e4c840(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4cb10 {
    int sub_00e4cb10();
};

// @baa 0x00e4cb10
int C_00e4cb10::sub_00e4cb10(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4cb20 {
    uint sub_00e4cb20(void);
};

// @baa 0x00e4cb20
uint C_00e4cb20::sub_00e4cb20(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4cb30 {
    undefined4 sub_00e4cb30(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4cb30
undefined4 C_00e4cb30::sub_00e4cb30(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4cb30 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4cb90
void sub_00e4cb90(void) { sub_007249d0(); }

struct A_00e4cba0 { virtual void sub_00e505c0(); char pad[16]; };

struct B_00e4cba0 { virtual void sub_00e505c0(); };

struct C_00e4cba0 : A_00e4cba0, B_00e4cba0 { virtual void sub_00e505c0(); C_00e4cba0(); };

C_00e4cba0::C_00e4cba0() {}

// @baa 0x00e4cba0
void C_00e4cba0::sub_00e505c0() {}

struct C_00e4cbb0 {
    void sub_00e4cbb0(undefined4, undefined4);
};

// @baa 0x00e4cbb0
void C_00e4cbb0::sub_00e4cbb0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4ce80 {
    int sub_00e4ce80();
};

// @baa 0x00e4ce80
int C_00e4ce80::sub_00e4ce80(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4ce90 {
    uint sub_00e4ce90(void);
};

// @baa 0x00e4ce90
uint C_00e4ce90::sub_00e4ce90(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4cea0 {
    undefined4 sub_00e4cea0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4cea0
undefined4 C_00e4cea0::sub_00e4cea0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4cea0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4cf00
void sub_00e4cf00(void) { sub_007249d0(); }

struct A_00e4cf10 { virtual void sub_00e505e0(); char pad[16]; };

struct B_00e4cf10 { virtual void sub_00e505e0(); };

struct C_00e4cf10 : A_00e4cf10, B_00e4cf10 { virtual void sub_00e505e0(); C_00e4cf10(); };

C_00e4cf10::C_00e4cf10() {}

// @baa 0x00e4cf10
void C_00e4cf10::sub_00e505e0() {}

struct C_00e4cf20 {
    void sub_00e4cf20(undefined4, undefined4);
};

// @baa 0x00e4cf20
void C_00e4cf20::sub_00e4cf20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4d1f0 {
    int sub_00e4d1f0();
};

// @baa 0x00e4d1f0
int C_00e4d1f0::sub_00e4d1f0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4d200 {
    uint sub_00e4d200(void);
};

// @baa 0x00e4d200
uint C_00e4d200::sub_00e4d200(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4d210 {
    undefined4 sub_00e4d210(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4d210
undefined4 C_00e4d210::sub_00e4d210(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4d210 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4d270
void sub_00e4d270(void) { sub_007249d0(); }

struct A_00e4d280 { virtual void sub_00e50600(); char pad[16]; };

struct B_00e4d280 { virtual void sub_00e50600(); };

struct C_00e4d280 : A_00e4d280, B_00e4d280 { virtual void sub_00e50600(); C_00e4d280(); };

C_00e4d280::C_00e4d280() {}

// @baa 0x00e4d280
void C_00e4d280::sub_00e50600() {}

struct C_00e4d290 {
    void sub_00e4d290(undefined4, undefined4);
};

// @baa 0x00e4d290
void C_00e4d290::sub_00e4d290(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4d560 {
    int sub_00e4d560();
};

// @baa 0x00e4d560
int C_00e4d560::sub_00e4d560(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4d570 {
    uint sub_00e4d570(void);
};

// @baa 0x00e4d570
uint C_00e4d570::sub_00e4d570(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4d580 {
    undefined4 sub_00e4d580(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4d580
undefined4 C_00e4d580::sub_00e4d580(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4d580 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4d5e0
void sub_00e4d5e0(void) { sub_007249d0(); }

struct A_00e4d5f0 { virtual void sub_00e50620(); char pad[16]; };

struct B_00e4d5f0 { virtual void sub_00e50620(); };

struct C_00e4d5f0 : A_00e4d5f0, B_00e4d5f0 { virtual void sub_00e50620(); C_00e4d5f0(); };

C_00e4d5f0::C_00e4d5f0() {}

// @baa 0x00e4d5f0
void C_00e4d5f0::sub_00e50620() {}

struct C_00e4d600 {
    void sub_00e4d600(undefined4, undefined4);
};

// @baa 0x00e4d600
void C_00e4d600::sub_00e4d600(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4d8d0 {
    int sub_00e4d8d0();
};

// @baa 0x00e4d8d0
int C_00e4d8d0::sub_00e4d8d0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4d8e0 {
    uint sub_00e4d8e0(void);
};

// @baa 0x00e4d8e0
uint C_00e4d8e0::sub_00e4d8e0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4d8f0 {
    undefined4 sub_00e4d8f0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4d8f0
undefined4 C_00e4d8f0::sub_00e4d8f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4d8f0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4d950
void sub_00e4d950(void) { sub_007249d0(); }

struct A_00e4d960 { virtual void sub_00e50640(); char pad[16]; };

struct B_00e4d960 { virtual void sub_00e50640(); };

struct C_00e4d960 : A_00e4d960, B_00e4d960 { virtual void sub_00e50640(); C_00e4d960(); };

C_00e4d960::C_00e4d960() {}

// @baa 0x00e4d960
void C_00e4d960::sub_00e50640() {}

struct C_00e4d970 {
    void sub_00e4d970(undefined4, undefined4);
};

// @baa 0x00e4d970
void C_00e4d970::sub_00e4d970(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4dc40 {
    int sub_00e4dc40();
};

// @baa 0x00e4dc40
int C_00e4dc40::sub_00e4dc40(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4dc50 {
    uint sub_00e4dc50(void);
};

// @baa 0x00e4dc50
uint C_00e4dc50::sub_00e4dc50(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4dc60 {
    undefined4 sub_00e4dc60(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4dc60
undefined4 C_00e4dc60::sub_00e4dc60(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4dc60 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4dcc0
void sub_00e4dcc0(void) { sub_007249d0(); }

struct A_00e4dcd0 { virtual void sub_00e50660(); char pad[16]; };

struct B_00e4dcd0 { virtual void sub_00e50660(); };

struct C_00e4dcd0 : A_00e4dcd0, B_00e4dcd0 { virtual void sub_00e50660(); C_00e4dcd0(); };

C_00e4dcd0::C_00e4dcd0() {}

// @baa 0x00e4dcd0
void C_00e4dcd0::sub_00e50660() {}

struct C_00e4dce0 {
    void sub_00e4dce0(undefined4, undefined4);
};

// @baa 0x00e4dce0
void C_00e4dce0::sub_00e4dce0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4dfb0 {
    int sub_00e4dfb0();
};

// @baa 0x00e4dfb0
int C_00e4dfb0::sub_00e4dfb0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4dfc0 {
    uint sub_00e4dfc0(void);
};

// @baa 0x00e4dfc0
uint C_00e4dfc0::sub_00e4dfc0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4dfd0 {
    undefined4 sub_00e4dfd0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4dfd0
undefined4 C_00e4dfd0::sub_00e4dfd0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4dfd0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4e030
void sub_00e4e030(void) { sub_007249d0(); }

struct A_00e4e040 { virtual void sub_00e50680(); char pad[16]; };

struct B_00e4e040 { virtual void sub_00e50680(); };

struct C_00e4e040 : A_00e4e040, B_00e4e040 { virtual void sub_00e50680(); C_00e4e040(); };

C_00e4e040::C_00e4e040() {}

// @baa 0x00e4e040
void C_00e4e040::sub_00e50680() {}

struct C_00e4e050 {
    void sub_00e4e050(undefined4, undefined4);
};

// @baa 0x00e4e050
void C_00e4e050::sub_00e4e050(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4e320 {
    int sub_00e4e320();
};

// @baa 0x00e4e320
int C_00e4e320::sub_00e4e320(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4e330 {
    uint sub_00e4e330(void);
};

// @baa 0x00e4e330
uint C_00e4e330::sub_00e4e330(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4e340 {
    undefined4 sub_00e4e340(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4e340
undefined4 C_00e4e340::sub_00e4e340(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4e340 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4e3a0
void sub_00e4e3a0(void) { sub_007249d0(); }

struct A_00e4e3b0 { virtual void sub_00e506a0(); char pad[16]; };

struct B_00e4e3b0 { virtual void sub_00e506a0(); };

struct C_00e4e3b0 : A_00e4e3b0, B_00e4e3b0 { virtual void sub_00e506a0(); C_00e4e3b0(); };

C_00e4e3b0::C_00e4e3b0() {}

// @baa 0x00e4e3b0
void C_00e4e3b0::sub_00e506a0() {}

struct C_00e4e3c0 {
    void sub_00e4e3c0(undefined4, undefined4);
};

// @baa 0x00e4e3c0
void C_00e4e3c0::sub_00e4e3c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4e690 {
    int sub_00e4e690();
};

// @baa 0x00e4e690
int C_00e4e690::sub_00e4e690(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4e6a0 {
    uint sub_00e4e6a0(void);
};

// @baa 0x00e4e6a0
uint C_00e4e6a0::sub_00e4e6a0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4e6b0 {
    undefined4 sub_00e4e6b0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4e6b0
undefined4 C_00e4e6b0::sub_00e4e6b0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4e6b0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4e710
void sub_00e4e710(void) { sub_007249d0(); }

struct A_00e4e720 { virtual void sub_00e506c0(); char pad[16]; };

struct B_00e4e720 { virtual void sub_00e506c0(); };

struct C_00e4e720 : A_00e4e720, B_00e4e720 { virtual void sub_00e506c0(); C_00e4e720(); };

C_00e4e720::C_00e4e720() {}

// @baa 0x00e4e720
void C_00e4e720::sub_00e506c0() {}

struct C_00e4e730 {
    void sub_00e4e730(undefined4, undefined4);
};

// @baa 0x00e4e730
void C_00e4e730::sub_00e4e730(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4ea00 {
    int sub_00e4ea00();
};

// @baa 0x00e4ea00
int C_00e4ea00::sub_00e4ea00(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4ea10 {
    uint sub_00e4ea10(void);
};

// @baa 0x00e4ea10
uint C_00e4ea10::sub_00e4ea10(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4ea20 {
    undefined4 sub_00e4ea20(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4ea20
undefined4 C_00e4ea20::sub_00e4ea20(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4ea20 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4ea80
void sub_00e4ea80(void) { sub_007249d0(); }

struct A_00e4ea90 { virtual void sub_00e506e0(); char pad[16]; };

struct B_00e4ea90 { virtual void sub_00e506e0(); };

struct C_00e4ea90 : A_00e4ea90, B_00e4ea90 { virtual void sub_00e506e0(); C_00e4ea90(); };

C_00e4ea90::C_00e4ea90() {}

// @baa 0x00e4ea90
void C_00e4ea90::sub_00e506e0() {}

struct C_00e4eaa0 {
    void sub_00e4eaa0(undefined4, undefined4);
};

// @baa 0x00e4eaa0
void C_00e4eaa0::sub_00e4eaa0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4ed70 {
    int sub_00e4ed70();
};

// @baa 0x00e4ed70
int C_00e4ed70::sub_00e4ed70(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4ed80 {
    uint sub_00e4ed80(void);
};

// @baa 0x00e4ed80
uint C_00e4ed80::sub_00e4ed80(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4ed90 {
    undefined4 sub_00e4ed90(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4ed90
undefined4 C_00e4ed90::sub_00e4ed90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4ed90 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4edf0
void sub_00e4edf0(void) { sub_007249d0(); }

struct A_00e4ee00 { virtual void sub_00e50700(); char pad[16]; };

struct B_00e4ee00 { virtual void sub_00e50700(); };

struct C_00e4ee00 : A_00e4ee00, B_00e4ee00 { virtual void sub_00e50700(); C_00e4ee00(); };

C_00e4ee00::C_00e4ee00() {}

// @baa 0x00e4ee00
void C_00e4ee00::sub_00e50700() {}

struct C_00e4ee10 {
    void sub_00e4ee10(undefined4, undefined4);
};

// @baa 0x00e4ee10
void C_00e4ee10::sub_00e4ee10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4f0e0 {
    int sub_00e4f0e0();
};

// @baa 0x00e4f0e0
int C_00e4f0e0::sub_00e4f0e0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4f0f0 {
    uint sub_00e4f0f0(void);
};

// @baa 0x00e4f0f0
uint C_00e4f0f0::sub_00e4f0f0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4f100 {
    undefined4 sub_00e4f100(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4f100
undefined4 C_00e4f100::sub_00e4f100(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4f100 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x50);
  sub_007161b0(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  sub_00716170(param_2,param_1 + 0x68);
  sub_00716170(param_2,param_1 + 0x6e);
  return uVar1;
}

// @baa 0x00e4f160
void sub_00e4f160(void) { sub_007249d0(); }

struct A_00e4f170 { virtual void sub_00e50720(); char pad[16]; };

struct B_00e4f170 { virtual void sub_00e50720(); };

struct C_00e4f170 : A_00e4f170, B_00e4f170 { virtual void sub_00e50720(); C_00e4f170(); };

C_00e4f170::C_00e4f170() {}

// @baa 0x00e4f170
void C_00e4f170::sub_00e50720() {}

struct C_00e4f180 {
    void sub_00e4f180(undefined4, undefined4);
};

// @baa 0x00e4f180
void C_00e4f180::sub_00e4f180(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_0065ead0(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4f380 {
    int sub_00e4f380();
};

// @baa 0x00e4f380
int C_00e4f380::sub_00e4f380(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4f390 {
    uint sub_00e4f390(void);
};

// @baa 0x00e4f390
uint C_00e4f390::sub_00e4f390(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4f3a0 {
    undefined4 sub_00e4f3a0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4f3a0
undefined4 C_00e4f3a0::sub_00e4f3a0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4f3a0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4f3f0
void sub_00e4f3f0(void) { sub_007249d0(); }

struct A_00e4f400 { virtual void sub_00e50740(); char pad[16]; };

struct B_00e4f400 { virtual void sub_00e50740(); };

struct C_00e4f400 : A_00e4f400, B_00e4f400 { virtual void sub_00e50740(); C_00e4f400(); };

C_00e4f400::C_00e4f400() {}

// @baa 0x00e4f400
void C_00e4f400::sub_00e50740() {}

struct C_00e4f410 {
    void sub_00e4f410(undefined4, undefined4);
};

int sub_00654a90(...);
// @baa 0x00e4f410
void C_00e4f410::sub_00e4f410(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4f430 {
    void sub_00e4f430(undefined4, undefined4);
};

// @baa 0x00e4f430
void C_00e4f430::sub_00e4f430(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4f450 {
    void sub_00e4f450(undefined4, undefined4);
};

// @baa 0x00e4f450
void C_00e4f450::sub_00e4f450(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4f5a0 {
    int sub_00e4f5a0();
};

// @baa 0x00e4f5a0
int C_00e4f5a0::sub_00e4f5a0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4f5b0 {
    uint sub_00e4f5b0(void);
};

// @baa 0x00e4f5b0
uint C_00e4f5b0::sub_00e4f5b0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4f5c0 {
    undefined4 sub_00e4f5c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4f5c0
undefined4 C_00e4f5c0::sub_00e4f5c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4f5c0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4f610
void sub_00e4f610(void) { sub_007249d0(); }

struct A_00e4f620 { virtual void sub_00e50760(); char pad[16]; };

struct B_00e4f620 { virtual void sub_00e50760(); };

struct C_00e4f620 : A_00e4f620, B_00e4f620 { virtual void sub_00e50760(); C_00e4f620(); };

C_00e4f620::C_00e4f620() {}

// @baa 0x00e4f620
void C_00e4f620::sub_00e50760() {}

struct C_00e4f630 {
    void sub_00e4f630(undefined4, undefined4);
};

// @baa 0x00e4f630
void C_00e4f630::sub_00e4f630(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4f650 {
    void sub_00e4f650(undefined4, undefined4);
};

// @baa 0x00e4f650
void C_00e4f650::sub_00e4f650(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4f670 {
    void sub_00e4f670(undefined4, undefined4);
};

// @baa 0x00e4f670
void C_00e4f670::sub_00e4f670(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4f7c0 {
    int sub_00e4f7c0();
};

// @baa 0x00e4f7c0
int C_00e4f7c0::sub_00e4f7c0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4f7d0 {
    uint sub_00e4f7d0(void);
};

// @baa 0x00e4f7d0
uint C_00e4f7d0::sub_00e4f7d0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4f7e0 {
    undefined4 sub_00e4f7e0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4f7e0
undefined4 C_00e4f7e0::sub_00e4f7e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4f7e0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4f830
void sub_00e4f830(void) { sub_007249d0(); }

struct A_00e4f840 { virtual void sub_00e50780(); char pad[16]; };

struct B_00e4f840 { virtual void sub_00e50780(); };

struct C_00e4f840 : A_00e4f840, B_00e4f840 { virtual void sub_00e50780(); C_00e4f840(); };

C_00e4f840::C_00e4f840() {}

// @baa 0x00e4f840
void C_00e4f840::sub_00e50780() {}

struct C_00e4f850 {
    void sub_00e4f850(undefined4, undefined4);
};

// @baa 0x00e4f850
void C_00e4f850::sub_00e4f850(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4f870 {
    void sub_00e4f870(undefined4, undefined4);
};

// @baa 0x00e4f870
void C_00e4f870::sub_00e4f870(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4f890 {
    void sub_00e4f890(undefined4, undefined4);
};

// @baa 0x00e4f890
void C_00e4f890::sub_00e4f890(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4f9e0 {
    int sub_00e4f9e0();
};

// @baa 0x00e4f9e0
int C_00e4f9e0::sub_00e4f9e0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4f9f0 {
    uint sub_00e4f9f0(void);
};

// @baa 0x00e4f9f0
uint C_00e4f9f0::sub_00e4f9f0(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4fa00 {
    undefined4 sub_00e4fa00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4fa00
undefined4 C_00e4fa00::sub_00e4fa00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4fa00 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4fa50
void sub_00e4fa50(void) { sub_007249d0(); }

struct A_00e4fa60 { virtual void sub_00e507a0(); char pad[16]; };

struct B_00e4fa60 { virtual void sub_00e507a0(); };

struct C_00e4fa60 : A_00e4fa60, B_00e4fa60 { virtual void sub_00e507a0(); C_00e4fa60(); };

C_00e4fa60::C_00e4fa60() {}

// @baa 0x00e4fa60
void C_00e4fa60::sub_00e507a0() {}

struct C_00e4fa70 {
    void sub_00e4fa70(undefined4, undefined4);
};

// @baa 0x00e4fa70
void C_00e4fa70::sub_00e4fa70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4fa90 {
    void sub_00e4fa90(undefined4, undefined4);
};

// @baa 0x00e4fa90
void C_00e4fa90::sub_00e4fa90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4fab0 {
    void sub_00e4fab0(undefined4, undefined4);
};

// @baa 0x00e4fab0
void C_00e4fab0::sub_00e4fab0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4fc00 {
    int sub_00e4fc00();
};

// @baa 0x00e4fc00
int C_00e4fc00::sub_00e4fc00(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4fc10 {
    uint sub_00e4fc10(void);
};

// @baa 0x00e4fc10
uint C_00e4fc10::sub_00e4fc10(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4fc20 {
    undefined4 sub_00e4fc20(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4fc20
undefined4 C_00e4fc20::sub_00e4fc20(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4fc20 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4fc70
void sub_00e4fc70(void) { sub_007249d0(); }

struct A_00e4fc80 { virtual void sub_00e507c0(); char pad[16]; };

struct B_00e4fc80 { virtual void sub_00e507c0(); };

struct C_00e4fc80 : A_00e4fc80, B_00e4fc80 { virtual void sub_00e507c0(); C_00e4fc80(); };

C_00e4fc80::C_00e4fc80() {}

// @baa 0x00e4fc80
void C_00e4fc80::sub_00e507c0() {}

struct C_00e4fc90 {
    void sub_00e4fc90(undefined4, undefined4);
};

// @baa 0x00e4fc90
void C_00e4fc90::sub_00e4fc90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4fcb0 {
    void sub_00e4fcb0(undefined4, undefined4);
};

// @baa 0x00e4fcb0
void C_00e4fcb0::sub_00e4fcb0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4fcd0 {
    void sub_00e4fcd0(undefined4, undefined4);
};

// @baa 0x00e4fcd0
void C_00e4fcd0::sub_00e4fcd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct C_00e4fe20 {
    int sub_00e4fe20();
};

// @baa 0x00e4fe20
int C_00e4fe20::sub_00e4fe20(void)
{
    int param_1 = (int)this;

  return param_1 + -0x4c;
}

struct C_00e4fe30 {
    uint sub_00e4fe30(void);
};

// @baa 0x00e4fe30
uint C_00e4fe30::sub_00e4fe30(void)
{
    int d = (int)((uint)this - 0x4c);
    return d ? (uint)this : 0;
}

struct C_00e4fe40 {
    undefined4 sub_00e4fe40(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00e4fe40
undefined4 C_00e4fe40::sub_00e4fe40(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00e4fe40 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x50);
  sub_00716170(param_2,param_1 + 0x56);
  sub_00716170(param_2,param_1 + 0x5c);
  sub_00716170(param_2,param_1 + 0x62);
  return uVar1;
}

// @baa 0x00e4fe90
void sub_00e4fe90(void) { sub_007249d0(); }

struct A_00e4fea0 { virtual void sub_00e507e0(); char pad[16]; };

struct B_00e4fea0 { virtual void sub_00e507e0(); };

struct C_00e4fea0 : A_00e4fea0, B_00e4fea0 { virtual void sub_00e507e0(); C_00e4fea0(); };

C_00e4fea0::C_00e4fea0() {}

// @baa 0x00e4fea0
void C_00e4fea0::sub_00e507e0() {}

struct C_00e4feb0 {
    void sub_00e4feb0(undefined4, undefined4);
};

// @baa 0x00e4feb0
void C_00e4feb0::sub_00e4feb0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 4,param_3,0);
  return;
}

struct C_00e4fed0 {
    void sub_00e4fed0(undefined4, undefined4);
};

// @baa 0x00e4fed0
void C_00e4fed0::sub_00e4fed0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 10,param_3,0);
  return;
}

struct C_00e4fef0 {
    void sub_00e4fef0(undefined4, undefined4);
};

// @baa 0x00e4fef0
void C_00e4fef0::sub_00e4fef0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  sub_00654a90(param_2,param_1 + 0x10,param_3,0);
  return;
}

struct S00e45100
{
    INT A;
    INT B;
    INT C;

    S00e45100& sub_00e45100(S00e45100 Other);
    static void KeepAlive() { S00e45100 S; S.sub_00e45100(S); }
};

// @baa 0x00e45100
S00e45100& S00e45100::sub_00e45100(S00e45100 Other)
{
    A = Other.A;
    B = Other.B;
    C = Other.C;
    return *this;
}
