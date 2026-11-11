// EvidenceThumbnailRenderer.cpp (part 1 of 2): 14 functions
// Placed here by: class 6, neighbours 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01758ef0
IMPLEMENT_CLASS_AT(UREvidenceThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\EvidenceThumbnailRenderer.cpp", 5);

// @baa 0x01759000
int UREvidenceThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x01759010
bool UREvidenceThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C{
int sub_017597a0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x017597a0
int C::sub_017597a0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=1+iVar2;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x18);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0x18,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x18);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
puVar1[5]=param_2[5];
}
return iVar2;
}

struct C_01759820 {
    int sub_01759820(int);
};

// @baa 0x01759820
int C_01759820::sub_01759820(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x01759830
void __stdcall sub_01759830(int a0, int a1) {  }

int sub_005c7a20(void);
extern undefined * g_023da4a8;
// @baa 0x01759840
undefined4 * UObject::sub_01759840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023da4a8);
  return param_1;
}

// @baa 0x01759860
IMPLEMENT_CLASS_AT(URActorFactorySmashableProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\RActorFactorySmashableProp.cpp", 9);

// @baa 0x017598c0
typedef TArray<TCHAR> FStr;

int sub_006311e0(...);
int sub_005eb6c0(int, const wchar_t*, unsigned);
int sub_00561fe0(int, int, int, int, const wchar_t*, int, int, int, int, int);
struct OuterNameObj { FStr sub_0043bbb0(); };

struct IVirt {
    virtual int dummy0();
    virtual int dummy1();
    virtual int Virtual2(const TCHAR*, int, FStr*, int);
};

extern IVirt* g_026a4ba0;
extern int g_026667a8;
extern TCHAR g_01e3f3dc;
static const TCHAR* FStrData(const FStr& s) { return s.Num() ? &s(0) : &g_01e3f3dc; }

struct GObj {
    OuterNameObj* GetOutermost();
    int sub_01759e70();
};

// @baa 0x01759e70
int GObj::sub_01759e70()
{
    FStr strA = GetOutermost()->sub_0043bbb0();
    FStr strB;
    if ( !g_026a4ba0->Virtual2(FStrData(strA), 0, &strB, 0) )
        return 0;
    int obj = sub_005eb6c0(0, FStrData(strB), 0);
    if ( !obj )
        return 0;
    if ( !sub_00561fe0(obj, 0, 0, 0x80000, FStrData(strB), g_026667a8, 0, 0, 1, 0) )
        return 0;
    return 1;
}

// @baa 0x0175d5a0
// @baa 0x0175d620
// @baa 0x0175e520
// @baa 0x0175ea50
