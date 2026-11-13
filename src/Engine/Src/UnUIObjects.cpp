// UnUIObjects.cpp (part 1 of 17): 552 functions
// Placed here by: neighbours 462, class 55, callers 24, file 11.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00d90350(void);
int sub_00d91710(...);
extern undefined4 g_026c5c20;
// @baa 0x00ca1e00
int sub_00ca1e00(void)
{
  if (g_026c5c20 == 0) {
    g_026c5c20 = sub_00d91710(L"Engine");
    sub_00d90350();
  }
  return g_026c5c20;
}

int sub_00da7f00(void);
int sub_00db9f70(...);
extern undefined4 g_026c5cc4;
// @baa 0x00ca4fd0
int sub_00ca4fd0(void)
{
  if (g_026c5cc4 == 0) {
    g_026c5cc4 = sub_00db9f70(L"Engine");
    sub_00da7f00();
  }
  return g_026c5cc4;
}

struct C { float sub_00ca5020(void); };

// @baa 0x00ca5020
float C::sub_00ca5020(void) { return *(float*)((char*)this + 76); }

int sub_00dba030(...);
int sub_00dbb810(void);
extern undefined4 g_026c5cc8;
// @baa 0x00ca6270
int sub_00ca6270(void)
{
  if (g_026c5cc8 == 0) {
    g_026c5cc8 = sub_00dba030(L"Engine");
    sub_00dbb810();
  }
  return g_026c5cc8;
}

int sub_00dba330(...);
int sub_00dbd0e0(void);
extern undefined4 g_026c5cd8;
// @baa 0x00ca62a0
int sub_00ca62a0(void)
{
  if (g_026c5cd8 == 0) {
    g_026c5cd8 = sub_00dba330(L"Engine");
    sub_00dbd0e0();
  }
  return g_026c5cd8;
}

int sub_00dba0f0(...);
int sub_00dbcf90(void);
extern undefined4 g_026c5ccc;
// @baa 0x00ca62d0
int sub_00ca62d0(void)
{
  if (g_026c5ccc == 0) {
    g_026c5ccc = sub_00dba0f0(L"Engine");
    sub_00dbcf90();
  }
  return g_026c5ccc;
}

int sub_00dba1b0(...);
int sub_00dbdf40(void);
extern undefined4 g_026c5cd0;
// @baa 0x00ca6300
int sub_00ca6300(void)
{
  if (g_026c5cd0 == 0) {
    g_026c5cd0 = sub_00dba1b0(L"Engine");
    sub_00dbdf40();
  }
  return g_026c5cd0;
}

int sub_00dba270(...);
int sub_00dc0a40(void);
extern undefined4 g_026c5cd4;
// @baa 0x00ca6330
int sub_00ca6330(void)
{
  if (g_026c5cd4 == 0) {
    g_026c5cd4 = sub_00dba270(L"Engine");
    sub_00dc0a40();
  }
  return g_026c5cd4;
}

int sub_00d8fbe0(void);
int sub_00d9bde0(...);
extern undefined4 g_026c5bb0;
// @baa 0x00ca6360
int sub_00ca6360(void)
{
  if (g_026c5bb0 == 0) {
    g_026c5bb0 = sub_00d9bde0(L"Engine");
    sub_00d8fbe0();
  }
  return g_026c5bb0;
}

int sub_00d9bea0(...);
int sub_00d9e940(void);
extern undefined4 g_026c5bb4;
// @baa 0x00ca6390
int sub_00ca6390(void)
{
  if (g_026c5bb4 == 0) {
    g_026c5bb4 = sub_00d9bea0(L"Engine");
    sub_00d9e940();
  }
  return g_026c5bb4;
}

int sub_00d9bf60(...);
int sub_00d9ea90(void);
extern undefined4 g_026c5bb8;
// @baa 0x00ca63c0
int sub_00ca63c0(void)
{
  if (g_026c5bb8 == 0) {
    g_026c5bb8 = sub_00d9bf60(L"Engine");
    sub_00d9ea90();
  }
  return g_026c5bb8;
}

int sub_00db9eb0(...);
int sub_00dbce40(void);
extern undefined4 g_026c5cb8;
// @baa 0x00ca63f0
int sub_00ca63f0(void)
{
  if (g_026c5cb8 == 0) {
    g_026c5cb8 = sub_00db9eb0(L"Engine");
    sub_00dbce40();
  }
  return g_026c5cb8;
}

int sub_00dc9b50(void);
int sub_00dd1b90(...);
extern undefined4 g_026c5d70;
// @baa 0x00ca6420
int sub_00ca6420(void)
{
  if (g_026c5d70 == 0) {
    g_026c5d70 = sub_00dd1b90(L"Engine");
    sub_00dc9b50();
  }
  return g_026c5d70;
}

int sub_00dc9cb0(void);
int sub_00dd1c50(...);
extern undefined4 g_026c5d74;
// @baa 0x00ca6450
int sub_00ca6450(void)
{
  if (g_026c5d74 == 0) {
    g_026c5d74 = sub_00dd1c50(L"Engine");
    sub_00dc9cb0();
  }
  return g_026c5d74;
}

int sub_00d8fd70(void);
int sub_00d9c020(...);
extern undefined4 g_026c5bbc;
// @baa 0x00ca6480
int sub_00ca6480(void)
{
  if (g_026c5bbc == 0) {
    g_026c5bbc = sub_00d9c020(L"Engine");
    sub_00d8fd70();
  }
  return g_026c5bbc;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d961c0 { void* Data; int Num; int Max; void sub_00d961c0(); };

// @baa 0x00d961c0
void C_00d961c0::sub_00d961c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d96220 { void* Data; int Num; int Max; void sub_00d96220(); };

// @baa 0x00d96220
void C_00d96220::sub_00d96220() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d96280 { void* Data; int Num; int Max; void sub_00d96280(); };

// @baa 0x00d96280
void C_00d96280::sub_00d96280() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d98ea0
IMPLEMENT_CLASS_AT(UUIScreenObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 20);

// @baa 0x00d98f50
UUIScreenObject* UUIScreenObject::GetParent() { return 0; }

// @baa 0x00d98f60
int UUIScreenObject::vf_15c(void) { return 1; }

// @baa 0x00d98f70
void __stdcall sub_00d98f70(int a0, int a1, int a2, int a3) {  }

// @baa 0x00d98f80
int UUIScreenObject::vf_198(void) { return 1; }

// @baa 0x00d98f90
void UUIScreenObject::vf_1b4(int a0) {  }

// @baa 0x00d99170
int sub_005c7a20(void);
extern undefined * g_020c2170;
// @baa 0x00d991a0
undefined4 * UObject::sub_00d991a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c2170);
  return param_1;
}

// @baa 0x00d99270
void UUIObject::vf_208(int a0) {  }

// @baa 0x00d99280
void UUIObject::vf_20c(int a0) {  }

// @baa 0x00d99290
void UUIObject::vf_214(void) {  }

// @baa 0x00d992a0
int UUIObject::vf_21c(int a0) { return 1; }

// @baa 0x00d992b0
UUIScreenObject* UUIObject::GetParent()
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x138);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x13c);
  }
  return (UUIScreenObject*)iVar1;
}

// @baa 0x00d992f0
ULocalPlayer* UUIObject::GetPlayerOwner() { return *(ULocalPlayer**)((char*)this + 316); }

// @baa 0x00d99320
void UUIObject::vf_22c(int a0) {  }

int sub_005c7a70(...);
int sub_00d991c0(void);
// @baa 0x00d99350
undefined4 UUIObject::sub_00d99350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d991c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x370);
  }
  return param_1;
}

int sub_00d99380(void);
extern undefined * g_020c2970;
// @baa 0x00d99460
undefined4 * UUIObject::sub_00d99460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c2970);
  return param_1;
}

// @baa 0x00d99480
IMPLEMENT_CLASS_AT(UUIContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 28);

extern undefined * g_020c2bb8;
// @baa 0x00d994b0
undefined4 * UUIObject::sub_00d994b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c2bb8);
  return param_1;
}

// @baa 0x00d99530
IMPLEMENT_CLASS_AT(UUICalloutButtonPanel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 29);

extern undefined * g_020c2e00;
// @baa 0x00d99560
undefined4 * UUIObject::sub_00d99560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c2e00);
  return param_1;
}

// @baa 0x00d995e0
IMPLEMENT_CLASS_AT(UUITabPage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 36);

extern undefined * g_020c3048;
// @baa 0x00d99610
undefined4 * UUIObject::sub_00d99610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c3048);
  return param_1;
}

// @baa 0x00da6570
int sub_00da6570(int a0, int a1) { return a1; }

extern undefined * g_020c9260;
// @baa 0x00da6580
undefined4 * UObject::sub_00da6580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c9260);
  return param_1;
}

// @baa 0x00da65a0
IMPLEMENT_CLASS_AT(UCustomPropertyItemHandler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 56);

// @baa 0x00da6600
struct C_00da6670 {
    unsigned sub_00da6670();
};

// @baa 0x00da6670
unsigned C_00da6670::sub_00da6670(void)
{
    unsigned v = *(unsigned char *)(this + 0x18);
    return v;
}

struct C_00da6680 {
    void sub_00da6680(byte);
};

// @baa 0x00da6680
void C_00da6680::sub_00da6680(byte param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_2 + 0x14 + param_1) = 0;
  return;
}

struct C_00da6690 {
    void sub_00da6690(byte);
};

// @baa 0x00da6690
void C_00da6690::sub_00da6690(byte param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_2 + 0x14 + param_1) = 1;
  return;
}

struct C_00da66a0 {
    void sub_00da66a0();
};

// @baa 0x00da66a0
void C_00da66a0::sub_00da66a0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x17) = 1;
  return;
}

struct C_00da66b0 {
    undefined4 sub_00da66b0(int, int, int);
};

// @baa 0x00da66b0
undefined4 C_00da66b0::sub_00da66b0(int param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;

  if (((param_1[param_2 + 1] != 0) && ((param_1[param_2 + 1] != *param_1 || (param_4 == 0)))) &&
     ((param_3 == 0 || (*(byte *)(param_2 + 0x2c + (int)param_1) < 4)))) {
    return 1;
  }
  return 0;
}

struct C_00da66f0 {
    void sub_00da66f0(byte, undefined1);
};

// @baa 0x00da66f0
void C_00da66f0::sub_00da66f0(byte param_2, undefined1 param_3)
{
    int param_1 = (int)this;
  *(undefined1 *)(param_2 + 0x30 + param_1) = param_3;
  return;
}

struct C_00da6700 {
    uint sub_00da6700();
};

// @baa 0x00da6700
uint C_00da6700::sub_00da6700(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 0x28) & 1;
}

struct C_00da6710 {
    uint sub_00da6710();
};

// @baa 0x00da6710
uint C_00da6710::sub_00da6710(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x28) >> 1 & 1;
}

struct C_00da6720 {
    undefined4 sub_00da6720(int *);
};

// @baa 0x00da6720
undefined4 C_00da6720::sub_00da6720(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00da6780 { char* sub_00da6780(void); };

// @baa 0x00da6780
char* C_00da6780::sub_00da6780(void) { return (char*)this + 44; }

struct C_00da6790 {
    bool sub_00da6790();
};

// @baa 0x00da6790
bool C_00da6790::sub_00da6790(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) != 0;
}

struct C_00da67a0 { int a, b, c; C_00da67a0(); };

// @baa 0x00da67a0
C_00da67a0::C_00da67a0() : a(0), b(0), c(0) {}

struct C_00da6850 { int sub_00da6850(void); };

// @baa 0x00da6850
int C_00da6850::sub_00da6850(void) { return *(int*)((char*)this + 28); }

struct C_00da6860 { int sub_00da6860(void); };

// @baa 0x00da6860
int C_00da6860::sub_00da6860(void) { return *(int*)((char*)this + 28); }

// @baa 0x00da6870
int sub_00da6870(int a0, int a1) { return a1; }

extern undefined * g_020c9370;
// @baa 0x00da6880
undefined4 * UObject::sub_00da6880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c9370);
  return param_1;
}

// @baa 0x00da68a0
IMPLEMENT_CLASS_AT(UUIEventContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 91);

// @baa 0x00da6900
extern undefined * g_020c9480;
// @baa 0x00da6a10
undefined4 * UObject::sub_00da6a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c9480);
  return param_1;
}

// @baa 0x00da6a30
IMPLEMENT_CLASS_AT(UUIListElementCellProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUILists.cpp", 19);

// @baa 0x00da6a90
// @baa 0x00da6ab0
undefined4 sub_00da6ab0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020c9590;
// @baa 0x00da6ac0
undefined4 * UObject::sub_00da6ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c9590);
  return param_1;
}

// @baa 0x00da6ae0
IMPLEMENT_CLASS_AT(UUIListElementProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUILists.cpp", 18);

// @baa 0x00da6b40
// @baa 0x00da6b60
undefined4 sub_00da6b60(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020c96a0;
// @baa 0x00da6b70
undefined4 * UObject::sub_00da6b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c96a0);
  return param_1;
}

// @baa 0x00da6b90
IMPLEMENT_CLASS_AT(UUIStringRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 54);

// @baa 0x00da6bf0
// @baa 0x00da6c10
undefined4 sub_00da6c10(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020c97b0;
// @baa 0x00da6c20
undefined4 * UObject::sub_00da6c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c97b0);
  return param_1;
}

// @baa 0x00da6c40
IMPLEMENT_CLASS_AT(UUIStyleResolver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 55);

// @baa 0x00da6ca0
// @baa 0x00da6cc0
undefined4 sub_00da6cc0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020c98c0;
// @baa 0x00da6cd0
undefined4 * UObject::sub_00da6cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c98c0);
  return param_1;
}

// @baa 0x00da6cf0
IMPLEMENT_CLASS_AT(UUITickableObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 57);

// @baa 0x00da6d50
struct C_00da6d70 {
    DWORD sub_00da6d70(DWORD a1);
};

// @baa 0x00da6d70
DWORD C_00da6d70::sub_00da6d70(DWORD a1)
{
    return (DWORD)this;
}

struct C_00da6d80 { C_00da6d80* sub_00da6d80(int a0); };

// @baa 0x00da6d80
C_00da6d80* C_00da6d80::sub_00da6d80(int a0) { return this; }

struct C_00da6d90 { C_00da6d90* sub_00da6d90(int a0); };

// @baa 0x00da6d90
C_00da6d90* C_00da6d90::sub_00da6d90(int a0) { return this; }

struct C_00da6da0 { C_00da6da0* sub_00da6da0(int a0); };

// @baa 0x00da6da0
C_00da6da0* C_00da6da0::sub_00da6da0(int a0) { return this; }

struct C_00da6db0 { C_00da6db0* sub_00da6db0(int a0); };

// @baa 0x00da6db0
C_00da6db0* C_00da6db0::sub_00da6db0(int a0) { return this; }

extern "C" int g_026c5050;
extern "C" int g_026c5054;
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
    void sub_00da6e90();
};

// @baa 0x00da6e90
void UObjectThunk::sub_00da6e90()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5050, g_026c5054, 0), 0, 0);
}

// @baa 0x00da7170
int sub_00da7170(int a0, int a1) { return a1; }

struct C_00da7180 {
    uint sub_00da7180();
};

// @baa 0x00da7180
uint C_00da7180::sub_00da7180(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x50) >> 1 & 1;
}

struct C_00da7190 { C_00da7190* sub_00da7190(int a0); };

// @baa 0x00da7190
C_00da7190* C_00da7190::sub_00da7190(int a0) { return this; }

struct C_00da71a0 { C_00da71a0* sub_00da71a0(int a0); };

// @baa 0x00da71a0
C_00da71a0* C_00da71a0::sub_00da71a0(int a0) { return this; }

struct C_00da71b0 { C_00da71b0* sub_00da71b0(int a0); };

// @baa 0x00da71b0
C_00da71b0* C_00da71b0::sub_00da71b0(int a0) { return this; }

struct C_00da71c0 { C_00da71c0* sub_00da71c0(int a0); };

// @baa 0x00da71c0
C_00da71c0* C_00da71c0::sub_00da71c0(int a0) { return this; }

// @baa 0x00da72b0
int sub_00da72b0(int a0, int a1) { return a1; }

// @baa 0x00da72c0
int sub_00da72c0(int a0, int a1) { return a1; }

// @baa 0x00da72d0
int sub_00da72d0(int a0, int a1) { return a1; }

// @baa 0x00da72e0
int sub_00da72e0(int a0, int a1) { return a1; }

// @baa 0x00da72f0
int sub_00da72f0(int a0, int a1) { return a1; }

extern char g_020b5210[];
// @baa 0x00da7300
int sub_00da7300(void) { return (int)g_020b5210; }

// @baa 0x00da7310
int sub_00da7310(int a0, int a1) { return a1; }

struct C_00da7320 { C_00da7320* sub_00da7320(int a0); };

// @baa 0x00da7320
C_00da7320* C_00da7320::sub_00da7320(int a0) { return this; }

struct C_00da7330 { C_00da7330* sub_00da7330(int a0); };

// @baa 0x00da7330
C_00da7330* C_00da7330::sub_00da7330(int a0) { return this; }

struct C_00da7340 { C_00da7340* sub_00da7340(int a0); };

// @baa 0x00da7340
C_00da7340* C_00da7340::sub_00da7340(int a0) { return this; }

struct C_00da7350 { C_00da7350* sub_00da7350(int a0); };

// @baa 0x00da7350
C_00da7350* C_00da7350::sub_00da7350(int a0) { return this; }

struct C_00da7370 { C_00da7370* sub_00da7370(int a0); };

// @baa 0x00da7370
C_00da7370* C_00da7370::sub_00da7370(int a0) { return this; }

extern "C" int g_026c5158;
extern "C" int g_026c515c;
struct UObjectThunk_00da7380 {
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
    void sub_00da7380();
};

// @baa 0x00da7380
void UObjectThunk_00da7380::sub_00da7380()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5158, g_026c515c, 0), 0, 0);
}

extern "C" int g_026c4e24;
extern "C" int g_026c4e28;
struct UObjectThunk_00da73b0 {
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
    void sub_00da73b0();
};

// @baa 0x00da73b0
void UObjectThunk_00da73b0::sub_00da73b0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4e24, g_026c4e28, 0), 0, 0);
}

// @baa 0x00da75a0
int sub_00da75a0(int a0, int a1) { return a1; }

struct C_00da75b0 {
    void sub_00da75b0();
};

// @baa 0x00da75b0
void C_00da75b0::sub_00da75b0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x800;
  return;
}

// @baa 0x00da75c0
int sub_00da75c0(int a0, int a1) { return a1; }

// @baa 0x00da75d0
int sub_00da75d0(int a0, int a1) { return a1; }

// @baa 0x00da75e0
int sub_00da75e0(int a0, int a1) { return a1; }

// @baa 0x00da75f0
int sub_00da75f0(int a0, int a1) { return a1; }

// @baa 0x00da7600
int sub_00da7600(int a0, int a1) { return a1; }

// @baa 0x00da7610
int sub_00da7610(int a0, int a1) { return a1; }

// @baa 0x00da7620
int sub_00da7620(int a0, int a1) { return a1; }

// @baa 0x00da7630
int sub_00da7630(int a0, int a1) { return a1; }

// @baa 0x00da7640
int sub_00da7640(int a0, int a1) { return a1; }

// @baa 0x00da7650
IMPLEMENT_CLASS_AT(UUISequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 16);

// @baa 0x00da7760
int UUISequence::vf_000(void) { return 1; }

// @baa 0x00da7770
bool UUISequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da77b0
int UUIStateSequence::vf_000(void) { return 1; }

// @baa 0x00da77c0
IMPLEMENT_CLASS_AT(UUIAction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 19);

// @baa 0x00da78d0
int UUIAction::vf_000(void) { return 1; }

// @baa 0x00da78e0
bool UUIAction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da7920
int UUIAction_Scene::vf_000(void) { return 1; }

// @baa 0x00da7930
int UUIAction_OpenScene::vf_000(void) { return 1; }

// @baa 0x00da7940
IMPLEMENT_CLASS_AT(UUIEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 58);

// @baa 0x00da7a50
int UUIEvent::vf_000(void) { return 1; }

// @baa 0x00da7a60
bool UUIEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da7aa0
int UUIEvent_MetaObject::vf_000(void) { return 1; }

// @baa 0x00da7ab0
int UUIEvent_CalloutButtonInputProxy::vf_000(void) { return 1; }

// @baa 0x00da7ac0
int UUIEvent_ProcessInput::vf_000(void) { return 1; }

// @baa 0x00da7ad0
// @baa 0x00da7be0
int UUIEventContainer::vf_000(void) { return 1; }

// @baa 0x00da7bf0
bool UUIEventContainer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da7c30
int UUIList::vf_000(void) { return 1; }

// @baa 0x00da7c40
// @baa 0x00da7d50
int UUIListElementProvider::vf_000(void) { return 1; }

// @baa 0x00da7d60
bool UUIListElementProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da7da0
// @baa 0x00da7eb0
int UUIListElementCellProvider::vf_000(void) { return 1; }

// @baa 0x00da7ec0
bool UUIListElementCellProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da7f00
// @baa 0x00da8070
int UUIObject::vf_000(void) { return 1; }

// @baa 0x00da8080
int UUIButton::vf_000(void) { return 1; }

// @baa 0x00da8090
int UUILabelButton::vf_000(void) { return 1; }

// @baa 0x00da80d0
int UUIScene::vf_000(void) { return 1; }

// @baa 0x00da80e0
// @baa 0x00da81f0
int UUIStringRenderer::vf_000(void) { return 1; }

// @baa 0x00da8200
bool UUIStringRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da8240
// @baa 0x00da8350
int UUIStyleResolver::vf_000(void) { return 1; }

// @baa 0x00da8360
bool UUIStyleResolver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da83a0
// @baa 0x00da84b0
int UCustomPropertyItemHandler::vf_000(void) { return 1; }

// @baa 0x00da84c0
bool UCustomPropertyItemHandler::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da8500
// @baa 0x00da8610
int UUITickableObject::vf_000(void) { return 1; }

// @baa 0x00da8620
bool UUITickableObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da88f0
undefined4 sub_00da88f0(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x484), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0xcc) & 1) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

// @baa 0x00da90a0
int __stdcall sub_00da90a0(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

struct V_00da92e0 {
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
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void g();
    void sub_00da92e0();
};

// @baa 0x00da92e0
void V_00da92e0::sub_00da92e0() { g(); }

// @baa 0x00da95c0
int __stdcall sub_00da95c0(int a0) { return 0; }

// @baa 0x00da98b0
int __stdcall sub_00da98b0(int a0, int a1, int a2) { return 0; }

// @baa 0x00da98c0
int __stdcall sub_00da98c0(int a0, int a1, int a2) { return 0; }

// @baa 0x00da98d0
int __stdcall sub_00da98d0(int a0, int a1) { return 0; }

// @baa 0x00da98e0
int __stdcall sub_00da98e0(int a0, int a1) { return 0; }

// @baa 0x00da98f0
int __stdcall sub_00da98f0(int a0, int a1) { return 0; }

// @baa 0x00da9910
int sub_00da9910(int param_1, int param_2)
{
  return *(int *)(param_1 + 0x188) - *(int *)(param_2 + 0x188);
}

// @baa 0x00da9d20
void UUIScene::vf_1f4(int a0) {  }

// @baa 0x00da9dc0
uint UUIScene::sub_00da9dc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x28c) >> 0xe & 1;
}

// @baa 0x00da9dd0
void UUIScene::vf_214(int a0, int a1) {  }

struct V_00da9de0 {
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
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void g(int a0);
    void sub_00da9de0(int a0);
};

// @baa 0x00da9de0
void V_00da9de0::sub_00da9de0(int a0) { g(a0); }

// @baa 0x00da9f90
INT UUIScene::vf_1e0(INT a0) { return 0; }

// @baa 0x00daa110
void sub_00daa110(void) {  }

// @baa 0x00daa350
void __stdcall sub_00daa350(int a0) {  }

// @baa 0x00daa3a0
INT UUIObject::vf_1e0(INT a0) { return 0; }

struct M_00daa7d0 { void sub_00de34d0(); };

struct C_00daa7d0 { char pad[396]; M_00daa7d0 m; void sub_00daa7d0(); };

// @baa 0x00daa7d0
void C_00daa7d0::sub_00daa7d0() { m.sub_00de34d0(); }

// @baa 0x00daa850
void UUIObject::vf_218(int a0, int a1, int a2, int a3) {  }

// @baa 0x00daa8a0
void UUIObject::vf_09c(void) {  }

// @baa 0x00daab90
undefined4 UUIObject::vf_230(int param_2, int param_3)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 4) && (param_3 != param_1)) {
    uVar1 = 1;
  }
  return uVar1;
}

// @baa 0x00daabd0
void UUIObject::SetActiveCursorUpdate(UBOOL param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x2ec) =
       *(uint *)(param_1 + 0x2ec) ^ (*(uint *)(param_1 + 0x2ec) ^ param_2) & 1;
  return;
}

// @baa 0x00daabf0
uint UUIObject::sub_00daabf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x2ec) & 1;
}

struct C_00daac70 { int a, b, c; C_00daac70(); };

// @baa 0x00daac70
C_00daac70::C_00daac70() : a(0), b(0), c(0) {}

struct C_00daac80 { int sub_00daac80(void); };

// @baa 0x00daac80
int C_00daac80::sub_00daac80(void) { return *(int*)((char*)this + 4); }

struct C_00daacd0 {
    int sub_00daacd0();
};

// @baa 0x00daacd0
int C_00daacd0::sub_00daacd0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return param_1[1];
  }
  return 0;
}

struct C_00daad00 { int sub_00daad00(void); };

// @baa 0x00daad00
int C_00daad00::sub_00daad00(void) { return *(int*)((char*)this + 4); }

struct C_00daad80 { int sub_00daad80(void); };

// @baa 0x00daad80
int C_00daad80::sub_00daad80(void) { return *(int*)((char*)this + 4); }

struct C_00daad90 { int sub_00daad90(void); };

// @baa 0x00daad90
int C_00daad90::sub_00daad90(void) { return *(int*)((char*)this + 4); }

struct C_00daada0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00daada0(INT Index);
};

// @baa 0x00daada0
UBOOL C_00daada0::sub_00daada0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00daadc0 { int sub_00daadc0(void); };

// @baa 0x00daadc0
int C_00daadc0::sub_00daadc0(void) { return *(int*)((char*)this + 4); }

struct C_00daadd0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00daadd0(INT Index);
};

// @baa 0x00daadd0
UBOOL C_00daadd0::sub_00daadd0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00daadf0 { int sub_00daadf0(void); };

// @baa 0x00daadf0
int C_00daadf0::sub_00daadf0(void) { return *(int*)((char*)this + 4); }

struct C_00daae00 { int sub_00daae00(void); };

// @baa 0x00daae00
int C_00daae00::sub_00daae00(void) { return *(int*)((char*)this + 4); }

struct C_00daae10 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00daae10(INT Index);
};

// @baa 0x00daae10
UBOOL C_00daae10::sub_00daae10(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00daae30 { int sub_00daae30(void); };

// @baa 0x00daae30
int C_00daae30::sub_00daae30(void) { return *(int*)((char*)this + 4); }

struct C_00daae40 {
    int sub_00daae40();
};

// @baa 0x00daae40
int C_00daae40::sub_00daae40(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return param_1[1];
  }
  return 0;
}

struct T_00daae70 { int x; };

// @baa 0x00daae70
template T_00daae70& TIndirectArray<T_00daae70>::operator()(INT);

struct C_00daaec0 { int a, b, c; C_00daaec0(); };

// @baa 0x00daaec0
C_00daaec0::C_00daaec0() : a(0), b(0), c(0) {}

struct C_00daaed0 { int sub_00daaed0(void); };

// @baa 0x00daaed0
int C_00daaed0::sub_00daaed0(void) { return *(int*)((char*)this + 4); }

struct C_00daaee0 { int sub_00daaee0(void); };

// @baa 0x00daaee0
int C_00daaee0::sub_00daaee0(void) { return *(int*)((char*)this + 4); }

struct C_00daaef0 { int sub_00daaef0(void); };

// @baa 0x00daaef0
int C_00daaef0::sub_00daaef0(void) { return *(int*)((char*)this + 4); }

struct C_00daaf00 { int sub_00daaf00(void); };

// @baa 0x00daaf00
int C_00daaf00::sub_00daaf00(void) { return *(int*)((char*)this + 4); }

struct C_00daaf10 { int a, b, c; C_00daaf10(); };

// @baa 0x00daaf10
C_00daaf10::C_00daaf10() : a(0), b(0), c(0) {}

struct C_00daaf20 { int sub_00daaf20(void); };

// @baa 0x00daaf20
int C_00daaf20::sub_00daaf20(void) { return *(int*)((char*)this + 4); }

struct C_00daaf30 { int a, b, c; C_00daaf30(); };

// @baa 0x00daaf30
C_00daaf30::C_00daaf30() : a(0), b(0), c(0) {}

struct C_00daaf40 { int sub_00daaf40(void); };

// @baa 0x00daaf40
int C_00daaf40::sub_00daaf40(void) { return *(int*)((char*)this + 4); }

struct C_00daaf50 { int sub_00daaf50(void); };

// @baa 0x00daaf50
int C_00daaf50::sub_00daaf50(void) { return *(int*)((char*)this + 4); }

struct C_00daaf60 { int sub_00daaf60(void); };

// @baa 0x00daaf60
int C_00daaf60::sub_00daaf60(void) { return *(int*)((char*)this + 4); }

struct C_00daaf70 { int sub_00daaf70(void); };

// @baa 0x00daaf70
int C_00daaf70::sub_00daaf70(void) { return *(int*)((char*)this + 0); }

struct C_00daaf80 { int sub_00daaf80(void); };

// @baa 0x00daaf80
int C_00daaf80::sub_00daaf80(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_00daaf90{
void sub_00daaf90(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00daaf90
void C_00daaf90::sub_00daaf90(int param_2,int param_3)
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
if(0>param_2){
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
if((*param_1!=0)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+4*param_2),
(iVar1-param_2)*4);
return;
}

struct C_00dab0b0 {
    int sub_00dab0b0(int);
};

// @baa 0x00dab0b0
int C_00dab0b0::sub_00dab0b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00dab130{
void sub_00dab130(int,int);
};

// @baa 0x00dab130
void C_00dab130::sub_00dab130(int param_2,int param_3)
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

struct C_00dab2c0{
void sub_00dab2c0(int,int);
};

// @baa 0x00dab2c0
void C_00dab2c0::sub_00dab2c0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(0>param_1[1]){
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
iVar2=sub_0053d240(iVar2,param_1[2],8);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*8,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*8),(void*)(*param_1+param_2*8),
8*(iVar1-param_2));
return;
}

struct C_00dab570 { int a, b, c; C_00dab570(); };

// @baa 0x00dab570
C_00dab570::C_00dab570() : a(0), b(0), c(0) {}

struct C_00dab5b0 { C_00dab5b0* sub_00dab5b0(int a0); };

// @baa 0x00dab5b0
C_00dab5b0* C_00dab5b0::sub_00dab5b0(int a0) { return this; }

struct C_00dab5c0 { int sub_00dab5c0(void); };

// @baa 0x00dab5c0
int C_00dab5c0::sub_00dab5c0(void) { return *(int*)((char*)this + 0); }

struct C_00dab5d0 { int sub_00dab5d0(void); };

// @baa 0x00dab5d0
int C_00dab5d0::sub_00dab5d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00dac630
// @baa 0x00dac6f0
// @baa 0x00dac710
// @baa 0x00dac730
// @baa 0x00daca00
// @baa 0x00dacac0
// @baa 0x00dacb80
// @baa 0x00dacc40
struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dad0f0(INT Index);
};

// @baa 0x00dad0f0
DWORD* S::sub_00dad0f0(INT Index)
{
    return &Items(Index);
}

struct S_00dad140 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dad140(INT Index) const;
};

// @baa 0x00dad140
const DWORD* S_00dad140::sub_00dad140(INT Index) const
{
    return &Items(Index);
}

struct C_00dad210 {
    int sub_00dad210(undefined4 *, int);
    int sub_00daaf90(int, int);
};

// @baa 0x00dad210
int C_00dad210::sub_00dad210(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_00dad210 *)(this))->sub_00daaf90(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct S_00dad280 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dad280(INT Index) const;
};

// @baa 0x00dad280
const DWORD* S_00dad280::sub_00dad280(INT Index) const
{
    return &Items(Index);
}

struct S_00dad550 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00dad550(INT Index) const;
};

// @baa 0x00dad550
const QWORD* S_00dad550::sub_00dad550(INT Index) const
{
    return &Items(Index);
}

struct C_00dad5a0 {
    void sub_00dad5a0(int, int);
    int sub_00dab2c0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00dad5a0
void C_00dad5a0::sub_00dad5a0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00dad5a0 *)(this))->sub_00dab2c0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 8),0,param_3 * 8);
  return;
}

struct C_00dad5e0 {
    void sub_00dad5e0(int, int);
    int sub_00dab3e0(int, int);
};

// @baa 0x00dad5e0
void C_00dad5e0::sub_00dad5e0(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00dad5e0 *)(this))->sub_00dab3e0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x14),0,param_3 * 0x14);
  return;
}

struct S_00dad690 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00dad690(INT Index);
};

// @baa 0x00dad690
QWORD* S_00dad690::sub_00dad690(INT Index)
{
    return &Items(Index);
}

struct S_00dad7a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dad7a0(INT Index);
};

// @baa 0x00dad7a0
DWORD* S_00dad7a0::sub_00dad7a0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_00dad850 {
    TArray<E> Items; // 0x00
    E* sub_00dad850(INT Index);
};

// @baa 0x00dad850
E* S_00dad850::sub_00dad850(INT Index)
{
    return &Items(Index);
}

struct S_00dad8a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dad8a0(INT Index);
};

// @baa 0x00dad8a0
DWORD* S_00dad8a0::sub_00dad8a0(INT Index)
{
    return &Items(Index);
}

struct C_00dad8f0 {
    int sub_00dad8f0(undefined4 *, int);
    int sub_00dab8a0(int, int);
};

// @baa 0x00dad8f0
int C_00dad8f0::sub_00dad8f0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_00dad8f0 *)(this))->sub_00dab8a0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

// @baa 0x00dad9e0
void __stdcall sub_00dad9e0(int a0, int a1) {  }

struct C_00dadaa0 { int sub_00dadaa0(void); };

// @baa 0x00dadaa0
int C_00dadaa0::sub_00dadaa0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00dadab0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00dadab0(INT Index);
};

// @baa 0x00dadab0
QWORD* S_00dadab0::sub_00dadab0(INT Index)
{
    return &Items(Index);
}

struct S_00dadb00 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00dadb00(INT Index) const;
};

// @baa 0x00dadb00
const QWORD* S_00dadb00::sub_00dadb00(INT Index) const
{
    return &Items(Index);
}

struct C_00dadbb0 {
    int sub_00dadbb0(int);
};

// @baa 0x00dadbb0
int C_00dadbb0::sub_00dadbb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00dadbc0
void __stdcall sub_00dadbc0(int a0, int a1) {  }

// @baa 0x00dadbd0
void __stdcall sub_00dadbd0(int a0, int a1) {  }

struct C_00dadc20 {
    int sub_00dadc20(int);
};

// @baa 0x00dadc20
int C_00dadc20::sub_00dadc20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dadc30
void __stdcall sub_00dadc30(int a0, int a1) {  }

struct C_00dadcb0 {
    int sub_00dadcb0(int);
};

// @baa 0x00dadcb0
int C_00dadcb0::sub_00dadcb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00dadcc0
void __stdcall sub_00dadcc0(int a0, int a1) {  }

struct C_00dadcd0 {
    int sub_00dadcd0(int);
};

// @baa 0x00dadcd0
int C_00dadcd0::sub_00dadcd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dadce0
void __stdcall sub_00dadce0(int a0, int a1) {  }

struct C_00dadcf0 { int sub_00dadcf0(void); };

// @baa 0x00dadcf0
int C_00dadcf0::sub_00dadcf0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dadd00 { int sub_00dadd00(void); };

// @baa 0x00dadd00
int C_00dadd00::sub_00dadd00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dadd10 { int sub_00dadd10(void); };

// @baa 0x00dadd10
int C_00dadd10::sub_00dadd10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dadd20 { int sub_00dadd20(void); };

// @baa 0x00dadd20
int C_00dadd20::sub_00dadd20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dadd30 { int sub_00dadd30(void); };

// @baa 0x00dadd30
int C_00dadd30::sub_00dadd30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00dadd70
void sub_00dadd70(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00dadd80 {
    void sub_00dadd80(undefined4 *);
};

// @baa 0x00dadd80
void C_00dadd80::sub_00dadd80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

int sub_00dac1b0(...);
// @baa 0x00daddd0
void sub_00daddd0(undefined4 * param_1)
{
  sub_00dac1b0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}

struct C_00daddf0 {
    int sub_00daddf0(int);
};

// @baa 0x00daddf0
int C_00daddf0::sub_00daddf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dade30 {
    int sub_00dade30(int);
};

// @baa 0x00dade30
int C_00dade30::sub_00dade30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00dade40 {
    int sub_00dade40(int);
};

// @baa 0x00dade40
int C_00dade40::sub_00dade40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00daded0 { int sub_00daded0(void); };

// @baa 0x00daded0
int C_00daded0::sub_00daded0(void) { return *(int*)((char*)this + 20); }

// @baa 0x00dadf10
void sub_00dadf10(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00dadf20 {
    int sub_00dadf20(int);
};

// @baa 0x00dadf20
int C_00dadf20::sub_00dadf20(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00dadf30 {
    int sub_00dadf30(int);
};

// @baa 0x00dadf30
int C_00dadf30::sub_00dadf30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00dadf40 { int sub_00dadf40(void); };

// @baa 0x00dadf40
int C_00dadf40::sub_00dadf40(void) { return *(int*)((char*)this + 20); }

// @baa 0x00dadf80
void sub_00dadf80(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00dadf90 {
    int sub_00dadf90(int);
};

// @baa 0x00dadf90
int C_00dadf90::sub_00dadf90(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00dadfa0 {
    int sub_00dadfa0(int);
};

// @baa 0x00dadfa0
int C_00dadfa0::sub_00dadfa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dadfb0 { int sub_00dadfb0(void); };

// @baa 0x00dadfb0
int C_00dadfb0::sub_00dadfb0(void) { return *(int*)((char*)this + 20); }

int sub_00dac230(...);
// @baa 0x00dadff0
void sub_00dadff0(int param_1)
{
  sub_00dac230(*(undefined4 *)(param_1 + 8),0);
  return;
}

struct C_00dae010 {
    int sub_00dae010(int);
};

// @baa 0x00dae010
int C_00dae010::sub_00dae010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dae020 {
    int sub_00dae020(int);
};

// @baa 0x00dae020
int C_00dae020::sub_00dae020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dae030 { int sub_00dae030(void); };

// @baa 0x00dae030
int C_00dae030::sub_00dae030(void) { return *(int*)((char*)this + 20); }

struct C_00dae070 {
    int sub_00dae070(int);
};

// @baa 0x00dae070
int C_00dae070::sub_00dae070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dae080 {
    int sub_00dae080();
};

// @baa 0x00dae080
int C_00dae080::sub_00dae080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae0a0 {
    int sub_00dae0a0();
};

// @baa 0x00dae0a0
int C_00dae0a0::sub_00dae0a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae0c0 {
    int sub_00dae0c0();
};

// @baa 0x00dae0c0
int C_00dae0c0::sub_00dae0c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae0e0 {
    int sub_00dae0e0();
};

// @baa 0x00dae0e0
int C_00dae0e0::sub_00dae0e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae100 {
    int sub_00dae100(int);
};

// @baa 0x00dae100
int C_00dae100::sub_00dae100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dae140 {
    int sub_00dae140(int);
};

// @baa 0x00dae140
int C_00dae140::sub_00dae140(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00dae150 {
    int sub_00dae150();
};

// @baa 0x00dae150
int C_00dae150::sub_00dae150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00dae160 {
    int sub_00dae160(int);
};

// @baa 0x00dae160
int C_00dae160::sub_00dae160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dae170 {
    int sub_00dae170(int);
};

// @baa 0x00dae170
int C_00dae170::sub_00dae170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dae180 {
    int sub_00dae180();
};

// @baa 0x00dae180
int C_00dae180::sub_00dae180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae1a0 {
    int sub_00dae1a0();
};

// @baa 0x00dae1a0
int C_00dae1a0::sub_00dae1a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae1c0 {
    int sub_00dae1c0();
};

// @baa 0x00dae1c0
int C_00dae1c0::sub_00dae1c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae1e0 {
    int sub_00dae1e0();
};

// @baa 0x00dae1e0
int C_00dae1e0::sub_00dae1e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dae1f0 {
    int sub_00dae1f0();
};

// @baa 0x00dae1f0
int C_00dae1f0::sub_00dae1f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae210 {
    int sub_00dae210();
};

// @baa 0x00dae210
int C_00dae210::sub_00dae210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00dae220 {
    int sub_00dae220();
};

// @baa 0x00dae220
int C_00dae220::sub_00dae220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae240 {
    void sub_00dae240(int *);
};

// @baa 0x00dae240
void C_00dae240::sub_00dae240(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00dae250 {
    int sub_00dae250(int);
};

// @baa 0x00dae250
int C_00dae250::sub_00dae250(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x00dae5b0
void sub_00dae5b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00dae5d0
void sub_00dae5d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00dae5f0
void sub_00dae5f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x00dae620
void sub_00dae620(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_00dae680 {
    int sub_00dae680();
};

// @baa 0x00dae680
int C_00dae680::sub_00dae680(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae6a0 { int sub_00dae6a0(void); };

// @baa 0x00dae6a0
int C_00dae6a0::sub_00dae6a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dae6b0 {
    int sub_00dae6b0();
};

// @baa 0x00dae6b0
int C_00dae6b0::sub_00dae6b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00dae6f0
void sub_00dae6f0(int param_1)
{
  sub_00dac230(*(undefined4 *)(param_1 + 8),0);
  return;
}

struct C_00dae710 {
    int sub_00dae710(int);
};

// @baa 0x00dae710
int C_00dae710::sub_00dae710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dae720 {
    int sub_00dae720();
};

// @baa 0x00dae720
int C_00dae720::sub_00dae720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dae740 {
    int sub_00dae740();
};

// @baa 0x00dae740
int C_00dae740::sub_00dae740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00dae750
void sub_00dae750(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00dae770
void sub_00dae770(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct C_00dae7a0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00dae7a0& sub_00dae7a0(int Arg);
};

// @baa 0x00dae7a0
C_00dae7a0& C_00dae7a0::sub_00dae7a0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_00db0a10(void);
// @baa 0x00db0a70
undefined4 UUIScene::sub_00db0a70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 300) == 0) {
    sub_00db0a10();
  }
  return *(undefined4 *)(param_1 + 300);
}

struct M_00db0fd0 { void sub_00dad620(); };

struct C_00db0fd0 { char pad[736]; M_00db0fd0 m; void sub_00db0fd0(); };

// @baa 0x00db0fd0
void C_00db0fd0::sub_00db0fd0() { m.sub_00dad620(); }

struct C_00db1300 { void* Data; int Num; int Max; void sub_00db1300(); };

// @baa 0x00db1300
void C_00db1300::sub_00db1300() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00dad3e0();
// @baa 0x00db14f0
void sub_00db14f0(void) { sub_00dad3e0(); }

struct T_00db1690;
// @baa 0x00db1690
template INT TArray<T_00db1690*>::RemoveItem(T_00db1690* const&);

struct C_00db1ab0 { int sub_00db1ab0(void); };

// @baa 0x00db1ab0
int C_00db1ab0::sub_00db1ab0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00db1ac0 { void* Data; int Num; int Max; void sub_00db1ac0(); };

// @baa 0x00db1ac0
void C_00db1ac0::sub_00db1ac0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00db1b20 { void* Data; int Num; int Max; void sub_00db1b20(); };

// @baa 0x00db1b20
void C_00db1b20::sub_00db1b20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00db1d40 { void* Data; int Num; int Max; void sub_00db1d40(); };

// @baa 0x00db1d40
void C_00db1d40::sub_00db1d40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00db1da0 { void* Data; int Num; int Max; void sub_00db1da0(); };

// @baa 0x00db1da0
void C_00db1da0::sub_00db1da0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00db1ef0 { void* Data; int Num; int Max; void sub_00db1ef0(); };

// @baa 0x00db1ef0
void C_00db1ef0::sub_00db1ef0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_00db1fd0 { void sub_0040fcc0(); };

struct C_00db1fd0 { char pad[4]; M_00db1fd0 m; void sub_00db1fd0(); };

// @baa 0x00db1fd0
void C_00db1fd0::sub_00db1fd0() { m.sub_0040fcc0(); }

struct C_00db2050 {
    int sub_00db2050(int);
};

// @baa 0x00db2050
int C_00db2050::sub_00db2050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00db20d0 {
    int sub_00db20d0(int);
};

// @baa 0x00db20d0
int C_00db20d0::sub_00db20d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00db20e0 {
    int sub_00db20e0(int);
};

// @baa 0x00db20e0
int C_00db20e0::sub_00db20e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00db20f0 {
    int sub_00db20f0();
};

// @baa 0x00db20f0
int C_00db20f0::sub_00db20f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00db2200
int UTexture2D::sub_00db2200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00db2210
int UTexture2D::sub_00db2210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00db2230
int UTexture2D::sub_00db2230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x00db2360
int UTexture2D::sub_00db2360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00db23c0
int UTexture2D::sub_00db23c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00db23e0
int UTexture2D::sub_00db23e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00db23f0
int UTexture2D::sub_00db23f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00db24d0
int UTexture2D::sub_00db24d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00db2550
int UTexture2D::sub_00db2550(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00db2560
int UTexture2D::sub_00db2560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00db2580
int UTexture2D::sub_00db2580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db2600 {
    int sub_00db2600(int);
};

// @baa 0x00db2600
int C_00db2600::sub_00db2600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct M_00db2610 { void sub_0040fcc0(); };

struct C_00db2610 { char pad[4]; M_00db2610 m; void sub_00db2610(); };

// @baa 0x00db2610
void C_00db2610::sub_00db2610() { m.sub_0040fcc0(); }

struct C_00db2620 {
    int sub_00db2620(int);
};

// @baa 0x00db2620
int C_00db2620::sub_00db2620(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00db2630 {
    int sub_00db2630(int);
};

// @baa 0x00db2630
int C_00db2630::sub_00db2630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00db2640 {
    int sub_00db2640();
};

// @baa 0x00db2640
int C_00db2640::sub_00db2640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x34 + *(int *)*param_1;
}

struct C_00db2650 {
    int sub_00db2650();
};

// @baa 0x00db2650
int C_00db2650::sub_00db2650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db2660 {
    int sub_00db2660(int);
};

// @baa 0x00db2660
int C_00db2660::sub_00db2660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00db2670 {
    int sub_00db2670();
};

// @baa 0x00db2670
int C_00db2670::sub_00db2670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00db2680 {
    int sub_00db2680();
};

// @baa 0x00db2680
int C_00db2680::sub_00db2680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00db2690 {
    int sub_00db2690();
};

// @baa 0x00db2690
int C_00db2690::sub_00db2690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db26a0 {
    int sub_00db26a0();
};

// @baa 0x00db26a0
int C_00db26a0::sub_00db26a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db2720 {
    int sub_00db2720();
};

// @baa 0x00db2720
int C_00db2720::sub_00db2720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00db2730 {
    int sub_00db2730();
};

// @baa 0x00db2730
int C_00db2730::sub_00db2730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00db2740 {
    int sub_00db2740();
};

// @baa 0x00db2740
int C_00db2740::sub_00db2740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00db2750 {
    int sub_00db2750(int);
};

// @baa 0x00db2750
int C_00db2750::sub_00db2750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00db2a90 {
    undefined4 sub_00db2a90(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x00db2a90
undefined4 C_00db2a90::sub_00db2a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00db2a90 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00db2b00 { int sub_00db2b00(void); };

// @baa 0x00db2b00
int C_00db2b00::sub_00db2b00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00db2b10 {
    int sub_00db2b10();
};

// @baa 0x00db2b10
int C_00db2b10::sub_00db2b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00db2bf0 {
    int sub_00db2bf0(int);
    int sub_00db2b20(int, int);
};

// @baa 0x00db2bf0
int C_00db2bf0::sub_00db2bf0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00db2bf0 *)(this))->sub_00db2b20((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct M_00db2d70 { void sub_00cc4b80(); };

struct C_00db2d70 { char pad[8]; M_00db2d70 m; void sub_00db2d70(); };

// @baa 0x00db2d70
void C_00db2d70::sub_00db2d70() { m.sub_00cc4b80(); }

void sub_00db1b20();
// @baa 0x00db2d80
void sub_00db2d80(void) { sub_00db1b20(); }

struct M_00db4ed0 { void sub_00db1300(); };

struct C_00db4ed0 { char pad[8]; M_00db4ed0 m; void sub_00db4ed0(); };

// @baa 0x00db4ed0
void C_00db4ed0::sub_00db4ed0() { m.sub_00db1300(); }

struct M_00db58c0 { void sub_00db1960(); };

struct C_00db58c0 { char pad[736]; M_00db58c0 m; void sub_00db58c0(); };

// @baa 0x00db58c0
void C_00db58c0::sub_00db58c0() { m.sub_00db1960(); }

struct C_00db6970 {
    undefined4 sub_00db6970(byte);
    int sub_00db1300();
};

// @baa 0x00db6970
undefined4 C_00db6970::sub_00db6970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00db6970 *)(((char *)this + 0x10)))->sub_00db1300();
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

struct TConstSetBitIterator_00db69a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db69a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db69a0& operator++();
};

TConstSetBitIterator_00db69a0::TConstSetBitIterator_00db69a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db69a0
TConstSetBitIterator_00db69a0& TConstSetBitIterator_00db69a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00db69c0 {
    int sub_00db69c0(int);
    int sub_00db2b20(int, int);
};

// @baa 0x00db69c0
int C_00db69c0::sub_00db69c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00db69c0 *)(this))->sub_00db2b20((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_00db6a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db6a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db6a00& operator++();
};

TConstSetBitIterator_00db6a00::TConstSetBitIterator_00db6a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db6a00
TConstSetBitIterator_00db6a00& TConstSetBitIterator_00db6a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db6a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db6a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db6a20& operator++();
};

TConstSetBitIterator_00db6a20::TConstSetBitIterator_00db6a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db6a20
TConstSetBitIterator_00db6a20& TConstSetBitIterator_00db6a20::operator++()
{
    It.Advance();
    return *this;
}

extern undefined * g_020c99d0;
// @baa 0x00db6bb0
undefined4 * UUIObject::sub_00db6bb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c99d0);
  return param_1;
}

// @baa 0x00db6c30
IMPLEMENT_CLASS_AT(UConsoleEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 50);

// @baa 0x00db6c60
IMPLEMENT_CLASS_AT(UUIButton, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 22);

extern undefined * g_020c9c18;
// @baa 0x00db6cc0
undefined4 * UUIObject::sub_00db6cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c9c18);
  return param_1;
}

// @baa 0x00db6ce0
// @baa 0x00db6d10
IMPLEMENT_CLASS_AT(UUILabelButton, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 48);

extern undefined * g_020c9e60;
// @baa 0x00db6d70
undefined4 * UUIObject::sub_00db6d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020c9e60);
  return param_1;
}

// @baa 0x00db6d90
extern undefined * g_020ca0a8;
// @baa 0x00db6dc0
undefined4 * UUIObject::sub_00db6dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020ca0a8);
  return param_1;
}

// @baa 0x00db6de0
IMPLEMENT_CLASS_AT(UUICalloutButton, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 49);

// @baa 0x00db6e40
extern undefined * g_020ca2f0;
// @baa 0x00db6e70
undefined4 * UUIObject::sub_00db6e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00d99380();
  *param_1 = (undefined4)(&g_020ca2f0);
  return param_1;
}

// @baa 0x00db6e90
IMPLEMENT_CLASS_AT(UUIList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUILists.cpp", 17);

// @baa 0x00db6ef0
struct TConstSetBitIterator_00db8cc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db8cc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db8cc0& operator++();
};

TConstSetBitIterator_00db8cc0::TConstSetBitIterator_00db8cc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db8cc0
TConstSetBitIterator_00db8cc0& TConstSetBitIterator_00db8cc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db8e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db8e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db8e40& operator++();
};

TConstSetBitIterator_00db8e40::TConstSetBitIterator_00db8e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db8e40
TConstSetBitIterator_00db8e40& TConstSetBitIterator_00db8e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db8fd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db8fd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db8fd0& operator++();
};

TConstSetBitIterator_00db8fd0::TConstSetBitIterator_00db8fd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db8fd0
TConstSetBitIterator_00db8fd0& TConstSetBitIterator_00db8fd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db90e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db90e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db90e0& operator++();
};

TConstSetBitIterator_00db90e0::TConstSetBitIterator_00db90e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db90e0
TConstSetBitIterator_00db90e0& TConstSetBitIterator_00db90e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00db91f0 {
    undefined4 * sub_00db91f0(undefined4 *);
    int sub_00db60e0(int);
};

// @baa 0x00db91f0
undefined4 * C_00db91f0::sub_00db91f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_00db91f0 *)(((char *)this + 8)))->sub_00db60e0((int)(param_2 + 2));
  return param_1;
}

struct C_00db9220 {
    undefined4 sub_00db9220(byte);
    int sub_00db1300();
};

// @baa 0x00db9220
undefined4 C_00db9220::sub_00db9220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00db9220 *)(((char *)this + 0x10)))->sub_00db1300();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00db9620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9620& operator++();
};

TConstSetBitIterator_00db9620::TConstSetBitIterator_00db9620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9620
TConstSetBitIterator_00db9620& TConstSetBitIterator_00db9620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9670& operator++();
};

TConstSetBitIterator_00db9670::TConstSetBitIterator_00db9670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9670
TConstSetBitIterator_00db9670& TConstSetBitIterator_00db9670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9720& operator++();
};

TConstSetBitIterator_00db9720::TConstSetBitIterator_00db9720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9720
TConstSetBitIterator_00db9720& TConstSetBitIterator_00db9720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9770& operator++();
};

TConstSetBitIterator_00db9770::TConstSetBitIterator_00db9770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9770
TConstSetBitIterator_00db9770& TConstSetBitIterator_00db9770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db97c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db97c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db97c0& operator++();
};

TConstSetBitIterator_00db97c0::TConstSetBitIterator_00db97c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db97c0
TConstSetBitIterator_00db97c0& TConstSetBitIterator_00db97c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9810& operator++();
};

TConstSetBitIterator_00db9810::TConstSetBitIterator_00db9810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9810
TConstSetBitIterator_00db9810& TConstSetBitIterator_00db9810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9920& operator++();
};

TConstSetBitIterator_00db9920::TConstSetBitIterator_00db9920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9920
TConstSetBitIterator_00db9920& TConstSetBitIterator_00db9920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db99d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db99d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db99d0& operator++();
};

TConstSetBitIterator_00db99d0::TConstSetBitIterator_00db99d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db99d0
TConstSetBitIterator_00db99d0& TConstSetBitIterator_00db99d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9a80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9a80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9a80& operator++();
};

TConstSetBitIterator_00db9a80::TConstSetBitIterator_00db9a80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9a80
TConstSetBitIterator_00db9a80& TConstSetBitIterator_00db9a80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9ad0& operator++();
};

TConstSetBitIterator_00db9ad0::TConstSetBitIterator_00db9ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9ad0
TConstSetBitIterator_00db9ad0& TConstSetBitIterator_00db9ad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9b20& operator++();
};

TConstSetBitIterator_00db9b20::TConstSetBitIterator_00db9b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9b20
TConstSetBitIterator_00db9b20& TConstSetBitIterator_00db9b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9b70& operator++();
};

TConstSetBitIterator_00db9b70::TConstSetBitIterator_00db9b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9b70
TConstSetBitIterator_00db9b70& TConstSetBitIterator_00db9b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9bc0& operator++();
};

TConstSetBitIterator_00db9bc0::TConstSetBitIterator_00db9bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9bc0
TConstSetBitIterator_00db9bc0& TConstSetBitIterator_00db9bc0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00db9c10 {
    undefined4 * sub_00db9c10(undefined4 *);
    int sub_00db60e0(int);
};

// @baa 0x00db9c10
undefined4 * C_00db9c10::sub_00db9c10(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  ((C_00db9c10 *)(((char *)this + 0x10)))->sub_00db60e0((int)(param_2 + 4));
  return param_1;
}

struct TConstSetBitIterator_00db9c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9c40& operator++();
};

TConstSetBitIterator_00db9c40::TConstSetBitIterator_00db9c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9c40
TConstSetBitIterator_00db9c40& TConstSetBitIterator_00db9c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00db9d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00db9d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00db9d80& operator++();
};

TConstSetBitIterator_00db9d80::TConstSetBitIterator_00db9d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00db9d80
TConstSetBitIterator_00db9d80& TConstSetBitIterator_00db9d80::operator++()
{
    It.Advance();
    return *this;
}

struct C_00db9dd0 { C_00db9dd0* sub_00db9dd0(void); };

// @baa 0x00db9dd0
C_00db9dd0* C_00db9dd0::sub_00db9dd0(void) { return this; }

// @baa 0x00db9de0
// @baa 0x00db9e00
IMPLEMENT_CLASS_AT(UUIObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 21);

// @baa 0x00db9e10
// @baa 0x00db9e30
// @baa 0x00db9e50
// @baa 0x00db9e70
// @baa 0x00db9f70
// @baa 0x00dba030
// @baa 0x00dba0f0
// @baa 0x00dba1b0
// @baa 0x00dba270
// @baa 0x00dba330
struct C_00dba6e0 {
    undefined4 * sub_00dba6e0(int *);
    int sub_00db60e0(int);
};

// @baa 0x00dba6e0
undefined4 * C_00dba6e0::sub_00dba6e0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  puVar1 = (undefined4 *)param_2[1];
  param_1[2] = *puVar1;
  param_1[3] = puVar1[1];
  ((C_00dba6e0 *)(((char *)this + 0x10)))->sub_00db60e0((int)(puVar1 + 2));
  return param_1;
}

struct C_view {
    int sub_00db60e0(int);
};

// @baa 0x00dba7d0
undefined4 * UObject::sub_00dba7d0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  puVar1 = (undefined4 *)param_2[1];
  param_1[2] = *puVar1;
  param_1[3] = puVar1[1];
  ((C_view *)(((char *)this + 0x10)))->sub_00db60e0((int)(puVar1 + 2));
  param_1[7] = 0xffffffff;
  return param_1;
}

struct M_00dba980 { void sub_00db9250(); };

struct C_00dba980 { char pad[8]; M_00dba980 m; void sub_00dba980(); };

// @baa 0x00dba980
void C_00dba980::sub_00dba980() { m.sub_00db9250(); }

struct TConstSetBitIterator_00dbadf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbadf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbadf0& operator++();
};

TConstSetBitIterator_00dbadf0::TConstSetBitIterator_00dbadf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbadf0
TConstSetBitIterator_00dbadf0& TConstSetBitIterator_00dbadf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbafe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbafe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbafe0& operator++();
};

TConstSetBitIterator_00dbafe0::TConstSetBitIterator_00dbafe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbafe0
TConstSetBitIterator_00dbafe0& TConstSetBitIterator_00dbafe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbb1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbb1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbb1e0& operator++();
};

TConstSetBitIterator_00dbb1e0::TConstSetBitIterator_00dbb1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbb1e0
TConstSetBitIterator_00dbb1e0& TConstSetBitIterator_00dbb1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbb3e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbb3e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbb3e0& operator++();
};

TConstSetBitIterator_00dbb3e0::TConstSetBitIterator_00dbb3e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbb3e0
TConstSetBitIterator_00dbb3e0& TConstSetBitIterator_00dbb3e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00dbb580 { C_00dbb580* sub_00dbb580(void); };

// @baa 0x00dbb580
C_00dbb580* C_00dbb580::sub_00dbb580(void) { return this; }

struct TConstSetBitIterator_00dbb610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbb610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbb610& operator++();
};

TConstSetBitIterator_00dbb610::TConstSetBitIterator_00dbb610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbb610
TConstSetBitIterator_00dbb610& TConstSetBitIterator_00dbb610::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00dbb810
// @baa 0x00dbb920
bool UUIObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dbb960
IMPLEMENT_CLASS_AT(UUIScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 52);

// @baa 0x00dbba70
bool UUIScene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct TConstSetBitIterator_00dbbe30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbbe30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbbe30& operator++();
};

TConstSetBitIterator_00dbbe30::TConstSetBitIterator_00dbbe30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbbe30
TConstSetBitIterator_00dbbe30& TConstSetBitIterator_00dbbe30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbbe50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbbe50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbbe50& operator++();
};

TConstSetBitIterator_00dbbe50::TConstSetBitIterator_00dbbe50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbbe50
TConstSetBitIterator_00dbbe50& TConstSetBitIterator_00dbbe50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbbe70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbbe70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbbe70& operator++();
};

TConstSetBitIterator_00dbbe70::TConstSetBitIterator_00dbbe70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbbe70
TConstSetBitIterator_00dbbe70& TConstSetBitIterator_00dbbe70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbbe90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbbe90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbbe90& operator++();
};

TConstSetBitIterator_00dbbe90::TConstSetBitIterator_00dbbe90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbbe90
TConstSetBitIterator_00dbbe90& TConstSetBitIterator_00dbbe90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00dbc1c0 {
    void sub_00dbc1c0();
    int sub_00dba660(int);
};

// @baa 0x00dbc1c0
void C_00dbc1c0::sub_00dbc1c0(void)
{
    int param_1 = (int)this;
  ((C_00dbc1c0 *)((*(char **)((char *)this + 0x10))))->sub_00dba660(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00dbc1e0 {
    int sub_00dbc1e0();
};

int sub_00db93a0(void);
// @baa 0x00dbc1e0
int C_00dbc1e0::sub_00dbc1e0(void)
{
    int param_1 = (int)this;

  sub_00db93a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_00dbc560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbc560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbc560& operator++();
};

TConstSetBitIterator_00dbc560::TConstSetBitIterator_00dbc560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbc560
TConstSetBitIterator_00dbc560& TConstSetBitIterator_00dbc560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbc670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbc670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbc670& operator++();
};

TConstSetBitIterator_00dbc670::TConstSetBitIterator_00dbc670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbc670
TConstSetBitIterator_00dbc670& TConstSetBitIterator_00dbc670::operator++()
{
    It.Advance();
    return *this;
}

int sub_00db96c0(void);
// @baa 0x00dbc7e0
int UTexture2D::sub_00dbc7e0(void)
{
    int param_1 = (int)this;

  sub_00db96c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_00dbcac0 { void sub_00db9250(); };

struct C_00dbcac0 { char pad[8]; M_00dbcac0 m; void sub_00dbcac0(); };

// @baa 0x00dbcac0
void C_00dbcac0::sub_00dbcac0() { m.sub_00db9250(); }

struct C_00dbcad0 {
    void sub_00dbcad0();
    int sub_00dbc200(int, int);
};

// @baa 0x00dbcad0
void C_00dbcad0::sub_00dbcad0(void)
{
    int param_1 = (int)this;
  ((C_00dbcad0 *)(this))->sub_00dbc200(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00dbcae0 {
    int sub_00dbcae0();
};

int sub_00db9860(void);
// @baa 0x00dbcae0
int C_00dbcae0::sub_00dbcae0(void)
{
    int param_1 = (int)this;

  sub_00db9860();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbcb00 { C_00dbcb00* sub_00dbcb00(void); };

// @baa 0x00dbcb00
C_00dbcb00* C_00dbcb00::sub_00dbcb00(void) { *(int*)((char*)this + 44) = -1; return this; }

struct C_00dbcb10 {
    int sub_00dbcb10();
};

int sub_00db9970(void);
// @baa 0x00dbcb10
int C_00dbcb10::sub_00dbcb10(void)
{
    int param_1 = (int)this;

  sub_00db9970();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbcb30 {
    int sub_00dbcb30();
};

int sub_00db9a20(void);
// @baa 0x00dbcb30
int C_00dbcb30::sub_00dbcb30(void)
{
    int param_1 = (int)this;

  sub_00db9a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00dbcd6f(...);
// @baa 0x00dbcd20
undefined4 UUIScreenObject::sub_00dbcd20(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5cc4 == 0) {
      g_026c5cc4 = sub_00db9f70(L"Engine");
      sub_00da7f00();
      if (g_026c5cc4 == 0) {
sub_00dbcd6f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5cc4) goto sub_00dbcd6f;
    }
  }
  return 0;
}

// @baa 0x00dbce40
// @baa 0x00dbcf50
bool UUIList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dbcf90
// @baa 0x00dbd0a0
bool UUIButton::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dbd0e0
// @baa 0x00dbd1f0
bool UConsoleEntry::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00dbd470 {
    int sub_00dbd470();
};

// @baa 0x00dbd470
int C_00dbd470::sub_00dbd470(void)
{
    int param_1 = (int)this;

  sub_00db93a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbd670 {
    void sub_00dbd670();
    int sub_00dbc380(int, int);
};

// @baa 0x00dbd670
void C_00dbd670::sub_00dbd670(void)
{
    int param_1 = (int)this;
  ((C_00dbd670 *)(this))->sub_00dbc380(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00dbd680 {
    undefined4 sub_00dbd680(undefined4, undefined4);
    int sub_00dbc440(int, int);
};

// @baa 0x00dbd680
undefined4 C_00dbd680::sub_00dbd680(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00dbd680 *)(this))->sub_00dbc440(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_00dbd760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbd760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbd760& operator++();
};

TConstSetBitIterator_00dbd760::TConstSetBitIterator_00dbd760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbd760
TConstSetBitIterator_00dbd760& TConstSetBitIterator_00dbd760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbd8b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbd8b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbd8b0& operator++();
};

TConstSetBitIterator_00dbd8b0::TConstSetBitIterator_00dbd8b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbd8b0
TConstSetBitIterator_00dbd8b0& TConstSetBitIterator_00dbd8b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dbd900 {
    int sub_00dbc6c0(int, int);
};

// @baa 0x00dbd900
void UTexture2D::sub_00dbd900(void)
{
    int param_1 = (int)this;
  ((C_view_00dbd900 *)(this))->sub_00dbc6c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00dbd9a0 {
    int sub_00dbc780(int, int);
};

// @baa 0x00dbd9a0
undefined4 UTexture2D::sub_00dbd9a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00dbd9a0 *)(this))->sub_00dbc780(param_2, param_3);
  return param_1;
}

// @baa 0x00dbd9c0
int UTexture2D::sub_00dbd9c0(void)
{
    int param_1 = (int)this;

  sub_00db96c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbda70 {
    int sub_00dbda70(undefined4, undefined4);
    int sub_00dbc8c0(int, int);
};

// @baa 0x00dbda70
int C_00dbda70::sub_00dbda70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00dbda70 *)(this))->sub_00dbc8c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00dbda90 {
    int sub_00dbda90(undefined4, undefined4);
    int sub_00dbc940(int, int);
};

// @baa 0x00dbda90
int C_00dbda90::sub_00dbda90(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00dbda90 *)(this))->sub_00dbc940(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00dbdab0 {
    int sub_00dbdab0(undefined4, undefined4);
    int sub_00dbc9c0(int, int);
};

// @baa 0x00dbdab0
int C_00dbdab0::sub_00dbdab0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00dbdab0 *)(this))->sub_00dbc9c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00dbdad0 {
    undefined4 sub_00dbdad0(undefined4, undefined4);
    int sub_00dbca40(int, int);
};

// @baa 0x00dbdad0
undefined4 C_00dbdad0::sub_00dbdad0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00dbdad0 *)(this))->sub_00dbca40(param_2, param_3);
  return param_1;
}

struct C_view_00dbdb50 {
    int sub_00db92b0();
    int sub_00dbc200(int, int);
};

// @baa 0x00dbdb50
void UObject::sub_00dbdb50(void)
{
    int param_1 = (int)this;
  ((C_view_00dbdb50 *)(this))->sub_00db92b0();
  ((C_view_00dbdb50 *)(this))->sub_00dbc200(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00dbdb70 {
    int sub_00dbdb70();
};

// @baa 0x00dbdb70
int C_00dbdb70::sub_00dbdb70(void)
{
    int param_1 = (int)this;

  sub_00db9860();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbdb90 {
    int sub_00dbdb90();
};

// @baa 0x00dbdb90
int C_00dbdb90::sub_00dbdb90(void)
{
    int param_1 = (int)this;

  sub_00db9970();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbdbb0 {
    int sub_00dbdbb0();
};

// @baa 0x00dbdbb0
int C_00dbdbb0::sub_00dbdbb0(void)
{
    int param_1 = (int)this;

  sub_00db9a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dbdbd0 {
    undefined4 sub_00dbdbd0(byte);
    int sub_00db9250();
};

// @baa 0x00dbdbd0
undefined4 C_00dbdbd0::sub_00dbdbd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00dbdbd0 *)(((char *)this + 8)))->sub_00db9250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00dbd240();
// @baa 0x00dbdf20
void sub_00dbdf20(void) { sub_00dbd240(); }

void sub_00dbd2b0();
// @baa 0x00dbdf30
void sub_00dbdf30(void) { sub_00dbd2b0(); }

// @baa 0x00dbdf40
// @baa 0x00dbe050
bool UUILabelButton::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00dbd320();
// @baa 0x00dbe7d0
void sub_00dbe7d0(void) { sub_00dbd320(); }

void sub_00dbd390();
// @baa 0x00dbec50
void sub_00dbec50(void) { sub_00dbd390(); }

void sub_00dbd400();
// @baa 0x00dbec60
void sub_00dbec60(void) { sub_00dbd400(); }

struct C_00dbf7a0 {
    int sub_00dbf7a0();
};

// @baa 0x00dbf7a0
int C_00dbf7a0::sub_00dbf7a0(void)
{
    int param_1 = (int)this;

  sub_00db93a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_00dbf880 {
    int sub_00dbf880(undefined4, undefined4, undefined4);
    int sub_00dbc440(int, int);
};

// @baa 0x00dbf880
int C_00dbf880::sub_00dbf880(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00dbf880 *)(this))->sub_00dbc440(param_2, param_4);
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
    void sub_00dbc380(int, int);
};

struct C_00dbf8b0 {
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
    void sub_00dbf8b0(void);
};

// @baa 0x00dbf8b0
void C_00dbf8b0::sub_00dbf8b0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00dbc380(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00dbfb60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbfb60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbfb60& operator++();
};

TConstSetBitIterator_00dbfb60::TConstSetBitIterator_00dbfb60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbfb60
TConstSetBitIterator_00dbfb60& TConstSetBitIterator_00dbfb60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dbfbf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dbfbf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dbfbf0& operator++();
};

TConstSetBitIterator_00dbfbf0::TConstSetBitIterator_00dbfbf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dbfbf0
TConstSetBitIterator_00dbfbf0& TConstSetBitIterator_00dbfbf0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00dbfee0 {
    int sub_00dbc780(int, int);
};

// @baa 0x00dbfee0
int UTexture2D::sub_00dbfee0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00dbfee0 *)(this))->sub_00dbc780(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00dbff10 {
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
    void sub_00dbc6c0(int, int);
};

struct C_00dbff10 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00dbff10* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00dbff10(void);
};

// @baa 0x00dbff10
void C_00dbff10::sub_00dbff10(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00dbc6c0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00dbff30
int UTexture2D::sub_00dbff30(void)
{
    int param_1 = (int)this;

  sub_00db96c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_00dbffc0 {
    undefined4 sub_00dbffc0(byte);
};

int sub_00dbe090(void);
// @baa 0x00dbffc0
undefined4 C_00dbffc0::sub_00dbffc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dbe090();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00dbdaf0();
// @baa 0x00dbffe0
void sub_00dbffe0(void) { sub_00dbdaf0(); }

struct C_view_00dbfff0 {
    int sub_00db92b0();
    int sub_00dbc200(int, int);
};

// @baa 0x00dbfff0
void UObject::sub_00dbfff0(void)
{
    int param_1 = (int)this;
  ((C_view_00dbfff0 *)(this))->sub_00db92b0();
  ((C_view_00dbfff0 *)(this))->sub_00dbc200(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00dc0010 {
    int sub_00dc0010();
};

// @baa 0x00dc0010
int C_00dc0010::sub_00dc0010(void)
{
    int param_1 = (int)this;

  sub_00db9860();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dc0030 {
    int sub_00dc0030();
};

// @baa 0x00dc0030
int C_00dc0030::sub_00dc0030(void)
{
    int param_1 = (int)this;

  sub_00db9970();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dc0050 {
    int sub_00dc0050();
};

// @baa 0x00dc0050
int C_00dc0050::sub_00dc0050(void)
{
    int param_1 = (int)this;

  sub_00db9a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dc0350
void sub_00dc0350(void) { sub_00dbd2b0(); }

// @baa 0x00dc0360
extern undefined * g_020ca598;
// @baa 0x00dc03c0
undefined4 * UObject::sub_00dc03c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ca598);
  return param_1;
}

// @baa 0x00dc03e0
extern undefined * g_020ca760;
// @baa 0x00dc0410
undefined4 * UObject::sub_00dc0410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ca760);
  return param_1;
}

// @baa 0x00dc0430
IMPLEMENT_CLASS_AT(UUIStateSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 17);

// @baa 0x00dc0490
// @baa 0x00dc04c0
extern undefined * g_020ca928;
// @baa 0x00dc0520
undefined4 * UObject::sub_00dc0520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ca928);
  return param_1;
}

// @baa 0x00dc0540
// @baa 0x00dc0570
IMPLEMENT_CLASS_AT(UUIAction_Scene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 54);

extern undefined * g_020caac8;
// @baa 0x00dc05d0
undefined4 * UObject::sub_00dc05d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020caac8);
  return param_1;
}

// @baa 0x00dc05f0
extern undefined * g_020cac68;
// @baa 0x00dc0620
undefined4 * UObject::sub_00dc0620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cac68);
  return param_1;
}

// @baa 0x00dc0640
IMPLEMENT_CLASS_AT(UUIAction_OpenScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 55);

// @baa 0x00dc06a0
// @baa 0x00dc06d0
extern undefined * g_020cae08;
// @baa 0x00dc0730
undefined4 * UObject::sub_00dc0730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cae08);
  return param_1;
}

// @baa 0x00dc0750
extern undefined * g_020cafb0;
// @baa 0x00dc0780
undefined4 * UObject::sub_00dc0780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cafb0);
  return param_1;
}

// @baa 0x00dc07a0
IMPLEMENT_CLASS_AT(UUIEvent_CalloutButtonInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 60);

// @baa 0x00dc0800
extern undefined * g_020cb158;
// @baa 0x00dc0830
undefined4 * UObject::sub_00dc0830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cb158);
  return param_1;
}

// @baa 0x00dc0850
IMPLEMENT_CLASS_AT(UUIEvent_MetaObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 59);

// @baa 0x00dc08b0
// @baa 0x00dc0a40
// @baa 0x00dc0b50
bool UUICalloutButton::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc1cc0
void sub_00dc1cc0(void) { sub_00dbd320(); }

// @baa 0x00dc1fc0
void sub_00dc1fc0(void) { sub_00dbd390(); }

struct C_00dc28e0 {
    void sub_00dc28e0(int);
    int sub_00dbdaf0(int);
};

// @baa 0x00dc28e0
void C_00dc28e0::sub_00dc28e0(int param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_00dc28e0 *)(this))->sub_00dbdaf0(param_2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    if ((*(int *)(param_1 + 0x3c) != 0) || (param_2 != 0)) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x3c),param_2 * 8,8);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
  }
  return;
}

struct C_00dc2930 {
    void sub_00dc2930();
    int sub_00db92b0();
    int sub_00dbc200(int, int);
};

// @baa 0x00dc2930
void C_00dc2930::sub_00dc2930(void)
{
    int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  ((C_00dc2930 *)(this))->sub_00db92b0();
  ((C_00dc2930 *)(this))->sub_00dbc200(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x44) != iVar1) {
    *(int *)(param_1 + 0x44) = iVar1;
    if ((*(int *)(param_1 + 0x3c) != 0) || (iVar1 != 0)) {
      uVar2 = sub_0053df70(*(int *)(param_1 + 0x3c),iVar1 * 8,8);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
  }
  return;
}

struct C_00dc2980 {
    int sub_00dc2980();
};

// @baa 0x00dc2980
int C_00dc2980::sub_00dc2980(void)
{
    int param_1 = (int)this;

  sub_00db9860();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dc29a0 {
    int sub_00dc29a0();
};

// @baa 0x00dc29a0
int C_00dc29a0::sub_00dc29a0(void)
{
    int param_1 = (int)this;

  sub_00db9970();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dc29c0 {
    int sub_00dc29c0();
};

// @baa 0x00dc29c0
int C_00dc29c0::sub_00dc29c0(void)
{
    int param_1 = (int)this;

  sub_00db9a20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00dc2ad0 {
    int sub_00dc2ad0();
};

int sub_00db98c0(void);
// @baa 0x00dc2ad0
int C_00dc2ad0::sub_00dc2ad0(void)
{
    int param_1 = (int)this;

  sub_00db98c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dc2c10
void sub_00dc2c10(void) { sub_00dbd2b0(); }

// @baa 0x00dc45e0
void sub_00dc45e0(void) { sub_00dbd320(); }

// @baa 0x00dc4980
void sub_00dc4980(void) { sub_00dbd390(); }

void sub_00dc29e0();
// @baa 0x00dc5210
void sub_00dc5210(void) { sub_00dc29e0(); }

struct C_00dc5290 {
    int sub_00dc5290();
};

// @baa 0x00dc5290
int C_00dc5290::sub_00dc5290(void)
{
    int param_1 = (int)this;

  sub_00db98c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dc5360
int sub_00dc52b0(void);
// @baa 0x00dc5370
undefined4 UUIScene::sub_00dc5370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dc52b0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x458);
  }
  return param_1;
}

void sub_00dc5220();
// @baa 0x00dc53a0
void sub_00dc53a0(void) { sub_00dc5220(); }

// @baa 0x00dc53b0
// @baa 0x00dc54c0
bool UUIStateSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc5500
// @baa 0x00dc5610
bool UUIAction_Scene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc5650
// @baa 0x00dc5760
bool UUIEvent_MetaObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc57a0
// @baa 0x00dc58b0
bool UUIEvent_CalloutButtonInputProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc58f0
IMPLEMENT_CLASS_AT(UUIEvent_ProcessInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIEventSystem.cpp", 83);

// @baa 0x00dc5a00
bool UUIEvent_ProcessInput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dc5a70
struct C_00dc8ac0 {
    int sub_00dc8ac0();
};

// @baa 0x00dc8ac0
int C_00dc8ac0::sub_00dc8ac0(void)
{
    int param_1 = (int)this;

  sub_00db98c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dc8ae0
void sub_00dc8ae0(void) { sub_00dc5220(); }

// @baa 0x00dc8af0
// @baa 0x00dc8c00
bool UUIAction_OpenScene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00dc7170(void);
// @baa 0x00dc8f90
void UUIObject::sub_00dc8f90(int param_2, int param_3, int param_4, int param_5)
{
    int param_1 = (int)this;

  if (param_5 != 0) {
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + param_2;
    *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + param_3;
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + param_4;
    sub_00dc7170();
    return;
  }
  *(int *)(param_1 + 0x200) = param_2;
  *(int *)(param_1 + 0x204) = param_3;
  *(int *)(param_1 + 0x208) = param_4;
  sub_00dc7170();
  return;
}

struct C_00dc9170 {
    int sub_00dc9170();
};

// @baa 0x00dc9170
int C_00dc9170::sub_00dc9170(void)
{
    int param_1 = (int)this;

  sub_00db98c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dc9190
void sub_00dc9190(void) { sub_00dc5220(); }

// @baa 0x00dc9210
void UUIEvent_ProcessInput::vf_114(int a0, int a1, int a2, int a3, int a4, int a5) {  }

struct C_00dca880 { C_00dca880* sub_00dca880(void); };

// @baa 0x00dca880
C_00dca880* C_00dca880::sub_00dca880(void) { return this; }

struct C_00dca8b0 { void sub_00dca8b0(void); };

// @baa 0x00dca8b0
void C_00dca8b0::sub_00dca8b0(void) { *(int*)((char*)this + 28) = 0; }
