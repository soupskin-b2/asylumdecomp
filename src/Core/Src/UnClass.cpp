// UnClass.cpp (part 1 of 2): 85 functions
// Placed here by: neighbours 54, class 21, file 6, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005681d0
void UStruct::AddCppProperty(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = param_2;
  return;
}

struct C {
    void sub_00568250(int);
};

// @baa 0x00568250
void C::sub_00568250(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 1) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// @baa 0x00568360
int UStruct::vf_000(void) { return 1; }

// @baa 0x00568370
int UScriptStruct::vf_000(void) { return 1; }

// @baa 0x00568380
void sub_00568380(void) {  }

// @baa 0x00568390
int UState::vf_000(void) { return 1; }

// @baa 0x005684b0
int UClass::vf_000(void) { return 1; }

// @baa 0x00568530
int UFunction::vf_000(void) { return 1; }

// @baa 0x0056a590
IMPLEMENT_CLASS_AT(UField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 86);

struct C_005726f0 { int sub_005726f0(void); };

// @baa 0x005726f0
int C_005726f0::sub_005726f0(void) { return *(int*)((char*)this + 128); }

struct C_00572700 { void sub_00572700(int a0); };

// @baa 0x00572700
void C_00572700::sub_00572700(int a0) { *(int*)((char*)this + 136) = a0; }

struct C_00572710 { int sub_00572710(void); };

// @baa 0x00572710
int C_00572710::sub_00572710(void) { return *(int*)((char*)this + 136); }

struct C_00572720 {
    undefined4 sub_00572720(undefined4);
    int sub_0053ea70(int, int);
};

// @baa 0x00572720
undefined4 C_00572720::sub_00572720(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00572720 *)(this))->sub_0053ea70(param_2, 4);
  return param_1;
}

extern char g_01e7d81c[];
// @baa 0x00572980
int UStruct::vf_130(void) { return (int)g_01e7d81c; }

// @baa 0x00572990
int UStruct::vf_118(void) { return *(int*)((char*)this + 68); }

// @baa 0x005729a0
int UStruct::vf_11c(void) { return *(int*)((char*)this + 48); }

// @baa 0x00575450
IMPLEMENT_CLASS_AT(UStruct, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 1196);

// @baa 0x00575500
// @baa 0x00575530
UScriptStruct::UScriptStruct()
{
}

int sub_00575580(void);
int sub_005c7a70(...);
// @baa 0x00575600
undefined4 UScriptStruct::sub_00575600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00575580();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xa0);
  }
  return param_1;
}

struct C_00575630 {
    undefined4 * sub_00575630();
};

int sub_005c7a20(void);
extern undefined * g_01e7d958;
// @baa 0x00575630
undefined4 * C_00575630::sub_00575630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = (undefined4)(&g_01e7d958);
  return param_1;
}

// @baa 0x00575660
int UFunction::vf_110(void) { return 0; }

// @baa 0x00575670
int UFunction::vf_11c(void) { return 0; }

// @baa 0x00575680
IMPLEMENT_CLASS_AT(UFunction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 2342);

// @baa 0x005756e0
struct C_00575710 { void sub_00572b30(int); void sub_00575710(); };

// @baa 0x00575710
void C_00575710::sub_00575710() { sub_00572b30(0); }

// @baa 0x00575730
IMPLEMENT_CLASS_AT(UConst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 2357);

// @baa 0x00578c70
// @baa 0x00578cb0
IMPLEMENT_CLASS_AT(UScriptStruct, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 1302);

// @baa 0x00578cc0
int sub_0057bd80(void);
// @baa 0x00586d40
int UState::sub_00586d40(void)
{
    int param_1 = (int)this;

  sub_0057bd80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00586d60 { void sub_00583540(int); C_00586d60 *sub_00586d60(int); };

// @baa 0x00586d60
C_00586d60 *C_00586d60::sub_00586d60(int a) { sub_00583540(a); return this; }

struct C_00586f90 { int sub_00586f90(void); };

// @baa 0x00586f90
int C_00586f90::sub_00586f90(void) { return *(int*)((char*)this + 392); }

struct C_00586fa0 {
    FString sub_00586fa0();
};

// @baa 0x00586fa0
FString C_00586fa0::sub_00586fa0()
{
    return TEXT("FReloadObjectArc");
}

struct C_00587170 {
    FString sub_00587170();
};

// @baa 0x00587170
FString C_00587170::sub_00587170()
{
    return TEXT("FFindReferencersArchive");
}

struct C_00587200 {
    undefined4 sub_00587200(byte);
};

int sub_0053dfa0(...);
int sub_005871a0(void);
// @baa 0x00587200
undefined4 C_00587200::sub_00587200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005871a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00582840();
// @baa 0x00587220
void sub_00587220(void) { sub_00582840(); }

void sub_005828d0();
// @baa 0x00587230
void sub_00587230(void) { sub_005828d0(); }

void sub_00582940();
// @baa 0x00587240
void sub_00587240(void) { sub_00582940(); }

void sub_005829b0();
// @baa 0x00587250
void sub_00587250(void) { sub_005829b0(); }

void sub_00582a20();
// @baa 0x00587260
void sub_00587260(void) { sub_00582a20(); }

// @baa 0x005872f0
int UState::vf_110(void) { return 1; }

// @baa 0x00587300
int UState::sub_00587300(void) { return *(int*)((char*)this + 48); }

// @baa 0x00587310
int UState::vf_11c(void) { return *(int*)((char*)this + 48); }

struct C_005873d0 { void sub_00583540(int); C_005873d0 *sub_005873d0(int); };

// @baa 0x005873d0
C_005873d0 *C_005873d0::sub_005873d0(int a) { sub_00583540(a); return this; }

int sub_00586fd0(void);
// @baa 0x005873f0
undefined4 UState::sub_005873f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00586fd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00587aa0(void);
// @baa 0x00587b90
undefined4 UState::sub_00587b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00587aa0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xd8);
  }
  return param_1;
}

// @baa 0x00587d80
int UClass::vf_110(void) { return 1; }

// @baa 0x00587d90
int UClass::vf_11c(void) { return *(int*)((char*)this + 48); }

int sub_00587dc0(void);
// @baa 0x00587ec0
undefined4 UClass::sub_00587ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00587dc0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1dc);
  }
  return param_1;
}

// @baa 0x00588270
// @baa 0x00588340
struct C_005884e0 {
    undefined4 * sub_005884e0();
};

int sub_00586d80(void);
extern undefined * g_01e7dfc8;
// @baa 0x005884e0
undefined4 * C_005884e0::sub_005884e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00586d80();
  param_1[5] = 1;
  param_1[0xbd] = 1;
  *param_1 = (undefined4)(&g_01e7dfc8);
  param_1[4] = 0;
  param_1[0x1b] = 0x400;
  return param_1;
}

struct C_00588510 {
    FString sub_00588510();
};

// @baa 0x00588510
FString C_00588510::sub_00588510()
{
    return TEXT("FArchetypePropagationArc");
}

void sub_00588400();
// @baa 0x00588540
void sub_00588540(void) { sub_00588400(); }

struct C_00588550 {
    undefined4 * sub_00588550();
};

extern undefined * g_01e7e060;
// @baa 0x00588550
undefined4 * C_00588550::sub_00588550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00586d80();
  *param_1 = (undefined4)(&g_01e7e060);
  param_1[0xbd] = 1;
  param_1[0x1b] = 0x400;
  return param_1;
}

struct C_00588580 {
    FString sub_00588580();
};

// @baa 0x00588580
FString C_00588580::sub_00588580()
{
    return TEXT("FArchiveReplaceArchetype");
}

// @baa 0x005885b0
void sub_005885b0(void) { sub_00588400(); }

int sub_005875a0(void);
// @baa 0x005885c0
undefined4 UState::sub_005885c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005875a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00588900
void UState::sub_00588900(int a0) { *(int*)((char*)this + 132) = a0; }

// @baa 0x00588910
int UState::sub_00588910(void) { return *(int*)((char*)this + 132); }

// @baa 0x00588920
undefined4 UState::sub_00588920(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x80) + 4);
}

typedef undefined4 size_t;

struct C_view{
int sub_0040cf70(int);
};

int sub_006311e0(...);
void*sub_01a375f0(void*,void*,size_t);
extern undefined2 g_01e3f3dc;
// @baa 0x00588930
void UState::sub_00588930(void*param_2,size_t param_3)
{
int*piVar1;
int param_1=(int)this;
int iVar2;
int iVar3;
if((param_2!=(void*)0x0)&&(0<(int)param_3)){
if(*(int*)(0x84+param_1)==*(int*)(*(int*)(param_1+0x80)+4)){
((C_view*)((*(char**)((char*)this+0x80))))->sub_0040cf70(param_3);
}
piVar1=*(int**)(param_1+0x80);
iVar2=*(int*)(param_1+0x84);
if((iVar2<0)||((iVar3=piVar1[1],iVar2>=iVar3&&((iVar2!=0||(iVar3!=0)))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
sub_01a375f0((void*)(*piVar1+iVar2),param_2,param_3);
*(int*)(param_1+0x84)=*(int*)(param_1+0x84)+param_3;
}
return;
}

struct C_005889c0 {
    FString sub_005889c0();
};

// @baa 0x005889c0
FString C_005889c0::sub_005889c0()
{
    return TEXT("FDuplicateDataWriter");
}

int sub_005889f0(void);
// @baa 0x00588a50
undefined4 UState::sub_00588a50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005889f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00588aa0
IMPLEMENT_CLASS_AT(UState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 1364);

// @baa 0x00588ab0
IMPLEMENT_CLASS_AT(UClass, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 2206);

// @baa 0x00588ac0
// @baa 0x00588b80
// @baa 0x00588c40
// @baa 0x00588d00
struct C_00589060 {
    FString sub_00589060();
};

// @baa 0x00589060
FString C_00589060::sub_00589060()
{
    return TEXT("FArchiveTraceRoute");
}

// @baa 0x00589090
// @baa 0x005891a0
bool UStruct::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x005891e0
bool UConst::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00589220 {
    undefined4 sub_00589220(byte);
};

int sub_00588ef0(void);
// @baa 0x00589220
undefined4 C_00589220::sub_00589220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588ef0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005892a0
bool UScriptStruct::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x005892e0
// @baa 0x005893f0
bool UState::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00589430
bool UFunction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00589470
// @baa 0x00589530
bool UClass::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0058a1b0
// @baa 0x0058a930
extern "C" void sub_0058b4d0();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0058bbd0();
};

// @baa 0x0058bbd0
void CNode::sub_0058bbd0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_0058b4d0();
}
