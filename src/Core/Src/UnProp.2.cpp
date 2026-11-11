// UnProp.cpp (part 2 of 3): 3 functions
// Placed here by: neighbours 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
int sub_00634760(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00634760
int C::sub_00634760(undefined4*param_2)
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

extern undefined2 g_01e3f3dc;
extern int g_026667ac;
struct FString { TArray<wchar_t> Data; FString(const wchar_t*s); FString(){} const wchar_t* operator*() const; };

FString sub_00549620(const wchar_t*, ...);
int sub_00630ea0(...);
int sub_00630f20(...);
struct C_0063ba80 {
 char pad[0x40]; unsigned __int64 Flags;
 FString sub_0043bbb0();
 int sub_0063ba80(DWORD, void*);
};

static inline const wchar_t* D(const FString& S){ return S.Data.Num()?(const wchar_t*)&S.Data(0):(const wchar_t*)&g_01e3f3dc; }

// @baa 0x0063ba80
int C_0063ba80::sub_0063ba80(DWORD PortFlags, void* Error){
 int ret=1;
 if(PortFlags & 0x20){
  unsigned __int64 f=Flags;
  if(f & 0xc000){
   const wchar_t* s = (f&0x4000) ? ((f&0x8000)?L"config/localized":L"config") : L"localized";
   FString A(s);
   FString R = sub_00549620(L"Import failed for '%s': property is %s (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini/.int file)", D(sub_0043bbb0()), D(A));
   if(Error) sub_00630f20(Error,*R); else sub_00630ea0(g_026667ac,0x2ff,*R);
   ret=0;
  }
 }
 return ret;
}

struct S4 {
    INT V;
    S4() {}
    S4(const S4& O) : V(O.V) {}
};

struct C_0062efb0 {
    BYTE Pad[0x14];
    S4 Value;
    S4 sub_0062efb0();
};

// @baa 0x0062efb0
S4 C_0062efb0::sub_0062efb0()
{
    return Value;
}
