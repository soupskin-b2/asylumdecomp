// UnrealEd_1490000.cpp: 108 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_0148c3f0();
// @baa 0x01497390
void sub_01497390(void) { sub_0148c3f0(); }

void sub_0148f780();
// @baa 0x014973a0
void sub_014973a0(void) { sub_0148f780(); }

struct C {
    int sub_014973b0();
};

int sub_014867e0(void);
// @baa 0x014973b0
int C::sub_014973b0(void)
{
    int param_1 = (int)this;

  sub_014867e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01497880 {
    undefined4 sub_01497880(byte);
};

int sub_0053dfa0(...);
int sub_0148fbd0(void);
// @baa 0x01497880
undefined4 C_01497880::sub_01497880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0148fbd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01497960
void sub_01497960(void) { sub_0148f780(); }

struct C_014991a0 {
    undefined4 sub_014991a0(byte);
};

int sub_01157000(void);
// @baa 0x014991a0
undefined4 C_014991a0::sub_014991a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01157000();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014991c0 {
    int sub_014991c0();
};

// @baa 0x014991c0
int C_014991c0::sub_014991c0(void)
{
    int param_1 = (int)this;

  sub_014867e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01497640();
// @baa 0x014991e0
void sub_014991e0(void) { sub_01497640(); }

// @baa 0x014991f0
void sub_014991f0(void) { sub_0148f780(); }

int sub_01499200(void);
// @baa 0x01499490
undefined4 UTexture2D::sub_01499490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01499200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_014992a0(...);
// @baa 0x014994b0
void sub_014994b0(int param_1, int param_2, undefined4 param_3)
{
  sub_014992a0(param_1,param_2,(param_2 - param_1) / 0x1c,param_3);
  return;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0149abd0
void sub_0149abd0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x0149abf0
int sub_0149abf0(int a0, int a1) { return a1; }

// @baa 0x0149b240
int __stdcall sub_0149b240(int a0, int a1) { return 0; }

// @baa 0x0149b260
int UUIPreviewString::vf_10c(void) { return *(int*)((char*)this + 48); }

// @baa 0x0149b270
undefined4 UUIPreviewString::vf_110(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = *(undefined4 *)(param_1 + 0x38);
  return 1;
}

struct C_0149b2e0 {
    undefined4 sub_0149b2e0();
    int sub_00d77ec0();
    int sub_00d77de0();
};

// @baa 0x0149b2e0
undefined4 C_0149b2e0::sub_0149b2e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0149b2e0 *)((*(char **)((char *)this + 0x290))))->sub_00d77ec0();
  if (iVar1 != 0) {
    iVar1 = ((C_0149b2e0 *)((*(char **)((char *)this + 0x290))))->sub_00d77de0();
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0x50) == 0)) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x0149b430
int sub_0149b430(void) { return 0; }

int sub_01408290(void);
extern undefined * g_022b1268;
// @baa 0x0149b460
undefined4 * UTexture2D::sub_0149b460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01408290();
  *param_1 = (undefined4)(&g_022b1268);
  return param_1;
}

void sub_01406600();
// @baa 0x0149b480
void sub_0149b480(void) { sub_01406600(); }

// @baa 0x0149b490
void __stdcall sub_0149b490(int a0, int a1) {  }

struct C_0149b4a0 {
    void sub_0149b4a0(uint, uint);
};

// @baa 0x0149b4a0
void C_0149b4a0::sub_0149b4a0(uint param_2, uint param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | param_2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_3;
  return;
}

extern char g_026dd948[];
// @baa 0x0149b500
int sub_0149b500(void) { return (int)g_026dd948; }

extern char g_022aa714[];
// @baa 0x0149b510
int sub_0149b510(void) { return (int)g_022aa714; }

extern char g_026dd960[];
// @baa 0x0149b520
int sub_0149b520(void) { return (int)g_026dd960; }

extern char g_026dd9dc[];
// @baa 0x0149b5a0
int sub_0149b5a0(void) { return (int)g_026dd9dc; }

extern char g_022aabe4[];
// @baa 0x0149b5b0
int sub_0149b5b0(void) { return (int)g_022aabe4; }

extern char g_026dd9f4[];
// @baa 0x0149b5c0
int sub_0149b5c0(void) { return (int)g_026dd9f4; }

class wxNotifyEvent;
class wxNotifyEvent {
    public:
    public: __declspec(dllimport) void Allow();
    public: __declspec(dllimport) void Veto();
    friend struct C_0149b7f0;
};

struct C_0149b7f0 {
    void sub_0149b7f0(wxNotifyEvent *);
};

// @baa 0x0149b7f0
void C_0149b7f0::sub_0149b7f0(wxNotifyEvent * param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x264) == 0) {
    *(undefined4 *)(param_1 + 0x264) = 1;
    ((wxNotifyEvent *)(param_2))->wxNotifyEvent::Allow();
    return;
  }
  ((wxNotifyEvent *)(param_2))->wxNotifyEvent::Veto();
  return;
}

extern char g_026ddac4[];
// @baa 0x0149b860
int sub_0149b860(void) { return (int)g_026ddac4; }

// @baa 0x0149b970
void __stdcall sub_0149b970(int a0, int a1) {  }

extern char g_026ddadc[];
// @baa 0x0149b980
int sub_0149b980(void) { return (int)g_026ddadc; }

extern char g_025e93ec[];
// @baa 0x0149b990
int sub_0149b990(void) { return (int)g_025e93ec; }

extern char g_026ddaf4[];
// @baa 0x0149b9a0
int sub_0149b9a0(void) { return (int)g_026ddaf4; }

class wxPanel;
class wxPanel {
    public:
    public: __declspec(dllimport) wxPanel();
    friend struct C_0149b9b0;
};

struct C_0149b9b0 {
    wxPanel * sub_0149b9b0();
};

extern undefined * g_022b1668;
// @baa 0x0149b9b0
wxPanel * C_0149b9b0::sub_0149b9b0(void)
{
    wxPanel * param_1 = (wxPanel *)this;

  ((wxPanel *)(param_1))->wxPanel::wxPanel();
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined ***)param_1 = &g_022b1668;
  return param_1;
}

extern char g_026ddbd8[];
// @baa 0x0149ba00
int sub_0149ba00(void) { return (int)g_026ddbd8; }

extern char g_026ddd14[];
// @baa 0x0149bed0
int sub_0149bed0(void) { return (int)g_026ddd14; }

extern char g_026dde04[];
// @baa 0x0149c4a0
int sub_0149c4a0(void) { return (int)g_026dde04; }

// @baa 0x0149c4c0
void __stdcall sub_0149c4c0(int a0, int a1) {  }

// @baa 0x0149c4d0
int __stdcall sub_0149c4d0(int a0, int a1, int a2, int a3) { return a2; }

struct C_0149c4e0 { int sub_0149c4e0(void); };

// @baa 0x0149c4e0
int C_0149c4e0::sub_0149c4e0(void) { return *(int*)((char*)this + 4); }

struct C_0149c4f0 { int sub_0149c4f0(void); };

// @baa 0x0149c4f0
int C_0149c4f0::sub_0149c4f0(void) { return *(int*)((char*)this + 4); }

struct C_0149c500 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0149c500(INT Index);
};

// @baa 0x0149c500
UBOOL C_0149c500::sub_0149c500(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0149c520 { int sub_0149c520(void); };

// @baa 0x0149c520
int C_0149c520::sub_0149c520(void) { return *(int*)((char*)this + 4); }

struct C_0149c530 { int sub_0149c530(void); };

// @baa 0x0149c530
int C_0149c530::sub_0149c530(void) { return *(int*)((char*)this + 4); }

struct C_0149c540 { int sub_0149c540(void); };

// @baa 0x0149c540
int C_0149c540::sub_0149c540(void) { return *(int*)((char*)this + 4); }

struct C_0149c550 { int sub_0149c550(void); };

// @baa 0x0149c550
int C_0149c550::sub_0149c550(void) { return *(int*)((char*)this + 4); }

struct C_0149c560 { int sub_0149c560(void); };

// @baa 0x0149c560
int C_0149c560::sub_0149c560(void) { return *(int*)((char*)this + 4); }

struct C_0149c570 { int sub_0149c570(void); };

// @baa 0x0149c570
int C_0149c570::sub_0149c570(void) { return *(int*)((char*)this + 4); }

struct C_0149c580 { int sub_0149c580(void); };

// @baa 0x0149c580
int C_0149c580::sub_0149c580(void) { return *(int*)((char*)this + 4); }

struct C_0149c5c0 { int a, b; C_0149c5c0(int, int); };

// @baa 0x0149c5c0
C_0149c5c0::C_0149c5c0(int x, int y) : a(x), b(y) {}

struct C_0149c5e0 { int a, b; C_0149c5e0(int, int); };

// @baa 0x0149c5e0
C_0149c5e0::C_0149c5e0(int x, int y) : a(x), b(y) {}

struct C_0149c600 { int a, b; C_0149c600(int, int); };

// @baa 0x0149c600
C_0149c600::C_0149c600(int x, int y) : a(x), b(y) {}

struct C_0149c620 { int a, b; C_0149c620(int, int); };

// @baa 0x0149c620
C_0149c620::C_0149c620(int x, int y) : a(x), b(y) {}

struct C_0149c640 { int a, b; C_0149c640(int, int); };

// @baa 0x0149c640
C_0149c640::C_0149c640(int x, int y) : a(x), b(y) {}

// @baa 0x0149c660
int sub_0149c660(int a0) { return *(int*)a0; }

// @baa 0x0149c670
bool sub_0149c670(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0149c680 { int a, b; C_0149c680(const C_0149c680 &); };

// @baa 0x0149c680
C_0149c680::C_0149c680(const C_0149c680 &o) : a(o.a), b(o.b) {}

// @baa 0x0149c6c0
int sub_0149c6c0(int a0) { return *(int*)a0; }

// @baa 0x0149c6d0
bool sub_0149c6d0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0149c700 {
    void sub_0149c700(undefined4 *);
};

// @baa 0x0149c700
void C_0149c700::sub_0149c700(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0149c720
int sub_0149c720(int a0) { return *(int*)a0; }

// @baa 0x0149c730
int sub_0149c730(int a0) { return *(int*)a0; }

// @baa 0x0149c740
bool sub_0149c740(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0149c790 {
    void sub_0149c790(undefined4 *);
};

// @baa 0x0149c790
void C_0149c790::sub_0149c790(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0149c7b0
int sub_0149c7b0(int a0) { return *(int*)a0; }

// @baa 0x0149c7c0
bool sub_0149c7c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0149c7d0 {
    void sub_0149c7d0(undefined4 *);
};

// @baa 0x0149c7d0
void C_0149c7d0::sub_0149c7d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0149c7f0
bool sub_0149c7f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0149c800 {
    void sub_0149c800(undefined4 *);
};

// @baa 0x0149c800
void C_0149c800::sub_0149c800(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

void sub_00572b30();
// @baa 0x0149c820
void sub_0149c820(void) { sub_00572b30(); }

struct C_0149c830 { int a, b; C_0149c830(const C_0149c830 &); };

// @baa 0x0149c830
C_0149c830::C_0149c830(const C_0149c830 &o) : a(o.a), b(o.b) {}

struct C_0149c850 { int a, b; C_0149c850(const C_0149c850 &); };

// @baa 0x0149c850
C_0149c850::C_0149c850(const C_0149c850 &o) : a(o.a), b(o.b) {}

// @baa 0x0149c8b0
void sub_0149c8b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0149c8d0
void sub_0149c8d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct A_0149c920 { virtual void sub_0149e900(); char pad[532]; };

struct B_0149c920 { virtual void sub_0149e900(); };

struct C_0149c920 : A_0149c920, B_0149c920 { virtual void sub_0149e900(); C_0149c920(); };

C_0149c920::C_0149c920() {}

// @baa 0x0149c920
void C_0149c920::sub_0149e900() {}

// @baa 0x0149c930
void sub_0149c930(void) {  }

// @baa 0x0149c940
void sub_0149c940(void) {  }

// @baa 0x0149c950
float10 sub_0149c950(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0149c970
undefined2 sub_0149c970(void)
{
  return 0x73;
}

class wxRect;
class wxRect {
    public:
    public: __declspec(dllimport) wxRect(int,int,int,int);
    friend struct C_0149c980;
};

struct C_0149c980 {
    wxRect * sub_0149c980();
};

// @baa 0x0149c980
wxRect * C_0149c980::sub_0149c980(void)
{
    wxRect * param_1 = (wxRect *)this;

  ((wxRect *)(param_1))->wxRect::wxRect(*(int *)param_1, *(int *)(param_1 + 4), *(int *)(param_1 + 8), *(int *)(param_1 + 0xc));
  return param_1;
}

// @baa 0x0149c9a0
int sub_0149c9a0(int a0, int a1) { return a1; }

struct C_0149c9b0 { C_0149c9b0* sub_0149c9b0(void); };

// @baa 0x0149c9b0
C_0149c9b0* C_0149c9b0::sub_0149c9b0(void) { return this; }

// @baa 0x0149c9c0
int sub_0149c9c0(int a0, int a1) { return a1; }

extern char g_02019ce8[];
// @baa 0x0149c9d0
int sub_0149c9d0(void) { return (int)g_02019ce8; }

struct C_0149c9e0 {
    bool sub_0149c9e0();
};

// @baa 0x0149c9e0
bool C_0149c9e0::sub_0149c9e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc4) != 0;
}

// @baa 0x0149c9f0
int sub_0149c9f0(int a0, int a1) { return a1; }

// @baa 0x0149ca00
int sub_0149ca00(int a0, int a1) { return a1; }

// @baa 0x0149ca10
int sub_0149ca10(int a0, int a1) { return a1; }

// @baa 0x0149ca20
int sub_0149ca20(int a0, int a1) { return a1; }

struct C_0149ca30 { C_0149ca30* sub_0149ca30(int a0); };

// @baa 0x0149ca30
C_0149ca30* C_0149ca30::sub_0149ca30(int a0) { return this; }

struct C_0149ca40 { C_0149ca40* sub_0149ca40(int a0); };

// @baa 0x0149ca40
C_0149ca40* C_0149ca40::sub_0149ca40(int a0) { return this; }

struct C_0149ca50 { C_0149ca50* sub_0149ca50(int a0); };

// @baa 0x0149ca50
C_0149ca50* C_0149ca50::sub_0149ca50(int a0) { return this; }

struct C_0149ca60 { C_0149ca60* sub_0149ca60(int a0); };

// @baa 0x0149ca60
C_0149ca60* C_0149ca60::sub_0149ca60(int a0) { return this; }

struct C_0149ca70 { C_0149ca70* sub_0149ca70(int a0); };

// @baa 0x0149ca70
C_0149ca70* C_0149ca70::sub_0149ca70(int a0) { return this; }

struct C_0149ca80 { int sub_0149ca80(void); };

// @baa 0x0149ca80
int C_0149ca80::sub_0149ca80(void) { return *(int*)((char*)this + 0); }

struct C_0149ca90 { int sub_0149ca90(void); };

// @baa 0x0149ca90
int C_0149ca90::sub_0149ca90(void) { return *(int*)((char*)this + 0); }

struct C_0149caa0 { int sub_0149caa0(void); };

// @baa 0x0149caa0
int C_0149caa0::sub_0149caa0(void) { return *(int*)((char*)this + 0); }

struct C_0149cab0 { int sub_0149cab0(void); };

// @baa 0x0149cab0
int C_0149cab0::sub_0149cab0(void) { return *(int*)((char*)this + 0); }

struct C_0149cac0 { int sub_0149cac0(void); };

// @baa 0x0149cac0
int C_0149cac0::sub_0149cac0(void) { return *(int*)((char*)this + 0); }

struct C_0149cad0 { int sub_0149cad0(void); };

// @baa 0x0149cad0
int C_0149cad0::sub_0149cad0(void) { return *(int*)((char*)this + 20); }

struct C_0149cae0 {
    int sub_0149cae0(int);
};

// @baa 0x0149cae0
int C_0149cae0::sub_0149cae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005c7a20(void);
extern undefined * g_022b1ca0;
// @baa 0x0149caf0
undefined4 * UObject::sub_0149caf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b1ca0);
  return param_1;
}

// @baa 0x0149cb10
IMPLEMENT_CLASS_AT(UUIPreviewString, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 30);

// @baa 0x0149cb70
// @baa 0x0149cd30
IMPLEMENT_CLASS_AT(UUISceneManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 27);

// @baa 0x0149ce60
bool UUISceneManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

class wxMenuBar
{
public:
    __declspec(dllimport) virtual ~wxMenuBar();
};

extern void* g_022b0c08[];
struct C_0149c4b0 : public wxMenuBar
{
    void sub_0149c4b0();
};

// @baa 0x0149c4b0
void C_0149c4b0::sub_0149c4b0()
{
    *(void**)this = g_022b0c08;
    ((wxMenuBar*)this)->wxMenuBar::~wxMenuBar();
}
