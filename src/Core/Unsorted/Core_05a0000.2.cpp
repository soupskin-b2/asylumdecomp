// Core_05a0000.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005aeed0
void UObject::execPopState(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bPopAll, 0);
	P_FINISH;
	sub_005aecc0(Stack, bPopAll);
}

/* UObject::PushState (0x5a61f0) isn't declared in the kit. */
struct UObject_ : public UObject
{
    void PushState(FName NewState, FName NewLabel);
};

// @baa 0x005a6470
void UObject::execPushState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(NewState);
    P_GET_NAME_OPTX(NewLabel, NAME_None);
    P_FINISH;
    ((UObject_*)this)->PushState(NewState, NewLabel);
}

// @baa 0x005a4fb0
/* Script logging; the debugf is compiled out of this build. The default tag (0x302) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternal(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x302);
	P_FINISH;
}

// @baa 0x005a5160
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e8) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAudio(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e8);
	P_FINISH;
}

// @baa 0x005a5230
/* Script logging; the debugf is compiled out of this build. The default tag (0x5ea) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5ea);
	P_FINISH;
}

// @baa 0x005a5300
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e7) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalAI(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e7);
	P_FINISH;
}

// @baa 0x005a53d0
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e6) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalEngine(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e6);
	P_FINISH;
}

// @baa 0x005a54a0
/* Script logging; the debugf is compiled out of this build. The default tag (0x5e9) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalPlayer(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5e9);
	P_FINISH;
}

// @baa 0x005a5570
/* Script logging; the debugf is compiled out of this build. The default tag (0x5ed) is one of the log names the kit's
 * EName list doesn't have. */
void UObject::execLogInternalBoss(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_GET_NAME_OPTX(Tag, (EName)0x5ed);
	P_FINISH;
}

/* Kit gap: FString::Printf (UnString.h) isn't declared. */
class FString_ : public FString
{
public:
	static FString Printf(const TCHAR* Fmt, ...);	/* 0x005488a0 */
};

// @baa 0x005ab860
void UObject::execToHex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_FINISH;
	*(FString*)Result = FString_::Printf(TEXT("%08X"), A);
}

/* Kit gap: FString::ToUpper (UnString.h) isn't declared. */
class FString__005abe50 : public FString
{
public:
	FString ToUpper() const;	/* 0x0054df00 */
};

// @baa 0x005abe50
void UObject::execCaps(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_FINISH;
	*(FString*)Result = ((const FString__005abe50&)S).ToUpper();
}

/* Kit gap: FString::ToLower (UnString.h) isn't declared. */
class FString__005abf20 : public FString
{
public:
	FString ToLower() const;	/* 0x005aa530 */
};

// @baa 0x005abf20
void UObject::execLocs(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_FINISH;
	*(FString*)Result = ((const FString__005abf20&)S).ToLower();
}

/* Kit gap: FString::sub_005aa650 (UnString.h) isn't declared. */
class FString__005ac4e0 : public FString
{
public:
	FString sub_005aa650() const;	/* 0x005aa650 */
};

// @baa 0x005ac4e0
void UObject::execCapitalise(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_FINISH;
	*(FString*)Result = ((const FString__005ac4e0&)S).sub_005aa650();
}

/* Kit gaps: UEnum's Names (Native_38) accessors, and IsA/Cast through ClassCastFlags (the form this build uses for
 * classes with a cast flag; ue3/Cast.h only has the SuperField walk). */
struct UEnum_ : public UEnum
{
	FName GetEnum(INT i) const;	/* 0x00549020 */
	INT NumEnums() const { return Native_38.Num(); }
};

template<class T> FORCEINLINE UBOOL IsACast(const UObject* Object)
{
	return (Object->GetClass()->ClassCastFlags & T::StaticClassCastFlags) != 0;
}

template<class T> FORCEINLINE T* CastFlags(UObject* Src)
{
	return Src && IsACast<T>(Src) ? (T*)Src : NULL;
}

// @baa 0x005a67c0
void UObject::execGetEnum(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, E);
	P_GET_INT(i);
	P_FINISH;
	*(FName*)Result = NAME_None;
	if (E && IsACast<UEnum>(E) && i >= 0 && i < ((UEnum_*)E)->NumEnums())
	{
		*(FName*)Result = ((UEnum_*)CastFlags<UEnum>(E))->GetEnum(i);
	}
}

extern FName g_0268d0bc;
	/* CORE_Main */
struct UCommandlet_ : public UCommandlet
{
	INT eventMain(const FString& Params);
};

// @baa 0x005aa890
/* The script event's generated glue (CoreClasses.h), out of line here. */
INT UCommandlet_::eventMain(const FString& Params)
{
	struct Commandlet_eventMain_Parms
	{
		FString Params;
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	Parms.Params = Params;
	ProcessEvent(FindFunctionChecked(g_0268d0bc), &Parms);
	return Parms.ReturnValue;
}
