// Kismet.cpp (part 3 of 4): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int sub_011966b0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x011966b0
int C::sub_011966b0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct FS { TArray<wchar_t> d; ~FS(); const wchar_t* operator*() const; };

struct O1 { int sub_00d135e0(); };

struct O2 { int sub_00f71b40(); };

struct O3 { void sub_00f5d730(int); };

struct Obj;
struct O4 { int sub_01277880(Obj*); };

FS sub_0063acb0(const char*, const wchar_t*, int);
int sub_005f5500(...);
struct Q { char p[0x50]; O4* q; };

Q* sub_00ec5970();
extern O2* g_026cce28;
extern wchar_t g_01e3f3dc;
struct Obj : O1 { char p[0x16c-1]; unsigned flags; };

static __forceinline void show(const FS& r) { sub_005f5500(0, r.d.Num() ? &r.d(0) : &g_01e3f3dc); }

// @baa 0x01199160
void sub_01199160(Obj* a)
{
    if (!a->sub_00d135e0()) {
        show(sub_0063acb0("Error_MatineeActionMustHaveData", L"UnrealEd", 0));
        return;
    }
    if (a->flags & 8) {
        show(sub_0063acb0("MatineeActionAlreadyOpen", L"UnrealEd", 0));
        return;
    }
    if (g_026cce28->sub_00f71b40()) {
        sub_005f5500(0, *sub_0063acb0("TransactionIsActive", L"UnrealEd", 0));
        return;
    }
    if (*(int*)((char*)sub_00ec5970()->q + 0x38) == 4)
        ((O3*)sub_00ec5970())->sub_00f5d730(1);
    ((O3*)sub_00ec5970())->sub_00f5d730(4);
    Q* qq = sub_00ec5970();
    qq->q->sub_01277880(a);
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x011a1690
undefined4 UObject::sub_011a1690(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
