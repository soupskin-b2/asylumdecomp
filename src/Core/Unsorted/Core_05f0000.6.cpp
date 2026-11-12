// Core_05f0000.cpp (part 6 of 6): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005fedc0
int UPackageMap::sub_005fedc0(undefined4*param_2)
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

extern INT g_026a4b20;
extern WORD g_025d6ac8;
struct UPackageMap_ : public UPackageMap
{
    virtual void sub_005fb0c0(WORD W);
};

// @baa 0x005fb0c0
void UPackageMap_::sub_005fb0c0(WORD W)
{
    WORD V = W;
    g_026a4b20 = 1;
    g_025d6ac8 = V;
}

struct UPackageMap__005ff380 : public UPackageMap
{
    FPointer* sub_005ff380(FPointer* Out);
};

// @baa 0x005ff380
FPointer* UPackageMap__005ff380::sub_005ff380(FPointer* Out)
{
    *Out = HashOuterNext;
    return Out;
}

// @baa 0x005fa520
INT __stdcall sub_005fa520(INT A, INT* Out)
{
    *Out = 0;
    return 0;
}

extern "C" double g_01ea7090;
struct Gadget
{
	double A;		// 0x00
	double B;		// 0x08
	double C;		// 0x10
	INT D;			// 0x18
	Gadget* sub_005fb4e0();	// 0x005fb4e0
};

// @baa 0x005fb4e0
Gadget* Gadget::sub_005fb4e0(void)
{
	A = 0.0;
	D = 0;
	B = g_01ea7090;
	C = 0.0;
	return this;
}

// 005fd0e0
// Copies two INT fields from a source into *this and stamps the third with -1.
struct S005fd0e0
{
	INT Value0;
	INT Value1;
	INT Value2;

	S005fd0e0& sub_005fd0e0(const S005fd0e0& Src);
};

// @baa 0x005fd0e0
S005fd0e0& S005fd0e0::sub_005fd0e0(const S005fd0e0& Src)
{
	Value0 = Src.Value0;
	Value1 = Src.Value1;
	Value2 = -1;
	return *this;
}

struct Source2 {
    INT A;
    INT B;
};

struct Dest3 {
    INT A;
    INT B;
    INT C;

    __declspec(noinline) Dest3* Init(const Source2* Source)
    {
        A = Source->A;
        B = Source->B;
        C = -1;
        return this;
    }
};

static Dest3 g_005fcda0_obj;
// @baa 0x005fcda0
void sub_005fcda0_caller()
{
    const Source2 S = { 1, 2 };
    Dest3* d = g_005fcda0_obj.Init(&S);
    (void)d;
}
