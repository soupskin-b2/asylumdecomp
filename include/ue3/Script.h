// UnrealScript natives: FFrame, GNatives and the P_GET_* / P_FINISH macros, as UE3 (2008-09) has
// them. Include after "ue3/Classes.h".
//
// Verified against the exe: Stack.Object is at +0x14, Stack.Code at +0x18, GNatives at 0x026888a0
// (4-byte member function pointers, indexed by the byte at Stack.Code), EX_DebugInfo is 0x41.
// A native is a member of its class (check include/ for its address first; a local struct deriving
// from the class is the fallback when the header doesn't declare it):
//     struct CExec : UObject { void* sub_007ac800(void*, float*, float*, FVector, FVector, float);
//                              void sub_00c84960(FFrame& Stack, RESULT_DECL); };
//     void CExec::sub_00c84960(FFrame& Stack, RESULT_DECL) {      // matches, 400 bytes
//         P_GET_OBJECT(UObject, P1); P_GET_FLOAT_REF(T2); P_GET_FLOAT_REF(T3);
//         P_GET_VECTOR(V4); P_GET_VECTOR(V5); P_GET_FLOAT(F6); P_FINISH;
//         *(void**)Result = sub_007ac800(P1, &T2, &T3, V4, V5, F6); }
#pragma once

struct FFrame;
typedef void (UObject::*Native)(FFrame& Stack, void* const Result);
extern Native GNatives[];

#define RESULT_DECL void* const Result

enum { EX_DebugInfo = 0x41 };

/* FOutputDevice and GError: Core.h */

// A virtual that a class must override, as UE3 declares it: `virtual FString GetWidgetPathName()
// PURE_VIRTUAL(UUIScreenObject::GetWidgetPathName, return TEXT(""););`. Defined out of line, the body is
// the same: `FString UUIScreenObject::GetWidgetPathName() PURE_VIRTUAL(UUIScreenObject::GetWidgetPathName, return TEXT(""););`
#define PURE_VIRTUAL(func, extra) { GError->Logf(TEXT("Pure virtual not implemented (%s)"), TEXT(#func)); extra }

struct FFrame : public FOutputDevice {
    struct UStruct* Node;             /* 0x10 */
    UObject* Object;                  /* 0x14 */
    BYTE* Code;                       /* 0x18 */
    BYTE* Locals;                     /* 0x1c */
    FFrame* PreviousFrame;            /* 0x20 */
    void* OutParms;                   /* 0x24 */

    // Evaluates the next expression of the script bytecode into Result.
    void Step(UObject* Context, RESULT_DECL) {
        INT B = *Code++;
        (Context->*GNatives[B])(*this, Result);
    }
    // Reads a code-skip offset (a WORD) from the bytecode.
    INT ReadWord() {
        INT Result = *(WORD*)Code;
        Code += sizeof(WORD);
        return Result;
    }
    // UnScript.h's other inline readers (constants and references in the bytecode)
    FORCEINLINE INT ReadInt() { INT Result = *(INT*)Code; Code += sizeof(INT); return Result; }
    FORCEINLINE FLOAT ReadFloat() { FLOAT Result = *(FLOAT*)Code; Code += sizeof(FLOAT); return Result; }
    FORCEINLINE FName ReadName() { FName Result = *(FName*)Code; Code += sizeof(FName); return Result; }
    FORCEINLINE UObject* ReadObject() { UObject* Result = *(UObject**)Code; Code += sizeof(UObject*); return Result; }
};

// Iterator natives (UnScriptMacros.h): the native's loop body runs between PRE_ITERATOR and
// POST_ITERATOR, once per element; EX_IteratorPop / EX_IteratorNext end each pass.
enum { EX_IteratorPop = 0x30, EX_IteratorNext = 0x31 };
#define MAX_SIMPLE_RETURN_VALUE_SIZE 64
#define PRE_ITERATOR \
	INT wEndOffset = Stack.ReadWord(); \
	BYTE B=0, Buffer[MAX_SIMPLE_RETURN_VALUE_SIZE]; \
	BYTE *StartCode = Stack.Code; \
	do {
#define POST_ITERATOR \
		while( (B=*Stack.Code)!=EX_IteratorPop && B!=EX_IteratorNext ) \
			Stack.Step( Stack.Object, Buffer ); \
		if( *Stack.Code++==EX_IteratorNext ) \
			Stack.Code = StartCode; \
	} while( B != EX_IteratorPop );
// Leaves an iterator from inside PRE/POST_ITERATOR (the script's loop end is at wEndOffset)
#define EXIT_ITERATOR \
	Stack.Code = &Stack.Node->Script(wEndOffset + 1);
// Skips the iterator without running it
#define SKIP_ITERATOR \
	INT wEndOffset = Stack.ReadWord(); \
	Stack.Code = &Stack.Node->Script(wEndOffset + 1);

// An object's script state (UObject::StateFrame). Verified: ProbeMask at +0x2c (bit N is probe
// function NAME_PROBEMIN + N; a clear bit means the object ignores that event). StateNode at +0x28
// is UE3's layout, not checked against the exe.
#pragma pack(push, 4)
struct FPushedState {                 /* a PushState entry (12 bytes) */
    class UState* State;
    class UStruct* Node;
    BYTE* Code;
};
struct FStateFrame : public FFrame {
    class UState* StateNode;          /* 0x28 */
    QWORD ProbeMask;                  /* 0x2c */
    WORD LatentAction;                /* 0x34: the latent native running (e.g. EPOLL_MoveToward), 0 if none */
    TArrayNoInit<FPushedState> StateStack; /* 0x38: PushState's stack (IsInState 0x0059dc80 walks it) */
};
#pragma pack(pop)

// Parameters, read in declaration order.
#define P_GET_UBOOL(v)     UBOOL v = 0; Stack.Step(Stack.Object, &v); v = (v != 0);
#define P_GET_BYTE(v)      BYTE v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_INT(v)       INT v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_FLOAT(v)     FLOAT v = 0.f; Stack.Step(Stack.Object, &v);
#define P_GET_NAME(v)      FName v; v.Index = 0; v.Number = 0; Stack.Step(Stack.Object, &v);
#define P_GET_OBJECT(c, v) c* v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_INTERFACE(v) FScriptInterface v; Stack.Step(Stack.Object, &v);
#define P_GET_STRUCT(t, v) t v; Stack.Step(Stack.Object, &v);
#define P_GET_STR(v)       FString v; Stack.Step(Stack.Object, &v);
#define P_GET_VECTOR(v)    P_GET_STRUCT(FVector, v)
#define P_GET_ROTATOR(v)   P_GET_STRUCT(FRotator, v)
// Out parameters (`out` in UnrealScript): Step leaves the variable's address in GPropAddr (0 if the
// argument isn't a variable); the native writes through it. Optional parameters: Step sets
// RUC_SkippedOptionalParm in GRuntimeUCFlags when the caller left one out (the default stays).
// Verified: GPropAddr 0x026667e8, GRuntimeUCFlags 0x026667f0, GNativeLookupFuncs 0x0268c8a0 (after GNatives' 16 pages of 256).
// The script debugger's interface (Core.h) and the runaway-loop guard the jump bytecodes run first.
class UDebugger {
public:
    virtual ~UDebugger() {}
    virtual void DebugInfo(const UObject* Debugee, const FFrame* Stack, BYTE OpCode, INT LineNumber, INT InputPos) = 0;
    virtual void NotifyBeginTick() = 0;
    virtual void NotifyGC() = 0;
    virtual void NotifyAccessedNone() = 0;
    virtual UBOOL NotifyAssertionFailed(const INT LineNumber) = 0;
    virtual UBOOL NotifyInfiniteLoop() = 0;             /* 0x18 */
    virtual void Close(UBOOL bUnbindInterfaceImmediately = FALSE) = 0;
};
extern UDebugger* GDebugger;   /* 0x0266e848 */
extern INT GRunaway;           /* 0x0268d09c */
#define MAX_RUNAWAY 5000000
#define CHECK_RUNAWAY { if (++GRunaway > MAX_RUNAWAY) { if (!GDebugger || !GDebugger->NotifyInfiniteLoop()) \
    Stack.Logf(NAME_Critical, TEXT("Runaway loop detected (over %i iterations)"), MAX_RUNAWAY); GRunaway = 0; } }

extern BYTE* GPropAddr;
extern class UProperty* GProperty; /* 0x026667ec: the property the last Step read (0 when none, e.g. execEndFunctionParms) */
extern DWORD GRuntimeUCFlags;
typedef Native (*NativeLookup)(const TCHAR* Name);
extern NativeLookup GNativeLookupFuncs[500]; /* each package's name -> native table (InitializeRegistrantsAndRegisterNames) */
enum { RUC_SkippedOptionalParm = 0x02 };

#define P_GET_STRUCT_REF(t, v) t v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); t& v = GPropAddr ? *(t*)GPropAddr : v##T;
#define P_GET_INT_REF(v)       INT v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); INT& v = GPropAddr ? *(INT*)GPropAddr : v##T;
#define P_GET_FLOAT_REF(v)     FLOAT v##T = 0.f; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FLOAT& v = GPropAddr ? *(FLOAT*)GPropAddr : v##T;
#define P_GET_BYTE_REF(v)      BYTE v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); BYTE& v = GPropAddr ? *(BYTE*)GPropAddr : v##T;
#define P_GET_UBOOL_REF(v)     UBOOL v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); UBOOL& v = GPropAddr ? *(UBOOL*)GPropAddr : v##T;
#define P_GET_OBJECT_REF(c, v) c* v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); c*& v = GPropAddr ? *(c**)GPropAddr : v##T;
#define P_GET_STR_REF(v)       FString v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FString& v = GPropAddr ? *(FString*)GPropAddr : v##T;

/* an interface parameter (UnrealScript `SomeInterface`): object and interface pointers, zeroed */
/* TScriptInterface<T>: Classes.h */
#define P_GET_TINTERFACE(t, v)     TScriptInterface<t> v; Stack.Step(Stack.Object, &v);
#define P_GET_TINTERFACE_REF(t, v) TScriptInterface<t> v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); TScriptInterface<t>& v = GPropAddr ? *(TScriptInterface<t>*)GPropAddr : v##T;
/* an array parameter, and an `out` one */
#define P_GET_TARRAY(t, v)         TArray<t> v; Stack.Step(Stack.Object, &v);
#define P_GET_TARRAY_REF(t, v)     TArray<t> v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); TArray<t>& v = GPropAddr ? *(TArray<t>*)GPropAddr : v##T;

#define P_GET_INT_OPTX(v, d)    INT v = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
#define P_GET_FLOAT_OPTX(v, d)  FLOAT v = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
#define P_GET_BYTE_OPTX(v, d)   BYTE v = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
#define P_GET_UBOOL_OPTX(v, d)  UBOOL v = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); v = (v != 0);
#define P_GET_OBJECT_OPTX(c, v, d) c* v = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
// FName stays an aggregate (a constructor would change how functions return it), so a name default is
// its {Index, 0} (EName is in Core.h): P_GET_NAME_OPTX(BoneName, NAME_None). The game stores both zeros as immediates.
#define P_GET_NAME_OPTX(v, d)   FName v(d); GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
#define P_GET_STR_OPTX(v, d)    FString v(d); GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);
#define P_GET_TARRAY_OPTX(t, v, d) TArray<t> v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
// optional out parameters: the default lands in a local, the reference is the caller's variable when it passed one
// (pVar is that variable's address, or NULL when the caller left the parameter out)
#define P_GET_INT_OPTX_REF(v, d)    INT v##T = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); INT* p##v = (INT*)GPropAddr; INT& v = GPropAddr ? *(INT*)GPropAddr : v##T;
#define P_GET_FLOAT_OPTX_REF(v, d)  FLOAT v##T = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FLOAT* p##v = (FLOAT*)GPropAddr; FLOAT& v = GPropAddr ? *(FLOAT*)GPropAddr : v##T;
#define P_GET_BYTE_OPTX_REF(v, d)   BYTE v##T = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); BYTE* p##v = (BYTE*)GPropAddr; BYTE& v = GPropAddr ? *(BYTE*)GPropAddr : v##T;
#define P_GET_UBOOL_OPTX_REF(v, d)  UBOOL v##T = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); UBOOL* p##v = (UBOOL*)GPropAddr; UBOOL& v = GPropAddr ? *(UBOOL*)GPropAddr : v##T;
#define P_GET_OBJECT_OPTX_REF(c, v, d) c* v##T = d; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); c** p##v = (c**)GPropAddr; c*& v = GPropAddr ? *(c**)GPropAddr : v##T;
#define P_GET_STR_OPTX_REF(v, d)    FString v##T(d); GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FString* p##v = (FString*)GPropAddr; FString& v = GPropAddr ? *(FString*)GPropAddr : v##T;
// (structs: no default and no flag change; the temp stays uninitialized when the caller leaves it out)
#define P_GET_STRUCT_OPTX_REF(t, v) t v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); t* p##v = (t*)GPropAddr; t& v = GPropAddr ? *(t*)GPropAddr : v##T;

// After the last parameter: skip EX_EndFunctionParms, then a debug-info opcode if there is one.
#define P_FINISH           Stack.Code++; if (*Stack.Code == EX_DebugInfo) Stack.Step(Stack.Object, 0);
