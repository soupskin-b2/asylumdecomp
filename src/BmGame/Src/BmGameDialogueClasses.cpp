// BmGameDialogueClasses.cpp: 70 functions
// Placed here by: callers 13, file 13.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0157a770
IMPLEMENT_CLASS_AT(ARAudioPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 16);

// @baa 0x0157c8a0
// @baa 0x0158b3f0
IMPLEMENT_CLASS_AT(URSeqAct_DuckDialogue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 18);

// @baa 0x0158b410
IMPLEMENT_CLASS_AT(URSeqAct_PlayerDialogueOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 11);

// @baa 0x0158b430
IMPLEMENT_CLASS_AT(URSeqAct_PlaySpeechBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 9);

// @baa 0x0158b450
IMPLEMENT_CLASS_AT(URBMSeqAct_PlaySpeech, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 12);

// @baa 0x0158b470
IMPLEMENT_CLASS_AT(URSeqAct_PlayTVSequenceSingleLine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 20);

// @baa 0x0158b490
IMPLEMENT_CLASS_AT(URSeqAct_ConversationDialogue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 8);

// @baa 0x0158b4b0
IMPLEMENT_CLASS_AT(URSeqAct_PlayerDialogueLine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 10);

// @baa 0x0158b4d0
IMPLEMENT_CLASS_AT(URSeqAct_RadioDialogueLine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 14);

// @baa 0x0158b4f0
IMPLEMENT_CLASS_AT(URSeqAct_PlaySpeechConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 13);

// @baa 0x0158b510
IMPLEMENT_CLASS_AT(URSeqAct_PlayTVSequenceBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 17);

// @baa 0x0158b530
IMPLEMENT_CLASS_AT(URSeqAct_VoiceOfArkham, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 15);

// @baa 0x0158b550
IMPLEMENT_CLASS_AT(URSeqAct_UnduckDialogue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameDialogueClasses.cpp", 19);

// @baa 0x0158b570
// @baa 0x0158b630
// @baa 0x0158b6f0
// @baa 0x0158b7b0
// @baa 0x0158b870
// @baa 0x0158b930
// @baa 0x0158b9f0
// @baa 0x0158bab0
// @baa 0x0158bb70
// @baa 0x0158bc30
// @baa 0x0158bcf0
// @baa 0x0158bdb0

// @baa 0x01558640

// @baa 0x01558750
int URSeqAct_PlaySpeechBase::vf_000(void) { return 1; }

// @baa 0x01558760
bool URSeqAct_PlaySpeechBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015587a0
int URSeqAct_PlayerDialogueLine::vf_000(void) { return 1; }

// @baa 0x015587b0

// @baa 0x015588c0
int URSeqAct_PlayerDialogueOptions::vf_000(void) { return 1; }

// @baa 0x015588d0
bool URSeqAct_PlayerDialogueOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01558910
int URBMSeqAct_PlaySpeech::vf_000(void) { return 1; }

// @baa 0x01558920
int URSeqAct_PlaySpeechConversation::vf_000(void) { return 1; }

// @baa 0x01558930
int URSeqAct_RadioDialogueLine::vf_000(void) { return 1; }

// @baa 0x01558940
int URSeqAct_VoiceOfArkham::vf_000(void) { return 1; }

// @baa 0x01558950

// @baa 0x01558a60
int ARAudioPoint::vf_000(void) { return 1; }

// @baa 0x01558a70
bool ARAudioPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01558ab0
int URSeqAct_PlayTVSequenceBase::vf_000(void) { return 1; }

// @baa 0x01558ac0

// @baa 0x01558bd0
int URSeqAct_DuckDialogue::vf_000(void) { return 1; }

// @baa 0x01558be0
bool URSeqAct_DuckDialogue::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01558c20

struct C_view_0157cf90 {
    int sub_00547da0(int);
    int sub_00d201d0(int);
    int sub_008dc680(int, int);
};

// @baa 0x0157cf90
void URSeqAct_RadioDialogueLine::PostEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  ((C_view_0157cf90 *)(((char *)this + 0x60)))->sub_00547da0(param_1 + 0x110);
  URSeqAct_PlaySpeechBase::PostEditChange(param_2);
  ((C_view_0157cf90 *)(((char *)this + 0x94)))->sub_008dc680(0, *(undefined4 *)(param_1 + 0x98));
  return;
}

int sub_005c7a20(void);
extern undefined * g_0230ee80;
// @baa 0x01584b40
undefined4 * UObject::sub_01584b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230ee80);
  return param_1;
}

extern undefined * g_0230f028;
// @baa 0x01584d20
undefined4 * UObject::sub_01584d20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f028);
  return param_1;
}

struct C_01584da0 { C_01584da0* sub_01584da0(int a0); };

// @baa 0x01584da0
C_01584da0* C_01584da0::sub_01584da0(int a0) { return this; }

extern undefined * g_0230f1c8;
// @baa 0x01584ea0
undefined4 * UObject::sub_01584ea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f1c8);
  return param_1;
}

extern undefined * g_0230f368;
// @baa 0x01584ec0
undefined4 * UObject::sub_01584ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f368);
  return param_1;
}

struct C_01585010 { C_01585010* sub_01585010(int a0); };

// @baa 0x01585010
C_01585010* C_01585010::sub_01585010(int a0) { return this; }

extern undefined * g_0230f510;
// @baa 0x01585260
undefined4 * UObject::sub_01585260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f510);
  return param_1;
}

extern undefined * g_0230f6d0;
// @baa 0x01585280
undefined4 * UObject::sub_01585280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f6d0);
  return param_1;
}

extern undefined * g_0230f8a8;
// @baa 0x015853d0
undefined4 * UObject::sub_015853d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230f8a8);
  return param_1;
}

extern undefined * g_0230fa68;
// @baa 0x015856a0
undefined4 * UObject::sub_015856a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230fa68);
  return param_1;
}

extern undefined * g_0230fc10;
// @baa 0x015856c0
undefined4 * UObject::sub_015856c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230fc10);
  return param_1;
}

extern undefined * g_0230fdc0;
// @baa 0x01585810
undefined4 * UObject::sub_01585810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230fdc0);
  return param_1;
}

extern undefined * g_0230ff60;
// @baa 0x01585960
undefined4 * UObject::sub_01585960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230ff60);
  return param_1;
}

// @baa 0x01591610

// @baa 0x01591720
bool URSeqAct_PlayerDialogueLine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01591760

// @baa 0x01591870
bool URSeqAct_RadioDialogueLine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015918b0

// @baa 0x015919c0
bool URSeqAct_PlayTVSequenceBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01591a00

// @baa 0x01591b10
bool URSeqAct_PlayTVSequenceSingleLine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern FName g_026e328c;
 /* VoAStartSound */
struct URSeqAct_VoiceOfArkham_ : public URSeqAct_VoiceOfArkham
{
    void eventVoAStartSound();
};

/* RSeqAct_VoiceOfArkham.VoAStartSound script event: the generated glue (no parameters). */
inline void URSeqAct_VoiceOfArkham_::eventVoAStartSound()
{
    ProcessEvent(FindFunctionChecked(g_026e328c), NULL);
}

// @baa 0x01585860
/* The action hands the work to script once its input fires; it never finishes here. */
UBOOL URSeqAct_VoiceOfArkham::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_VoiceOfArkham_*)this)->eventVoAStartSound();
    }
    return FALSE;
}

struct URSeqAct_ConversationDialogue_ : public URSeqAct_ConversationDialogue
{
    void sub_01578e70();
};

// @baa 0x01578f20
void URSeqAct_ConversationDialogue::vf_188()
{
    ((URSeqAct_ConversationDialogue_*)this)->sub_01578e70();
    vf_1b8();
}

struct URSeqAct_PlaySpeechConversation_ : public URSeqAct_PlaySpeechConversation
{
    void sub_01578f40();
};

// @baa 0x0157cfd0
void URSeqAct_PlaySpeechConversation::vf_188()
{
    ((URSeqAct_PlaySpeechConversation_*)this)->sub_01578f40();
    vf_1a4();
}
