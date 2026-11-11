// UnrealEd_12a0000.cpp (part 1 of 6): 59 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_012a0490(byte);
};

int sub_0053dfa0(...);
int sub_0129d230(void);
// @baa 0x012a0490
undefined4 C::sub_012a0490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0129d230();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012a09c0
IMPLEMENT_CLASS_AT(UCascadeOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 13);

// @baa 0x012a0af0
bool UCascadeOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012a0b30
IMPLEMENT_CLASS_AT(UCascadePreviewComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 14);

// @baa 0x012a0c40
int UCascadePreviewComponent::vf_000(void) { return 1; }

// @baa 0x012a0c50
bool UCascadePreviewComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012a0c90
IMPLEMENT_CLASS_AT(UCascadeParticleSystemComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 19);

// @baa 0x012a0da0
int UCascadeParticleSystemComponent::vf_000(void) { return 1; }

// @baa 0x012a0db0
bool UCascadeParticleSystemComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_0222452c[];
struct C_012a0ef0 { C_012a0ef0* sub_012a0ef0(void); };

// @baa 0x012a0ef0
C_012a0ef0* C_012a0ef0::sub_012a0ef0(void) { *(int*)((char*)this + 0) = (int)g_0222452c; return this; }

// @baa 0x012a0f50
void __stdcall sub_012a0f50(int a0) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_012a1040;
};

struct C_012a1040 {
    void sub_012a1040(wxCommandEvent *);
};

// @baa 0x012a1040
void C_012a1040::sub_012a1040(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x314) + 0x300) = (uint)bVar1;
  return;
}

struct C_012a10e0 { int a, b, c; C_012a10e0(); };

// @baa 0x012a10e0
C_012a10e0::C_012a10e0() : a(0), b(0), c(0) {}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_012a10f0(INT Index) const;
};

// @baa 0x012a10f0
const DWORD* S::sub_012a10f0(INT Index) const
{
    return &Items(Index);
}

struct C_012a1140 { int a, b, c; C_012a1140(); };

// @baa 0x012a1140
C_012a1140::C_012a1140() : a(0), b(0), c(0) {}

struct C_012a1220 { int a, b, c; C_012a1220(); };

// @baa 0x012a1220
C_012a1220::C_012a1220() : a(0), b(0), c(0) {}

struct C_012a1230 { int a, b, c; C_012a1230(); };

// @baa 0x012a1230
C_012a1230::C_012a1230() : a(0), b(0), c(0) {}

struct C_012a1240 { int a, b, c; C_012a1240(); };

// @baa 0x012a1240
C_012a1240::C_012a1240() : a(0), b(0), c(0) {}

struct C_012a1250 { int a, b, c; C_012a1250(); };

// @baa 0x012a1250
C_012a1250::C_012a1250() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_012a12d0{
void sub_012a12d0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x012a12d0
void C_012a12d0::sub_012a12d0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
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
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_012a1460 { int sub_012a1460(void); };

// @baa 0x012a1460
int C_012a1460::sub_012a1460(void) { return *(int*)((char*)this + 0); }

struct C_012a14e0 { int sub_012a14e0(void); };

// @baa 0x012a14e0
int C_012a14e0::sub_012a14e0(void) { return *(int*)((char*)this + 0); }

struct C_012a1560 { int sub_012a1560(void); };

// @baa 0x012a1560
int C_012a1560::sub_012a1560(void) { return *(int*)((char*)this + 0); }

struct C_012a1570 { int sub_012a1570(void); };

// @baa 0x012a1570
int C_012a1570::sub_012a1570(void) { return *(int*)((char*)this + 0); }

struct C_012a1580 { int sub_012a1580(void); };

// @baa 0x012a1580
int C_012a1580::sub_012a1580(void) { return *(int*)((char*)this + 0); }

struct C_012a1590 { int sub_012a1590(void); };

// @baa 0x012a1590
int C_012a1590::sub_012a1590(void) { return *(int*)((char*)this + 0); }

struct S_012a1730 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_012a1730(INT Index) const;
};

// @baa 0x012a1730
const DWORD* S_012a1730::sub_012a1730(INT Index) const
{
    return &Items(Index);
}

struct S_012a17f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_012a17f0(INT Index) const;
};

// @baa 0x012a17f0
const DWORD* S_012a17f0::sub_012a17f0(INT Index) const
{
    return &Items(Index);
}

int sub_00c38ac0(void);
// @baa 0x012a1840
undefined4 UObject::sub_012a1840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012a18b0 {
    int sub_012a18b0(int);
};

// @baa 0x012a18b0
int C_012a18b0::sub_012a18b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_012a18c0 {
    int sub_012a18c0(int);
};

// @baa 0x012a18c0
int C_012a18c0::sub_012a18c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x012a18d0
void __stdcall sub_012a18d0(int a0, int a1) {  }

struct E { BYTE Bytes[24]; };

struct S_012a18e0 {
    TArray<E> Items; // 0x00
    E* sub_012a18e0(INT Index);
};

// @baa 0x012a18e0
E* S_012a18e0::sub_012a18e0(INT Index)
{
    return &Items(Index);
}

struct C_012a2680 {
    void sub_012a2680(int, int);
    int sub_012a12d0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x012a2680
void C_012a2680::sub_012a2680(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_012a2680 *)(this))->sub_012a12d0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct C_012a26c0 {
    int sub_012a26c0(undefined4 *, int);
    int sub_012a12d0(int, int);
};

// @baa 0x012a26c0
int C_012a26c0::sub_012a26c0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_012a26c0 *)(this))->sub_012a12d0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_012a28d0 { void sub_012a28d0(void); };

// @baa 0x012a28d0
void C_012a28d0::sub_012a28d0(void) { *(int*)((char*)this + 4) = 0; }

struct S_012a28e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_012a28e0(INT Index);
};

// @baa 0x012a28e0
DWORD* S_012a28e0::sub_012a28e0(INT Index)
{
    return &Items(Index);
}

struct S_012a2990 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_012a2990(INT Index);
};

// @baa 0x012a2990
DWORD* S_012a2990::sub_012a2990(INT Index)
{
    return &Items(Index);
}

struct S_012a2a40 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_012a2a40(INT Index);
};

// @baa 0x012a2a40
QWORD* S_012a2a40::sub_012a2a40(INT Index)
{
    return &Items(Index);
}

struct C_012a2a90 {
    int sub_012a2a90(int);
};

// @baa 0x012a2a90
int C_012a2a90::sub_012a2a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x012a2aa0
void __stdcall sub_012a2aa0(int a0, int a1) {  }

struct C_012a2ab0 {
    int sub_012a2ab0(int);
};

// @baa 0x012a2ab0
int C_012a2ab0::sub_012a2ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x012a2ac0
void __stdcall sub_012a2ac0(int a0, int a1) {  }

struct C_012a2ad0 {
    int sub_012a2ad0(int);
};

// @baa 0x012a2ad0
int C_012a2ad0::sub_012a2ad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x012a2ae0
void __stdcall sub_012a2ae0(int a0, int a1) {  }

int sub_005c7a70(...);
int sub_012a33a0(void);
// @baa 0x012a3410
undefined4 UTexAligner::sub_012a3410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012a33a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_012a9d50 { void* Data; int Num; int Max; void sub_012a9d50(); };

// @baa 0x012a9d50
void C_012a9d50::sub_012a9d50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012a9df0 { void* Data; int Num; int Max; void sub_012a9df0(); };

// @baa 0x012a9df0
void C_012a9df0::sub_012a9df0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012a9e90 { void* Data; int Num; int Max; void sub_012a9e90(); };

// @baa 0x012a9e90
void C_012a9e90::sub_012a9e90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012aa070 { void* Data; int Num; int Max; void sub_012aa070(); };

// @baa 0x012aa070
void C_012aa070::sub_012aa070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_012abc60(void);
// @baa 0x012abcc0
undefined4 UTexAlignerDefault::sub_012abcc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012abc60();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

int sub_012abdb0(void);
// @baa 0x012abe10
undefined4 UTexAlignerBox::sub_012abe10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012abdb0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

int sub_012abf00(void);
// @baa 0x012abf60
undefined4 UTexAlignerFit::sub_012abf60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012abf00();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

int sub_012a4650(...);
int sub_012a4850(...);
// @baa 0x012ac010
void sub_012ac010(undefined4 param_1, undefined4 param_2)
{
  sub_012a4650(param_1,param_2);
  sub_012a4850(param_1,param_2);
  return;
}

int sub_012a4c10(void);
// @baa 0x012ac2c0
undefined4 UTexAligner::sub_012ac2c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012a4c10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C_012ae650 {
    int sub_012ae650();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x012ae650
int C_012ae650::sub_012ae650()
{
    return g_026a1ca4(Index);
}

int sub_00cfe880(...);
// @baa 0x012ae890
bool sub_012ae890(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_00cfe880(param_1,param_2);
  return iVar1 == 0;
}

struct C_012ae8b0 {
    undefined4 sub_012ae8b0(byte);
};

int sub_012ac370(void);
// @baa 0x012ae8b0
undefined4 C_012ae8b0::sub_012ae8b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012ac370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012afec0 {
    undefined4 sub_012afec0(byte);
};

int sub_012abfa0(void);
// @baa 0x012afec0
undefined4 C_012afec0::sub_012afec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012abfa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
