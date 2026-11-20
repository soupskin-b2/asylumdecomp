// MaterialInstance.cpp (part 1 of 3): 88 functions
// Placed here by: neighbours 65, class 21, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

// @baa 0x006ae990
IMPLEMENT_CLASS_AT(UMaterialInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstance.cpp", 10);

// @baa 0x006aeaa0
UBOOL UMaterialInstance::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x006aeab0
UBOOL UMaterialInstance::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_006aeb10 { undefined4 sub_006aeb10(void); };
// @baa 0x006aeb10
undefined4 C_006aeb10::sub_006aeb10(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

extern char g_01ecb0e4[];
// @baa 0x006aeb20
int sub_006aeb20(void) { return (int)g_01ecb0e4; }

extern char g_01ebb554[];
struct C_006aeb30 { void sub_006aeb30(void); };
// @baa 0x006aeb30
void C_006aeb30::sub_006aeb30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
struct C_006aeb40 { undefined4 * sub_006aeb40(byte param_2); };
// @baa 0x006aeb40
undefined4 * C_006aeb40::sub_006aeb40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006311e0(...);
extern undefined4 g_01ecb624;
// @baa 0x006aed10
class FMaterialRenderProxy* UMaterialInstance::GetRenderProxy(UBOOL Selected) const
{
	/* check(!Selected || GIsEditor), with GIsEditor a constant FALSE in this build */
	if (Selected)
	{
		sub_006311e0("!Selected || GIsEditor",
		             "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstance.cpp",
		             0x146, &g_01ecb624);
	}
	return (FMaterialRenderProxy*)Resources[Selected].Dummy;
}

// @baa 0x006aef80
void UMaterialInstance::vf_184(void) {  }

// @baa 0x006aef90
void UMaterialInstance::SetParent(class UMaterialInterface* NewParent) { Parent = NewParent; }

// @baa 0x006aefa0
void UMaterialInstance::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {  }

// @baa 0x006aefb0
void UMaterialInstance::SetScalarParameterValue(FName ParameterName, FLOAT Value) {  }

// @baa 0x006aefc0
void UMaterialInstance::SetTextureParameterValue(FName ParameterName, UTexture* Value) {  }

// @baa 0x006aefd0
void UMaterialInstance::SetFontParameterValue(FName ParameterName, class UFont* FontValue, INT FontPage) {  }

// @baa 0x006aefe0
void UMaterialInstance::ClearParameterValues() {  }

int sub_006be6a0(void);
struct C_006c47a0 { undefined4 sub_006c47a0(byte param_2); };
// @baa 0x006c47a0
undefined4 C_006c47a0::sub_006c47a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Obj { void* p; void sub_006c4cf0(); };

// @baa 0x006cba10
void __stdcall sub_006cba10(int a1, int a2, Obj o, int a4, int a5, int a6)
{
    o.sub_006c4cf0();
}

int sub_005c7a70(...);
int sub_006d5aa0(void);
struct C_006d5b10 { undefined4 sub_006d5b10(byte param_2); };
// @baa 0x006d5b10
undefined4 C_006d5b10::sub_006d5b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d5aa0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x006d6300
// @baa 0x006d6500
int sub_00702e60(void);
struct C_006d69d0 { undefined4 sub_006d69d0(byte param_2); };
// @baa 0x006d69d0
undefined4 C_006d69d0::sub_006d69d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00702e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006da480
int __stdcall sub_006da480(int a0, int a1, int a2) { return 1; }

struct C_007272e0 { int sub_007272e0(int param_2); };
// @baa 0x007272e0
int C_007272e0::sub_007272e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_007273e0 { int sub_007273e0(int param_2); };
// @baa 0x007273e0
int C_007273e0::sub_007273e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007273f0 { int sub_007273f0(int param_2); };
// @baa 0x007273f0
int C_007273f0::sub_007273f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C {
    int sub_00727490(int);
};

// @baa 0x00727490
int C::sub_00727490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_007274a0 {
    int sub_007274a0(int);
};

// @baa 0x007274a0
int C_007274a0::sub_007274a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_007274b0 {
    int sub_007274b0(int);
};

// @baa 0x007274b0
int C_007274b0::sub_007274b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view {
    int sub_007274c0(int);
};

struct C_00727560 { int sub_00727560(undefined4 param_2); };
// @baa 0x00727560
int C_00727560::sub_00727560(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_007274c0(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

struct C_00727580 { int sub_00727580(int param_2); };
// @baa 0x00727580
int C_00727580::sub_00727580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_0040fcc0(void);
struct C_00727590 { undefined4 sub_00727590(byte param_2); };
// @baa 0x00727590
undefined4 C_00727590::sub_00727590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00722cf0(void);
struct C_007275b0 { undefined4 sub_007275b0(byte param_2); };
// @baa 0x007275b0
undefined4 C_007275b0::sub_007275b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00722cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007275d0 { undefined4 sub_007275d0(byte param_2); };
// @baa 0x007275d0
undefined4 C_007275d0::sub_007275d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007271f0();
// @baa 0x007275f0
void sub_007275f0(void) { sub_007271f0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00727e40 { void* Data; int Num; int Max; void sub_00727e40(); };

// @baa 0x00727e40
void C_00727e40::sub_00727e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727ea0 { void* Data; int Num; int Max; void sub_00727ea0(); };

// @baa 0x00727ea0
void C_00727ea0::sub_00727ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727f00 { void* Data; int Num; int Max; void sub_00727f00(); };

// @baa 0x00727f00
void C_00727f00::sub_00727f00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727f60 { void* Data; int Num; int Max; void sub_00727f60(); };

// @baa 0x00727f60
void C_00727f60::sub_00727f60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00727fc0 { void* Data; int Num; int Max; void sub_00727fc0(); };

// @baa 0x00727fc0
void C_00727fc0::sub_00727fc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00728020 { void* Data; int Num; int Max; void sub_00728020(); };

// @baa 0x00728020
void C_00728020::sub_00728020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00728080 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728080& operator++();
};

// @baa 0x00728080
FSparseArrayConstIt_00728080& FSparseArrayConstIt_00728080::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_007280a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007280a0& operator++();
};

// @baa 0x007280a0
FSparseArrayConstIt_007280a0& FSparseArrayConstIt_007280a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_007280c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007280c0& operator++();
};

// @baa 0x007280c0
FSparseArrayConstIt_007280c0& FSparseArrayConstIt_007280c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_007280e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007280e0& operator++();
};

// @baa 0x007280e0
FSparseArrayConstIt_007280e0& FSparseArrayConstIt_007280e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728100 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728100& operator++();
};

// @baa 0x00728100
FSparseArrayConstIt_00728100& FSparseArrayConstIt_00728100::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728120 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728120& operator++();
};

// @baa 0x00728120
FSparseArrayConstIt_00728120& FSparseArrayConstIt_00728120::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728140 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728140& operator++();
};

// @baa 0x00728140
FSparseArrayConstIt_00728140& FSparseArrayConstIt_00728140::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728160 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728160& operator++();
};

// @baa 0x00728160
FSparseArrayConstIt_00728160& FSparseArrayConstIt_00728160::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00728180 {
    int sub_00728180();
};

// @baa 0x00728180
int C_00728180::sub_00728180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00728190 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728190& operator++();
};

// @baa 0x00728190
FSparseArrayConstIt_00728190& FSparseArrayConstIt_00728190::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_007281b0 {
    int sub_007281b0();
};

// @baa 0x007281b0
int C_007281b0::sub_007281b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_007281c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007281c0& operator++();
};

// @baa 0x007281c0
FSparseArrayConstIt_007281c0& FSparseArrayConstIt_007281c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_007281e0 {
    int sub_007281e0();
};

// @baa 0x007281e0
int C_007281e0::sub_007281e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_007281f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007281f0& operator++();
};

// @baa 0x007281f0
FSparseArrayConstIt_007281f0& FSparseArrayConstIt_007281f0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00728210 {
    int sub_00728210();
};

// @baa 0x00728210
int C_00728210::sub_00728210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00728220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728220& operator++();
};

// @baa 0x00728220
FSparseArrayConstIt_00728220& FSparseArrayConstIt_00728220::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00728240 {
    int sub_00728240();
};

// @baa 0x00728240
int C_00728240::sub_00728240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00728250 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728250& operator++();
};

// @baa 0x00728250
FSparseArrayConstIt_00728250& FSparseArrayConstIt_00728250::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_00728270 {
    int sub_00728270();
};

// @baa 0x00728270
int C_00728270::sub_00728270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_00728280 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728280(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728280
FSparseArrayConstIt_00728280::FSparseArrayConstIt_00728280(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728510 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728510(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728510
FSparseArrayConstIt_00728510::FSparseArrayConstIt_00728510(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728560(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728560
FSparseArrayConstIt_00728560::FSparseArrayConstIt_00728560(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_007285b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007285b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007285b0
FSparseArrayConstIt_007285b0::FSparseArrayConstIt_007285b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728600(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728600
FSparseArrayConstIt_00728600::FSparseArrayConstIt_00728600(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728650 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728650(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728650
FSparseArrayConstIt_00728650::FSparseArrayConstIt_00728650(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_007286a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007286a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007286a0
FSparseArrayConstIt_007286a0::FSparseArrayConstIt_007286a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_007286f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007286f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007286f0
FSparseArrayConstIt_007286f0::FSparseArrayConstIt_007286f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728740
FSparseArrayConstIt_00728740::FSparseArrayConstIt_00728740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728790 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728790(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728790
FSparseArrayConstIt_00728790::FSparseArrayConstIt_00728790(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_007287e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007287e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007287e0
FSparseArrayConstIt_007287e0::FSparseArrayConstIt_007287e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728830 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728830(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728830
FSparseArrayConstIt_00728830::FSparseArrayConstIt_00728830(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728880 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728880(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728880
FSparseArrayConstIt_00728880::FSparseArrayConstIt_00728880(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_007288d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007288d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007288d0
FSparseArrayConstIt_007288d0::FSparseArrayConstIt_007288d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728920 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728920& operator++();
};

// @baa 0x00728920
FSparseArrayConstIt_00728920& FSparseArrayConstIt_00728920::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728940 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728940& operator++();
};

// @baa 0x00728940
FSparseArrayConstIt_00728940& FSparseArrayConstIt_00728940::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728960 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728960& operator++();
};

// @baa 0x00728960
FSparseArrayConstIt_00728960& FSparseArrayConstIt_00728960::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00728980 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728980& operator++();
};

// @baa 0x00728980
FSparseArrayConstIt_00728980& FSparseArrayConstIt_00728980::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_007289a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007289a0& operator++();
};

// @baa 0x007289a0
FSparseArrayConstIt_007289a0& FSparseArrayConstIt_007289a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_007289c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_007289c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x007289c0
FSparseArrayConstIt_007289c0::FSparseArrayConstIt_007289c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728a10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728a10(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728a10
FSparseArrayConstIt_00728a10::FSparseArrayConstIt_00728a10(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728a60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728a60(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728a60
FSparseArrayConstIt_00728a60::FSparseArrayConstIt_00728a60(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728ab0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728ab0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728ab0
FSparseArrayConstIt_00728ab0::FSparseArrayConstIt_00728ab0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728b00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728b00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728b00
FSparseArrayConstIt_00728b00::FSparseArrayConstIt_00728b00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728b50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728b50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728b50
FSparseArrayConstIt_00728b50::FSparseArrayConstIt_00728b50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00728ba0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00728ba0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00728ba0
FSparseArrayConstIt_00728ba0::FSparseArrayConstIt_00728ba0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_00728bf0 {
    int sub_00728bf0();
};

// @baa 0x00728bf0
int C_00728bf0::sub_00728bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00a49040 { undefined4 sub_00a49040(byte param_2); };
// @baa 0x00a49040
undefined4 C_00a49040::sub_00a49040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a4a800 { undefined4 sub_00a4a800(byte param_2); };
// @baa 0x00a4a800
undefined4 C_00a4a800::sub_00a4a800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006be6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
