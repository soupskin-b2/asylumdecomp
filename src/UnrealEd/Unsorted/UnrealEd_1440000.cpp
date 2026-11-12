// UnrealEd_1440000.cpp (part 1 of 3): 129 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_01445090(); void sub_014471e0(int); };

// @baa 0x014471e0
void C::sub_014471e0(int) { sub_01445090(); }

void sub_01442700();
// @baa 0x01447650
void sub_01447650(void) { sub_01442700(); }

struct A_014483d0 { virtual void sub_014484a0(); char pad[336]; };

struct B_014483d0 { virtual void sub_014484a0(); };

struct C_014483d0 : A_014483d0, B_014483d0 { virtual void sub_014484a0(); C_014483d0(); };

C_014483d0::C_014483d0() {}

// @baa 0x014483d0
void C_014483d0::sub_014484a0() {}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014483e0
void sub_014483e0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_014484a0 {
    undefined4 sub_014484a0(byte);
};

int sub_0053dfa0(...);
int sub_01448420(void);
// @baa 0x014484a0
undefined4 C_014484a0::sub_014484a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01448420();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01449d10 {
    int sub_01449d10();
};

int sub_01439c20(void);
// @baa 0x01449d10
int C_01449d10::sub_01449d10(void)
{
    int param_1 = (int)this;

  sub_01439c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_006d6440(void);
extern undefined * g_02290620;
// @baa 0x01449ec0
undefined4 * UMaterial::sub_01449ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006d6440();
  *param_1 = (undefined4)(&g_02290620);
  return param_1;
}

struct A_01449fc0 { virtual void sub_0144a270(); char pad[180]; };

struct B_01449fc0 { virtual void sub_0144a270(); };

struct C_01449fc0 : A_01449fc0, B_01449fc0 { virtual void sub_0144a270(); C_01449fc0(); };

C_01449fc0::C_01449fc0() {}

// @baa 0x01449fc0
void C_01449fc0::sub_0144a270() {}

// @baa 0x0144a2b0
IMPLEMENT_CLASS_AT(UPreviewMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 341);

// @baa 0x0144a310
int sub_01444a80(void);
// @baa 0x0144a340
undefined4 UUnrealEdEngine::sub_0144a340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01444a80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0144a470
void sub_0144a470(void) { sub_01442700(); }

struct C_0144a520 { void sub_01448890(); void sub_0144a520(int); };

// @baa 0x0144a520
void C_0144a520::sub_0144a520(int) { sub_01448890(); }

struct A_0144a5a0 { virtual void sub_0144a360(); char pad[456]; };

struct B_0144a5a0 { virtual void sub_0144a360(); };

struct C_0144a5a0 : A_0144a5a0, B_0144a5a0 { virtual void sub_0144a360(); C_0144a5a0(); };

C_0144a5a0::C_0144a5a0() {}

// @baa 0x0144a5a0
void C_0144a5a0::sub_0144a360() {}

struct A_0144b3d0 { virtual void sub_0144b3e0(); char pad[332]; };

struct B_0144b3d0 { virtual void sub_0144b3e0(); };

struct C_0144b3d0 : A_0144b3d0, B_0144b3d0 { virtual void sub_0144b3e0(); C_0144b3d0(); };

C_0144b3d0::C_0144b3d0() {}

// @baa 0x0144b3d0
void C_0144b3d0::sub_0144b3e0() {}

struct C_0144b400 {
    undefined4 sub_0144b400(byte);
};

int sub_0144a480(void);
// @baa 0x0144b400
undefined4 C_0144b400::sub_0144b400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0144a480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01427880(void);
int sub_0144a5d0(...);
extern undefined4 g_026dac94;
// @baa 0x0144bfe0
int sub_0144bfe0(void)
{
  if (g_026dac94 == 0) {
    g_026dac94 = sub_0144a5d0(L"UnrealEd");
    sub_01427880();
  }
  return g_026dac94;
}

extern char g_025e9300[];
// @baa 0x0144d740
int sub_0144d740(void) { return (int)g_025e9300; }

extern char g_026db668[];
// @baa 0x0144d750
int sub_0144d750(void) { return (int)g_026db668; }

class wxDialogBase;
class wxEvent;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void EndDialog(int);
    friend struct C_0144d770;
};

class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C_0144d770;
};

struct C_0144d770 {
    void sub_0144d770(wxEvent *);
};

// @baa 0x0144d770
void C_0144d770::sub_0144d770(wxEvent * param_2)
{
    wxDialogBase * param_1 = (wxDialogBase *)this;

  int iVar1;
  
  iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
  ((wxDialogBase *)(param_1))->wxDialogBase::EndDialog(iVar1);
  return;
}

extern char g_025e9308[];
// @baa 0x0144d790
int sub_0144d790(void) { return (int)g_025e9308; }

extern char g_026db6d0[];
// @baa 0x0144d7a0
int sub_0144d7a0(void) { return (int)g_026db6d0; }

extern char g_02292208[];
// @baa 0x0144d880
int sub_0144d880(void) { return (int)g_02292208; }

extern char g_026db710[];
// @baa 0x0144d890
int sub_0144d890(void) { return (int)g_026db710; }

extern char g_025e9310[];
// @baa 0x0144d930
int sub_0144d930(void) { return (int)g_025e9310; }

extern char g_026db750[];
// @baa 0x0144d940
int sub_0144d940(void) { return (int)g_026db750; }

extern char g_025e9318[];
// @baa 0x0144d950
int sub_0144d950(void) { return (int)g_025e9318; }

extern char g_026db8f8[];
// @baa 0x0144d960
int sub_0144d960(void) { return (int)g_026db8f8; }

extern char g_02292870[];
// @baa 0x0144d990
int sub_0144d990(void) { return (int)g_02292870; }

extern char g_026db958[];
// @baa 0x0144d9a0
int sub_0144d9a0(void) { return (int)g_026db958; }

extern char g_02292c30[];
// @baa 0x0144dbc0
int sub_0144dbc0(void) { return (int)g_02292c30; }

extern char g_026dba4c[];
// @baa 0x0144dbd0
int sub_0144dbd0(void) { return (int)g_026dba4c; }

extern char g_025e9320[];
// @baa 0x0144dbe0
int sub_0144dbe0(void) { return (int)g_025e9320; }

extern char g_026dbb54[];
// @baa 0x0144dbf0
int sub_0144dbf0(void) { return (int)g_026dbb54; }

extern char g_025e9328[];
// @baa 0x0144dd30
int sub_0144dd30(void) { return (int)g_025e9328; }

extern char g_026dbb94[];
// @baa 0x0144dd40
int sub_0144dd40(void) { return (int)g_026dbb94; }

extern char g_025e9330[];
// @baa 0x0144dd50
int sub_0144dd50(void) { return (int)g_025e9330; }

extern char g_026dbbac[];
// @baa 0x0144dd60
int sub_0144dd60(void) { return (int)g_026dbbac; }

extern char g_025e9338[];
// @baa 0x0144dd70
int sub_0144dd70(void) { return (int)g_025e9338; }

extern char g_026dbbec[];
// @baa 0x0144dd80
int sub_0144dd80(void) { return (int)g_026dbbec; }

extern char g_025e9340[];
// @baa 0x0144de90
int sub_0144de90(void) { return (int)g_025e9340; }

extern char g_026dbc18[];
// @baa 0x0144dea0
int sub_0144dea0(void) { return (int)g_026dbc18; }

extern char g_025e9348[];
// @baa 0x0144dfa0
int sub_0144dfa0(void) { return (int)g_025e9348; }

extern char g_026dbc58[];
// @baa 0x0144dfb0
int sub_0144dfb0(void) { return (int)g_026dbc58; }

struct C_0144dfc0 { int sub_0144dfc0(void); };

// @baa 0x0144dfc0
int C_0144dfc0::sub_0144dfc0(void) { return *(int*)((char*)this + 4); }

struct C_0144dfd0 { int sub_0144dfd0(void); };

// @baa 0x0144dfd0
int C_0144dfd0::sub_0144dfd0(void) { return *(int*)((char*)this + 8); }

struct C_0144e010 {
    void sub_0144e010();
};

// @baa 0x0144e010
void C_0144e010::sub_0144e010(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

extern char g_02293e40[];
// @baa 0x0144e060
int sub_0144e060(void) { return (int)g_02293e40; }

extern char g_026dbc98[];
// @baa 0x0144e070
int sub_0144e070(void) { return (int)g_026dbc98; }

class wxListEvent;
class wxListEvent {
    public:
    public: __declspec(dllimport) long GetIndex() const;
    friend struct C_0144e080;
};

struct C_0144e080 {
    void sub_0144e080(wxListEvent *);
};

// @baa 0x0144e080
void C_0144e080::sub_0144e080(wxListEvent * param_2)
{
    int param_1 = (int)this;

  long lVar1;
  
  lVar1 = ((wxListEvent *)(param_2))->wxListEvent::GetIndex();
  *(long *)(param_1 + 0x1b8) = lVar1;
  return;
}

extern char g_025e9350[];
// @baa 0x0144e110
int sub_0144e110(void) { return (int)g_025e9350; }

extern char g_026dbd28[];
// @baa 0x0144e120
int sub_0144e120(void) { return (int)g_026dbd28; }

extern char g_025e9358[];
// @baa 0x0144e130
int sub_0144e130(void) { return (int)g_025e9358; }

extern char g_026dbd68[];
// @baa 0x0144e140
int sub_0144e140(void) { return (int)g_026dbd68; }

// @baa 0x0144e190
void __stdcall sub_0144e190(int a0) {  }

struct C_0144e1a0 {
    undefined1 sub_0144e1a0();
};

// @baa 0x0144e1a0
undefined1 C_0144e1a0::sub_0144e1a0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x37c);
}

// @baa 0x0144e220
void sub_0144e220(void) {  }

extern char g_025e9360[];
// @baa 0x0144e230
int sub_0144e230(void) { return (int)g_025e9360; }

extern char g_026dbdbc[];
// @baa 0x0144e240
int sub_0144e240(void) { return (int)g_026dbdbc; }

// @baa 0x0144e250
void __stdcall sub_0144e250(int a0) {  }

// @baa 0x0144e260
void sub_0144e260(void) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_0144e300;
};

struct C_0144e300 {
    void sub_0144e300(wxCommandEvent *);
};

// @baa 0x0144e300
void C_0144e300::sub_0144e300(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x350) = (uint)bVar1;
  *(uint *)(*(int *)(param_1 + 0x310) + 0x398) = (uint)bVar1;
  return;
}

// @baa 0x0144e360
void __stdcall sub_0144e360(int a0) {  }

// @baa 0x0144e420
void __stdcall sub_0144e420(int a0) {  }

// @baa 0x0144e430
void __stdcall sub_0144e430(int a0) {  }

// @baa 0x0144e440
void __stdcall sub_0144e440(int a0) {  }

// @baa 0x0144e450
void __stdcall sub_0144e450(int a0) {  }

// @baa 0x0144e5d0
void __stdcall sub_0144e5d0(int a0) {  }

// @baa 0x0144e5e0
void __stdcall sub_0144e5e0(int a0, int a1) {  }

// @baa 0x0144e610
void sub_0144e610(void) {  }

extern char g_022959a0[];
// @baa 0x0144e620
int sub_0144e620(void) { return (int)g_022959a0; }

// @baa 0x0144e630
int sub_0144e630(void) { return 0; }

struct C_0144e640 {
    void sub_0144e640();
};

int sub_00f80980(void);
extern undefined * g_0229bd5c;
extern undefined * g_0229bd60;
// @baa 0x0144e640
void C_0144e640::sub_0144e640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0229bd60);
  param_1[1] = (undefined4)(&g_0229bd5c);
  sub_00f80980();
  return;
}

// @baa 0x0144e680
undefined4 sub_0144e680(int param_1, int param_2)
{
  if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0xffffffff;
}

struct C_0144e710 {
    undefined4 sub_0144e710();
};

// @baa 0x0144e710
undefined4 C_0144e710::sub_0144e710(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x360) + 0xac);
}

// @baa 0x0144e720
int __stdcall sub_0144e720(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }

extern char g_025e9368[];
// @baa 0x0144e730
int sub_0144e730(void) { return (int)g_025e9368; }

extern char g_026dc358[];
// @baa 0x0144e740
int sub_0144e740(void) { return (int)g_026dc358; }

// @baa 0x0144ea90
void __stdcall sub_0144ea90(int a0) {  }

extern char g_025e9370[];
// @baa 0x0144eac0
int sub_0144eac0(void) { return (int)g_025e9370; }

extern char g_026dc460[];
// @baa 0x0144ead0
int sub_0144ead0(void) { return (int)g_026dc460; }

// @baa 0x0144eb00
void sub_0144eb00(void) {  }

struct C_0144eb40 {
    void sub_0144eb40(undefined4);
};

int __stdcall sub_00f90aa0(int);
// @baa 0x0144eb40
void C_0144eb40::sub_0144eb40(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_00f90aa0(param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x378);
  }
  return;
}

// @baa 0x0144ebd0
void __stdcall sub_0144ebd0(int a0, int a1, int a2) {  }

extern char g_025e9378[];
// @baa 0x0144ebe0
int sub_0144ebe0(void) { return (int)g_025e9378; }

extern char g_026dc478[];
// @baa 0x0144ebf0
int sub_0144ebf0(void) { return (int)g_026dc478; }

struct C_0144ec70 { char* sub_0144ec70(void); };

// @baa 0x0144ec70
char* C_0144ec70::sub_0144ec70(void) { return (char*)this + 64; }

struct C_0144ec80 { char* sub_0144ec80(void); };

// @baa 0x0144ec80
char* C_0144ec80::sub_0144ec80(void) { return (char*)this + 76; }

struct C_0144ec90 { char* sub_0144ec90(void); };

// @baa 0x0144ec90
char* C_0144ec90::sub_0144ec90(void) { return (char*)this + 88; }

struct C_0144eca0 { int sub_0144eca0(void); };

// @baa 0x0144eca0
int C_0144eca0::sub_0144eca0(void) { return *(int*)((char*)this + 100); }

struct C_0144ecb0 {
    int sub_0144ecb0();
};

// @baa 0x0144ecb0
int C_0144ecb0::sub_0144ecb0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if ((iVar1 == 4) && (*(int *)(param_1 + 0x68) != 0)) {
    iVar1 = *(int *)(param_1 + 0x68);
  }
  return iVar1;
}

struct C_0144ecd0 { char* sub_0144ecd0(void); };

// @baa 0x0144ecd0
char* C_0144ecd0::sub_0144ecd0(void) { return (char*)this + 116; }

struct C_0144ece0 {
    void sub_0144ece0(int);
};

// @baa 0x0144ece0
void C_0144ece0::sub_0144ece0(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x80) != param_2) {
    *(int *)(param_1 + 0x80) = param_2;
  }
  return;
}

struct C_0144ed00 { int sub_0144ed00(void); };

// @baa 0x0144ed00
int C_0144ed00::sub_0144ed00(void) { return *(int*)((char*)this + 128); }

struct C_0144ed10 { char* sub_0144ed10(void); };

// @baa 0x0144ed10
char* C_0144ed10::sub_0144ed10(void) { return (char*)this + 184; }

struct C_0144ed20 { char* sub_0144ed20(void); };

// @baa 0x0144ed20
char* C_0144ed20::sub_0144ed20(void) { return (char*)this + 196; }

extern char g_025e9380[];
// @baa 0x0144ed30
int sub_0144ed30(void) { return (int)g_025e9380; }

extern char g_026dc4b8[];
// @baa 0x0144ed40
int sub_0144ed40(void) { return (int)g_026dc4b8; }

// @baa 0x0144efe0
int UUnrealEdEngine::sub_0144efe0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0144eff0
int UUnrealEdEngine::sub_0144eff0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0144f000
int UUnrealEdEngine::sub_0144f000(void) { return *(int*)((char*)this + 8); }

// @baa 0x0144f010
int UUnrealEdEngine::sub_0144f010(void) { return *(int*)((char*)this + 4); }

// @baa 0x0144f020
int UUnrealEdEngine::sub_0144f020(void) { return *(int*)((char*)this + 4); }

struct C_0144f030 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0144f030(INT Index);
};

// @baa 0x0144f030
UBOOL C_0144f030::sub_0144f030(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0144f050
int UUnrealEdEngine::sub_0144f050(void) { return *(int*)((char*)this + 4); }

struct C_0144f060 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0144f060* sub_0144f060(INT value);
};

// @baa 0x0144f060
C_0144f060* C_0144f060::sub_0144f060(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0144f080 {
    C_0144f080 *sub_0144f080();
};

// @baa 0x0144f080
C_0144f080 *C_0144f080::sub_0144f080()
{
    ((int *)this)[1]++;
    return this;
}

struct C_0144f090 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0144f090* sub_0144f090(INT value);
};

// @baa 0x0144f090
C_0144f090* C_0144f090::sub_0144f090(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0144f0b0 {
    char pad[4];
    int f4;
    C_0144f0b0& sub_0144f0b0();
};

// @baa 0x0144f0b0
C_0144f0b0& C_0144f0b0::sub_0144f0b0(void)
{
    ++f4;
    return *this;
}

// @baa 0x0144f0f0
int UUnrealEdEngine::sub_0144f0f0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0144f100
int sub_0144f100(int a0) { return *(int*)a0; }

// @baa 0x0144f110
bool sub_0144f110(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0144f120 { int a, b; C_0144f120(int, int); };

// @baa 0x0144f120
C_0144f120::C_0144f120(int x, int y) : a(x), b(y) {}

// @baa 0x0144f170
void sub_0144f170(undefined4 * param_1, undefined4 * param_2)
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

// @baa 0x0144f1a0
void sub_0144f1a0(void) {  }

// @baa 0x0144f1b0
void sub_0144f1b0(void) {  }

// @baa 0x0144f1c0
float10 sub_0144f1c0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0144f1e0
void sub_0144f1e0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x0144f200
undefined2 sub_0144f200(void)
{
  return 0x69;
}

// @baa 0x0144f210
undefined2 sub_0144f210(void)
{
  return 0x73;
}

// @baa 0x0144f250
int sub_0144f250(int a0, int a1) { return a1; }

// @baa 0x0144f260
int sub_0144f260(int a0, int a1) { return a1; }

// @baa 0x0144f270
void sub_0144f270(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158c10[];
// @baa 0x0144f290
int sub_0144f290(void) { return (int)g_02158c10; }

// @baa 0x0144f2a0
int sub_0144f2a0(int a0, int a1) { return a1; }

// @baa 0x0144f2b0
void sub_0144f2b0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0229cd9c;
// @baa 0x0144f460
undefined4 * UUnrealEdEngine::sub_0144f460(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0229cd9c);
  param_1[5] = param_3;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x0144f4a0
void sub_0144f4a0(void) { sub_00c38ac0(); }

struct FLinearColor_ : public FLinearColor
{
    void sub_0053d1d0(const FColor* In);
};

struct Sub_0144eae0_Owner
{
    unsigned char pad[0x3a0];
    FColor Color;

    FLinearColor* sub_0144eae0(FLinearColor* Out);
};

// @baa 0x0144eae0
FLinearColor* Sub_0144eae0_Owner::sub_0144eae0(FLinearColor* Out)
{
    ((FLinearColor_*)Out)->sub_0053d1d0(&Color);
    return Out;
}
