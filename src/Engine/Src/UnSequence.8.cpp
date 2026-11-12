// UnSequence.cpp (part 8 of 10): 33 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_008c14b0(int);
};

int sub_0053df70(...);
// @baa 0x008c14b0
void C::sub_008c14b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008c14f0 {
    void sub_008c14f0(int);
};

// @baa 0x008c14f0
void C_008c14f0::sub_008c14f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008c1880 {
    void sub_008c1880(int);
};

// @baa 0x008c1880
void C_008c1880::sub_008c1880(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x50,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x008c1a00
void UObject::sub_008c1a00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x008c1b80
void UObject::sub_008c1b80(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008c2150 {
    void sub_008c2150(int);
};

// @baa 0x008c2150
void C_008c2150::sub_008c2150(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008c2700 {
    void sub_008c2700(int);
};

// @baa 0x008c2700
void C_008c2700::sub_008c2700(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_008d1890(void);
// @baa 0x008d1d20
void USeqAct_SetDOFParams::Activated(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  sub_008d1890();
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  }
  return;
}

// @baa 0x008d1d50
void USeqAct_ParticleEventGenerator::Activated(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0xd4) & 1) != 0) {
    sub_008d1890();
    return;
  }
  return;
}

struct C_008dcbc0 { void sub_008d5060(int); C_008dcbc0 *sub_008dcbc0(int); };

// @baa 0x008dcbc0
C_008dcbc0 *C_008dcbc0::sub_008dcbc0(int a) { sub_008d5060(a); return this; }

struct USeqAct_PlaySound_ : public USeqAct_PlaySound
{
    void sub_008df850();
    INT sub_00d201d0(INT Value);
    void sub_008ec1a0(UINT Value);
};

// @baa 0x008ec1a0
void USeqAct_PlaySound_::sub_008ec1a0(UINT Value)
{
    sub_008df850();
    sub_00d201d0(Value);
}

int sub_008eb9b0(void);
// @baa 0x008ec1c0
void USeqAct_PlaySound::vf_154(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    sub_008eb9b0();
    return;
  }
  return;
}

struct C_00d20240 {
    void sub_00d20240(int *);
};

// @baa 0x00d20240
void C_00d20240::sub_00d20240(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x38);
  param_2[1] = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x3c);
  return;
}

struct USeqAct_CastToFloat_ : public USeqAct_CastToFloat
{
    void Activated();
};

// @baa 0x008e5a20
void USeqAct_CastToFloat_::Activated()
{
    OutputLinks(0).bHasImpulse = TRUE;
    FloatResult = (FLOAT)Value;
}

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_Latent_ : public USeqAct_Latent
{
    void DeActivated();
};

// @baa 0x008bea90
void USeqAct_Latent_::DeActivated()
{
    if (bAutoActivateOutputLinks)
    {
        // activate the "Aborted" link if we were aborted (and have one), otherwise the first
        INT LinkIdx = (bAborted && OutputLinks.Num() > 1) ? 1 : 0;
        FSeqOpOutputLink& Link = OutputLinks(LinkIdx);
        if (!Link.bDisabled)
        {
            Link.bHasImpulse = TRUE;
        }
    }
    bAborted = FALSE;
}

/* FName comparisons (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* UnSequence.cpp's static level lookup (0x008cc3b0): finds the streaming level for LevelName. */
UBOOL FindLevel(ULevelStreaming*& Level, FName LevelName);
/* slot 0x1a0 (vf_1a0) */
struct USeqAct_LevelStreaming_ : public USeqAct_LevelStreaming
{
    void UpdateStatus();
};

// @baa 0x008cc4a0
void USeqAct_LevelStreaming_::UpdateStatus()
{
    // forget the cached level if it no longer matches the name
    if (Level != NULL && LevelName != NAME_None && Level->PackageName != LevelName)
    {
        Level = NULL;
    }
    ULevelStreaming* TheLevel = Level;
    bStatusIsOk = FindLevel(TheLevel, LevelName) != FALSE;
}

struct USeqAct_ActorFactory_ : public USeqAct_ActorFactory
{
    /* 0x008bc070: inputs 1/2/3 enable, disable or toggle bEnabled (also used by another op at 0x008db360) */
    void HandleEnableInputs();
    void Activated();
};

// @baa 0x008befc0
void USeqAct_ActorFactory_::Activated()
{
    // "Spawn Actor" starts spawning, the other inputs enable/disable/toggle
    if (InputLinks(0).bHasImpulse && Factory != NULL)
    {
        bIsSpawning = TRUE;
        RemainingDelay = 0.f;
        SpawnedCount = 0;
    }
    else
    {
        HandleEnableInputs();
    }
}

struct USeqAct_ActorFactory__008bc070 : public USeqAct_ActorFactory
{
    void HandleEnableInputs();
};

// @baa 0x008bc070
/* inputs 1/2/3 ("Enable", "Disable", "Toggle") */
void USeqAct_ActorFactory__008bc070::HandleEnableInputs()
{
    if (InputLinks(1).bHasImpulse)
    {
        bEnabled = TRUE;
    }
    else if (InputLinks(2).bHasImpulse)
    {
        bEnabled = FALSE;
    }
    else if (InputLinks(3).bHasImpulse)
    {
        bEnabled = !bEnabled;
    }
}

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_ModifyObjectList_ : public USeqAct_ModifyObjectList
{
    void DeActivated();
};

// @baa 0x008bed40
void USeqAct_ModifyObjectList_::DeActivated()
{
    // fire every enabled output
    for (INT LinkIdx = 0; LinkIdx < OutputLinks.Num(); LinkIdx++)
    {
        FSeqOpOutputLink& Link = OutputLinks(LinkIdx);
        if (!Link.bDisabled)
        {
            Link.bHasImpulse = TRUE;
        }
    }
}

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_PlaySound__008c0360 : public USeqAct_PlaySound
{
    void DeActivated();
};

// @baa 0x008c0360
void USeqAct_PlaySound__008c0360::DeActivated()
{
    // "Finished" normally, "Stopped" if the sound was stopped
    INT LinkIdx = bStopped ? 2 : 1;
    if (LinkIdx < OutputLinks.Num())
    {
        FSeqOpOutputLink& Link = OutputLinks(LinkIdx);
        if (!Link.bDisabled)
        {
            Link.bHasImpulse = TRUE;
        }
    }
}

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_PlayCameraAnim_ : public USeqAct_PlayCameraAnim
{
    void DeActivated();
};

// @baa 0x008c0e00
void USeqAct_PlayCameraAnim_::DeActivated()
{
    // "Finished" normally, "Stopped" if the anim was stopped
    INT LinkIdx = bStopped ? 2 : 1;
    if (LinkIdx < OutputLinks.Num())
    {
        FSeqOpOutputLink& Link = OutputLinks(LinkIdx);
        if (!Link.bDisabled)
        {
            Link.bHasImpulse = TRUE;
        }
    }
}

/* slot 0x178 (vf_178) is USequenceOp::DeActivated */
struct USeqAct_IsInObjectList_ : public USeqAct_IsInObjectList
{
    void DeActivated();
};

// @baa 0x008bedb0
void USeqAct_IsInObjectList_::DeActivated()
{
    // output 0 is "In List", output 1 "Not In List"
    INT LinkIdx = bObjectFound ? 0 : 1;
    FSeqOpOutputLink& Link = OutputLinks(LinkIdx);
    if (!Link.bDisabled)
    {
        Link.bHasImpulse = TRUE;
    }
}

struct USeqAct_CameraLookAt_ : public USeqAct_CameraLookAt
{
    UBOOL UpdateOp(FLOAT DeltaTime);
};

// @baa 0x008ac830
UBOOL USeqAct_CameraLookAt_::UpdateOp(FLOAT DeltaTime)
{
    // with a timer, stay active until it runs out
    if (bUsedTimer)
    {
        RemainingTime -= DeltaTime;
        return RemainingTime <= 0.f;
    }
    return TRUE;
}

/* FIntPoint's constructor and FIntRect (UnMath.h); not in the kit's headers. */
struct FIntPoint_ : public FIntPoint
{
    FIntPoint_() {}
    FIntPoint_(INT InX, INT InY) { X = InX; Y = InY; }
};

struct FIntRect
{
    FIntPoint_ Min, Max;
    FIntRect() {}
    FIntRect(INT X0, INT Y0, INT X1, INT Y1) : Min(X0, Y0), Max(X1, Y1) {}
};

/* slot 0x134 (vf_134) is USequenceObject::GetSeqObjBounds (0x00d201a0 for the base) */
struct USequenceObject_ : public USequenceObject
{
    FIntRect GetSeqObjBounds();
};

struct USequenceFrame_ : public USequenceFrame
{
    FIntRect GetSeqObjBounds();
};

// @baa 0x008bbe70
FIntRect USequenceFrame_::GetSeqObjBounds()
{
    if (bDrawBox)
    {
        return FIntRect(ObjPosX, ObjPosY, ObjPosX + SizeX, ObjPosY + SizeY);
    }
    return ((USequenceObject_*)this)->USequenceObject_::GetSeqObjBounds();
}

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Bool_ : public USeqVar_Bool
{
    FString GetValueStr();
};

// @baa 0x008bc4b0
FString USeqVar_Bool_::GetValueStr()
{
    return FString(bValue == TRUE ? TEXT("True") : TEXT("False"));
}

/* FString::Printf (0x005488a0) isn't declared in the kit. */
struct FString_ : public FString
{
    static FString Printf(const TCHAR* Fmt, ...);
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Int_ : public USeqVar_Int
{
    FString GetValueStr();
};

// @baa 0x008c8250
FString USeqVar_Int_::GetValueStr()
{
    return FString_::Printf(TEXT("%d"), IntValue);
}

/* FString::Printf, as the linker specialised it for these argument types (0x005a9f90);
 * the kit declares no FString::Printf. */
struct FString__008cb160 : public FString
{
    static FString Printf(const TCHAR* Fmt, BYTE Value);
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Byte_ : public USeqVar_Byte
{
    FString GetValueStr();
};

// @baa 0x008cb160
FString USeqVar_Byte_::GetValueStr()
{
    return FString__008cb160::Printf(TEXT("%u"), ByteValue);
}

/* FString::Printf, as the linker specialised it for these argument types (0x00723a70);
 * the kit declares no FString::Printf. */
struct FString__008c82a0 : public FString
{
    static FString Printf(const TCHAR* Fmt, INT A, INT B);
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_RandomInt_ : public USeqVar_RandomInt
{
    FString GetValueStr();
};

// @baa 0x008c82a0
FString USeqVar_RandomInt_::GetValueStr()
{
    return FString__008c82a0::Printf(TEXT("%d..%d"), Min, Max);
}

/* FString::Printf, as the linker specialised it for these argument types (0x0084a140);
 * the kit declares no FString::Printf. */
struct FString__008c81f0 : public FString
{
    static FString Printf(const TCHAR* Fmt, FLOAT A, FLOAT B);
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_RandomFloat_ : public USeqVar_RandomFloat
{
    FString GetValueStr();
};

// @baa 0x008c81f0
FString USeqVar_RandomFloat_::GetValueStr()
{
    return FString__008c81f0::Printf(TEXT("%2.2f..%2.2f"), Min, Max);
}

/* FString::Printf, as the linker specialised it for these argument types (0x005cc5f0);
 * the kit declares no FString::Printf. */
struct FString__008c8110 : public FString
{
    static FString Printf(const TCHAR* Fmt, FLOAT R, FLOAT G, FLOAT B, FLOAT A);
};

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Colour_ : public USeqVar_Colour
{
    FString GetValueStr();
};

// @baa 0x008c8110
FString USeqVar_Colour_::GetValueStr()
{
    return FString__008c8110::Printf(TEXT("R=%2.1f G=%2.1f B=%2.1f A=%2.1f"), ColourValue.R, ColourValue.G, ColourValue.B, ColourValue.A);
}

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Player_ : public USeqVar_Player
{
    FString GetValueStr();
};

// @baa 0x008c88d0
FString USeqVar_Player_::GetValueStr()
{
    if (!bAllPlayers)
    {
        return FString_::Printf(TEXT("Player %d"), PlayerIdx);
    }
    return FString(TEXT("All Players"));
}

/* FName == NAME_None (UnName.h); the kit's FName has no operators. */
inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

/* slot 0x194 (vf_194) is USequenceVariable::GetValueStr */
struct USeqVar_Group_ : public USeqVar_Group
{
    FString GetValueStr();
};

// @baa 0x008bec90
FString USeqVar_Group_::GetValueStr()
{
    if (GroupName == NAME_None)
    {
        return FString(TEXT("Invalid"));
    }
    return GroupName.ToString();
}

/* slot 0x140 (vf_140) is USequenceObject::UpdateObject; USequenceOp's (0x00902260) refreshes the
 * links from the class defaults. */
struct USequenceOp_ : public USequenceOp
{
    void UpdateObject();
};

struct USeqAct_ChangeCollision_ : public USeqAct_ChangeCollision
{
    void UpdateObject();
};

// @baa 0x00907ca0
void USeqAct_ChangeCollision_::UpdateObject()
{
    ((USequenceOp_*)this)->USequenceOp_::UpdateObject(); // Super::UpdateObject()
    // convert the old collision flags into a CollisionType
    if (bBlockActors)
    {
        CollisionType = COLLIDE_BlockAll;
    }
    else
    {
        CollisionType = bCollideActors ? COLLIDE_TouchAll : COLLIDE_NoCollision;
    }
}
