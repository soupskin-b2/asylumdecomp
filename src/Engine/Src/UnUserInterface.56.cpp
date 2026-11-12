// UnUserInterface.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00ddd070
int sub_00ddd070(int a0, int a1) { return a1; }

/* Kit gap: FUIRangeData's native methods aren't declared. */
struct FUIRangeData_ : public FUIRangeData
{
	UBOOL HasValue() const;
};

// @baa 0x00dde670
/* Whether any of the range's values has been set. */
UBOOL FUIRangeData_::HasValue() const
{
	return CurrentValue != 0.f || MinValue != 0.f || MaxValue != 0.f || NudgeValue != 0.f || bIntRange;
}

struct SubObj_00569780
{
    int _A;
    int _B;
    int _C;
    int _D;
    int _E;
    int _Limit;
};

struct UIHolder_00569780
{
    int _Flags[2];
    SubObj_00569780* _Parent;
    int _Value;
    __declspec(noinline) int sub_00569780();
};

// @baa 0x00569780
int UIHolder_00569780::sub_00569780()
{
    return (_Value < _Parent->_Limit) ? 12 : -1;
}

int s0056()
{
    UIHolder_00569780 h;
    return h.sub_00569780();
}

extern FName g_026c4328;
	/* OnQueryCloseSceneAllowed */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScene_ : public UUIScene
{
	UBOOL delegateOnQueryCloseSceneAllowed(class UUIScene* SceneToDeactivate, UBOOL bCloseChildScenes, UBOOL bForcedClose);
};

// @baa 0x00ddd490
/* The script delegate's generated glue, out of line here. */
UBOOL UUIScene_::delegateOnQueryCloseSceneAllowed(class UUIScene* SceneToDeactivate, UBOOL bCloseChildScenes, UBOOL bForcedClose)
{
	struct UIScene_eventOnQueryCloseSceneAllowed_Parms
	{
		class UUIScene* SceneToDeactivate;
		UBOOL bCloseChildScenes;
		UBOOL bForcedClose;
		UBOOL ReturnValue;
	} Parms;
	Parms.SceneToDeactivate = SceneToDeactivate;
	Parms.bCloseChildScenes = bCloseChildScenes ? TRUE : FALSE;
	Parms.bForcedClose = bForcedClose ? TRUE : FALSE;
	Parms.ReturnValue = FALSE;
	ProcessDelegate(g_026c4328, &__OnQueryCloseSceneAllowed__Delegate, &Parms, NULL);
	return Parms.ReturnValue;
}

extern FName g_026c4020;
	/* OnScriptTick */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUITickableObjectProxy_ : public UUITickableObjectProxy
{
	void delegateOnScriptTick(class UUITickableObjectProxy* Sender, FLOAT DeltaTime);
};

// @baa 0x00ddd8a0
/* The script delegate's generated glue, out of line here. */
void UUITickableObjectProxy_::delegateOnScriptTick(class UUITickableObjectProxy* Sender, FLOAT DeltaTime)
{
	struct UITickableObjectProxy_eventOnScriptTick_Parms
	{
		class UUITickableObjectProxy* Sender;
		FLOAT DeltaTime;
	} Parms;
	Parms.Sender = Sender;
	Parms.DeltaTime = DeltaTime;
	ProcessDelegate(g_026c4020, &__OnScriptTick__Delegate, &Parms, NULL);
}

extern FName g_026c45d4;
	/* NotifyResolutionChanged */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScreenObject_ : public UUIScreenObject
{
	void delegateNotifyResolutionChanged(const FVector2D& OldViewportsize, const FVector2D& NewViewportSize);
};

// @baa 0x00da6f40
/* The script delegate's generated glue, out of line here. */
void UUIScreenObject_::delegateNotifyResolutionChanged(const FVector2D& OldViewportsize, const FVector2D& NewViewportSize)
{
	struct UIScreenObject_eventNotifyResolutionChanged_Parms
	{
		FVector2D OldViewportsize;
		FVector2D NewViewportSize;
	} Parms;
	Parms.OldViewportsize = OldViewportsize;
	Parms.NewViewportSize = NewViewportSize;
	ProcessDelegate(g_026c45d4, &__NotifyResolutionChanged__Delegate, &Parms, NULL);
}

// @baa 0x00dde3f0
/* Slot 0x19c (unnamed in the kit): whether a mouse cursor should be drawn. */
INT UGameUISceneClient::vf_19c(INT, INT)
{
	UBOOL bResult = FALSE;
	if (bRenderCursor && CurrentMouseCursor != NULL)
	{
		bResult = TRUE;
	}
	return bResult;
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
	__forceinline const T& ConstAt(INT i) const
	{
#line 566 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x00de6f80
/* Whether any active scene passes the SCENEFILTER_ Flags. */
INT UGameUISceneClient::IsUIActive(DWORD Flags)
{
	UBOOL bResult = FALSE;
	for (INT i = 0; i < ActiveScenes.Num(); i++)
	{
		if (this->sub_00de6e90(Flags, ((const TArrayAt_<UUIScene*>&)ActiveScenes).ConstAt(i)))
		{
			bResult = TRUE;
			break;
		}
	}
	return bResult;
}

#line 177 "candidate.cpp"
