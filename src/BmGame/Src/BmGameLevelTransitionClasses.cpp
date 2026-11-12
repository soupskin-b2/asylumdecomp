// BmGameLevelTransitionClasses.cpp: 92 functions
// Placed here by: neighbours 25, file 13, callers 12, class 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01559b10
IMPLEMENT_CLASS_AT(URSeqAct_PrepareMapChangeFromURL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 26);

// @baa 0x01559c20
int URSeqAct_PrepareMapChangeFromURL::vf_000(void) { return 1; }

// @baa 0x01559c30
bool URSeqAct_PrepareMapChangeFromURL::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01559c70
IMPLEMENT_CLASS_AT(URSeqAct_LockDown, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 27);

// @baa 0x01559d80
int URSeqAct_LockDown::vf_000(void) { return 1; }

// @baa 0x01559d90
bool URSeqAct_LockDown::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01559dd0
IMPLEMENT_CLASS_AT(URSeqAct_CheckURLParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 28);

// @baa 0x01559ee0
int URSeqAct_CheckURLParam::vf_000(void) { return 1; }

// @baa 0x01559ef0
bool URSeqAct_CheckURLParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01559f30
IMPLEMENT_CLASS_AT(ARBunkerDoorVillainBlocker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 29);

// @baa 0x0155a040
int ARBunkerDoorVillainBlocker::vf_000(void) { return 1; }

// @baa 0x0155a050
bool ARBunkerDoorVillainBlocker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026b62b8;
// @baa 0x0155a370
undefined4 ARLevelVolume::vf_360(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    do {
      if (iVar1 == *(int *)(g_026b62b8 + 0x44)) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
    } while (iVar1 != 0);
  }
  return 0;
}

// @baa 0x0155a950
int ARGIChallenge::vf_388(void) { return 0; }

// @baa 0x0155a960
void ARGameRI::vf_3b0(void) {  }

extern undefined4 g_026b21a0;
// @baa 0x0155a970
undefined4 sub_0155a970(void)
{
  g_026b21a0 = 1;
  return 4;
}

extern char g_022f3d58[];
// @baa 0x0155a980
int sub_0155a980(void) { return (int)g_022f3d58; }

extern char g_022f3d7c[];
// @baa 0x0155a9e0
int sub_0155a9e0(void) { return (int)g_022f3d7c; }

extern char g_022fcdd0[];
struct C { C* sub_0155a9f0(void); };

// @baa 0x0155a9f0
C* C::sub_0155a9f0(void) { *(int*)((char*)this + 0) = (int)g_022fcdd0; return this; }

extern char g_01ebb554[];
// @baa 0x0155aa00
void ARGameRI::sub_0155aa00(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_022fcddc[];
struct C_0155aa10 { C_0155aa10* sub_0155aa10(void); };

// @baa 0x0155aa10
C_0155aa10* C_0155aa10::sub_0155aa10(void) { *(int*)((char*)this + 0) = (int)g_022fcddc; return this; }

// @baa 0x0155aa20
void ARGameRI::sub_0155aa20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x0155aa30
undefined4 * ARGameRI::sub_0155aa30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0155aa50
undefined4 * ARGameRI::sub_0155aa50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0155ab50
uint ARGameRI::vf_3a8(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x284) >> 10 & 1;
}

// @baa 0x01574e20
IMPLEMENT_CLASS_AT(URLevelTransitionRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 23);

// @baa 0x01574e40
IMPLEMENT_CLASS_AT(URPlayerStartInLevelRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 24);

// @baa 0x01574e60
// @baa 0x01574f20
// @baa 0x0157d9b0
IMPLEMENT_CLASS_AT(ARLevelVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 17);

// @baa 0x0157d9e0
IMPLEMENT_CLASS_AT(ARPlayerStartInLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 25);

// @baa 0x0157da20
// @baa 0x0157da50
IMPLEMENT_CLASS_AT(ARLevelTransition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 18);

// @baa 0x0157da80
IMPLEMENT_CLASS_AT(ARLevelTransitionDoorBunkerNativeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 21);

// @baa 0x0157dab0
IMPLEMENT_CLASS_AT(ARLevelTransitionP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 19);

// @baa 0x0157dae0
IMPLEMENT_CLASS_AT(ARLevelTransitionDoorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 20);

// @baa 0x0157db10
IMPLEMENT_CLASS_AT(ARLevelTransitionPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 22);

// @baa 0x0157db40
// @baa 0x0157dc00
// @baa 0x0157dcc0
// @baa 0x0157dd80
// @baa 0x0157de40
// @baa 0x0157df00
// @baa 0x0157dfc0
// @baa 0x0157e080
// @baa 0x01585c20
// @baa 0x01585c90
int sub_005c7a70(...);
int sub_01586b70(void);
// @baa 0x01586c20
undefined4 URSeqAct_PrepareMapChangeFromURL::sub_01586c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01586b70();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1d0);
  }
  return param_1;
}

// @baa 0x0158bea0
// @baa 0x0158bec0
// @baa 0x0158bee0
// @baa 0x0158bf00
// @baa 0x0158c010
bool ARLevelTransitionDoorBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0158c050
// @baa 0x0158c110
// @baa 0x0158c1d0
struct FName2 {
    int Index;
    int Number;
    bool IsNone() const { return Index == 0 && Number == 0; }
};

struct GRI {
    char pad0[0x264];
    FName2 NextLevel;
    char pad1[0x284 - 0x26c];
    unsigned char Flags;
};

struct FVec3 { float X, Y, Z; };

struct APawn2 { char pad[0x54]; FVec3 Location; };

struct This {
    char pad0[0xb0];
    void* WorldInfo;
    char pad1[0xf4];
    char pad2[0x10];
    float MinX, MinY, MinZ, MaxX, MaxY, MaxZ;
    char pad3[8];
    unsigned int Flags;
    void sub_0158ca80(float dt);
};

void __stdcall sub_00803810(float);
int __cdecl sub_01586200(int);
int sub_01558fe0(void);
int sub_01559010(void);
static GRI* GetGRI(void* s) {
    return ((GRI* (__fastcall *)(void *)) (*(void ***)s)[0x354/4])(s);
}

static __forceinline int IsConnNext(void* s) {
    void** vt = *(void ***)s;
    GRI* g = ((GRI * (__fastcall *)(void *)) vt[0x354/4])(s);
    return ((int (__fastcall *)(void *, FName2)) vt[0x358/4])(s, g->NextLevel);
}

// @baa 0x0158ca80
void This::sub_0158ca80(float dt)
{
    sub_00803810(dt);
    if (((int (__fastcall *)(void *)) (*(void ***)this)[0x368/4])(this) == 0)
        return;
    int connected = ((int (__fastcall *)(void *)) (*(void ***)this)[0x35c/4])(this);

    if (Flags & 1)
    {
        if (!(connected || (!GetGRI(this)->NextLevel.IsNone() && IsConnNext(this) != 0)))
        {
            if (!(Flags & 2))
            {
                ((int (__fastcall *)(void *)) sub_01558fe0)(this);
                Flags |= 2u;
            }
        }
        else
        {
            if (Flags & 2)
            {
                ((int (__fastcall *)(void *)) sub_01559010)(this);
                Flags &= ~2u;
            }
        }
    }

    GRI* g = GetGRI(this);
    if (g->Flags & 0x10)
        return;

    void* o = (void *)sub_01586200(*(int *)((char *)WorldInfo + 0x35c));
    void* pc = ((void* (__fastcall *)(void *)) (*(void ***)o)[0x3b0/4])(o);
    if (((int (__fastcall *)(void *)) (*(void ***)pc)[0x484/4])(pc) != 0)
        return;

    if (connected)
    {
        APawn2* p = *(APawn2 **)((char *)pc + 0x1a8);
        if (p)
        {
            if (p->Location.X > MinX && p->Location.X < MaxX &&
                p->Location.Y > MinY && p->Location.Y < MaxY &&
                p->Location.Z > MinZ && p->Location.Z < MaxZ)
            {
                if (((int (__fastcall *)(void *)) (*(void ***)this)[0x384/4])(this) == 0)
                {
                    ((void (__fastcall *)(void *)) (*(void ***)this)[0x360/4])(this);
                    return;
                }
            }
        }
    }
    ((void (__fastcall *)(void *)) (*(void ***)this)[0x364/4])(this);
}

// @baa 0x0154cf50
int ARGameRI::vf_000(void) { return 1; }

// @baa 0x0154cf60
bool ARGameRI::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern float g_025db4c4;
// @baa 0x01557f50
float ARGameRI::vf_3b4(void) {
    return g_025db4c4;
}

// @baa 0x01558ec0
int sub_01558ec0(int a0, int a1) { return a1; }

struct C_01558ed0 { C_01558ed0* sub_01558ed0(int a0); };

// @baa 0x01558ed0
C_01558ed0* C_01558ed0::sub_01558ed0(int a0) { return this; }

// @baa 0x01558f40
int sub_01558f40(int a0, int a1) { return a1; }

struct C_01558f50 { C_01558f50* sub_01558f50(int a0); };

// @baa 0x01558f50
C_01558f50* C_01558f50::sub_01558f50(int a0) { return this; }

struct C_01558fb0 { C_01558fb0* sub_01558350(int a0); };

extern "C" int g_026e32d0;
extern "C" int g_026e32d4;
struct UObjectThunk_01558fb0 {
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
    void sub_01558fb0();
};

// @baa 0x01558fb0
void UObjectThunk_01558fb0::sub_01558fb0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e32d0, g_026e32d4, 0), 0, 0);
}

struct C_01558fe0 { C_01558fe0* sub_01558350(int a0); };

extern "C" int g_026e2ba4;
extern "C" int g_026e2ba8;
struct UObjectThunk_01558fe0 {
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
    void sub_01558fe0();
};

// @baa 0x01558fe0
void UObjectThunk_01558fe0::sub_01558fe0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2ba4, g_026e2ba8, 0), 0, 0);
}

struct C_01559010 { C_01559010* sub_01558350(int a0); };

extern "C" int g_026e2aa0;
extern "C" int g_026e2aa4;
struct UObjectThunk_01559010 {
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
    void sub_01559010();
};

// @baa 0x01559010
void UObjectThunk_01559010::sub_01559010()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2aa0, g_026e2aa4, 0), 0, 0);
}

// @baa 0x01559040
int sub_01559040(int a0, int a1) { return a1; }

struct C_01559050 { C_01559050* sub_01559050(int a0); };

// @baa 0x01559050
C_01559050* C_01559050::sub_01559050(int a0) { return this; }

struct C_01559060 { C_01559060* sub_01559060(int a0); };

// @baa 0x01559060
C_01559060* C_01559060::sub_01559060(int a0) { return this; }

struct C_01559070 { C_01559070* sub_01559070(int a0); };

// @baa 0x01559070
C_01559070* C_01559070::sub_01559070(int a0) { return this; }

struct C_01559080 { C_01559080* sub_01559080(int a0); };

// @baa 0x01559080
C_01559080* C_01559080::sub_01559080(int a0) { return this; }

struct C_01559120 { C_01559120* sub_01558350(int a0); };

extern "C" int g_026e2f58;
extern "C" int g_026e2f5c;
struct UObjectThunk_01559120 {
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
    void sub_01559120();
};

// @baa 0x01559120
void UObjectThunk_01559120::sub_01559120()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2f58, g_026e2f5c, 0), 0, 0);
}

// @baa 0x015593f0

// @baa 0x01559500
int ARLevelVolume::vf_000(void) { return 1; }

// @baa 0x01559510
bool ARLevelVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01559550

// @baa 0x01559660
int ARLevelTransition::vf_000(void) { return 1; }

// @baa 0x01559670
bool ARLevelTransition::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015596b0
int ARLevelTransitionP::vf_000(void) { return 1; }

// @baa 0x015596c0
int ARLevelTransitionDoorBase::vf_000(void) { return 1; }

// @baa 0x015596d0
int ARLevelTransitionDoorBunkerNativeBase::vf_000(void) { return 1; }

// @baa 0x015596e0
int ARLevelTransitionPath::vf_000(void) { return 1; }

// @baa 0x015596f0

// @baa 0x01559800
int URLevelTransitionRenderingComponent::vf_000(void) { return 1; }

// @baa 0x01559810
bool URLevelTransitionRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01559850

// @baa 0x01559960
int URPlayerStartInLevelRenderingComponent::vf_000(void) { return 1; }

// @baa 0x01559970
bool URPlayerStartInLevelRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015599b0

// @baa 0x01559ac0
int ARPlayerStartInLevel::vf_000(void) { return 1; }

// @baa 0x01559ad0
bool ARPlayerStartInLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
