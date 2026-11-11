// UnrealScript natives: FFrame, GNatives and the P_GET_* / P_FINISH macros, as UE3 (2008-09) has
// them. Include after "ue3/Classes.h".
//
// Verified against the exe: Stack.Object is at +0x14, Stack.Code at +0x18, GNatives at 0x026888a0
// (4-byte member function pointers, indexed by the byte at Stack.Code), EX_DebugInfo is 0x41.
// A native is a member of its class (derive a struct when the header doesn't declare it):
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

struct FOutputDevice {
    void* VfTable;                    /* 0x0: FOutputDevice has virtuals (Serialize, Flush, ...) */
    UBOOL bAllowSuppression;          /* 0x4 */
    UBOOL bSuppressEventTag;          /* 0x8 */
    UBOOL bAutoEmitLineTerminator;    /* 0xc */

    void Logf(const TCHAR* Fmt, ...); /* 0x00630f20 */
};

// The error device: GError->Logf reports a fatal error (appErrorf in other builds). Verified: 0x026667a8.
extern FOutputDevice* GError;

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
};

// An object's script state (UObject::StateFrame). Verified: ProbeMask at +0x2c (bit N is probe
// function NAME_PROBEMIN + N; a clear bit means the object ignores that event). StateNode at +0x28
// is UE3's layout, not checked against the exe.
#pragma pack(push, 4)
struct FStateFrame : public FFrame {
    class UState* StateNode;          /* 0x28 */
    QWORD ProbeMask;                  /* 0x2c */
};
#pragma pack(pop)

// Parameters, read in declaration order.
#define P_GET_UBOOL(v)     UBOOL v = 0; Stack.Step(Stack.Object, &v); v = (v != 0);
#define P_GET_BYTE(v)      BYTE v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_INT(v)       INT v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_FLOAT(v)     FLOAT v = 0.f; Stack.Step(Stack.Object, &v);
#define P_GET_NAME(v)      FName v; v.Index = 0; v.Number = 0; Stack.Step(Stack.Object, &v);
#define P_GET_OBJECT(c, v) c* v = 0; Stack.Step(Stack.Object, &v);
#define P_GET_STRUCT(t, v) t v; Stack.Step(Stack.Object, &v);
#define P_GET_STR(v)       FString v; Stack.Step(Stack.Object, &v);
#define P_GET_VECTOR(v)    P_GET_STRUCT(FVector, v)
#define P_GET_ROTATOR(v)   P_GET_STRUCT(FRotator, v)
// Out parameters (`out` in UnrealScript): Step leaves the variable's address in GPropAddr (0 if the
// argument isn't a variable); the native writes through it. Optional parameters: Step sets
// RUC_SkippedOptionalParm in GRuntimeUCFlags when the caller left one out (the default stays).
// Verified: GPropAddr 0x026667e8, GRuntimeUCFlags 0x026667f0, GCasts 0x02688ca0.
extern BYTE* GPropAddr;
extern DWORD GRuntimeUCFlags;
extern Native GCasts[];
enum { RUC_SkippedOptionalParm = 0x02 };

#define P_GET_STRUCT_REF(t, v) t v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); t& v = GPropAddr ? *(t*)GPropAddr : v##T;
#define P_GET_INT_REF(v)       INT v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); INT& v = GPropAddr ? *(INT*)GPropAddr : v##T;
#define P_GET_FLOAT_REF(v)     FLOAT v##T = 0.f; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FLOAT& v = GPropAddr ? *(FLOAT*)GPropAddr : v##T;
#define P_GET_BYTE_REF(v)      BYTE v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); BYTE& v = GPropAddr ? *(BYTE*)GPropAddr : v##T;
#define P_GET_UBOOL_REF(v)     UBOOL v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); UBOOL& v = GPropAddr ? *(UBOOL*)GPropAddr : v##T;
#define P_GET_OBJECT_REF(c, v) c* v##T = 0; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); c*& v = GPropAddr ? *(c**)GPropAddr : v##T;
#define P_GET_STR_REF(v)       FString v##T; GPropAddr = 0; Stack.Step(Stack.Object, &v##T); FString& v = GPropAddr ? *(FString*)GPropAddr : v##T;

#define P_GET_INT_OPTX(v, d)    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; INT v = d; Stack.Step(Stack.Object, &v);
#define P_GET_FLOAT_OPTX(v, d)  GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; FLOAT v = d; Stack.Step(Stack.Object, &v);
#define P_GET_BYTE_OPTX(v, d)   GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; BYTE v = d; Stack.Step(Stack.Object, &v);
#define P_GET_UBOOL_OPTX(v, d)  GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; UBOOL v = d; Stack.Step(Stack.Object, &v); v = (v != 0);
#define P_GET_OBJECT_OPTX(c, v, d) GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; c* v = d; Stack.Step(Stack.Object, &v);
#define P_GET_NAME_OPTX(v, d)   GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; FName v = d; Stack.Step(Stack.Object, &v);
#define P_GET_STR_OPTX(v, d)    FString v(d); GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v);

// After the last parameter: skip EX_EndFunctionParms, then a debug-info opcode if there is one.
#define P_FINISH           Stack.Code++; if (*Stack.Code == EX_DebugInfo) Stack.Step(Stack.Object, 0);
