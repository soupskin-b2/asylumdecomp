// Cascade.cpp (part 1 of 2): 56 functions
// Placed here by: neighbours 35, callers 6, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00b49120(void);
int sub_00b4d090(...);
extern undefined4 g_026bf320;
// @baa 0x00b4dd40
int sub_00b4dd40(void)
{
  if (g_026bf320 == 0) {
    g_026bf320 = sub_00b4d090(L"Engine");
    sub_00b49120();
  }
  return g_026bf320;
}

int sub_00b48850(...);
int sub_00b48910(void);
extern undefined4 g_026bf2fc;
// @baa 0x00b4fed0
int sub_00b4fed0(void)
{
  if (g_026bf2fc == 0) {
    g_026bf2fc = sub_00b48850(L"Engine");
    sub_00b48910();
  }
  return g_026bf2fc;
}

struct T_012a9c90;
// @baa 0x012a9c90
template INT TArray<T_012a9c90*>::RemoveItem(T_012a9c90* const&);

struct C { void sub_012a9ad0(); void sub_012ae440(int); };

// @baa 0x012ae440
void C::sub_012ae440(int) { sub_012a9ad0(); }

int sub_006f7810(void);
extern undefined * g_02225350;
// @baa 0x012b0f10
undefined4 * UPrimitiveComponent::sub_012b0f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_02225350);
  return param_1;
}

// @baa 0x012b0f30
IMPLEMENT_CLASS_AT(UCascadePreviewComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 14);

// @baa 0x012b0f90
extern undefined * g_022255a8;
// @baa 0x012b0fc0
undefined4 * UPrimitiveComponent::sub_012b0fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_022255a8);
  return param_1;
}

// @baa 0x012b0fe0
IMPLEMENT_CLASS_AT(UCascadeParticleSystemComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 19);

// @baa 0x012b1040
int sub_0129ee00(void);
int sub_012afb00(...);
extern undefined4 g_026d55d8;
// @baa 0x012b19c0
int sub_012b19c0(void)
{
  if (g_026d55d8 == 0) {
    g_026d55d8 = sub_012afb00(L"UnrealEd");
    sub_0129ee00();
  }
  return g_026d55d8;
}

// @baa 0x012b1e30
IMPLEMENT_CLASS_AT(UTexAlignerPlanar, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 168);

// @baa 0x012b1f40
bool UTexAlignerPlanar::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012b1f80
IMPLEMENT_CLASS_AT(UTexAlignerDefault, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 233);

// @baa 0x012b2090
bool UTexAlignerDefault::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012b20d0
IMPLEMENT_CLASS_AT(UTexAlignerBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 268);

// @baa 0x012b21e0
bool UTexAlignerBox::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012b2220
IMPLEMENT_CLASS_AT(UTexAlignerFit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 305);

// @baa 0x012b2330
bool UTexAlignerFit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012b4460
// @baa 0x012b4480
// @baa 0x012b5e40
// @baa 0x012b5f00
// @baa 0x012b64b0
int sub_012b64b0(void) { return 1; }

// @baa 0x012b64c0
int sub_012b64c0(void) { return 1; }

// @baa 0x012b64d0
int sub_012b64d0(void) { return 1; }

struct A_012b64e0 { virtual void sub_012b7360(); char pad[408]; };

struct B_012b64e0 { virtual void sub_012b7360(); };

struct C_012b64e0 : A_012b64e0, B_012b64e0 { virtual void sub_012b7360(); C_012b64e0(); };

C_012b64e0::C_012b64e0() {}

// @baa 0x012b64e0
void C_012b64e0::sub_012b7360() {}

struct A_012b64f0 { virtual void sub_012b7360(); char pad[752]; };

struct B_012b64f0 { virtual void sub_012b7360(); };

struct C_012b64f0 : A_012b64f0, B_012b64f0 { virtual void sub_012b7360(); C_012b64f0(); };

C_012b64f0::C_012b64f0() {}

// @baa 0x012b64f0
void C_012b64f0::sub_012b7360() {}

struct A_012b6500 { virtual void sub_012b7360(); char pad[416]; };

struct B_012b6500 { virtual void sub_012b7360(); };

struct C_012b6500 : A_012b6500, B_012b6500 { virtual void sub_012b7360(); C_012b6500(); };

C_012b6500::C_012b6500() {}

// @baa 0x012b6500
void C_012b6500::sub_012b7360() {}

struct A_012b6510 { virtual void sub_012b7360(); char pad[420]; };

struct B_012b6510 { virtual void sub_012b7360(); };

struct C_012b6510 : A_012b6510, B_012b6510 { virtual void sub_012b7360(); C_012b6510(); };

C_012b6510::C_012b6510() {}

// @baa 0x012b6510
void C_012b6510::sub_012b7360() {}

struct S6050 {
    void sub_012b5fc0();
};

struct S6530 {
    void sub_012b6520();
};

// @baa 0x012b6520
void S6530::sub_012b6520()
{
    ((S6050 *)((char *)this + -0x2f8))->sub_012b5fc0();
}

struct S6050_012b6530 {
    void sub_012b6050();
};

struct S6530_012b6530 {
    void sub_012b6530();
};

// @baa 0x012b6530
void S6530_012b6530::sub_012b6530()
{
    ((S6050_012b6530 *)((char *)this + -0x2f8))->sub_012b6050();
}

struct C_012b6540 { void sub_012b3a30(); void sub_012b6540(int); };

// @baa 0x012b6540
void C_012b6540::sub_012b6540(int) { sub_012b3a30(); }

struct C_012b6af0 { void sub_012b5fc0(); void sub_012b6af0(int); };

// @baa 0x012b6af0
void C_012b6af0::sub_012b6af0(int) { sub_012b5fc0(); }

struct C_012b6b00 { void sub_012b6050(); void sub_012b6b00(int); };

// @baa 0x012b6b00
void C_012b6b00::sub_012b6b00(int) { sub_012b6050(); }

int sub_0053dfa0(...);
int sub_012b60e0(void);
// @baa 0x012b7360
undefined4 UUnrealEdEngine::sub_012b7360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012b60e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006311e0(...);
extern char g_01e3f3dc;
struct T { char pad[0x124]; T(const T&); };

inline void* operator new(unsigned int, T* p) { return p; }

inline void operator delete(void*, T*) {}

struct A {
    T* Data; int ArrayNum; int ArrayMax;
    void sub_0068b9d0(int);
    T& operator()(int i) {
        if (!(i >= 0 && (i < ArrayNum || (i == 0 && ArrayNum == 0))))
            sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h", 0x236, &g_01e3f3dc);
        T* d = Data;
        return d[i];
    }
    T* GetData() { return Data; }
    void sub_012b87b0(A& Other);
};

// @baa 0x012b87b0
void A::sub_012b87b0(A& Other)
{
    if (this != &Other) {
        if (Other.ArrayNum > 0) {
            sub_0068b9d0(Other.ArrayNum);
            for (int i = 0; i < Other.ArrayNum; i++) {
                new(GetData() + i) T(Other(i));
            }
            ArrayNum = Other.ArrayNum;
        } else {
            sub_0068b9d0(0);
        }
    }
}

struct C_012b89e0 {
    undefined4 sub_012b89e0(byte);
};

int sub_0068d660(void);
// @baa 0x012b89e0
undefined4 C_012b89e0::sub_012b89e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068d660();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012b8a00 { void sub_012b7d10(); void sub_012b8a00(int); };

// @baa 0x012b8a00
void C_012b8a00::sub_012b8a00(int) { sub_012b7d10(); }

struct C_012b8a10 { void sub_012b7f20(); void sub_012b8a10(int); };

// @baa 0x012b8a10
void C_012b8a10::sub_012b8a10(int) { sub_012b7f20(); }

struct C_012b8a20 { void sub_012b81b0(); void sub_012b8a20(int); };

// @baa 0x012b8a20
void C_012b8a20::sub_012b8a20(int) { sub_012b81b0(); }

struct C_012b8a30 { void sub_012b8440(); void sub_012b8a30(int); };

// @baa 0x012b8a30
void C_012b8a30::sub_012b8a30(int) { sub_012b8440(); }

// @baa 0x012be1e0
IMPLEMENT_CLASS_AT(UCascadeOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 13);

// @baa 0x012be5e0

void __stdcall sub_012b7380(INT A, INT B);
// @baa 0x012b9700
void __stdcall sub_012b9700(INT Value)
{
    sub_012b7380(Value, 0);
}

// @baa 0x012a09c0

// @baa 0x012a0af0
bool UCascadeOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012a0b30

// @baa 0x012a0c40
int UCascadePreviewComponent::vf_000(void) { return 1; }

// @baa 0x012a0c50
bool UCascadePreviewComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012a0c90

// @baa 0x012a0da0
int UCascadeParticleSystemComponent::vf_000(void) { return 1; }

// @baa 0x012a0db0
bool UCascadeParticleSystemComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_0222452c[];
struct C_012a0ef0 { C_012a0ef0* sub_012a0ef0(void); };

// @baa 0x012a0ef0
C_012a0ef0* C_012a0ef0::sub_012a0ef0(void) { *(int*)((char*)this + 0) = (int)g_0222452c; return this; }

// @baa 0x012a0f50
void __stdcall sub_012a0f50(int a0) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_012a1040;
};

struct C_012a1040 {
    void sub_012a1040(wxCommandEvent *);
};

// @baa 0x012a1040
void C_012a1040::sub_012a1040(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x314) + 0x300) = (uint)bVar1;
  return;
}
