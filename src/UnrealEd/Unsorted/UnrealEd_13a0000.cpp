// UnrealEd_13a0000.cpp (part 1 of 5): 254 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { char* sub_013a2ee0(void); };

// @baa 0x013a2ee0
char* C::sub_013a2ee0(void) { return (char*)this + 416; }

extern char g_025e8fa0[];
// @baa 0x013a2ef0
int sub_013a2ef0(void) { return (int)g_025e8fa0; }

extern char g_026d8dd8[];
// @baa 0x013a2f00
int sub_013a2f00(void) { return (int)g_026d8dd8; }

extern char g_02263d40[];
// @baa 0x013a2f10
int sub_013a2f10(void) { return (int)g_02263d40; }

extern char g_026d8e18[];
// @baa 0x013a2f20
int sub_013a2f20(void) { return (int)g_026d8e18; }

extern char g_02263edc[];
// @baa 0x013a2f60
int sub_013a2f60(void) { return (int)g_02263edc; }

// @baa 0x013a2fa0
void __stdcall sub_013a2fa0(int a0) {  }

class wxBitmap;
class wxDCBase;
class wxBitmap {
    public:
};

class wxDCBase {
    public:
    public: __declspec(dllimport) void DrawBitmap(wxBitmap const &,int,int,bool);
    friend struct C_013a2fb0;
};

struct C_013a2fb0 {
    void sub_013a2fb0(wxDCBase *, int *);
};

// @baa 0x013a2fb0
void C_013a2fb0::sub_013a2fb0(wxDCBase * param_2, int * param_3)
{
    int param_1 = (int)this;
  ((wxDCBase *)(param_2))->wxDCBase::DrawBitmap(*(const wxBitmap *)(*(wxBitmap **)(param_1 + 0x144)), *param_3 + 3, param_3[1] + 3, true);
  return;
}

extern undefined4 g_026d8f84;
extern undefined4 g_026d8f8c;
// @baa 0x013a2fe0
void UUnrealEdEngine::sub_013a2fe0(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    *(undefined **)(param_1 + 0x144) = (undefined *)(&g_026d8f84);
    return;
  }
  *(undefined **)(param_1 + 0x144) = (undefined *)(&g_026d8f8c);
  return;
}

// @baa 0x013a3160
int UUnrealEdEngine::sub_013a3160(void) { return *(int*)((char*)this + 328); }

// @baa 0x013a3200
void __stdcall sub_013a3200(int a0) {  }

extern char g_025e8fa8[];
// @baa 0x013a3210
int sub_013a3210(void) { return (int)g_025e8fa8; }

extern char g_026d8f94[];
// @baa 0x013a3220
int sub_013a3220(void) { return (int)g_026d8f94; }

extern char g_025e8fb0[];
// @baa 0x013a3230
int sub_013a3230(void) { return (int)g_025e8fb0; }

extern char g_026d8fe8[];
// @baa 0x013a3240
int sub_013a3240(void) { return (int)g_026d8fe8; }

extern char g_02264510[];
// @baa 0x013a3290
int sub_013a3290(void) { return (int)g_02264510; }

extern char g_026d9104[];
// @baa 0x013a32a0
int sub_013a32a0(void) { return (int)g_026d9104; }

// @baa 0x013a3390
void UUnrealEdEngine::sub_013a3390(int param_2)
{
    int param_1 = (int)this;

  if (param_2 == *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

// @baa 0x013a33d0
void UUnrealEdEngine::sub_013a33d0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  return;
}

extern char g_02264e94[];
// @baa 0x013a3420
int sub_013a3420(void) { return (int)g_02264e94; }

extern char g_026d93a0[];
// @baa 0x013a3430
int sub_013a3430(void) { return (int)g_026d93a0; }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x013a3480
void UUnrealEdEngine::sub_013a3480(void)
{
    int param_1 = (int)this;
  int *piVar1;
  piVar1 = (int *)(param_1 + 0x1c4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    sub_006311e0("SelectionMutex>=0","UnrealEd/Inc\\ReferencedAssetsBrowser.h",0x1d1,&g_01e3f3dc);
  }
  return;
}

// @baa 0x013a34b0
void UUnrealEdEngine::sub_013a34b0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  return;
}

extern char g_02264e9c[];
// @baa 0x013a34c0
int sub_013a34c0(void) { return (int)g_02264e9c; }

extern char g_026d93e0[];
// @baa 0x013a34d0
int sub_013a34d0(void) { return (int)g_026d93e0; }

// @baa 0x013a3740
void UUnrealEdEngine::sub_013a3740(void) { *(int*)((char*)this + 448) = 1; }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_013a38a0;
};

struct C_013a38a0 {
    void sub_013a38a0(wxCommandEvent *);
};

// @baa 0x013a38a0
void C_013a38a0::sub_013a38a0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x19c) = (uint)bVar1;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  return;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_013a39e0;
};

struct C_013a39e0 {
    void sub_013a39e0(wxUpdateUIEvent *);
};

// @baa 0x013a39e0
void C_013a39e0::sub_013a39e0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x19c) == 1);
  return;
}

extern char g_02265b58[];
// @baa 0x013a3a40
int sub_013a3a40(void) { return (int)g_02265b58; }

extern char g_026d968c[];
// @baa 0x013a3a50
int sub_013a3a50(void) { return (int)g_026d968c; }

extern char g_025e8fb8[];
// @baa 0x013a3a80
int sub_013a3a80(void) { return (int)g_025e8fb8; }

extern char g_026d9744[];
// @baa 0x013a3a90
int sub_013a3a90(void) { return (int)g_026d9744; }

extern char g_025e8fc0[];
// @baa 0x013a3aa0
int sub_013a3aa0(void) { return (int)g_025e8fc0; }

extern char g_026d97e8[];
// @baa 0x013a3ab0
int sub_013a3ab0(void) { return (int)g_026d97e8; }

extern char g_025e8fc8[];
// @baa 0x013a3d30
int sub_013a3d30(void) { return (int)g_025e8fc8; }

extern char g_026d98a0[];
// @baa 0x013a3d40
int sub_013a3d40(void) { return (int)g_026d98a0; }

extern char g_025e8fd0[];
// @baa 0x013a3d50
int sub_013a3d50(void) { return (int)g_025e8fd0; }

extern char g_026d98b8[];
// @baa 0x013a3d60
int sub_013a3d60(void) { return (int)g_026d98b8; }

class wxEvtHandler;
class wxEvtHandler {
    public:
    public: __declspec(dllimport) wxEvtHandler();
    friend struct C_013a3d70;
};

struct C_013a3d70 {
    wxEvtHandler * sub_013a3d70(undefined4);
};

extern undefined * g_0226ab20;
// @baa 0x013a3d70
wxEvtHandler * C_013a3d70::sub_013a3d70(undefined4 param_2)
{
    wxEvtHandler * param_1 = (wxEvtHandler *)this;

  ((wxEvtHandler *)(param_1))->wxEvtHandler::wxEvtHandler();
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined ***)param_1 = &g_0226ab20;
  return param_1;
}

extern char g_025e8fd8[];
// @baa 0x013a3ec0
int sub_013a3ec0(void) { return (int)g_025e8fd8; }

extern char g_026d9948[];
// @baa 0x013a3ed0
int sub_013a3ed0(void) { return (int)g_026d9948; }

// @baa 0x013a3f20
void __stdcall sub_013a3f20(int a0) {  }

// @baa 0x013a3f30
int sub_013a3f30(void) { return 0; }

struct C_013a3f40 { int sub_013a3f40(void); };

// @baa 0x013a3f40
int C_013a3f40::sub_013a3f40(void) { return *(int*)((char*)this + 4); }

struct C_013a3f50 { int sub_013a3f50(void); };

// @baa 0x013a3f50
int C_013a3f50::sub_013a3f50(void) { return *(int*)((char*)this + 4); }

struct C_013a3f60 { int sub_013a3f60(void); };

// @baa 0x013a3f60
int C_013a3f60::sub_013a3f60(void) { return *(int*)((char*)this + 4); }

struct C_013a3f70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_013a3f70* sub_013a3f70(INT value);
};

// @baa 0x013a3f70
C_013a3f70* C_013a3f70::sub_013a3f70(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_013a3f90 {
    char pad0[4];
    int f4;
    C_013a3f90* sub_013a3f90() {
        C_013a3f90* r = this;
        ++r->f4;
        return r;
    }
};

// @baa 0x013a3f90
void use(C_013a3f90* p) { (void)p->sub_013a3f90(); }

struct C_013a3fa0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_013a3fa0* sub_013a3fa0(INT value);
};

// @baa 0x013a3fa0
C_013a3fa0* C_013a3fa0::sub_013a3fa0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_013a3fc0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_013a3fc0* sub_013a3fc0(INT value);
};

// @baa 0x013a3fc0
C_013a3fc0* C_013a3fc0::sub_013a3fc0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_013a3fe0 { C_013a3fe0* sub_013a3fe0(void); };

// @baa 0x013a3fe0
C_013a3fe0* C_013a3fe0::sub_013a3fe0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_013a3ff0 {
    void sub_013a3ff0();
};

// @baa 0x013a3ff0
void C_013a3ff0::sub_013a3ff0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_013a4000 { int sub_013a4000(void); };

// @baa 0x013a4000
int C_013a4000::sub_013a4000(void) { return *(int*)((char*)this + 4); }

struct C_013a4010 { int sub_013a4010(void); };

// @baa 0x013a4010
int C_013a4010::sub_013a4010(void) { return *(int*)((char*)this + 4); }

struct C_013a4020 { int sub_013a4020(void); };

// @baa 0x013a4020
int C_013a4020::sub_013a4020(void) { return *(int*)((char*)this + 4); }

struct C_013a4030 { int sub_013a4030(void); };

// @baa 0x013a4030
int C_013a4030::sub_013a4030(void) { return *(int*)((char*)this + 4); }

struct C_013a4040 { int sub_013a4040(void); };

// @baa 0x013a4040
int C_013a4040::sub_013a4040(void) { return *(int*)((char*)this + 4); }

struct C_013a4090 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_013a4090(INT Index);
};

// @baa 0x013a4090
UBOOL C_013a4090::sub_013a4090(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_013a40b0 {
    bool sub_013a40b0();
};

// @baa 0x013a40b0
bool C_013a40b0::sub_013a40b0(void)
{
    int * param_1 = (int *)this;

  return 0 < *param_1;
}

struct C_013a40e0 { int a, b; C_013a40e0(int, int); };

// @baa 0x013a40e0
C_013a40e0::C_013a40e0(int x, int y) : a(x), b(y) {}

struct C_013a4100 { int a, b; C_013a4100(int, int); };

// @baa 0x013a4100
C_013a4100::C_013a4100(int x, int y) : a(x), b(y) {}

struct C_013a4120 { int a, b; C_013a4120(int, int); };

// @baa 0x013a4120
C_013a4120::C_013a4120(int x, int y) : a(x), b(y) {}

struct C_013a4140 { int a, b; C_013a4140(int, int); };

// @baa 0x013a4140
C_013a4140::C_013a4140(int x, int y) : a(x), b(y) {}

struct C_013a4160 { int a, b; C_013a4160(int, int); };

// @baa 0x013a4160
C_013a4160::C_013a4160(int x, int y) : a(x), b(y) {}

struct C_013a4180 { int a, b; C_013a4180(int, int); };

// @baa 0x013a4180
C_013a4180::C_013a4180(int x, int y) : a(x), b(y) {}

struct C_013a41a0 { int a, b; C_013a41a0(int, int); };

// @baa 0x013a41a0
C_013a41a0::C_013a41a0(int x, int y) : a(x), b(y) {}

struct C_013a41c0 { int a, b; C_013a41c0(int, int); };

// @baa 0x013a41c0
C_013a41c0::C_013a41c0(int x, int y) : a(x), b(y) {}

// @baa 0x013a41e0
int sub_013a41e0(int a0) { return *(int*)a0; }

// @baa 0x013a41f0
bool sub_013a41f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013a4220 {
    void sub_013a4220(undefined4 *);
};

// @baa 0x013a4220
void C_013a4220::sub_013a4220(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013a4240
int sub_013a4240(int a0) { return *(int*)a0; }

// @baa 0x013a4250
bool sub_013a4250(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013a4280 {
    void sub_013a4280(undefined4 *);
};

// @baa 0x013a4280
void C_013a4280::sub_013a4280(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013a42a0
int sub_013a42a0(int a0) { return *(int*)a0; }

// @baa 0x013a42b0
bool sub_013a42b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013a42c0 {
    void sub_013a42c0(undefined4 *);
};

// @baa 0x013a42c0
void C_013a42c0::sub_013a42c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013a42e0
int sub_013a42e0(int a0) { return *(int*)a0; }

struct C_013a4330 {
    void sub_013a4330(int *);
};

// @baa 0x013a4330
void C_013a4330::sub_013a4330(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x013a4340
int sub_013a4340(int a0) { return *(int*)a0; }

struct C_013a4350 {
    void sub_013a4350(int *);
};

// @baa 0x013a4350
void C_013a4350::sub_013a4350(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x013a4360
int sub_013a4360(int a0) { return *(int*)a0; }

struct C_013a43a0 {
    void sub_013a43a0(int *);
};

// @baa 0x013a43a0
void C_013a43a0::sub_013a43a0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x013a43b0
int sub_013a43b0(int a0) { return *(int*)a0; }

// @baa 0x013a43c0
bool sub_013a43c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013a43d0 {
    void sub_013a43d0(undefined4 *);
};

// @baa 0x013a43d0
void C_013a43d0::sub_013a43d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013a43f0
int sub_013a43f0(int a0) { return *(int*)a0; }

// @baa 0x013a4400
bool sub_013a4400(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013a4410 {
    void sub_013a4410(undefined4 *);
};

// @baa 0x013a4410
void C_013a4410::sub_013a4410(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

void sub_00572b30();
// @baa 0x013a4450
void sub_013a4450(void) { sub_00572b30(); }

struct C_013a4490 { int a, b; C_013a4490(const C_013a4490 &); };

// @baa 0x013a4490
C_013a4490::C_013a4490(const C_013a4490 &o) : a(o.a), b(o.b) {}

struct A_013a4560 { virtual void sub_013a4780(); char pad[332]; };

struct B_013a4560 { virtual void sub_013a4780(); };

struct C_013a4560 : A_013a4560, B_013a4560 { virtual void sub_013a4780(); C_013a4560(); };

C_013a4560::C_013a4560() {}

// @baa 0x013a4560
void C_013a4560::sub_013a4780() {}

// @baa 0x013a4570
void sub_013a4570(void) {  }

// @baa 0x013a4580
float10 sub_013a4580(double param_1)
{
  return (float10)param_1;
}

// @baa 0x013a45a0
undefined2 sub_013a45a0(void)
{
  return 0x69;
}

// @baa 0x013a45b0
undefined2 sub_013a45b0(void)
{
  return 0x73;
}

struct C_013a4610 {
    undefined4 sub_013a4610(int *);
};

// @baa 0x013a4610
undefined4 C_013a4610::sub_013a4610(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
     ((char)param_1[2] == (char)param_2[2])) {
    return 1;
  }
  return 0;
}

class wxListView;
class wxPoint;
class wxSize;
class wxString;
class wxValidator;
class wxWindow;
class wxListView {
    public:
    public: __declspec(dllimport) wxListView(wxWindow *,int,wxPoint const &,wxSize const &,long,wxValidator const &,wxString const &);
    friend struct C_013a4660;
};

class wxPoint {
    public:
};

class wxSize {
    public:
};

class wxString {
    public:
};

class wxValidator {
    public:
};

class wxWindow {
    public:
};

struct C_013a4660 {
    wxListView * sub_013a4660(wxWindow *, int, wxPoint *, wxSize *, long, wxValidator *, wxString *);
};

extern undefined * g_0226ab58;
// @baa 0x013a4660
wxListView * C_013a4660::sub_013a4660(wxWindow * param_2, int param_3, wxPoint * param_4, wxSize * param_5, long param_6, wxValidator * param_7, wxString * param_8)
{
    wxListView * param_1 = (wxListView *)this;
  ((wxListView *)(param_1))->wxListView::wxListView(param_2, param_3, *(const wxPoint *)(param_4), *(const wxSize *)(param_5), param_6, *(const wxValidator *)(param_7), *(const wxString *)(param_8));
  *(undefined ***)param_1 = &g_0226ab58;
  return param_1;
}

struct C_013a46b0 { C_013a46b0* sub_013a46b0(int a0); };

// @baa 0x013a46b0
C_013a46b0* C_013a46b0::sub_013a46b0(int a0) { return this; }

struct C_013a46c0 { int sub_013a46c0(void); };

// @baa 0x013a46c0
int C_013a46c0::sub_013a46c0(void) { return *(int*)((char*)this + 0); }

struct C_013a4700 { C_013a4700* sub_013a4700(int a0); };

// @baa 0x013a4700
C_013a4700* C_013a4700::sub_013a4700(int a0) { return this; }

struct C_013a4710 { int sub_013a4710(void); };

// @baa 0x013a4710
int C_013a4710::sub_013a4710(void) { return *(int*)((char*)this + 0); }

struct C_013a47a0 {
    void sub_013a47a0(int *);
};

// @baa 0x013a47a0
void C_013a47a0::sub_013a47a0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x1b4;
  param_2[1] = 0;
  return;
}

struct C_013a4830 {
    void sub_013a4830(int *);
};

// @baa 0x013a4830
void C_013a4830::sub_013a4830(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x18c;
  param_2[1] = 0;
  return;
}

struct C_013a4850 {
    void sub_013a4850(int *);
};

// @baa 0x013a4850
void C_013a4850::sub_013a4850(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x18c;
  param_2[1] = 0;
  return;
}

struct C_013a4870 { int sub_013a4870(void); };

// @baa 0x013a4870
int C_013a4870::sub_013a4870(void) { return *(int*)((char*)this + 400); }

struct C_013a4a10 {
    int * sub_013a4a10(int);
};

// @baa 0x013a4a10
int * C_013a4a10::sub_013a4a10(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2;
  if (param_2 == 0) {
    sub_006311e0("RABrowser","UnrealEd/Inc\\ReferencedAssetsBrowser.h",0x67,&g_01e3f3dc);
  }
  *(int *)(*param_1 + 0x1c4) = *(int *)(*param_1 + 0x1c4) + 1;
  return param_1;
}

struct C_013a4c30 {
    void sub_013a4c30(int);
    int sub_011f2630(int);
};

// @baa 0x013a4c30
void C_013a4c30::sub_013a4c30(int param_2)
{
    int param_1 = (int)this;
  *(int *)(param_1 + 0x194) = param_2;
  ((C_013a4c30 *)((*(char **)((char *)this + 0x1d8))))->sub_011f2630(param_2 == 2);
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  return;
}

extern char g_01e72a60[];
struct C_013a4c60 { void sub_013a4c60(void); };

// @baa 0x013a4c60
void C_013a4c60::sub_013a4c60(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

void sub_00545f60();
// @baa 0x013a7280
void sub_013a7280(void) { sub_00545f60(); }

struct C_013a7370{
int sub_013a7370(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x013a7370
int C_013a7370::sub_013a7370(undefined4*param_2)
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

struct C_013a7480 {
    int sub_013a7480(undefined4 *, int);
    int sub_013a5610(int, int);
};

// @baa 0x013a7480
int C_013a7480::sub_013a7480(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_013a7480 *)(this))->sub_013a5610(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_013a7560 {
    void sub_013a7560(int, int);
};

int sub_00627f00(...);
// @baa 0x013a7560
void C_013a7560::sub_013a7560(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

typedef uint size_t;

struct C_013a76e0 {
    int sub_013a76e0(int);
    int sub_013a57e0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x013a76e0
int C_013a76e0::sub_013a76e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_013a76e0 *)(this))->sub_013a57e0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct C_013a7720 {
    int sub_013a7720(int);
    int sub_00ddf840(int);
};

// @baa 0x013a7720
int C_013a7720::sub_013a7720(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_013a7720 *)(this))->sub_00ddf840(param_2);
  sub_01a37612((void *)(iVar1 * 0x94 + *param_1),0,param_2 * 0x94);
  return iVar1;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013a7760(INT Index);
};

// @baa 0x013a7760
DWORD* S::sub_013a7760(INT Index)
{
    return &Items(Index);
}

struct C_013a77b0{
int sub_013a77b0(undefined4*);
};

// @baa 0x013a77b0
int C_013a77b0::sub_013a77b0(undefined4*param_2)
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

struct E { BYTE Bytes[16]; };

struct S_013a7890 {
    TArray<E> Items; // 0x00
    E* sub_013a7890(INT Index);
};

// @baa 0x013a7890
E* S_013a7890::sub_013a7890(INT Index)
{
    return &Items(Index);
}

struct T_013a78e0 { BYTE b[16]; };

// @baa 0x013a78e0
template T_013a78e0& TArray<T_013a78e0>::Last(INT);

struct S_013a7940 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013a7940(INT Index);
};

// @baa 0x013a7940
DWORD* S_013a7940::sub_013a7940(INT Index)
{
    return &Items(Index);
}

struct S_013a7a00 {
    TArray<E> Items; // 0x00
    E* sub_013a7a00(INT Index);
};

// @baa 0x013a7a00
E* S_013a7a00::sub_013a7a00(INT Index)
{
    return &Items(Index);
}

struct E_013a7a50 { BYTE Bytes[12]; };

struct S_013a7a50 {
    TArray<E_013a7a50> Items; // 0x00
    E_013a7a50* sub_013a7a50(INT Index);
};

// @baa 0x013a7a50
E_013a7a50* S_013a7a50::sub_013a7a50(INT Index)
{
    return &Items(Index);
}

struct S_013a7b10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013a7b10(INT Index);
};

// @baa 0x013a7b10
DWORD* S_013a7b10::sub_013a7b10(INT Index)
{
    return &Items(Index);
}

struct C_013a7bc0 {
    int sub_013a7bc0(int);
};

// @baa 0x013a7bc0
int C_013a7bc0::sub_013a7bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_013a7be0 {
    int sub_013a7be0(int);
};

// @baa 0x013a7be0
int C_013a7be0::sub_013a7be0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013a7bf0
void __stdcall sub_013a7bf0(int a0, int a1) {  }

struct C_013a7c00 {
    int sub_013a7c00(int);
};

// @baa 0x013a7c00
int C_013a7c00::sub_013a7c00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013a7c10 {
    int sub_013a7c10(int);
};

// @baa 0x013a7c10
int C_013a7c10::sub_013a7c10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013a7c20
void __stdcall sub_013a7c20(int a0, int a1) {  }

struct C_013a7c30 {
    int sub_013a7c30(int);
};

// @baa 0x013a7c30
int C_013a7c30::sub_013a7c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_013a7c50 {
    int sub_013a7c50(int);
};

// @baa 0x013a7c50
int C_013a7c50::sub_013a7c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013a7c60
void __stdcall sub_013a7c60(int a0, int a1) {  }

struct C_013a7c70 {
    int sub_013a7c70(int);
};

// @baa 0x013a7c70
int C_013a7c70::sub_013a7c70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x013a7c80
void __stdcall sub_013a7c80(int a0, int a1) {  }

struct C_013a7c90 { int sub_013a7c90(void); };

// @baa 0x013a7c90
int C_013a7c90::sub_013a7c90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a7ca0 {
    int sub_013a7ca0(int);
};

// @baa 0x013a7ca0
int C_013a7ca0::sub_013a7ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013a7cb0
void __stdcall sub_013a7cb0(int a0, int a1) {  }

struct C_013a7cc0 { int sub_013a7cc0(void); };

// @baa 0x013a7cc0
int C_013a7cc0::sub_013a7cc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x013a7d00
void sub_013a7d00(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_013a7d10 {
    int sub_013a7d10(int);
};

// @baa 0x013a7d10
int C_013a7d10::sub_013a7d10(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_013a7d50 {
    int sub_013a7d50(int);
};

// @baa 0x013a7d50
int C_013a7d50::sub_013a7d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a7d60 {
    int sub_013a7d60();
};

// @baa 0x013a7d60
int C_013a7d60::sub_013a7d60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a7d80 {
    int sub_013a7d80();
};

// @baa 0x013a7d80
int C_013a7d80::sub_013a7d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013a7d90 {
    int sub_013a7d90();
};

// @baa 0x013a7d90
int C_013a7d90::sub_013a7d90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_013a7dd0 {
    int sub_013a7dd0(int);
};

// @baa 0x013a7dd0
int C_013a7dd0::sub_013a7dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a7e80 {
    int sub_013a7e80(int);
};

// @baa 0x013a7e80
int C_013a7e80::sub_013a7e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a7e90 {
    int sub_013a7e90();
};

// @baa 0x013a7e90
int C_013a7e90::sub_013a7e90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a7eb0 {
    int sub_013a7eb0();
};

// @baa 0x013a7eb0
int C_013a7eb0::sub_013a7eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a7f60 {
    int sub_013a7f60(int);
};

// @baa 0x013a7f60
int C_013a7f60::sub_013a7f60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a7f70 {
    int sub_013a7f70();
};

// @baa 0x013a7f70
int C_013a7f70::sub_013a7f70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a7f90 {
    int sub_013a7f90();
};

// @baa 0x013a7f90
int C_013a7f90::sub_013a7f90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a7fb0 {
    int sub_013a7fb0();
};

// @baa 0x013a7fb0
int C_013a7fb0::sub_013a7fb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a7fd0 {
    int sub_013a7fd0();
};

// @baa 0x013a7fd0
int C_013a7fd0::sub_013a7fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a7fe0 { int sub_013a7fe0(void); };

// @baa 0x013a7fe0
int C_013a7fe0::sub_013a7fe0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013a7ff0 {
    int sub_013a7ff0(int);
};

// @baa 0x013a7ff0
int C_013a7ff0::sub_013a7ff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013a8000 {
    int sub_013a8000(int);
};

// @baa 0x013a8000
int C_013a8000::sub_013a8000(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a8010 {
    int sub_013a8010(int);
};

// @baa 0x013a8010
int C_013a8010::sub_013a8010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a8020 {
    int sub_013a8020();
};

// @baa 0x013a8020
int C_013a8020::sub_013a8020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8040 {
    int sub_013a8040();
};

// @baa 0x013a8040
int C_013a8040::sub_013a8040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013a8050 {
    int sub_013a8050();
};

// @baa 0x013a8050
int C_013a8050::sub_013a8050(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8070 {
    int sub_013a8070();
};

// @baa 0x013a8070
int C_013a8070::sub_013a8070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013a8080 {
    int sub_013a8080();
};

// @baa 0x013a8080
int C_013a8080::sub_013a8080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a80a0 {
    int sub_013a80a0(int);
};

// @baa 0x013a80a0
int C_013a80a0::sub_013a80a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013a80b0
void sub_013a80b0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_013a80c0 {
    int sub_013a80c0();
};

// @baa 0x013a80c0
int C_013a80c0::sub_013a80c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x48;
}

// @baa 0x013a80d0
void sub_013a80d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_013a80e0 {
    int sub_013a80e0(int);
};

// @baa 0x013a80e0
int C_013a80e0::sub_013a80e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_013a80f0 {
    int sub_013a80f0(int);
};

// @baa 0x013a80f0
int C_013a80f0::sub_013a80f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a8100 {
    int sub_013a8100();
};

// @baa 0x013a8100
int C_013a8100::sub_013a8100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a8110 {
    int sub_013a8110(int);
};

// @baa 0x013a8110
int C_013a8110::sub_013a8110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013a8120 {
    int sub_013a8120();
};

// @baa 0x013a8120
int C_013a8120::sub_013a8120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a8130 {
    int sub_013a8130();
};

// @baa 0x013a8130
int C_013a8130::sub_013a8130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a8170 {
    int sub_013a8170(int);
};

// @baa 0x013a8170
int C_013a8170::sub_013a8170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x013a81b0
void sub_013a81b0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x013a81f0
void sub_013a81f0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_013a8200 {
    int sub_013a8200();
};

// @baa 0x013a8200
int C_013a8200::sub_013a8200(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013a8210 {
    int sub_013a8210();
};

// @baa 0x013a8210
int C_013a8210::sub_013a8210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013a8220 {
    int sub_013a8220();
};

// @baa 0x013a8220
int C_013a8220::sub_013a8220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8240 {
    int sub_013a8240();
};

// @baa 0x013a8240
int C_013a8240::sub_013a8240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_013a8250 {
    int sub_013a8250();
};

// @baa 0x013a8250
int C_013a8250::sub_013a8250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8270 {
    int sub_013a8270();
};

// @baa 0x013a8270
int C_013a8270::sub_013a8270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a8280 {
    int sub_013a8280(int);
};

// @baa 0x013a8280
int C_013a8280::sub_013a8280(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a8290 {
    int sub_013a8290(int);
};

// @baa 0x013a8290
int C_013a8290::sub_013a8290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a82a0 {
    int sub_013a82a0(int);
};

// @baa 0x013a82a0
int C_013a82a0::sub_013a82a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013a82b0 {
    int sub_013a82b0();
};

// @baa 0x013a82b0
int C_013a82b0::sub_013a82b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a82c0 {
    int sub_013a82c0();
};

// @baa 0x013a82c0
int C_013a82c0::sub_013a82c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a82e0 {
    int sub_013a82e0();
};

// @baa 0x013a82e0
int C_013a82e0::sub_013a82e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_013a82f0 {
    int sub_013a82f0();
};

// @baa 0x013a82f0
int C_013a82f0::sub_013a82f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8310 {
    int sub_013a8310();
};

// @baa 0x013a8310
int C_013a8310::sub_013a8310(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8330 {
    int sub_013a8330();
};

// @baa 0x013a8330
int C_013a8330::sub_013a8330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a8340 {
    int sub_013a8340();
};

// @baa 0x013a8340
int C_013a8340::sub_013a8340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8360 {
    int sub_013a8360();
};

// @baa 0x013a8360
int C_013a8360::sub_013a8360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013a8370 {
    int sub_013a8370();
};

// @baa 0x013a8370
int C_013a8370::sub_013a8370(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a8390 {
    int sub_013a8390();
};

// @baa 0x013a8390
int C_013a8390::sub_013a8390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a83a0 {
    int sub_013a83a0();
};

// @baa 0x013a83a0
int C_013a83a0::sub_013a83a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a83c0 {
    int sub_013a83c0();
};

// @baa 0x013a83c0
int C_013a83c0::sub_013a83c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013a83e0 {
    int sub_013a83e0();
};

// @baa 0x013a83e0
int C_013a83e0::sub_013a83e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a83f0 {
    int sub_013a83f0();
};

// @baa 0x013a83f0
int C_013a83f0::sub_013a83f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x013a8780
void sub_013a8780(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

struct C_013a87f0 {
    int sub_013a87f0();
};

// @baa 0x013a87f0
int C_013a87f0::sub_013a87f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013a8ef0 {
    undefined4 sub_013a8ef0(byte);
};

int sub_0053dfa0(...);
int sub_013a8c60(void);
// @baa 0x013a8ef0
undefined4 C_013a8ef0::sub_013a8ef0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013a8c60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ab830 {
    void sub_013ab830();
    int sub_013a8410(int, int);
};

// @baa 0x013ab830
void C_013ab830::sub_013ab830(void)
{
    int param_1 = (int)this;
  ((C_013ab830 *)((*(char **)((char *)this + 0x198))))->sub_013a8410(*(int *)(param_1 + 0x198) + 0x1b4, 0x40);
  return;
}

struct C_013ab870 {
    undefined4 sub_013ab870();
};

// @baa 0x013ab870
undefined4 C_013ab870::sub_013ab870(void)
{
    int param_1 = (int)this;

  if (0 < *(int *)(param_1 + 400)) {
    return **(undefined4 **)(param_1 + 0x18c);
  }
  return 0;
}

struct C_013ab890 {
    undefined4 sub_013ab890();
};

// @baa 0x013ab890
undefined4 C_013ab890::sub_013ab890(void)
{
    int param_1 = (int)this;

  if (0 < *(int *)(param_1 + 400)) {
    return **(undefined4 **)(param_1 + 0x18c);
  }
  return 0;
}

struct S_013abab0 {
    void sub_013aac20(int);
};

struct C_013abab0 {
    char pad[0x198];
    S_013abab0* f;
    void sub_013abab0(int x);
};

// @baa 0x013abab0
void C_013abab0::sub_013abab0(int x)
{
    f->sub_013aac20(x);
}

struct C_013abca0 { void sub_013ab8e0(); void sub_013abca0(int); };

// @baa 0x013abca0
void C_013abca0::sub_013abca0(int) { sub_013ab8e0(); }

extern char g_0226c29c[];
// @baa 0x013abe70
int sub_013abe70(void) { return (int)g_0226c29c; }

struct A_013abe80 { virtual void sub_013b2fc0(); char pad[320]; };

struct B_013abe80 { virtual void sub_013b2fc0(); };

struct C_013abe80 : A_013abe80, B_013abe80 { virtual void sub_013b2fc0(); C_013abe80(); };

C_013abe80::C_013abe80() {}

// @baa 0x013abe80
void C_013abe80::sub_013b2fc0() {}

struct A_013abe90 { virtual void sub_013b2fc0(); char pad[324]; };

struct B_013abe90 { virtual void sub_013b2fc0(); };

struct C_013abe90 : A_013abe90, B_013abe90 { virtual void sub_013b2fc0(); C_013abe90(); };

C_013abe90::C_013abe90() {}

// @baa 0x013abe90
void C_013abe90::sub_013b2fc0() {}

void sub_011202d0();
// @baa 0x013abea0
void sub_013abea0(void) { sub_011202d0(); }

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_013abeb0();
};

// @baa 0x013abeb0
S16* S16::sub_013abeb0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_013ae910 { void* Data; int Num; int Max; void sub_013ae910(); };

// @baa 0x013ae910
void C_013ae910::sub_013ae910() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013aea70 { void* Data; int Num; int Max; void sub_013aea70(); };

// @baa 0x013aea70
void C_013aea70::sub_013aea70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013aead0 { void* Data; int Num; int Max; void sub_013aead0(); };

// @baa 0x013aead0
void C_013aead0::sub_013aead0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013aeb30 { void* Data; int Num; int Max; void sub_013aeb30(); };

// @baa 0x013aeb30
void C_013aeb30::sub_013aeb30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013aeb90 {
    int sub_013aeb90();
};

// @baa 0x013aeb90
int C_013aeb90::sub_013aeb90(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_013aec40 {
    int sub_013aec40(int);
};

// @baa 0x013aec40
int C_013aec40::sub_013aec40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013aec50 {
    int sub_013aec50(int);
};

// @baa 0x013aec50
int C_013aec50::sub_013aec50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013aec60 {
    int sub_013aec60();
};

// @baa 0x013aec60
int C_013aec60::sub_013aec60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aec80 {
    int sub_013aec80();
};

// @baa 0x013aec80
int C_013aec80::sub_013aec80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013aec90 {
    int sub_013aec90();
};

// @baa 0x013aec90
int C_013aec90::sub_013aec90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aecb0 {
    int sub_013aecb0();
};

// @baa 0x013aecb0
int C_013aecb0::sub_013aecb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_013aecc0 {
    int sub_013aecc0(int);
};

// @baa 0x013aecc0
int C_013aecc0::sub_013aecc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013aecd0 {
    int sub_013aecd0(int);
};

// @baa 0x013aecd0
int C_013aecd0::sub_013aecd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013aece0 {
    int sub_013aece0();
};

// @baa 0x013aece0
int C_013aece0::sub_013aece0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aed00 {
    int sub_013aed00();
};

// @baa 0x013aed00
int C_013aed00::sub_013aed00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013aed10 {
    int sub_013aed10(int);
};

// @baa 0x013aed10
int C_013aed10::sub_013aed10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_013aed20 {
    int sub_013aed20();
};

// @baa 0x013aed20
int C_013aed20::sub_013aed20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aed40 {
    int sub_013aed40();
};

// @baa 0x013aed40
int C_013aed40::sub_013aed40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013aed50 {
    int sub_013aed50();
};

// @baa 0x013aed50
int C_013aed50::sub_013aed50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aed70 {
    int sub_013aed70();
};

// @baa 0x013aed70
int C_013aed70::sub_013aed70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013aed80 { int sub_013aed80(void); };

// @baa 0x013aed80
int C_013aed80::sub_013aed80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013aed90 {
    int sub_013aed90(int);
};

// @baa 0x013aed90
int C_013aed90::sub_013aed90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_013aeda0 {
    int sub_013aeda0(int);
};

// @baa 0x013aeda0
int C_013aeda0::sub_013aeda0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013aedb0 {
    int sub_013aedb0(int);
};

// @baa 0x013aedb0
int C_013aedb0::sub_013aedb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013aedc0 {
    int sub_013aedc0();
};

// @baa 0x013aedc0
int C_013aedc0::sub_013aedc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aede0 {
    int sub_013aede0();
};

// @baa 0x013aede0
int C_013aede0::sub_013aede0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013aedf0 {
    int sub_013aedf0();
};

// @baa 0x013aedf0
int C_013aedf0::sub_013aedf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013aee10 {
    int sub_013aee10();
};

// @baa 0x013aee10
int C_013aee10::sub_013aee10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013aee20 {
    int sub_013aee20();
};

// @baa 0x013aee20
int C_013aee20::sub_013aee20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_013aa100(void);
// @baa 0x013aee40
undefined4 UUnrealEdEngine::sub_013aee40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013aa100();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_013aee60 { void sub_00549240(); };

struct C_013aee60 { char pad[4]; M_013aee60 m; void sub_013aee60(); };

// @baa 0x013aee60
void C_013aee60::sub_013aee60() { m.sub_00549240(); }

// @baa 0x013aeef0
int UPackageMap::sub_013aeef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013aef70
int UPackageMap::sub_013aef70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013af3a0 {
    int sub_013af3a0(int);
};

// @baa 0x013af3a0
int C_013af3a0::sub_013af3a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013af420 {
    int sub_013af420();
};

// @baa 0x013af420
int C_013af420::sub_013af420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013af430 {
    int sub_013af430(int);
};

// @baa 0x013af430
int C_013af430::sub_013af430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013af440 {
    int sub_013af440(int);
};

// @baa 0x013af440
int C_013af440::sub_013af440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013af450 {
    int sub_013af450(int);
};

// @baa 0x013af450
int C_013af450::sub_013af450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_013af490 {
    int sub_013af490();
};

// @baa 0x013af490
int C_013af490::sub_013af490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013af4a0 {
    int sub_013af4a0();
};

// @baa 0x013af4a0
int C_013af4a0::sub_013af4a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013af4c0 {
    int sub_013af4c0();
};

// @baa 0x013af4c0
int C_013af4c0::sub_013af4c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_013af4d0 {
    int sub_013af4d0();
};

// @baa 0x013af4d0
int C_013af4d0::sub_013af4d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013af4e0 {
    int sub_013af4e0();
};

// @baa 0x013af4e0
int C_013af4e0::sub_013af4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_013af4f0 {
    int sub_013af4f0();
};

// @baa 0x013af4f0
int C_013af4f0::sub_013af4f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}
