// CommonGameClasses.cpp (part 11 of 12): 29 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_022e0a10;
// @baa 0x01533770
undefined4 * UObject::sub_01533770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0a10);
  return param_1;
}

extern undefined * g_022e0b20;
// @baa 0x01533840
undefined4 * UObject::sub_01533840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0b20);
  return param_1;
}

extern undefined * g_022e0cc0;
// @baa 0x01534ca0
undefined4 * UObject::sub_01534ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0cc0);
  return param_1;
}

// @baa 0x0150f010
IMPLEMENT_CLASS_AT(URScriptConversationFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 40);

// @baa 0x0150f120
int URScriptConversationFactoryNew::vf_000(void) { return 1; }

// @baa 0x0150f130
bool URScriptConversationFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150f2c0
int sub_0150f2c0(void) { return 1; }

int sub_005fbe20(void);
int sub_0060f890(...);
extern undefined4 g_026a4b38;
// @baa 0x0150f2d0
bool URScriptConversationFactoryNew::sub_0150f2d0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  if (g_026a4b38 == 0) {
    g_026a4b38 = sub_0060f890(L"Core");
    sub_005fbe20();
  }
  return iVar1 != g_026a4b38;
}

extern undefined4 g_026c3cdc;
// @baa 0x0150f350
INT ARGameInfoBase::vf_37c() {
  return g_026c3cdc;
}

extern undefined4 g_026cbfb4;
// @baa 0x0150f3f0
INT ARGameInfoBase::vf_3a8() {
  return g_026cbfb4;
}

// @baa 0x0150f400
void ARDebugMenu::vf_360() {  }

extern INT g_026e0b78;
// @baa 0x0150f470
INT ARDebugMenu::vf_384(INT Value)
{
    g_026e0b78 = Value;
    return Value;
}

// @baa 0x0150f500
void ARPlayerControllerBase::vf_478(void) {  }

extern undefined4 g_025da74c;
// @baa 0x0150f510
void sub_0150f510(void)
{
  g_025da74c = (uint)(g_025da74c == 0);
  return;
}

// @baa 0x0150f530
void ARDebugMenu::vf_378(void) {  }

// @baa 0x01537f40
IMPLEMENT_CLASS_AT(URPlayerInputBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 25);

extern FName g_026e0f18;
 /* COMMONGAME_UpdateOpScript */
/* FSeqOpOutputLink::ActivateOutputLink, inline in UE3's header (not in the kit). */
struct FSeqOpOutputLink_ : public FSeqOpOutputLink
{
    UBOOL ActivateOutputLink()
    {
        if (!bDisabled)
        {
            bHasImpulse = TRUE;
            return TRUE;
        }
        return FALSE;
    }
};

/* The UpdateOpScript script event's generated glue (inline in CommonGameClasses.h). */
struct URSeqAct_ChangeRain_None_ : public URSeqAct_ChangeRain_None
{
    UBOOL eventUpdateOpScript(FLOAT DeltaTime)
    {
        struct RSeqAct_ChangeRain_None_eventUpdateOpScript_Parms
        {
            FLOAT DeltaTime;
            UBOOL ReturnValue;
        };
        RSeqAct_ChangeRain_None_eventUpdateOpScript_Parms Parms;
        Parms.ReturnValue = FALSE;
        Parms.DeltaTime = DeltaTime;
        ProcessEvent(FindFunctionChecked(g_026e0f18), &Parms);
        return Parms.ReturnValue;
    }
};

// @baa 0x015338d0
/* The latent action runs in script; it finishes when UpdateOpScript returns TRUE. */
UBOOL URSeqAct_ChangeRain_None::UpdateOp(FLOAT DeltaTime)
{
    UBOOL bFinished = ((URSeqAct_ChangeRain_None_*)this)->eventUpdateOpScript(DeltaTime);
    if (bFinished)
    {
        ((FSeqOpOutputLink_&)OutputLinks(0)).ActivateOutputLink();
    }
    return bFinished;
}

 /* COMMONGAME_UpdateOpScript */
/* The UpdateOpScript script event's generated glue (CommonGameClasses.h); this is its out-of-line
 * copy (inlined into URSeqAct_ChangeRain_None::UpdateOp at 015338d0, the only other user of the
 * name, so the class is inferred from that). */
struct URSeqAct_ChangeRain_None__01533870 : public URSeqAct_ChangeRain_None
{
    UBOOL eventUpdateOpScript(FLOAT DeltaTime);
};

// @baa 0x01533870
UBOOL URSeqAct_ChangeRain_None__01533870::eventUpdateOpScript(FLOAT DeltaTime)
{
    struct RSeqAct_ChangeRain_None_eventUpdateOpScript_Parms
    {
        FLOAT DeltaTime;
        UBOOL ReturnValue;
    };
    RSeqAct_ChangeRain_None_eventUpdateOpScript_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.DeltaTime = DeltaTime;
    ProcessEvent(FindFunctionChecked(g_026e0f18), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026e0bb4;
 /* COMMONGAME_ItemRO */
struct ARDynamicMenu_ : public ARDynamicMenu
{
    void eventItemRO(const FString& Text, BYTE R, BYTE G, BYTE B);
};

// @baa 0x01516990
/* RDynamicMenu.uc's ItemRO script event (a read-only menu line), generated glue
 * (CommonGameClasses.h). The script parameter names aren't known; these are descriptive. */
void ARDynamicMenu_::eventItemRO(const FString& Text, BYTE R, BYTE G, BYTE B)
{
    struct RDynamicMenu_eventItemRO_Parms
    {
        FString Text;
        BYTE R;
        BYTE G;
        BYTE B;
    };
    RDynamicMenu_eventItemRO_Parms Parms;
    Parms.Text = Text;
    Parms.R = R;
    Parms.G = G;
    Parms.B = B;
    ProcessEvent(FindFunctionChecked(g_026e0bb4), &Parms);
}

extern FName g_026e0d04;
 /* COMMONGAME_RItemF */
struct ARDebugMenu_ : public ARDebugMenu
{
    FLOAT eventRItemF(const FString& Text, FLOAT Value, FLOAT MinValue, FLOAT MaxValue, FLOAT Step);
};

// @baa 0x01516a40
/* RDebugMenu.uc's RItemF script event (a float menu item), generated glue (CommonGameClasses.h).
 * The script parameter names aren't known; these are descriptive. */
FLOAT ARDebugMenu_::eventRItemF(const FString& Text, FLOAT Value, FLOAT MinValue, FLOAT MaxValue, FLOAT Step)
{
    struct RDebugMenu_eventRItemF_Parms
    {
        FString Text;
        FLOAT Value;
        FLOAT MinValue;
        FLOAT MaxValue;
        FLOAT Step;
        FLOAT ReturnValue;
    };
    RDebugMenu_eventRItemF_Parms Parms;
    Parms.ReturnValue = 0;
    Parms.Text = Text;
    Parms.Value = Value;
    Parms.MinValue = MinValue;
    Parms.MaxValue = MaxValue;
    Parms.Step = Step;
    ProcessEvent(FindFunctionChecked(g_026e0d04), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026e0f10;
 /* COMMONGAME_RItemB */
struct ARDebugMenu__01516b20 : public ARDebugMenu
{
    UBOOL eventRItemB(const FString& Text, UBOOL bValue);
};

// @baa 0x01516b20
/* RDebugMenu.uc's RItemB script event (a boolean menu item), generated glue (CommonGameClasses.h).
 * The script parameter names aren't known; these are descriptive. */
UBOOL ARDebugMenu__01516b20::eventRItemB(const FString& Text, UBOOL bValue)
{
    struct RDebugMenu_eventRItemB_Parms
    {
        FString Text;
        UBOOL bValue;
        UBOOL ReturnValue;
    };
    RDebugMenu_eventRItemB_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.Text = Text;
    Parms.bValue = bValue ? TRUE : FALSE;
    ProcessEvent(FindFunctionChecked(g_026e0f10), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026e0bd0;
 /* COMMONGAME_ItemButton */
struct ARDynamicMenu__01516bd0 : public ARDynamicMenu
{
    UBOOL eventItemButton(const FString& Text, UBOOL bValue);
};

// @baa 0x01516bd0
/* RDynamicMenu.uc's ItemButton script event (a boolean menu item), generated glue (CommonGameClasses.h).
 * The script parameter names aren't known; these are descriptive. */
UBOOL ARDynamicMenu__01516bd0::eventItemButton(const FString& Text, UBOOL bValue)
{
    struct RDynamicMenu_eventItemButton_Parms
    {
        FString Text;
        UBOOL bValue;
        UBOOL ReturnValue;
    };
    RDynamicMenu_eventItemButton_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.Text = Text;
    Parms.bValue = bValue ? TRUE : FALSE;
    ProcessEvent(FindFunctionChecked(g_026e0bd0), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026e0f60;
 /* COMMONGAME_ItemFdB */
struct ARDebugMenu__01516c80 : public ARDebugMenu
{
    UBOOL eventItemFdB(const FString& Text, FLOAT& Value, FLOAT MinValue, FLOAT MaxValue, FLOAT Step);
};

// @baa 0x01516c80
/* RDebugMenu.uc's ItemFdB script event (a float menu item edited in place: Value is an out
 * parameter), generated glue (CommonGameClasses.h). The script parameter names aren't known;
 * these are descriptive. */
UBOOL ARDebugMenu__01516c80::eventItemFdB(const FString& Text, FLOAT& Value, FLOAT MinValue, FLOAT MaxValue, FLOAT Step)
{
    struct RDebugMenu_eventItemFdB_Parms
    {
        FString Text;
        FLOAT Value;
        FLOAT MinValue;
        FLOAT MaxValue;
        FLOAT Step;
        UBOOL ReturnValue;
    };
    RDebugMenu_eventItemFdB_Parms Parms;
    Parms.ReturnValue = FALSE;
    Parms.Text = Text;
    Parms.Value = Value;
    Parms.MinValue = MinValue;
    Parms.MaxValue = MaxValue;
    Parms.Step = Step;
    ProcessEvent(FindFunctionChecked(g_026e0f60), &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

/* UObject::MarkPackageDirty (005d9570) isn't declared in the kit. */
struct UObject_ : public UObject
{
    void MarkPackageDirty(UBOOL InDirty = TRUE);
};

// @baa 0x01533790
/* UObject::PostEditChange(UProperty* PropertyThatChanged) (slot 0x4c, a placeholder vf_04c taking
 * UINT in the kit): editing a bark set marks its package dirty. */
void URBarkSet::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    ((UObject_*)this)->MarkPackageDirty();
}

/* Engine helper at 00d457e0 (unnamed in the kit): the text height for a screen of the given height
 * (Height >= 800 ? 26 : 18). */
INT sub_00d457e0(INT Height);
// @baa 0x0150f410
/* ARHUDBase's GetPromptYPosition (slot 0x360, called by execGetPromptYPosition; a placeholder
 * GetPromptYPosition(INT, INT) in the kit): the prompt sits one text line above 92.5% of the canvas height.
 * The text height is picked for 85% of the first size. Parameter names are descriptive. */
INT ARHUDBase::GetPromptYPosition(INT SizeY, INT ClipY)
{
    FLOAT Height = (FLOAT)ClipY;
    INT TextHeight = sub_00d457e0(SizeY * 85 / 100);
    return (INT)((0.925f - TextHeight / Height) * Height);
}

/* The FMOD device's linear volume to decibels conversion (00e70d10, FMODAudioDevice.cpp). */
FLOAT VolumeToDecibels(FLOAT Volume);
// @baa 0x0150f480
/* ARDebugMenu slot 0x38c (a placeholder vf_38c(FLOAT) in the kit): a volume as the attenuation the
 * debug menu shows (0 at full volume). */
INT ARDebugMenu::vf_38c(FLOAT Volume)
{
    if (Volume == 1.0f)
    {
        return 0;
    }
    return -(INT)VolumeToDecibels(Volume);
}

/* Platform memory statistics (00eb4c30, WinDrv). On PC it fills the free and total physical
 * memory from GlobalMemoryStatus and zeroes the other four. The kit doesn't declare it; the name
 * and parameter names are descriptive. */
void GetMemoryStats(DWORD& AvailPhysical, DWORD& TotalPhysical, DWORD& Stat3, DWORD& Stat4, DWORD& Stat5, DWORD& Stat6);
// @baa 0x0150f360
/* ARGameInfoBase slot 0x384 (a placeholder vf_384(INT) in the kit): free memory in megabytes, the
 * physical memory or (with the flag set) the third statistic, which PC doesn't report. */
INT ARGameInfoBase::vf_384(INT bOtherStat)
{
    DWORD AvailPhysical, TotalPhysical, Stat3, Stat4, Stat5, Stat6;
    GetMemoryStats(AvailPhysical, TotalPhysical, Stat3, Stat4, Stat5, Stat6);
    return (bOtherStat ? Stat3 : AvailPhysical) >> 20;
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
    BITFIELD bCreateNew : 1;
    BITFIELD bEditAfterNew : 1;
    BITFIELD bEditorImport : 1;
    BITFIELD bText : 1;
};

// @baa 0x01530720
void URScriptConversationFactoryNew::InitializeIntrinsicPropertyValues()
{
    SupportedClass = URScriptConversation::StaticClass();
    ((FFactoryFlags*)_native2)->bCreateNew = TRUE;
    Description = TEXT("Script Conversation");
}

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
};

/* Kit gap: FString::operator== (0x00544d40, case-insensitive in UnString.h) isn't declared. */
struct FString_ : public FString
{
	UBOOL operator==(const FString& Other) const;
};

// @baa 0x01513860
/* Whether every flag type in OtherBase is present here with all of OtherBase's values for it. */
UBOOL URBarkFlagBase::HasTheseFlags(URBarkFlagBase* OtherBase)
{
	for (INT OtherIdx = 0; OtherIdx < ((TArrayAt_<FBarkFlag>&)OtherBase->FlagList).Num(); OtherIdx++)
	{
		INT FlagIdx = -1;
		for (INT MyIdx = 0; MyIdx < ((TArrayAt_<FBarkFlag>&)FlagList).Num(); MyIdx++)
		{
			if ((const FString_&)((TArrayAt_<FBarkFlag>&)FlagList).At(MyIdx).FlagType == ((TArrayAt_<FBarkFlag>&)OtherBase->FlagList).At(OtherIdx).FlagType)
			{
				FlagIdx = MyIdx;
			}
		}
		if (FlagIdx == -1)
		{
			return FALSE;
		}
		for (INT ValueIdx = 0; ValueIdx < ((TArrayAt_<FBarkFlag>&)OtherBase->FlagList).At(OtherIdx).FlagValue.Num(); ValueIdx++)
		{
			INT FoundIdx = -1;
			for (INT MyValueIdx = 0; MyValueIdx < ((TArrayAt_<FBarkFlag>&)FlagList).At(FlagIdx).FlagValue.Num(); MyValueIdx++)
			{
				if ((const FString_&)((TArrayAt_<FString>&)((TArrayAt_<FBarkFlag>&)FlagList).At(FlagIdx).FlagValue).At(MyValueIdx) == ((TArrayAt_<FString>&)((TArrayAt_<FBarkFlag>&)OtherBase->FlagList).At(OtherIdx).FlagValue).At(ValueIdx))
				{
					FoundIdx = ValueIdx;
				}
			}
			if (FoundIdx == -1)
			{
				return FALSE;
			}
		}
	}
	return TRUE;
}

#line 460 "candidate.cpp"
