// BmGame_1690000.cpp: 79 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01690980(INT Index) const;
};

// @baa 0x01690980
const E* S::sub_01690980(INT Index) const
{
    return &Items(Index);
}

struct E_016909d0 { BYTE Bytes[40]; };

struct S_016909d0 {
    TArray<E_016909d0> Items; // 0x00
    E_016909d0* sub_016909d0(INT Index);
};

// @baa 0x016909d0
E_016909d0* S_016909d0::sub_016909d0(INT Index)
{
    return &Items(Index);
}

struct E_01690a20 { BYTE Bytes[40]; };

struct S_01690a20 {
    TArray<E_01690a20> Items; // 0x00
    const E_01690a20* sub_01690a20(INT Index) const;
};

// @baa 0x01690a20
const E_01690a20* S_01690a20::sub_01690a20(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    int sub_01690ae0(int);
    int sub_0168a8e0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01690ae0
int C::sub_01690ae0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_0168a8e0(param_2);
  sub_01a37612((void *)(iVar1 * 0x5c + *param_1),0,param_2 * 0x5c);
  return iVar1;
}

struct C_01690b10 {
    int sub_01690b10(int);
    int sub_0168a960(int);
};

// @baa 0x01690b10
int C_01690b10::sub_01690b10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01690b10 *)(this))->sub_0168a960(param_2);
  sub_01a37612((void *)(iVar1 * 0x2c + *param_1),0,param_2 * 0x2c);
  return iVar1;
}

struct E_01690b40 { BYTE Bytes[24]; };

struct S_01690b40 {
    TArray<E_01690b40> Items; // 0x00
    E_01690b40* sub_01690b40(INT Index);
};

// @baa 0x01690b40
E_01690b40* S_01690b40::sub_01690b40(INT Index)
{
    return &Items(Index);
}

struct C_01690b90 {
    int sub_01690b90(int);
    int sub_0168a9f0(int);
};

// @baa 0x01690b90
int C_01690b90::sub_01690b90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01690b90 *)(this))->sub_0168a9f0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct E_01690bd0 { BYTE Bytes[44]; };

struct S_01690bd0 {
    TArray<E_01690bd0> Items; // 0x00
    const E_01690bd0* sub_01690bd0(INT Index) const;
};

// @baa 0x01690bd0
const E_01690bd0* S_01690bd0::sub_01690bd0(INT Index) const
{
    return &Items(Index);
}

struct E_01690c20 { BYTE Bytes[44]; };

struct S_01690c20 {
    TArray<E_01690c20> Items; // 0x00
    const E_01690c20* sub_01690c20(INT Index) const;
};

// @baa 0x01690c20
const E_01690c20* S_01690c20::sub_01690c20(INT Index) const
{
    return &Items(Index);
}

struct E_01690c70 { BYTE Bytes[16]; };

struct S_01690c70 {
    TArray<E_01690c70> Items; // 0x00
    E_01690c70* sub_01690c70(INT Index);
};

// @baa 0x01690c70
E_01690c70* S_01690c70::sub_01690c70(INT Index)
{
    return &Items(Index);
}

struct C_01690cf0 {
    int sub_01690cf0(int);
};

// @baa 0x01690cf0
int C_01690cf0::sub_01690cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01690d00
void __stdcall sub_01690d00(int a0, int a1) {  }

struct C_01690d10 {
    int sub_01690d10(int);
};

// @baa 0x01690d10
int C_01690d10::sub_01690d10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

// @baa 0x01690d20
void __stdcall sub_01690d20(int a0, int a1) {  }

struct C_01690d30 {
    int sub_01690d30(int);
};

// @baa 0x01690d30
int C_01690d30::sub_01690d30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x01690d40
void __stdcall sub_01690d40(int a0, int a1) {  }

struct C_01690d50 {
    int sub_01690d50(int);
};

// @baa 0x01690d50
int C_01690d50::sub_01690d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x01690d60
void __stdcall sub_01690d60(int a0, int a1) {  }

struct C_01690d70 {
    int sub_01690d70(int);
};

// @baa 0x01690d70
int C_01690d70::sub_01690d70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01690d80 {
    int sub_01690d80(int);
};

// @baa 0x01690d80
int C_01690d80::sub_01690d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01690d90 {
    int sub_01690d90(int);
};

// @baa 0x01690d90
int C_01690d90::sub_01690d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01690da0 {
    int sub_01690da0(int);
};

// @baa 0x01690da0
int C_01690da0::sub_01690da0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01690db0
void __stdcall sub_01690db0(int a0, int a1) {  }

struct S_01690dc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01690dc0(INT Index);
};

// @baa 0x01690dc0
DWORD* S_01690dc0::sub_01690dc0(INT Index)
{
    return &Items(Index);
}

struct S_01690e10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01690e10(INT Index);
};

// @baa 0x01690e10
DWORD* S_01690e10::sub_01690e10(INT Index)
{
    return &Items(Index);
}

struct E_01690e60 { BYTE Bytes[44]; };

struct S_01690e60 {
    TArray<E_01690e60> Items; // 0x00
    E_01690e60* sub_01690e60(INT Index);
};

// @baa 0x01690e60
E_01690e60* S_01690e60::sub_01690e60(INT Index)
{
    return &Items(Index);
}

struct E_01690eb0 { BYTE Bytes[44]; };

struct S_01690eb0 {
    TArray<E_01690eb0> Items; // 0x00
    E_01690eb0* sub_01690eb0(INT Index);
};

// @baa 0x01690eb0
E_01690eb0* S_01690eb0::sub_01690eb0(INT Index)
{
    return &Items(Index);
}

struct E_01690f00 { BYTE Bytes[16]; };

struct S_01690f00 {
    TArray<E_01690f00> Items; // 0x00
    E_01690f00* sub_01690f00(INT Index);
};

// @baa 0x01690f00
E_01690f00* S_01690f00::sub_01690f00(INT Index)
{
    return &Items(Index);
}

struct S_01690f50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01690f50(INT Index);
};

// @baa 0x01690f50
DWORD* S_01690f50::sub_01690f50(INT Index)
{
    return &Items(Index);
}

// @baa 0x01690fa0
IMPLEMENT_CLASS_AT(URDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 56);

// @baa 0x01691070
IMPLEMENT_CLASS_AT(URDmgType_CombatTakedown, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 61);

// @baa 0x01691120
IMPLEMENT_CLASS_AT(URDmgType_IntoThrow, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 59);

// @baa 0x01691180
// @baa 0x016911b0
IMPLEMENT_CLASS_AT(URDmgType_Strike, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 57);

// @baa 0x01691280
IMPLEMENT_CLASS_AT(URDmgType_Counter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 60);

// @baa 0x01691330
IMPLEMENT_CLASS_AT(URDmgType_Redirect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 64);

// @baa 0x016913e0
IMPLEMENT_CLASS_AT(URDmgType_Throw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 58);

// @baa 0x01691440
// @baa 0x01691470
IMPLEMENT_CLASS_AT(URDmgType_Takedown, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 62);

// @baa 0x01691540
IMPLEMENT_CLASS_AT(URDmgType_Takedown_Floor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 63);

// @baa 0x016915a0
// @baa 0x01697050
void __stdcall sub_01697050(int a0, int a1) {  }

// @baa 0x01697060
void __stdcall sub_01697060(int a0, int a1) {  }

// @baa 0x01697070
void __stdcall sub_01697070(int a0, int a1) {  }

// @baa 0x01697080
void __stdcall sub_01697080(int a0, int a1) {  }

// @baa 0x01697090
void __stdcall sub_01697090(int a0, int a1) {  }

// @baa 0x016970a0
void __stdcall sub_016970a0(int a0, int a1) {  }

int sub_005eae70(...);
int sub_01686fe0(void);
int sub_0168af00(...);
extern undefined4 g_026e1df8;
// @baa 0x016970b0
void sub_016970b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026e1df8 == 0) {
    g_026e1df8 = sub_0168af00(L"BmGame");
    sub_01686fe0();
  }
  sub_005eae70(g_026e1df8,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_0169b660 {
    undefined4 sub_0169b660();
};

// @baa 0x0169b660
undefined4 C_0169b660::sub_0169b660(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

int sub_01687560(void);
int sub_01697260(...);
extern undefined4 g_026e1e08;
// @baa 0x0169b670
int sub_0169b670(void)
{
  if (g_026e1e08 == 0) {
    g_026e1e08 = sub_01697260(L"BmGame");
    sub_01687560();
  }
  return g_026e1e08;
}

void sub_0169b3f0();
// @baa 0x0169b6a0
void sub_0169b6a0(void) { sub_0169b3f0(); }

void sub_0169b480();
// @baa 0x0169b6b0
void sub_0169b6b0(void) { sub_0169b480(); }

void sub_0169b4e0();
// @baa 0x0169b6c0
void sub_0169b6c0(void) { sub_0169b4e0(); }

void sub_0169b540();
// @baa 0x0169b6d0
void sub_0169b6d0(void) { sub_0169b540(); }

void sub_0169b5a0();
// @baa 0x0169b6e0
void sub_0169b6e0(void) { sub_0169b5a0(); }

void sub_0169b600();
// @baa 0x0169b6f0
void sub_0169b6f0(void) { sub_0169b600(); }

// @baa 0x0169b700
// @baa 0x0169b810
bool URDmgType_Strike::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169b850
// @baa 0x0169b960
bool URDmgType_IntoThrow::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169b9a0
// @baa 0x0169bab0
bool URDmgType_CombatTakedown::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169baf0
// @baa 0x0169bc00
bool URDmgType_Takedown::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169d170
bool URDmgType_Counter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169d1b0
// @baa 0x0169d2c0
bool URDmgType_Takedown_Floor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169d300
// @baa 0x0169d410
bool URDmgType_Redirect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01697560(...);
int sub_0169d060(void);
extern undefined4 g_026e1e18;
// @baa 0x0169d540
int sub_0169d540(void)
{
  if (g_026e1e18 == 0) {
    g_026e1e18 = sub_01697560(L"BmGame");
    sub_0169d060();
  }
  return g_026e1e18;
}

int sub_01697860(...);
int sub_0169d300(void);
extern undefined4 g_026e1e28;
// @baa 0x0169d570
int sub_0169d570(void)
{
  if (g_026e1e28 == 0) {
    g_026e1e28 = sub_01697860(L"BmGame");
    sub_0169d300();
  }
  return g_026e1e28;
}

int sub_016977a0(...);
int sub_0169d1b0(void);
extern undefined4 g_026e1e24;
// @baa 0x0169d5a0
int sub_0169d5a0(void)
{
  if (g_026e1e24 == 0) {
    g_026e1e24 = sub_016977a0(L"BmGame");
    sub_0169d1b0();
  }
  return g_026e1e24;
}

// @baa 0x01694af0
/* A new, default Batman damage state. */
UObject* URBatmanDamageStateFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(URBatmanDamageState::StaticClass(), InParent, InName, Flags);
}
