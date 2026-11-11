// InterpEditor.cpp (part 1 of 3): 42 functions
// Placed here by: neighbours 27, class 9, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00ceae30(void);
int sub_00cfa3c0(...);
extern undefined4 g_026c5674;
// @baa 0x00c80b90
int sub_00c80b90(void)
{
  if (g_026c5674 == 0) {
    g_026c5674 = sub_00cfa3c0(L"Engine");
    sub_00ceae30();
  }
  return g_026c5674;
}

int sub_012c26f0(void);
int sub_012db100(...);
extern undefined4 g_026d5eac;
// @baa 0x01279310
int sub_01279310(void)
{
  if (g_026d5eac == 0) {
    g_026d5eac = sub_012db100(L"UnrealEd");
    sub_012c26f0();
  }
  return g_026d5eac;
}

struct C_view {
    int sub_00f734e0();
};

int sub_006311e0(...);
extern undefined4 g_0222d790;
extern undefined4 g_026667b4;
// @baa 0x012c0430
void UInterpEdTransBuffer::vf_140(void)
{
    int param_1 = (int)this;
  int *piVar1;
  ((C_view *)(this))->sub_00f734e0();
  if (*(int *)(param_1 + 0x4c) < 1) {
    sub_006311e0("ActiveCount>=1",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditor.cpp"
                 ,0x3a,&g_0222d790);
  }
  piVar1 = (int *)(param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    g_026667b4 = 0;
  }
  sub_00f734e0();
  return;
}

// @baa 0x012c2860
IMPLEMENT_CLASS_AT(UInterpEdTransBuffer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditor.cpp", 88);

// @baa 0x012c2970
int UInterpEdTransBuffer::vf_000(void) { return 1; }

// @baa 0x012c2980
bool UInterpEdTransBuffer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    undefined4 * sub_012c2ab0(byte);
};

int sub_0053dfa0(...);
int sub_00f80980(void);
extern undefined4 g_02230d2c;
extern undefined * g_02230d30;
// @baa 0x012c2ab0
undefined4 * C::sub_012c2ab0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02230d30);
  param_1[1] = (undefined4)(&g_02230d2c);
  sub_00f80980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012c3340 { void sub_012c0630(); void sub_012c3340(int); };

// @baa 0x012c3340
void C_012c3340::sub_012c3340(int) { sub_012c0630(); }

struct A_012c3400 { virtual void sub_012c5550(); char pad[408]; };

struct B_012c3400 { virtual void sub_012c5550(); };

struct C_012c3400 : A_012c3400, B_012c3400 { virtual void sub_012c5550(); C_012c3400(); };

C_012c3400::C_012c3400() {}

// @baa 0x012c3400
void C_012c3400::sub_012c5550() {}

struct A_012c3410 { virtual void sub_012c5550(); char pad[416]; };

struct B_012c3410 { virtual void sub_012c5550(); };

struct C_012c3410 : A_012c3410, B_012c3410 { virtual void sub_012c5550(); C_012c3410(); };

C_012c3410::C_012c3410() {}

// @baa 0x012c3410
void C_012c3410::sub_012c5550() {}

struct A_012c3420 { virtual void sub_012c5550(); char pad[424]; };

struct B_012c3420 { virtual void sub_012c5550(); };

struct C_012c3420 : A_012c3420, B_012c3420 { virtual void sub_012c5550(); C_012c3420(); };

C_012c3420::C_012c3420() {}

// @baa 0x012c3420
void C_012c3420::sub_012c5550() {}

struct A_012c3980 { virtual void sub_012c5c00(); char pad[416]; };

struct B_012c3980 { virtual void sub_012c5c00(); };

struct C_012c3980 : A_012c3980, B_012c3980 { virtual void sub_012c5c00(); C_012c3980(); };

C_012c3980::C_012c3980() {}

// @baa 0x012c3980
void C_012c3980::sub_012c5c00() {}

struct A_012c3990 { virtual void sub_012c5c00(); char pad[424]; };

struct B_012c3990 { virtual void sub_012c5c00(); };

struct C_012c3990 : A_012c3990, B_012c3990 { virtual void sub_012c5c00(); C_012c3990(); };

C_012c3990::C_012c3990() {}

// @baa 0x012c3990
void C_012c3990::sub_012c5c00() {}

struct A_012c39a0 { virtual void sub_012c5c00(); char pad[408]; };

struct B_012c39a0 { virtual void sub_012c5c00(); };

struct C_012c39a0 : A_012c39a0, B_012c39a0 { virtual void sub_012c5c00(); C_012c39a0(); };

C_012c39a0::C_012c39a0() {}

// @baa 0x012c39a0
void C_012c39a0::sub_012c5c00() {}

struct C_012c3ab0 { int a, b, c; C_012c3ab0(); };

// @baa 0x012c3ab0
C_012c3ab0::C_012c3ab0() : a(0), b(0), c(0) {}

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_012c3b80(INT Index) const;
};

// @baa 0x012c3b80
const QWORD* S::sub_012c3b80(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[16]; };

struct S_012c3bd0 {
    TArray<E> Items; // 0x00
    const E* sub_012c3bd0(INT Index) const;
};

// @baa 0x012c3bd0
const E* S_012c3bd0::sub_012c3bd0(INT Index) const
{
    return &Items(Index);
}

struct S_012c3c20 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_012c3c20(INT Index) const;
};

// @baa 0x012c3c20
const QWORD* S_012c3c20::sub_012c3c20(INT Index) const
{
    return &Items(Index);
}

struct C_012c3c70 { int a, b, c; C_012c3c70(); };

// @baa 0x012c3c70
C_012c3c70::C_012c3c70() : a(0), b(0), c(0) {}

struct C_012c3c80 { int a, b, c; C_012c3c80(); };

// @baa 0x012c3c80
C_012c3c80::C_012c3c80() : a(0), b(0), c(0) {}

struct C_012c3c90 { int a, b, c; C_012c3c90(); };

// @baa 0x012c3c90
C_012c3c90::C_012c3c90() : a(0), b(0), c(0) {}

struct C_012c3ca0 { int sub_012c3ca0(void); };

// @baa 0x012c3ca0
int C_012c3ca0::sub_012c3ca0(void) { return *(int*)((char*)this + 0); }

struct C_012c3d20 { int sub_012c3d20(void); };

// @baa 0x012c3d20
int C_012c3d20::sub_012c3d20(void) { return *(int*)((char*)this + 0); }

struct C_012c3da0 { int sub_012c3da0(void); };

// @baa 0x012c3da0
int C_012c3da0::sub_012c3da0(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_012c3db0{
void sub_012c3db0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
extern undefined2 g_01e3f3dc;
// @baa 0x012c3db0
void C_012c3db0::sub_012c3db0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(0>param_1[1]){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x24);
param_1[2]=iVar2;
if((*param_1)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*0x24,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0x24),(void*)(*param_1+param_2*0x24),
(iVar1-param_2)*0x24);
return;
}

struct C_012c3f40 { int sub_012c3f40(void); };

// @baa 0x012c3f40
int C_012c3f40::sub_012c3f40(void) { return *(int*)((char*)this + 0); }

struct S_012c3f50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_012c3f50(INT Index);
};

// @baa 0x012c3f50
DWORD* S_012c3f50::sub_012c3f50(INT Index)
{
    return &Items(Index);
}

struct C_012c3fa0 { int sub_012c3fa0(void); };

// @baa 0x012c3fa0
int C_012c3fa0::sub_012c3fa0(void) { return *(int*)((char*)this + 0); }

struct C_012c3fb0 { int sub_012c3fb0(void); };

// @baa 0x012c3fb0
int C_012c3fb0::sub_012c3fb0(void) { return *(int*)((char*)this + 0); }

// @baa 0x012da220
IMPLEMENT_CLASS_AT(UInterpEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditor.cpp", 16);

// @baa 0x012db100
struct C_012db640 {
    undefined4 * sub_012db640(undefined4, undefined4);
    int sub_00f94610(int, int);
};

extern undefined4 g_022322d4;
// @baa 0x012db640
undefined4 * C_012db640::sub_012db640(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_012db640 *)(this))->sub_00f94610(param_2, param_3);
  *param_1 = (undefined4)(&g_022322d4);
  return param_1;
}

struct C_012db660 {
    undefined4 * sub_012db660();
};

int sub_005c7a20(void);
extern undefined * g_022322e8;
// @baa 0x012db660
undefined4 * C_012db660::sub_012db660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_022322e8);
  return param_1;
}

// @baa 0x012db690
int UInterpEdTransBuffer::Begin(int a0) { return 0; }

// @baa 0x012db6a0
UINT UInterpEdTransBuffer::End() { return 1; }

// @baa 0x012db6b0
void UInterpEdTransBuffer::Cancel(int a0) {  }

// @baa 0x012db6c0
// @baa 0x012db740
// @baa 0x012db810
// @baa 0x012db840
int sub_012c2860(void);
int sub_012db840(...);
extern undefined4 g_026d5eb0;
// @baa 0x012db900
int sub_012db900(void)
{
  if (g_026d5eb0 == 0) {
    g_026d5eb0 = sub_012db840(L"UnrealEd");
    sub_012c2860();
  }
  return g_026d5eb0;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x012db930
void sub_012db930(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026d5eb0 == 0) {
    g_026d5eb0 = sub_012db840(L"UnrealEd");
    sub_012c2860();
  }
  sub_005e1960(g_026d5eb0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}
