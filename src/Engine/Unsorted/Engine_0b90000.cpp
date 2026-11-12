// Engine_0b90000.cpp (part 1 of 3): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00b921b0(int);
};

int sub_0053df70(...);
// @baa 0x00b921b0
void C::sub_00b921b0(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00b921f0 { void* Data; int Num; int Max; void sub_00b921f0(); };

// @baa 0x00b921f0
void C_00b921f0::sub_00b921f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b92250 {
    void sub_00b92250(int);
};

// @baa 0x00b92250
void C_00b92250::sub_00b92250(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_00b3d3a0();
// @baa 0x00b95790
void sub_00b95790(void) { sub_00b3d3a0(); }

struct C_00b97030 {
    undefined4 sub_00b97030(byte);
};

int sub_0053dfa0(...);
int sub_00b921f0(void);
// @baa 0x00b97030
undefined4 C_00b97030::sub_00b97030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b921f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x00b97050
undefined4 UObject::sub_00b97050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_0200e3c8;
// @baa 0x00b9a9f0
undefined4 * UObject::sub_00b9a9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0200e3c8);
  return param_1;
}

struct T_00b9ab10;
// @baa 0x00b9ab10
template INT TArray<T_00b9ab10*>::RemoveItem(T_00b9ab10* const&);

// @baa 0x00b9abd0
IMPLEMENT_CLASS_AT(URParticleAttractorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 6471);

// @baa 0x00b9ac50

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

/* UnParticleRender.cpp's sprite sort entry: a particle index and its view-space depth. */
struct FParticleOrder
{
    INT ParticleIndex;
    FLOAT Z;
};

/* IMPLEMENT_COMPARE_CONSTREF(FParticleOrder, UnParticleRender, { return A.Z < B.Z ? 1 : -1; }): back to front */
class CompareUnParticleRenderFParticleOrderConstRef
{
public:
    static inline INT Compare(const FParticleOrder& A, const FParticleOrder& B) { return A.Z < B.Z ? 1 : -1; }
};

// @baa 0x00b929f0
template void Sort<FParticleOrder, CompareUnParticleRenderFParticleOrderConstRef>(FParticleOrder* First, INT Num);
