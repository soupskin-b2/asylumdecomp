// UnUIObjects.cpp (part 15 of 17): 25 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00da80c0
int UConsoleEntry::vf_000(void) { return 1; }

// @baa 0x00db6bd0
IMPLEMENT_CLASS_AT(UConsoleEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 50);

// @baa 0x00daa7e0
UINT UUIObject::GetNumResolvedFaces()
{
    UINT Result = 0;
    for (INT Face = 0; Face < 4; Face++) {
        if (HasPositionBeenResolved(Face)) {
            Result++;
        }
    }
    return Result;
}

// GetTag returns the widget's tag by value (the header's INT GetTag(INT) is the wrong shape).

// @baa 0x00d99300
FName UUIObject::GetTag()
{
    return WidgetTag;
}

// @baa 0x00d99330
INT UUIObject::HasPositionBeenResolved(BYTE FaceIndex)
{
    return DockTargets.bResolved[FaceIndex] != 0;
}

// @baa 0x00daa3d0
void UUIObject::RequestFormattingUpdate()
{
    UUIScene* Scene = reinterpret_cast<UUIScene*>(GetScene());
    if (Scene != NULL)
        Scene->RequestFormattingUpdate();
}

struct C
{
    BYTE pad_00[0x10];
    BYTE Values[1];

    INT sub_00da6660(INT Index);
};

// @baa 0x00da6660
INT C::sub_00da6660(INT Index)
{
    return Values[Index];
}

extern int GetOutermost();
extern int sub_005c1d70();
// @baa 0x00ca5000
int sub_00ca5000()
{
    return GetOutermost() == sub_005c1d70();
}

// @baa 0x00daabb0
int UUIObject::sub_00daabb0(INT Flags)
{
    return (PrivateFlags & Flags) == Flags;
}

void sub_00dde830();
struct C_00da6dc0
{
    C_00da6dc0* sub_00da6dc0(INT Unused);
};

// @baa 0x00da6dc0
C_00da6dc0* C_00da6dc0::sub_00da6dc0(INT)
{
    sub_00dde830();
    return this;
}

struct C_00da6dd0
{
    C_00da6dd0* sub_00da6dd0(INT Unused);
};

// @baa 0x00da6dd0
C_00da6dd0* C_00da6dd0::sub_00da6dd0(INT)
{
    sub_00dde830();
    return this;
}

void sub_00dde720();
struct C_00da6de0
{
    C_00da6de0* sub_00da6de0(INT Unused);
};

// @baa 0x00da6de0
C_00da6de0* C_00da6de0::sub_00da6de0(INT)
{
    sub_00dde720();
    return this;
}

struct C_00da6df0
{
    C_00da6df0* sub_00da6df0(INT Unused);
};

// @baa 0x00da6df0
C_00da6df0* C_00da6df0::sub_00da6df0(INT)
{
    sub_00dde720();
    return this;
}

struct C_00da7360
{
    C_00da7360* sub_00da7360(INT Unused);
};

// @baa 0x00da7360
C_00da7360* C_00da7360::sub_00da7360(INT)
{
    sub_00dde720();
    return this;
}

// @baa 0x00daa430
void UUIObject::RequestPrimitiveReview(UBOOL bReinitializePrimitives, UBOOL bReviewPrimitiveUsage)
{
	UUIObject* Scene = (UUIObject*)GetScene();
	if (Scene != 0)
	{
		Scene->RequestPrimitiveReview(bReinitializePrimitives, bReviewPrimitiveUsage);
		return;
	}
}

/* Exchange and Sort (UnTemplate.h); not in the kit. */
template<class T> inline void Exchange(T& A, T& B)
{
    const T Temp = A;
    A = B;
    B = Temp;
}

template<class T, class CompareClass> void Sort(T* First, INT Num)
{
    struct FStack
    {
        T* Min;
        T* Max;
    };
    if (Num < 2)
    {
        return;
    }
    FStack RecursionStack[32] = {First, First + Num - 1}, Current, Inner;
    for (FStack* StackTop = RecursionStack; StackTop >= RecursionStack; --StackTop)
    {
        Current = *StackTop;
    Loop:
        INT Count = Current.Max - Current.Min + 1;
        if (Count <= 8)
        {
            // simple bubble sort
            while (Current.Max > Current.Min)
            {
                T *Max, *Item;
                for (Max = Current.Min, Item = Current.Min + 1; Item <= Current.Max; Item++)
                {
                    if (CompareClass::Compare(*Item, *Max) > 0)
                    {
                        Max = Item;
                    }
                }
                Exchange(*Max, *Current.Max--);
            }
        }
        else
        {
            // grab the middle element so presorted lists don't hit the worst case
            Exchange(Current.Min[Count / 2], Current.Min[0]);

            // split into items <= Current.Min and items > it
            Inner.Min = Current.Min;
            Inner.Max = Current.Max + 1;
            for (;;)
            {
                while (++Inner.Min <= Current.Max && CompareClass::Compare(*Inner.Min, *Current.Min) <= 0);
                while (--Inner.Max > Current.Min && CompareClass::Compare(*Inner.Max, *Current.Min) >= 0);
                if (Inner.Min > Inner.Max)
                {
                    break;
                }
                Exchange(*Inner.Min, *Inner.Max);
            }
            Exchange(*Current.Min, *Inner.Max);

            // save the big half and recurse with the small one
            if (Inner.Max - 1 - Current.Min >= Current.Max - Inner.Min)
            {
                if (Current.Min + 1 < Inner.Max)
                {
                    StackTop->Min = Current.Min;
                    StackTop->Max = Inner.Max - 1;
                    StackTop++;
                }
                if (Current.Max > Inner.Min)
                {
                    Current.Min = Inner.Min;
                    goto Loop;
                }
            }
            else
            {
                if (Current.Max > Inner.Min)
                {
                    StackTop->Min = Inner.Min;
                    StackTop++->Max = Current.Max;
                }
                if (Current.Min + 1 < Inner.Max)
                {
                    Current.Max = Inner.Max - 1;
                    goto Loop;
                }
            }
        }
    }
}

/* IMPLEMENT_COMPARE_POINTER(UUIObject, UnUIObjects, { return A->TabIndex - B->TabIndex; }): orders widgets by tab index */
class CompareUnUIObjectsUUIObjectPointer
{
public:
    static inline INT Compare(UUIObject* A, UUIObject* B) { return A->TabIndex - B->TabIndex; }
};

// @baa 0x00db2760
template void Sort<UUIObject*, CompareUnUIObjectsUUIObjectPointer>(UUIObject** First, INT Num);

struct C_00dc2cd0 { C_00dc2cd0* sub_00dc2cd0(void); };

// @baa 0x00dc2cd0
C_00dc2cd0* C_00dc2cd0::sub_00dc2cd0(void) { return this; }

// @baa 0x00dc2d30
BYTE UUIScene::GetInputMask(UINT a, UINT b)
{
    return PlayerInputMask;
}

struct UUIObject_ : public UUIObject {
    void sub_00daa410();
};

// @baa 0x00daa410
void UUIObject_::sub_00daa410()
{
    UUIScene* Scene = (UUIScene*)GetScene();
    if (Scene) {
        Scene->bReevaluateRotationSupport = true;
    }
}

struct C_00da67b0 {
    int A;
    int B;
    int C;
    C_00da67b0* sub_00da67b0(int Value);
};

// @baa 0x00da67b0
C_00da67b0* C_00da67b0::sub_00da67b0(int Value)
{
    A = 0;
    B = 0;
    C = Value;
    return this;
}

/* Kit gap: FName::operator== (UnName.h). */
FORCEINLINE UBOOL operator==(const FName& A, const FName& B)
{
	return A.Index == B.Index && A.Number == B.Number;
}

/* Kit gap: FindChildIndex is const in this build (the const operator() is used); Classes.h declares it non-const. */
struct UUIScreenObject_ : public UUIScreenObject
{
	INT FindChildIndex(FName WidgetName) const;
};

// @baa 0x00daf640
/* The index of the child whose WidgetTag is WidgetName, or INDEX_NONE. */
INT UUIScreenObject_::FindChildIndex(FName WidgetName) const
{
	INT Result = INDEX_NONE;
	for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
	{
		if (Children(ChildIndex)->WidgetTag == WidgetName)
		{
			Result = ChildIndex;
			break;
		}
	}
	return Result;
}

// @baa 0x00db0230
/* Sets the widget's depth, and optionally its children's. */
void UUIScreenObject::SetZDepth(FLOAT NewZDepth, UBOOL bPropagateToChildren)
{
	ZDepth = NewZDepth;
	if (bPropagateToChildren)
	{
		for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
		{
			UUIObject* Child = Children(ChildIndex);
			if (Child != NULL)
			{
				Child->SetZDepth(NewZDepth, TRUE);
			}
		}
	}
}

// @baa 0x00db1270
/* Sets or clears the private behavior flags in Behavior, and optionally on all children. */
void UUIObject::SetPrivateBehavior(INT Behavior, UBOOL Value, UBOOL bRecurse)
{
	if (Value)
	{
		PrivateFlags |= Behavior;
	}
	else
	{
		PrivateFlags &= ~Behavior;
	}

	if (bRecurse)
	{
		for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
		{
			Children(ChildIndex)->SetPrivateBehavior(Behavior, Value, bRecurse);
		}
	}
}

/* Kit gap: FPlayerInteractionData::GetFocusedControl (00ddece0, out of line) isn't declared. */
struct FPlayerInteractionData_ : public FPlayerInteractionData
{
	UUIObject* GetFocusedControl() const;
};

/* TArray's const operator() (Array.h:566), which the compiler inlines here but won't from the kit's plain
 * inline for this element type. */
struct FFocusControlArray : public TArray<FPlayerInteractionData>
{
	__forceinline const FPlayerInteractionData& At(INT i) const
	{
#line 566 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return GetTypedData()[i];
	}
};

// @baa 0x00db0550
/* The control that has focus for PlayerIndex; with bRecurse, the innermost focused descendant. */
UUIObject* UUIScreenObject::GetFocusedControl(UBOOL bRecurse, INT PlayerIndex) const
{
	UUIObject* Result = NULL;
	if (PlayerIndex >= 0 && PlayerIndex < FocusControls.Num())
	{
		const FPlayerInteractionData& PlayerData = ((const FFocusControlArray&)FocusControls).At(PlayerIndex);
		Result = ((const FPlayerInteractionData_&)PlayerData).GetFocusedControl();
		if (Result != NULL && bRecurse)
		{
			UUIObject* FocusedChild = Result->GetFocusedControl(bRecurse, PlayerIndex);
			if (FocusedChild != NULL)
			{
				Result = FocusedChild;
			}
		}
	}
	return Result;
}

#line 398 "candidate.cpp"

/* Kit gaps: UUIScene::GetSceneClient (inline, UnUIObjects.cpp) and UUIObject::GetActiveSkin aren't declared. */
struct UUIScene_ : public UUIScene
{
	FORCEINLINE UUISceneClient* GetSceneClient() const
	{
#line 5864 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
		check(SceneClient);
		return SceneClient;
	}
};

struct UUIObject__00daa120 : public UUIObject
{
	UUISkin* GetActiveSkin() const;
};

// @baa 0x00daa120
/* The skin the owning scene's scene client is using. */
UUISkin* UUIObject__00daa120::GetActiveSkin() const
{
#line 8658 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp"
	check(OwnerScene);
	return ((UUIScene_*)OwnerScene)->GetSceneClient()->ActiveSkin;
}

#line 425 "candidate.cpp"
