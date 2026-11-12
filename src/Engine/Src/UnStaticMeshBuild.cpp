// UnStaticMeshBuild.cpp: 28 functions
// Placed here by: neighbours 22, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_00d463e0 { int a, b, c; C_00d463e0(); };

// @baa 0x00d463e0
C_00d463e0::C_00d463e0() : a(0), b(0), c(0) {}

struct C{
int sub_00d48af0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00d48af0
int C::sub_00d48af0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,0xc*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+0xc*iVar2);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_00d48b60 { int sub_00d48b60(void); };

// @baa 0x00d48b60
int C_00d48b60::sub_00d48b60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d48b70 {
    int sub_00d48b70(int);
};

// @baa 0x00d48b70
int C_00d48b70::sub_00d48b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00d48b80 {
    int sub_00d48b80(int);
};

// @baa 0x00d48b80
int C_00d48b80::sub_00d48b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00d48b90
void __stdcall sub_00d48b90(int a0, int a1) {  }

struct C_00d48ba0 {
    int sub_00d48ba0(int);
};

// @baa 0x00d48ba0
int C_00d48ba0::sub_00d48ba0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d48bb0 {
    int sub_00d48bb0(int);
};

// @baa 0x00d48bb0
int C_00d48bb0::sub_00d48bb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d48c30 {
    int sub_00d48c30(int);
};

// @baa 0x00d48c30
int C_00d48c30::sub_00d48c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00d48c40 {
    int sub_00d48c40(int);
};

// @baa 0x00d48c40
int C_00d48c40::sub_00d48c40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00d48c50
void __stdcall sub_00d48c50(int a0, int a1) {  }

struct C_00d48c60 {
    int sub_00d48c60(int);
};

// @baa 0x00d48c60
int C_00d48c60::sub_00d48c60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d48c70 {
    int sub_00d48c70(int);
};

// @baa 0x00d48c70
int C_00d48c70::sub_00d48c70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d48cf0 {
    int sub_00d48cf0(int);
};

// @baa 0x00d48cf0
int C_00d48cf0::sub_00d48cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d48d00 {
    int sub_00d48d00(int);
};

// @baa 0x00d48d00
int C_00d48d00::sub_00d48d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00d48d10
void __stdcall sub_00d48d10(int a0, int a1) {  }

void sub_00549160();
// @baa 0x00d48d20
void sub_00d48d20(void) { sub_00549160(); }

typedef uint size_t;

struct C_view {
    int sub_00805400(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d48d30
int UObject::sub_00d48d30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_00805400(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct C_00d4b880 {
    void sub_00d4b880(int);
};

// @baa 0x00d4b880
void C_00d4b880::sub_00d4b880(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00d4b8c0 { int sub_00d4b8c0(void); };

// @baa 0x00d4b8c0
int C_00d4b8c0::sub_00d4b8c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d4b8d0 { void* Data; int Num; int Max; void sub_00d4b8d0(); };

// @baa 0x00d4b8d0
void C_00d4b8d0::sub_00d4b8d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d4bb80 { void* Data; int Num; int Max; void sub_00d4bb80(); };

// @baa 0x00d4bb80
void C_00d4bb80::sub_00d4bb80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d4bbe0 { void* Data; int Num; int Max; void sub_00d4bbe0(); };

// @baa 0x00d4bbe0
void C_00d4bbe0::sub_00d4bbe0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00d5b3c0();
// @baa 0x00d668c0
void sub_00d668c0(void) { sub_00d5b3c0(); }

struct C_00d668d0 {
    undefined4 * sub_00d668d0(byte);
    int sub_00d58240();
};

int sub_0053dfa0(...);
extern undefined * g_020afb9c;
// @baa 0x00d668d0
undefined4 * C_00d668d0::sub_00d668d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_020afb9c);
  ((C_00d668d0 *)(((char *)this + 0x10)))->sub_00d58240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d66900 {
    undefined4 * sub_00d66900(byte);
    int sub_00d58240();
};

extern undefined * g_020afba4;
// @baa 0x00d66900
undefined4 * C_00d66900::sub_00d66900(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_020afba4);
  ((C_00d66900 *)(((char *)this + 0x10)))->sub_00d58240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Exchange and Sort (UnTemplate.h); not in the kit. */
template<class T> inline void Exchange(T& A, T& B)
{
    const T Temp = A;
    A = B;
    B = Temp;
}

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

/* UnStaticMeshBuild.cpp's helper for finding overlapping vertices: a vertex index and its sort key. */
struct FIndexAndZ
{
    INT Index;
    FLOAT Z;
};

/* IMPLEMENT_COMPARE_CONSTREF(FIndexAndZ, UnStaticMeshBuild, { ... }): ascending Z */
class CompareUnStaticMeshBuildFIndexAndZConstRef
{
public:
    static inline INT Compare(const FIndexAndZ& A, const FIndexAndZ& B)
    {
        if (A.Z < B.Z)
        {
            return -1;
        }
        if (A.Z > B.Z)
        {
            return 1;
        }
        return 0;
    }
};

// @baa 0x00d4ca10
template void Sort<FIndexAndZ, CompareUnStaticMeshBuildFIndexAndZConstRef>(FIndexAndZ* First, INT Num);

/* IMPLEMENT_COMPARE_CONSTREF(INT, UnStaticMeshBuild, { ... }): ascending; written as two compares, not A - B */
class CompareUnStaticMeshBuildINTConstRef
{
public:
    static inline INT Compare(const INT& A, const INT& B)
    {
        if (A < B)
        {
            return -1;
        }
        if (A > B)
        {
            return 1;
        }
        return 0;
    }
};

// @baa 0x00d4cbd0
template void Sort<INT, CompareUnStaticMeshBuildINTConstRef>(INT* First, INT Num);
