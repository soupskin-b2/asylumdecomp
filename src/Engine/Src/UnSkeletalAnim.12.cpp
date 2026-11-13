// UnSkeletalAnim.cpp: 30 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* UAnimSequence::Notifies ordered by time; Sort's instance is out of line (00921a00). */
IMPLEMENT_COMPARE_CONSTREF(FAnimNotifyEvent, UnSkeletalAnim, { if (A.Time > B.Time) return 1; if (A.Time < B.Time) return -1; return 0; })
struct UAnimSequence_ : public UAnimSequence
{
	void SortNotifies();
};

// @baa 0x0092a7f0
/* Puts the notifies in time order. */
void UAnimSequence_::SortNotifies()
{
	Sort<FAnimNotifyEvent, CompareUnSkeletalAnimFAnimNotifyEventConstRef>(&Notifies(0), Notifies.Num());
}

int sub_005c7a20(void);
extern undefined * g_01f77bc0;
// @baa 0x0090bd70
undefined4 * UObject::sub_0090bd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77bc0);
  return param_1;
}

// @baa 0x0090bd90
int sub_0090bd90(int a0, int a1) { return a1; }

extern undefined * g_01f77cd8;
// @baa 0x0090bda0
undefined4 * UObject::sub_0090bda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77cd8);
  return param_1;
}

extern undefined * g_01f77df0;
// @baa 0x0090be50
undefined4 * UObject::sub_0090be50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77df0);
  return param_1;
}

extern undefined * g_01f77f08;
// @baa 0x0090bf00
undefined4 * UObject::sub_0090bf00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77f08);
  return param_1;
}

extern undefined * g_01f78020;
// @baa 0x0090bfb0
undefined4 * UObject::sub_0090bfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78020);
  return param_1;
}

extern undefined * g_01f78138;
// @baa 0x0090c060
undefined4 * UObject::sub_0090c060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78138);
  return param_1;
}

extern undefined * g_01f78250;
// @baa 0x0090c110
undefined4 * UObject::sub_0090c110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78250);
  return param_1;
}

struct C_0090c1b0 {
    DWORD sub_0090c1b0(int);
};

// @baa 0x0090c1b0
DWORD C_0090c1b0::sub_0090c1b0(int)
{
    return (DWORD)this;
}

// @baa 0x0090c210
int sub_0090c210(int a0, int a1) { return a1; }

extern undefined * g_01f78368;
// @baa 0x0090c220
undefined4 * UObject::sub_0090c220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78368);
  return param_1;
}

extern undefined * g_01f78480;
// @baa 0x0090c2d0
undefined4 * UObject::sub_0090c2d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78480);
  return param_1;
}

// @baa 0x0090d7f0
void sub_0090d7f0(void) {  }

struct C_0090d830 {
    void sub_0090d830();
};

int sub_015d56c0(...);
// @baa 0x0090d830
void C_0090d830::sub_0090d830(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_015d56c0(param_1);
  return;
}

struct C_0090d840 {
    void sub_0090d840();
};

int sub_015c3500(...);
// @baa 0x0090d840
void C_0090d840::sub_0090d840(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_015c3500(param_1);
  return;
}

// @baa 0x0090d850
int __stdcall sub_0090d850(int a0) { return 1; }

// @baa 0x0090d9b0
IMPLEMENT_CLASS_AT(UWaveFormBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2435);

// @baa 0x00916060
void sub_00916060(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

int sub_0090d670(void);
int sub_00912e90(...);
extern undefined4 g_026b5db4;
// @baa 0x00916350
int sub_00916350(void)
{
  if (g_026b5db4 == 0) {
    g_026b5db4 = sub_00912e90(L"Engine");
    sub_0090d670();
  }
  return g_026b5db4;
}

// @baa 0x00918dd0
IMPLEMENT_CLASS_AT(UAnimNotify_Footstep, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2346);

// @baa 0x00918ee0
bool UAnimNotify_Footstep::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00918f20
IMPLEMENT_CLASS_AT(UAnimNotify_CameraEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2372);

// @baa 0x00919030
bool UAnimNotify_CameraEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00919070
IMPLEMENT_CLASS_AT(UAnimNotify_PlayParticleEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2408);

// @baa 0x00919180
bool UAnimNotify_PlayParticleEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009191c0
IMPLEMENT_CLASS_AT(UAnimNotify_Rumble, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2434);

// @baa 0x009192d0
bool UAnimNotify_Rumble::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00919310
IMPLEMENT_CLASS_AT(UAnimNotify_ForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2438);

// @baa 0x00919420
bool UAnimNotify_ForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
