/* UE3's Cast<T> and UObject::IsA as this build has them (recovered from the game's code: every
 * Cast<T> instantiation is an out-of-line function with StaticClass() and IsA() inlined).
 * Opt in with   #include "ue3/Cast.h"   and instantiate:
 *   template UMyClass* Cast<UMyClass>(UObject* Src);
 */
#pragma once
#include "Classes.h"

#ifndef BAA_UE3_CAST
#define BAA_UE3_CAST

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

#endif
