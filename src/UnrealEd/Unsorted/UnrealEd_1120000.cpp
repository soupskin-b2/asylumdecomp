// UnrealEd_1120000.cpp (part 1 of 2): 53 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01120000(int);
};

int sub_0053df70(...);
// @baa 0x01120000
void C::sub_01120000(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01120280(INT Index) const;
};

// @baa 0x01120280
const E* S::sub_01120280(INT Index) const
{
    return &Items(Index);
}

// @baa 0x011203a0
int sub_011203a0(void) { return 1; }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x011203b0
undefined2 * sub_011203b0(void)
{
  sub_006311e0("0 && \"Please override as this is pure virtual\"",
               "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\unrealed\\inc\\Docking.h"
               ,0x160,&g_01e3f3dc);
  return &g_01e3f3dc;
}

struct A_011203e0 { virtual void sub_01120400(); char pad[320]; };

struct B_011203e0 { virtual void sub_01120400(); };

struct C_011203e0 : A_011203e0, B_011203e0 { virtual void sub_01120400(); C_011203e0(); };

C_011203e0::C_011203e0() {}

// @baa 0x011203e0
void C_011203e0::sub_01120400() {}

struct A_011203f0 { virtual void sub_01120400(); char pad[324]; };

struct B_011203f0 { virtual void sub_01120400(); };

struct C_011203f0 : A_011203f0, B_011203f0 { virtual void sub_01120400(); C_011203f0(); };

C_011203f0::C_011203f0() {}

// @baa 0x011203f0
void C_011203f0::sub_01120400() {}

int sub_0053dfa0(...);
int sub_011202d0(void);
// @baa 0x01120400
undefined4 UUnrealEdEngine::sub_01120400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011202d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0111a940(void);
int sub_0111d910(...);
extern undefined4 g_026ce6ac;
// @baa 0x01120420
int sub_01120420(void)
{
  if (g_026ce6ac == 0) {
    g_026ce6ac = sub_0111d910(L"UnrealEd");
    sub_0111a940();
  }
  return g_026ce6ac;
}

struct C_01120450 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01120450& sub_01120450(int Arg);
};

// @baa 0x01120450
C_01120450& C_01120450::sub_01120450(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_0111b1e0(void);
int sub_0111e250(...);
extern undefined4 g_026ce6b0;
// @baa 0x01120460
int sub_01120460(void)
{
  if (g_026ce6b0 == 0) {
    g_026ce6b0 = sub_0111e250(L"UnrealEd");
    sub_0111b1e0();
  }
  return g_026ce6b0;
}

struct C_01121360 {
    void sub_01121360();
    int sub_01121270(int);
};

// @baa 0x01121360
void C_01121360::sub_01121360(void)
{
    int param_1 = (int)this;
  if (**(int **)(param_1 + 0x194) == 1) {
    ((C_01121360 *)(this))->sub_01121270(0);
    return;
  }
  sub_01121270(1);
  return;
}

struct S_01122930 {
    void sub_01122480();
    void sub_01122680();
    void sub_01122930();
};

// @baa 0x01122930
void S_01122930::sub_01122930() {
    sub_01122480();
    sub_01122680();
}

struct C_01122bf0 { void sub_01122480(); void sub_01122bf0(int); };

// @baa 0x01122bf0
void C_01122bf0::sub_01122bf0(int) { sub_01122480(); }

struct C_01122c00 { void sub_01122680(); void sub_01122c00(int); };

// @baa 0x01122c00
void C_01122c00::sub_01122c00(int) { sub_01122680(); }

struct C_01122cb0 { void sub_01122940(); void sub_01122cb0(int); };

// @baa 0x01122cb0
void C_01122cb0::sub_01122cb0(int) { sub_01122940(); }

// @baa 0x01126470
IMPLEMENT_CLASS_AT(UCurveEdPreset_CosWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 9);

// @baa 0x01126580
bool UCurveEdPreset_CosWave::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011265c0
IMPLEMENT_CLASS_AT(UCurveEdPreset_LinearDecay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 10);

// @baa 0x011266d0
bool UCurveEdPreset_LinearDecay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01126820
bool UCurveEdPreset_Nothing::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01126860
IMPLEMENT_CLASS_AT(UCurveEdPreset_SineWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 12);

// @baa 0x01126970
bool UCurveEdPreset_SineWave::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011269b0
IMPLEMENT_CLASS_AT(UCurveEdPreset_UserSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 13);

// @baa 0x01126ac0
bool UCurveEdPreset_UserSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01129d70 {
    undefined4 sub_01129d70(byte);
};

int sub_0111eb90(void);
// @baa 0x01129d70
undefined4 C_01129d70::sub_01129d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0111eb90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_0112bf90 { void sub_0040fcc0(); };

struct C_0112bf90 { char pad[4]; M_0112bf90 m; void sub_0112bf90(); };

// @baa 0x0112bf90
void C_0112bf90::sub_0112bf90() { m.sub_0040fcc0(); }

struct M_0112ccd0 { void sub_0040fcc0(); };

struct C_0112ccd0 { char pad[288]; M_0112ccd0 m; void sub_0112ccd0(); };

// @baa 0x0112ccd0
void C_0112ccd0::sub_0112ccd0() { m.sub_0040fcc0(); }

struct C_0112f1b0 {
    void sub_0112f1b0(int);
};

// @baa 0x0112f1b0
void C_0112f1b0::sub_0112f1b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0112f250 {
    void sub_0112f250(int);
};

// @baa 0x0112f250
void C_0112f250::sub_0112f250(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0112f290 { void* Data; int Num; int Max; void sub_0112f290(); };

// @baa 0x0112f290
void C_0112f290::sub_0112f290() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f2f0 { void* Data; int Num; int Max; void sub_0112f2f0(); };

// @baa 0x0112f2f0
void C_0112f2f0::sub_0112f2f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f350 { void* Data; int Num; int Max; void sub_0112f350(); };

// @baa 0x0112f350
void C_0112f350::sub_0112f350() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f3b0 {
    void sub_0112f3b0();
};

// @baa 0x0112f3b0
void C_0112f3b0::sub_0112f3b0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_0112f3c0 { void* Data; int Num; int Max; void sub_0112f3c0(); };

// @baa 0x0112f3c0
void C_0112f3c0::sub_0112f3c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f520 {
    void sub_0112f520(int);
};

// @baa 0x0112f520
void C_0112f520::sub_0112f520(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0112f560 { void* Data; int Num; int Max; void sub_0112f560(); };

// @baa 0x0112f560
void C_0112f560::sub_0112f560() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f5e0 { void* Data; int Num; int Max; void sub_0112f5e0(); };

// @baa 0x0112f5e0
void C_0112f5e0::sub_0112f5e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f640 { void* Data; int Num; int Max; void sub_0112f640(); };

// @baa 0x0112f640
void C_0112f640::sub_0112f640() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f7b0 { void* Data; int Num; int Max; void sub_0112f7b0(); };

// @baa 0x0112f7b0
void C_0112f7b0::sub_0112f7b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f810 { void* Data; int Num; int Max; void sub_0112f810(); };

// @baa 0x0112f810
void C_0112f810::sub_0112f810() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f870 { void* Data; int Num; int Max; void sub_0112f870(); };

// @baa 0x0112f870
void C_0112f870::sub_0112f870() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0112f920 {
    int sub_0112f920(int);
};

// @baa 0x0112f920
int C_0112f920::sub_0112f920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0112f940 {
    int sub_0112f940(int);
};

// @baa 0x0112f940
int C_0112f940::sub_0112f940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0112f950 {
    int sub_0112f950(int);
};

// @baa 0x0112f950
int C_0112f950::sub_0112f950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0112fa50
int UObject::sub_0112fa50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_view {
    int sub_0112fb10(int);
};

// @baa 0x0112fba0
int UObject::sub_0112fba0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_0112fb10(param_2);
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return param_1;
}

struct C_0112fc20 {
    int sub_0112fc20(int);
};

// @baa 0x0112fc20
int C_0112fc20::sub_0112fc20(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0112fcb0 {
    int sub_0112fcb0(int);
};

// @baa 0x0112fcb0
int C_0112fcb0::sub_0112fcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

void sub_0112f960();
// @baa 0x0112fd30
void sub_0112fd30(void) { sub_0112f960(); }

struct M_0112fd50 { void sub_0040fcc0(); };

struct C_0112fd50 { char pad[4]; M_0112fd50 m; void sub_0112fd50(); };

// @baa 0x0112fd50
void C_0112fd50::sub_0112fd50() { m.sub_0040fcc0(); }

struct C_0112fd60 {
    int sub_0112fd60();
};

// @baa 0x0112fd60
int C_0112fd60::sub_0112fd60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0112fd70 {
    int sub_0112fd70();
};

// @baa 0x0112fd70
int C_0112fd70::sub_0112fd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0112bf80
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_0112bf80* sub_0112bf80();
};

// @baa 0x0112bf80
C_0112bf80* C_0112bf80::sub_0112bf80()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
