// RAnimNode_Cape.cpp (part 1 of 3): 95 functions
// Placed here by: neighbours 84, class 8, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0155cdf0
IMPLEMENT_CLASS_AT(URAnimNode_Cape, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp", 17);

// @baa 0x0155cf00
int URAnimNode_Cape::vf_000(void) { return 1; }

// @baa 0x0155cf10
bool URAnimNode_Cape::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0155cf50
uint URAnimNode_Cape::sub_0155cf50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xd0) >> 5 & 1;
}

int sub_006311e0(...);
extern undefined4 g_022f6364;
// @baa 0x0155cf60
DOUBLE URAnimNode_Cape::vf_178(INT param_2, INT param_3) {
    int param_1 = (int)this;

  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
                 ,0x1b6,&g_022f6364);
  }
  return (float10)*(float *)(param_1 + 0xd4);
}

struct C { int sub_0155d0d0(void); };

// @baa 0x0155d0d0
int C::sub_0155d0d0(void) { return *(int*)((char*)this + 4); }

struct C_0155d0e0 { int sub_0155d0e0(void); };

// @baa 0x0155d0e0
int C_0155d0e0::sub_0155d0e0(void) { return *(int*)((char*)this + 4); }

struct C_0155d0f0 { int sub_0155d0f0(void); };

// @baa 0x0155d0f0
int C_0155d0f0::sub_0155d0f0(void) { return *(int*)((char*)this + 4); }

struct C_0155d100 { int sub_0155d100(void); };

// @baa 0x0155d100
int C_0155d100::sub_0155d100(void) { return *(int*)((char*)this + 4); }

struct C_0155d110 { int sub_0155d110(void); };

// @baa 0x0155d110
int C_0155d110::sub_0155d110(void) { return *(int*)((char*)this + 4); }

struct C_0155d120 { int sub_0155d120(void); };

// @baa 0x0155d120
int C_0155d120::sub_0155d120(void) { return *(int*)((char*)this + 4); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0155d130();
};

// @baa 0x0155d130
S *S::sub_0155d130()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0155d140 {
    undefined4 sub_0155d140();
};

// @baa 0x0155d140
undefined4 C_0155d140::sub_0155d140(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_0155d150 { int a, b, c; C_0155d150(); };

// @baa 0x0155d150
C_0155d150::C_0155d150() : a(0), b(0), c(0) {}

struct C_0155d160 { int sub_0155d160(void); };

// @baa 0x0155d160
int C_0155d160::sub_0155d160(void) { return *(int*)((char*)this + 4); }

// @baa 0x01562420
undefined4 URAnimNode_Cape::sub_01562420(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x1b0) + 0x84);
}

struct C_01562430 {
    undefined4 sub_01562430();
};

// @baa 0x01562430
undefined4 C_01562430::sub_01562430(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x1b0) + 0x84);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0156a310 { void* Data; int Num; int Max; void sub_0156a310(); };

// @baa 0x0156a310
void C_0156a310::sub_0156a310() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156a370 { void* Data; int Num; int Max; void sub_0156a370(); };

// @baa 0x0156a370
void C_0156a370::sub_0156a370() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156a4c0 { void* Data; int Num; int Max; void sub_0156a4c0(); };

// @baa 0x0156a4c0
void C_0156a4c0::sub_0156a4c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156a520 { void* Data; int Num; int Max; void sub_0156a520(); };

// @baa 0x0156a520
void C_0156a520::sub_0156a520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0156a580 {
    void sub_0156a580();
};

// @baa 0x0156a580
void C_0156a580::sub_0156a580(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_0156a590 { void* Data; int Num; int Max; void sub_0156a590(); };

// @baa 0x0156a590
void C_0156a590::sub_0156a590() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_01575560(int, int);
};

// @baa 0x01579fb0
undefined4 URAnimNode_Cape::sub_01579fb0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_01575560(*(undefined4 *)(param_1 + 0xf4), *(undefined4 *)(param_1 + 0xf8));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

int sub_0157ad10(...);
int sub_01584680(void);
extern undefined4 g_026e112c;
// @baa 0x01586380
int sub_01586380(void)
{
  if (g_026e112c == 0) {
    g_026e112c = sub_0157ad10(L"BmGame");
    sub_01584680();
  }
  return g_026e112c;
}

// @baa 0x015863b0
IMPLEMENT_CLASS_AT(URSeqAct_ActivateScarecrow, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 93);

// @baa 0x015863d0
IMPLEMENT_CLASS_AT(URSeqAct_CameraShake, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 95);

// @baa 0x015863f0
IMPLEMENT_CLASS_AT(URSeqAct_ChangeMovieStatus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 96);

// @baa 0x01586410
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformChargeAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 156);

// @baa 0x01586430
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformCloseAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 157);

// @baa 0x01586450
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformSmashAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 155);

// @baa 0x01586470
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformSneakPeek, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 162);

// @baa 0x01586490
IMPLEMENT_CLASS_AT(URSeqAct_DisableCrocAttacks, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 158);

// @baa 0x015864b0
IMPLEMENT_CLASS_AT(URSeqAct_DropPlayerFromForensicsModes, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 99);

// @baa 0x015864d0
IMPLEMENT_CLASS_AT(URSeqAct_ForceCrocToJumpOff, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 161);

// @baa 0x015864f0
IMPLEMENT_CLASS_AT(URSeqAct_GetThugStatus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 104);

// @baa 0x01586510
IMPLEMENT_CLASS_AT(URSeqAct_GrappleToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 105);

// @baa 0x01586530
IMPLEMENT_CLASS_AT(URSeqAct_HelpText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 106);

// @baa 0x01586550
IMPLEMENT_CLASS_AT(URSeqAct_IsOnPontoon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 160);

// @baa 0x01586570
IMPLEMENT_CLASS_AT(URSeqAct_KillScarecrow, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 108);

// @baa 0x01586590
IMPLEMENT_CLASS_AT(URSeqAct_MakeBatmanLookAtItems, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 110);

// @baa 0x015865b0
IMPLEMENT_CLASS_AT(URSeqAct_NewSilentPredWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 114);

// @baa 0x015865d0
IMPLEMENT_CLASS_AT(URSeqAct_PlayCameraEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 115);

// @baa 0x015865f0
IMPLEMENT_CLASS_AT(URSeqAct_ScarecrowEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 118);

// @baa 0x01586610
IMPLEMENT_CLASS_AT(URSeqAct_SetEvidenceScanned, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 119);

// @baa 0x01586630
IMPLEMENT_CLASS_AT(URSeqAct_SetMeshInvestigationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 120);

// @baa 0x01586650
IMPLEMENT_CLASS_AT(URSeqAct_SetNeedsRescue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 121);

// @baa 0x01586670
IMPLEMENT_CLASS_AT(URSeqAct_SetPawnsREvidence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 122);

// @baa 0x01586690
IMPLEMENT_CLASS_AT(URSeqAct_SetRoomUnlocked, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 123);

// @baa 0x015866b0
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowFocus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 143);

// @baa 0x015866d0
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowInspect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 140);

// @baa 0x015866f0
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowParameters, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 124);

// @baa 0x01586710
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 141);

// @baa 0x01586730
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowSearchAnims, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 125);

// @baa 0x01586750
IMPLEMENT_CLASS_AT(URSeqAct_SetTrackingObjectVars, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 127);

// @baa 0x01586770
IMPLEMENT_CLASS_AT(URSeqAct_SetTrackingSpotlightVars, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 128);

// @baa 0x01586790
IMPLEMENT_CLASS_AT(URSeqAct_SetVenomParameters, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 142);

// @baa 0x015867b0
IMPLEMENT_CLASS_AT(URSeqAct_TriggerRunTheGauntlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 159);

// @baa 0x015867d0
IMPLEMENT_CLASS_AT(URSeqAct_UnlockXrayMode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 131);

// @baa 0x015867f0
IMPLEMENT_CLASS_AT(URSeqAct_ActivateElectrifiedFloorPanels, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 92);

// @baa 0x01586810
IMPLEMENT_CLASS_AT(URSeqAct_BatmanState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 94);

// @baa 0x01586830
IMPLEMENT_CLASS_AT(URSeqAct_Credits, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 98);

// @baa 0x01586850
IMPLEMENT_CLASS_AT(URSeqAct_FadeScreen, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 100);

// @baa 0x01586870
IMPLEMENT_CLASS_AT(URSeqAct_FadeSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 101);

// @baa 0x01586890
IMPLEMENT_CLASS_AT(URSeqAct_FullScreenPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 103);

// @baa 0x015868b0
IMPLEMENT_CLASS_AT(URSeqAct_HUDTimer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 107);

// @baa 0x015868d0
IMPLEMENT_CLASS_AT(URSeqAct_InDialogue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 109);

// @baa 0x015868f0
IMPLEMENT_CLASS_AT(URSeqAct_Mixbin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 102);

// @baa 0x01586910
IMPLEMENT_CLASS_AT(URSeqAct_ModifyPostProcess, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 111);

// @baa 0x01586930
IMPLEMENT_CLASS_AT(URSeqAct_MovePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 112);

// @baa 0x01586950
IMPLEMENT_CLASS_AT(URSeqAct_SetStationary1stPersonCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 126);

// @baa 0x01586970
IMPLEMENT_CLASS_AT(URSeqAct_ShowLevelIntroText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 129);

// @baa 0x01586990
IMPLEMENT_CLASS_AT(URSeqAct_SmilexBombClock, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 145);

// @baa 0x015869b0
IMPLEMENT_CLASS_AT(URSeqAct_SmoothCameraTransition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 130);

// @baa 0x015869d0
IMPLEMENT_CLASS_AT(URSeqAct_StreamInPackage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStreamInPackage.cpp", 3);

// @baa 0x015869f0
IMPLEMENT_CLASS_AT(URSeqAct_RandomSwitchForGameOver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 117);

// @baa 0x01586a10
IMPLEMENT_CLASS_AT(URSeqEvent_EvidenceFlagSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 132);

// @baa 0x01586a30
IMPLEMENT_CLASS_AT(URSeqEvent_EvidenceFound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 133);

// @baa 0x01586a50
IMPLEMENT_CLASS_AT(URSeqEvent_HitByGadget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 134);

// @baa 0x01586a70
IMPLEMENT_CLASS_AT(URSeqEvent_ItemInvestigated, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 135);

// @baa 0x01586a90
IMPLEMENT_CLASS_AT(URPoseConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 78);

// @baa 0x01586b60
UINT URAnimNode_Cape::vf_170() { return 1; }

int sub_01563f60(void);
int sub_01586e60(...);
extern undefined4 g_026e1194;
// @baa 0x015903d0
int sub_015903d0(void)
{
  if (g_026e1194 == 0) {
    g_026e1194 = sub_01586e60(L"BmGame");
    sub_01563f60();
  }
  return g_026e1194;
}

// @baa 0x01590400
int sub_01558640(void);
int sub_0158b630(...);
extern undefined4 g_026e1308;
// @baa 0x01590450
int sub_01590450(void)
{
  if (g_026e1308 == 0) {
    g_026e1308 = sub_0158b630(L"BmGame");
    sub_01558640();
  }
  return g_026e1308;
}

// @baa 0x01590480
IMPLEMENT_CLASS_AT(URSeqAct_ConversationDialogue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 8);

// @baa 0x01590590
bool URSeqAct_ConversationDialogue::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015905d0
IMPLEMENT_CLASS_AT(URBMSeqAct_PlaySpeech, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 12);

// @baa 0x015906e0
bool URBMSeqAct_PlaySpeech::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01590720
IMPLEMENT_CLASS_AT(URSeqAct_PlaySpeechConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 13);

// @baa 0x01590830
bool URSeqAct_PlaySpeechConversation::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01590870
IMPLEMENT_CLASS_AT(URSeqAct_VoiceOfArkham, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 15);

// @baa 0x01590980
bool URSeqAct_VoiceOfArkham::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_0158c5b0();
// @baa 0x01590b70
void sub_01590b70(void) { sub_0158c5b0(); }

// @baa 0x01590eb0
