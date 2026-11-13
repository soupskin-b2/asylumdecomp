// UnObj.cpp (part 2 of 3): 7 functions
// Placed here by: neighbours 4, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x005c8270
int UObject::sub_005c8270(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

// @baa 0x005c8330
int UObject::sub_005c8330(undefined4*param_2)
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

struct C{
int sub_005c8440(undefined4*);
};

// @baa 0x005c8440
int C::sub_005c8440(undefined4*param_2)
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
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

int sub_0053dfa0(...);
int sub_00549160(void);
// @baa 0x005d4060
undefined4 UObject::sub_005d4060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct G
{
    void sub_005dd530(void* self, int arg);
};

extern G g_026a1d64;
struct C_005df7f0
{
    char pad[8];
    QWORD ObjectFlags;
    void sub_005df7f0(int arg);
};

// @baa 0x005df7f0
void C_005df7f0::sub_005df7f0(int arg)
{
    if ((ObjectFlags & 0x4000000) || arg != -1)
        g_026a1d64.sub_005dd530(this, arg);
}

extern int g_0266e81c;
extern "C" void __stdcall sub_005e35a0(void* p, int v);
// @baa 0x005e36d0
void sub_005e36d0()
{
    sub_005e35a0(0, g_0266e81c);
}

/* Script.h's FStateFrame is 0x34 bytes and has no virtual destructor; the engine's is 0x44 bytes,
   derives from FOutputDevice (virtual destructor in slot 0) and is constructed at 005d5510. */
struct FStateFrame
{
	FStateFrame(UObject* InObject) throw(); /* 005d5510 */
	virtual ~FStateFrame();
	BYTE Data[0x40];
};

// @baa 0x005d5a00
void UObject::InitExecution()
{
	if (!(ObjectFlags & RF_ClassDefaultObject))
	{
#line 2210 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObj.cpp"
		check(GetClass()!=NULL);

		if (StateFrame)
		{
			delete StateFrame;
		}
		StateFrame = new FStateFrame(this);
		ObjectFlags |= RF_HasStack;
	}
}

#line 172 "candidate.cpp"
