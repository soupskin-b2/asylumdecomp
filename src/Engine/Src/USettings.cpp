// USettings.cpp (part 1 of 2): 35 functions
// Placed here by: class 19, neighbours 11, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006be4b0
int sub_006be4b0(void) { return 0; }

// @baa 0x006be4c0
int sub_006be4c0(void) { return 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00cbe870(); };

// @baa 0x00cbe870
void C::sub_00cbe870() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d66ff0
int sub_00d66ff0(int a0, int a1) { return a1; }

// @baa 0x00d67000
int sub_00d67000(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00d67010
int sub_00d67010(void) { return (int)g_01e3f3e0; }

// @baa 0x00d67750
bool UOnlineSubsystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67790
int UOnlineGameSettings::vf_000(void) { return 1; }

// @baa 0x00d677a0
int UOnlineGameSearch::vf_000(void) { return 1; }

// @baa 0x00d677b0
IMPLEMENT_CLASS_AT(UOnlineGameplayEvents, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 12);

// @baa 0x00d678c0
int UOnlineGameplayEvents::vf_000(void) { return 1; }

// @baa 0x00d678d0
bool UOnlineGameplayEvents::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67950
undefined4 sub_00d67950(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x00d679e0
IMPLEMENT_CLASS_AT(USettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\USettings.cpp", 7);

// @baa 0x00d67af0
int USettings::vf_000(void) { return 1; }

// @baa 0x00d67b00
bool USettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67b40
void USettings::sub_00d67b40(undefined4 * param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x01') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    return;
  }
  *param_2 = 0;
  return;
}

// @baa 0x00d67b60
void USettings::sub_00d67b60(undefined4 * param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x02') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    param_2[1] = *(undefined4 *)(param_1 + 8);
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

typedef uint size_t;

int sub_0053df40(...);
void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00d67bb0
void USettings::sub_00d67bb0(undefined4 * param_2, undefined4 * param_3)
{
    char * param_1 = (char *)this;

  undefined4 uVar1;
  void *_Dst;
  
  if (*param_1 == '\x06') {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *param_2 = uVar1;
    _Dst = (void *)sub_0053df40(uVar1,8);
    *param_3 = (undefined4)(_Dst);
    sub_01a375f0(_Dst,*(void **)(param_1 + 8),*(size_t *)(param_1 + 4));
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// @baa 0x00d67c00
void USettings::sub_00d67c00(undefined4 * param_2, undefined4 * param_3)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\a') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    *param_3 = *(undefined4 *)(param_1 + 8);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// @baa 0x00d67d50
undefined4 USettings::sub_00d67d50(float param_2)
{
    char * param_1 = (char *)this;
  if ((*param_1 == '\x05') && (param_2 == *(float *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}

// @baa 0x00d67e00
undefined4 USettings::sub_00d67e00(double param_2)
{
    char * param_1 = (char *)this;
  if ((*param_1 == '\x03') && (param_2 == *(double *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}

struct FSettingsDataView {
    BYTE Type;
    FLOAT Value;
};

struct USettings_ {
    FLOAT sub_00d67f90(const FSettingsDataView& Data);
};

// @baa 0x00d67f90
FLOAT USettings_::sub_00d67f90(const FSettingsDataView& Data)
{
    FLOAT Value;
    if (Data.Type == 5)
        Value = Data.Value;
    else
        Value = 0.f;
    return Value;
}

struct C_00d70990{
int sub_00d70990(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00d70990
int C_00d70990::sub_00d70990(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,0xc*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+0xc*iVar2);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_00d78700 { void* Data; int Num; int Max; void sub_00d78700(); };

// @baa 0x00d78700
void C_00d78700::sub_00d78700() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
struct L { int a,b,c; int sub_00489970(int); void sub_0040fcc0(); ~L(){ sub_0040fcc0();} };

struct Dt { L sub_00d797a0(); int sub_00d6e4a0(int); int d[4]; };

struct E { int Id; Dt Data; };

struct Del { int sub_00784f80(void*); };

#define V4(n) virtual void n##a(){} virtual void n##b(){} virtual void n##c(){} virtual void n##d(){}
#define V16(n) V4(n##1) V4(n##2) V4(n##3) V4(n##4)
#define V64(n) V16(n##1) V16(n##2) V16(n##3) V16(n##4)
struct S {
 V64(x) V16(y)
 virtual int v(int,int,int*);
 int pad[(0x3c-4)/4]; TArray<E> Properties; int pad2[(0x6c-0x48)/4];
 Del dlg;
 int sub_00d66f70(int,int);
 int sub_00d79ec0(int a,int b,int c);
};

// @baa 0x00d79ec0
int S::sub_00d79ec0(int a,int b,int c){
 int id;
 if(!v(a,b,&id)) return 0;
 for(int i=0;i<Properties.Num();i++){
  if(Properties(i).Id==id){
   int r = Properties(i).Data.sub_00d797a0().sub_00489970(c);
   if(!Properties(i).Data.sub_00d6e4a0(c)) return 0;
   if(r && dlg.sub_00784f80(this)) sub_00d66f70(a,b);
   return 1;
  }
 }
 return 0; }

// @baa 0x00d884a0
// @baa 0x00d88530
int sub_005c7a20(void);
extern undefined * g_020b6d88;
// @baa 0x00d88550
undefined4 * UObject::sub_00d88550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b6d88);
  return param_1;
}

// @baa 0x00d88650
int sub_00d88650(void) { return 1; }

// @baa 0x00d88680
int USettings::sub_00d88680(void) { return *(int*)((char*)this + 4); }

struct A_00d88690 { virtual void sub_00d88980(); char pad[44]; };

struct B_00d88690 { virtual void sub_00d88980(); };

struct C_00d88690 : A_00d88690, B_00d88690 { virtual void sub_00d88980(); C_00d88690(); };

C_00d88690::C_00d88690() {}

// @baa 0x00d88690
void C_00d88690::sub_00d88980() {}

int sub_005c7a70(...);
int sub_00d888c0(void);
// @baa 0x00d88980
undefined4 USettings::sub_00d88980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d888c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xc0);
  }
  return param_1;
}

// @baa 0x00d8ab30
// @baa 0x00d8af90
