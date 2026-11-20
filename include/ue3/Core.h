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
#define BAA_OWN_MEMMOVE
#define memmove baa_string_h_memmove
#include <string.h>
#include <wchar.h>
#undef memmove
#endif

static __forceinline void appMemzero( void* Dest, INT Count ) { memset( Dest, 0, Count ); }
#define appMemcpy memcpy /* as UE3's UnFile.h */
#define ARRAY_COUNT( array ) ( sizeof(array) / sizeof((array)[0]) )
/* UnTemplate.h: a member's byte offset (what the GC token stream and property checks are given) */
#define STRUCT_OFFSET( struc, member ) ( (INT)&((struc*)NULL)->member )

#ifndef FORCEINLINE
#define FORCEINLINE __forceinline
#endif
enum { INDEX_NONE = -1 };

#include "Names.h"   /* enum EName: the names the engine hardcodes (UnNames.h) */

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
#ifdef BAA_OWN_MEMMOVE
extern "C" void* __cdecl memmove(void* Dest, const void* Src, unsigned int Count);
#endif
inline void* appMemmove(void* Dest, const void* Src, INT Count) { return memmove(Dest, Src, Count); }

/* UnVcWin32.h: the string functions are the C library's wide ones */
#define appStrcpy   wcscpy
#define appStrcat   wcscat
#define appStrlen   wcslen
#define appStrstr   wcsstr
#define appStrchr   wcschr
#define appStrrchr  wcsrchr
#define appStrcmp   wcscmp
#define appStricmp  _wcsicmp
#define appStrncmp  wcsncmp
#define appStrnicmp _wcsnicmp
#define appAtoi     _wtoi
#define appAtof     _wtof
#define appStrtoi   wcstoul
#define appToUpper  towupper
#define appToLower  towlower
DWORD appStrihash(const TCHAR* Data); /* 0x0053e7c0 */
extern DWORD GCRCTable[256]; /* 0x0269d7d0 */
/* UnObjBas.h: the class and package flags code here tests */
#define CLASS_Config        0x00000400
#define PKG_Cooked          0x00000008
#define PKG_ContainsMap     0x00020000
#define MAXWORD             0xffffU
extern UBOOL GIsGarbageCollecting; /* 0x0266e820 */
/* UnVcWin32.cpp: seconds per appCycles() tick */
extern DOUBLE g_0266e7f8;
#define GSecondsPerCycle g_0266e7f8
#define FIRST_BITFIELD 1 /* UnBuild.h: bitfields start at bit 0 on this platform */
DWORD appMemCrc(const void* Data, INT Length, DWORD CRC = 0); /* 0x00627f70 */
#ifndef MAXINT
#define MAXINT 0x7fffffff
#endif

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


// The archive a Serialize function reads or writes (UnArc.h): 0x7c bytes in this build (Reset 0x0053ec70
// sets every field). The flags between ArIsSaving and ArForceByteSwapping, and those after it, aren't
// identified yet (Reset sets 0x28, 0x2c, 0x30 and 0x5c to 1).
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
	INT NetVer() const { return ArNetVer; }
	INT LicenseeVer() const { return ArLicenseeVer; }
	UBOOL ForceByteSwapping() const { return ArForceByteSwapping; }
	FArchive& ByteOrderSerialize( void* V, INT Length ); /* 0x0053ea70 */
	void Reset(); /* 0x0053ec70 */
protected:
	INT ArVer;                /* 0x4 */
	INT ArNetVer;             /* 0x8 */
	INT ArLicenseeVer;        /* 0xc */
	UBOOL ArIsLoading;        /* 0x10 */
	UBOOL ArIsSaving;         /* 0x14 */
	UBOOL ArFlags18[12];      /* 0x18 */
	UBOOL ArForceByteSwapping; /* 0x48 */
	DWORD ArState4c[12];      /* 0x4c */
};

/* UnArc.h's operator<< for the basic types (bytes go straight to Serialize, the rest through the
 * out-of-line ByteOrderSerialize). A file whose original inlines ByteOrderSerialize writes its own:
 * #define BAA_NO_ARCHIVE_OPERATORS before the #include. */
#ifndef BAA_NO_ARCHIVE_OPERATORS
inline FArchive& operator<<(FArchive& Ar, ANSICHAR& C) { Ar.Serialize(&C, 1); return Ar; }
inline FArchive& operator<<(FArchive& Ar, BYTE& B)     { Ar.Serialize(&B, 1); return Ar; }
inline FArchive& operator<<(FArchive& Ar, SBYTE& B)    { Ar.Serialize(&B, 1); return Ar; }
inline FArchive& operator<<(FArchive& Ar, WORD& W)     { Ar.ByteOrderSerialize(&W, sizeof(W)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, SWORD& S)    { Ar.ByteOrderSerialize(&S, sizeof(S)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, INT& I)      { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; } /* UBOOL too */
inline FArchive& operator<<(FArchive& Ar, DWORD& D)    { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, FLOAT& F)    { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, DOUBLE& F)   { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, QWORD& Q)    { Ar.ByteOrderSerialize(&Q, sizeof(Q)); return Ar; }
inline FArchive& operator<<(FArchive& Ar, SQWORD& S)   { Ar.ByteOrderSerialize(&S, sizeof(S)); return Ar; }
#endif

/* UnTemplate.h: swap, and the quicksort with a compare class (IMPLEMENT_COMPARE_*). Out-of-line Exchange<FLOAT>: 0x0045fea0, 0x007ab150, 0x007b4b00 */
template<class T> inline void Exchange(T& A, T& B)
{
    const T Temp = A;
    A = B;
    B = Temp;
}

#define IMPLEMENT_COMPARE_POINTER(Type, Filename, FunctionBody) \
    class Compare##Filename##Type##Pointer { public: static inline INT Compare(Type* A, Type* B) FunctionBody };
#define IMPLEMENT_COMPARE_CONSTPOINTER(Type, Filename, FunctionBody) \
    class Compare##Filename##Type##ConstPointer { public: static inline INT Compare(const Type* A, const Type* B) FunctionBody };
#define IMPLEMENT_COMPARE_CONSTREF(Type, Filename, FunctionBody) \
    class Compare##Filename##Type##ConstRef { public: static inline INT Compare(const Type& A, const Type& B) FunctionBody };

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

/* UnMem.h: FMemStack, the linear allocator for temporary memory (collision results, render
 * temporaries), and FMemMark, which frees what was pushed after it. This build has the older UE3 form:
 * no thread checks, PushBytes bumps Top before comparing it with End, and the stack is 0x1c bytes.
 * FMemMark's members are inline as in UE3: MSVC inlines Pop() in most callers and calls its
 * out-of-line copy (0x0064a760; the destructor's is 0x006561c0) in the rest, as the game does. */
#ifndef checkAt
/* check() as the engine's header had it at File(Line) */
#define checkAt(expr, File, Line) { if (!(expr)) appFailAssert(#expr, File, Line, TEXT("")); }
#endif
#define BAA_UNMEM_FILE "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnMem.h"

enum EMemZeroed { MEM_Zeroed = 1 };
enum EMemOned   { MEM_Oned   = 1 };

class FMemStack
{
public:
    FMemStack(INT DefaultChunkSize); /* 0x005c17d0 */
    ~FMemStack(); /* 0x005c7560 */

    FORCEINLINE BYTE* PushBytes(INT AllocSize, INT Align)
    {
        BYTE* Result = (BYTE*)(((INT)Top + (Align - 1)) & ~(Align - 1));
        Top = Result + AllocSize;
        if (Top > End)
        {
            AllocateNewChunk(AllocSize + Align);
            Result = (BYTE*)(((INT)Top + (Align - 1)) & ~(Align - 1));
            Top = Result + AllocSize;
        }
        return Result;
    }

    INT GetByteCount() const; /* 0x005c1810 */
    INT GetUnusedByteCount() const; /* 0x005c1840 */

    struct FTaggedMemory
    {
        FTaggedMemory* Next;
        INT DataSize;
        BYTE Data[1];
    };

    /* UE3 keeps these private (FMemMark and the operator news are friends) */
    BYTE* Top;                    /* 0x00: top of the current chunk (Top <= End) */
    BYTE* End;                    /* 0x04: end of the current chunk */
    INT DefaultChunkSize;         /* 0x08 */
    FTaggedMemory* TopChunk;      /* 0x0c */
    class FMemMark* TopMark;      /* 0x10 */
    FTaggedMemory* UnusedChunks;  /* 0x14 */
    INT NumMarks;                 /* 0x18 */

    BYTE* AllocateNewChunk(INT MinSize); /* 0x005c75e0 */
    void FreeChunks(FTaggedMemory* NewTopChunk); /* 0x005c1860 */
};

/* the game thread's stack (UE3's GMem; later engines call it GMainThreadMemStack) */
extern FMemStack GMem; /* 0x0267618c */

template <class T> inline T* New(FMemStack& Mem, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    return (T*)Mem.PushBytes(Count * sizeof(T), Align);
}
template <class T> inline T* NewZeroed(FMemStack& Mem, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    BYTE* Result = Mem.PushBytes(Count * sizeof(T), Align);
    appMemzero(Result, Count * sizeof(T));
    return (T*)Result;
}
template <class T> inline T* NewOned(FMemStack& Mem, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    BYTE* Result = Mem.PushBytes(Count * sizeof(T), Align);
    memset(Result, 0xff, Count * sizeof(T));
    return (T*)Result;
}

inline void* operator new(size_t Size, FMemStack& Mem, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    return Mem.PushBytes(Size * Count, Align);
}
inline void* operator new(size_t Size, FMemStack& Mem, EMemZeroed Tag, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    BYTE* Result = Mem.PushBytes(Size * Count, Align);
    appMemzero(Result, Size * Count);
    return Result;
}
inline void* operator new(size_t Size, FMemStack& Mem, EMemOned Tag, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    BYTE* Result = Mem.PushBytes(Size * Count, Align);
    memset(Result, 0xff, Size * Count);
    return Result;
}
inline void* operator new[](size_t Size, FMemStack& Mem, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    return Mem.PushBytes(Size * Count, Align);
}
inline void* operator new[](size_t Size, FMemStack& Mem, EMemZeroed Tag, INT Count = 1, INT Align = DEFAULT_ALIGNMENT)
{
    BYTE* Result = Mem.PushBytes(Size * Count, Align);
    appMemzero(Result, Size * Count);
    return Result;
}

/* Marks the top of a memory stack; Pop() (or the destructor) frees everything pushed since. */
class FMemMark
{
public:
    FMemMark(FMemStack& InMem)
        : Mem(InMem), Top(InMem.Top), SavedChunk(InMem.TopChunk), bPopped(FALSE), NextTopmostMark(InMem.TopMark)
    {
        Mem.TopMark = this;
        Mem.NumMarks++;
    }
    ~FMemMark() { Pop(); }

    void Pop()
    {
        if (!bPopped)
        {
            checkAt(Mem.TopMark == this, BAA_UNMEM_FILE, 271);
            bPopped = TRUE;
            --Mem.NumMarks;
            if (SavedChunk != Mem.TopChunk)
                Mem.FreeChunks(SavedChunk);
            Mem.Top = Top;
            Mem.TopMark = NextTopmostMark;
            Top = NULL;
        }
    }

    FMemStack& Mem;                          /* 0x00 */
    BYTE* Top;                               /* 0x04 */
    FMemStack::FTaggedMemory* SavedChunk;    /* 0x08 */
    UBOOL bPopped;                           /* 0x0c */
    FMemMark* NextTopmostMark;               /* 0x10 */
};

/* UnOutputDevices.h: where log lines go (GLog, GError, an FFrame's script warnings) */
struct FOutputDevice {
    UBOOL bAllowSuppression;          /* 0x4 */
    UBOOL bSuppressEventTag;          /* 0x8 */
    UBOOL bAutoEmitLineTerminator;    /* 0xc */

    FOutputDevice() : bAllowSuppression(TRUE), bSuppressEventTag(FALSE), bAutoEmitLineTerminator(TRUE) {}
    virtual ~FOutputDevice() {}
    virtual void Serialize(const TCHAR* V, EName Event) {}
    virtual void Flush() {}
    virtual void TearDown() {}

    void Logf(const TCHAR* Fmt, ...); /* 0x00630f20 */
    void Logf(EName Event, const TCHAR* Fmt, ...); /* 0x00630ea0: e.g. Stack.Logf(NAME_ScriptWarning, TEXT("Divide by zero")) */
};

// The error device: GError->Logf reports a fatal error (appErrorf in other builds). Verified: 0x026667a8.
extern FOutputDevice* GError;
// The log: GLog->Logf(TEXT(...)), and Exec's default output device (FOutputDevice& Ar = *GLog). 0x025d53e8.
extern FOutputDevice* GLog;

#endif
