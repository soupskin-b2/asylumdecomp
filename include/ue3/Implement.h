/* UE3's IMPLEMENT_CLASS, as this build expands it. In a class's .cpp:
 *
 *     IMPLEMENT_CLASS(UParticleModule);
 *
 * defines the class's PrivateStaticClass, GetPrivateStaticClass<Class> (allocates and constructs
 * the UClass) and InitializePrivateStaticClass<Class> (links it to its superclass, within class
 * and UClass), and with them the compiler emits the class's vtable, InternalConstructor,
 * constructor, destructor and deleting destructor. Its check(ReturnClass) names the file and
 * line; where a file's lines aren't the original's, IMPLEMENT_CLASS_AT gives both explicitly:
 *     IMPLEMENT_CLASS_AT(UParticleModule, "e:\\Projects\\...\\UnParticleModules.cpp", 52)
 * (the original's assembly shows both: the pushed file string and line).
 *
 * The global operator new/delete are UE3's (appMalloc/appFree, here the exe's out-of-line copies:
 * 0053df40 appMalloc, 0053dfa0 appFree); they are in this header rather than Core.h, so a
 * source that doesn't include it can declare its own.
 */
#pragma once
#include "Classes.h"

#ifndef BAA_UE3_IMPLEMENT
#define BAA_UE3_IMPLEMENT

void* sub_0053df40(DWORD Count, DWORD Alignment);
void  sub_0053dfa0(void* Original);
inline void* __cdecl operator new(unsigned int Size) { return sub_0053df40(Size, DEFAULT_ALIGNMENT); }
inline void __cdecl operator delete(void* Ptr) { sub_0053dfa0(Ptr); }

/* RF_Public | RF_Standalone | RF_Transient | RF_Native | RF_RootSet ... as the exe passes them */
#define BAA_NATIVE_CLASS_FLAGS 0x0408408400004000ui64

#define IMPLEMENT_CLASS(TClass) IMPLEMENT_CLASS_AT(TClass, __FILE__, __LINE__)
#define IMPLEMENT_CLASS_AT(TClass, File, Line) \
    UClass* TClass::PrivateStaticClass = NULL; \
    UClass* TClass::GetPrivateStaticClass##TClass(const TCHAR* Package) \
    { \
        UClass* ReturnClass; \
        ReturnClass = ::new UClass(EC_StaticConstructor, sizeof(TClass), StaticClassFlags, StaticClassCastFlags, \
                                   TEXT(#TClass) + 1, Package, StaticConfigName(), BAA_NATIVE_CLASS_FLAGS, \
                                   (void (*)(void*))&TClass::InternalConstructor, \
                                   (void (UObject::*)())&TClass::StaticConstructor, \
                                   (void (UObject::*)())&TClass::InitializeIntrinsicPropertyValues); \
        if (!ReturnClass) appFailAssert("ReturnClass", File, Line, TEXT("")); /* check(ReturnClass) */ \
        return ReturnClass; \
    } \
    void TClass::InitializePrivateStaticClass##TClass() \
    { \
        /* No recursive ::StaticClass calls allowed. Setup extras. */ \
        if (TClass::Super::StaticClass() != TClass::PrivateStaticClass) \
            TClass::PrivateStaticClass->SuperField = TClass::Super::StaticClass(); \
        else \
            TClass::PrivateStaticClass->SuperField = NULL; \
        TClass::PrivateStaticClass->ClassWithin = TClass::WithinClass::StaticClass(); \
        TClass::PrivateStaticClass->Class = UClass::StaticClass(); \
        /* Perform UObject native registration. */ \
        if (TClass::PrivateStaticClass->GetInitialized() && TClass::PrivateStaticClass->GetClass() == TClass::PrivateStaticClass->StaticClass()) \
            TClass::PrivateStaticClass->Register(); \
    }

#endif
