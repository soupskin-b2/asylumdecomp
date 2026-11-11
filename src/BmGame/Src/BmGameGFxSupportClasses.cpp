// BmGameGFxSupportClasses.cpp: 44 functions
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
