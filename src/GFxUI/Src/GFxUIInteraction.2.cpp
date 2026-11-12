// GFxUIInteraction.cpp (part 2 of 3): 52 functions
// Placed here by: callers 10, file 10, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e48930
IMPLEMENT_CLASS_AT(UGFxInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 36);

// @baa 0x00e49a70
// @baa 0x00e6a500
IMPLEMENT_CLASS_AT(UGFxAction_CloseMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 28);

// @baa 0x00e6a520
IMPLEMENT_CLASS_AT(UGFxAction_GetVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 29);

// @baa 0x00e6a540
IMPLEMENT_CLASS_AT(UGFxAction_Invoke, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 30);

// @baa 0x00e6a560
IMPLEMENT_CLASS_AT(UGFxAction_OpenMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 31);

// @baa 0x00e6a580
IMPLEMENT_CLASS_AT(UGFxAction_SetCaptureKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 32);

// @baa 0x00e6a5a0
IMPLEMENT_CLASS_AT(UGFxAction_SetFocus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 33);

// @baa 0x00e6a5c0
IMPLEMENT_CLASS_AT(UGFxAction_SetVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 34);

// @baa 0x00e6a5e0
IMPLEMENT_CLASS_AT(UGFxEvent_FsCommand, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 37);

// @baa 0x00e6ac10
// @baa 0x00e6acd0
// @baa 0x00e6ad90
// @baa 0x00e6ae50
// @baa 0x00e6af10
// @baa 0x00e6afd0
// @baa 0x00e6b090
// @baa 0x00e6b150
// @baa 0x00e6be80
IMPLEMENT_CLASS_AT(UGFxFSCmdHandler_Kismet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIInteraction.cpp", 35);

int sub_005c7a70(...);
int sub_00e6be10(void);
// @baa 0x00e6be90
undefined4 UGFxFSCmdHandler_Kismet::sub_00e6be90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e6be10();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x6c);
  }
  return param_1;
}

int sub_0053dfa0(...);
int sub_00e6a680(void);
// @baa 0x00e6beb0
undefined4 UGFxFSCmdHandler_Kismet::sub_00e6beb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e6a680();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e6bed0

// @baa 0x00e43e00

// @baa 0x00e43f10
int UGFxAction_CloseMovie::vf_000(void) { return 1; }

// @baa 0x00e43f20
bool UGFxAction_CloseMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e43f60

// @baa 0x00e44070
int UGFxAction_GetVariable::vf_000(void) { return 1; }

// @baa 0x00e44080
bool UGFxAction_GetVariable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e440c0

// @baa 0x00e441d0
int UGFxAction_Invoke::vf_000(void) { return 1; }

// @baa 0x00e441e0
bool UGFxAction_Invoke::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44220

// @baa 0x00e44330
int UGFxAction_OpenMovie::vf_000(void) { return 1; }

// @baa 0x00e44340
bool UGFxAction_OpenMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44380

// @baa 0x00e44490
int UGFxAction_SetCaptureKeys::vf_000(void) { return 1; }

// @baa 0x00e444a0
bool UGFxAction_SetCaptureKeys::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e444e0

// @baa 0x00e445f0
int UGFxAction_SetFocus::vf_000(void) { return 1; }

// @baa 0x00e44600
bool UGFxAction_SetFocus::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44640

// @baa 0x00e44750
int UGFxAction_SetVariable::vf_000(void) { return 1; }

// @baa 0x00e44760
bool UGFxAction_SetVariable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e447a0
int UGFxFSCmdHandler_Kismet::vf_000(void) { return 1; }

// @baa 0x00e447b0

// @baa 0x00e448c0
int UGFxInteraction::vf_000(void) { return 1; }

// @baa 0x00e448d0
bool UGFxInteraction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e44910

// @baa 0x00e53710

// @baa 0x00e53820
bool UGFxFSCmdHandler_Kismet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct FGFxHandler { void sub_00e52fa0(INT Argument); };

extern FGFxHandler* g_026caed4;
struct UGFxInteraction_ : UGFxInteraction { void sub_00e53860(INT Argument); };

// @baa 0x00e53860
void UGFxInteraction_::sub_00e53860(INT Argument)
{
    if (g_026caed4 && Argument)
        g_026caed4->sub_00e52fa0(Argument);
}

void sub_00e66c90();
// @baa 0x00e6a600
void sub_00e6a600(void) { sub_00e66c90(); }
