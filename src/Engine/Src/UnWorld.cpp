// UnWorld.cpp (part 1 of 6): 251 functions
// Placed here by: neighbours 231, callers 14, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_007d77e0();
};

// @baa 0x007d77e0
void C::sub_007d77e0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x564) = 1;
  return;
}

struct C_007dacc0{
int sub_007dacc0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x007dacc0
int C_007dacc0::sub_007dacc0(undefined4*param_2)
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

struct C_007de400 {
    undefined4 sub_007de400();
};

// @baa 0x007de400
undefined4 C_007de400::sub_007de400(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x1d0) != 0) && (*(int *)(param_1 + 0x1d4) != 0)) {
    return 1;
  }
  return 0;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00808940(INT Index);
};

// @baa 0x00808940
QWORD* S::sub_00808940(INT Index)
{
    return &Items(Index);
}

struct S_00808990 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00808990(INT Index) const;
};

// @baa 0x00808990
const QWORD* S_00808990::sub_00808990(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_view {
    int sub_00805b00(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x008089e0
int UObject::sub_008089e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00805b00(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

// @baa 0x00808a20
int UObject::sub_00808a20(void) { return *(int*)((char*)this + 0); }

struct S_00808ae0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00808ae0(INT Index) const;
};

// @baa 0x00808ae0
const DWORD* S_00808ae0::sub_00808ae0(INT Index) const
{
    return &Items(Index);
}

extern "C" int g_026c4c08;
extern "C" int g_026c4c0c;
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
    void sub_008889a0();
};

// @baa 0x008889a0
void UObjectThunk::sub_008889a0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4c08, g_026c4c0c, 0), 0, 0);
}

int sub_00bf9860(void);
int sub_00c1ae90(...);
extern undefined4 g_026c0878;
// @baa 0x009b0410
int sub_009b0410(void)
{
  if (g_026c0878 == 0) {
    g_026c0878 = sub_00c1ae90(L"Engine");
    sub_00bf9860();
  }
  return g_026c0878;
}

struct S_009b0440 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x009b0440
void sub_009b0440(S_009b0440* p, INT Value)
{
    p->vf_18(Value);
}

int sub_005e1960(...);
int sub_00bf9a40(void);
int sub_00c156d0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026c087c;
// @baa 0x009b0460
void sub_009b0460(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c087c == 0) {
    g_026c087c = sub_00c156d0(L"Engine");
    sub_00bf9a40();
  }
  sub_005e1960(g_026c087c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

extern "C" int g_026c41e8;
extern "C" int g_026c41ec;
struct UObjectThunk_009b04c0 {
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
    void sub_009b04c0();
};

// @baa 0x009b04c0
void UObjectThunk_009b04c0::sub_009b04c0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c41e8, g_026c41ec, 0), 0, 0);
}

// @baa 0x009b04f0
IMPLEMENT_CLASS_AT(UWorld, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 27);

// @baa 0x009b0600
int UWorld::vf_000(void) { return 1; }

// @baa 0x009b0610
bool UWorld::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005e59b0(void);
// @baa 0x009b06f0
void UWorld::vf_01c(void)
{
    int param_1 = (int)this;

  sub_005e59b0();
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x44);
  return;
}

extern undefined4 g_026b62b8;
// @baa 0x009b0720
bool UWorld::vf_10c(void)
{
    int param_1 = (int)this;

  return g_026b62b8 == param_1;
}

extern undefined4 g_026c3cdc;
// @baa 0x009b0a30
bool sub_009b0a30(void)
{
  return *(int *)(g_026c3cdc + 800) != 0;
}

struct C_009b0a50 {
    undefined4 sub_009b0a50();
};

// @baa 0x009b0a50
undefined4 C_009b0a50::sub_009b0a50(void)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 200) == 0) || (*(int *)(*(int *)(param_1 + 200) + 0x44) == 0)) &&
     ((*(int *)(param_1 + 0x110) == 0 || (*(int *)(*(int *)(param_1 + 0x110) + 0x44) == 0)))) {
    return 1;
  }
  return 0;
}

extern undefined4 g_026b6308;
// @baa 0x009b0af0
undefined4 sub_009b0af0(void)
{
  return g_026b6308;
}

extern undefined1 g_026c0b3c;
// @baa 0x009b0b00
undefined1 sub_009b0b00(void)
{
  return g_026c0b3c;
}

// @baa 0x009b0b70
void __stdcall sub_009b0b70(int a0) {  }

// @baa 0x009b0b80
void __stdcall sub_009b0b80(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x009b0b90
IMPLEMENT_CLASS_AT(ULevelStreaming, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5468);

// @baa 0x009b0ca0
int ULevelStreaming::vf_000(void) { return 1; }

// @baa 0x009b0cb0
bool ULevelStreaming::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009b0cf0
int ULevelStreamingKismet::vf_000(void) { return 1; }

// @baa 0x009b0d00
int ULevelStreamingDistance::vf_000(void) { return 1; }

// @baa 0x009b0d10
int ULevelStreamingPersistent::vf_000(void) { return 1; }

// @baa 0x009b0d20
int ULevelStreaming::vf_10c(int a0) { return 1; }

struct V_009b0d30 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void g(int a0);
    void sub_009b0d30(int a0);
};

// @baa 0x009b0d30
void V_009b0d30::sub_009b0d30(int a0) { g(a0); }

struct C_009b0d40 {
    char pad[0x54];
    unsigned int bits;
    INT sub_009b0d40(INT i);
};

// @baa 0x009b0d40
INT C_009b0d40::sub_009b0d40(INT i)
{
    return (bits >> 9) & 1;
}

struct C_009b0d50 {
    char pad[0x54];
    unsigned int bits;
    INT sub_009b0d50(INT i);
};

// @baa 0x009b0d50
INT C_009b0d50::sub_009b0d50(INT i)
{
    return (bits >> 8) & 1;
}

struct C_009b0dd0 { int a, b, c; C_009b0dd0(); };

// @baa 0x009b0dd0
C_009b0dd0::C_009b0dd0() : a(0), b(0), c(0) {}

struct C_009b0de0 { int a, b, c; C_009b0de0(); };

// @baa 0x009b0de0
C_009b0de0::C_009b0de0() : a(0), b(0), c(0) {}

struct C_009b0df0 { int a, b, c; C_009b0df0(); };

// @baa 0x009b0df0
C_009b0df0::C_009b0df0() : a(0), b(0), c(0) {}

struct C_009b0e00 { int a, b, c; C_009b0e00(); };

// @baa 0x009b0e00
C_009b0e00::C_009b0e00() : a(0), b(0), c(0) {}

struct C_009b0e50 { int sub_009b0e50(void); };

// @baa 0x009b0e50
int C_009b0e50::sub_009b0e50(void) { return *(int*)((char*)this + 4); }

struct C_009b0e60 { int a, b, c; C_009b0e60(); };

// @baa 0x009b0e60
C_009b0e60::C_009b0e60() : a(0), b(0), c(0) {}

struct C_009b0e70 { int sub_009b0e70(void); };

// @baa 0x009b0e70
int C_009b0e70::sub_009b0e70(void) { return *(int*)((char*)this + 4); }

struct C_009b0ef0 { int a, b, c; C_009b0ef0(); };

// @baa 0x009b0ef0
C_009b0ef0::C_009b0ef0() : a(0), b(0), c(0) {}

struct C_009b0f00 { int sub_009b0f00(void); };

// @baa 0x009b0f00
int C_009b0f00::sub_009b0f00(void) { return *(int*)((char*)this + 4); }

struct C_009b0f10 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_009b0f10(INT Index);
};

// @baa 0x009b0f10
UBOOL C_009b0f10::sub_009b0f10(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_009b0f30 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_009b0f30* sub_009b0f30(INT value);
};

// @baa 0x009b0f30
C_009b0f30* C_009b0f30::sub_009b0f30(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_009b0f50 {
    char pad4[4];
    int field4;
    C_009b0f50* sub_009b0f50();
};

// @baa 0x009b0f50
C_009b0f50* C_009b0f50::sub_009b0f50() {
    C_009b0f50* r = this;
    ++r->field4;
    return r;
}

struct C_009b0f60 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_009b0f60(INT Index);
};

// @baa 0x009b0f60
UBOOL C_009b0f60::sub_009b0f60(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_009b0f80 { C_009b0f80* sub_009b0f80(int a0); };

// @baa 0x009b0f80
C_009b0f80* C_009b0f80::sub_009b0f80(int a0) { return this; }

struct C_009b0ff0 { int sub_009b0ff0(void); };

// @baa 0x009b0ff0
int C_009b0ff0::sub_009b0ff0(void) { return *(int*)((char*)this + 0); }

struct C_009b1030 { int sub_009b1030(void); };

// @baa 0x009b1030
int C_009b1030::sub_009b1030(void) { return *(int*)((char*)this + 0); }

struct C_009b10e0 { int sub_009b10e0(void); };

// @baa 0x009b10e0
int C_009b10e0::sub_009b10e0(void) { return *(int*)((char*)this + 0); }

struct C_009b10f0 { int sub_009b10f0(void); };

// @baa 0x009b10f0
int C_009b10f0::sub_009b10f0(void) { return *(int*)((char*)this + 0); }

struct C_009b11e0 {
    int sub_009b11e0();
};

// @baa 0x009b11e0
int C_009b11e0::sub_009b11e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_009b11f0 { int a, b; C_009b11f0(int, int); };

// @baa 0x009b11f0
C_009b11f0::C_009b11f0(int x, int y) : a(x), b(y) {}

struct C_009b1210 {
    int sub_009b1210();
};

// @baa 0x009b1210
int C_009b1210::sub_009b1210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_009b1220 { int a, b; C_009b1220(int, int); };

// @baa 0x009b1220
C_009b1220::C_009b1220(int x, int y) : a(x), b(y) {}

struct C_009b1240 {
    int sub_009b1240();
};

// @baa 0x009b1240
int C_009b1240::sub_009b1240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_009b1250 { int a, b; C_009b1250(int, int); };

// @baa 0x009b1250
C_009b1250::C_009b1250(int x, int y) : a(x), b(y) {}

struct C_009b1270 {
    int sub_009b1270();
};

// @baa 0x009b1270
int C_009b1270::sub_009b1270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_009b1280 { int a, b; C_009b1280(int, int); };

// @baa 0x009b1280
C_009b1280::C_009b1280(int x, int y) : a(x), b(y) {}

struct C_009b12a0 {
    undefined4 sub_009b12a0(byte);
};

int sub_0053dfa0(...);
int sub_007593e0(void);
// @baa 0x009b12a0
undefined4 C_009b12a0::sub_009b12a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007593e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009b12c0 {
    undefined4 sub_009b12c0(byte);
};

// @baa 0x009b12c0
undefined4 C_009b12c0::sub_009b12c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009b12e0 { int sub_009b12e0(void); };

// @baa 0x009b12e0
int C_009b12e0::sub_009b12e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x009b12f0
int sub_009b12f0(int a0) { return *(int*)a0; }

// @baa 0x009b1300
bool sub_009b1300(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_009b1310 {
    void sub_009b1310(undefined4 *);
};

// @baa 0x009b1310
void C_009b1310::sub_009b1310(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_009b1330 { int sub_009b1330(void); };

// @baa 0x009b1330
int C_009b1330::sub_009b1330(void) { return *(int*)((char*)this + 0); }

struct C_009b1340 { int sub_009b1340(void); };

// @baa 0x009b1340
int C_009b1340::sub_009b1340(void) { return *(int*)((char*)this + 0); }

struct C_009b1350 { int sub_009b1350(void); };

// @baa 0x009b1350
int C_009b1350::sub_009b1350(void) { return *(int*)((char*)this + 0); }

struct C_009b1360 { int sub_009b1360(void); };

// @baa 0x009b1360
int C_009b1360::sub_009b1360(void) { return *(int*)((char*)this + 0); }

// @baa 0x009b1370
int sub_009b1370(int a0) { return *(int*)a0; }

// @baa 0x009b1380
undefined4 sub_009b1380(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_009b13c0 {
    void sub_009b13c0(int *);
};

// @baa 0x009b13c0
void C_009b13c0::sub_009b13c0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_009b13d0 { int sub_009b13d0(void); };

// @baa 0x009b13d0
int C_009b13d0::sub_009b13d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_009b1480 { int sub_009b1480(void); };

// @baa 0x009b1480
int C_009b1480::sub_009b1480(void) { return *(int*)((char*)this + 0); }

struct C_009b1490 { int sub_009b1490(void); };

// @baa 0x009b1490
int C_009b1490::sub_009b1490(void) { return *(int*)((char*)this + 0); }

// @baa 0x009b14a0
int sub_009b14a0(int a0) { return *(int*)a0; }

// @baa 0x009b14b0
bool sub_009b14b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_009b14c0 { int a, b; C_009b14c0(const C_009b14c0 &); };

// @baa 0x009b14c0
C_009b14c0::C_009b14c0(const C_009b14c0 &o) : a(o.a), b(o.b) {}

// @baa 0x009b1520
int sub_009b1520(int a0) { return *(int*)a0; }

void sub_005fa690();
// @baa 0x009b1530
void sub_009b1530(void) { sub_005fa690(); }

struct C_009b1560 {
    void sub_009b1560(int *);
};

// @baa 0x009b1560
void C_009b1560::sub_009b1560(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  return;
}

// @baa 0x009b1590
int sub_009b1590(int a0) { return a0; }

struct C_009b15a0 { int sub_009b15a0(void); };

// @baa 0x009b15a0
int C_009b15a0::sub_009b15a0(void) { return *(int*)((char*)this + 0); }

struct C_009b1610 {
    undefined4 sub_009b1610();
};

// @baa 0x009b1610
undefined4 C_009b1610::sub_009b1610(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

struct C_009b1620 {
    int sub_009b1620(int);
};

// @baa 0x009b1620
int C_009b1620::sub_009b1620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b1630 {
    int sub_009b1630(int);
};

// @baa 0x009b1630
int C_009b1630::sub_009b1630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b1640 { int sub_009b1640(void); };

// @baa 0x009b1640
int C_009b1640::sub_009b1640(void) { return *(int*)((char*)this + 20); }

struct C_009b1650 { int sub_009b1650(void); };

// @baa 0x009b1650
int C_009b1650::sub_009b1650(void) { return *(int*)((char*)this + 20); }

struct C_009b1660 { int sub_009b1660(void); };

// @baa 0x009b1660
int C_009b1660::sub_009b1660(void) { return *(int*)((char*)this + 20); }

struct C_009b1670 { int sub_009b1670(void); };

// @baa 0x009b1670
int C_009b1670::sub_009b1670(void) { return *(int*)((char*)this + 20); }

struct C_009b1680 { int sub_009b1680(void); };

// @baa 0x009b1680
int C_009b1680::sub_009b1680(void) { return *(int*)((char*)this + 20); }

struct C_009b1690 { int sub_009b1690(void); };

// @baa 0x009b1690
int C_009b1690::sub_009b1690(void) { return *(int*)((char*)this + 20); }

struct C_009b16a0 { int sub_009b16a0(void); };

// @baa 0x009b16a0
int C_009b16a0::sub_009b16a0(void) { return *(int*)((char*)this + 20); }

struct C_009b16b0 {
    int sub_009b16b0(int);
};

// @baa 0x009b16b0
int C_009b16b0::sub_009b16b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x009b1820
int sub_009b1820(int param_1)
{
  return param_1 * param_1;
}

struct T_009b1830 { int x; };

// @baa 0x009b1830
template T_009b1830& TIndirectArray<T_009b1830>::operator()(INT);

struct C_009b1a70 { int a, b; C_009b1a70(const C_009b1a70 &); };

// @baa 0x009b1a70
C_009b1a70::C_009b1a70(const C_009b1a70 &o) : a(o.a), b(o.b) {}

struct C_009b1a90 { int a, b; C_009b1a90(const C_009b1a90 &); };

// @baa 0x009b1a90
C_009b1a90::C_009b1a90(const C_009b1a90 &o) : a(o.a), b(o.b) {}

// @baa 0x009b1ab0
void sub_009b1ab0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct V_009b1af0 {
    virtual void g(int a0);
};

struct O_009b1af0 { char pad[4]; V_009b1af0* p; void sub_009b1af0(int a0); };

// @baa 0x009b1af0
void O_009b1af0::sub_009b1af0(int a0) { p->g(a0); }

struct Target {
    virtual int v0();
    virtual int v1(int a);
};

struct S_009b1b00 {
    int f0;
    Target *f1;
    int sub_009b1b00(int a);
};

// @baa 0x009b1b00
int S_009b1b00::sub_009b1b00(int a) { return f1->v1(a); }

struct Target_009b1b10 {
    virtual int v0();
    virtual int v1(int a);
    virtual int v2(int a);
};

struct S_009b1b10 {
    int f0;
    Target_009b1b10 *f1;
    int sub_009b1b10(int a);
};

// @baa 0x009b1b10
int S_009b1b10::sub_009b1b10(int a)
{
    return f1->v2(a);
}

struct Target_009b1b20 {
    virtual ~Target_009b1b20() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3(int x, int y, int z) = 0;
};

struct C_009b1b20 {
    char pad[4];
    Target_009b1b20* p; // offset 4

    void sub_009b1b20(int a, int b, int c) {
        p->v3(a, b, c);
    }

    void caller() {
        sub_009b1b20(1, 2, 3);
    }
};

extern C_009b1b20* g_ptr;
// @baa 0x009b1b20
void ref_user() { g_ptr->caller(); }

struct T1 {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
};

struct C_009b1c10 {
    char pad[4];
    T1* field;
    void sub_009b1c10();
};

// @baa 0x009b1c10
void C_009b1c10::sub_009b1c10()
{
    field->v11();
}

struct Inner {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual int f4();
    virtual int f5();
    virtual int f6();
    virtual int f7();
    virtual int f8();
    virtual int f9();
    virtual int f10();
    virtual int f11();
    virtual int f12();
};

struct Outer {
    char pad[4];
    Inner* p;
    void sub_009b1c20();
};

// @baa 0x009b1c20
void Outer::sub_009b1c20()
{
    p->f12();
}

struct V_009b1c30 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void g(int a0);
};

struct O_009b1c30 { char pad[4]; V_009b1c30* p; void sub_009b1c30(int a0); };

// @baa 0x009b1c30
void O_009b1c30::sub_009b1c30(int a0) { p->g(a0); }

struct V_009b1c40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void g(int a0);
};

struct O_009b1c40 { char pad[4]; V_009b1c40* p; void sub_009b1c40(int a0); };

// @baa 0x009b1c40
void O_009b1c40::sub_009b1c40(int a0) { p->g(a0); }

struct V_009b1c50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void g(int a0);
};

struct O_009b1c50 { char pad[4]; V_009b1c50* p; void sub_009b1c50(int a0); };

// @baa 0x009b1c50
void O_009b1c50::sub_009b1c50(int a0) { p->g(a0); }

struct V_009b1c60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void g(int a0);
};

struct O_009b1c60 { char pad[4]; V_009b1c60* p; void sub_009b1c60(int a0); };

// @baa 0x009b1c60
void O_009b1c60::sub_009b1c60(int a0) { p->g(a0); }

struct V_009b1c70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void g(int a0);
};

struct O_009b1c70 { char pad[4]; V_009b1c70* p; void sub_009b1c70(int a0); };

// @baa 0x009b1c70
void O_009b1c70::sub_009b1c70(int a0) { p->g(a0); }

struct V_009b1c80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void g(int a0);
};

struct O_009b1c80 { char pad[4]; V_009b1c80* p; void sub_009b1c80(int a0); };

// @baa 0x009b1c80
void O_009b1c80::sub_009b1c80(int a0) { p->g(a0); }

struct V_009b1c90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void g(int a0);
};

struct O_009b1c90 { char pad[4]; V_009b1c90* p; void sub_009b1c90(int a0); };

// @baa 0x009b1c90
void O_009b1c90::sub_009b1c90(int a0) { p->g(a0); }

struct Target_009b1ca0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
};

struct C_009b1ca0 {
    char pad[4];
    Target_009b1ca0* p4;
    void sub_009b1ca0();
};

// @baa 0x009b1ca0
void C_009b1ca0::sub_009b1ca0() { p4->f20(); }

struct Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
};

struct C_009b1cb0 {
    char pad[4];
    Base* member;
    void sub_009b1cb0() { member->v21(); }
};

// @baa 0x009b1cb0
void force_keep(C_009b1cb0* p) { p->sub_009b1cb0(); }

struct B {
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
};

struct C_009b1cc0 {
    int dummy;
    B *p;
    void sub_009b1cc0();
};

// @baa 0x009b1cc0
void C_009b1cc0::sub_009b1cc0()
{
    p->f22();
}

struct B_009b1cd0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
};

struct C_009b1cd0 {
    int pad;
    B_009b1cd0* p;
    void sub_009b1cd0();
};

// @baa 0x009b1cd0
void C_009b1cd0::sub_009b1cd0() {
    p->f23();
}

struct V_009b1ce0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void g(int a0);
};

struct O_009b1ce0 { char pad[4]; V_009b1ce0* p; void sub_009b1ce0(int a0); };

// @baa 0x009b1ce0
void O_009b1ce0::sub_009b1ce0(int a0) { p->g(a0); }

struct Inner_009b1cf0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void target(); // vtable slot 25, offset 0x64
};

struct Outer_009b1cf0 {
    undefined4 f0;      // offset 0
    Inner_009b1cf0* p;           // offset 4
    void sub_009b1cf0();
};

// @baa 0x009b1cf0
void Outer_009b1cf0::sub_009b1cf0()
{
    p->target();
}

struct V_009b1d00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void g(int a0);
};

struct O_009b1d00 { char pad[4]; V_009b1d00* p; void sub_009b1d00(int a0); };

// @baa 0x009b1d00
void O_009b1d00::sub_009b1d00(int a0) { p->g(a0); }

struct Target_009b1d10 {
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void f(int);
};

struct C_009b1d10 {
    char pad[4];
    Target_009b1d10 *t;
    void sub_009b1d10(int x);
};

// @baa 0x009b1d10
void C_009b1d10::sub_009b1d10(int x)
{
    t->f(x);
}

struct V_009b1d20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void g(int a0);
};

struct O_009b1d20 { char pad[4]; V_009b1d20* p; void sub_009b1d20(int a0); };

// @baa 0x009b1d20
void O_009b1d20::sub_009b1d20(int a0) { p->g(a0); }

struct V_009b1d30 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void g(int a0);
};

struct O_009b1d30 { char pad[4]; V_009b1d30* p; void sub_009b1d30(int a0); };

// @baa 0x009b1d30
void O_009b1d30::sub_009b1d30(int a0) { p->g(a0); }

struct V_009b1d60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void g(int a0);
};

struct O_009b1d60 { char pad[4]; V_009b1d60* p; void sub_009b1d60(int a0); };

// @baa 0x009b1d60
void O_009b1d60::sub_009b1d60(int a0) { p->g(a0); }

struct V_009b1d70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void g(int a0);
};

struct O_009b1d70 { char pad[4]; V_009b1d70* p; void sub_009b1d70(int a0); };

// @baa 0x009b1d70
void O_009b1d70::sub_009b1d70(int a0) { p->g(a0); }

struct V_009b1d80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void g(int a0);
};

struct O_009b1d80 { char pad[4]; V_009b1d80* p; void sub_009b1d80(int a0); };

// @baa 0x009b1d80
void O_009b1d80::sub_009b1d80(int a0) { p->g(a0); }

struct V_009b1d90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void g();
};

struct O_009b1d90 { char pad[4]; V_009b1d90* p; void sub_009b1d90(); };

// @baa 0x009b1d90
void O_009b1d90::sub_009b1d90() { p->g(); }

struct V_009b1da0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void g(int a0);
};

struct O_009b1da0 { char pad[4]; V_009b1da0* p; void sub_009b1da0(int a0); };

// @baa 0x009b1da0
void O_009b1da0::sub_009b1da0(int a0) { p->g(a0); }

struct V_009b1db0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void g(int a0);
};

struct O_009b1db0 { char pad[4]; V_009b1db0* p; void sub_009b1db0(int a0); };

// @baa 0x009b1db0
void O_009b1db0::sub_009b1db0(int a0) { p->g(a0); }

struct V_009b1dc0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void g(int a0);
};

struct O_009b1dc0 { char pad[4]; V_009b1dc0* p; void sub_009b1dc0(int a0); };

// @baa 0x009b1dc0
void O_009b1dc0::sub_009b1dc0(int a0) { p->g(a0); }

struct V_009b1dd0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void g();
};

struct O_009b1dd0 { char pad[4]; V_009b1dd0* p; void sub_009b1dd0(); };

// @baa 0x009b1dd0
void O_009b1dd0::sub_009b1dd0() { p->g(); }

struct V_009b1de0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void g(int a0);
};

struct O_009b1de0 { char pad[4]; V_009b1de0* p; void sub_009b1de0(int a0); };

// @baa 0x009b1de0
void O_009b1de0::sub_009b1de0(int a0) { p->g(a0); }

struct V_009b1df0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void g(int a0);
};

struct O_009b1df0 { char pad[4]; V_009b1df0* p; void sub_009b1df0(int a0); };

// @baa 0x009b1df0
void O_009b1df0::sub_009b1df0(int a0) { p->g(a0); }

struct V_009b1e00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void g(int a0);
};

struct O_009b1e00 { char pad[4]; V_009b1e00* p; void sub_009b1e00(int a0); };

// @baa 0x009b1e00
void O_009b1e00::sub_009b1e00(int a0) { p->g(a0); }

struct V_009b1e10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void g(int a0);
};

struct O_009b1e10 { char pad[4]; V_009b1e10* p; void sub_009b1e10(int a0); };

// @baa 0x009b1e10
void O_009b1e10::sub_009b1e10(int a0) { p->g(a0); }

struct V_009b1e20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void g(int a0);
};

struct O_009b1e20 { char pad[4]; V_009b1e20* p; void sub_009b1e20(int a0); };

// @baa 0x009b1e20
void O_009b1e20::sub_009b1e20(int a0) { p->g(a0); }

struct V_009b1e30 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void g(int a0);
};

struct O_009b1e30 { char pad[4]; V_009b1e30* p; void sub_009b1e30(int a0); };

// @baa 0x009b1e30
void O_009b1e30::sub_009b1e30(int a0) { p->g(a0); }

struct V_009b1e40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void g(int a0);
};

struct O_009b1e40 { char pad[4]; V_009b1e40* p; void sub_009b1e40(int a0); };

// @baa 0x009b1e40
void O_009b1e40::sub_009b1e40(int a0) { p->g(a0); }

struct V_009b1e50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void g(int a0);
};

struct O_009b1e50 { char pad[4]; V_009b1e50* p; void sub_009b1e50(int a0); };

// @baa 0x009b1e50
void O_009b1e50::sub_009b1e50(int a0) { p->g(a0); }

struct V_009b1e60 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void g(int a0);
};

struct O_009b1e60 { char pad[4]; V_009b1e60* p; void sub_009b1e60(int a0); };

// @baa 0x009b1e60
void O_009b1e60::sub_009b1e60(int a0) { p->g(a0); }

struct V_009b1e70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void g(int a0);
};

struct O_009b1e70 { char pad[4]; V_009b1e70* p; void sub_009b1e70(int a0); };

// @baa 0x009b1e70
void O_009b1e70::sub_009b1e70(int a0) { p->g(a0); }

struct V_009b1e80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void g(int a0);
};

struct O_009b1e80 { char pad[4]; V_009b1e80* p; void sub_009b1e80(int a0); };

// @baa 0x009b1e80
void O_009b1e80::sub_009b1e80(int a0) { p->g(a0); }

struct V_009b1e90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void g(int a0);
};

struct O_009b1e90 { char pad[4]; V_009b1e90* p; void sub_009b1e90(int a0); };

// @baa 0x009b1e90
void O_009b1e90::sub_009b1e90(int a0) { p->g(a0); }

struct V_009b1ea0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void g(int a0);
};

struct O_009b1ea0 { char pad[4]; V_009b1ea0* p; void sub_009b1ea0(int a0); };

// @baa 0x009b1ea0
void O_009b1ea0::sub_009b1ea0(int a0) { p->g(a0); }

struct V_009b1eb0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void g(int a0);
};

struct O_009b1eb0 { char pad[4]; V_009b1eb0* p; void sub_009b1eb0(int a0); };

// @baa 0x009b1eb0
void O_009b1eb0::sub_009b1eb0(int a0) { p->g(a0); }

struct V_009b1ec0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void g(int a0);
};

struct O_009b1ec0 { char pad[4]; V_009b1ec0* p; void sub_009b1ec0(int a0); };

// @baa 0x009b1ec0
void O_009b1ec0::sub_009b1ec0(int a0) { p->g(a0); }

struct V_009b1ed0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void g(int a0);
};

struct O_009b1ed0 { char pad[4]; V_009b1ed0* p; void sub_009b1ed0(int a0); };

// @baa 0x009b1ed0
void O_009b1ed0::sub_009b1ed0(int a0) { p->g(a0); }

struct V_009b1ee0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void g();
};

struct O_009b1ee0 { char pad[4]; V_009b1ee0* p; void sub_009b1ee0(); };

// @baa 0x009b1ee0
void O_009b1ee0::sub_009b1ee0() { p->g(); }

struct V_009b1ef0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void g(int a0);
};

struct O_009b1ef0 { char pad[4]; V_009b1ef0* p; void sub_009b1ef0(int a0); };

// @baa 0x009b1ef0
void O_009b1ef0::sub_009b1ef0(int a0) { p->g(a0); }

struct V_009b1f00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void g();
};

struct O_009b1f00 { char pad[4]; V_009b1f00* p; void sub_009b1f00(); };

// @baa 0x009b1f00
void O_009b1f00::sub_009b1f00() { p->g(); }

struct C_009b2430 {
    void sub_009b2430();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01f99c90;
// @baa 0x009b2430
void C_009b2430::sub_009b2430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f99c90);
  if (param_1[1] != 0) {
    sub_006311e0("!IsInitialized()","Engine/Inc\\UnDecalRenderData.h",0xf6,&g_01e3f3dc);
  }
  return;
}

struct C_009b2460 {
    undefined4 * sub_009b2460(byte);
};

// @baa 0x009b2460
undefined4 * C_009b2460::sub_009b2460(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f99c90);
  if (param_1[1] != 0) {
    sub_006311e0("!IsInitialized()","Engine/Inc\\UnDecalRenderData.h",0xf6,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00656490();
// @baa 0x009b24e0
void sub_009b24e0(void) { sub_00656490(); }

void sub_00656520();
// @baa 0x009b2520
void sub_009b2520(void) { sub_00656520(); }

int sub_009b16e0(...);
// @baa 0x009b2530
void sub_009b2530(undefined4 param_1)
{
  sub_009b16e0(param_1,0);
  return;
}

struct C_009b2c20 {
    undefined4 sub_009b2c20(byte);
};

int sub_009b2b90(void);
// @baa 0x009b2c20
undefined4 C_009b2c20::sub_009b2c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009b2b90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009b3bd0 {
    int sub_009b3bd0(int);
};

// @baa 0x009b3bd0
int C_009b3bd0::sub_009b3bd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009b3be0 {
    int sub_009b3be0(int);
};

// @baa 0x009b3be0
int C_009b3be0::sub_009b3be0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009b3bf0
void __stdcall sub_009b3bf0(int a0, int a1) {  }

struct C_009b3c00 {
    int sub_009b3c00(int);
};

// @baa 0x009b3c00
int C_009b3c00::sub_009b3c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009b3c10
void __stdcall sub_009b3c10(int a0, int a1) {  }

struct C_009b3c20 {
    int sub_009b3c20(int);
};

// @baa 0x009b3c20
int C_009b3c20::sub_009b3c20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_009b3c30 {
    int sub_009b3c30(int);
};

// @baa 0x009b3c30
int C_009b3c30::sub_009b3c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_009b3ca0 {
    int sub_009b3ca0(int);
};

// @baa 0x009b3ca0
int C_009b3ca0::sub_009b3ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x009b3cb0
void __stdcall sub_009b3cb0(int a0, int a1) {  }

struct C_009b3cc0 {
    int sub_009b3cc0(int);
};

// @baa 0x009b3cc0
int C_009b3cc0::sub_009b3cc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xe0 + *param_1;
}

// @baa 0x009b3d20
void __stdcall sub_009b3d20(void* a1, void* a2) {}

struct C_009b3d30 { int sub_009b3d30(void); };

// @baa 0x009b3d30
int C_009b3d30::sub_009b3d30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_009b3d40 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009b3d40(INT Index);
};

// @baa 0x009b3d40
DWORD* S_009b3d40::sub_009b3d40(INT Index)
{
    return &Items(Index);
}

struct C_009b3d90 { int sub_009b3d90(void); };

// @baa 0x009b3d90
int C_009b3d90::sub_009b3d90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_009b3e60 { int sub_009b3e60(void); };

// @baa 0x009b3e60
int C_009b3e60::sub_009b3e60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_009b3e70 {
    int sub_009b3e70();
};

// @baa 0x009b3e70
int C_009b3e70::sub_009b3e70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b3ef0 {
    int sub_009b3ef0(int);
};

// @baa 0x009b3ef0
int C_009b3ef0::sub_009b3ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x009b3f30
void sub_009b3f30(undefined4 param_1)
{
  sub_009b16e0(param_1,0);
  return;
}

struct C_009b3f40 {
    int sub_009b3f40(int);
};

// @baa 0x009b3f40
int C_009b3f40::sub_009b3f40(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_009b3f50 {
    int sub_009b3f50(int);
};

// @baa 0x009b3f50
int C_009b3f50::sub_009b3f50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b3f60 {
    int sub_009b3f60(int);
};

// @baa 0x009b3f60
int C_009b3f60::sub_009b3f60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b3f70 {
    int sub_009b3f70(int);
};

// @baa 0x009b3f70
int C_009b3f70::sub_009b3f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b3f80 {
    int sub_009b3f80();
};

// @baa 0x009b3f80
int C_009b3f80::sub_009b3f80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b3fa0 {
    int sub_009b3fa0();
};

// @baa 0x009b3fa0
int C_009b3fa0::sub_009b3fa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b3fc0 {
    int sub_009b3fc0();
};

// @baa 0x009b3fc0
int C_009b3fc0::sub_009b3fc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b3fe0 {
    int sub_009b3fe0(int);
};

// @baa 0x009b3fe0
int C_009b3fe0::sub_009b3fe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_009b3ff0 {
    int sub_009b3ff0(int);
};

// @baa 0x009b3ff0
int C_009b3ff0::sub_009b3ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b4000 {
    int sub_009b4000();
};

// @baa 0x009b4000
int C_009b4000::sub_009b4000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b4020 {
    int sub_009b4020();
};

// @baa 0x009b4020
int C_009b4020::sub_009b4020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b4040 {
    int sub_009b4040();
};

// @baa 0x009b4040
int C_009b4040::sub_009b4040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b4060 {
    int sub_009b4060();
};

// @baa 0x009b4060
int C_009b4060::sub_009b4060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_009b4070 {
    int sub_009b4070();
};

// @baa 0x009b4070
int C_009b4070::sub_009b4070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009b4090 {
    int sub_009b4090();
};

// @baa 0x009b4090
int C_009b4090::sub_009b4090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x009b4150
void sub_009b4150(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x009b44a0
void sub_009b44a0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x009b44c0
void sub_009b44c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x009b44e0
void sub_009b44e0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct FNameZero
{
    INT Index;
    INT Number;
    FNameZero() : Index(0), Number(0) {}
    FNameZero(const FNameZero& O) : Index(O.Index), Number(O.Number) {}
};

struct FBatch
{
    char pad[0x1b0];
    TArray<INT> Items;      // Data 0x1b0, Num 0x1b4, Max 0x1b8
    INT  sub_00759640(INT);
    INT  sub_0076a230(INT, INT, INT);
    void sub_007fbe90();
};

struct CWorld
{
    char pad[0x34];
    INT  f34;
    TArray<FBatch*> Levels;
    char pad2[8];
    FBatch* CurrentLevel;
    char pad3[0xf8];
    FBatch* Batch1;
    FBatch* Batch2;

    void sub_009b5990(INT);
};

extern undefined4 g_026b53c8;
extern char g_025d67c0[];
INT  sub_007f1130(const wchar_t*);
INT  sub_007d7430(void);
INT  sub_009b4170(INT, INT, FNameZero, INT, INT, INT, INT, INT);
INT  sub_006311e0(const char*, const char*, INT, ...);
__forceinline INT BatchClass()
{
    if (g_026b53c8 == 0)
    {
        g_026b53c8 = sub_007f1130(L"Engine");
        sub_007d7430();
    }
    return g_026b53c8;
}

// @baa 0x009b5990
void CWorld::sub_009b5990(INT param)
{
    if (Batch1 == 0)
    {
        Batch1 = (FBatch*)sub_009b4170(BatchClass(), -1, FNameZero(), 0, 0, 0, 0, 0);
    }
    if (Batch1->Items.Num() > 0)
    {
        Batch1->sub_00759640(0);
        Batch1->sub_0076a230(f34, 0, (INT)g_025d67c0);
    }
    if (Batch2 == 0)
    {
        Batch2 = (FBatch*)sub_009b4170(BatchClass(), -1, FNameZero(), 0, 0, 0, 0, 0);
    }
    if (Batch2->Items.Num() > 0)
    {
        Batch2->sub_00759640(0);
        Batch2->sub_0076a230(f34, 0, (INT)g_025d67c0);
    }
    if (param != 0)
    {
        if (CurrentLevel == 0)
        {
            sub_006311e0("CurrentLevel",
                         "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp",
                         701, L"\0");
        }
        CurrentLevel->sub_007fbe90();
    }
    else
    {
        for (INT i = 0; i < Levels.Num(); i++)
            Levels(i)->sub_007fbe90();
    }
}

struct T_009b63f0;
// @baa 0x009b63f0
template INT TArray<T_009b63f0*>::RemoveItem(T_009b63f0* const&);

struct T_009b64b0;
// @baa 0x009b64b0
template INT TArray<T_009b64b0*>::RemoveItem(T_009b64b0* const&);

struct T_009b6c40;
// @baa 0x009b6c40
template INT TArray<T_009b6c40*>::RemoveItem(T_009b6c40* const&);

struct C_009b7c70 {
    undefined4 sub_009b7c70(byte);
    int sub_0040fcc0();
};

// @baa 0x009b7c70
undefined4 C_009b7c70::sub_009b7c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_009b7c70 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009b7ca0 {
    undefined4 * sub_009b7ca0(undefined4 *);
    int sub_009b75e0(int);
};

// @baa 0x009b7ca0
undefined4 * C_009b7ca0::sub_009b7ca0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_009b7ca0 *)(((char *)this + 4)))->sub_009b75e0((int)(param_2 + 1));
  return param_1;
}

struct C_009b7cc0 {
    int f0;
    int f4;
    int f8;
    int fc;
    C_009b7cc0* sub_009b7cc0(int a);
};

// @baa 0x009b7cc0
C_009b7cc0* C_009b7cc0::sub_009b7cc0(int a)
{
    f4 = 0;
    f8 = 0;
    fc = 0;
    return this;
}

struct M_009b7d90 { void sub_00666150(); };

struct C_009b7d90 { char pad[4]; M_009b7d90 m; void sub_009b7d90(); };

// @baa 0x009b7d90
void C_009b7d90::sub_009b7d90() { m.sub_00666150(); }

struct C_009b7da0 {
    int f0;
    int f4;
    int f8;
    int fc;
    C_009b7da0* sub_009b7da0(int a);
};

// @baa 0x009b7da0
C_009b7da0* C_009b7da0::sub_009b7da0(int a)
{
    f4 = 0;
    f8 = 0;
    fc = 0;
    return this;
}

struct M_009b8030 { void sub_00666150(); };

struct C_009b8030 { char pad[4]; M_009b8030 m; void sub_009b8030(); };

// @baa 0x009b8030
void C_009b8030::sub_009b8030() { m.sub_00666150(); }

struct M_009c2e70 { void sub_007c6bc0(); };

struct C_009c2e70 { char pad[4]; M_009c2e70 m; void sub_009c2e70(); };

// @baa 0x009c2e70
void C_009c2e70::sub_009c2e70() { m.sub_007c6bc0(); }

struct C_view_009c2e80 {
    int sub_009bd1f0(int, int);
};

// @baa 0x009c2e80
int UState::sub_009c2e80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_009c2e80 *)(this))->sub_009bd1f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_009c2f80 {
    int sub_009bd2b0(int, int);
};

// @baa 0x009c2f80
int UState::sub_009c2f80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_009c2f80 *)(this))->sub_009bd2b0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_009c3040 {
    void sub_009c3040();
    int sub_009c0de0(int);
};

// @baa 0x009c3040
void C_009c3040::sub_009c3040(void)
{
    int param_1 = (int)this;
  ((C_009c3040 *)((*(char **)((char *)this + 0x10))))->sub_009c0de0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_009c3060 {
    void sub_009c3060();
    int sub_009c0f50(int);
};

// @baa 0x009c3060
void C_009c3060::sub_009c3060(void)
{
    int param_1 = (int)this;
  ((C_009c3060 *)((*(char **)((char *)this + 0x10))))->sub_009c0f50(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_009c3080 {
    void sub_009c3080();
    int sub_009c10c0(int);
};

// @baa 0x009c3080
void C_009c3080::sub_009c3080(void)
{
    int param_1 = (int)this;
  ((C_009c3080 *)((*(char **)((char *)this + 0x10))))->sub_009c10c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_009c30a0 {
    void sub_009c30a0();
    int sub_009c12a0(int);
};

// @baa 0x009c30a0
void C_009c30a0::sub_009c30a0(void)
{
    int param_1 = (int)this;
  ((C_009c30a0 *)((*(char **)((char *)this + 0x10))))->sub_009c12a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
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

struct TConstSetBitIterator_009c30c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c30c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c30c0& operator++();
};

TConstSetBitIterator_009c30c0::TConstSetBitIterator_009c30c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c30c0
TConstSetBitIterator_009c30c0& TConstSetBitIterator_009c30c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c3110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c3110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c3110& operator++();
};

TConstSetBitIterator_009c3110::TConstSetBitIterator_009c3110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c3110
TConstSetBitIterator_009c3110& TConstSetBitIterator_009c3110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c3160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c3160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c3160& operator++();
};

TConstSetBitIterator_009c3160::TConstSetBitIterator_009c3160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c3160
TConstSetBitIterator_009c3160& TConstSetBitIterator_009c3160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c31b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c31b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c31b0& operator++();
};

TConstSetBitIterator_009c31b0::TConstSetBitIterator_009c31b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c31b0
TConstSetBitIterator_009c31b0& TConstSetBitIterator_009c31b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c3200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c3200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c3200& operator++();
};

TConstSetBitIterator_009c3200::TConstSetBitIterator_009c3200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c3200
TConstSetBitIterator_009c3200& TConstSetBitIterator_009c3200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c3250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c3250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c3250& operator++();
};

TConstSetBitIterator_009c3250::TConstSetBitIterator_009c3250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c3250
TConstSetBitIterator_009c3250& TConstSetBitIterator_009c3250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c32a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c32a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c32a0& operator++();
};

TConstSetBitIterator_009c32a0::TConstSetBitIterator_009c32a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c32a0
TConstSetBitIterator_009c32a0& TConstSetBitIterator_009c32a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009c32f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009c32f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009c32f0& operator++();
};

TConstSetBitIterator_009c32f0::TConstSetBitIterator_009c32f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009c32f0
TConstSetBitIterator_009c32f0& TConstSetBitIterator_009c32f0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x009c3340
// @baa 0x009c3360
IMPLEMENT_CLASS_AT(ULevelStreamingDistance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5470);

// @baa 0x009c3380
IMPLEMENT_CLASS_AT(ULevelStreamingKismet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5469);

// @baa 0x009c33a0
IMPLEMENT_CLASS_AT(ULevelStreamingPersistent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnWorld.cpp", 5471);

// @baa 0x009c3e00
// @baa 0x009c3ec0
// @baa 0x009c3f80
// @baa 0x009c4040
void sub_009c2fc0();
// @baa 0x009c4100
void sub_009c4100(void) { sub_009c2fc0(); }

// @baa 0x009c5ad0
// @baa 0x009c5be0
bool ULevelStreamingKismet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009c5c20
// @baa 0x009c5d30
bool ULevelStreamingDistance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009c5d70
// @baa 0x009c5e80
bool ULevelStreamingPersistent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_009c6760 {
    int sub_009c6760();
};

int sub_009c14d0(void);
// @baa 0x009c6760
int C_009c6760::sub_009c6760(void)
{
    int param_1 = (int)this;

  sub_009c14d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c6780 {
    int sub_009c6780();
};

int sub_009c1530(void);
// @baa 0x009c6780
int C_009c6780::sub_009c6780(void)
{
    int param_1 = (int)this;

  sub_009c1530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c67a0 {
    int sub_009c67a0();
};

int sub_009c1590(void);
// @baa 0x009c67a0
int C_009c67a0::sub_009c67a0(void)
{
    int param_1 = (int)this;

  sub_009c1590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x009c68d0
int UWorld::sub_009c68d0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x30;
}

int sub_005c7a70(...);
int sub_009c68e0(void);
// @baa 0x009c69f0
undefined4 UWorld::sub_009c69f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009c68e0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x278);
  }
  return param_1;
}

struct C_view_009c7550 {
    int sub_009c6550(int, int);
};

// @baa 0x009c7550
int UState::sub_009c7550(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_009c7550 *)(this))->sub_009c6550(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_009c7570 {
    int sub_009c65c0(int, int);
};

// @baa 0x009c7570
int UState::sub_009c7570(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_009c7570 *)(this))->sub_009c65c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_009c7590 {
    int sub_009c6640(int, int);
};

// @baa 0x009c7590
int UState::sub_009c7590(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_009c7590 *)(this))->sub_009c6640(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_009c75b0 {
    int sub_009c66c0(int, int);
};

// @baa 0x009c75b0
int UState::sub_009c75b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_009c75b0 *)(this))->sub_009c66c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_009c75d0 {
    int sub_009c75d0();
};

// @baa 0x009c75d0
int C_009c75d0::sub_009c75d0(void)
{
    int param_1 = (int)this;

  sub_009c14d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c75f0 {
    int sub_009c75f0();
};

// @baa 0x009c75f0
int C_009c75f0::sub_009c75f0(void)
{
    int param_1 = (int)this;

  sub_009c1530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009c7610 {
    int sub_009c7610();
};

// @baa 0x009c7610
int C_009c7610::sub_009c7610(void)
{
    int param_1 = (int)this;

  sub_009c1590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x009c7630
void sub_009c7030();
// @baa 0x009c76d0
void sub_009c76d0(void) { sub_009c7030(); }

void sub_009c70a0();
// @baa 0x009c76e0
void sub_009c76e0(void) { sub_009c70a0(); }

// @baa 0x009c7e30
void sub_009c7110();
// @baa 0x009c7ef0
void sub_009c7ef0(void) { sub_009c7110(); }

// @baa 0x009cb9c0
void sub_009cb9c0(void) { sub_009c7110(); }
