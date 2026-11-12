// Engine_08b0000.cpp (part 1 of 2): 36 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008b1970(INT Index) const;
};

// @baa 0x008b1970
const DWORD* S::sub_008b1970(INT Index) const
{
    return &Items(Index);
}

struct S_008b19c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b19c0(INT Index);
};

// @baa 0x008b19c0
DWORD* S_008b19c0::sub_008b19c0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[40]; };

struct S_008b23b0 {
    TArray<E> Items; // 0x00
    E* sub_008b23b0(INT Index);
};

// @baa 0x008b23b0
E* S_008b23b0::sub_008b23b0(INT Index)
{
    return &Items(Index);
}

struct S_008b2400 {
    TArray<E> Items; // 0x00
    const E* sub_008b2400(INT Index) const;
};

// @baa 0x008b2400
const E* S_008b2400::sub_008b2400(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    int sub_008b2450(int);
    int sub_008ad400(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x008b2450
int C::sub_008b2450(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_008ad400(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct E_008b2490 { BYTE Bytes[44]; };

struct S_008b2490 {
    TArray<E_008b2490> Items; // 0x00
    E_008b2490* sub_008b2490(INT Index);
};

// @baa 0x008b2490
E_008b2490* S_008b2490::sub_008b2490(INT Index)
{
    return &Items(Index);
}

struct E_008b24e0 { BYTE Bytes[44]; };

struct S_008b24e0 {
    TArray<E_008b24e0> Items; // 0x00
    const E_008b24e0* sub_008b24e0(INT Index) const;
};

// @baa 0x008b24e0
const E_008b24e0* S_008b24e0::sub_008b24e0(INT Index) const
{
    return &Items(Index);
}

struct C_008b2530 {
    void sub_008b2530(int, int);
    int sub_008ad530(int, int);
};

// @baa 0x008b2530
void C_008b2530::sub_008b2530(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_008b2530 *)(this))->sub_008ad530(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x2c + *param_1),0,param_3 * 0x2c);
  return;
}

struct C_008b2560 {
    int sub_008b2560(int);
    int sub_008ad4c0(int);
};

// @baa 0x008b2560
int C_008b2560::sub_008b2560(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b2560 *)(this))->sub_008ad4c0(param_2);
  sub_01a37612((void *)(iVar1 * 0x2c + *param_1),0,param_2 * 0x2c);
  return iVar1;
}

struct C_008b2960 {
    int sub_008b2960(undefined4 *, int);
    int sub_008ad990(int, int);
};

// @baa 0x008b2960
int C_008b2960::sub_008b2960(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_008b2960 *)(this))->sub_008ad990(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct E_008b2a10 { BYTE Bytes[16]; };

struct S_008b2a10 {
    TArray<E_008b2a10> Items; // 0x00
    E_008b2a10* sub_008b2a10(INT Index);
};

// @baa 0x008b2a10
E_008b2a10* S_008b2a10::sub_008b2a10(INT Index)
{
    return &Items(Index);
}

struct C_008b2a60 {
    int sub_008b2a60(int);
    int sub_008adae0(int);
};

// @baa 0x008b2a60
int C_008b2a60::sub_008b2a60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b2a60 *)(this))->sub_008adae0(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_008b2a90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b2a90(INT Index);
};

// @baa 0x008b2a90
DWORD* S_008b2a90::sub_008b2a90(INT Index)
{
    return &Items(Index);
}

struct C_008b2ae0{
int sub_008b2ae0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x008b2ae0
int C_008b2ae0::sub_008b2ae0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E_008b2b40 { BYTE Bytes[16]; };

struct S_008b2b40 {
    TArray<E_008b2b40> Items; // 0x00
    E_008b2b40* sub_008b2b40(INT Index);
};

// @baa 0x008b2b40
E_008b2b40* S_008b2b40::sub_008b2b40(INT Index)
{
    return &Items(Index);
}

struct E_008b2b90 { BYTE Bytes[12]; };

struct S_008b2b90 {
    TArray<E_008b2b90> Items; // 0x00
    E_008b2b90* sub_008b2b90(INT Index);
};

// @baa 0x008b2b90
E_008b2b90* S_008b2b90::sub_008b2b90(INT Index)
{
    return &Items(Index);
}

struct S_008b2be0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_008b2be0(INT Index);
};

// @baa 0x008b2be0
QWORD* S_008b2be0::sub_008b2be0(INT Index)
{
    return &Items(Index);
}

struct E_008b2c30 { BYTE Bytes[12]; };

struct S_008b2c30 {
    TArray<E_008b2c30> Items; // 0x00
    E_008b2c30* sub_008b2c30(INT Index);
};

// @baa 0x008b2c30
E_008b2c30* S_008b2c30::sub_008b2c30(INT Index)
{
    return &Items(Index);
}

struct E_008b2c80 { BYTE Bytes[12]; };

struct S_008b2c80 {
    TArray<E_008b2c80> Items; // 0x00
    const E_008b2c80* sub_008b2c80(INT Index) const;
};

// @baa 0x008b2c80
const E_008b2c80* S_008b2c80::sub_008b2c80(INT Index) const
{
    return &Items(Index);
}

struct E_008b2cd0 { BYTE Bytes[12]; };

struct S_008b2cd0 {
    TArray<E_008b2cd0> Items; // 0x00
    E_008b2cd0* sub_008b2cd0(INT Index);
};

// @baa 0x008b2cd0
E_008b2cd0* S_008b2cd0::sub_008b2cd0(INT Index)
{
    return &Items(Index);
}

struct S_008b3160 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3160(INT Index);
};

// @baa 0x008b3160
DWORD* S_008b3160::sub_008b3160(INT Index)
{
    return &Items(Index);
}

struct S_008b31b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b31b0(INT Index);
};

// @baa 0x008b31b0
DWORD* S_008b31b0::sub_008b31b0(INT Index)
{
    return &Items(Index);
}

struct C_008b3200{
int sub_008b3200(undefined4*);
};

// @baa 0x008b3200
int C_008b3200::sub_008b3200(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b4560 { void sub_00547da0(int); C_008b4560 *sub_008b4560(int); };

// @baa 0x008b4560
C_008b4560 *C_008b4560::sub_008b4560(int a) { sub_00547da0(a); return this; }

struct C_008b4580 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_008b4580& sub_008b4580(int Arg);
};

// @baa 0x008b4580
C_008b4580& C_008b4580::sub_008b4580(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_008b4590 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_008b4590& sub_008b4590(int Arg);
};

// @baa 0x008b4590
C_008b4590& C_008b4590::sub_008b4590(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_008b45a0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_008b45a0& sub_008b45a0(int Arg);
};

// @baa 0x008b45a0
C_008b45a0& C_008b45a0::sub_008b45a0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_008a5f90(void);
int sub_008af0b0(...);
extern undefined4 g_026b5a64;
// @baa 0x008b45e0
int sub_008b45e0(void)
{
  if (g_026b5a64 == 0) {
    g_026b5a64 = sub_008af0b0(L"Engine");
    sub_008a5f90();
  }
  return g_026b5a64;
}

int sub_008a6160(void);
int sub_008af6b0(...);
extern undefined4 g_026b5a84;
// @baa 0x008b4610
int sub_008b4610(void)
{
  if (g_026b5a84 == 0) {
    g_026b5a84 = sub_008af6b0(L"Engine");
    sub_008a6160();
  }
  return g_026b5a84;
}

/* Kit gap: FName has no operator== here (UnName.h compares Index and Number). */
struct FName_ : public FName
{
    FORCEINLINE UBOOL operator==(const FName& Other) const { return Index == Other.Index && Number == Other.Number; }
};

/* Kit gap: AActor's timer functions (UnActor.cpp) aren't declared. */
struct AActor_ : public AActor
{
    void ClearTimer(FName inTimerFunc, UObject* inObj);
};

// @baa 0x008b7da0
/* Stops every matching timer (a zero rate is removed on the next tick). */
void AActor_::ClearTimer(FName inTimerFunc, UObject* inObj)
{
    if (inObj == NULL)
    {
        inObj = this;
    }
    for (INT Idx = 0; Idx < Timers.Num(); Idx++)
    {
        if ((const FName_&)Timers(Idx).FuncName == inTimerFunc && Timers(Idx).TimerObj == inObj)
        {
            Timers(Idx).Rate = 0.f;
        }
    }
}

/* Kit gap: FName has no operator== here (UnName.h compares Index and Number). */
static FORCEINLINE UBOOL NamesEqual(const FName& A, const FName& B)
{
    return A.Index == B.Index && A.Number == B.Number;
}

/* Kit gap: AActor's timer functions (UnActor.cpp) aren't declared. */
struct AActor__008b7ec0 : public AActor
{
    void PauseTimer(UBOOL bPause, FName inTimerFunc, UObject* inObj);
};

// @baa 0x008b7ec0
/* Pauses or resumes every matching timer. */
void AActor__008b7ec0::PauseTimer(UBOOL bPause, FName inTimerFunc, UObject* inObj)
{
    if (inObj == NULL)
    {
        inObj = this;
    }
    for (INT Idx = 0; Idx < Timers.Num(); Idx++)
    {
        if (NamesEqual(Timers(Idx).FuncName, inTimerFunc) && Timers(Idx).TimerObj == inObj)
        {
            Timers(Idx).bPaused = bPause;
        }
    }
}

/* Kit gap: AActor's timer queries (UnActor.cpp) aren't declared. */
struct AActor__008b7ff0 : public AActor
{
    UBOOL IsTimerActive(FName inTimerFunc, UObject* inObj);
};

// @baa 0x008b7ff0
/* A timer is active while its rate is positive. */
UBOOL AActor__008b7ff0::IsTimerActive(FName inTimerFunc, UObject* inObj)
{
    if (inObj == NULL)
    {
        inObj = this;
    }
    UBOOL bActive = FALSE;
    for (INT Idx = 0; Idx < Timers.Num(); Idx++)
    {
        if (NamesEqual(Timers(Idx).FuncName, inTimerFunc) && Timers(Idx).TimerObj == inObj)
        {
            bActive = Timers(Idx).Rate > 0.f;
            break;
        }
    }
    return bActive;
}

/* Kit gap: AActor's timer functions (UnActor.cpp) aren't declared. */
struct AActor__008b8130 : public AActor
{
    FLOAT GetTimerCount(FName inTimerFunc, UObject* inObj);
};

// @baa 0x008b8130
/* How long the matching timer has been counting, or -1 when there is none. */
FLOAT AActor__008b8130::GetTimerCount(FName inTimerFunc, UObject* inObj)
{
    if (inObj == NULL)
    {
        inObj = this;
    }
    FLOAT Count = -1.f;
    for (INT Idx = 0; Idx < Timers.Num(); Idx++)
    {
        if (NamesEqual(Timers(Idx).FuncName, inTimerFunc) && Timers(Idx).TimerObj == inObj)
        {
            Count = Timers(Idx).Count;
            break;
        }
    }
    return Count;
}

/* Kit gap: AActor's timer functions (UnActor.cpp) aren't declared. */
struct AActor__008b8270 : public AActor
{
    FLOAT GetTimerRate(FName TimerFuncName, UObject* inObj);
};

// @baa 0x008b8270
/* The matching timer's rate, or -1 when there is none. */
FLOAT AActor__008b8270::GetTimerRate(FName TimerFuncName, UObject* inObj)
{
    if (inObj == NULL)
    {
        inObj = this;
    }
    for (INT Idx = 0; Idx < Timers.Num(); Idx++)
    {
        if ((const FName_&)Timers(Idx).FuncName == TimerFuncName && Timers(Idx).TimerObj == inObj)
        {
            return Timers(Idx).Rate;
        }
    }
    return -1.f;
}

/* Kit gap: UnVcWin32.cpp's appClipboardPaste() isn't declared (005f0700: OpenClipboard, GetClipboardData). */
FString appClipboardPaste();
// @baa 0x008b6f60
/* UE3's APlayerController::PasteFromClipboard(). */
FString APlayerController::PasteFromClipboard()
{
    return appClipboardPaste();
}

/* Kit gaps: appClipboardCopy (UnVcWin32.cpp, 005ec7c0) and FString::operator* aren't declared. */
void appClipboardCopy(const TCHAR* Str);
struct FString_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

// @baa 0x008b0a30
void APlayerController::CopyToClipboard(const FString& Text)
{
	appClipboardCopy(*(const FString_&)Text);
}
