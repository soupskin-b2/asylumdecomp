/* UE3 core declarations as Batman: Arkham Asylum's build has them (recovered; addresses are the
 * game's). Opt in with   #include "ue3/Core.h"   (Array.h includes it).
 *
 * The engine's check() macro passes the expression text, __FILE__ and __LINE__ to appFailAssert:
 * code that must match calls check() with the engine's exact expression text on the engine's
 * exact line; the headers here put each check on its original line with #line.
 */
#pragma once

#ifndef BAA_UE3_CORE
#define BAA_UE3_CORE

typedef unsigned char      BYTE;
typedef unsigned short     WORD;
typedef unsigned int       UINT;
typedef unsigned long      DWORD;
typedef signed char        SBYTE;
typedef signed short       SWORD;
typedef signed int         INT;
typedef unsigned __int64   QWORD;
typedef signed __int64     SQWORD;
typedef float              FLOAT;
typedef double             DOUBLE;
typedef int                UBOOL;
typedef char               ANSICHAR;
typedef wchar_t            UNICHAR;
typedef wchar_t            TCHAR;
typedef unsigned long      BITFIELD;

#ifndef TEXT
#define TEXT(s) L##s
#endif
#ifndef NULL
#define NULL 0
#endif

struct FObjectInstancingGraph;

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#define DEFAULT_ALIGNMENT 8

/* 006311e0 appFailAssert(Expr, File, Line, Format=TEXT(""), ...): cdecl, variadic. */
void sub_006311e0(const ANSICHAR* Expr, const ANSICHAR* File, INT Line, const TCHAR* Format, ...);
#define appFailAssert sub_006311e0

/* The allocator: GMalloc (026667bc), created on first use by GCreateMalloc (01504550).
 * FMalloc's vtable: [2] Realloc, [3] Free. appRealloc/appFree are inline: the compiler inlines
 * them in some functions and calls an out-of-line copy (0053df70 / 0053dfa0) in others. */
class FMalloc {
public:
    virtual void  Unknown0();
    virtual void* Malloc(DWORD Count, DWORD Alignment = DEFAULT_ALIGNMENT) = 0;
    virtual void* Realloc(void* Original, DWORD Count, DWORD Alignment = DEFAULT_ALIGNMENT) = 0;
    virtual void  Free(void* Original) = 0;
};
extern FMalloc* g_026667bc;
#define GMalloc g_026667bc
void sub_01504550();
#define GCreateMalloc sub_01504550

inline void* appMalloc(DWORD Count, DWORD Alignment = DEFAULT_ALIGNMENT) {
    if (!GMalloc) GCreateMalloc();
    return GMalloc->Malloc(Count, Alignment);
}
#ifdef BAA_OUTLINE_ALLOC
/* Where the original calls the out-of-line copies (0053df70 appRealloc, 0053dfa0 appFree):
 * #define BAA_OUTLINE_ALLOC before the #include. */
void* sub_0053df70(void* Original, DWORD Count, DWORD Alignment);
void  sub_0053dfa0(void* Original);
inline void* appRealloc(void* Original, DWORD Count, DWORD Alignment = DEFAULT_ALIGNMENT) { return sub_0053df70(Original, Count, Alignment); }
inline void appFree(void* Original) { sub_0053dfa0(Original); }
#else
inline void* appRealloc(void* Original, DWORD Count, DWORD Alignment = DEFAULT_ALIGNMENT) {
    if (!GMalloc) GCreateMalloc();
    return GMalloc->Realloc(Original, Count, Alignment);
}
inline void appFree(void* Original) {
    if (!GMalloc) GCreateMalloc();
    GMalloc->Free(Original);
}
#endif

/* memmove is called without dllimport (through the 0053df30 thunk), unlike <string.h>'s declaration.
   <string.h> and <wchar.h> (which declares it again) are included here with memmove renamed, so a source may
   include them too (after this). */
#ifndef _INC_STRING
#define memmove baa_string_h_memmove
#include <string.h>
#include <wchar.h>
#undef memmove

static __forceinline void appMemzero( void* Dest, INT Count ) { memset( Dest, 0, Count ); }
#define appMemcpy memcpy /* as UE3's UnFile.h */
#define ARRAY_COUNT( array ) ( sizeof(array) / sizeof((array)[0]) )

#ifndef FORCEINLINE
#define FORCEINLINE __forceinline
#endif
enum { INDEX_NONE = -1 };

/* UnNames.h: the names the engine hardcodes, by index (add them as code needs them) */
enum EName
{
	NAME_None           = 0,
	/* probe events: ProbeMask bit (Name - NAME_PROBEMIN) */
	NAME_PROBEMIN                   = 0x12c,
	NAME_Destroyed                  = 0x12d,
	NAME_GainedChild                = 0x12e,
	NAME_LostChild                  = 0x12f,
	NAME_HitWall                    = 0x135,
	NAME_Falling                    = 0x136,
	NAME_Landed                     = 0x137,
	NAME_PhysicsVolumeChange        = 0x138,
	NAME_Touch                      = 0x139,
	NAME_UnTouch                    = 0x13a,
	NAME_Bump                       = 0x13b,
	NAME_BaseChange                 = 0x13e,
	NAME_Detach                     = 0x140,
	NAME_EncroachingOn              = 0x147,
	NAME_EncroachedBy               = 0x148,
	NAME_HeadVolumeChange           = 0x14a,
	NAME_PawnEnteredVolume          = 0x14c,
	NAME_MayFall                    = 0x14d,
	NAME_PawnLeavingVolume          = 0x14f,
	NAME_Tick                       = 0x150,
	NAME_PlayerTick                 = 0x151,
	NAME_SeePlayer                  = 0x154,
	NAME_SeeMonster                 = 0x158,
	NAME_NotifyLanded               = 0x160,
	NAME_NotifyHitWall              = 0x161,
	NAME_ScriptWarning  = 0x2ff,
};

/* UnClient.h: what happened to a key or button */
enum EInputEvent
{
	IE_Pressed      = 0,
	IE_Released     = 1,
	IE_Repeat       = 2,
	IE_DoubleClick  = 3,
	IE_Axis         = 4,
	IE_MAX          = 5,
};
extern "C" void* __cdecl memmove(void* Dest, const void* Src, unsigned int Count);
#endif
inline void* appMemmove(void* Dest, const void* Src, INT Count) { return memmove(Dest, Src, Count); }

/* 0053d240 DefaultCalculateSlack(NumElements, NumAllocatedElements, BytesPerElement);
 * 00627f00 appMemswap(A, B, Size). */
INT   sub_0053d240(INT NumElements, INT NumAllocatedElements, UINT BytesPerElement);
void  sub_00627f00(void* A, void* B, INT Size);
#define DefaultCalculateSlack sub_0053d240
#define appMemswap            sub_00627f00

/* Whether copying a T needs its copy constructor, and whether destroying one does anything. */
template<typename T> struct TTypeInfo {
    enum { NeedsConstructor = (__is_class(T) || __is_union(T)) && !__is_pod(T) };
    enum { NeedsDestructor = (__is_class(T) || __is_union(T)) && !__has_trivial_destructor(T) };
};

#define check(expr)      { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, TEXT("")); }
#define checkSlow(expr)  {}
#ifndef checkf
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, ##__VA_ARGS__); }
#endif
#define verify(expr)     { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, TEXT("")); }


// The archive a Serialize function reads or writes (UnArc.h). Only what is verified is declared: the
// fields up to ArIsSaving (offsets from Serialize code) and ByteOrderSerialize (0x0053ea70); its
// virtual functions' slots are left out (the destructor is the first, as in UE3).
class UObject;
struct FName;

class FArchive
{
public:
	virtual ~FArchive();
	virtual void Serialize( void* V, INT Length );                 /* 0x04 */
	virtual void SerializeBits( void* V, INT LengthBits );         /* 0x08 */
	virtual void SerializeInt( DWORD& Value, DWORD Max );          /* 0x0c */
	virtual void Preload( UObject* Object );                       /* 0x10 */
	virtual void CountBytes( UINT InNum, UINT InMax );             /* 0x14 */
	/* MSVC puts overloaded virtuals in reverse order: the UObject form is slot 0x18 */
	virtual FArchive& operator<<( FName& N );                      /* 0x1c */
	virtual FArchive& operator<<( UObject*& Res );                 /* 0x18 */
	UBOOL IsLoading() const { return ArIsLoading; }
	UBOOL IsSaving() const { return ArIsSaving; }
	INT Ver() const { return ArVer; }
	FArchive& ByteOrderSerialize( void* V, INT Length ); /* 0x0053ea70 */
protected:
	INT ArVer;                /* 0x4 */
	INT ArNetVer;             /* 0x8 */
	INT ArLicenseeVer;        /* 0xc */
	UBOOL ArIsLoading;        /* 0x10 */
	UBOOL ArIsSaving;         /* 0x14 */
};

#endif
