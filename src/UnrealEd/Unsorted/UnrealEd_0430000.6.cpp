// UnrealEd_0430000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

/* FString::operator* (UnString.h) and UObject::GetFullName/GetName (UnObjBas.h), which the headers lack. */
struct FString_ : public FString
{
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

struct UObject_ : public UObject
{
	FString_ GetFullName(const UObject* StopOuter = NULL) const;
	FString_ GetName() const;
};

/* Core.h: appErrorf hands the message to an attached debugger first. This build has no debugger
 * support (appIsDebuggerPresent is constant), so only the temporaries' destructor flags are left
 * of that branch in the code. */
inline UBOOL appIsDebuggerPresent() { return FALSE; }

void __cdecl appFailAssertFuncDebug(const ANSICHAR* Expr, const ANSICHAR* File, INT Line, const TCHAR* Format = TEXT(""), ...);
#define appErrorf(...) ( (appIsDebuggerPresent() ? (appFailAssertFuncDebug("appErrorf", __FILE__, __LINE__, ##__VA_ARGS__), 1) : 1), GError->Logf(__VA_ARGS__) )
/* UnObjBas.h: the cast that must succeed (out of line per class in this build). */
template<class T> T* CastChecked(UObject* Src)
{
	if (!Src || !ObjectIsA(Src, T::StaticClass()))
	{
		appErrorf(TEXT("Cast of %s to %s failed"), Src ? *((UObject_*)Src)->GetFullName() : TEXT("NULL"), *((UObject_*)T::StaticClass())->GetName());
	}
	return (T*)Src;
}

// @baa 0x0043d520
template UFMODAudioDevice* CastChecked<UFMODAudioDevice>(UObject* Src);
