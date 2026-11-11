// UnrealEd_1110000.cpp (part 1 of 8): 349 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

class wxBitmap;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap();
    friend struct C;
};

struct C {
    wxBitmap * sub_01114df0();
};

extern undefined * g_021bb8b0;
// @baa 0x01114df0
wxBitmap * C::sub_01114df0(void)
{
    wxBitmap * param_1 = (wxBitmap *)this;

  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap();
  *(undefined ***)param_1 = &g_021bb8b0;
  return param_1;
}

__declspec(dllimport) void wxEndBusyCursor();
extern undefined4 g_026ce6a0;
// @baa 0x01114f10
void sub_01114f10(void)
{
  g_026ce6a0 = g_026ce6a0 + -1;
  if (g_026ce6a0 == 0) {
    wxEndBusyCursor();
    return;
  }
  return;
}

struct C_01114f20 {
    void sub_01114f20(undefined4);
};

// @baa 0x01114f20
void C_01114f20::sub_01114f20(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  return;
}

struct C_01114f30 { int sub_01114f30(void); };

// @baa 0x01114f30
int C_01114f30::sub_01114f30(void) { return *(int*)((char*)this + 428); }

struct C_01114f40 { void sub_01114f40(void); };

// @baa 0x01114f40
void C_01114f40::sub_01114f40(void) { *(int*)((char*)this + 424) = 0; }

struct InnerObj;
struct OuterObj {
    char pad[0x1a4];
    InnerObj *inner;
    void sub_01114f50(int a1, int a2, int a3, int a4, int a5);
};

struct InnerObj {
    void sub_011ede20(int a1, int a2, int a3, int a4, int a5);
};

// @baa 0x01114f50
void OuterObj::sub_01114f50(int a1, int a2, int a3, int a4, int a5) {
    inner->sub_011ede20(a1, a2, a3, a4, a5);
}

struct C_01114f60 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    void sub_01114f60(int x);
};

void C_01114f60::v00(){}

void C_01114f60::v01(){}

void C_01114f60::v02(){}

void C_01114f60::v03(){}

void C_01114f60::v04(){}

void C_01114f60::v05(){}

void C_01114f60::v06(){}

void C_01114f60::v07(){}

void C_01114f60::v08(){}

void C_01114f60::v09(){}

void C_01114f60::v10(){}

void C_01114f60::v11(){}

void C_01114f60::v12(){}

void C_01114f60::v13(){}

void C_01114f60::v14(){}

// @baa 0x01114f60
// Thunk: one stack arg (cleaned by the callee, ret 4), forwards to virtual slot 14 (offset 0x38).
void C_01114f60::sub_01114f60(int x) { v14(); }

extern char g_025e8590[];
// @baa 0x01114f70
int sub_01114f70(void) { return (int)g_025e8590; }

extern char g_026ce6c8[];
// @baa 0x01114f80
int sub_01114f80(void) { return (int)g_026ce6c8; }

extern char g_025e8598[];
// @baa 0x01114f90
int sub_01114f90(void) { return (int)g_025e8598; }

extern char g_026ce71c[];
// @baa 0x01114fa0
int sub_01114fa0(void) { return (int)g_026ce71c; }

extern char g_025e85a0[];
// @baa 0x01114fd0
int sub_01114fd0(void) { return (int)g_025e85a0; }

extern char g_026ce748[];
// @baa 0x01114fe0
int sub_01114fe0(void) { return (int)g_026ce748; }

struct BrushSub {
    virtual void AddBrush(const wchar_t* Name, int Value);
};

struct Brush {
    char pad[0x30];
    BrushSub sub; // offset 0x30
};

extern Brush* g_026d4dfc;
extern int g_025d53e8;
// @baa 0x01114ff0
void __stdcall sub_01114ff0(int unused)
{
    int Value = g_025d53e8;
    g_026d4dfc->sub.AddBrush(L"BRUSH ADD", Value);
}

extern char g_025e85a8[];
// @baa 0x01115260
int sub_01115260(void) { return (int)g_025e85a8; }

extern char g_026ce918[];
// @baa 0x01115270
int sub_01115270(void) { return (int)g_026ce918; }

extern char g_025e85b0[];
// @baa 0x01115280
int sub_01115280(void) { return (int)g_025e85b0; }

extern char g_026ce958[];
// @baa 0x01115290
int sub_01115290(void) { return (int)g_026ce958; }

class wxBitmapButton;
class wxBitmapButton {
    public:
    public: __declspec(dllimport) wxBitmapButton();
    friend struct C_011152a0;
};

struct C_011152a0 {
    wxBitmapButton * sub_011152a0();
};

extern undefined * g_021bb970;
// @baa 0x011152a0
wxBitmapButton * C_011152a0::sub_011152a0(void)
{
    wxBitmapButton * param_1 = (wxBitmapButton *)this;

  ((wxBitmapButton *)(param_1))->wxBitmapButton::wxBitmapButton();
  *(undefined ***)param_1 = &g_021bb970;
  return param_1;
}

extern char g_021afb50[];
// @baa 0x01115420
int sub_01115420(void) { return (int)g_021afb50; }

extern char g_026ce9ac[];
// @baa 0x01115430
int sub_01115430(void) { return (int)g_026ce9ac; }

struct C_011155d0 { int a, b; C_011155d0(int, int); };

// @baa 0x011155d0
C_011155d0::C_011155d0(int x, int y) : a(x), b(y) {}

// @baa 0x011155f0
void sub_011155f0(void) {  }

extern char g_021afc18[];
// @baa 0x01115600
int sub_01115600(void) { return (int)g_021afc18; }

extern char g_026ce9ec[];
// @baa 0x01115610
int sub_01115610(void) { return (int)g_026ce9ec; }

struct C_01115620 { int sub_01115620(void); };

// @baa 0x01115620
int C_01115620::sub_01115620(void) { return *(int*)((char*)this + 404); }

extern char g_021afda0[];
// @baa 0x01115650
int sub_01115650(void) { return (int)g_021afda0; }

extern char g_026cea2c[];
// @baa 0x01115660
int sub_01115660(void) { return (int)g_026cea2c; }

class wxStatusBar;
class wxStatusBar {
    public:
    public: __declspec(dllimport) wxStatusBar();
    friend struct C_01115670;
};

struct C_01115670 {
    wxStatusBar * sub_01115670();
};

extern undefined * g_021bbf40;
// @baa 0x01115670
wxStatusBar * C_01115670::sub_01115670(void)
{
    wxStatusBar * param_1 = (wxStatusBar *)this;

  ((wxStatusBar *)(param_1))->wxStatusBar::wxStatusBar();
  *(undefined ***)param_1 = &g_021bbf40;
  return param_1;
}

extern char g_025e85b8[];
// @baa 0x01115730
int sub_01115730(void) { return (int)g_025e85b8; }

extern char g_026cea58[];
// @baa 0x01115740
int sub_01115740(void) { return (int)g_026cea58; }

struct Base {
    virtual void v0(int) = 0;
    virtual void v1(int) = 0;
    virtual void sub_005ec408(int) = 0;
};

struct C_01115930 : Base {
    void sub_01115930(int);
};

// @baa 0x01115930
void C_01115930::sub_01115930(int a)
{
    sub_005ec408(a);
}

// @baa 0x01115940
void sub_01115940(void) {  }

// @baa 0x01115950
int __stdcall sub_01115950(int a0, int a1, int a2) { return a2; }

extern char g_025e85c0[];
// @baa 0x01115960
int sub_01115960(void) { return (int)g_025e85c0; }

extern char g_026cea98[];
// @baa 0x01115970
int sub_01115970(void) { return (int)g_026cea98; }

extern char g_026cead8[];
// @baa 0x01115980
int sub_01115980(void) { return (int)g_026cead8; }

extern char g_025e85c8[];
// @baa 0x01115990
int sub_01115990(void) { return (int)g_025e85c8; }

extern char g_026ceaf0[];
// @baa 0x011159a0
int sub_011159a0(void) { return (int)g_026ceaf0; }

extern char g_026ceb30[];
// @baa 0x01115bd0
int sub_01115bd0(void) { return (int)g_026ceb30; }

extern char g_025e85d0[];
// @baa 0x01115ca0
int sub_01115ca0(void) { return (int)g_025e85d0; }

extern char g_026ceb48[];
// @baa 0x01115cb0
int sub_01115cb0(void) { return (int)g_026ceb48; }

extern char g_02412424[];
struct C_01115d80 { C_01115d80* sub_01115d80(void); };

// @baa 0x01115d80
C_01115d80* C_01115d80::sub_01115d80(void) { *(int*)((char*)this + 0) = (int)g_02412424; return this; }

// @baa 0x01115d90
void __stdcall sub_01115d90(int a0, int a1, int a2, int a3) {  }

// @baa 0x01115da0
void __stdcall sub_01115da0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01115db0
void __stdcall sub_01115db0(int a0, int a1, int a2) {  }

// @baa 0x01115dc0
void __stdcall sub_01115dc0(int a0, int a1, int a2) {  }

extern char g_025e85d8[];
// @baa 0x01115dd0
int sub_01115dd0(void) { return (int)g_025e85d8; }

extern char g_026cecb4[];
// @baa 0x01115de0
int sub_01115de0(void) { return (int)g_026cecb4; }

struct C_01115f40 { int sub_01115f40(void); };

// @baa 0x01115f40
int C_01115f40::sub_01115f40(void) { return *(int*)((char*)this + 424); }

struct C_01116190 { int a, b; C_01116190(int, int); };

// @baa 0x01116190
C_01116190::C_01116190(int x, int y) : a(x), b(y) {}

struct C_011161b0 {
    undefined4 sub_011161b0(int *);
};

// @baa 0x011161b0
undefined4 C_011161b0::sub_011161b0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_011162d0 { void sub_011162d0(int a0); };

// @baa 0x011162d0
void C_011162d0::sub_011162d0(int a0) { *(int*)((char*)this + 596) = a0; }

// @baa 0x01116300
void __stdcall sub_01116300(int a0, int a1, int a2) {  }

extern char g_025e85e8[];
// @baa 0x01116310
int sub_01116310(void) { return (int)g_025e85e8; }

extern char g_026cf018[];
// @baa 0x01116320
int sub_01116320(void) { return (int)g_026cf018; }

extern char g_025e85f0[];
// @baa 0x01116620
int sub_01116620(void) { return (int)g_025e85f0; }

extern char g_026cf030[];
// @baa 0x01116630
int sub_01116630(void) { return (int)g_026cf030; }

struct C_view {
    int sub_011ba5f0(int, int, int, int);
};

extern undefined * g_021bce0c;
extern undefined4 g_021bce30;
extern undefined4 g_021bce40;
extern undefined * g_021bce48;
extern undefined * g_021bced4;
extern undefined4 g_021bceec;
extern undefined * g_021bcef8;
// @baa 0x01116740
undefined4 * UUnrealEdEngine::sub_01116740(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_011ba5f0(param_2, param_3, param_4, (int)(L"DialogueManager"));
  param_1[0xf4] = param_4;
  *param_1 = (undefined4)(&g_021bcef8);
  param_1[0x67] = (undefined4)(&g_021bceec);
  param_1[0x68] = (undefined4)(&g_021bced4);
  param_1[0x69] = (undefined4)(&g_021bce48);
  param_1[0x6a] = (undefined4)(&g_021bce40);
  param_1[0x6b] = (undefined4)(&g_021bce30);
  param_1[200] = (undefined4)(&g_021bce0c);
  return param_1;
}

extern char g_021bd27c[];
// @baa 0x011167d0
int sub_011167d0(void) { return (int)g_021bd27c; }

struct C_01116830 { int sub_01116830(void); };

// @baa 0x01116830
int C_01116830::sub_01116830(void) { return *(int*)((char*)this + 976); }

struct C_01116840 { void sub_01116840(int a0); };

// @baa 0x01116840
void C_01116840::sub_01116840(int a0) { *(int*)((char*)this + 976) = a0; }

extern char g_025e85f8[];
// @baa 0x01116850
int sub_01116850(void) { return (int)g_025e85f8; }

extern char g_026cf0e8[];
// @baa 0x01116860
int sub_01116860(void) { return (int)g_026cf0e8; }

class wxCloseEvent;
class wxWindowBase;
class wxCloseEvent {
    public:
    public: __declspec(dllimport) void Veto(bool);
    friend struct C_011168d0;
};

class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Hide();
    friend struct C_011168d0;
};

struct C_011168d0 {
    void sub_011168d0(wxCloseEvent *);
};

// @baa 0x011168d0
void C_011168d0::sub_011168d0(wxCloseEvent * param_2)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  ((wxWindowBase *)(param_1))->wxWindowBase::Hide();
  ((wxCloseEvent *)(param_2))->wxCloseEvent::Veto(true);
  return;
}

extern char g_026cf1b4[];
// @baa 0x01116940
int sub_01116940(void) { return (int)g_026cf1b4; }

extern char g_021b292c[];
// @baa 0x01116950
int sub_01116950(void) { return (int)g_021b292c; }

extern char g_026cf1cc[];
// @baa 0x01116960
int sub_01116960(void) { return (int)g_026cf1cc; }

// @baa 0x011169a0
void sub_011169a0(void) {  }

// @baa 0x011169b0
void sub_011169b0(void) {  }

struct V_011169c0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void g();
    void sub_011169c0();
};

// @baa 0x011169c0
void V_011169c0::sub_011169c0() { g(); }

struct V_011169d0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void g();
    void sub_011169d0();
};

// @baa 0x011169d0
void V_011169d0::sub_011169d0() { g(); }

// @baa 0x011169e0
void sub_011169e0(void) {  }

// @baa 0x01116a20
void __stdcall sub_01116a20(int a0) {  }

int sub_0118e7a0(int arg1);
// @baa 0x01116a30
void __stdcall sub_01116a30(int arg1)
{
	sub_0118e7a0(0);
}

extern char g_021b2c10[];
// @baa 0x01116a40
int sub_01116a40(void) { return (int)g_021b2c10; }

extern char g_026cf2c0[];
// @baa 0x01116a50
int sub_01116a50(void) { return (int)g_026cf2c0; }

class wxAuiManager;
class wxWindow;
class wxAuiManager {
    public:
    public: __declspec(dllimport) bool DetachPane(wxWindow *);
    friend struct C_01116b10;
};

class wxWindow {
    public:
};

struct C_01116b10 {
    void sub_01116b10(wxWindow *);
};

// @baa 0x01116b10
void C_01116b10::sub_01116b10(wxWindow * param_2)
{
    int param_1 = (int)this;
  ((wxAuiManager *)((wxAuiManager *)(param_1 + 8)))->wxAuiManager::DetachPane(param_2);
  return;
}

// @baa 0x01116b20
void __stdcall sub_01116b20(int a0, int a1) {  }

extern char g_026cf38c[];
// @baa 0x01116b90
int sub_01116b90(void) { return (int)g_026cf38c; }

extern char g_025e8600[];
// @baa 0x01116ba0
int sub_01116ba0(void) { return (int)g_025e8600; }

extern char g_026cf3a4[];
// @baa 0x01116bb0
int sub_01116bb0(void) { return (int)g_026cf3a4; }

extern char g_026cf3e4[];
// @baa 0x01116be0
int sub_01116be0(void) { return (int)g_026cf3e4; }

extern char g_025e8608[];
// @baa 0x01116bf0
int sub_01116bf0(void) { return (int)g_025e8608; }

extern char g_026cf3fc[];
// @baa 0x01116c00
int sub_01116c00(void) { return (int)g_026cf3fc; }

class wxEvtHandler;
class wxEvtHandler {
    public:
    public: __declspec(dllimport) wxEvtHandler();
    friend struct C_01116c10;
};

struct C_01116c10 {
    wxEvtHandler * sub_01116c10();
};

extern undefined * g_021bd28c;
// @baa 0x01116c10
wxEvtHandler * C_01116c10::sub_01116c10(void)
{
    wxEvtHandler * param_1 = (wxEvtHandler *)this;

  ((wxEvtHandler *)(param_1))->wxEvtHandler::wxEvtHandler();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined ***)param_1 = &g_021bd28c;
  return param_1;
}

struct C_01116c50 { void sub_01116c50(int a0); };

// @baa 0x01116c50
void C_01116c50::sub_01116c50(int a0) { *(int*)((char*)this + 40) = a0; }

extern char g_021b2fd0[];
// @baa 0x01116cd0
int sub_01116cd0(void) { return (int)g_021b2fd0; }

extern char g_026cf414[];
// @baa 0x01116ce0
int sub_01116ce0(void) { return (int)g_026cf414; }

struct C_01116cf0 { int sub_01116cf0(void); };

// @baa 0x01116cf0
int C_01116cf0::sub_01116cf0(void) { return *(int*)((char*)this + 416); }

struct C_01116d00 { C_01116d00* sub_01116d00(void); };

// @baa 0x01116d00
C_01116d00* C_01116d00::sub_01116d00(void) { return this; }

// @baa 0x01116d10
void sub_01116d10(void) {  }

class wxDialogBase;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void AcceptAndClose();
};

struct C_01116d20 : wxDialogBase {
    void sub_01116d20(int);
};

// @baa 0x01116d20
void C_01116d20::sub_01116d20(int)
{
    AcceptAndClose();
}

extern char g_025e8610[];
// @baa 0x01116d30
int sub_01116d30(void) { return (int)g_025e8610; }

extern char g_026cf478[];
// @baa 0x01116d40
int sub_01116d40(void) { return (int)g_026cf478; }

extern char g_025e8618[];
// @baa 0x01116d60
int sub_01116d60(void) { return (int)g_025e8618; }

extern char g_026cf4b8[];
// @baa 0x01116d70
int sub_01116d70(void) { return (int)g_026cf4b8; }

struct C_01116d80 : wxDialogBase {
    void sub_01116d80(int);
};

// @baa 0x01116d80
void C_01116d80::sub_01116d80(int)
{
    AcceptAndClose();
}

extern char g_025e8620[];
// @baa 0x01116d90
int sub_01116d90(void) { return (int)g_025e8620; }

extern char g_026cf4f8[];
// @baa 0x01116da0
int sub_01116da0(void) { return (int)g_026cf4f8; }

extern char g_025e8628[];
// @baa 0x01116db0
int sub_01116db0(void) { return (int)g_025e8628; }

extern char g_026cf538[];
// @baa 0x01116dc0
int sub_01116dc0(void) { return (int)g_026cf538; }

extern char g_026d0e28[];
// @baa 0x01116dd0
int sub_01116dd0(void) { return (int)g_026d0e28; }

// @baa 0x01116e50
void __stdcall sub_01116e50(int a0) {  }

struct C_01116e60 {
    undefined4 sub_01116e60();
};

// @baa 0x01116e60
undefined4 C_01116e60::sub_01116e60(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x1a4);
}

class wxKeyEvent;
class wxKeyEvent {
    public:
    public: __declspec(dllimport) bool ShiftDown() const;
    friend struct C_01117250;
};

struct C_01117250 {
    void sub_01117250(wxKeyEvent *);
};

int sub_0128c590(...);
// @baa 0x01117250
void C_01117250::sub_01117250(wxKeyEvent * param_2)
{
    undefined4 param_1 = (undefined4)this;

  bool bVar1;
  
  bVar1 = ((wxKeyEvent *)(param_2))->wxKeyEvent::ShiftDown();
  sub_0128c590(param_1,bVar1);
  return;
}

// @baa 0x01117970
void __stdcall sub_01117970(int a0) {  }

// @baa 0x01117980
void __stdcall sub_01117980(int a0) {  }

// @baa 0x01117990
void __stdcall sub_01117990(int a0) {  }

class wxEvent;
class wxUpdateUIEvent;
class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C_01117a00;
};

class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01117a00;
};

struct C_01117a00 {
    void sub_01117a00(wxEvent *);
};

// @baa 0x01117a00
void C_01117a00::sub_01117a00(wxEvent * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
  switch(iVar1) {
  case 0x19a2:
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x1e4) + 0x18) == 0);
    return;
  case 0x19a3:
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x1e4) + 0x18) == 1);
    return;
  case 0x19a4:
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x1e4) + 0x18) == 2);
    return;
  case 0x19a5:
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x1e4) + 0x18) == 3);
  }
  return;
}

// @baa 0x01117ed0
void __stdcall sub_01117ed0(int a0) {  }

// @baa 0x01117ee0
void __stdcall sub_01117ee0(int a0) {  }

struct C_01118bf0 { int sub_01118bf0(void); };

// @baa 0x01118bf0
int C_01118bf0::sub_01118bf0(void) { return *(int*)((char*)this + 504); }

struct C_01118c00 { int sub_01118c00(void); };

// @baa 0x01118c00
int C_01118c00::sub_01118c00(void) { return *(int*)((char*)this + 496); }

struct C_01118c10 { int sub_01118c10(void); };

// @baa 0x01118c10
int C_01118c10::sub_01118c10(void) { return *(int*)((char*)this + 500); }

struct C_01118c20 { int sub_01118c20(void); };

// @baa 0x01118c20
int C_01118c20::sub_01118c20(void) { return *(int*)((char*)this + 492); }

// @baa 0x01118d20
bool sub_01118d20(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_01118d40 { void sub_01118d40(void); };

// @baa 0x01118d40
void C_01118d40::sub_01118d40(void) { *(int*)((char*)this + 4) = 0; }

struct C_01118d50 { int sub_01118d50(void); };

// @baa 0x01118d50
int C_01118d50::sub_01118d50(void) { return *(int*)((char*)this + 4); }

struct C_01118d60 { int sub_01118d60(void); };

// @baa 0x01118d60
int C_01118d60::sub_01118d60(void) { return *(int*)((char*)this + 4); }

struct C_01118d70 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01118d70(INT Index);
};

// @baa 0x01118d70
UBOOL C_01118d70::sub_01118d70(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01118d90 { int sub_01118d90(void); };

// @baa 0x01118d90
int C_01118d90::sub_01118d90(void) { return *(int*)((char*)this + 4); }

struct C_01118da0 { int sub_01118da0(void); };

// @baa 0x01118da0
int C_01118da0::sub_01118da0(void) { return *(int*)((char*)this + 4); }

struct C_01118db0 { int sub_01118db0(void); };

// @baa 0x01118db0
int C_01118db0::sub_01118db0(void) { return *(int*)((char*)this + 4); }

struct C_01118dc0 { int sub_01118dc0(void); };

// @baa 0x01118dc0
int C_01118dc0::sub_01118dc0(void) { return *(int*)((char*)this + 4); }

struct C_01118dd0 { int sub_01118dd0(void); };

// @baa 0x01118dd0
int C_01118dd0::sub_01118dd0(void) { return *(int*)((char*)this + 4); }

struct C_01118de0 { int sub_01118de0(void); };

// @baa 0x01118de0
int C_01118de0::sub_01118de0(void) { return *(int*)((char*)this + 4); }

struct C_01118df0 {
    char pad[4];
    int field;
    void* sub_01118df0();
};

// @baa 0x01118df0
void* C_01118df0::sub_01118df0() {
    ++field;
    return this;
}

struct C_01118e00 { int sub_01118e00(void); };

// @baa 0x01118e00
int C_01118e00::sub_01118e00(void) { return *(int*)((char*)this + 4); }

struct C_01118e10 { int sub_01118e10(void); };

// @baa 0x01118e10
int C_01118e10::sub_01118e10(void) { return *(int*)((char*)this + 4); }

struct C_01118e20 { int sub_01118e20(void); };

// @baa 0x01118e20
int C_01118e20::sub_01118e20(void) { return *(int*)((char*)this + 4); }

struct C_01118e30 { int sub_01118e30(void); };

// @baa 0x01118e30
int C_01118e30::sub_01118e30(void) { return *(int*)((char*)this + 4); }

struct C_01118e40 { int a, b; C_01118e40(int, int); };

// @baa 0x01118e40
C_01118e40::C_01118e40(int x, int y) : a(x), b(y) {}

struct C_01118e60 { int a, b; C_01118e60(int, int); };

// @baa 0x01118e60
C_01118e60::C_01118e60(int x, int y) : a(x), b(y) {}

struct C_01118e80 { int a, b; C_01118e80(int, int); };

// @baa 0x01118e80
C_01118e80::C_01118e80(int x, int y) : a(x), b(y) {}

// @baa 0x01118ea0
int sub_01118ea0(int a0) { return *(int*)a0; }

struct C_01118eb0 {
    void sub_01118eb0(int *);
};

// @baa 0x01118eb0
void C_01118eb0::sub_01118eb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01118ec0
int sub_01118ec0(int a0) { return *(int*)a0; }

// @baa 0x01118ed0
bool sub_01118ed0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01118ee0 { int a, b; C_01118ee0(const C_01118ee0 &); };

// @baa 0x01118ee0
C_01118ee0::C_01118ee0(const C_01118ee0 &o) : a(o.a), b(o.b) {}

// @baa 0x01118f20
int sub_01118f20(int a0) { return *(int*)a0; }

// @baa 0x01118f30
bool sub_01118f30(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01118f40 { int a, b; C_01118f40(const C_01118f40 &); };

// @baa 0x01118f40
C_01118f40::C_01118f40(const C_01118f40 &o) : a(o.a), b(o.b) {}

class wxCursor;
class wxCursor {
    public:
    public: __declspec(dllimport) wxCursor(wxCursor const &);
    friend struct C_01118f80;
};

struct C_01118f80 {
    wxCursor * sub_01118f80(wxCursor *);
};

extern undefined * g_021bd2c4;
// @baa 0x01118f80
wxCursor * C_01118f80::sub_01118f80(wxCursor * param_2)
{
    wxCursor * param_1 = (wxCursor *)this;
  ((wxCursor *)(param_1))->wxCursor::wxCursor(*(const wxCursor *)(param_2));
  *(undefined ***)param_1 = &g_021bd2c4;
  return param_1;
}

struct C_01118ff0 { int a, b; C_01118ff0(const C_01118ff0 &); };

// @baa 0x01118ff0
C_01118ff0::C_01118ff0(const C_01118ff0 &o) : a(o.a), b(o.b) {}

struct C_01119010 { int a, b; C_01119010(const C_01119010 &); };

// @baa 0x01119010
C_01119010::C_01119010(const C_01119010 &o) : a(o.a), b(o.b) {}

struct A_01119030 { virtual void sub_0111b3b0(); char pad[420]; };

struct B_01119030 { virtual void sub_0111b3b0(); };

struct C_01119030 : A_01119030, B_01119030 { virtual void sub_0111b3b0(); C_01119030(); };

C_01119030::C_01119030() {}

// @baa 0x01119030
void C_01119030::sub_0111b3b0() {}

struct A_01119040 { virtual void sub_0111a300(); char pad[432]; };

struct B_01119040 { virtual void sub_0111a300(); };

struct C_01119040 : A_01119040, B_01119040 { virtual void sub_0111a300(); C_01119040(); };

C_01119040::C_01119040() {}

// @baa 0x01119040
void C_01119040::sub_0111a300() {}

struct A_01119050 { virtual void sub_0111b3b0(); char pad[796]; };

struct B_01119050 { virtual void sub_0111b3b0(); };

struct C_01119050 : A_01119050, B_01119050 { virtual void sub_0111b3b0(); C_01119050(); };

C_01119050::C_01119050() {}

// @baa 0x01119050
void C_01119050::sub_0111b3b0() {}

struct A_01119060 { virtual void sub_0111b3b0(); char pad[424]; };

struct B_01119060 { virtual void sub_0111b3b0(); };

struct C_01119060 : A_01119060, B_01119060 { virtual void sub_0111b3b0(); C_01119060(); };

C_01119060::C_01119060() {}

// @baa 0x01119060
void C_01119060::sub_0111b3b0() {}

struct A_01119070 { virtual void sub_0111b3b0(); char pad[408]; };

struct B_01119070 { virtual void sub_0111b3b0(); };

struct C_01119070 : A_01119070, B_01119070 { virtual void sub_0111b3b0(); C_01119070(); };

C_01119070::C_01119070() {}

// @baa 0x01119070
void C_01119070::sub_0111b3b0() {}

struct V_01119080 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual void v121();
    virtual void v122();
    virtual void v123();
    virtual void v124();
    virtual void v125();
    virtual void v126();
    virtual void v127();
    virtual void v128();
    virtual void v129();
    virtual void v130();
    virtual void v131();
    virtual void v132();
    virtual void v133();
    virtual void v134();
    virtual void v135();
    virtual void v136();
    virtual void v137();
    virtual void v138();
    virtual void v139();
    virtual void v140();
    virtual void v141();
    virtual void v142();
    virtual void v143();
    virtual void v144();
    virtual void v145();
    virtual void v146();
    virtual void v147();
    virtual void v148();
    virtual void v149();
    virtual void v150();
    virtual void v151();
    virtual void v152();
    virtual void v153();
    virtual void v154();
    virtual void v155();
    virtual void v156();
    virtual void v157();
    virtual void v158();
    virtual void v159();
    virtual void v160();
    virtual void v161();
    virtual void v162();
    virtual void v163();
    virtual void v164();
    virtual void v165();
    virtual void v166();
    virtual void v167();
    virtual void v168();
    virtual void v169();
    virtual void v170();
    virtual void v171();
    virtual void v172();
    virtual void v173();
    virtual void v174();
    virtual void v175();
    virtual void v176();
    virtual void v177();
    virtual void v178();
    virtual void v179();
    virtual void v180();
    virtual void v181();
    virtual void v182();
    virtual void v183();
    virtual void v184();
    virtual void v185();
    virtual void v186();
    virtual void v187();
    virtual void v188();
    virtual void v189();
    virtual void v190();
    virtual void v191();
    virtual void v192();
    virtual void v193();
    virtual void v194();
    virtual void v195();
    virtual void v196();
    virtual void v197();
    virtual void v198();
    virtual void v199();
    virtual void v200();
    virtual void v201();
    virtual void v202();
    virtual void v203();
    virtual void v204();
    virtual void v205();
    virtual void v206();
    virtual void v207();
    virtual void v208();
    virtual void v209();
    virtual void v210();
    virtual void v211();
    virtual void v212();
    virtual void v213();
    virtual void v214();
    virtual void v215();
    virtual void v216();
    virtual void v217();
    virtual void v218();
    virtual void v219();
    virtual void v220();
    virtual void v221();
    virtual void v222();
    virtual void v223();
    virtual void v224();
    virtual void v225();
    virtual void v226();
    virtual void v227();
    virtual void v228();
    virtual void v229();
    virtual void v230();
    virtual void v231();
    virtual void v232();
    virtual void v233();
    virtual void v234();
    virtual void v235();
    virtual void v236();
    virtual void v237();
    virtual void v238();
    virtual void g();
};

// @baa 0x01119080
void (V_01119080::*sub_01119080)() = &V_01119080::g;

struct A_01119090 { virtual void sub_0111b390(); char pad[408]; };

struct B_01119090 { virtual void sub_0111b390(); };

struct C_01119090 : A_01119090, B_01119090 { virtual void sub_0111b390(); C_01119090(); };

C_01119090::C_01119090() {}

// @baa 0x01119090
void C_01119090::sub_0111b390() {}

// @baa 0x011190a0
void sub_011190a0(void) {  }

// @baa 0x011190b0
float10 sub_011190b0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01119110
undefined2 sub_01119110(void)
{
  return 0x69;
}

// @baa 0x01119120
undefined2 sub_01119120(void)
{
  return 0x73;
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

// @baa 0x01119130
void sub_01119130(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01119150 { void sub_01119150(int a0); };

// @baa 0x01119150
void C_01119150::sub_01119150(int a0) { *(int*)((char*)this + 92) = a0; }

struct C_01119160 { void sub_01119160(int a0); };

// @baa 0x01119160
void C_01119160::sub_01119160(int a0) { *(int*)((char*)this + 96) = a0; }

struct C_01119170 { void sub_01119170(int a0); };

// @baa 0x01119170
void C_01119170::sub_01119170(int a0) { *(int*)((char*)this + 100) = a0; }

// @baa 0x01119190
void __stdcall sub_01119190(int a0) {  }

class wxComboBox;
class wxComboBox {
    public:
    public: __declspec(dllimport) wxComboBox();
    friend struct C_011191a0;
};

struct C_011191a0 {
    wxComboBox * sub_011191a0();
};

extern undefined4 g_021bd2e8;
extern undefined * g_021bd328;
// @baa 0x011191a0
wxComboBox * C_011191a0::sub_011191a0(void)
{
    wxComboBox * param_1 = (wxComboBox *)this;

  ((wxComboBox *)(param_1))->wxComboBox::wxComboBox();
  *(undefined ***)param_1 = &g_021bd328;
  *(undefined ***)(param_1 + 0x150) = (undefined **)(&g_021bd2e8);
  return param_1;
}

struct C_01119280 { void sub_01119280(int a0); };

// @baa 0x01119280
void C_01119280::sub_01119280(int a0) { *(int*)((char*)this + 272) = a0; }

struct C_011192c0 { char* sub_011192c0(void); };

// @baa 0x011192c0
char* C_011192c0::sub_011192c0(void) { return (char*)this + 8; }

struct C_011192e0 { int a, b; C_011192e0(int, int); };

// @baa 0x011192e0
C_011192e0::C_011192e0(int x, int y) : a(x), b(y) {}

struct C_01119330 { int sub_01119330(void); };

// @baa 0x01119330
int C_01119330::sub_01119330(void) { return *(int*)((char*)this + 40); }

struct C_01119340 { int sub_01119340(void); };

// @baa 0x01119340
int C_01119340::sub_01119340(void) { return *(int*)((char*)this + 36); }

struct C_01119390 { int sub_01119390(void); };

// @baa 0x01119390
int C_01119390::sub_01119390(void) { return *(int*)((char*)this + 424); }

struct C_011193a0 { int sub_011193a0(void); };

// @baa 0x011193a0
int C_011193a0::sub_011193a0(void) { return *(int*)((char*)this + 336); }

struct C_011193b0 {
    bool sub_011193b0();
};

// @baa 0x011193b0
bool C_011193b0::sub_011193b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x160) == 0;
}

struct C_011193c0 {
    bool sub_011193c0();
};

// @baa 0x011193c0
bool C_011193c0::sub_011193c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x160) == 1;
}

// @baa 0x011193d0
int sub_011193d0(int a0, int a1) { return a1; }

extern char g_02158c10[];
// @baa 0x011193e0
int sub_011193e0(void) { return (int)g_02158c10; }

int sub_005c7a20(void);
extern undefined * g_021bd6b8;
// @baa 0x011193f0
undefined4 * UObject::sub_011193f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd6b8);
  return param_1;
}

// @baa 0x01119410
IMPLEMENT_CLASS_AT(UCurveEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEd.cpp", 33);

// @baa 0x01119470
struct C_011194a0 { C_011194a0* sub_011194a0(int a0); };

// @baa 0x011194a0
C_011194a0* C_011194a0::sub_011194a0(int a0) { return this; }

// @baa 0x01119510
int sub_01119510(int a0, int a1) { return a1; }

// @baa 0x01119520
void sub_01119520(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x01119540
IMPLEMENT_CLASS_AT(UCurveEdPresetBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 8);

extern undefined * g_021bd7c8;
// @baa 0x011195a0
undefined4 * UObject::sub_011195a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd7c8);
  return param_1;
}

// @baa 0x011195c0
// @baa 0x011195e0
undefined4 sub_011195e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_021bd8d8;
// @baa 0x011195f0
undefined4 * UObject::sub_011195f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd8d8);
  return param_1;
}

// @baa 0x01119610
IMPLEMENT_CLASS_AT(UCurveEdPreset_CosWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 9);

// @baa 0x01119670
// @baa 0x01119690
undefined4 sub_01119690(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_021bd9e8;
// @baa 0x011196a0
undefined4 * UObject::sub_011196a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd9e8);
  return param_1;
}

// @baa 0x011196c0
IMPLEMENT_CLASS_AT(UCurveEdPreset_LinearDecay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 10);

// @baa 0x01119720
// @baa 0x01119740
undefined4 sub_01119740(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_021bdaf8;
// @baa 0x01119750
undefined4 * UObject::sub_01119750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdaf8);
  return param_1;
}

// @baa 0x01119770
IMPLEMENT_CLASS_AT(UCurveEdPreset_Nothing, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 11);

// @baa 0x011197d0
// @baa 0x011197f0
undefined4 sub_011197f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_021bdc08;
// @baa 0x01119800
undefined4 * UObject::sub_01119800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdc08);
  return param_1;
}

// @baa 0x01119820
IMPLEMENT_CLASS_AT(UCurveEdPreset_SineWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 12);

// @baa 0x01119880
// @baa 0x011198a0
undefined4 sub_011198a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_021bdd18;
// @baa 0x011198b0
undefined4 * UObject::sub_011198b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdd18);
  return param_1;
}

// @baa 0x011198d0
IMPLEMENT_CLASS_AT(UCurveEdPreset_UserSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 13);

// @baa 0x01119930
int sub_0115d990(void);
int sub_01161ca0(...);
extern undefined4 g_026d0f94;
// @baa 0x01119950
int sub_01119950(void)
{
  if (g_026d0f94 == 0) {
    g_026d0f94 = sub_01161ca0(L"UnrealEd");
    sub_0115d990();
  }
  return g_026d0f94;
}

int sub_01161d60(...);
int sub_0117b690(void);
extern undefined4 g_026d0f9c;
// @baa 0x01119980
int sub_01119980(void)
{
  if (g_026d0f9c == 0) {
    g_026d0f9c = sub_01161d60(L"UnrealEd");
    sub_0117b690();
  }
  return g_026d0f9c;
}

int sub_01179740(...);
int sub_0117b7e0(void);
extern undefined4 g_026d0fa0;
// @baa 0x011199b0
int sub_011199b0(void)
{
  if (g_026d0fa0 == 0) {
    g_026d0fa0 = sub_01179740(L"UnrealEd");
    sub_0117b7e0();
  }
  return g_026d0fa0;
}

int sub_01179800(...);
int sub_0117b930(void);
extern undefined4 g_026d0fa4;
// @baa 0x011199e0
int sub_011199e0(void)
{
  if (g_026d0fa4 == 0) {
    g_026d0fa4 = sub_01179800(L"UnrealEd");
    sub_0117b930();
  }
  return g_026d0fa4;
}

int sub_011798c0(...);
int sub_0117ba80(void);
extern undefined4 g_026d0fa8;
// @baa 0x01119a10
int sub_01119a10(void)
{
  if (g_026d0fa8 == 0) {
    g_026d0fa8 = sub_011798c0(L"UnrealEd");
    sub_0117ba80();
  }
  return g_026d0fa8;
}

int sub_01179980(...);
int sub_0117bbd0(void);
extern undefined4 g_026d0fac;
// @baa 0x01119a40
int sub_01119a40(void)
{
  if (g_026d0fac == 0) {
    g_026d0fac = sub_01179980(L"UnrealEd");
    sub_0117bbd0();
  }
  return g_026d0fac;
}

int sub_01161e20(...);
int sub_01170f40(void);
extern undefined4 g_026d0fb0;
// @baa 0x01119a70
int sub_01119a70(void)
{
  if (g_026d0fb0 == 0) {
    g_026d0fb0 = sub_01161e20(L"UnrealEd");
    sub_01170f40();
  }
  return g_026d0fb0;
}

int sub_011712a0(void);
int sub_01179a40(...);
extern undefined4 g_026d0fb4;
// @baa 0x01119aa0
int sub_01119aa0(void)
{
  if (g_026d0fb4 == 0) {
    g_026d0fb4 = sub_01179a40(L"UnrealEd");
    sub_011712a0();
  }
  return g_026d0fb4;
}

int sub_011714c0(void);
int sub_01179b00(...);
extern undefined4 g_026d0fb8;
// @baa 0x01119ad0
int sub_01119ad0(void)
{
  if (g_026d0fb8 == 0) {
    g_026d0fb8 = sub_01179b00(L"UnrealEd");
    sub_011714c0();
  }
  return g_026d0fb8;
}

struct C_01119b00 { char* sub_01119b00(void); };

// @baa 0x01119b00
char* C_01119b00::sub_01119b00(void) { return (char*)this + 416; }

struct C_01119b10 { char* sub_01119b10(void); };

// @baa 0x01119b10
char* C_01119b10::sub_01119b10(void) { return (char*)this + 428; }

struct C_01119b20 { char* sub_01119b20(void); };

// @baa 0x01119b20
char* C_01119b20::sub_01119b20(void) { return (char*)this + 440; }

struct C_01119b30 { char* sub_01119b30(void); };

// @baa 0x01119b30
char* C_01119b30::sub_01119b30(void) { return (char*)this + 416; }

struct C_01119b40 { int sub_01119b40(void); };

// @baa 0x01119b40
int C_01119b40::sub_01119b40(void) { return *(int*)((char*)this + 428); }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d0e40;
extern undefined4 g_026d0e44;
extern undefined4 g_026d0e48;
// @baa 0x01119b50
undefined * sub_01119b50(void)
{
  if ((g_026d0e48 & 1) == 0) {
    g_026d0e48 = g_026d0e48 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e40 = (undefined4)(&g_026af518);
    g_026d0e44 = (undefined4)(L"HCurveEdLabelProxy");
  }
  return (undefined *)(&g_026d0e40);
}

struct C_view_01119ba0 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bde4c;
// @baa 0x01119ba0
undefined4 * UUnrealEdEngine::sub_01119ba0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119ba0 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021bde4c);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x01119bd0
void sub_01119bd0(void) { sub_00c38ac0(); }

extern undefined4 g_026d0e4c;
extern undefined4 g_026d0e50;
extern undefined4 g_026d0e54;
// @baa 0x01119be0
undefined * sub_01119be0(void)
{
  if ((g_026d0e54 & 1) == 0) {
    g_026d0e54 = g_026d0e54 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e4c = (undefined4)(&g_026af518);
    g_026d0e50 = (undefined4)(L"HCurveEdHideCurveProxy");
  }
  return (undefined *)(&g_026d0e4c);
}

struct C_view_01119c30 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bde8c;
// @baa 0x01119c30
undefined4 * UUnrealEdEngine::sub_01119c30(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119c30 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021bde8c);
  return param_1;
}

// @baa 0x01119c60
void sub_01119c60(void) { sub_00c38ac0(); }

extern undefined4 g_026d0e58;
extern undefined4 g_026d0e5c;
extern undefined4 g_026d0e60;
// @baa 0x01119c70
undefined * sub_01119c70(void)
{
  if ((g_026d0e60 & 1) == 0) {
    g_026d0e60 = g_026d0e60 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e58 = (undefined4)(&g_026af518);
    g_026d0e5c = (undefined4)(L"HCurveEdKeyProxy");
  }
  return (undefined *)(&g_026d0e58);
}

struct C_view_01119cc0 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bdec0;
// @baa 0x01119cc0
undefined4 * UUnrealEdEngine::sub_01119cc0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119cc0 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021bdec0);
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

// @baa 0x01119d00
void sub_01119d00(void) { sub_00c38ac0(); }

extern undefined4 g_026d0e64;
extern undefined4 g_026d0e68;
extern undefined4 g_026d0e6c;
// @baa 0x01119d10
undefined * sub_01119d10(void)
{
  if ((g_026d0e6c & 1) == 0) {
    g_026d0e6c = g_026d0e6c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e64 = (undefined4)(&g_026af518);
    g_026d0e68 = (undefined4)(L"HCurveEdKeyHandleProxy");
  }
  return (undefined *)(&g_026d0e64);
}

// @baa 0x01119db0
void sub_01119db0(void) { sub_00c38ac0(); }

extern undefined4 g_026d0e70;
extern undefined4 g_026d0e74;
extern undefined4 g_026d0e78;
// @baa 0x01119dc0
undefined * sub_01119dc0(void)
{
  if ((g_026d0e78 & 1) == 0) {
    g_026d0e78 = g_026d0e78 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e70 = (undefined4)(&g_026af518);
    g_026d0e74 = (undefined4)(L"HCurveEdLineProxy");
  }
  return (undefined *)(&g_026d0e70);
}

struct C_view_01119e10 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bdf34;
// @baa 0x01119e10
undefined4 * UUnrealEdEngine::sub_01119e10(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119e10 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021bdf34);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x01119e50
void sub_01119e50(void) { sub_00c38ac0(); }

struct C_view_01119e60 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bdf44;
// @baa 0x01119e60
undefined4 * UUnrealEdEngine::sub_01119e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119e60 *)(this))->sub_00c407b0(2);
  *param_1 = (undefined4)(&g_021bdf44);
  return param_1;
}

extern undefined4 g_026d0e7c;
extern undefined4 g_026d0e80;
extern undefined4 g_026d0e84;
// @baa 0x01119e80
undefined * sub_01119e80(void)
{
  if ((g_026d0e84 & 1) == 0) {
    g_026d0e84 = g_026d0e84 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e7c = (undefined4)(&g_026af518);
    g_026d0e80 = (undefined4)(L"HCurveEdLabelBkgProxy");
  }
  return (undefined *)(&g_026d0e7c);
}

// @baa 0x01119ee0
void sub_01119ee0(void) { sub_00c38ac0(); }

extern undefined4 g_026d0e88;
extern undefined4 g_026d0e8c;
extern undefined4 g_026d0e90;
// @baa 0x01119ef0
undefined * sub_01119ef0(void)
{
  if ((g_026d0e90 & 1) == 0) {
    g_026d0e90 = g_026d0e90 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d0e88 = (undefined4)(&g_026af518);
    g_026d0e8c = (undefined4)(L"HCurveEdHideSubCurveProxy");
  }
  return (undefined *)(&g_026d0e88);
}

struct C_view_01119f40 {
    int sub_00c407b0(int);
};

extern undefined4 g_021bdfb4;
// @baa 0x01119f40
undefined4 * UUnrealEdEngine::sub_01119f40(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_01119f40 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_021bdfb4);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x01119f80
void sub_01119f80(void) { sub_00c38ac0(); }

struct C_01119fe0 {
    undefined4 sub_01119fe0(int *);
};

// @baa 0x01119fe0
undefined4 C_01119fe0::sub_01119fe0(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_0111a020 { int sub_0111a020(void); };

// @baa 0x0111a020
int C_0111a020::sub_0111a020(void) { return *(int*)((char*)this + 4); }

struct C_0111a030 { int sub_0111a030(void); };

// @baa 0x0111a030
int C_0111a030::sub_0111a030(void) { return *(int*)((char*)this + 4); }

struct C_0111a040 { int sub_0111a040(void); };

// @baa 0x0111a040
int C_0111a040::sub_0111a040(void) { return *(int*)((char*)this + 0); }

struct C_0111a050 { int sub_0111a050(void); };

// @baa 0x0111a050
int C_0111a050::sub_0111a050(void) { return *(int*)((char*)this + 0); }

struct A_0111a060 { virtual void sub_0111d500(); char pad[332]; };

struct B_0111a060 { virtual void sub_0111d500(); };

struct C_0111a060 : A_0111a060, B_0111a060 { virtual void sub_0111d500(); C_0111a060(); };

C_0111a060::C_0111a060() {}

// @baa 0x0111a060
void C_0111a060::sub_0111d500() {}

struct C_0111a0d0 {
    void sub_0111a0d0(int *);
};

// @baa 0x0111a0d0
void C_0111a0d0::sub_0111a0d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x1e8;
  param_2[1] = 0;
  return;
}

struct C_0111a0f0 {
    void sub_0111a0f0(int *);
};

// @baa 0x0111a0f0
void C_0111a0f0::sub_0111a0f0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(param_1 + 0x1cc) + 0x1e8;
  param_2[1] = 0;
  return;
}

struct C_0111a110 {
    void sub_0111a110(int *);
};

// @baa 0x0111a110
void C_0111a110::sub_0111a110(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x1cc) + 0x1e8;
  param_2[1] = 0;
  return;
}

struct A_0111a220 { virtual void sub_0111d8d0(); char pad[36]; };

struct B_0111a220 { virtual void sub_0111d8d0(); };

struct C_0111a220 : A_0111a220, B_0111a220 { virtual void sub_0111d8d0(); C_0111a220(); };

C_0111a220::C_0111a220() {}

// @baa 0x0111a220
void C_0111a220::sub_0111d8d0() {}

struct C_0111a250 {
    int sub_0111a250();
};

// @baa 0x0111a250
int C_0111a250::sub_0111a250(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x150) != 0)) {
    return ((*(int *)(param_1 + 0x148) + -1) / 2) * 0x24 + 0x3c;
  }
  return 0x18;
}

struct C_0111a300 {
    undefined4 sub_0111a300(byte);
};

int sub_0053dfa0(...);
int sub_011157c0(void);
// @baa 0x0111a300
undefined4 C_0111a300::sub_0111a300(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011157c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111a940
// @baa 0x0111aa70
bool UCurveEdOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0111aab0 {
    undefined4 * sub_0111aab0(byte);
};

int sub_00f80980(void);
extern undefined4 g_021bc5cc;
extern undefined * g_021bc5d0;
// @baa 0x0111aab0
undefined4 * C_0111aab0::sub_0111aab0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021bc5d0);
  param_1[1] = (undefined4)(&g_021bc5cc);
  sub_00f80980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0111b070 {
    undefined4 sub_0111b070(byte);
};

int sub_01116330(void);
// @baa 0x0111b070
undefined4 C_0111b070::sub_0111b070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01116330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_0111b190 { virtual void sub_0111d8f0(); char pad[412]; };

struct B_0111b190 { virtual void sub_0111d8f0(); };

struct C_0111b190 : A_0111b190, B_0111b190 { virtual void sub_0111d8f0(); C_0111b190(); };

C_0111b190::C_0111b190() {}

// @baa 0x0111b190
void C_0111b190::sub_0111d8f0() {}

// @baa 0x0111b1e0
// @baa 0x0111b2f0
int UCurveEdPresetBase::vf_000(void) { return 1; }

// @baa 0x0111b300
bool UCurveEdPresetBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0111b340
int UCurveEdPreset_CosWave::vf_000(void) { return 1; }

// @baa 0x0111b350
int UCurveEdPreset_LinearDecay::vf_000(void) { return 1; }

// @baa 0x0111b360
int UCurveEdPreset_Nothing::vf_000(void) { return 1; }

// @baa 0x0111b370
int UCurveEdPreset_SineWave::vf_000(void) { return 1; }

// @baa 0x0111b380
int UCurveEdPreset_UserSet::vf_000(void) { return 1; }

struct C_0111b390 {
    undefined4 sub_0111b390(byte);
};

int sub_011cd850(void);
// @baa 0x0111b390
undefined4 C_0111b390::sub_0111b390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011cd850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_011ba1b0(void);
// @baa 0x0111b3b0
undefined4 * UUnrealEdEngine::sub_0111b3b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021bcef8);
  param_1[0x67] = (undefined4)(&g_021bceec);
  param_1[0x68] = (undefined4)(&g_021bced4);
  param_1[0x69] = (undefined4)(&g_021bce48);
  param_1[0x6a] = (undefined4)(&g_021bce40);
  param_1[0x6b] = (undefined4)(&g_021bce30);
  param_1[200] = (undefined4)(&g_021bce0c);
  sub_011ba1b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_011d5d00(void);
// @baa 0x0111bdf0
undefined4 UFracturedStaticMeshComponent::sub_0111bdf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011d5d00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0111c500 { int sub_0111c500(void); };

// @baa 0x0111c500
int C_0111c500::sub_0111c500(void) { return *(int*)((char*)this + 0); }

struct C_0111c510 { int sub_0111c510(void); };

// @baa 0x0111c510
int C_0111c510::sub_0111c510(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[24]; };

struct S_0111c520 {
    TArray<E> Items; // 0x00
    const E* sub_0111c520(INT Index) const;
};

// @baa 0x0111c520
const E* S_0111c520::sub_0111c520(INT Index) const
{
    return &Items(Index);
}

struct C_0111c5a0 { int a, b, c; C_0111c5a0(); };

// @baa 0x0111c5a0
C_0111c5a0::C_0111c5a0() : a(0), b(0), c(0) {}

struct C_0111c5b0 { int a, b, c; C_0111c5b0(); };

// @baa 0x0111c5b0
C_0111c5b0::C_0111c5b0() : a(0), b(0), c(0) {}

struct C_0111c5c0 { int a, b, c; C_0111c5c0(); };

// @baa 0x0111c5c0
C_0111c5c0::C_0111c5c0() : a(0), b(0), c(0) {}

struct C_0111c5d0 { int a, b, c; C_0111c5d0(); };

// @baa 0x0111c5d0
C_0111c5d0::C_0111c5d0() : a(0), b(0), c(0) {}

struct C_0111c5e0 { int a, b, c; C_0111c5e0(); };

// @baa 0x0111c5e0
C_0111c5e0::C_0111c5e0() : a(0), b(0), c(0) {}

struct C_0111c5f0 { int a, b, c; C_0111c5f0(); };

// @baa 0x0111c5f0
C_0111c5f0::C_0111c5f0() : a(0), b(0), c(0) {}

struct C_0111c600 { int a, b, c; C_0111c600(); };

// @baa 0x0111c600
C_0111c600::C_0111c600() : a(0), b(0), c(0) {}

struct C_0111c610 { int sub_0111c610(void); };

// @baa 0x0111c610
int C_0111c610::sub_0111c610(void) { return *(int*)((char*)this + 0); }

struct C_0111c650 { int a, b, c; C_0111c650(); };

// @baa 0x0111c650
C_0111c650::C_0111c650() : a(0), b(0), c(0) {}

struct C_0111c660 { int a, b, c; C_0111c660(); };

// @baa 0x0111c660
C_0111c660::C_0111c660() : a(0), b(0), c(0) {}

struct C_0111c670 { int a, b, c; C_0111c670(); };

// @baa 0x0111c670
C_0111c670::C_0111c670() : a(0), b(0), c(0) {}

struct C_0111c680 { int a, b, c; C_0111c680(); };

// @baa 0x0111c680
C_0111c680::C_0111c680() : a(0), b(0), c(0) {}

struct C_0111c690 { int a, b, c; C_0111c690(); };

// @baa 0x0111c690
C_0111c690::C_0111c690() : a(0), b(0), c(0) {}

struct C_0111c710 { int sub_0111c710(void); };

// @baa 0x0111c710
int C_0111c710::sub_0111c710(void) { return *(int*)((char*)this + 0); }

struct C_0111c790 { int sub_0111c790(void); };

// @baa 0x0111c790
int C_0111c790::sub_0111c790(void) { return *(int*)((char*)this + 0); }

struct C_0111c810 { int sub_0111c810(void); };

// @baa 0x0111c810
int C_0111c810::sub_0111c810(void) { return *(int*)((char*)this + 0); }

struct C_0111c890 { int sub_0111c890(void); };

// @baa 0x0111c890
int C_0111c890::sub_0111c890(void) { return *(int*)((char*)this + 0); }

struct C_0111c910 { int sub_0111c910(void); };

// @baa 0x0111c910
int C_0111c910::sub_0111c910(void) { return *(int*)((char*)this + 0); }

struct C_0111c990 { int sub_0111c990(void); };

// @baa 0x0111c990
int C_0111c990::sub_0111c990(void) { return *(int*)((char*)this + 0); }

struct C_0111ca80 { int sub_0111ca80(void); };

// @baa 0x0111ca80
int C_0111ca80::sub_0111ca80(void) { return *(int*)((char*)this + 0); }

struct C_0111ca90 { int sub_0111ca90(void); };

// @baa 0x0111ca90
int C_0111ca90::sub_0111ca90(void) { return *(int*)((char*)this + 0); }

struct C_0111cb20 { int sub_0111cb20(void); };

// @baa 0x0111cb20
int C_0111cb20::sub_0111cb20(void) { return *(int*)((char*)this + 0); }

struct C_0111cb30 { int sub_0111cb30(void); };

// @baa 0x0111cb30
int C_0111cb30::sub_0111cb30(void) { return *(int*)((char*)this + 0); }

struct C_0111cbb0 { int sub_0111cbb0(void); };

// @baa 0x0111cbb0
int C_0111cbb0::sub_0111cbb0(void) { return *(int*)((char*)this + 0); }

struct C_0111cbc0 { int sub_0111cbc0(void); };

// @baa 0x0111cbc0
int C_0111cbc0::sub_0111cbc0(void) { return *(int*)((char*)this + 0); }

struct C_0111cc40 {
    int sub_0111cc40();
};

// @baa 0x0111cc40
int C_0111cc40::sub_0111cc40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0111cc50 {
    int sub_0111cc50();
};

// @baa 0x0111cc50
int C_0111cc50::sub_0111cc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0111cc60 {
    int sub_0111cc60();
};

// @baa 0x0111cc60
int C_0111cc60::sub_0111cc60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0111ccf0 { int sub_0111ccf0(void); };

// @baa 0x0111ccf0
int C_0111ccf0::sub_0111ccf0(void) { return *(int*)((char*)this + 0); }

struct C_0111cd00 { int sub_0111cd00(void); };

// @baa 0x0111cd00
int C_0111cd00::sub_0111cd00(void) { return *(int*)((char*)this + 0); }

struct C_0111cd10 { int sub_0111cd10(void); };

// @baa 0x0111cd10
int C_0111cd10::sub_0111cd10(void) { return *(int*)((char*)this + 0); }

struct C_0111cd20 { int sub_0111cd20(void); };

// @baa 0x0111cd20
int C_0111cd20::sub_0111cd20(void) { return *(int*)((char*)this + 0); }

struct C_0111cd30 { int sub_0111cd30(void); };

// @baa 0x0111cd30
int C_0111cd30::sub_0111cd30(void) { return *(int*)((char*)this + 0); }

struct C_0111cd40 { int sub_0111cd40(void); };

// @baa 0x0111cd40
int C_0111cd40::sub_0111cd40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0111cd50 { int sub_0111cd50(void); };

// @baa 0x0111cd50
int C_0111cd50::sub_0111cd50(void) { return *(int*)((char*)this + 0); }

struct S_0111cd60 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0111cd60(INT Index);
};

// @baa 0x0111cd60
QWORD* S_0111cd60::sub_0111cd60(INT Index)
{
    return &Items(Index);
}

struct C_0111cdb0 { int sub_0111cdb0(void); };

// @baa 0x0111cdb0
int C_0111cdb0::sub_0111cdb0(void) { return *(int*)((char*)this + 0); }

struct E_0111cdc0 { BYTE Bytes[16]; };

struct S_0111cdc0 {
    TArray<E_0111cdc0> Items; // 0x00
    E_0111cdc0* sub_0111cdc0(INT Index);
};

// @baa 0x0111cdc0
E_0111cdc0* S_0111cdc0::sub_0111cdc0(INT Index)
{
    return &Items(Index);
}

struct C_0111ce10 { int sub_0111ce10(void); };

// @baa 0x0111ce10
int C_0111ce10::sub_0111ce10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0111ce40 { int sub_0111ce40(void); };

// @baa 0x0111ce40
int C_0111ce40::sub_0111ce40(void) { return *(int*)((char*)this + 0); }

struct C_0111cec0 { int sub_0111cec0(void); };

// @baa 0x0111cec0
int C_0111cec0::sub_0111cec0(void) { return *(int*)((char*)this + 0); }

struct C_0111ced0 { int sub_0111ced0(void); };

// @baa 0x0111ced0
int C_0111ced0::sub_0111ced0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0111cf00 { int sub_0111cf00(void); };

// @baa 0x0111cf00
int C_0111cf00::sub_0111cf00(void) { return *(int*)((char*)this + 0); }

struct C_0111cf10 { int sub_0111cf10(void); };

// @baa 0x0111cf10
int C_0111cf10::sub_0111cf10(void) { return *(int*)((char*)this + 0); }

struct C_0111cf20 { int sub_0111cf20(void); };

// @baa 0x0111cf20
int C_0111cf20::sub_0111cf20(void) { return *(int*)((char*)this + 0); }

struct C_0111cf30 { int sub_0111cf30(void); };

// @baa 0x0111cf30
int C_0111cf30::sub_0111cf30(void) { return *(int*)((char*)this + 0); }

struct S_0111cf40 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111cf40(INT Index);
};

// @baa 0x0111cf40
DWORD* S_0111cf40::sub_0111cf40(INT Index)
{
    return &Items(Index);
}

struct C_0111cf90 {
    int sub_0111cf90(int);
};

// @baa 0x0111cf90
int C_0111cf90::sub_0111cf90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0111cfb0
int sub_0111cfb0(int a0) { return a0; }

struct C_0111cfc0 {
    int sub_0111cfc0(int);
};

// @baa 0x0111cfc0
int C_0111cfc0::sub_0111cfc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111cfd0 {
    int sub_0111cfd0(int);
};

// @baa 0x0111cfd0
int C_0111cfd0::sub_0111cfd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111cfe0 {
    int sub_0111cfe0(int);
};

// @baa 0x0111cfe0
int C_0111cfe0::sub_0111cfe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0111d000 {
    int sub_0111d000(int);
};

// @baa 0x0111d000
int C_0111d000::sub_0111d000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111d010 {
    int sub_0111d010(int);
};

// @baa 0x0111d010
int C_0111d010::sub_0111d010(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111d020 { int sub_0111d020(void); };

// @baa 0x0111d020
int C_0111d020::sub_0111d020(void) { return *(int*)((char*)this + 20); }

struct C_0111d030 { int sub_0111d030(void); };

// @baa 0x0111d030
int C_0111d030::sub_0111d030(void) { return *(int*)((char*)this + 20); }

struct C_0111d040 { int sub_0111d040(void); };

// @baa 0x0111d040
int C_0111d040::sub_0111d040(void) { return *(int*)((char*)this + 20); }

struct C_0111d050 { int sub_0111d050(void); };

// @baa 0x0111d050
int C_0111d050::sub_0111d050(void) { return *(int*)((char*)this + 20); }

struct C_0111d060 { int sub_0111d060(void); };

// @baa 0x0111d060
int C_0111d060::sub_0111d060(void) { return *(int*)((char*)this + 20); }

struct C_0111d070 { int sub_0111d070(void); };

// @baa 0x0111d070
int C_0111d070::sub_0111d070(void) { return *(int*)((char*)this + 20); }

struct C_0111d080 { int sub_0111d080(void); };

// @baa 0x0111d080
int C_0111d080::sub_0111d080(void) { return *(int*)((char*)this + 20); }

struct C_0111d090 { int sub_0111d090(void); };

// @baa 0x0111d090
int C_0111d090::sub_0111d090(void) { return *(int*)((char*)this + 20); }

struct C_0111d0a0 {
    int sub_0111d0a0(int);
};

// @baa 0x0111d0a0
int C_0111d0a0::sub_0111d0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0111d0b0 {
    int sub_0111d0b0(int);
};

// @baa 0x0111d0b0
int C_0111d0b0::sub_0111d0b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_00614d20(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026b2250;
// @baa 0x0111d0c0
void sub_0111d0c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  sub_00614d20(g_026b2250,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
  return;
}

// @baa 0x0111d420
void sub_0111d420(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0111d440
void sub_0111d440(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct S_0111d460 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0111d460(INT Index) const;
};

// @baa 0x0111d460
const DWORD* S_0111d460::sub_0111d460(INT Index) const
{
    return &Items(Index);
}

struct E_0111d4b0 { BYTE Bytes[280]; };

struct S_0111d4b0 {
    TArray<E_0111d4b0> Items; // 0x00
    const E_0111d4b0* sub_0111d4b0(INT Index) const;
};

// @baa 0x0111d4b0
const E_0111d4b0* S_0111d4b0::sub_0111d4b0(INT Index) const
{
    return &Items(Index);
}

struct C_0111d610 { int sub_0111d610(void); };

// @baa 0x0111d610
int C_0111d610::sub_0111d610(void) { return *(int*)((char*)this + 52); }

struct C_0111d700 {
    int sub_0111d700();
};

// @baa 0x0111d700
int C_0111d700::sub_0111d700(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc0) + 4;
}

struct S_0111d830 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111d830(INT Index);
};

// @baa 0x0111d830
DWORD* S_0111d830::sub_0111d830(INT Index)
{
    return &Items(Index);
}

struct S_0111d880 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0111d880(INT Index) const;
};

// @baa 0x0111d880
const DWORD* S_0111d880::sub_0111d880(INT Index) const
{
    return &Items(Index);
}

struct C_0111d8d0 {
    undefined4 sub_0111d8d0(byte);
};

int sub_0111a1a0(void);
// @baa 0x0111d8d0
undefined4 C_0111d8d0::sub_0111d8d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0111a1a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0111d8f0 {
    undefined4 sub_0111d8f0(byte);
};

int sub_0111b0f0(void);
// @baa 0x0111d8f0
undefined4 C_0111d8f0::sub_0111d8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0111b0f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0111e970 {
    undefined4 sub_0111e970(byte);
};

int sub_0111b9e0(void);
// @baa 0x0111e970
undefined4 C_0111e970::sub_0111e970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0111b9e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0111e9c0 {
    void sub_0111e9c0(undefined4);
};

int sub_0111bbd0(void);
// @baa 0x0111e9c0
void C_0111e9c0::sub_0111e9c0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = param_2;
  sub_0111bbd0();
  return;
}

typedef uint size_t;

struct C_0111ef50 {
    void sub_0111ef50(int, int);
    int sub_0059ab00(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0111ef50
void C_0111ef50::sub_0111ef50(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0111ef50 *)(this))->sub_0059ab00(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct C_0111ef90 {
    void sub_0111ef90(int, int);
    int sub_00b346a0(int, int);
};

// @baa 0x0111ef90
void C_0111ef90::sub_0111ef90(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_0111ef90 *)(this))->sub_00b346a0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct C_0111f160{
int sub_0111f160(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0111f160
int C_0111f160::sub_0111f160(undefined4*param_2)
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

struct S_0111f1c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f1c0(INT Index);
};

// @baa 0x0111f1c0
DWORD* S_0111f1c0::sub_0111f1c0(INT Index)
{
    return &Items(Index);
}
