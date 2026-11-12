// BmGame_1720000.cpp (part 1 of 3): 30 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct FNameP {
    int Index;
    int Number;
    FString sub_005d5690() const;
    FNameP* sub_005d5620(const TCHAR* s, int a, int b);
};

struct ElemObj {
    char pad00[0x30];
    FNameP Name;
    int f38;
    char pad3c[0x18];
    BYTE f54;
};

struct InnerArr {
    char pad00[0x284];
    TArray<ElemObj*> Objects;
};

struct OuterNameObj {
    char pad00[4];
    int flag04;
    char pad08[0x18];
    FNameP Name;
};

struct GObj {
    InnerArr* sub_009c6b40(int);
    OuterNameObj* GetOutermost();
};

extern GObj* g_026b62b8;
extern void* g_0268d084;
void* sub_005adee0(const TCHAR*);
void sub_0059c990(void);
int sub_005d88c0(void*, int, const TCHAR*, int);
inline const TCHAR* Star(const FString& s)
{
    return s.Num() ? &s(0) : L"";
}

inline void* GetCore()
{
    if (!g_0268d084) { g_0268d084 = sub_005adee0(L"Core"); sub_0059c990(); }
    return g_0268d084;
}

// @baa 0x01722040
void sub_01722040(void)
{
    InnerArr* p = g_026b62b8->sub_009c6b40(0);
    for (int i = 0; i < p->Objects.Num(); i++)
    {
        ElemObj* e = p->Objects(i);
        if (!e) continue;
        FNameP& Name = e->Name;
        if (Name.Index == 0 && Name.Number == 0) continue;
        OuterNameObj* o = g_026b62b8->GetOutermost();
        FNameP* other;
        FNameP tmp;
        if (o->flag04 != -1)
            other = &o->Name;
        else
            other = tmp.sub_005d5620(L"<uninitialized>", 1, 1);
        int oi = other->Index;
        int on = other->Number;
        if (Name.Index == oi && Name.Number == on) continue;
        if (e->f38 != 0 && (e->f54 & 8) == 0) continue;
        sub_005d88c0(GetCore(), -1, Star(Name.sub_005d5690()), 0);
    }
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_017222f0(); };

// @baa 0x017222f0
void C::sub_017222f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_017223b0 {
    void sub_017223b0(int);
};

int sub_0053df70(...);
// @baa 0x017223b0
void C_017223b0::sub_017223b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x50,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_017223f0 { void* Data; int Num; int Max; void sub_017223f0(); };

// @baa 0x017223f0
void C_017223f0::sub_017223f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01722530 { void* Data; int Num; int Max; void sub_01722530(); };

// @baa 0x01722530
void C_01722530::sub_01722530() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01722590 {
    int sub_0171b7b0(undefined4*);
    int sub_01722590(undefined4* param_2);
};

// @baa 0x01722590
int C_01722590::sub_01722590(undefined4* param_2)
{
    return sub_0171b7b0(param_2);
}

int sub_0053dfa0(...);
int sub_01721240(void);
// @baa 0x017227d0
undefined4 UObject::sub_017227d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01721240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0171e4b0(void);
// @baa 0x017227f0
undefined4 UObject::sub_017227f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0171e4b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01720e60(void);
// @baa 0x01722810
undefined4 UObject::sub_01722810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01720e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01726770 { C_01726770* sub_01726770(void); };

// @baa 0x01726770
C_01726770* C_01726770::sub_01726770(void) { return this; }

struct C_01726780 { C_01726780* sub_01726780(void); };

// @baa 0x01726780
C_01726780* C_01726780::sub_01726780(void) { return this; }

extern TArray<int> g_026a1ca4;
struct C_01726b30 {
    int sub_01726b30();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01726b30
int C_01726b30::sub_01726b30()
{
    return g_026a1ca4(Index);
}

void sub_00665d40();
// @baa 0x01726d60
void sub_01726d60(void) { sub_00665d40(); }

void sub_01726790();
// @baa 0x01727ba0
void sub_01727ba0(void) { sub_01726790(); }

void sub_01726850();
// @baa 0x01727bb0
void sub_01727bb0(void) { sub_01726850(); }

void sub_01726910();
// @baa 0x01727bc0
void sub_01727bc0(void) { sub_01726910(); }

int sub_01718df0(void);
int sub_01725b50(...);
extern undefined4 g_026e2518;
// @baa 0x01727e00
int sub_01727e00(void)
{
  if (g_026e2518 == 0) {
    g_026e2518 = sub_01725b50(L"BmGame");
    sub_01718df0();
  }
  return g_026e2518;
}

struct C_01729520 { C_01729520* sub_01729520(void); };

// @baa 0x01729520
C_01729520* C_01729520::sub_01729520(void) { return this; }

struct C_01729530 { C_01729530* sub_01729530(void); };

// @baa 0x01729530
C_01729530* C_01729530::sub_01729530(void) { return this; }

struct C_01729540 { C_01729540* sub_01729540(void); };

// @baa 0x01729540
C_01729540* C_01729540::sub_01729540(void) { return this; }

struct C_017297d0 { C_017297d0* sub_017297d0(void); };

// @baa 0x017297d0
C_017297d0* C_017297d0::sub_017297d0(void) { return this; }

int sub_006f7810(void);
extern undefined * g_023c9e80;
// @baa 0x0172ac30
undefined4 * UPrimitiveComponent::sub_0172ac30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_023c9e80);
  return param_1;
}

// @baa 0x0172ac50
IMPLEMENT_CLASS_AT(URHidePointRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 14);

// @baa 0x0172ad00
IMPLEMENT_CLASS_AT(URPatrolPointRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 17);

// @baa 0x0172b170
IMPLEMENT_CLASS_AT(URPersistentData, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 15);

// @baa 0x0172b3e0
IMPLEMENT_CLASS_AT(URPersistentOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 16);

