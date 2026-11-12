// UOnlineGameInterfaceSteamworks.cpp (part 1 of 3): 38 functions
// Placed here by: class 17, neighbours 14, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0077a870(...);
int sub_00782a00(void);
extern undefined4 g_026b3c10;
// @baa 0x00c89620
int sub_00c89620(void)
{
  if (g_026b3c10 == 0) {
    g_026b3c10 = sub_0077a870(L"Engine");
    sub_00782a00();
  }
  return g_026b3c10;
}

struct C {
    void sub_00e86030(undefined4, undefined2, undefined2);
};

// @baa 0x00e86030
void C::sub_00e86030(undefined4 param_2, undefined2 param_3, undefined2 param_4)
{
    undefined2 * param_1 = (undefined2 *)this;

  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[1] = param_3;
  *param_1 = param_4;
  return;
}

struct C_00e86050 {
    undefined2 sub_00e86050();
};

// @baa 0x00e86050
undefined2 C_00e86050::sub_00e86050(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 2);
}

struct C_00e86060 {
    undefined2 sub_00e86060();
};

// @baa 0x00e86060
undefined2 C_00e86060::sub_00e86060(void)
{
    undefined2 * param_1 = (undefined2 *)this;

  return *param_1;
}

struct C_00e86070 { int sub_00e86070(void); };

// @baa 0x00e86070
int C_00e86070::sub_00e86070(void) { return *(int*)((char*)this + 4); }

// @baa 0x00e895b0
IMPLEMENT_CLASS_AT(UOnlineGameInterfaceSteamworks, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\OnlineSubsystemSteamworks\\Src\\OnlineSubsystemSteamworksPackage.cpp", 73);

// @baa 0x00e896c0
int UOnlineGameInterfaceSteamworks::vf_000(void) { return 1; }

// @baa 0x00e896d0
bool UOnlineGameInterfaceSteamworks::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_0211be40[];
struct C_00e89710 { C_00e89710* sub_00e89710(void); };

// @baa 0x00e89710
C_00e89710* C_00e89710::sub_00e89710(void) { *(int*)((char*)this + 0) = (int)g_0211be40; return this; }

// @baa 0x00e89720
int UOnlineGameInterfaceSteamworks::sub_00e89720(void) { return *(int*)((char*)this + 12); }

// @baa 0x00e89730
char* UOnlineGameInterfaceSteamworks::sub_00e89730(void) { return (char*)this + 16; }

// @baa 0x00e89740
int UOnlineGameInterfaceSteamworks::sub_00e89740(void) { return *(int*)((char*)this + 76); }

// @baa 0x00e89750
int UOnlineGameInterfaceSteamworks::sub_00e89750(void) { return *(int*)((char*)this + 80); }

extern char g_0211be4c[];
struct C_00e89760 { C_00e89760* sub_00e89760(void); };

// @baa 0x00e89760
C_00e89760* C_00e89760::sub_00e89760(void) { *(int*)((char*)this + 0) = (int)g_0211be4c; return this; }

// @baa 0x00e89770
int UOnlineGameInterfaceSteamworks::sub_00e89770(void) { return *(int*)((char*)this + 12); }

// @baa 0x00e89860
void __stdcall sub_00e89860(int a0) {  }

// @baa 0x00e89880
undefined4 UOnlineGameInterfaceSteamworks::sub_00e89880(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  if (((*(int *)(param_1 + 0x34) != 0) &&
      (uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + 0x90), (uVar1 & 2) == 0)) && ((uVar1 & 8) != 0))
  {
    return 1;
  }
  return 0;
}

// @baa 0x00e89950
void UOnlineGameInterfaceSteamworks::vf_168(int a0) {  }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e8ecb0 { void* Data; int Num; int Max; void sub_00e8ecb0(); };

// @baa 0x00e8ecb0
void C_00e8ecb0::sub_00e8ecb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e8edf0 {
    void sub_00e8edf0(int);
};

int sub_0053df70(...);
// @baa 0x00e8edf0
void C_00e8edf0::sub_00e8edf0(int param_2)
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

struct C_00e8ee30 { void* Data; int Num; int Max; void sub_00e8ee30(); };

// @baa 0x00e8ee30
void C_00e8ee30::sub_00e8ee30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e90050 {
    void sub_00e90050();
};

// @baa 0x00e90050
void C_00e90050::sub_00e90050(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x234) = 0;
  if (*(int *)(param_1 + 0x238) != 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    if (*(int *)(param_1 + 0x230) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x230),0,8);
      *(undefined4 *)(param_1 + 0x230) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if (*(int *)(param_1 + 0x3b0) != 0) {
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    if (*(int *)(param_1 + 0x3a8) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x3a8),0,8);
      *(undefined4 *)(param_1 + 0x3a8) = uVar1;
    }
  }
  return;
}

struct S_00e91660 {
    int sub_00e8e4c0(int a1);
    int sub_00e91660();
};

// @baa 0x00e91660
int S_00e91660::sub_00e91660()
{
    sub_00e8e4c0(1);
    return 0;
}

struct S {
    void sub_00e8e4c0(int arg1);
    int sub_00e91670();
};

// @baa 0x00e91670
int S::sub_00e91670()
{
    sub_00e8e4c0(1);
    return 0;
}

struct C_00e92700 { void sub_00e916b0(); void sub_00e92700(int); };

// @baa 0x00e92700
void C_00e92700::sub_00e92700(int) { sub_00e916b0(); }

// @baa 0x00e93560
// @baa 0x00e93620
// @baa 0x00e95850
struct C_00e9a500{
void sub_00e9a500(undefined4);
int sub_00e9a1c0(int,int);
};

extern undefined4*g_026cc2a4;
// @baa 0x00e9a500
void C_00e9a500::sub_00e9a500(undefined4 param_2)
{
int param_1=(int)this;
undefined4 uVar1;
if((*(char*)(param_1+0x170)!='\0')&&(*(int*)(param_1+0x174)!=0)){
uVar1=(*(int(__stdcall**)(int,int))(*g_026cc2a4+0x1c))((int)(*(int*)(param_1+0x174)),(int)(param_2));
((C_00e9a500*)(this))->sub_00e9a1c0(uVar1,param_2);
}
return;
}

void sub_00e99100();
// @baa 0x00e9a540
void sub_00e9a540(void) { sub_00e99100(); }

void sub_00e99170();
// @baa 0x00e9a550
void sub_00e9a550(void) { sub_00e99170(); }

int sub_00e89450(void);
int sub_00e9a060(...);
extern undefined4 g_026cc2b8;
// @baa 0x00e9a560
int sub_00e9a560(void)
{
  if (g_026cc2b8 == 0) {
    g_026cc2b8 = sub_00e9a060(L"OnlineSubsystemSteamworks");
    sub_00e89450();
  }
  return g_026cc2b8;
}

int sub_00e88e40(void);
int sub_00e88ea0(...);
int sub_00e895b0(void);
int sub_00e95c90(...);
extern undefined4 g_0268c8a0;
extern undefined4 g_026cc2bc;
// @baa 0x00e9a590
void sub_00e9a590(int * param_1)
{
  if (g_026cc2bc == 0) {
    g_026cc2bc = sub_00e95c90(L"OnlineSubsystemSteamworks");
    sub_00e895b0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e88e40);
  *param_1 = *param_1 + 1;
  if (g_026cc2b8 == 0) {
    g_026cc2b8 = sub_00e9a060(L"OnlineSubsystemSteamworks");
    sub_00e89450();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_00e88ea0);
  *param_1 = *param_1 + 1;
  return;
}

struct C_00e9a640 {
    undefined4 sub_00e9a640(byte);
    int sub_005dc7d0();
};

int sub_0053dfa0(...);
// @baa 0x00e9a640
undefined4 C_00e9a640::sub_00e9a640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e9a640 *)(((char *)this + 0x10)))->sub_005dc7d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00e9b4b0 {
    void sub_00e9b270();
    void sub_005db340();
    void sub_00e9b4b0();
};

// @baa 0x00e9b4b0
void S_00e9b4b0::sub_00e9b4b0() {
    sub_00e9b270();
    sub_005db340();
}

// Clears two flags of a small helper object; the class is not in the headers.
struct C_00e86020
{
    unsigned char Unk000;           // 0x000
    unsigned char Pad000[0xff];
    unsigned char Unk100;           // 0x100

    C_00e86020* sub_00e86020();
};

// @baa 0x00e86020
C_00e86020* C_00e86020::sub_00e86020()
{
    Unk100 = 0;
    Unk000 = 0;
    return this;
}

// vf_138 (vtable slot 78): forwards the value to sub_00e3a290 on the same object.
struct UOnlineGameInterfaceSteamworks_ : public UOnlineGameInterfaceSteamworks
{
    INT sub_00e3a290(FLOAT Value);
    INT sub_00e89940(FLOAT Value);
};

// @baa 0x00e89940
INT UOnlineGameInterfaceSteamworks_::sub_00e89940(FLOAT Value)
{
    return sub_00e3a290(Value);
}

struct Object
{
    INT Value_00;
    INT Value_04;
};

// @baa 0x00e89870
void __stdcall sub_00e89870(Object* Target)
{
    Target->Value_04 = 1;
}
