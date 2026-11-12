// BmGame_1610000.cpp (part 1 of 4): 187 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01610150
bool ARBMRouteRequest::vf_354(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x1bc) == '\x04';
}

// @baa 0x01610220
bool ARBMRouteRequest::vf_35c(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x1bc) == '\x05';
}

// @baa 0x01610260
undefined4 ARBMRouteRequest::vf_360(void)
{
    int param_1 = (int)this;

  if ((*(char *)(param_1 + 0x1bc) != '\x01') && (*(char *)(param_1 + 0x1bc) != '\x02')) {
    return 0;
  }
  return 1;
}

// @baa 0x016102b0
undefined4 ARBMRouteRequest::vf_364(void)
{
    int param_1 = (int)this;
  if ((*(char *)(param_1 + 0x1bc) != '\x02') && (*(char *)(param_1 + 0x1bc) != '\x03')) {
    return 0;
  }
  return 1;
}

// @baa 0x01610330
bool ARBMRouter::vf_39c(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 500);
}

// @baa 0x016104a0
IMPLEMENT_CLASS_AT(URBMRouterPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 967);

// @baa 0x016105b0
int URBMRouterPath::vf_000(void) { return 1; }

// @baa 0x016105c0
bool URBMRouterPath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01610600
int URBMRouterPath::vf_120(int a0) { return 0; }

// @baa 0x01610e70
IMPLEMENT_CLASS_AT(ARBMRouteRequest, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1654);

// @baa 0x01610f80
int ARBMRouteRequest::vf_000(void) { return 1; }

// @baa 0x01610f90
bool ARBMRouteRequest::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01610fd0
int ARBMRouteRequest::vf_374(int a0) { return 0; }

// @baa 0x01610fe0
void sub_01610fe0(void) {  }

// @baa 0x01611030
int ARBMRouteRequest_FindSinglePath::vf_000(void) { return 1; }

// @baa 0x016111f0
int ARBMRouteRequest_FindShortestPath::vf_000(void) { return 1; }

// @baa 0x01611200
int ARBMRouteRequest_FindShortestPathAvoidingLadder::vf_000(void) { return 1; }

// @baa 0x01611210
IMPLEMENT_CLASS_AT(UComparisonListSharedDataCache, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2102);

// @baa 0x01611320
int UComparisonListSharedDataCache::vf_000(void) { return 1; }

// @baa 0x01611330
bool UComparisonListSharedDataCache::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611370
int ARBMRouteRequest_BuildComparisonList::vf_000(void) { return 1; }

// @baa 0x01611380
int ARBMRouteRequest_HideOnCorner::vf_000(void) { return 1; }

// @baa 0x01611390
int ARBMRouteRequest_NervousSearch::vf_000(void) { return 1; }

// @baa 0x016114f0
int ARBMRouteRequest_TerrifiedSearch::vf_000(void) { return 1; }

// @baa 0x01611500
int ARBMRouteRequest_RunAway::vf_000(void) { return 1; }

// @baa 0x01611510
int ARBMRouteRequest_PerimeterBuilderWrapper::vf_000(void) { return 1; }

// @baa 0x01611580
void sub_01611580(void) {  }

// @baa 0x01611590
int ARBMRouteRequest_PerimeterBuilderWrapper::vf_368(void) { return 0; }

// @baa 0x016115f0
IMPLEMENT_CLASS_AT(ARPathNode_Pontoon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 3151);

// @baa 0x01611700
int ARPathNode_Pontoon::vf_000(void) { return 1; }

// @baa 0x01611710
bool ARPathNode_Pontoon::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611750
IMPLEMENT_CLASS_AT(URIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 8);

// @baa 0x01611860
int URIdleConfig::vf_000(void) { return 1; }

// @baa 0x01611870
bool URIdleConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016118b0
int URSimpleIdleConfig::vf_000(void) { return 1; }

// @baa 0x016118c0
int URIdleTransitionConfig::vf_000(void) { return 1; }

// @baa 0x016118d0
int URPairedIdleConfig::vf_000(void) { return 1; }

// @baa 0x016118e0
int URIdleWithDeathConfig::vf_000(void) { return 1; }

// @baa 0x016118f0
IMPLEMENT_CLASS_AT(URSimpleIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 14);

// @baa 0x01611a00
int URSimpleIdleConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611a10
bool URSimpleIdleConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611a90
IMPLEMENT_CLASS_AT(URIdleTransitionConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 15);

// @baa 0x01611ba0
int URIdleTransitionConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611bb0
bool URIdleTransitionConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611c30
IMPLEMENT_CLASS_AT(URIdleWithDeathConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 16);

// @baa 0x01611d40
int URIdleWithDeathConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611d50
bool URIdleWithDeathConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611dd0
IMPLEMENT_CLASS_AT(URPairedIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 17);

// @baa 0x01611ee0
int URPairedIdleConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611ef0
bool URPairedIdleConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611f70
void URIdleConfig::vf_110(int a0) {  }

// @baa 0x01611f80
void URIdleConfig::vf_114(int a0) {  }

// @baa 0x01611f90
void URIdleConfig::FireOutputLink(class URBMBehaviour_IdleWithPlannarProp* a0) {  }

// @baa 0x01611fa0
IMPLEMENT_CLASS_AT(ARJokerTannoy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RJokerTannoy.cpp", 4);

// @baa 0x016120b0
int ARJokerTannoy::vf_000(void) { return 1; }

// @baa 0x016120c0
bool ARJokerTannoy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_01612130(int a0); };

// @baa 0x01612130
C* C::sub_01612130(int a0) { return this; }

// @baa 0x016121b0
int sub_016121b0(int a0, int a1) { return a1; }

// @baa 0x016121c0
int sub_016121c0(int a0, int a1) { return a1; }

// @baa 0x016121d0
int URSeqAct_SpeechEventManager::vf_000(void) { return 1; }

// @baa 0x01612210
int sub_01612210(int a0, int a1) { return a1; }

struct C_01612220 { C_01612220* sub_01612220(int a0); };

// @baa 0x01612220
C_01612220* C_01612220::sub_01612220(int a0) { return this; }

struct C_01612230 { C_01612230* sub_01612230(int a0); };

// @baa 0x01612230
C_01612230* C_01612230::sub_01612230(int a0) { return this; }

struct C_01612240 { C_01612240* sub_01612240(int a0); };

// @baa 0x01612240
C_01612240* C_01612240::sub_01612240(int a0) { return this; }

struct C_01612260 { C_01612260* sub_01612260(int a0); };

// @baa 0x01612260
C_01612260* C_01612260::sub_01612260(int a0) { return this; }

struct C_01612270 { C_01612270* sub_01612270(int a0); };

// @baa 0x01612270
C_01612270* C_01612270::sub_01612270(int a0) { return this; }

struct C_01612280 { C_01612280* sub_01612280(int a0); };

// @baa 0x01612280
C_01612280* C_01612280::sub_01612280(int a0) { return this; }

struct C_01612290 { C_01612290* sub_01612290(int a0); };

// @baa 0x01612290
C_01612290* C_01612290::sub_01612290(int a0) { return this; }

struct C_016122a0 { C_016122a0* sub_016122a0(int a0); };

// @baa 0x016122a0
C_016122a0* C_016122a0::sub_016122a0(int a0) { return this; }

struct C_016122b0 { C_016122b0* sub_016122b0(int a0); };

// @baa 0x016122b0
C_016122b0* C_016122b0::sub_016122b0(int a0) { return this; }

// @baa 0x016129b0
int sub_016129b0(int a0, int a1) { return a1; }

// @baa 0x016129c0
int sub_016129c0(int a0, int a1) { return a1; }

// @baa 0x016129d0
int sub_016129d0(int a0, int a1) { return a1; }

// @baa 0x016129e0
int sub_016129e0(int a0, int a1) { return a1; }

// @baa 0x016129f0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 10);

int sub_005c7a20(void);
extern undefined * g_02344738;
// @baa 0x01612a50
undefined4 * UObject::sub_01612a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344738);
  return param_1;
}

// @baa 0x01612a70
// @baa 0x01612a90
undefined4 sub_01612a90(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02344848;
// @baa 0x01612aa0
undefined4 * UObject::sub_01612aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344848);
  return param_1;
}

// @baa 0x01612ac0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapperFalling, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 11);

// @baa 0x01612b20
struct C_01612b40 {
    DWORD sub_01612b40(DWORD);
};

// @baa 0x01612b40
DWORD C_01612b40::sub_01612b40(DWORD)
{
    return (DWORD)this;
}

// @baa 0x01612bb0
int sub_01612bb0(int a0, int a1) { return a1; }

// @baa 0x01612bc0
IMPLEMENT_CLASS_AT(URSeqAct_SpeechEventManagerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSeqAct_SpeechEventManagerBase.cpp", 12);

// @baa 0x01612cd0
int URSeqAct_SpeechEventManagerBase::vf_000(void) { return 1; }

// @baa 0x01612ce0
bool URSeqAct_SpeechEventManagerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01612d20
void sub_01612d20(void) {  }

// @baa 0x01612d30
void URSeqAct_SpeechEventManagerBase::vf_178(void) {  }

// @baa 0x01612d40
void URSeqAct_SpeechEventManagerBase::vf_1a0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 1;
  return;
}

// @baa 0x01612d50
void URSeqAct_SpeechEventManagerBase::vf_1a4(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 1;
  return;
}

// @baa 0x01612d60
void URSeqAct_SpeechEventManagerBase::vf_1ac(void) {  }

struct V_01612df0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void g();
    void sub_01612df0();
};

// @baa 0x01612df0
void V_01612df0::sub_01612df0() { g(); }

// @baa 0x01612e20
// @baa 0x01612f30
int UREnvironmentSpecialMoveWrapper::vf_000(void) { return 1; }

// @baa 0x01612f40
bool UREnvironmentSpecialMoveWrapper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01612f80
int UREnvironmentSpecialMoveWrapperFalling::vf_000(void) { return 1; }

// @baa 0x01612f90
IMPLEMENT_CLASS_AT(URSpecialMoveConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 13);

// @baa 0x016130a0
int URSpecialMoveConfig::vf_000(void) { return 1; }

// @baa 0x016130b0
bool URSpecialMoveConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016130f0
int URSpecialMoveConfig_RelativeAnimMove::vf_000(void) { return 1; }

// @baa 0x01613100
int URSimpleSpecialMoveConfig::vf_000(void) { return 1; }

// @baa 0x01613110
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 16);

// @baa 0x01613220
int ARSpecialMoveInstance::vf_000(void) { return 1; }

// @baa 0x01613230
bool ARSpecialMoveInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01613270
int ARSpecialMoveInstance_ResonateObject::vf_000(void) { return 1; }

// @baa 0x01613280
int ARSpecialMoveInstance_SwingToVantagePoint::vf_000(void) { return 1; }

// @baa 0x01613710
void sub_01613710(void) {  }

int sub_0163aad0(void);
int sub_01659590(...);
extern undefined4 g_026e1bac;
// @baa 0x016139e0
int sub_016139e0(void)
{
  if (g_026e1bac == 0) {
    g_026e1bac = sub_01659590(L"BmGame");
    sub_0163aad0();
  }
  return g_026e1bac;
}

// @baa 0x01613a10
int URPlayerInput::vf_000(void) { return 1; }

// @baa 0x01613a20
bool URPlayerInput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00572b30();
// @baa 0x016163b0
void sub_016163b0(void) { sub_00572b30(); }

// @baa 0x016166a0
int URBMRouterPath::vf_114(void) { return *(int*)((char*)this + 52); }

// @baa 0x016168a0
void URSeqAct_SpeechEventManager::vf_178(void) {  }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161a1e0(INT Index);
};

// @baa 0x0161a1e0
DWORD* S::sub_0161a1e0(INT Index)
{
    return &Items(Index);
}

struct S_0161a230 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161a230(INT Index);
};

// @baa 0x0161a230
DWORD* S_0161a230::sub_0161a230(INT Index)
{
    return &Items(Index);
}

struct S_0161a2c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0161a2c0(INT Index);
};

// @baa 0x0161a2c0
QWORD* S_0161a2c0::sub_0161a2c0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0161a310 {
    void sub_0161a310(int, int);
    int sub_016157c0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0161a310
void C_0161a310::sub_0161a310(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0161a310 *)(this))->sub_016157c0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 8),0,param_3 * 8);
  return;
}

struct S_0161a350 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161a350(INT Index);
};

// @baa 0x0161a350
DWORD* S_0161a350::sub_0161a350(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_0161a3a0 {
    TArray<E> Items; // 0x00
    E* sub_0161a3a0(INT Index);
};

// @baa 0x0161a3a0
E* S_0161a3a0::sub_0161a3a0(INT Index)
{
    return &Items(Index);
}

struct E_0161a3f0 { BYTE Bytes[24]; };

struct S_0161a3f0 {
    TArray<E_0161a3f0> Items; // 0x00
    E_0161a3f0* sub_0161a3f0(INT Index);
};

// @baa 0x0161a3f0
E_0161a3f0* S_0161a3f0::sub_0161a3f0(INT Index)
{
    return &Items(Index);
}

struct C_0161a440{
int sub_0161a440(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0161a440
int C_0161a440::sub_0161a440(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x18);
param_1[2]=iVar3;
if((*param_1)||(iVar3!=0)){
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

struct S_0161a4c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161a4c0(INT Index);
};

// @baa 0x0161a4c0
DWORD* S_0161a4c0::sub_0161a4c0(INT Index)
{
    return &Items(Index);
}

struct S_0161a510 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161a510(INT Index);
};

// @baa 0x0161a510
DWORD* S_0161a510::sub_0161a510(INT Index)
{
    return &Items(Index);
}

struct E_0161a5c0 { BYTE Bytes[16]; };

struct S_0161a5c0 {
    TArray<E_0161a5c0> Items; // 0x00
    E_0161a5c0* sub_0161a5c0(INT Index);
};

// @baa 0x0161a5c0
E_0161a5c0* S_0161a5c0::sub_0161a5c0(INT Index)
{
    return &Items(Index);
}

struct E_0161a610 { BYTE Bytes[16]; };

struct S_0161a610 {
    TArray<E_0161a610> Items; // 0x00
    E_0161a610* sub_0161a610(INT Index);
};

// @baa 0x0161a610
E_0161a610* S_0161a610::sub_0161a610(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0161a6d0(INT Index);
};

// @baa 0x0161a6d0
FFaceFXElement* UFxRenderWidget::sub_0161a6d0(INT Index)
{
	return &BoneArray(Index);
}

struct C_0161a720 {
    int sub_0161a720(undefined4 *, int);
    int sub_01615ba0(int, int);
};

// @baa 0x0161a720
int C_0161a720::sub_0161a720(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0161a720 *)(this))->sub_01615ba0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
  }
  return param_3;
}

struct UFxRenderWidget_0161a7f0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0161a7f0(INT Index);
};

// @baa 0x0161a7f0
FFaceFXElement* UFxRenderWidget_0161a7f0::sub_0161a7f0(INT Index)
{
	return &BoneArray(Index);
}

struct S_0161a840 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0161a840(INT Index);
};

// @baa 0x0161a840
QWORD* S_0161a840::sub_0161a840(INT Index)
{
    return &Items(Index);
}

struct E_0161a890 { BYTE Bytes[36]; };

struct S_0161a890 {
    TArray<E_0161a890> Items; // 0x00
    E_0161a890* sub_0161a890(INT Index);
};

// @baa 0x0161a890
E_0161a890* S_0161a890::sub_0161a890(INT Index)
{
    return &Items(Index);
}

struct E_0161a8e0 { BYTE Bytes[40]; };

struct S_0161a8e0 {
    TArray<E_0161a8e0> Items; // 0x00
    E_0161a8e0* sub_0161a8e0(INT Index);
};

// @baa 0x0161a8e0
E_0161a8e0* S_0161a8e0::sub_0161a8e0(INT Index)
{
    return &Items(Index);
}

struct S_0161a930 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0161a930(INT Index) const;
};

// @baa 0x0161a930
const DWORD* S_0161a930::sub_0161a930(INT Index) const
{
    return &Items(Index);
}

struct C_0161a9b0 {
    int sub_0161a9b0(int);
};

// @baa 0x0161a9b0
int C_0161a9b0::sub_0161a9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0161a9c0
void __stdcall sub_0161a9c0(int a0, int a1) {  }

// @baa 0x0161a9d0
void __stdcall sub_0161a9d0(int a0, int a1) {  }

struct C_0161a9e0 {
    int sub_0161a9e0(int);
};

// @baa 0x0161a9e0
int C_0161a9e0::sub_0161a9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0161a9f0
void __stdcall sub_0161a9f0(int a0, int a1) {  }

struct C_0161aa00 {
    int sub_0161aa00(int);
};

// @baa 0x0161aa00
int C_0161aa00::sub_0161aa00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0161aa10
void __stdcall sub_0161aa10(int a0, int a1) {  }

struct C_0161aa20 {
    int sub_0161aa20(int);
};

// @baa 0x0161aa20
int C_0161aa20::sub_0161aa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x0161aa30
void __stdcall sub_0161aa30(int a0, int a1) {  }

struct C_0161aa40 {
    int sub_0161aa40(int);
};

// @baa 0x0161aa40
int C_0161aa40::sub_0161aa40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0161aa50
void __stdcall sub_0161aa50(int a0, int a1) {  }

struct C_0161aa60 {
    int sub_0161aa60(int);
};

// @baa 0x0161aa60
int C_0161aa60::sub_0161aa60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0161aa70
void __stdcall sub_0161aa70(int a0, int a1) {  }

struct C_0161aa80 {
    int sub_0161aa80(int);
};

// @baa 0x0161aa80
int C_0161aa80::sub_0161aa80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0161aa90
void __stdcall sub_0161aa90(int a0, int a1) {  }

struct C_0161aaa0 {
    int sub_0161aaa0(int);
};

// @baa 0x0161aaa0
int C_0161aaa0::sub_0161aaa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0161aab0
void __stdcall sub_0161aab0(int a0, int a1) {  }

struct C_0161aac0 {
    int sub_0161aac0(int);
};

// @baa 0x0161aac0
int C_0161aac0::sub_0161aac0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0161aad0
void __stdcall sub_0161aad0(int a0, int a1) {  }

struct C_0161aae0 {
    int sub_0161aae0(int);
};

// @baa 0x0161aae0
int C_0161aae0::sub_0161aae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0161aaf0
void __stdcall sub_0161aaf0(int a0, int a1) {  }

struct C_0161ab00 {
    int sub_0161ab00(int);
};

// @baa 0x0161ab00
int C_0161ab00::sub_0161ab00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0161ab10
void __stdcall sub_0161ab10(int a0, int a1) {  }

struct C_0161ab20 {
    int sub_0161ab20(int);
};

// @baa 0x0161ab20
int C_0161ab20::sub_0161ab20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0161ab30 {
    int sub_0161ab30(int);
};

// @baa 0x0161ab30
int C_0161ab30::sub_0161ab30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0161ab40
void __stdcall sub_0161ab40(int a0, int a1) {  }

struct C_0161ab50 {
    int sub_0161ab50(int);
};

// @baa 0x0161ab50
int C_0161ab50::sub_0161ab50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0161ab60 {
    int sub_0161ab60(int);
};

// @baa 0x0161ab60
int C_0161ab60::sub_0161ab60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0161ab70 {
    int sub_0161ab70(int);
};

// @baa 0x0161ab70
int C_0161ab70::sub_0161ab70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0161ab80 {
    int sub_0161ab80(int);
};

// @baa 0x0161ab80
int C_0161ab80::sub_0161ab80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0161ab90 {
    int sub_0161ab90(int);
};

// @baa 0x0161ab90
int C_0161ab90::sub_0161ab90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0161aba0 {
    int sub_0161aba0(int);
};

// @baa 0x0161aba0
int C_0161aba0::sub_0161aba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0161abb0 {
    int sub_0161abb0(int);
};

// @baa 0x0161abb0
int C_0161abb0::sub_0161abb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0161abc0 {
    int sub_0161abc0(int);
};

// @baa 0x0161abc0
int C_0161abc0::sub_0161abc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0161abd0 {
    int sub_0161abd0(int);
};

// @baa 0x0161abd0
int C_0161abd0::sub_0161abd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0161abe0 {
    int sub_0161abe0(int);
};

// @baa 0x0161abe0
int C_0161abe0::sub_0161abe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0161abf0 {
    int sub_0161abf0(int);
};

// @baa 0x0161abf0
int C_0161abf0::sub_0161abf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0161ac00 {
    int sub_0161ac00(int);
};

// @baa 0x0161ac00
int C_0161ac00::sub_0161ac00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct S_0161ac10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161ac10(INT Index);
};

// @baa 0x0161ac10
DWORD* S_0161ac10::sub_0161ac10(INT Index)
{
    return &Items(Index);
}

struct E_0161ac60 { BYTE Bytes[16]; };

struct S_0161ac60 {
    TArray<E_0161ac60> Items; // 0x00
    E_0161ac60* sub_0161ac60(INT Index);
};

// @baa 0x0161ac60
E_0161ac60* S_0161ac60::sub_0161ac60(INT Index)
{
    return &Items(Index);
}

struct E_0161acb0 { BYTE Bytes[24]; };

struct S_0161acb0 {
    TArray<E_0161acb0> Items; // 0x00
    E_0161acb0* sub_0161acb0(INT Index);
};

// @baa 0x0161acb0
E_0161acb0* S_0161acb0::sub_0161acb0(INT Index)
{
    return &Items(Index);
}

struct E_0161ad00 { BYTE Bytes[32]; };

struct S_0161ad00 {
    TArray<E_0161ad00> Items; // 0x00
    E_0161ad00* sub_0161ad00(INT Index);
};

// @baa 0x0161ad00
E_0161ad00* S_0161ad00::sub_0161ad00(INT Index)
{
    return &Items(Index);
}

struct E_0161ad50 { BYTE Bytes[52]; };

struct S_0161ad50 {
    TArray<E_0161ad50> Items; // 0x00
    E_0161ad50* sub_0161ad50(INT Index);
};

// @baa 0x0161ad50
E_0161ad50* S_0161ad50::sub_0161ad50(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_0161ada0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0161ada0(INT Index);
};

// @baa 0x0161ada0
FFaceFXElement* UFxRenderWidget_0161ada0::sub_0161ada0(INT Index)
{
	return &BoneArray(Index);
}

struct E_0161adf0 { BYTE Bytes[24]; };

struct S_0161adf0 {
    TArray<E_0161adf0> Items; // 0x00
    E_0161adf0* sub_0161adf0(INT Index);
};

// @baa 0x0161adf0
E_0161adf0* S_0161adf0::sub_0161adf0(INT Index)
{
    return &Items(Index);
}

struct E_0161ae40 { BYTE Bytes[24]; };

struct S_0161ae40 {
    TArray<E_0161ae40> Items; // 0x00
    E_0161ae40* sub_0161ae40(INT Index);
};

// @baa 0x0161ae40
E_0161ae40* S_0161ae40::sub_0161ae40(INT Index)
{
    return &Items(Index);
}

struct S_0161ae90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0161ae90(INT Index);
};

// @baa 0x0161ae90
DWORD* S_0161ae90::sub_0161ae90(INT Index)
{
    return &Items(Index);
}

struct S_0161aee0 {
    TArray<E> Items; // 0x00
    E* sub_0161aee0(INT Index);
};

// @baa 0x0161aee0
E* S_0161aee0::sub_0161aee0(INT Index)
{
    return &Items(Index);
}

struct S_0161af30 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0161af30(INT Index);
};

// @baa 0x0161af30
QWORD* S_0161af30::sub_0161af30(INT Index)
{
    return &Items(Index);
}

// @baa 0x0161d9f0
extern undefined * g_02344988;
// @baa 0x0161da60
undefined4 * UObject::sub_0161da60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344988);
  return param_1;
}

// @baa 0x0161da80
int sub_01612e20(void);
int sub_016168f0(...);
extern undefined4 g_026e1a18;
// @baa 0x0161dab0
int sub_0161dab0(void)
{
  if (g_026e1a18 == 0) {
    g_026e1a18 = sub_016168f0(L"BmGame");
    sub_01612e20();
  }
  return g_026e1a18;
}

// @baa 0x0161dcd0
// @baa 0x0161dde0
bool UREnvironmentSpecialMoveWrapperFalling::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
