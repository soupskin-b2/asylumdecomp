// BmGameGFxSupportClasses.cpp: 68 functions
// Placed here by: file 14, callers 11, neighbours 10, class 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016d1c60
IMPLEMENT_CLASS_AT(URGFxGameViewportClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 38);

// @baa 0x016d1d70
int URGFxGameViewportClient::vf_000(void) { return 1; }

// @baa 0x016d1d80
bool URGFxGameViewportClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d1dc0
IMPLEMENT_CLASS_AT(URGFxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 39);

// @baa 0x016d1ed0
int URGFxMovie::vf_000(void) { return 1; }

// @baa 0x016d1ee0
bool URGFxMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016d1f20
int URGFxMovieFrontend::vf_000(void) { return 1; }

// @baa 0x016d1f30
int URGFxMovieMap::vf_000(void) { return 1; }

// @baa 0x016d1f40
int URGFxMovieInvestigate::vf_000(void) { return 1; }

// @baa 0x016d1f50
int URGFxMovieUpgrades::vf_000(void) { return 1; }

// @baa 0x016d1f60
int URGFxMovieRiddler::vf_000(void) { return 1; }

// @baa 0x016d1f70
int URGFxMovieBio::vf_000(void) { return 1; }

// @baa 0x016d1f80
void URGFxGameViewportClient::vf_14c(void) {  }

int sub_006311e0(...);
extern undefined4 g_0239faf8;
extern undefined4 g_026caed4;
// @baa 0x016d1f90
INT URGFxGameViewportClient::vf_150() {
  if (g_026caed4 == 0) {
    sub_006311e0("GGFxEngine",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp"
                 ,0x39,&g_0239faf8);
  }
  return 1;
}

extern undefined4 g_026c3cdc;
// @baa 0x016d1fc0
FLOAT URGFxGameViewportClient::vf_154() {
  return (float10)*(float *)(*(int *)(g_026c3cdc + 800) + 0x44);
}

int sub_00d66e80(void);
// @baa 0x016d2a30
FLOAT URGFxGameViewportClient::vf_158() {
  int iVar1;
  
  iVar1 = sub_00d66e80();
  return (float10)*(float *)(iVar1 + 0x48);
}

// @baa 0x016d4a30
IMPLEMENT_CLASS_AT(URGFxFSCmdHandler_PlayMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 568);

// @baa 0x016d4cd0
// @baa 0x016ddba0
IMPLEMENT_CLASS_AT(URCharacterBioCueFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 628);

// @baa 0x016ddbc0
IMPLEMENT_CLASS_AT(URCharacterBioCue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 627);

// @baa 0x016def80
// @baa 0x016e4030
// @baa 0x016e4050
IMPLEMENT_CLASS_AT(URGFxMovieBio, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 45);

// @baa 0x016e4070
IMPLEMENT_CLASS_AT(URGFxMovieFrontend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 40);

// @baa 0x016e4090
IMPLEMENT_CLASS_AT(URGFxMovieHUD, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 73);

// @baa 0x016e40b0
IMPLEMENT_CLASS_AT(URGFxMovieInvestigate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 42);

// @baa 0x016e40d0
IMPLEMENT_CLASS_AT(URGFxMovieMap, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 41);

// @baa 0x016e40f0
IMPLEMENT_CLASS_AT(URGFxMovieRiddler, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 44);

// @baa 0x016e4110
IMPLEMENT_CLASS_AT(URGFxMovieUpgrades, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 43);

// @baa 0x016e4130
// @baa 0x016e41f0
// @baa 0x016e42b0
// @baa 0x016e4370
// @baa 0x016e4430
// @baa 0x016e44f0
// @baa 0x016e45b0
// @baa 0x016e4670
// @baa 0x016e4730
// @baa 0x016e5840
// @baa 0x016e58b0
// @baa 0x016e6b50
// @baa 0x016e6b80
IMPLEMENT_CLASS_AT(URSeqAct_PlayGfxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 567);

// @baa 0x016e6ba0
// @baa 0x016e6c60

// @baa 0x016d1b20
int sub_016d1b20(int a0, int a1) { return a1; }

// @baa 0x016d1b30
int sub_016d1b30(int a0, int a1) { return a1; }

// @baa 0x016d1b40
int sub_016d1b40(int a0, int a1) { return a1; }

// @baa 0x016d1b50
int sub_016d1b50(int a0, int a1) { return a1; }

// @baa 0x016d1b60
int sub_016d1b60(int a0, int a1) { return a1; }

// @baa 0x016d1b70
int sub_016d1b70(int a0, int a1) { return a1; }

// @baa 0x016d1b80
int sub_016d1b80(int a0, int a1) { return a1; }

struct C { C* sub_016d1b90(int a0); };

// @baa 0x016d1b90
C* C::sub_016d1b90(int a0) { return this; }

// @baa 0x016d1be0
undefined4 sub_016d1be0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_016d1bf0 { float sub_016d1bf0(void); };

// @baa 0x016d1bf0
float C_016d1bf0::sub_016d1bf0(void) { return *(float*)((char*)this + 72); }

extern int g_026e2530;
extern int g_026e2d88;
extern int g_026e2d94;
extern int g_026e2da0;
extern int g_026e2dac;
void* __cdecl sub_01a375f0(void* dst, const void* src, unsigned int n);
struct C_016d7e60 {
    void* Data;
    int Num;
    int Max;
    int sub_00417dc0(int n);
    void sub_0040fcc0();
};

struct S_016d7e60 : C_016d7e60 {
    S_016d7e60(const TCHAR* In) {
        sub_00417dc0(26);
        if (Num != 0) sub_01a375f0(Data, In, Num * 2);
    }
    ~S_016d7e60() { sub_0040fcc0(); }
};

struct VM {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
    virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
    virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
    virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
    virtual void p(void* s, int z, void* g);
};

// @baa 0x016d7e60
INT URGFxMovieFrontend::SendSaveInfoToFlash()
{
    {
        S_016d7e60 s(L"_root.StaticData.Profile0");
        ((VM*)this)->p(&s, 0, &g_026e2d88);
    }
    {
        S_016d7e60 s(L"_root.StaticData.Profile1");
        ((VM*)this)->p(&s, 0, &g_026e2d94);
    }
    {
        S_016d7e60 s(L"_root.StaticData.Profile2");
        ((VM*)this)->p(&s, 0, &g_026e2da0);
    }
    {
        S_016d7e60 s(L"_root.StaticData.Profile3");
        ((VM*)this)->p(&s, 0, &g_026e2dac);
    }
    return g_026e2530;
}

// @baa 0x016dc0e0

int sub_016d1dc0(void);
int sub_016e4130(...);
extern undefined4 g_026e22fc;
// @baa 0x016e58e0
int sub_016e58e0(void)
{
  if (g_026e22fc == 0) {
    g_026e22fc = sub_016e4130(L"BmGame");
    sub_016d1dc0();
  }
  return g_026e22fc;
}

int sub_005c7a20(void);
extern undefined * g_023a6148;
// @baa 0x016e5910
undefined4 * UObject::sub_016e5910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a6148);
  return param_1;
}

// @baa 0x016e5ad0
bool URGFxMovieFrontend::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e5b10

// @baa 0x016e5c20
bool URGFxMovieMap::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e5c60

// @baa 0x016e5d70
bool URGFxMovieInvestigate::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e5f00

// @baa 0x016e6010
bool URGFxMovieRiddler::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e6050

// @baa 0x016e6160
bool URGFxMovieBio::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e61a0
