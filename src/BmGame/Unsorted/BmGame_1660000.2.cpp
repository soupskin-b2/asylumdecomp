// BmGame_1660000.cpp (part 2 of 3): 119 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_01659110(...);
int sub_0165bfc0(void);
extern undefined4 g_026e1b94;
// @baa 0x016625d0
int sub_016625d0(void)
{
  if (g_026e1b94 == 0) {
    g_026e1b94 = sub_01659110(L"BmGame");
    sub_0165bfc0();
  }
  return g_026e1b94;
}

// @baa 0x01662600
IMPLEMENT_CLASS_AT(ARBatarangProjectile_Controllable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 18);

// @baa 0x01662710
bool ARBatarangProjectile_Controllable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01662750
IMPLEMENT_CLASS_AT(ARBatDistractProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 19);

// @baa 0x01662860
bool ARBatDistractProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0165a040(...);
int sub_0165ca40(void);
extern undefined4 g_026e1bdc;
// @baa 0x01664810
int sub_01664810(void)
{
  if (g_026e1bdc == 0) {
    g_026e1bdc = sub_0165a040(L"BmGame");
    sub_0165ca40();
  }
  return g_026e1bdc;
}

int sub_0165a940(...);
int sub_0165ce10(void);
extern undefined4 g_026e1c0c;
// @baa 0x01664ce0
int sub_01664ce0(void)
{
  if (g_026e1c0c == 0) {
    g_026e1c0c = sub_0165a940(L"BmGame");
    sub_0165ce10();
  }
  return g_026e1c0c;
}

struct S {
    void sub_0165d940();
    void sub_0165db70();
    void sub_01665890();
};

// @baa 0x01665890
void S::sub_01665890() {
    sub_0165d940();
    sub_0165db70();
}

struct S_016658a0 {
    void sub_0165da50();
    void sub_0165de60();
    void sub_016658a0();
};

// @baa 0x016658a0
void S_016658a0::sub_016658a0() {
    sub_0165da50();
    sub_0165de60();
}

int sub_0165a100(...);
int sub_01664860(void);
extern undefined4 g_026e1be0;
// @baa 0x01666440
int sub_01666440(void)
{
  if (g_026e1be0 == 0) {
    g_026e1be0 = sub_0165a100(L"BmGame");
    sub_01664860();
  }
  return g_026e1be0;
}

// @baa 0x016687a0
int sub_016687a0(int a0, int a1) { return a1; }

// @baa 0x016687b0
int sub_016687b0(int a0, int a1) { return a1; }

// @baa 0x016687c0
int sub_016687c0(int a0, int a1) { return a1; }

// @baa 0x016687d0
int sub_016687d0(int a0, int a1) { return a1; }

// @baa 0x016687e0
int sub_016687e0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_02375fc8;
// @baa 0x016687f0
undefined4 * UObject::sub_016687f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02375fc8);
  return param_1;
}

// @baa 0x01668810
IMPLEMENT_CLASS_AT(URCrimeSceneAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 43);

// @baa 0x01668870
// @baa 0x01668890
undefined4 sub_01668890(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x016688a0
int sub_016688a0(int a0, int a1) { return a1; }

struct C { C* sub_016688b0(int a0); };

// @baa 0x016688b0
C* C::sub_016688b0(int a0) { return this; }

struct C_016688c0 { C_016688c0* sub_016688c0(int a0); };

// @baa 0x016688c0
C_016688c0* C_016688c0::sub_016688c0(int a0) { return this; }

struct C_016688d0 { C_016688d0* sub_016688d0(int a0); };

// @baa 0x016688d0
C_016688d0* C_016688d0::sub_016688d0(int a0) { return this; }

// @baa 0x016689a0
undefined4 sub_016689a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x016689b0
int sub_016689b0(int a0, int a1) { return a1; }

// @baa 0x016689c0
int sub_016689c0(int a0, int a1) { return a1; }

struct C_016689d0 { C_016689d0* sub_016689d0(void); };

// @baa 0x016689d0
C_016689d0* C_016689d0::sub_016689d0(void) { return this; }

// @baa 0x016689e0
int sub_016689e0(int a0, int a1) { return a1; }

struct C_016689f0 { C_016689f0* sub_016689f0(int a0); };

// @baa 0x016689f0
C_016689f0* C_016689f0::sub_016689f0(int a0) { return this; }

struct C_01668a00 { C_01668a00* sub_01668a00(int a0); };

// @baa 0x01668a00
C_01668a00* C_01668a00::sub_01668a00(int a0) { return this; }

struct C_01668a10 { C_01668a10* sub_01668a10(int a0); };

// @baa 0x01668a10
C_01668a10* C_01668a10::sub_01668a10(int a0) { return this; }

struct C_01668a20 { C_01668a20* sub_01668a20(int a0); };

// @baa 0x01668a20
C_01668a20* C_01668a20::sub_01668a20(int a0) { return this; }

struct C_01668a30 { C_01668a30* sub_01668a30(int a0); };

// @baa 0x01668a30
C_01668a30* C_01668a30::sub_01668a30(int a0) { return this; }

struct C_01668a40 { C_01668a40* sub_01668a40(int a0); };

// @baa 0x01668a40
C_01668a40* C_01668a40::sub_01668a40(int a0) { return this; }

// @baa 0x01668cc0
int sub_01668cc0(int a0, int a1) { return a1; }

// @baa 0x01668cd0
int sub_01668cd0(int a0, int a1) { return a1; }

// @baa 0x01668ce0
int sub_01668ce0(int a0, int a1) { return a1; }

// @baa 0x01668cf0
int sub_01668cf0(int a0, int a1) { return a1; }

struct C_01668d00 { int sub_01668d00(void); };

// @baa 0x01668d00
int C_01668d00::sub_01668d00(void) { return *(int*)((char*)this + 12); }

struct C_01668d10 { int sub_01668d10(void); };

// @baa 0x01668d10
int C_01668d10::sub_01668d10(void) { return *(int*)((char*)this + 8); }

struct C_01668d20 { void sub_01668d20(int a0); };

// @baa 0x01668d20
void C_01668d20::sub_01668d20(int a0) { *(int*)((char*)this + 8) = a0; }

// @baa 0x01668d30
int sub_01668d30(void) { return 1; }

extern char g_023760d4[];
struct C_01668d40 { void sub_01668d40(void); };

// @baa 0x01668d40
void C_01668d40::sub_01668d40(void) { *(int*)((char*)this + 0) = (int)g_023760d4; }

int sub_0053dfa0(...);
// @baa 0x01668d50
undefined4 * URCrimeSceneAsset::sub_01668d50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023760d4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01668df0 {
    void sub_01668df0();
};

int sub_006311e0(...);
int sub_01560eb0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01668df0
void C_01668df0::sub_01668df0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  iVar1 = *(int *)(param_1 + 4);
  sub_01560eb0(*(undefined4 *)(iVar1 + 0x1b0),*(undefined4 *)(iVar1 + 0x1b8),
               *(undefined4 *)(iVar1 + 0x1bc));
  return;
}

struct C_01668e40 {
    void sub_01668e40();
};

// @baa 0x01668e40
void C_01668e40::sub_01668e40(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  iVar1 = *(int *)(param_1 + 4);
  sub_01560eb0(*(undefined4 *)(iVar1 + 0x1b4),*(undefined4 *)(iVar1 + 0x1c0),
               *(undefined4 *)(iVar1 + 0x1c4));
  return;
}

struct C_016698e0 { int sub_016698e0(void); };

// @baa 0x016698e0
int C_016698e0::sub_016698e0(void) { return *(int*)((char*)this + 28); }

struct C_01669970 { void sub_01669970(int a0); };

// @baa 0x01669970
void C_01669970::sub_01669970(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_01669980 { void sub_01669980(int a0); };

// @baa 0x01669980
void C_01669980::sub_01669980(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_016699f0 { int sub_016699f0(void); };

// @baa 0x016699f0
int C_016699f0::sub_016699f0(void) { return *(int*)((char*)this + 36); }

struct C_01669a00 { int sub_01669a00(void); };

// @baa 0x01669a00
int C_01669a00::sub_01669a00(void) { return *(int*)((char*)this + 28); }

struct C_01669a10 { int sub_01669a10(void); };

// @baa 0x01669a10
int C_01669a10::sub_01669a10(void) { return *(int*)((char*)this + 32); }

struct C_01669a80 { void sub_01669a80(int a0); };

// @baa 0x01669a80
void C_01669a80::sub_01669a80(int a0) { *(int*)((char*)this + 20) = a0; }

struct C_01669a90 { void sub_01669a90(int a0); };

// @baa 0x01669a90
void C_01669a90::sub_01669a90(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_01669b30 {
    void sub_01669b30();
};

// @baa 0x01669b30
void C_01669b30::sub_01669b30(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

// @baa 0x01669b40
void sub_01669b40(void) {  }

struct C_01669b50 {
    undefined4 sub_01669b50(int);
};

// @baa 0x01669b50
undefined4 C_01669b50::sub_01669b50(int param_2)
{
    int param_1 = (int)this;

  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == param_1) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 1;
}

extern char g_02359c2c[];
struct C_01669d60 { void sub_01669d60(void); };

// @baa 0x01669d60
void C_01669d60::sub_01669d60(void) { *(int*)((char*)this + 0) = (int)g_02359c2c; }

// @baa 0x01669e10
void sub_01669e10(void) {  }

// @baa 0x0166a2b0
int ARShimmyEdgeMarker::vf_000(void) { return 1; }

// @baa 0x0166a2c0
bool ARShimmyEdgeMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0166a7b0 { int sub_0166a7b0(void); };

// @baa 0x0166a7b0
int C_0166a7b0::sub_0166a7b0(void) { return *(int*)((char*)this + 4); }

struct C_0166a7c0 { void sub_0166a7c0(int a0); };

// @baa 0x0166a7c0
void C_0166a7c0::sub_0166a7c0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_0166a7d0 { float sub_0166a7d0(void); };

// @baa 0x0166a7d0
float C_0166a7d0::sub_0166a7d0(void) { return *(float*)((char*)this + 16); }

struct C_0166a7e0 {
    bool sub_0166a7e0();
};

// @baa 0x0166a7e0
bool C_0166a7e0::sub_0166a7e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

struct C_0166a7f0 { int sub_0166a7f0(void); };

// @baa 0x0166a7f0
int C_0166a7f0::sub_0166a7f0(void) { return *(int*)((char*)this + 0); }

struct C_0166a800 { int sub_0166a800(void); };

// @baa 0x0166a800
int C_0166a800::sub_0166a800(void) { return *(int*)((char*)this + 8); }

struct C_0166a810 {
    char pad[0x10];
    float f_10;
    float sub_0166a810();
};

// @baa 0x0166a810
float C_0166a810::sub_0166a810()
{
    return f_10 * 50.0f;
}

struct C_0166a820 { int sub_0166a820(void); };

// @baa 0x0166a820
int C_0166a820::sub_0166a820(void) { return *(int*)((char*)this + 8); }

// @baa 0x0166a940
int URSimpleRopeComponent::vf_000(void) { return 1; }

// @baa 0x0166a950
bool URSimpleRopeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_0236e734[];
// @baa 0x0166a9c0
int sub_0166a9c0(void) { return (int)g_0236e734; }

extern char g_01ebb554[];
// @baa 0x0166a9d0
void URSimpleRopeComponent::sub_0166a9d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x0166a9e0
undefined4 * URSimpleRopeComponent::sub_0166a9e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0166aa20 {
    undefined1 sub_0166aa20();
};

// @baa 0x0166aa20
undefined1 C_0166aa20::sub_0166aa20(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x10);
}

// @baa 0x0166ab00
void sub_0166ab00(void) {  }

// @baa 0x0166ab10
void sub_0166ab10(void) {  }

// @baa 0x0166bb10
int sub_0166bb10(int a0, int a1) { return a1; }

// @baa 0x0166bb20
int sub_0166bb20(int a0, int a1) { return a1; }

// @baa 0x0166bb30
int sub_0166bb30(int a0, int a1) { return a1; }

// @baa 0x0166bb40
int sub_0166bb40(int a0, int a1) { return a1; }

// @baa 0x0166bb50
int sub_0166bb50(int a0, int a1) { return a1; }

// @baa 0x0166bb60
int sub_0166bb60(int a0, int a1) { return a1; }

// @baa 0x0166bb70
int sub_0166bb70(int a0, int a1) { return a1; }

// @baa 0x0166bb80
int sub_0166bb80(int a0, int a1) { return a1; }

// @baa 0x0166bb90
int sub_0166bb90(int a0, int a1) { return a1; }

// @baa 0x0166cf40
// @baa 0x0166d050
int URCrimeSceneAsset::vf_000(void) { return 1; }

// @baa 0x0166d060
bool URCrimeSceneAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166d1b0
int URCrimeSceneAssetFactoryNew::vf_000(void) { return 1; }

// @baa 0x0166d1c0
bool URCrimeSceneAssetFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0166d240 { C_0166d240* sub_0166d240(int a0); };

// @baa 0x0166d240
C_0166d240* C_0166d240::sub_0166d240(int a0) { return this; }

// @baa 0x0166d430
int ARPawn::vf_000(void) { return 1; }

// @baa 0x0166d440
bool ARPawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166d480
int ARPawnCombat::vf_000(void) { return 1; }

// @baa 0x0166d4b0
UINT ARPawn::vf_48c()
{
    return (FLOAT)Health <= 0.0f || bPendingDelete || bDeleteMe;
}

// @baa 0x0166d5f0
undefined4 ARPawnCombat::vf_624(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x578) == 0) &&
     ((*(int *)(param_1 + 0x574) == 0 || ((*(byte *)(*(int *)(param_1 + 0x574) + 0x1a8) & 2) == 0)))
     ) {
    return 0;
  }
  return 1;
}

// @baa 0x0166d620
uint ARPawnCombat::vf_628(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x580) >> 5 & 1;
}

int sub_015b19d0(...);
// @baa 0x0166d6c0
void ARPawn::vf_490(void)
{
    int param_1 = (int)this;

  sub_015b19d0(*(undefined4 *)(param_1 + 0x348));
  return;
}

// @baa 0x0166d710
uint ARPawnCombat::sub_0166d710(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x580) >> 6 & 1;
}

// @baa 0x0166d740
int ARPawnCharacter::vf_000(void) { return 1; }

// @baa 0x0166d910
void ARPawnCharacter::vf_4ac(void) {  }

// @baa 0x0166dd50
void ARPawnCharacter::ChangeIdleStanceWithoutTransition(FName Stance)
{
    *(FName*)((BYTE*)this + 0x464) = Stance;
}

struct ARPawnCharacter_ : public ARPawnCharacter {
    void sub_0166f640(AActor* Actor, FName Description, FName ActorBoneName, UBOOL bAllowTurningToAim);
};

// @baa 0x0166f640
void ARPawnCharacter_::sub_0166f640(AActor* Actor, FName Description, FName ActorBoneName, UBOOL bAllowTurningToAim)
{
    if (Anim)
    {
        vf_4ac();
        Anim->vf_210(Actor, Description, ActorBoneName, bAllowTurningToAim);
    }
}

// @baa 0x0166fd70
DOUBLE ARPawnCharacter::vf_608() {
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x440) != 0) {
    return (float10)*(float *)(*(int *)(param_1 + 0x440) + 0x2bfc);
  }
  return (float10)0;
}

struct C_0166ff20 { int sub_0166ff20(void); };

// @baa 0x0166ff20
int C_0166ff20::sub_0166ff20(void) { return *(int*)((char*)this + 4); }

struct C_0166ff30 { int sub_0166ff30(void); };

// @baa 0x0166ff30
int C_0166ff30::sub_0166ff30(void) { return *(int*)((char*)this + 4); }

struct C_0166ff40 { int a, b, c; C_0166ff40(); };

// @baa 0x0166ff40
C_0166ff40::C_0166ff40() : a(0), b(0), c(0) {}

struct C_0166ff50 { int a, b, c; C_0166ff50(); };

// @baa 0x0166ff50
C_0166ff50::C_0166ff50() : a(0), b(0), c(0) {}

struct C_0166ff60 { int sub_0166ff60(void); };

// @baa 0x0166ff60
int C_0166ff60::sub_0166ff60(void) { return *(int*)((char*)this + 4); }

struct C_0166ffe0 { int a, b, c; C_0166ffe0(); };

// @baa 0x0166ffe0
C_0166ffe0::C_0166ffe0() : a(0), b(0), c(0) {}

// A 4-byte wrapper holding a pointer to an animation object.
struct RAnim {
    void* Anim;
    float sub_01598280();
};

struct ARPawnCombat_ : public ARPawnCombat {
    // Returns the animation value, or 1.0f when there is no anim.
    float sub_0166d590(RAnim R);
};

// @baa 0x0166d590
float ARPawnCombat_::sub_0166d590(RAnim R)
{
    if (R.Anim)
        return R.sub_01598280();
    return 1.f;
}

// @baa 0x0166d720
void ARPawnCombat::sub_0166d720(FLOAT F)
{
    DestRot = F;
}

// @baa 0x0166d6f0
INT ARPawnPlayerCombat::vf_630(INT A)
{
    vf_5d8(A);
    return A;
}

struct FVec3
{
    FLOAT X, Y, Z;
};

struct C_World_7eda90
{
    void sub_007eda90(void* Actor, FVec3* Loc, INT A, INT B, INT C);
};

extern C_World_7eda90* g_026b62b8;
struct C_0166d490
{
    void sub_0166d490(FVec3 Loc);
};

// @baa 0x0166d490
void C_0166d490::sub_0166d490(FVec3 Loc)
{
    g_026b62b8->sub_007eda90(this, &Loc, 0, 1, 0);
}

struct C_Anim1e0
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual INT vf1e0() = 0;
};

// @baa 0x0166ee20
INT ARPawnCharacter::vf_52c()
{
    if (Anim == NULL)
        return 0;
    return reinterpret_cast<C_Anim1e0*>(Anim)->vf1e0();
}

struct C_Anim280
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual INT vf280() = 0;
};

// @baa 0x0166f3d0
INT ARPawnCharacter::vf_570()
{
    if (Anim == NULL)
        return 0;
    return reinterpret_cast<C_Anim280*>(Anim)->vf280();
}

struct C_Anim2b8
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual void d160() = 0;
    virtual void d161() = 0;
    virtual void d162() = 0;
    virtual void d163() = 0;
    virtual void d164() = 0;
    virtual void d165() = 0;
    virtual void d166() = 0;
    virtual void d167() = 0;
    virtual void d168() = 0;
    virtual void d169() = 0;
    virtual void d170() = 0;
    virtual void d171() = 0;
    virtual void d172() = 0;
    virtual void d173() = 0;
    virtual INT vf2b8() = 0;
};

// @baa 0x0166fcd0
INT ARPawnCharacter::vf_5f4()
{
    if (Anim == NULL)
        return 0;
    return reinterpret_cast<C_Anim2b8*>(Anim)->vf2b8();
}

struct C_Anim2bc
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual void d153() = 0;
    virtual void d154() = 0;
    virtual void d155() = 0;
    virtual void d156() = 0;
    virtual void d157() = 0;
    virtual void d158() = 0;
    virtual void d159() = 0;
    virtual void d160() = 0;
    virtual void d161() = 0;
    virtual void d162() = 0;
    virtual void d163() = 0;
    virtual void d164() = 0;
    virtual void d165() = 0;
    virtual void d166() = 0;
    virtual void d167() = 0;
    virtual void d168() = 0;
    virtual void d169() = 0;
    virtual void d170() = 0;
    virtual void d171() = 0;
    virtual void d172() = 0;
    virtual void d173() = 0;
    virtual void d174() = 0;
    virtual INT vf2bc() = 0;
};

// @baa 0x0166fcf0
INT ARPawnCharacter::vf_5f8()
{
    if (Anim == NULL)
        return 0;
    return reinterpret_cast<C_Anim2bc*>(Anim)->vf2bc();
}
