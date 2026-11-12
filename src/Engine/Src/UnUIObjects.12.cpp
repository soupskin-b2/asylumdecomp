// UnUIObjects.cpp (part 12 of 17): 42 functions
// Placed here by: class 11, neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d99400
IMPLEMENT_CLASS_AT(UUIContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 28);

// @baa 0x00d994d0
IMPLEMENT_CLASS_AT(UUICalloutButtonPanel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 29);

// @baa 0x00d99580
IMPLEMENT_CLASS_AT(UUITabPage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 36);

// @baa 0x00da8030
bool UUIScreenObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da9090
void UUIScreenObject::vf_110(int a0, int a1) {  }

// @baa 0x00da92f0
void UUIScreenObject::vf_1c4(void) {  }

// @baa 0x00da9310
void UUIScreenObject::vf_09c(void) {  }

// @baa 0x00da97a0
int UUIScreenObject::vf_1dc(int a0) { return 0; }

// @baa 0x00da97b0
INT UUIScreenObject::vf_1e0(INT a0) { return 0; }

// @baa 0x00da97c0
int UUIScreenObject::vf_1e4(int a0) { return 0; }

// @baa 0x00da97d0
int UUIScreenObject::vf_1e8(int a0, int a1) { return 0; }

// @baa 0x00da98a0
int UUIScreenObject::vf_124(int a0, int a1) { return 0; }

// @baa 0x00da9900
int UUIScreenObject::vf_160(int a0, int a1, int a2) { return 0; }

// @baa 0x00da99d0
uint UUIScreenObject::sub_00da99d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x50) >> 2 & 1;
}

struct TArrayFName_ : public TArray<FName> {
    INT sub_00547260(const FName& Item);
};

extern FName g_026c5ac0;
extern FName g_026c5a38;
extern FName g_026c5b18;
extern FName g_026c59bc;
extern FName g_026c59dc;
extern FName g_026c5af8;
extern FName g_026c5ae0;
struct UUIScreenObject_ : public UUIScreenObject {
    void sub_00db2cc0(TArray<FName>& out_KeyNames);
    void sub_00db2e70(TArray<FName>& out_KeyNames);
};

// @baa 0x00db2e70
void UUIScreenObject_::sub_00db2e70(TArray<FName>& out_KeyNames)
{
    TArrayFName_& KeyNames = (TArrayFName_&)out_KeyNames;
    KeyNames.sub_00547260(g_026c5ac0);
    KeyNames.sub_00547260(g_026c5a38);
    KeyNames.sub_00547260(g_026c5b18);
    KeyNames.sub_00547260(g_026c59bc);
    KeyNames.sub_00547260(g_026c59dc);
    KeyNames.sub_00547260(g_026c5af8);
    KeyNames.sub_00547260(g_026c5ae0);
    sub_00db2cc0(out_KeyNames);
}

/* Kit gaps: FName::operator== (UnName.h), UUIInteraction::GetDataStoreClient (static, 00d8dee0) and
 * UUIScene::CreateSceneDataStore (00db0a10) aren't declared. */
struct UUIInteraction_ : public UUIInteraction
{
	static UDataStoreClient* GetDataStoreClient();
};

struct UUIScene_ : public UUIScene
{
	void CreateSceneDataStore();
};

// @baa 0x00db0c60
/* Finds the data store tagged DataStoreTag: the scene's own for SceneData, else a global or player data store
 * (for InPlayerOwner, or the scene's owner). Callable on a NULL scene. */
UUIDataStore* UUIScene::ResolveDataStore(FName DataStoreTag, ULocalPlayer* InPlayerOwner)
{
	UUIDataStore* Result = NULL;

	if (DataStoreTag == FName((EName)0x364))		/* NAME_SceneData (not in Core.h EName) */
	{
		if (this != NULL)
		{
			if (SceneData == NULL)
			{
				((UUIScene_*)this)->CreateSceneDataStore();
			}
			Result = SceneData;
		}
	}
	else
	{
		UDataStoreClient* DataStoreClient = UUIInteraction_::GetDataStoreClient();
		if (DataStoreClient != NULL)
		{
			if (InPlayerOwner == NULL && this != NULL)
			{
				InPlayerOwner = PlayerOwner;
			}
			Result = DataStoreClient->FindDataStore(DataStoreTag, InPlayerOwner);
		}
	}

	return Result;
}

/* Kit gaps: UUIScene::RegisterTickableObject isn't declared (only its exec, 00cb3e90), and neither are the
 * TArray methods used on TickableObjects, which stay out of line for this element type (FindItemIndex 00dad6e0,
 * AddItem 00db1cb0, InsertItem 00db1b80). */
struct TArrayTickables_ : public TArray<FNativeElem_00db1b20>
{
	INT FindItemIndex(const FScriptInterface& Item) const;
	INT AddItem(const FScriptInterface& Item);
	INT InsertItem(const FScriptInterface& Item, INT Index);
};

struct UUIScene__00db4230 : public UUIScene
{
	UBOOL RegisterTickableObject(const FScriptInterface& Tickable, INT InsertIndex);
};

// @baa 0x00db4230
/* Adds Tickable to the scene's tickable objects (at InsertIndex, or the end if it's negative) unless it's already
 * there. Returns whether it was added. */
UBOOL UUIScene__00db4230::RegisterTickableObject(const FScriptInterface& Tickable, INT InsertIndex)
{
	UBOOL bResult = FALSE;
	if (Tickable.Object != NULL && Tickable.Interface != NULL)
	{
		if (((TArrayTickables_&)TickableObjects).FindItemIndex(Tickable) == INDEX_NONE)
		{
			if (InsertIndex < 0)
			{
				((TArrayTickables_&)TickableObjects).AddItem(Tickable);
				bResult = TRUE;
			}
			else if (InsertIndex <= TickableObjects.Num())
			{
				((TArrayTickables_&)TickableObjects).InsertItem(Tickable, InsertIndex);
				bResult = TRUE;
			}
		}
	}
	return bResult;
}

/* DECLARE_CLASS glue: compares UUIScreenObject's StaticConfigName (0x00d8fb40, "UI") with the base one
 * (0x0053f6c0, "Engine"); both are bound as INT-returning free functions. */
INT sub_00d8fb40();
INT sub_0053f6c0();
// @baa 0x00da8010
INT UUIScreenObject::vf_000()
{
    return sub_00d8fb40 == sub_0053f6c0;
}

// @baa 0x00db3580
/* UUIScreenObject slot 0x1c (kit vf_01c, UE3 PostLoad()): drop any NULL entries from Children. */
void UUIScreenObject::PostLoad()
{
    UObject::PostLoad();
    Children.RemoveItem(NULL);
}

/* ObjectFlags bits used here (UnObjBas.h names not in the kit): bit 46 and RF_Transactional (bit 32). */
#define RF_Bit46_ QWORD(0x0000400000000000)
#define RF_Transactional_ QWORD(0x0000000100000000)
// @baa 0x00da9060
/* UE3's UUIScreenObject::Initialize(UUIScene* inOwnerScene, UUIObject* inOwner): mark the widget transactional. */
void UUIScreenObject::Initialize(UUIScene* inOwnerScene, UUIObject* inOwner)
{
    if ((*(QWORD*)&ObjectFlags & RF_Bit46_) == 0)
    {
        *(QWORD*)&ObjectFlags |= RF_Transactional_;
    }
}

/* Unnamed in the kit: UE3's static INT UUIInteraction::GetPlayerIndex(INT ControllerId), and a UUIScreenObject helper
 * that falls back to the owning player's index. */
struct UUIInteraction__00db0370 : public UUIInteraction
{
    static INT sub_00d78350(INT ControllerId);
};

struct UUIScreenObject__00db0370 : public UUIScreenObject
{
    INT sub_00db02b0();
};

// @baa 0x00db0370
/* UE3's UUIScreenObject::GetPlayerOwnerIndex(UBOOL bRequireValidIndex). */
INT UUIScreenObject::GetPlayerOwnerIndex(UBOOL bRequireValidIndex)
{
    INT PlayerIndex = UUIInteraction__00db0370::sub_00d78350(GetBestControllerId());
    if (PlayerIndex == INDEX_NONE && bRequireValidIndex)
    {
        PlayerIndex = ((UUIScreenObject__00db0370*)this)->sub_00db02b0();
    }
    return PlayerIndex;
}

// @baa 0x00da9320
/* UUIScreenObject slot 0x70 (kit vf_070, UE3 PostEditUndo()): refresh positions (slot 0x164, all four flags) and
 * formatting, then UObject's version. */
void UUIScreenObject::vf_070()
{
    vf_164(TRUE, TRUE, TRUE, TRUE);
    RequestFormattingUpdate();
    UObject::vf_070();
}

// @baa 0x00da99e0
/* UE3's UUIScreenObject::AcceptsPlayerInput(INT PlayerIndex): whether the input mask lets PlayerIndex through. */
UBOOL UUIScreenObject::sub_00da99e0(INT PlayerIndex)
{
    UBOOL bResult = FALSE;
    if (PlayerIndex >= 0 && PlayerIndex < 4)
    {
        bResult = (GetInputMask(FALSE, FALSE) & (1 << PlayerIndex)) != 0;
    }
    return bResult;
}

/* Unnamed in the kit: a FUIScreenValue_Bounds helper that reports whether Face changed (UE3 IsPositionCurrent-style
 * check). */
struct FUIScreenValue_Bounds_ : public FUIScreenValue_Bounds
{
    UBOOL sub_00de0600(INT Arg, INT Face);
};

// @baa 0x00da94c0
/* Unnamed in the kit: UE3's UUIScreenObject::InvalidatePosition(BYTE Face): mark Face for re-resolve and invalidate
 * the faces that depend on it. */
void UUIScreenObject::sub_00da94c0(BYTE Face)
{
    UBOOL bChanged = ((FUIScreenValue_Bounds_&)Position).sub_00de0600(0, Face);
    Position.bInvalidated[Face] = 1;
    if (bChanged)
    {
        InvalidatePositionDependencies(Face);
    }
}

// @baa 0x00dbe5d0
/* UE3's UUIScreenObject::GetPositionVector(UBOOL bIncludeParentPosition): left and top in pixels, relative to the
 * viewport (EVALPOS_PixelViewport) or to the owner (EVALPOS_PixelOwner). */
FVector UUIScreenObject::GetPositionVector(UBOOL bIncludeParentPosition)
{
    INT OutputType = bIncludeParentPosition ? 1 : 3;
    FLOAT Left = GetPosition(0, OutputType, FALSE, FALSE);
    return FVector(Left, GetPosition(1, OutputType, FALSE, FALSE), 0.f);
}

// @baa 0x00db0160
/* UUIScreenObject slot 0x1d0 (kit vf_1d0): pass the notification on to every child. */
void UUIScreenObject::vf_1d0(INT Arg)
{
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        Children(ChildIndex)->vf_1d0(Arg);
    }
}

// @baa 0x00db01c0
/* UUIScreenObject slot 0x1d8 (kit vf_1d8): each child handles it through UUIObject slot 0x20c, then passes it on. */
void UUIScreenObject::vf_1d8(INT Arg)
{
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        UUIObject* Child = Children(ChildIndex);
        Child->vf_20c(Arg);
        Child->vf_1d8(Arg);
    }
}

// @baa 0x00db06a0
/* UUIScreenObject slot 0x194 (kit vf_194): when the second argument is set, pass the call on to every child. */
void UUIScreenObject::vf_194(INT Arg1, INT Arg2, INT Arg3)
{
    if (Arg2)
    {
        for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
        {
            UUIObject* Child = Children(ChildIndex);
            if (Child != NULL)
            {
                Child->vf_194(Arg1, Arg2, Arg3);
            }
        }
    }
}

// @baa 0x00dc3690
/* UE3's UUIScreenObject::DeProject(const FVector& PixelPosition): a pixel position (with depth) back into canvas
 * space. */
FVector UUIScreenObject::DeProject(const FVector& PixelPosition)
{
    FVector2D Pixel;
    Pixel.X = PixelPosition.X;
    Pixel.Y = PixelPosition.Y;
    FVector4 ScreenPosition = PixelToScreen(Pixel);
    ScreenPosition.Z = PixelPosition.Z;
    ScreenPosition.W = 1.f;
    return ScreenToCanvas(ScreenPosition);
}

/* Unnamed in the kit: UE3's FLOAT FUIScreenValue_Bounds::GetBoundsExtent(UUIScreenObject* OwnerWidget, BYTE Dimension,
 * BYTE OutputType, UBOOL bIgnoreDockPadding) and FVector2D::operator[](INT) (out of line here). */
struct FUIScreenValue_Bounds__00dafc20 : public FUIScreenValue_Bounds
{
    FLOAT sub_00de0540(UUIScreenObject* OwnerWidget, INT Dimension, INT OutputType, UBOOL bIgnoreDockPadding);
};

struct FVector2D_ : public FVector2D
{
    FLOAT& sub_00da6480(INT i);
};

// @baa 0x00dafc20
/* UE3's UUIScreenObject::GetBounds(BYTE Dimension, BYTE OutputType, UBOOL bIgnoreDockPadding): the widget's extent
 * along Dimension, less the viewport origin. */
FLOAT UUIScreenObject::GetBounds(BYTE Dimension, BYTE OutputType, UBOOL bIgnoreDockPadding)
{
    FLOAT Result = ((FUIScreenValue_Bounds__00dafc20&)Position).sub_00de0540(this, Dimension, OutputType, bIgnoreDockPadding);
    FVector2D_ ViewportOrigin;
    ViewportOrigin.X = 0.f;
    ViewportOrigin.Y = 0.f;
    GetViewportOrigin(ViewportOrigin);
    return Result - ViewportOrigin.sub_00da6480(Dimension);
}

// @baa 0x00daf950
/* UE3's UUIScreenObject::GetObjectCount(): this widget plus all of its descendants. */
INT UUIScreenObject::GetObjectCount()
{
    INT Result = 1;
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        UUIObject* Child = ((const TArray<UUIObject*>&)Children)(ChildIndex);
        if (Child != NULL)
        {
            Result += Child->GetObjectCount();
        }
    }
    return Result;
}

// @baa 0x00dbe6a0
/* UE3's UUIScreenObject::ContainsPoint(const FVector2D& Coordinates): whether the point is inside the widget's
 * bounds in viewport pixels (EVALPOS_PixelViewport). */
UBOOL UUIScreenObject::ContainsPoint(const FVector2D& Coordinates)
{
    FLOAT Bounds[4];
    for (INT Face = 0; Face < 4; Face++)
    {
        Bounds[Face] = GetPosition(Face, 1, FALSE, FALSE);
    }
    if (Bounds[0] > Coordinates.X || Coordinates.X > Bounds[2] || Bounds[1] > Coordinates.Y || Coordinates.Y > Bounds[3])
    {
        return FALSE;
    }
    return TRUE;
}

// @baa 0x00db0440
/* UUIScreenObject slot 0x1a8 (kit vf_1a8, UE3 InitializeTabIndices-style): give every child that has no TabIndex yet
 * and can take focus for some player the next free tab index. */
void UUIScreenObject::vf_1a8()
{
    INT NextTabIndex = 0;
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        UUIObject* Child = Children(ChildIndex);
        if (Child != NULL && NextTabIndex < Child->TabIndex + 1)
        {
            NextTabIndex = Child->TabIndex + 1;
        }
    }
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        UUIObject* Child = Children(ChildIndex);
        if (Child != NULL && Child->TabIndex == INDEX_NONE)
        {
            for (INT PlayerIndex = 0; PlayerIndex < FocusPropagation.Num(); PlayerIndex++)
            {
                if (Child->CanAcceptFocus(PlayerIndex))
                {
                    Child->TabIndex = NextTabIndex++;
                    break;
                }
            }
        }
    }
}

extern FName g_026c4690;
	/* NotifyActiveSkinChanged */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScreenObject__00da7140 : public UUIScreenObject
{
	void delegateNotifyActiveSkinChanged();
};

// @baa 0x00da7140
/* The script delegate's generated glue, out of line here. */
void UUIScreenObject__00da7140::delegateNotifyActiveSkinChanged()
{
	ProcessDelegate(g_026c4690, &__NotifyActiveSkinChanged__Delegate, NULL, NULL);
}

extern FName g_026c3dbc;
	/* OnValueChanged */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIObject_ : public UUIObject
{
	void delegateOnValueChanged(class UUIObject* Sender, INT PlayerIndex);
};

// @baa 0x00da71d0
/* The script delegate's generated glue, out of line here. */
void UUIObject_::delegateOnValueChanged(class UUIObject* Sender, INT PlayerIndex)
{
	struct UIObject_eventOnValueChanged_Parms
	{
		class UUIObject* Sender;
		INT PlayerIndex;
	} Parms;
	Parms.Sender = Sender;
	Parms.PlayerIndex = PlayerIndex;
	ProcessDelegate(g_026c3dbc, &__OnValueChanged__Delegate, &Parms, NULL);
}

extern FName g_026c5188;
	/* OnPostSceneUpdate */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIObject__00da7210 : public UUIObject
{
	void delegateOnPostSceneUpdate(class UUIObject* Sender);
};

// @baa 0x00da7210
/* The script delegate's generated glue, out of line here. */
void UUIObject__00da7210::delegateOnPostSceneUpdate(class UUIObject* Sender)
{
	struct UIObject_eventOnPostSceneUpdate_Parms
	{
		class UUIObject* Sender;
	} Parms;
	Parms.Sender = Sender;
	ProcessDelegate(g_026c5188, &__OnPostSceneUpdate__Delegate, &Parms, NULL);
}

extern FName g_026c53b0;
	/* OnPreSceneUpdate */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIObject__00da7240 : public UUIObject
{
	void delegateOnPreSceneUpdate(class UUIObject* Sender);
};

// @baa 0x00da7240
/* The script delegate's generated glue, out of line here. */
void UUIObject__00da7240::delegateOnPreSceneUpdate(class UUIObject* Sender)
{
	struct UIObject_eventOnPreSceneUpdate_Parms
	{
		class UUIObject* Sender;
	} Parms;
	Parms.Sender = Sender;
	ProcessDelegate(g_026c53b0, &__OnPreSceneUpdate__Delegate, &Parms, NULL);
}

extern FName g_026c4cf8;
	/* OnCreate */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIObject__00da7270 : public UUIObject
{
	void delegateOnCreate(class UUIObject* CreatedWidget, class UUIScreenObject* CreatorContainer);
};

// @baa 0x00da7270
/* The script delegate's generated glue, out of line here. */
void UUIObject__00da7270::delegateOnCreate(class UUIObject* CreatedWidget, class UUIScreenObject* CreatorContainer)
{
	struct UIObject_eventOnCreate_Parms
	{
		class UUIObject* CreatedWidget;
		class UUIScreenObject* CreatorContainer;
	} Parms;
	Parms.CreatedWidget = CreatedWidget;
	Parms.CreatorContainer = CreatorContainer;
	ProcessDelegate(g_026c4cf8, &__OnCreate__Delegate, &Parms, NULL);
}

extern FName g_026c54d8;
	/* OnSceneDeactivated */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScene__00da7480 : public UUIScene
{
	void delegateOnSceneDeactivated(class UUIScene* DeactivatedScene);
};

// @baa 0x00da7480
/* The script delegate's generated glue, out of line here. */
void UUIScene__00da7480::delegateOnSceneDeactivated(class UUIScene* DeactivatedScene)
{
	struct UIScene_eventOnSceneDeactivated_Parms
	{
		class UUIScene* DeactivatedScene;
	} Parms;
	Parms.DeactivatedScene = DeactivatedScene;
	ProcessDelegate(g_026c54d8, &__OnSceneDeactivated__Delegate, &Parms, NULL);
}

extern FName g_026c508c;
	/* OnSceneActivated */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScene__00da74b0 : public UUIScene
{
	void delegateOnSceneActivated(class UUIScene* ActivatedScene, UBOOL bInitialActivation);
};

// @baa 0x00da74b0
/* The script delegate's generated glue, out of line here. */
void UUIScene__00da74b0::delegateOnSceneActivated(class UUIScene* ActivatedScene, UBOOL bInitialActivation)
{
	struct UIScene_eventOnSceneActivated_Parms
	{
		class UUIScene* ActivatedScene;
		UBOOL bInitialActivation;
	} Parms;
	Parms.ActivatedScene = ActivatedScene;
	Parms.bInitialActivation = bInitialActivation ? TRUE : FALSE;
	ProcessDelegate(g_026c508c, &__OnSceneActivated__Delegate, &Parms, NULL);
}

extern FName g_026c5550;
	/* GetSceneInputModeOverride */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScene__00da7560 : public UUIScene
{
	BYTE delegateGetSceneInputModeOverride();
};

// @baa 0x00da7560
/* The script delegate's generated glue, out of line here. */
BYTE UUIScene__00da7560::delegateGetSceneInputModeOverride()
{
	struct UIScene_eventGetSceneInputModeOverride_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessDelegate(g_026c5550, &__GetSceneInputModeOverride__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c55c0;
	/* ShouldModulateBackgroundAlpha */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScene__00da7420 : public UUIScene
{
	UBOOL delegateShouldModulateBackgroundAlpha(FLOAT& AlphaModulationPercent);
};

// @baa 0x00da7420
/* The script delegate's generated glue, out of line here. */
UBOOL UUIScene__00da7420::delegateShouldModulateBackgroundAlpha(FLOAT& AlphaModulationPercent)
{
	struct UIScene_eventShouldModulateBackgroundAlpha_Parms
	{
		FLOAT AlphaModulationPercent;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.AlphaModulationPercent = AlphaModulationPercent;
	ProcessDelegate(g_026c55c0, &__ShouldModulateBackgroundAlpha__Delegate, &Parms, NULL);
	AlphaModulationPercent = Parms.AlphaModulationPercent;
	return Parms.ReturnValue;
}
