// UnProp.cpp (part 1 of 3): 259 functions
// Placed here by: neighbours 192, class 48, file 16, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_0058f650(int);
};

// @baa 0x0058f650
undefined4 C::sub_0058f650(int param_2)
{
    int param_1 = (int)this;
  if ((*(int *)(param_1 + 0xc) != 0) && ((param_2 == 0 || (*(int *)(param_1 + 0x1c) == 0)))) {
    return 1;
  }
  return 0;
}

// @baa 0x005ebca0
int UObjectProperty::vf_16c(void) { return 1; }

// @baa 0x005ebd60
int UDelegateProperty::vf_16c(void) { return 1; }

// @baa 0x005fa720
IMPLEMENT_CLASS_AT(UProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 518);

// @baa 0x0062a810
UINT UByteProperty::vf_168() { return 1; }

struct C_0062a820 {
    void sub_0062a820(unsigned char* a1, unsigned char* a2, int a3, int a4, int a5);
};

// @baa 0x0062a820
void C_0062a820::sub_0062a820(unsigned char* a1, unsigned char* a2, int a3, int a4, int a5)
{
    *a1 = *a2;
}

struct UByteProperty_ : public UByteProperty {
    void sub_0062a830(void* Dest, void* Src, UObject*, UObject*, void*);
};

// @baa 0x0062a830
void UByteProperty_::sub_0062a830(void* Dest, void* Src, UObject*, UObject*, void*)
{
    INT ArrayDim = *(INT*)((BYTE*)this + 0x38);
    if (ArrayDim == 1)
        *(BYTE*)Dest = *(BYTE*)Src;
    else
        memcpy(Dest, Src, ArrayDim);
}

// @baa 0x0062a910
UINT UIntProperty::vf_168() { return 4; }

// @baa 0x0062a920
void UIntProperty::vf_144(int* a1, int* a2, int a3, int a4, int a5)
{
    *a1 = *a2;
}

// @baa 0x0062aa40
UINT UDelegateProperty::vf_168() { return 4; }

// @baa 0x0062aac0
UINT UBoolProperty::vf_168() { return 4; }

// @baa 0x0062ac10
undefined4 UBoolProperty::SetPropertyValue(uint * param_2, int * param_3)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if (*param_3 != 0) {
      *param_2 = *param_2 | *(uint *)(param_1 + 0x70);
      return 1;
    }
    *param_2 = *param_2 & ~*(uint *)(param_1 + 0x70);
    uVar1 = 1;
  }
  return uVar1;
}

// @baa 0x0062ac40
UINT UFloatProperty::vf_168() { return 4; }

struct C_0062ac50 {
    void sub_0062ac50(float* a1, float* a2, int a3, int a4, int a5);
};

// @baa 0x0062ac50
void C_0062ac50::sub_0062ac50(float* a1, float* a2, int a3, int a4, int a5)
{
    *a1 = *a2;
}

// @baa 0x0062ad80
UINT UObjectProperty::vf_168() { return 4; }

// @baa 0x0062ad90
void UObjectProperty::vf_144(int* a1, int* a2, int a3, int a4, int a5)
{
    *a1 = *a2;
}

// @baa 0x0062b010
int UInterfaceProperty::vf_130(int a0, int a1, int a2) { return 0; }

// @baa 0x0062b020
undefined2 sub_0062b020(undefined2 param_1)
{
  return param_1;
}

// @baa 0x0062b030
void sub_0062b030(void) {  }

// @baa 0x0062b040
void sub_0062b040(void) {  }

// @baa 0x0062b080
float10 sub_0062b080(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0062b090
void sub_0062b090(void) {  }

// @baa 0x0062b0a0
UINT UInterfaceProperty::vf_168() { return 4; }

// @baa 0x0062b100
UINT UNameProperty::vf_168() { return 4; }

// @baa 0x0062b1a0
INT UNameProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062b1f0
UINT UStrProperty::vf_168() { return 4; }

// @baa 0x0062b220
UINT UArrayProperty::vf_168() { return 4; }

// @baa 0x0062b230
int UArrayProperty::vf_130(int a0, int a1, int a2) { return 1; }

// @baa 0x0062b300
UINT UMapProperty::vf_168() { return 4; }

// @baa 0x0062b310
UBOOL UMapProperty::Identical(const void* A, const void* B, DWORD PortFlags) const { return 1; }

// @baa 0x0062b320
void __stdcall sub_0062b320(int a0, int a1, int a2, int a3) {  }

// @baa 0x0062b330
int UMapProperty::vf_130(int a0, int a1, int a2) { return 1; }

// @baa 0x0062b340
int UMapProperty::sub_0062b340(void) { return *(int*)((char*)this + 32); }

// @baa 0x0062b350
void UMapProperty::ExportTextItem(UINT a0, UINT a1, UINT a2, UINT a3, UINT a4) {  }

// @baa 0x0062b360
int UMapProperty::ImportText(int a0, int a1, int a2, int a3, int a4) { return a0; }

// @baa 0x0062b370
void UMapProperty::vf_174(int a0, int a1, int a2, int a3) {  }

// @baa 0x0062b380
void __stdcall sub_0062b380(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x0062b390
void UMapProperty::vf_144(INT* a0, INT* a1, INT a2, INT a3, INT a4) {  }

// @baa 0x0062b3a0
void UMapProperty::vf_154(int a0) {  }

// @baa 0x0062b3b0
int UMapProperty::vf_15c(void) { return 0; }

// @baa 0x0062b3c0
int UMapProperty::HasValue(int a0, int a1) { return 0; }

// @baa 0x0062b3d0
void UMapProperty::AddCppProperty(int a0) {  }

struct C_0062b3e0 { int sub_0062b3e0(void); };

// @baa 0x0062b3e0
int C_0062b3e0::sub_0062b3e0(void) { return *(int*)((char*)this + 120); }

struct C_0062b440 {
    void sub_0062b440(int, int);
};

int sub_0053df70(...);
// @baa 0x0062b440
void C_0062b440::sub_0062b440(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * param_3,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0062b480 {
    void sub_0062b480();
};

int sub_0053dfa0(...);
// @baa 0x0062b480
void C_0062b480::sub_0062b480(void)
{
    int * param_1 = (int *)this;

  param_1[2] = 0;
  param_1[1] = 0;
  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

// @baa 0x0062b760
int UMapProperty::vf_170(void) { return 0; }

struct C_0062b770 { int sub_0062b770(void); };

// @baa 0x0062b770
int C_0062b770::sub_0062b770(void) { return *(int*)((char*)this + 16); }

struct C_0062b780 { int sub_0062b780(void); };

// @baa 0x0062b780
int C_0062b780::sub_0062b780(void) { return *(int*)((char*)this + 20); }

struct C_0062b7b0 { C_0062b7b0* sub_0062b7b0(int a0); };

// @baa 0x0062b7b0
C_0062b7b0* C_0062b7b0::sub_0062b7b0(int a0) { return this; }

struct C_0062b7c0 { int sub_0062b7c0(void); };

// @baa 0x0062b7c0
int C_0062b7c0::sub_0062b7c0(void) { return *(int*)((char*)this + 8); }

struct C_0062b7d0 { int sub_0062b7d0(void); };

// @baa 0x0062b7d0
int C_0062b7d0::sub_0062b7d0(void) { return *(int*)((char*)this + 4); }

struct C_0062b7e0 { int a, b, c; C_0062b7e0(); };

// @baa 0x0062b7e0
C_0062b7e0::C_0062b7e0() : a(0), b(0), c(0) {}

struct C_0062b7f0 { int sub_0062b7f0(void); };

// @baa 0x0062b7f0
int C_0062b7f0::sub_0062b7f0(void) { return *(int*)((char*)this + 4); }

struct C_0062b800 { C_0062b800* sub_0062b800(void); };

// @baa 0x0062b800
C_0062b800* C_0062b800::sub_0062b800(void) { return this; }

struct C_0062b880 { int a, b, c; C_0062b880(); };

// @baa 0x0062b880
C_0062b880::C_0062b880() : a(0), b(0), c(0) {}

struct C_0062b8a0 { int sub_0062b8a0(void); };

// @baa 0x0062b8a0
int C_0062b8a0::sub_0062b8a0(void) { return *(int*)((char*)this + 4); }

struct C_0062b8b0 { int a, b, c; C_0062b8b0(); };

// @baa 0x0062b8b0
C_0062b8b0::C_0062b8b0() : a(0), b(0), c(0) {}

struct C_0062b8c0 { int sub_0062b8c0(void); };

// @baa 0x0062b8c0
int C_0062b8c0::sub_0062b8c0(void) { return *(int*)((char*)this + 0); }

struct C_0062b8d0 { int sub_0062b8d0(void); };

// @baa 0x0062b8d0
int C_0062b8d0::sub_0062b8d0(void) { return *(int*)((char*)this + 4); }

struct C_0062b8e0 { int a; C_0062b8e0(int); };

// @baa 0x0062b8e0
C_0062b8e0::C_0062b8e0(int x) : a(x) {}

struct C_0062b8f0 {
    int x;
    int sub_0062b8f0();
};

// @baa 0x0062b8f0
int C_0062b8f0::sub_0062b8f0()
{
    return !x ? -1 : 0;
}

struct C_0062b900 {
    int *f;
    C_0062b900 *sub_0062b900();
};

// @baa 0x0062b900
C_0062b900 *C_0062b900::sub_0062b900()
{
    f = (int*)f[2];
    return this;
}

struct C_0062b910 { int sub_0062b910(void); };

// @baa 0x0062b910
int C_0062b910::sub_0062b910(void) { return *(int*)((char*)this + 0); }

struct C_0062b920 { int sub_0062b920(void); };

// @baa 0x0062b920
int C_0062b920::sub_0062b920(void) { return *(int*)((char*)this + 0); }

struct C_0062b930 { int sub_0062b930(void); };

// @baa 0x0062b930
int C_0062b930::sub_0062b930(void) { return *(int*)((char*)this + 0); }

struct C_0062b940 { int sub_0062b940(void); };

// @baa 0x0062b940
int C_0062b940::sub_0062b940(void) { return *(int*)((char*)this + 0); }

struct C_0062b950 {
    int sub_0062b950();
};

// @baa 0x0062b950
int C_0062b950::sub_0062b950(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0062b960 { int a, b; C_0062b960(int, int); };

// @baa 0x0062b960
C_0062b960::C_0062b960(int x, int y) : a(x), b(y) {}

struct C_0062b9c0 { int sub_0062b9c0(void); };

// @baa 0x0062b9c0
int C_0062b9c0::sub_0062b9c0(void) { return *(int*)((char*)this + 0); }

// @baa 0x0062b9d0
int sub_0062b9d0(int a0) { return *(int*)a0; }

struct C_0062b9e0 {
    void sub_0062b9e0(int *);
};

// @baa 0x0062b9e0
void C_0062b9e0::sub_0062b9e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_0062b9f0 { int sub_0062b9f0(void); };

// @baa 0x0062b9f0
int C_0062b9f0::sub_0062b9f0(void) { return *(int*)((char*)this + 0); }

struct C_0062ba00 { int sub_0062ba00(void); };

// @baa 0x0062ba00
int C_0062ba00::sub_0062ba00(void) { return *(int*)((char*)this + 0); }

struct C_0062ba30 {
    undefined4 sub_0062ba30();
};

// @baa 0x0062ba30
undefined4 C_0062ba30::sub_0062ba30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

// @baa 0x0062ba40
int* sub_0062ba40(int* a, int b)
{
  *a = b;
  return a;
}

struct C_0062ba50 { int sub_0062ba50(void); };

// @baa 0x0062ba50
int C_0062ba50::sub_0062ba50(void) { return *(int*)((char*)this + 4); }

struct C_0062ba60 { int sub_0062ba60(void); };

// @baa 0x0062ba60
int C_0062ba60::sub_0062ba60(void) { return *(int*)((char*)this + 0); }

void sub_00572b30();
// @baa 0x0062bb50
void sub_0062bb50(void) { sub_00572b30(); }

// @baa 0x0062bcb0
int sub_0062bcb0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0062bcc0
void sub_0062bcc0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x0062bce0
void sub_0062bce0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_0062bd00 { int sub_0062bd00(void); };

// @baa 0x0062bd00
int C_0062bd00::sub_0062bd00(void) { return *(int*)((char*)this + 24); }

struct C_0062bd10 {
    int Unk0;
    int Unk4;
    int sub_0062bd10();
};

// @baa 0x0062bd10
int C_0062bd10::sub_0062bd10()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_0062bd20 { int sub_0062bd20(void); };

// @baa 0x0062bd20
int C_0062bd20::sub_0062bd20(void) { return *(int*)((char*)this + 4); }

struct C_0062bd30 { int sub_0062bd30(void); };

// @baa 0x0062bd30
int C_0062bd30::sub_0062bd30(void) { return *(int*)((char*)this + 4); }

struct C_0062bda0 {
    int Unk0;
    int Unk4;
    int sub_0062bda0();
};

// @baa 0x0062bda0
int C_0062bda0::sub_0062bda0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_0062bdb0 { int sub_0062bdb0(void); };

// @baa 0x0062bdb0
int C_0062bdb0::sub_0062bdb0(void) { return *(int*)((char*)this + 4); }

struct C_0062bdc0 { int sub_0062bdc0(void); };

// @baa 0x0062bdc0
int C_0062bdc0::sub_0062bdc0(void) { return *(int*)((char*)this + 4); }

struct C_0062be30 {
    int Unk0;
    int Unk4;
    int sub_0062be30();
};

// @baa 0x0062be30
int C_0062be30::sub_0062be30()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_0062be40 { int sub_0062be40(void); };

// @baa 0x0062be40
int C_0062be40::sub_0062be40(void) { return *(int*)((char*)this + 4); }

struct C_0062be50 { int sub_0062be50(void); };

// @baa 0x0062be50
int C_0062be50::sub_0062be50(void) { return *(int*)((char*)this + 4); }

// @baa 0x0062bec0
int sub_0062bec0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xde) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x0062bee0
int sub_0062bee0(int a0, int a1) { return a1; }

struct C_0062bef0 { int sub_0062bef0(void); };

// @baa 0x0062bef0
int C_0062bef0::sub_0062bef0(void) { return *(int*)((char*)this + 28); }

// @baa 0x0062bf30
int sub_0062bf30(int a0, int a1) { return a1; }

// @baa 0x0062bf40
int sub_0062bf40(int a0, int a1) { return a1; }

// @baa 0x0062bf50
int sub_0062bf50(int a0, int a1) { return a1; }

// @baa 0x0062bf60
int sub_0062bf60(int a0, int a1) { return a1; }

// @baa 0x0062bf70
int sub_0062bf70(int a0, int a1) { return a1; }

// @baa 0x0062bf80
IMPLEMENT_CLASS_AT(UObjectProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 1978);

// @baa 0x0062bfe0
extern undefined * g_01eaef94;
// @baa 0x0062c130
undefined4 * UObjectProperty::sub_0062c130(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eaef94);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct UProperty_ : public UProperty {
    INT GetElementSize() const { return *(INT*)((BYTE*)this + 0x3c); }
    INT GetOffset() const { return *(INT*)((BYTE*)this + 0x54); }
    UBOOL Matches(BYTE* A, BYTE* B, INT ArrayIndex, DWORD PortFlags)
    {
        INT Ofs = ArrayIndex * GetElementSize() + GetOffset();
        return Identical(A + Ofs, B ? B + Ofs : NULL, PortFlags);
    }
    UBOOL sub_0062ddd0(INT Index, FString& ValueStr, BYTE* Data, BYTE* Delta, UObject* Parent, INT PortFlags);
};

// @baa 0x0062ddd0
UBOOL UProperty_::sub_0062ddd0(INT Index, FString& ValueStr, BYTE* Data, BYTE* Delta, UObject* Parent, INT PortFlags)
{
    if ((PortFlags & 0x80) && !vf_15c())
    {
        return 0;
    }
    if (Data == Delta || !Matches(Data, Delta, Index, PortFlags))
    {
        ExportTextItem((UINT)&ValueStr, (UINT)(Data + Index * GetElementSize() + GetOffset()),
                       (UINT)(Delta ? Delta + Index * GetElementSize() + GetOffset() : NULL), (UINT)Parent, PortFlags);
        return 1;
    }
    return 0;
}

// @baa 0x0062dec0
// @baa 0x0062dfd0
int UProperty::vf_000(void) { return 1; }

// @baa 0x0062dfe0
bool UProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct Target {
  int sub_005f2bf0(int);
};

struct Obj {
  char pad[0x28];
  Target *m_028;
  int sub_0062e020();
};

// @baa 0x0062e020
int Obj::sub_0062e020()
{
  return m_028->sub_005f2bf0(0x70);
}

// @baa 0x0062e090
int UByteProperty::vf_000(void) { return 1; }

// @baa 0x0062e120
int UIntProperty::vf_000(void) { return 1; }

// @baa 0x0062e470
int UDelegateProperty::vf_000(void) { return 1; }

// @baa 0x0062e590
int UBoolProperty::vf_000(void) { return 1; }

// @baa 0x0062e620
int UFloatProperty::vf_000(void) { return 1; }

struct Obj_0062e630 {
  char pad[0x28];
  Target *m_028;
  int sub_0062e630();
};

// @baa 0x0062e630
int Obj_0062e630::sub_0062e630()
{
  return m_028->sub_005f2bf0(0x70);
}

// @baa 0x0062e6d0
int UObjectProperty::vf_000(void) { return 1; }

struct C_0062e6e0 {
    int sub_005f2bf0(int a1);
};

struct Outer {
    char pad[0x28];
    C_0062e6e0 *field_28;
    int sub_0062e6e0();
};

// @baa 0x0062e6e0
int Outer::sub_0062e6e0()
{
    return field_28->sub_005f2bf0(0x74);
}

// @baa 0x0062e6f0
int UClassProperty::vf_000(void) { return 1; }

// @baa 0x0062e700
int UComponentProperty::vf_000(void) { return 1; }

struct Obj_0062e840 {
  char pad[0x28];
  Target *m_028;
  int sub_0062e840();
};

// @baa 0x0062e840
int Obj_0062e840::sub_0062e840()
{
  return m_028->sub_005f2bf0(0x70);
}

// @baa 0x0062e870
int UInterfaceProperty::vf_000(void) { return 1; }

// @baa 0x0062e970
int UNameProperty::vf_000(void) { return 1; }

// @baa 0x0062e9f0
int UStrProperty::vf_000(void) { return 1; }

struct Obj_0062ea00 {
  char pad[0x28];
  Target *m_028;
  int sub_0062ea00();
};

// @baa 0x0062ea00
int Obj_0062ea00::sub_0062ea00()
{
  return m_028->sub_005f2bf0(0x70);
}

// @baa 0x0062ec40
int * UArrayProperty::sub_0062ec40(byte param_2)
{
    int * param_1 = (int *)this;

  param_1[2] = 0;
  param_1[1] = 0;
  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0062ed40
int UArrayProperty::vf_000(void) { return 1; }

// @baa 0x0062ee00
int UMapProperty::vf_000(void) { return 1; }

struct Obj_0062ee10 {
  char pad[0x28];
  Target *m_028;
  int sub_0062ee10();
};

// @baa 0x0062ee10
int Obj_0062ee10::sub_0062ee10()
{
  return m_028->sub_005f2bf0(0x70);
}

// @baa 0x0062ee20
undefined4 UStructProperty::vf_168(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x5c);
}

// @baa 0x0062eee0
int UStructProperty::vf_000(void) { return 1; }

struct C_0062eef0 {
    void sub_0062eef0(int *);
};

// @baa 0x0062eef0
void C_0062eef0::sub_0062eef0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_2) {
        return;
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
  }
  return;
}

struct C_0062ef10 { int sub_0062ef10(void); };

// @baa 0x0062ef10
int C_0062ef10::sub_0062ef10(void) { return *(int*)((char*)this + 0); }

struct C_0062ef60 {
    int sub_0062ef60(int);
};

// @baa 0x0062ef60
int C_0062ef60::sub_0062ef60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0062ef70 {
    int sub_0062ef70(int);
};

// @baa 0x0062ef70
int C_0062ef70::sub_0062ef70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_0062ef80 {
    int sub_0062ef80(int);
};

// @baa 0x0062ef80
int C_0062ef80::sub_0062ef80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0062ef90 {
    int sub_0062ef90(int);
};

// @baa 0x0062ef90
int C_0062ef90::sub_0062ef90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0062efa0 { int sub_0062efa0(void); };

// @baa 0x0062efa0
int C_0062efa0::sub_0062efa0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0062efc0 {
    int sub_0062efc0(int);
};

// @baa 0x0062efc0
int C_0062efc0::sub_0062efc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0062efd0 { int sub_0062efd0(void); };

// @baa 0x0062efd0
int C_0062efd0::sub_0062efd0(void) { return *(int*)((char*)this + 20); }

// @baa 0x0062f000
int sub_0062f000(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xde) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

int sub_0059c600(void);
int sub_005b3970(...);
extern undefined4 g_0268d07c;
// @baa 0x0062f020
int sub_0062f020(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_0268d07c == 0) {
      g_0268d07c = sub_005b3970(L"Core");
      sub_0059c600();
    }
    if (iVar1 == g_0268d07c) {
      return param_1;
    }
  }
  return 0;
}

int sub_00588340(...);
int sub_0058aa40(void);
extern undefined4 g_02688450;
// @baa 0x0062f060
int sub_0062f060(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_02688450 == 0) {
      g_02688450 = sub_00588340(L"Core");
      sub_0058aa40();
    }
    if (iVar1 == g_02688450) {
      return param_1;
    }
  }
  return 0;
}

extern "C" void sub_0062bd40();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0062f0d0();
};

// @baa 0x0062f0d0
void CNode::sub_0062f0d0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_0062bd40();
}

extern "C" void sub_0062bdd0();
struct CNode_0062f110 {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0062f110();
};

// @baa 0x0062f110
void CNode_0062f110::sub_0062f110()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_0062bdd0();
}

extern "C" void sub_0062be60();
struct CNode_0062f150 {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0062f150();
};

// @baa 0x0062f150
void CNode_0062f150::sub_0062f150()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_0062be60();
}

// @baa 0x0062f160
struct C_view {
    int sub_00567f10(int);
};

extern undefined * g_01eaf0f8;
// @baa 0x0062f190
undefined4 * UStrProperty::sub_0062f190(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf0f8);
  return param_1;
}

// @baa 0x0062f1c0
IMPLEMENT_CLASS_AT(UByteProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 722);

// @baa 0x0062f220
extern undefined * g_01eaf278;
// @baa 0x0062f240
undefined4 * UStrProperty::sub_0062f240(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf278);
  return param_1;
}

// @baa 0x0062f270
IMPLEMENT_CLASS_AT(UIntProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 909);

// @baa 0x0062f2d0
struct C_view_0062f2f0 {
    int sub_0062dc50(int, int, int, int, int);
};

// @baa 0x0062f2f0
undefined4 * UStrProperty::sub_0062f2f0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0062f2f0 *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eaf278);
  return param_1;
}

extern undefined * g_01eaf3f8;
// @baa 0x0062f320
undefined4 * UStrProperty::sub_0062f320(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf3f8);
  return param_1;
}

// @baa 0x0062f350
IMPLEMENT_CLASS_AT(UBoolProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 1329);

// @baa 0x0062f3b0
extern undefined * g_01eaf578;
// @baa 0x0062f3d0
undefined4 * UStrProperty::sub_0062f3d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf578);
  return param_1;
}

// @baa 0x0062f400
IMPLEMENT_CLASS_AT(UFloatProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 1442);

// @baa 0x0062f460
struct C_view_0062f480 {
    int sub_0062dc50(int, int, int, int, int);
};

// @baa 0x0062f480
undefined4 * UStrProperty::sub_0062f480(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0062f480 *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eaf578);
  return param_1;
}

extern undefined * g_01eaee18;
// @baa 0x0062f4b0
undefined4 * UStrProperty::sub_0062f4b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaee18);
  return param_1;
}

extern undefined * g_01eaf6f8;
// @baa 0x0062f4e0
undefined4 * UStrProperty::sub_0062f4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf6f8);
  return param_1;
}

// @baa 0x0062f510
IMPLEMENT_CLASS_AT(UComponentProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2411);

// @baa 0x0062f590
extern undefined * g_01eaf878;
// @baa 0x0062f5b0
undefined4 * UStrProperty::sub_0062f5b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf878);
  return param_1;
}

// @baa 0x0062f5e0
IMPLEMENT_CLASS_AT(UClassProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2060);

// @baa 0x0062f660
extern undefined * g_01eaf9f8;
// @baa 0x0062f680
undefined4 * UStrProperty::sub_0062f680(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eaf9f8);
  return param_1;
}

// @baa 0x0062f6b0
IMPLEMENT_CLASS_AT(UInterfaceProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2691);

// @baa 0x0062f710
int UInterfaceProperty::vf_16c(void) { return 1; }

// @baa 0x0062f720
extern undefined * g_01eafb78;
// @baa 0x0062f740
undefined4 * UStrProperty::sub_0062f740(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eafb78);
  return param_1;
}

// @baa 0x0062f770
IMPLEMENT_CLASS_AT(UNameProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2800);

// @baa 0x0062f7d0
extern undefined * g_01ea6f00;
// @baa 0x0062f7f0
undefined4 * UStrProperty::sub_0062f7f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01ea6f00);
  return param_1;
}

extern undefined * g_01eafcf8;
// @baa 0x0062f820
undefined4 * UStrProperty::sub_0062f820(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eafcf8);
  return param_1;
}

// @baa 0x0062f850
IMPLEMENT_CLASS_AT(UMapProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 3746);

// @baa 0x0062f8b0
void __stdcall sub_0062f8b0(int a0, int a1) {  }

// @baa 0x0062f8c0
void UMapProperty::vf_164(int a0, int a1, int a2, int a3) {  }

// @baa 0x0062f8d0
int UMapProperty::vf_160(void) { return 0; }

// @baa 0x0062f8e0
int UMapProperty::GetPropertyValue(int a0, int a1) { return 0; }

// @baa 0x0062f8f0
UINT UMapProperty::SetPropertyValue(UINT* a0, INT* a1) { return 0; }

// @baa 0x0062f900
extern undefined * g_01eafe78;
// @baa 0x0062f920
undefined4 * UStrProperty::sub_0062f920(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eafe78);
  return param_1;
}

// @baa 0x0062f950
IMPLEMENT_CLASS_AT(UStructProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 4931);

// @baa 0x0062f9b0
int UStructProperty::GetPropertyValue(int a0, int a1) { return 0; }

// @baa 0x0062f9c0
UINT UStructProperty::SetPropertyValue(UINT* a0, INT* a1) { return 0; }

// @baa 0x0062f9d0
extern undefined * g_01eafff8;
// @baa 0x0062f9f0
undefined4 * UStrProperty::sub_0062f9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  *param_1 = (undefined4)(&g_01eafff8);
  return param_1;
}

// @baa 0x0062fa20
IMPLEMENT_CLASS_AT(UDelegateProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 1184);

// @baa 0x0062fa80
struct UInterfaceProperty_ : public UInterfaceProperty {
    void sub_00630590(BYTE* Data, DWORD PortFlags);
};

// @baa 0x00630590
void UInterfaceProperty_::sub_00630590(BYTE* Data, DWORD PortFlags)
{
    if ((PortFlags & 0x80) == 0 || vf_15c())
    {
        ((INT*)Data)[0] = 0;
        ((INT*)Data)[1] = 0;
    }
}

struct C_006307f0 {
    int sub_006307f0();
};

// @baa 0x006307f0
int C_006307f0::sub_006307f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00630840 {
    int sub_00630840(int);
};

// @baa 0x00630840
int C_00630840::sub_00630840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00630850 {
    int sub_00630850();
};

// @baa 0x00630850
int C_00630850::sub_00630850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00630870 {
    int sub_00630870();
};

// @baa 0x00630870
int C_00630870::sub_00630870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

// @baa 0x00630af0
// @baa 0x00630b20
// @baa 0x00630b50
// @baa 0x00630b80
// @baa 0x00630bb0
// @baa 0x00630be0
// @baa 0x00630c10
// @baa 0x00630c40
// @baa 0x00630c70
// @baa 0x00630ca0
IMPLEMENT_CLASS_AT(UStrProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2921);

// @baa 0x00630cd0
IMPLEMENT_CLASS_AT(UArrayProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 3466);

// @baa 0x00630d00
// @baa 0x00630d30
// @baa 0x00630d60
// @baa 0x006318f0
// @baa 0x00631a00
// @baa 0x00631ac0
// @baa 0x00631b80
// @baa 0x00631c40
// @baa 0x00631d00
// @baa 0x00631dc0
// @baa 0x00631ee0
// @baa 0x006321f0
// @baa 0x006322b0
// @baa 0x00632370
// @baa 0x00632430
int sub_006311e0(...);
extern undefined4 g_01ead7f8;
extern undefined4 g_01ead8bc;
// @baa 0x006324f0
void UArrayProperty::AddCppProperty(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x70) != 0) {
    sub_006311e0("!Inner",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp"
                 ,0xc9f,&g_01ead7f8);
  }
  if (param_2 == 0) {
    sub_006311e0("Property",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp"
                 ,0xca0,&g_01ead8bc);
  }
  *(int *)(param_1 + 0x70) = param_2;
  return;
}

// @baa 0x00632550
// @baa 0x00632610
// @baa 0x006326d0
// @baa 0x00633360
// @baa 0x00633470
bool UByteProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006334b0
// @baa 0x006335c0
bool UIntProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00633600
// @baa 0x00633710
bool UDelegateProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00633750
// @baa 0x00633860
bool UBoolProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006338a0
// @baa 0x006339b0
bool UFloatProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006339f0
// @baa 0x00633b00
bool UObjectProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00633b40
// @baa 0x00633c50
bool UInterfaceProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00633c90
// @baa 0x00633da0
bool UNameProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00633de0
// @baa 0x00633ef0
bool UStrProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00634160
// @baa 0x00634270
bool UArrayProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006342b0
// @baa 0x006343c0
bool UMapProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00634400 { void sub_0059cfe0(int); C_00634400 *sub_00634400(int); };

// @baa 0x00634400
C_00634400 *C_00634400::sub_00634400(int a) { sub_0059cfe0(a); return this; }

// @baa 0x00634470
// @baa 0x00634580
bool UStructProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00634680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00634680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00634680& operator++();
};

TConstSetBitIterator_00634680::TConstSetBitIterator_00634680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00634680
TConstSetBitIterator_00634680& TConstSetBitIterator_00634680::operator++()
{
    It.Advance();
    return *this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_006346a0 { void* Data; int Num; int Max; void sub_006346a0(); };

// @baa 0x006346a0
void C_006346a0::sub_006346a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_006347c0 { int sub_00544d40(int); };

// @baa 0x006347c0
int sub_006347c0(S_006347c0 *s, int a) { return s->sub_00544d40(a); }

struct TConstSetBitIterator_00634820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00634820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00634820& operator++();
};

TConstSetBitIterator_00634820::TConstSetBitIterator_00634820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00634820
TConstSetBitIterator_00634820& TConstSetBitIterator_00634820::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00634a40
void __stdcall sub_00634a40(int a0, int a1) {  }

// @baa 0x00634a50
void __stdcall sub_00634a50(int a0, int a1) {  }

// @baa 0x00636210
// @baa 0x00636320
bool UClassProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00636360
// @baa 0x00636470
bool UComponentProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
