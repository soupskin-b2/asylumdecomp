// UnCoreNative.cpp: 92 functions
// Placed here by: neighbours 36, class 23, callers 11, file 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00540020
IMPLEMENT_CLASS_AT(UComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1857);

// @baa 0x00540080
int sub_005c7a20(void);
extern undefined * g_01e72b40;
// @baa 0x005400a0
undefined4 * UComponent::sub_005400a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01e72b40);
  return param_1;
}

// @baa 0x005400c0
int sub_005400c0(int a0, int a1) { return a1; }

extern char g_01e72c50[];
struct C { C* sub_005400d0(void); };

// @baa 0x005400d0
C* C::sub_005400d0(void) { *(int*)((char*)this + 0) = (int)g_01e72c50; return this; }

// @baa 0x00540100
int sub_00540100(void) { return 0; }

// @baa 0x00540110
int sub_00540110(void) { return 0; }

// @baa 0x00540120
float __stdcall sub_00540120(int)
{
    return 0.0f;
}

// @baa 0x00540130
float UComponent::sub_00540130(int a, int b)
{
  return 0.0f;
}

// @baa 0x00540150
float UComponent::sub_00540150(int a, int b) { return 0.0f; }

// @baa 0x00540160
BYTE __stdcall sub_00540160(int a) { return 0; }

// @baa 0x00540250
DWORD UComponent::sub_00540250(DWORD param) {
    return 0xFFFFFFFF;
}

// @baa 0x00540260
void __stdcall sub_00540260(int a0) {  }

// @baa 0x00540270
int __stdcall sub_00540270(int a0, int a1) { return a0; }

// @baa 0x00540280
void __stdcall sub_00540280(int a0, int a1, int a2) {  }

// @baa 0x00540290
void __stdcall sub_00540290(int a0, int a1) {  }

// @baa 0x005402a0
void __stdcall sub_005402a0(int a0, int a1, int a2, int a3) {  }

// @baa 0x005402b0
int sub_005402b0(void) { return 0; }

// @baa 0x005402c0
void sub_005402c0(void) {  }

// @baa 0x0058c430
INT UComponent::vf_10c(UINT a0) { return 1; }

int sub_00542090(void);
int sub_00549b10(...);
extern undefined4 g_02676118;
// @baa 0x0058f3b0
int sub_0058f3b0(void)
{
  if (g_02676118 == 0) {
    g_02676118 = sub_00549b10(L"Core");
    sub_00542090();
  }
  return g_02676118;
}

// @baa 0x0059c1a0
IMPLEMENT_CLASS_AT(UTextBufferFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 97);

// @baa 0x0059c2b0
int UTextBufferFactory::vf_000(void) { return 1; }

// @baa 0x0059c2c0
bool UTextBufferFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059c340
IMPLEMENT_CLASS_AT(UTextBuffer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 116);

// @baa 0x0059c450
int UTextBuffer::vf_000(void) { return 1; }

// @baa 0x0059c460
bool UTextBuffer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059c4a0
IMPLEMENT_CLASS_AT(UMetaData, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 460);

// @baa 0x0059c5b0
int UMetaData::vf_000(void) { return 1; }

// @baa 0x0059c5c0
bool UMetaData::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059c600
IMPLEMENT_CLASS_AT(UEnum, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 664);

// @baa 0x0059c710
int UEnum::vf_000(void) { return 1; }

// @baa 0x0059c720
bool UEnum::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059c760
IMPLEMENT_CLASS_AT(UCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 674);

// @baa 0x0059c870
int UCommandlet::vf_000(void) { return 1; }

// @baa 0x0059c880
bool UCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0059c8c0 {
    int sub_005f2bf0(int);
};

struct A {
    char pad[0x28];
    C_0059c8c0 *m_pC;
    int sub_0059c8c0();
};

// @baa 0x0059c8c0
int A::sub_0059c8c0()
{
    return m_pC->sub_005f2bf0(0x78);
}

// @baa 0x0059cb80
// @baa 0x0059cc90
int UComponent::vf_000(void) { return 1; }

// @baa 0x0059cca0
bool UComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059cce0
IMPLEMENT_CLASS_AT(USubsystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1858);

// @baa 0x0059cdf0
int USubsystem::vf_000(void) { return 1; }

// @baa 0x0059ce00
bool USubsystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059ce40
IMPLEMENT_CLASS_AT(UInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1859);

// @baa 0x0059cf50
int UInterface::vf_000(void) { return 1; }

// @baa 0x0059cf60
bool UInterface::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

typedef uint size_t;

struct C_0059cfa0 {
    void sub_0059cfa0(int, int, int);
    int sub_0058c7b0(int, int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0059cfa0
void C_0059cfa0::sub_0059cfa0(int param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;
  ((C_0059cfa0 *)(this))->sub_0058c7b0(param_2, param_3, param_4);
  sub_01a37612((void *)(param_2 * param_4 + *param_1),0,param_3 * param_4);
  return;
}

// @baa 0x0059d090
void UObject::sub_0059d090(int param_2)
{
    int * param_1 = (int *)this;
  *param_1 = param_2;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  return;
}

// @baa 0x0059d130
void sub_0059d130(void) {  }

// @baa 0x0059d640
// @baa 0x0059d660
// @baa 0x005a1290
// @baa 0x005a1350
// @baa 0x005a1570
// @baa 0x005aa470
// @baa 0x005aa9a0
IMPLEMENT_CLASS_AT(UPackage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 1064);

int sub_005aa930(void);
int sub_005c7a70(...);
// @baa 0x005aa9b0
undefined4 UPackage::sub_005aa9b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_005aa930();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x7c);
  }
  return param_1;
}

// @baa 0x005aa9d0
// @baa 0x005add00
// @baa 0x005adee0
extern undefined * g_01e8c080;
// @baa 0x005b14f0
undefined4 * UObject::sub_005b14f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01e8c080);
  return param_1;
}

// @baa 0x005b1510
void sub_005b1510(void) {  }

// @baa 0x005b1520
// @baa 0x005b3970
// @baa 0x005b3b40
// @baa 0x005b3b60
int sub_005b3b80(void);
// @baa 0x005b3cf0
undefined4 ULinker::sub_005b3cf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005b3b80();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xe8);
  }
  return param_1;
}

// @baa 0x005b3d80
int UTextBufferFactory::sub_005b3d80(void)
{
    int param_1 = (int)this;

  return param_1 + -0xe8;
}

struct A_005b3d90 { virtual void sub_005b3f50(); char pad[228]; };

struct B_005b3d90 { virtual void sub_005b3f50(); };

struct C_005b3d90 : A_005b3d90, B_005b3d90 { virtual void sub_005b3f50(); C_005b3d90(); };

C_005b3d90::C_005b3d90() {}

// @baa 0x005b3d90
void C_005b3d90::sub_005b3f50() {}

int sub_005b3eb0(void);
// @baa 0x005b3f50
undefined4 UTextBufferFactory::sub_005b3f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005b3eb0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x180);
  }
  return param_1;
}

// @baa 0x005b3f80
// @baa 0x005b56d0
// @baa 0x005b5790
struct C_005b5850 {
    void sub_005b5850(int);
    int sub_005b2290(int);
};

int sub_006311e0(...);
extern undefined4 g_01e836c0;
extern undefined4 g_01e83794;
// @baa 0x005b5850
void C_005b5850::sub_005b5850(int param_2)
{
    int * param_1 = (int *)this;
  if (*param_1 == 0) {
    sub_006311e0("SourceRoot",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp"
                 ,0x6fa,&g_01e836c0);
  }
  if (param_1[1] == 0) {
    sub_006311e0("DestinationRoot",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp"
                 ,0x6fb,&g_01e83794);
  }
  if (param_2 != 0) {
    ((C_005b5850 *)(((char *)this + 0x5c)))->sub_005b2290(param_2);
  }
  return;
}

// @baa 0x005c07f0
int sub_005c0780(void);
// @baa 0x005c0800
undefined4 UMetaData::sub_005c0800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005c0780();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x6c);
  }
  return param_1;
}

// @baa 0x005c0870
int sub_0059c4a0(void);
int sub_005c0870(...);
extern undefined4 g_0268d078;
// @baa 0x005c0930
int sub_005c0930(void)
{
  if (g_0268d078 == 0) {
    g_0268d078 = sub_005c0870(L"Core");
    sub_0059c4a0();
  }
  return g_0268d078;
}

int sub_005eae70(...);
// @baa 0x005c0960
void sub_005c0960(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_0268d078 == 0) {
    g_0268d078 = sub_005c0870(L"Core");
    sub_0059c4a0();
  }
  sub_005eae70(g_0268d078,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

int sub_005421f0(void);
int sub_00546d10(...);
int sub_00568010(void);
int sub_00588270(...);
int sub_00588340(...);
int sub_00588ac0(...);
int sub_00588b80(...);
int sub_00588c40(...);
int sub_00588d00(...);
int sub_00588dd0(...);
int sub_00589090(void);
int sub_005892e0(void);
int sub_00589470(void);
int sub_0058a1b0(void);
int sub_0058a930(void);
int sub_0058aa40(void);
int sub_0059a670(void);
int sub_0059c080(void);
int sub_0059c0e0(...);
int sub_0059c140(...);
int sub_0059c1a0(void);
int sub_0059c340(void);
int sub_0059c600(void);
int sub_0059c760(void);
int sub_0059c990(void);
int sub_0059cb80(void);
int sub_0059cce0(void);
int sub_0059ce40(void);
int sub_005a1290(...);
int sub_005a1350(...);
int sub_005aa470(...);
int sub_005add00(...);
int sub_005adee0(...);
int sub_005b3970(...);
int sub_005b56d0(...);
int sub_005b5790(...);
int sub_005b6980(...);
int sub_005b6a40(...);
int sub_005b7e20(void);
int sub_005b7f70(void);
int sub_005bb5c0(...);
int sub_005c80f0(void);
int sub_005cb6d0(...);
int sub_005fba80(void);
int sub_005fbe20(void);
int sub_005fbf80(void);
int sub_005fc1a0(void);
int sub_0060f7d0(...);
int sub_0060f890(...);
int sub_006156a0(...);
int sub_0061e230(...);
int sub_0062c2a0(void);
int sub_0062d880(void);
int sub_0062daa0(void);
int sub_0062dec0(void);
int sub_00631830(...);
int sub_006318f0(...);
int sub_00631a00(...);
int sub_00631ac0(...);
int sub_00631b80(...);
int sub_00631c40(...);
int sub_00631d00(...);
int sub_00631dc0(...);
int sub_00631ee0(...);
int sub_006321f0(...);
int sub_006322b0(...);
int sub_00632370(...);
int sub_00632430(...);
int sub_00632550(...);
int sub_00632610(...);
int sub_006326d0(...);
int sub_00633360(void);
int sub_006334b0(void);
int sub_00633600(void);
int sub_00633750(void);
int sub_006338a0(void);
int sub_006339f0(void);
int sub_00633b40(void);
int sub_00633c90(void);
int sub_00633de0(void);
int sub_00634160(void);
int sub_006342b0(void);
int sub_00634470(void);
int sub_00636210(void);
int sub_00636360(void);
int sub_0063f2d0(...);
int sub_006454f0(...);
extern undefined4 g_0267611c;
extern undefined4 g_02688438;
extern undefined4 g_0268843c;
extern undefined4 g_02688440;
extern undefined4 g_02688444;
extern undefined4 g_02688448;
extern undefined4 g_0268844c;
extern undefined4 g_02688450;
extern undefined4 g_0268c8a0;
extern undefined4 g_0268d070;
extern undefined4 g_0268d074;
extern undefined4 g_0268d07c;
extern undefined4 g_0268d080;
extern undefined4 g_0268d084;
extern undefined4 g_0268d088;
extern undefined4 g_0268d08c;
extern undefined4 g_0268d090;
extern undefined4 g_0268d0b0;
extern undefined4 g_0268d0b4;
extern undefined4 g_0268d0b8;
extern undefined4 g_026a1c70;
extern undefined4 g_026a4b34;
extern undefined4 g_026a4b38;
extern undefined4 g_026a4b3c;
extern undefined4 g_026a4b40;
extern undefined4 g_026a4ba4;
extern undefined4 g_026acbb0;
extern undefined4 g_026acbb4;
extern undefined4 g_026acbd0;
extern undefined4 g_026acbd4;
extern undefined4 g_026acbd8;
extern undefined4 g_026acbdc;
extern undefined4 g_026acbe0;
extern undefined4 g_026acbe4;
extern undefined4 g_026acbe8;
extern undefined4 g_026acbec;
extern undefined4 g_026acbf0;
extern undefined4 g_026acbf4;
extern undefined4 g_026acbf8;
extern undefined4 g_026acbfc;
extern undefined4 g_026acc00;
extern undefined4 g_026acc04;
extern undefined4 g_026acc08;
// @baa 0x005c0a50
void sub_005c0a50(int * param_1)
{
  if (g_026acc00 == 0) {
    g_026acc00 = sub_00632550(L"Core");
    sub_00634160();
  }
  if (g_026acbe0 == 0) {
    g_026acbe0 = sub_00631c40(L"Core");
    sub_00633750();
  }
  if (g_026acbd4 == 0) {
    g_026acbd4 = sub_00631a00(L"Core");
    sub_00633360();
  }
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  if (g_026acbec == 0) {
    g_026acbec = sub_00631ee0(L"Core");
    sub_00636210();
  }
  if (g_0268d080 == 0) {
    g_0268d080 = sub_005b5790(L"Core");
    sub_0059c760();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0059c080);
  *param_1 = *param_1 + 1;
  if (g_0268d088 == 0) {
    g_0268d088 = sub_005a1290(L"Core");
    sub_0059cb80();
  }
  if (g_026acbf0 == 0) {
    g_026acbf0 = sub_006321f0(L"Core");
    sub_00636360();
  }
  if (g_02688450 == 0) {
    g_02688450 = sub_00588340(L"Core");
    sub_0058aa40();
  }
  if (g_026acbdc == 0) {
    g_026acbdc = sub_00631b80(L"Core");
    sub_00633600();
  }
  if (g_02676118 == 0) {
    g_02676118 = sub_00549b10(L"Core");
    sub_00542090();
  }
  if (g_0267611c == 0) {
    g_0267611c = sub_00546d10(L"Core");
    sub_005421f0();
  }
  if (g_0268d07c == 0) {
    g_0268d07c = sub_005b3970(L"Core");
    sub_0059c600();
  }
  if (g_026a4b34 == 0) {
    g_026a4b34 = sub_0060f7d0(L"Core");
    sub_005fba80();
  }
  if (g_026a4b38 == 0) {
    g_026a4b38 = sub_0060f890(L"Core");
    sub_005fbe20();
  }
  if (g_02688438 == 0) {
    g_02688438 = sub_00588ac0(L"Core");
    sub_00568010();
  }
  if (g_026acbe4 == 0) {
    g_026acbe4 = sub_00631d00(L"Core");
    sub_006338a0();
  }
  if (g_0268844c == 0) {
    g_0268844c = sub_00588270(L"Core");
    sub_0058a930();
  }
  if (g_026a4b3c == 0) {
    g_026a4b3c = sub_006156a0(L"Core");
    sub_005fbf80();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0059c0e0);
  *param_1 = *param_1 + 1;
  if (g_0268d090 == 0) {
    g_0268d090 = sub_005a1350(L"Core");
    sub_0059ce40();
  }
  if (g_026acbf4 == 0) {
    g_026acbf4 = sub_006322b0(L"Core");
    sub_00633b40();
  }
  if (g_026acbd8 == 0) {
    g_026acbd8 = sub_00631ac0(L"Core");
    sub_006334b0();
  }
  if (g_0268d0b0 == 0) {
    g_0268d0b0 = sub_005b6980(L"Core");
    sub_0059a670();
  }
  if (g_0268d0b4 == 0) {
    g_0268d0b4 = sub_005bb5c0(L"Core");
    sub_005b7e20();
  }
  if (g_0268d0b8 == 0) {
    g_0268d0b8 = sub_005b6a40(L"Core");
    sub_005b7f70();
  }
  if (g_026acc04 == 0) {
    g_026acc04 = sub_00632610(L"Core");
    sub_006342b0();
  }
  if (g_0268d078 == 0) {
    g_0268d078 = sub_005c0870(L"Core");
    sub_0059c4a0();
  }
  if (g_026acbf8 == 0) {
    g_026acbf8 = sub_00632370(L"Core");
    sub_00633c90();
  }
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  (&g_0268c8a0)[*param_1] = (undefined4)(&sub_0059c140);
  *param_1 = *param_1 + 1;
  if (g_026acbe8 == 0) {
    g_026acbe8 = sub_00631dc0(L"Core");
    sub_006339f0();
  }
  if (g_026acbb4 == 0) {
    g_026acbb4 = sub_00631830(L"Core");
    sub_0062daa0();
  }
  if (g_026a4ba4 == 0) {
    g_026a4ba4 = sub_0063f2d0(L"Core");
    sub_0062c2a0();
  }
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  if (g_026a4b40 == 0) {
    g_026a4b40 = sub_0061e230(L"Core");
    sub_005fc1a0();
  }
  if (g_026acbd0 == 0) {
    g_026acbd0 = sub_006318f0(L"Core");
    sub_0062dec0();
  }
  if (g_02688440 == 0) {
    g_02688440 = sub_00588c40(L"Core");
    sub_0058a1b0();
  }
  if (g_02688444 == 0) {
    g_02688444 = sub_00588d00(L"Core");
    sub_005892e0();
  }
  if (g_026acbfc == 0) {
    g_026acbfc = sub_00632430(L"Core");
    sub_00633de0();
  }
  if (g_0268843c == 0) {
    g_0268843c = sub_00588b80(L"Core");
    sub_00589090();
  }
  if (g_026acc08 == 0) {
    g_026acc08 = sub_006326d0(L"Core");
    sub_00634470();
  }
  if (g_0268d08c == 0) {
    g_0268d08c = sub_005aa470(L"Core");
    sub_0059cce0();
  }
  if (g_026acbb0 == 0) {
    g_026acbb0 = sub_006454f0(L"Core");
    sub_0062d880();
  }
  if (g_0268d074 == 0) {
    g_0268d074 = sub_005add00(L"Core");
    sub_0059c340();
  }
  if (g_0268d070 == 0) {
    g_0268d070 = sub_005b56d0(L"Core");
    sub_0059c1a0();
    return;
  }
  return;
}

struct TVector3 {
    FLOAT X, Y, Z;
    TVector3& Set(FLOAT F);
};

// @baa 0x005400e0
TVector3& TVector3::Set(FLOAT F)
{
    X = F;
    Y = F;
    Z = F;
    return *this;
}

// @baa 0x0058f3e0
int sub_0058f3e0(void)
{
  if (g_0267611c == 0) {
    g_0267611c = sub_00546d10(L"Core");
    sub_005421f0();
  }
  return g_0267611c;
}

// @baa 0x0058f410
int sub_0058f410(int a0, int a1) { return a1; }

extern undefined * g_01e8b828;
// @baa 0x0058f420
undefined4 * UObject::sub_0058f420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01e8b828);
  return param_1;
}

// @baa 0x0059c990

// @baa 0x0059caa0
int UPackage::vf_000(void) { return 1; }

// @baa 0x0059cab0
bool UPackage::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0059d720
int __stdcall sub_0059d720(int a0, int a1) { return 0; }

struct USubsystem_ : public USubsystem {
    BYTE Pad[0x80 - sizeof(USubsystem)];
    INT Num;
    INT Max;
    UBOOL sub_0059d8a0();
};

// @baa 0x0059d8a0
UBOOL USubsystem_::sub_0059d8a0()
{
    return Num >= Max;
}

// @baa 0x005adfa0
int sub_005adfa0(void)
{
  if (g_0268d074 == 0) {
    g_0268d074 = sub_005add00(L"Core");
    sub_0059c340();
  }
  return g_0268d074;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x005adfd0
void sub_005adfd0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d074 == 0) {
    g_0268d074 = sub_005add00(L"Core");
    sub_0059c340();
  }
  sub_005e1960(g_0268d074,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

#define RF_PendingKill ((QWORD)0x2000000000000000)
/* Kit gap: UObject::HasAnyFlags (UnObjBas.h); ObjectFlags is an FQWord here. */
struct UObject_ : public UObject
{
	FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
};

/* Kit gap: UObject::GetOuter() (inline, returns Outer) isn't declared; the check text needs the call spelled out. */
#define GetOuter() Outer
// @baa 0x0059cb30
/* A component is pending kill along with its owner. */
UBOOL UComponent::IsPendingKill()
{
#line 1326 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp"
	check(GetOuter());
	return ((UObject_*)this)->HasAnyFlags(RF_PendingKill) || GetOuter()->IsPendingKill();
}

#line 823 "candidate.cpp"
