/* UE3's Cast<T> and UObject::IsA as this build has them (recovered from the game's code: every
 * Cast<T> instantiation is an out-of-line function with StaticClass() and IsA() inlined).
 * Opt in with   #include "ue3/Cast.h"   and instantiate:
 *   template UMyClass* Cast<UMyClass>(UObject* Src);
 */
#pragma once
#include "Classes.h"
#include "Script.h"

#ifndef BAA_UE3_CAST
#define BAA_UE3_CAST

/* Core.h: appErrorf hands the message to an attached debugger first. This build has no debugger
 * support (appIsDebuggerPresent is constant), so only the temporaries' destructor flags are left
 * of that branch in the code. */
#ifndef appErrorf
inline UBOOL appIsDebuggerPresent() { return FALSE; }
void __cdecl appFailAssertFuncDebug(const ANSICHAR* Expr, const ANSICHAR* File, INT Line, const TCHAR* Format = TEXT(""), ...);
#define appErrorf(...) ( (appIsDebuggerPresent() ? (appFailAssertFuncDebug("appErrorf", __FILE__, __LINE__, ##__VA_ARGS__), 1) : 1), GError->Logf(__VA_ARGS__) )
#endif

/* UObject::IsA(SomeBase): NULL is a base of everything */
inline UBOOL ObjectIsA(const UObject* Object, UClass* SomeBase)
{
    if (SomeBase == NULL)
        return 1;
    for (UClass* TempClass = Object->GetClass(); TempClass; TempClass = (UClass*)TempClass->SuperField)
        if (TempClass == SomeBase)
            return 1;
    return 0;
}

template<class T> T* Cast(UObject* Src)
{
    return Src && ObjectIsA(Src, T::StaticClass()) ? (T*)Src : NULL;
}

template<class T> const T* ConstCast(const UObject* Src)
{
    return Src && ObjectIsA(Src, T::StaticClass()) ? (const T*)Src : NULL;
}

/* UnObjBas.h: the cast that must succeed (out of line per class in this build):
 *   template UMyClass* CastChecked<UMyClass>(UObject* Src); */
template<class T> T* CastChecked(UObject* Src)
{
	if (!Src || !ObjectIsA(Src, T::StaticClass()))
	{
		appErrorf(TEXT("Cast of %s to %s failed"), Src ? *Src->GetFullName() : TEXT("NULL"), *((UObject*)T::StaticClass())->GetName());
	}
	return (T*)Src;
}

#endif
