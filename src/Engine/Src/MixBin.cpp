// MixBin.cpp (part 1 of 3): 73 functions
// Placed here by: neighbours 65, class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bec7b0
IMPLEMENT_CLASS_AT(UMixBin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MixBin.cpp", 7);

// @baa 0x00bec810
// @baa 0x00bed180
// @baa 0x00bed290
int UMixBin::vf_000(void) { return 1; }

// @baa 0x00bed2a0
bool UMixBin::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bed2e0
int sub_00bed2e0(int a0, int a1) { return a1; }

// @baa 0x00bed2f0
IMPLEMENT_CLASS_AT(URDepthBiasSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RDepthBiasSkeletalMeshComponent.cpp", 4);

// @baa 0x00bed400
int URDepthBiasSkeletalMeshComponent::vf_000(void) { return 1; }

// @baa 0x00bed410
bool URDepthBiasSkeletalMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bed450
IMPLEMENT_CLASS_AT(URFMODSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RFMODSound.cpp", 11);

// @baa 0x00bed560
int URFMODSound::vf_000(void) { return 1; }

// @baa 0x00bed570
bool URFMODSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bed5b0
INT URFMODSound::vf_0dc() {
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x120) & 0x1000;
}

// @baa 0x00bed6c0
undefined4 URFMODSound::vf_114(byte param_2)
{
    int param_1 = (int)this;

  if (((param_2 & 8) != 0) && (*(char *)(param_1 + 0x128) != '\0')) {
    return 1;
  }
  return 0;
}

// @baa 0x00bed6e0
int sub_00bed6e0(void) { return 1; }

// @baa 0x00bed6f0
int sub_00bed6f0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_020260f8;
// @baa 0x00bed700
undefined4 * UObject::sub_00bed700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020260f8);
  return param_1;
}

// @baa 0x00bed720
IMPLEMENT_CLASS_AT(URPhysOnContactHandler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RPhysOnContactHandler.cpp", 6);

// @baa 0x00bed780
// @baa 0x00bed7a0
// @baa 0x00bed8b0
int URPhysOnContactHandler::vf_000(void) { return 1; }

// @baa 0x00bed8c0
bool URPhysOnContactHandler::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern "C" int g_026c50b8;
extern "C" int g_026c50bc;
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
    void sub_00bed900();
};

// @baa 0x00bed900
void UObjectThunk::sub_00bed900()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c50b8, g_026c50bc, 0), 0, 0);
}

// @baa 0x00bed930
int sub_00bed930(int a0, int a1) { return a1; }

// @baa 0x00bed940
IMPLEMENT_CLASS_AT(URSeqAct_SetMaterialInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RSeqAct_SetMaterialInstance.cpp", 4);

// @baa 0x00beda50
int URSeqAct_SetMaterialInstance::vf_000(void) { return 1; }

// @baa 0x00beda60
bool URSeqAct_SetMaterialInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    int sub_00bedaa0();
};

// @baa 0x00bedaa0
int C::sub_00bedaa0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0xc;
}

struct C_00bedab0 {
    int sub_00bedab0();
};

// @baa 0x00bedab0
int C_00bedab0::sub_00bedab0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 4;
}

struct C_00bedaf0 { int a, b, c; C_00bedaf0(); };

// @baa 0x00bedaf0
C_00bedaf0::C_00bedaf0() : a(0), b(0), c(0) {}

struct C_00bedb00 { int a, b, c; C_00bedb00(); };

// @baa 0x00bedb00
C_00bedb00::C_00bedb00() : a(0), b(0), c(0) {}

struct C_00bedb10 { int a, b, c; C_00bedb10(); };

// @baa 0x00bedb10
C_00bedb10::C_00bedb10() : a(0), b(0), c(0) {}

struct C_00bedb20 { int sub_00bedb20(void); };

// @baa 0x00bedb20
int C_00bedb20::sub_00bedb20(void) { return *(int*)((char*)this + 4); }

struct C_00bedb30 { int sub_00bedb30(void); };

// @baa 0x00bedb30
int C_00bedb30::sub_00bedb30(void) { return *(int*)((char*)this + 0); }

struct C_00bedb70 { C_00bedb70* sub_00bedb70(int a0); };

// @baa 0x00bedb70
C_00bedb70* C_00bedb70::sub_00bedb70(int a0) { return this; }

struct C_00bedb80 { int sub_00bedb80(void); };

// @baa 0x00bedb80
int C_00bedb80::sub_00bedb80(void) { return *(int*)((char*)this + 0); }

struct C_00bedc00 { int sub_00bedc00(void); };

// @baa 0x00bedc00
int C_00bedc00::sub_00bedc00(void) { return *(int*)((char*)this + 0); }

struct C_00bedc10 {
    int sub_00bedc10();
};

// @baa 0x00bedc10
int C_00bedc10::sub_00bedc10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bedc20 { int a, b; C_00bedc20(int, int); };

// @baa 0x00bedc20
C_00bedc20::C_00bedc20(int x, int y) : a(x), b(y) {}

struct C_00bedc40 {
    int sub_00bedc40();
};

// @baa 0x00bedc40
int C_00bedc40::sub_00bedc40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bedc50 {
    int sub_00bedc50();
};

// @baa 0x00bedc50
int C_00bedc50::sub_00bedc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bedc60 { int a, b; C_00bedc60(int, int); };

// @baa 0x00bedc60
C_00bedc60::C_00bedc60(int x, int y) : a(x), b(y) {}

struct C_00bedc80 {
    int sub_00bedc80();
};

// @baa 0x00bedc80
int C_00bedc80::sub_00bedc80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bedc90 {
    int sub_00bedc90();
};

// @baa 0x00bedc90
int C_00bedc90::sub_00bedc90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00bedca0 { int a, b; C_00bedca0(int, int); };

// @baa 0x00bedca0
C_00bedca0::C_00bedca0(int x, int y) : a(x), b(y) {}

struct C_00bedcc0 { int sub_00bedcc0(void); };

// @baa 0x00bedcc0
int C_00bedcc0::sub_00bedcc0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00bedcd0(INT Index);
};

// @baa 0x00bedcd0
DWORD* S::sub_00bedcd0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00bedd20
int sub_00bedd20(int a0) { return *(int*)a0; }

// @baa 0x00bedd30
bool sub_00bedd30(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00bedd40 { int a, b; C_00bedd40(const C_00bedd40 &); };

// @baa 0x00bedd40
C_00bedd40::C_00bedd40(const C_00bedd40 &o) : a(o.a), b(o.b) {}

// @baa 0x00bedda0
int sub_00bedda0(int a0) { return *(int*)a0; }

// @baa 0x00beddb0
bool sub_00beddb0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00beddc0 { int a, b; C_00beddc0(const C_00beddc0 &); };

// @baa 0x00beddc0
C_00beddc0::C_00beddc0(const C_00beddc0 &o) : a(o.a), b(o.b) {}

struct C_00bede20 { int sub_00bede20(void); };

// @baa 0x00bede20
int C_00bede20::sub_00bede20(void) { return *(int*)((char*)this + 0); }

// @baa 0x00bede30
int sub_00bede30(int a0) { return *(int*)a0; }

struct C_00bede40 {
    void sub_00bede40(int *);
};

// @baa 0x00bede40
void C_00bede40::sub_00bede40(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_00bede50 { void sub_01ab3c10(int); C_00bede50 *sub_00bede50(int); };

// @baa 0x00bede50
C_00bede50 *C_00bede50::sub_00bede50(int a) { sub_01ab3c10(a); return this; }

struct C_00bede70 {
    int sub_00bede70(int);
};

// @baa 0x00bede70
int C_00bede70::sub_00bede70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bede80 {
    int sub_00bede80(int);
};

// @baa 0x00bede80
int C_00bede80::sub_00bede80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bede90 {
    int sub_00bede90(int);
};

// @baa 0x00bede90
int C_00bede90::sub_00bede90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00bedea0 { int sub_00bedea0(void); };

// @baa 0x00bedea0
int C_00bedea0::sub_00bedea0(void) { return *(int*)((char*)this + 20); }

struct C_00bedeb0 { int sub_00bedeb0(void); };

// @baa 0x00bedeb0
int C_00bedeb0::sub_00bedeb0(void) { return *(int*)((char*)this + 20); }

struct C_00bedec0 { int sub_00bedec0(void); };

// @baa 0x00bedec0
int C_00bedec0::sub_00bedec0(void) { return *(int*)((char*)this + 20); }

struct C_00beded0 { int sub_00beded0(void); };

// @baa 0x00beded0
int C_00beded0::sub_00beded0(void) { return *(int*)((char*)this + 20); }

struct C_00bedee0 { int sub_00bedee0(void); };

// @baa 0x00bedee0
int C_00bedee0::sub_00bedee0(void) { return *(int*)((char*)this + 20); }

struct C_00bedef0 { int sub_00bedef0(void); };

// @baa 0x00bedef0
int C_00bedef0::sub_00bedef0(void) { return *(int*)((char*)this + 20); }

int sub_00627f00(...);
// @baa 0x00bedf90
void sub_00bedf90(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x00bedfb0
void sub_00bedfb0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00bedfd0 { int a, b; C_00bedfd0(const C_00bedfd0 &); };

// @baa 0x00bedfd0
C_00bedfd0::C_00bedfd0(const C_00bedfd0 &o) : a(o.a), b(o.b) {}

struct C_00bedff0 { int a, b; C_00bedff0(const C_00bedff0 &); };

// @baa 0x00bedff0
C_00bedff0::C_00bedff0(const C_00bedff0 &o) : a(o.a), b(o.b) {}

// @baa 0x00bee080
// @baa 0x00bee370

/* Kit gap: FUntypedBulkData::RemoveBulkData (0x0056bfe0) isn't declared. */
struct FUntypedBulkData_ : public FUntypedBulkData_Mirror
{
	void RemoveBulkData();
};

// @baa 0x00bed6a0
/* Cooking drops both console FMOD payloads (the PC data stays). */
void URFMODSound::StripData(UE3::EPlatformType TargetPlatform)
{
	((FUntypedBulkData_&)FMODPS3RawData).RemoveBulkData();
	((FUntypedBulkData_&)FMODXboxRawData).RemoveBulkData();
}
