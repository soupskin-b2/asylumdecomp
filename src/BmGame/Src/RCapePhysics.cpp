// RCapePhysics.cpp (part 1 of 2): 34 functions
// Placed here by: neighbours 18, class 6, file 6, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016aded0
IMPLEMENT_CLASS_AT(URCapeConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 20);

// @baa 0x016adfe0
int URCapeConfig::vf_000(void) { return 1; }

// @baa 0x016adff0
bool URCapeConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    undefined4 sub_01562420();
};

struct M {
    char pad[0x60];
    C *c;
};

struct S {
    char pad[8];
    M *m;
    undefined4 sub_016af420();
};

// @baa 0x016af420
undefined4 S::sub_016af420()
{
    return m->c->sub_01562420();
}

struct C_016af5b0 {
    int sub_016af5b0();
};

int sub_006311e0(...);
extern undefined4 g_0238e124;
// @baa 0x016af5b0
int C_016af5b0::sub_016af5b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x88f,&g_0238e124);
  }
  return *(int *)(param_1 + 8) + 200;
}

struct C_016af5e0 {
    uint sub_016af5e0();
};

extern undefined4 g_02385f0c;
extern undefined4 g_0238e204;
// @baa 0x016af5e0
uint C_016af5e0::sub_016af5e0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x895,&g_0238e204);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5e6,&g_02385f0c);
  }
  return *(uint *)(*(int *)(iVar1 + 0x50) + 0xf4) & 1;
}

struct C_016af640 {
    uint sub_016af640();
};

extern undefined4 g_02385fec;
extern undefined4 g_0238e2e4;
// @baa 0x016af640
uint C_016af640::sub_016af640(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x89b,&g_0238e2e4);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5ec,&g_02385fec);
  }
  return *(uint *)(*(int *)(iVar1 + 0x50) + 0xf4) >> 1 & 1;
}

struct C_016af6a0 {
    uint sub_016af6a0();
};

extern undefined4 g_023860cc;
extern undefined4 g_0238e3c4;
// @baa 0x016af6a0
uint C_016af6a0::sub_016af6a0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x8a1,&g_0238e3c4);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5f2,&g_023860cc);
  }
  return *(uint *)(*(int *)(iVar1 + 0x50) + 0xf4) >> 2 & 1;
}

struct C_016af700 {
    undefined4 sub_016af700(undefined4, int);
};

extern undefined4 g_0238e4a4;
// @baa 0x016af700
undefined4 C_016af700::sub_016af700(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x8a7,&g_0238e4a4);
  }
  switch(param_2) {
  case 0:
  case 6:
    iVar1 = 6;
    break;
  case 1:
  case 5:
    iVar1 = 5;
    break;
  case 2:
  case 3:
  case 4:
    iVar1 = 3;
    break;
  default:
    goto switchD_016af72e_default;
  }
  if (param_3 <= iVar1) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 0xc4);
  }
switchD_016af72e_default:
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0xc0);
}

struct C_016af890 {
    float10 sub_016af890();
};

// @baa 0x016af890
float10 C_016af890::sub_016af890(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 8) + 0x50) + 0x100);
}

struct C_016af8a0 {
    float10 sub_016af8a0();
};

// @baa 0x016af8a0
float10 C_016af8a0::sub_016af8a0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(*(int *)(param_1 + 8) + 0x50) + 0x104);
}

// @baa 0x016af980
int __stdcall sub_016af980(int a0) { return 1; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_016bdda0 { void* Data; int Num; int Max; void sub_016bdda0(); };

// @baa 0x016bdda0
void C_016bdda0::sub_016bdda0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5be0 { C_016c5be0* sub_016c5be0(void); };

// @baa 0x016c5be0
C_016c5be0* C_016c5be0::sub_016c5be0(void) { return this; }

struct C_016c5bf0 { C_016c5bf0* sub_016c5bf0(void); };

// @baa 0x016c5bf0
C_016c5bf0* C_016c5bf0::sub_016c5bf0(void) { return this; }

struct C_016c5c00 { void* Data; int Num; int Max; void sub_016c5c00(); };

// @baa 0x016c5c00
void C_016c5c00::sub_016c5c00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5c60 { void* Data; int Num; int Max; void sub_016c5c60(); };

// @baa 0x016c5c60
void C_016c5c60::sub_016c5c60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5cc0 { void* Data; int Num; int Max; void sub_016c5cc0(); };

// @baa 0x016c5cc0
void C_016c5cc0::sub_016c5cc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5d20 { void* Data; int Num; int Max; void sub_016c5d20(); };

// @baa 0x016c5d20
void C_016c5d20::sub_016c5d20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5d80 { void* Data; int Num; int Max; void sub_016c5d80(); };

// @baa 0x016c5d80
void C_016c5d80::sub_016c5d80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5de0 { void* Data; int Num; int Max; void sub_016c5de0(); };

// @baa 0x016c5de0
void C_016c5de0::sub_016c5de0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5e40 { void* Data; int Num; int Max; void sub_016c5e40(); };

// @baa 0x016c5e40
void C_016c5e40::sub_016c5e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5ea0 {
    undefined4 sub_016c5ea0();
};

// @baa 0x016c5ea0
undefined4 C_016c5ea0::sub_016c5ea0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_016c5eb0 { void* Data; int Num; int Max; void sub_016c5eb0(); };

// @baa 0x016c5eb0
void C_016c5eb0::sub_016c5eb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c5f10 { void* Data; int Num; int Max; void sub_016c5f10(); };

// @baa 0x016c5f10
void C_016c5f10::sub_016c5f10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016c9fc0 { C_016c9fc0* sub_016c9fc0(void); };

// @baa 0x016c9fc0
C_016c9fc0* C_016c9fc0::sub_016c9fc0(void) { return this; }

struct C_016c9fd0 { C_016c9fd0* sub_016c9fd0(void); };

// @baa 0x016c9fd0
C_016c9fd0* C_016c9fd0::sub_016c9fd0(void) { return this; }

// @baa 0x016cc500
// @baa 0x016cc630
void sub_016ca190();
// @baa 0x016cc660
void sub_016cc660(void) { sub_016ca190(); }

// @baa 0x016ccca0
int sub_016aded0(void);
int sub_016cccc0(...);
extern undefined4 g_026e2128;
// @baa 0x016cce00
int sub_016cce00(void)
{
  if (g_026e2128 == 0) {
    g_026e2128 = sub_016cccc0(L"BmGame");
    sub_016aded0();
  }
  return g_026e2128;
}

struct C_view {
    int sub_016ccd90();
};

extern undefined4 g_023899b4;
// @baa 0x016ccf60
void URCapeConfig::sub_016ccf60(void)
{
    int * param_1 = (int *)this;
  if (*param_1 == 0) {
    sub_006311e0("GetIsInitialised()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapePhysics.cpp"
                 ,0x37d,&g_023899b4);
  }
  ((C_view *)(this))->sub_016ccd90();
  *param_1 = 0;
  return;
}

struct C_016c15c0
{
    void sub_016bb590(FLOAT F);
    void sub_016bb8e0(FLOAT F);
    void sub_016c15c0(FLOAT F);
};

// @baa 0x016c15c0
void C_016c15c0::sub_016c15c0(FLOAT F)
{
    sub_016bb590(F);
    sub_016bb8e0(F);
}
