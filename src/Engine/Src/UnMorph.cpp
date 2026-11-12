// UnMorph.cpp: 51 functions
// Placed here by: class 13, neighbours 10, file 8, callers 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00834810
int UMorphNodeWeightBase::vf_000(void) { return 1; }

// @baa 0x00834820
int UMorphNodeWeight::vf_000(void) { return 1; }

// @baa 0x00834830
int UMorphNodePose::vf_000(void) { return 1; }

// @baa 0x00834840
int UMorphNodeWeightByBoneAngle::vf_000(void) { return 1; }

// @baa 0x00834850
void UMorphNodeBase::vf_124(int a0) { *(int*)((char*)this + 80) = a0; }

// @baa 0x008348c0
void UMorphNodeBase::vf_11c(void) {  }

// @baa 0x008348e0
float UMorphNodeWeight::vf_134(void) { return *(float*)((char*)this + 108); }

// @baa 0x00839fb0
IMPLEMENT_CLASS_AT(UMorphWeightSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 13);

// @baa 0x00839fd0
struct C{
int sub_0083c770(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0083c770
int C::sub_0083c770(uint*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,8*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

// @baa 0x0084ad30
IMPLEMENT_CLASS_AT(UMorphNodeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 15);

// @baa 0x0084ad50
IMPLEMENT_CLASS_AT(UMorphNodePose, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 18);

void sub_00849c10();
// @baa 0x0084ad70
void sub_0084ad70(void) { sub_00849c10(); }

void sub_00849c70();
// @baa 0x0084ad80
void sub_0084ad80(void) { sub_00849c70(); }

// @baa 0x0084ad90
// @baa 0x0084ae50
// @baa 0x00852a00
IMPLEMENT_CLASS_AT(UMorphNodeWeightBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 16);

// @baa 0x00852b10
bool UMorphNodeWeightBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00854960
IMPLEMENT_CLASS_AT(UMorphTargetSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 12);

// @baa 0x008549d0
// @baa 0x008578d0
IMPLEMENT_CLASS_AT(UMorphTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 11);

void sub_00856e60();
// @baa 0x00857900
void sub_00857900(void) { sub_00856e60(); }

// @baa 0x00857910
// @baa 0x00859060
// @baa 0x008590d0
int sub_005c7a20(void);
extern undefined * g_01f45020;
// @baa 0x008590f0
undefined4 * UObject::sub_008590f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f45020);
  return param_1;
}

extern undefined * g_01f45168;
// @baa 0x00859110
undefined4 * UObject::sub_00859110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f45168);
  return param_1;
}

// @baa 0x00859130
IMPLEMENT_CLASS_AT(UMorphNodeWeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 17);

// @baa 0x00859190
// @baa 0x008596e0
// @baa 0x00859700
// @baa 0x00859720
IMPLEMENT_CLASS_AT(UMorphNodeWeightByBoneAngle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp", 19);

// @baa 0x00859740
// @baa 0x00859800
// @baa 0x008598c0
// @baa 0x0085a130
// @baa 0x0085a240
bool UMorphNodeWeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_008348d0
{
    char pad_00[0x6c];
    float Value;

    void sub_008348d0(float In);
};

// @baa 0x008348d0
void C_008348d0::sub_008348d0(float In)
{
    Value = In;
}

struct C_008348f0
{
    char pad_00[0x6c];
    float Value;

    void sub_008348f0(float In);
};

// @baa 0x008348f0
void C_008348f0::sub_008348f0(float In)
{
    Value = In;
}

/* FString::Printf (UnString.h, 005488a0) isn't declared in the kit. */
struct FString_ : public FString
{
	static FString Printf(const TCHAR* Fmt, ...);
};

// @baa 0x0084af10
/* vf_0b8 is GetDesc: shown in the editor's browser. */
FString UMorphTargetSet::GetDesc()
{
	return FString_::Printf(TEXT("%d MorphTargets"), Targets.Num());
}

// @baa 0x008343a0
int UMorphTarget::vf_000(void) { return 1; }

// @baa 0x008343b0
bool UMorphTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008343f0

// @baa 0x00834500
int UMorphTargetSet::vf_000(void) { return 1; }

// @baa 0x00834510
bool UMorphTargetSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined * g_01f43ff8;
// @baa 0x0083d7d0
undefined4 * UObject::sub_0083d7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f43ff8);
  return param_1;
}

extern undefined * g_01f44140;
// @baa 0x0083d7f0
undefined4 * UObject::sub_0083d7f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f44140);
  return param_1;
}

extern undefined * g_01f452b0;
// @baa 0x008591b0
undefined4 * UObject::sub_008591b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f452b0);
  return param_1;
}

// @baa 0x008529e0

// @baa 0x00852b50

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gap: UnMorph.h's connector constants aren't declared. */
#define LOC_INPUT			0
#define LOC_OUTPUT			1
#define LO_CONNECTOR_LENGTH	10
// @baa 0x0083dae0
/* Where the node's input (left) or ConnIndex'th output (right) connector is drawn in the anim tree editor. */
FIntPoint UMorphNodeWeightBase::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	FIntPoint Result;
	if (ConnType == LOC_INPUT)
	{
#line 231 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp"
		check(ConnIndex == 0);
		Result.X = NodePosX - LO_CONNECTOR_LENGTH;
		Result.Y = OutDrawY;
	}
	else if (ConnType == LOC_OUTPUT)
	{
#line 236 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp"
		check(ConnIndex >= 0 && ConnIndex < NodeConns.Num());
		const FMorphNodeConn& Conn = ((TArrayAt_<FMorphNodeConn>&)NodeConns).At(ConnIndex);
		Result.X = NodePosX + DrawWidth + LO_CONNECTOR_LENGTH;
		Result.Y = Conn.DrawY;
	}
	else
	{
		Result.X = 0;
		Result.Y = 0;
	}
	return Result;
}

#line 296 "candidate.cpp"
