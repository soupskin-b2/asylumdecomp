// Engine_0970000.cpp (part 1 of 9): 56 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct M_00974b00 { void sub_00969120(); };

struct C { char pad[8]; M_00974b00 m; void sub_00974b00(); };

// @baa 0x00974b00
void C::sub_00974b00() { m.sub_00969120(); }

struct M_00974e50 { void sub_00969710(); };

struct C_00974e50 { char pad[8]; M_00974e50 m; void sub_00974e50(); };

// @baa 0x00974e50
void C_00974e50::sub_00974e50() { m.sub_00969710(); }

struct C_00975170 {
    int sub_00975170(int);
    int sub_005a9820(int, int);
};

// @baa 0x00975170
int C_00975170::sub_00975170(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00975170 *)(this))->sub_005a9820((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct M_00975ac0 { void sub_0096b220(); };

struct C_00975ac0 { char pad[8]; M_00975ac0 m; void sub_00975ac0(); };

// @baa 0x00975ac0
void C_00975ac0::sub_00975ac0() { m.sub_0096b220(); }

struct M_00975ad0 { void sub_0096b820(); };

struct C_00975ad0 { char pad[8]; M_00975ad0 m; void sub_00975ad0(); };

// @baa 0x00975ad0
void C_00975ad0::sub_00975ad0() { m.sub_0096b820(); }

struct M_00975ae0 { void sub_0096be70(); };

struct C_00975ae0 { char pad[8]; M_00975ae0 m; void sub_00975ae0(); };

// @baa 0x00975ae0
void C_00975ae0::sub_00975ae0() { m.sub_0096be70(); }

struct M_00975af0 { void sub_0096c4e0(); };

struct C_00975af0 { char pad[8]; M_00975af0 m; void sub_00975af0(); };

// @baa 0x00975af0
void C_00975af0::sub_00975af0() { m.sub_0096c4e0(); }

struct M_00975b00 { void sub_0096cab0(); };

struct C_00975b00 { char pad[8]; M_00975b00 m; void sub_00975b00(); };

// @baa 0x00975b00
void C_00975b00::sub_00975b00() { m.sub_0096cab0(); }

struct M_00975b10 { void sub_0096d0f0(); };

struct C_00975b10 { char pad[8]; M_00975b10 m; void sub_00975b10(); };

// @baa 0x00975b10
void C_00975b10::sub_00975b10() { m.sub_0096d0f0(); }

struct M_00975b20 { void sub_0096d6d0(); };

struct C_00975b20 { char pad[8]; M_00975b20 m; void sub_00975b20(); };

// @baa 0x00975b20
void C_00975b20::sub_00975b20() { m.sub_0096d6d0(); }

struct M_00975b30 { void sub_0096dcb0(); };

struct C_00975b30 { char pad[8]; M_00975b30 m; void sub_00975b30(); };

// @baa 0x00975b30
void C_00975b30::sub_00975b30() { m.sub_0096dcb0(); }

struct C_00976080 {
    undefined4 sub_00976080(byte);
};

int sub_0053dfa0(...);
int sub_0096e3c0(void);
// @baa 0x00976080
undefined4 C_00976080::sub_00976080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0096e3c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009799d0
UStaticMeshComponent::UStaticMeshComponent()
{
}

struct C_00979f70 { void sub_00976100(int); C_00979f70 *sub_00979f70(int); };

// @baa 0x00979f70
C_00979f70 *C_00979f70::sub_00979f70(int a) { sub_00976100(a); return this; }

struct C_0097a3a0 {
    undefined4 sub_0097a3a0(byte);
};

int sub_00975b40(void);
// @baa 0x0097a3a0
undefined4 C_0097a3a0::sub_0097a3a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00975b40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0097a540 {
    int sub_0097a540();
};

int sub_00967250(void);
// @baa 0x0097a540
int C_0097a540::sub_0097a540(void)
{
    int param_1 = (int)this;

  sub_00967250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0097acd0
IMPLEMENT_CLASS_AT(ADynamicSMActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 13);

// @baa 0x0097ad30
// @baa 0x0097ad60
IMPLEMENT_CLASS_AT(AStaticMeshActorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 10);

// @baa 0x0097adc0
// @baa 0x0097ae50
IMPLEMENT_CLASS_AT(AStaticMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 11);

// @baa 0x0097aeb0
// @baa 0x0097af10
IMPLEMENT_CLASS_AT(AStaticMeshCollectionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 12);

// @baa 0x0097af80
// @baa 0x0097afe0
IMPLEMENT_CLASS_AT(AStaticMeshActorBasedOnExtremeContent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 15);

// @baa 0x0097b060
// @baa 0x0097b090
IMPLEMENT_CLASS_AT(ASkeletalMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 29);

// @baa 0x0097b100
// @baa 0x0097b190
IMPLEMENT_CLASS_AT(ASkeletalMeshActorBasedOnExtremeContent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 31);

// @baa 0x0097b210
// @baa 0x0097b270
IMPLEMENT_CLASS_AT(ASkeletalMeshActorMAT, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 30);

// @baa 0x0097b2e0
struct C_0097bab0 {
    undefined4 sub_0097bab0(byte);
};

int sub_00977a50(void);
// @baa 0x0097bab0
undefined4 C_0097bab0::sub_0097bab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00977a50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FTarget_ {
    INT sub_00976100(void* Item);
};

struct FOwner_ {
    BYTE Pad[0xb8];
    FTarget_ Target; /* 0xb8 */
};

struct FItem_ {
    INT Pad0;
    BYTE Item[0xc];  /* 0x4 */
    FOwner_* Owner;  /* 0x10 */
    INT sub_0097bad0();
};

// @baa 0x0097bad0
INT FItem_::sub_0097bad0()
{
    Owner->Target.sub_00976100(Item);
    return 0x14;
}

struct C_0097cb00 {
    undefined4 sub_0097cb00();
};

// @baa 0x0097cb00
undefined4 C_0097cb00::sub_0097cb00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c);
  }
  return 0;
}

// @baa 0x0097cb10
int sub_0097cb10(void) { return 0; }

struct C_view {
    int sub_006db600(int);
};

int sub_0097a1c0(...);
// @baa 0x0097d0a0
void UStaticMeshComponent::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_006db600(param_2);
  sub_0097a1c0(param_2,param_1 + 0x1d8);
  return;
}

struct C_0097d640 {
    int sub_0097d640();
};

// @baa 0x0097d640
int C_0097d640::sub_0097d640(void)
{
    int param_1 = (int)this;

  sub_00967250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0097d2c0();
// @baa 0x0097d750
void sub_0097d750(void) { sub_0097d2c0(); }

struct C_0097e080 {
    undefined4 sub_0097e080(byte);
};

int sub_0097cb70(void);
// @baa 0x0097e080
undefined4 C_0097e080::sub_0097e080(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0097cb70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0097e180 {
    undefined4 sub_0097e180();
};

// @baa 0x0097e180
undefined4 C_0097e180::sub_0097e180(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x48) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x1c);
  }
  return 0;
}

// @baa 0x0097e190
int sub_0097e190(void) { return 1; }

struct C_0097e890 {
    int sub_0097e890();
};

// @baa 0x0097e890
int C_0097e890::sub_0097e890(void)
{
    int param_1 = (int)this;

  sub_00967250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00946060(void);
int sub_0097e220(...);
extern undefined4 g_026b5f04;
// @baa 0x0097e8b0
int sub_0097e8b0(void)
{
  if (g_026b5f04 == 0) {
    g_026b5f04 = sub_0097e220(L"Engine");
    sub_00946060();
  }
  return g_026b5f04;
}

// @baa 0x0097e8e0
void sub_0097e8e0(void) { sub_0097d2c0(); }

// @baa 0x0097e8f0
// @baa 0x0097ea00
bool ASkeletalMeshActorMAT::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0097ea40
// @baa 0x0097eb50
bool ASkeletalMeshActorBasedOnExtremeContent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0097ec40 {
    undefined4 sub_0097ec40(byte);
};

int sub_0097e1a0(void);
// @baa 0x0097ec40
undefined4 C_0097ec40::sub_0097ec40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0097e1a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0097ec60
// @baa 0x0097ed70
bool AStaticMeshActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0097edb0
// @baa 0x0097eec0
bool AStaticMeshCollectionActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0097f4c0 {
    int sub_0097f4c0();
};

// @baa 0x0097f4c0
int C_0097f4c0::sub_0097f4c0(void)
{
    int param_1 = (int)this;

  sub_00967250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0097f4e0
void sub_0097f4e0(void) { sub_0097d2c0(); }
