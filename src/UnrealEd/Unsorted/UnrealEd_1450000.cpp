// UnrealEd_1450000.cpp (part 1 of 2): 50 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01450240
IMPLEMENT_CLASS_AT(ULensFlareEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 16);

// @baa 0x01450370
bool ULensFlareEditorOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014503b0
IMPLEMENT_CLASS_AT(ULensFlarePreviewComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 17);

// @baa 0x014504c0
int ULensFlarePreviewComponent::vf_000(void) { return 1; }

// @baa 0x014504d0
bool ULensFlarePreviewComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01450510
IMPLEMENT_CLASS_AT(ULensFlareEditorPropertyWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 18);

// @baa 0x01450620
int ULensFlareEditorPropertyWrapper::vf_000(void) { return 1; }

// @baa 0x01450630
bool ULensFlareEditorPropertyWrapper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_0229cdac[];
struct C { C* sub_01450670(void); };

// @baa 0x01450670
C* C::sub_01450670(void) { *(int*)((char*)this + 0) = (int)g_0229cdac; return this; }

// @baa 0x014506c0
void __stdcall sub_014506c0(int a0) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_014506d0;
};

struct C_014506d0 {
    void sub_014506d0(wxCommandEvent *);
};

// @baa 0x014506d0
void C_014506d0::sub_014506d0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x310) + 0x300) = (uint)bVar1;
  return;
}

struct C_014506f0 {
    undefined4 * sub_014506f0(byte);
};

int sub_0053dfa0(...);
int sub_00f80980(void);
extern undefined4 g_0229bd5c;
extern undefined * g_0229bd60;
// @baa 0x014506f0
undefined4 * C_014506f0::sub_014506f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0229bd60);
  param_1[1] = (undefined4)(&g_0229bd5c);
  sub_00f80980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01450ba0 {
    undefined4 sub_01450ba0(byte);
};

int sub_0144e750(void);
// @baa 0x01450ba0
undefined4 C_01450ba0::sub_01450ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0144e750();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01451060 { int a, b, c; C_01451060(); };

// @baa 0x01451060
C_01451060::C_01451060() : a(0), b(0), c(0) {}

struct C_01451070 { int a, b, c; C_01451070(); };

// @baa 0x01451070
C_01451070::C_01451070() : a(0), b(0), c(0) {}

struct C_01451080 { int a, b, c; C_01451080(); };

// @baa 0x01451080
C_01451080::C_01451080() : a(0), b(0), c(0) {}

struct C_01451230 { int sub_01451230(void); };

// @baa 0x01451230
int C_01451230::sub_01451230(void) { return *(int*)((char*)this + 0); }

struct C_01451240 { int sub_01451240(void); };

// @baa 0x01451240
int C_01451240::sub_01451240(void) { return *(int*)((char*)this + 0); }

struct C_01451250 { int sub_01451250(void); };

// @baa 0x01451250
int C_01451250::sub_01451250(void) { return *(int*)((char*)this + 0); }

struct C_01451260 {
    int sub_01451260(int);
};

// @baa 0x01451260
int C_01451260::sub_01451260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_01451270 { int sub_01451270(void); };

// @baa 0x01451270
int C_01451270::sub_01451270(void) { return *(int*)((char*)this + 0); }

// @baa 0x01451280
int sub_01451280(int a0) { return a0; }

struct C_01451290 {
    void sub_01451290(undefined4 *);
};

// @baa 0x01451290
void C_01451290::sub_01451290(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x014513a0
void sub_014513a0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

int sub_00c38ac0(void);
// @baa 0x014513d0
undefined4 UObject::sub_014513d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x014513f0
undefined4 UObject::sub_014513f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01451410
undefined4 UObject::sub_01451410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01452070 {
    undefined4 sub_01452070(byte);
};

int sub_01450c20(void);
// @baa 0x01452070
undefined4 C_01452070::sub_01452070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01450c20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

typedef uint size_t;

struct C_014527f0 {
    int sub_014527f0(int);
    int sub_014510c0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x014527f0
int C_014527f0::sub_014527f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_014527f0 *)(this))->sub_014510c0(param_2);
  sub_01a37612((void *)(iVar1 * 0x140 + *param_1),0,param_2 * 0x140);
  return iVar1;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01452830(INT Index);
};

// @baa 0x01452830
QWORD* S::sub_01452830(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[64]; };

struct S_01452880 {
    TArray<E> Items; // 0x00
    E* sub_01452880(INT Index);
};

// @baa 0x01452880
E* S_01452880::sub_01452880(INT Index)
{
    return &Items(Index);
}

struct S_014528d0 {
    TArray<E> Items; // 0x00
    const E* sub_014528d0(INT Index) const;
};

// @baa 0x014528d0
const E* S_014528d0::sub_014528d0(INT Index) const
{
    return &Items(Index);
}

struct C_014529b0 {
    int sub_014529b0(int);
};

// @baa 0x014529b0
int C_014529b0::sub_014529b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 8;
}

// @baa 0x014529c0
void __stdcall sub_014529c0(int a0, int a1) {  }

struct C_01452a00 {
    int sub_01452a00(int);
};

// @baa 0x01452a00
int C_01452a00::sub_01452a00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

int sub_005c7a20(void);
extern undefined * g_0229d1c8;
// @baa 0x01452cf0
undefined4 * UObject::sub_01452cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0229d1c8);
  return param_1;
}

// @baa 0x01452d10
// @baa 0x01452d80
struct A_01455d90 { virtual void sub_01460630(); char pad[412]; };

struct B_01455d90 { virtual void sub_01460630(); };

struct C_01455d90 : A_01455d90, B_01455d90 { virtual void sub_01460630(); C_01455d90(); };

C_01455d90::C_01455d90() {}

// @baa 0x01455d90
void C_01455d90::sub_01460630() {}

struct A_01455da0 { virtual void sub_01460630(); char pad[416]; };

struct B_01455da0 { virtual void sub_01460630(); };

struct C_01455da0 : A_01455da0, B_01455da0 { virtual void sub_01460630(); C_01455da0(); };

C_01455da0::C_01455da0() {}

// @baa 0x01455da0
void C_01455da0::sub_01460630() {}

struct C_01456420 {
    undefined4 sub_01456420(byte);
};

int sub_01456340(void);
// @baa 0x01456420
undefined4 C_01456420::sub_01456420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01456340();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01456620 { void sub_01456440(); void sub_01456620(int); };

// @baa 0x01456620
void C_01456620::sub_01456620(int) { sub_01456440(); }

struct M_01458ef0 { void sub_0040fcc0(); };

struct C_01458ef0 { char pad[4]; M_01458ef0 m; void sub_01458ef0(); };

// @baa 0x01458ef0
void C_01458ef0::sub_01458ef0() { m.sub_0040fcc0(); }

struct C_view {
    int sub_00547da0(int);
};

// @baa 0x0145d840
int URFMODSound::sub_0145d840(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  ((C_view *)(((char *)this + 0x10)))->sub_00547da0(param_2 + 0x10);
  ((C_view *)(((char *)this + 0x1c)))->sub_00547da0(param_2 + 0x1c);
  ((C_view *)(((char *)this + 0x28)))->sub_00547da0(param_2 + 0x28);
  return param_1;
}

// @baa 0x0145e900
void UObject::sub_0145e900(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0145e910 { void* Data; int Num; int Max; void sub_0145e910(); };

// @baa 0x0145e910
void C_0145e910::sub_0145e910() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053df70(...);
// @baa 0x0145e970
void UObject::sub_0145e970(int param_2)
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

struct C_0145eb60 { int sub_0145eb60(void); };

// @baa 0x0145eb60
int C_0145eb60::sub_0145eb60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0145ebf0 {
    int sub_0145ebf0(int);
};

// @baa 0x0145ebf0
int C_0145ebf0::sub_0145ebf0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x4c + *param_1;
}

struct C_0145ed90 {
    undefined4 sub_0145ed90(byte);
};

int sub_01452fd0(void);
// @baa 0x0145ed90
undefined4 C_0145ed90::sub_0145ed90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01452fd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
