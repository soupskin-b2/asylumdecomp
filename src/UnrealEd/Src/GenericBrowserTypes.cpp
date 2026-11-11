// GenericBrowserTypes.cpp (part 1 of 4): 645 functions
// Placed here by: neighbours 553, file 47, callers 27, class 18.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) void ReleaseMouse();
    friend struct C;
};

struct C {
    void sub_004057c0(int);
};

// @baa 0x004057c0
void C::sub_004057c0(int param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(wxWindowBase **)(param_1 + 0x28) != (wxWindowBase *)0x0) {
    ((wxWindowBase *)(*(wxWindowBase **)(param_1 + 0x28)))->wxWindowBase::ReleaseMouse();
    *(undefined1 *)(param_2 + 0x20) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}

extern char g_025d4488[];
// @baa 0x00405930
int sub_00405930(void) { return (int)g_025d4488; }

extern char g_026174c4[];
// @baa 0x00405940
int sub_00405940(void) { return (int)g_026174c4; }

extern char g_025d4480[];
// @baa 0x00405950
int sub_00405950(void) { return (int)g_025d4480; }

extern char g_02616fd0[];
// @baa 0x00405960
int sub_00405960(void) { return (int)g_02616fd0; }

class wxEvtHandler;
class wxEvtHandler {
    public:
    public: __declspec(dllimport) wxEvtHandler();
    friend struct C_00405970;
};

struct C_00405970 {
    wxEvtHandler * sub_00405970();
};

extern undefined * g_01e3f84c;
// @baa 0x00405970
wxEvtHandler * C_00405970::sub_00405970(void)
{
    wxEvtHandler * param_1 = (wxEvtHandler *)this;

  ((wxEvtHandler *)(param_1))->wxEvtHandler::wxEvtHandler();
  *(undefined ***)param_1 = &g_01e3f84c;
  return param_1;
}

struct C_004059a0 { char* sub_004059a0(void); };

// @baa 0x004059a0
char* C_004059a0::sub_004059a0(void) { return (char*)this + 412; }

struct C_004059b0 { int sub_004059b0(void); };

// @baa 0x004059b0
int C_004059b0::sub_004059b0(void) { return *(int*)((char*)this + 644); }

struct C_004059c0 { int sub_004059c0(void); };

// @baa 0x004059c0
int C_004059c0::sub_004059c0(void) { return *(int*)((char*)this + 748); }

// @baa 0x00405a30
void __stdcall sub_00405a30(int param_1)
{
  *(char *)(param_1 + 0x20) = 1;
}

// @baa 0x00405a40
void __stdcall sub_00405a40(int a0) {  }

// @baa 0x00405a50
void __stdcall sub_00405a50(int a0) {  }

// @baa 0x00405a60
void __stdcall sub_00405a60(int a0) {  }

// @baa 0x00405a70
void __stdcall sub_00405a70(int a0) {  }

// @baa 0x00405a80
void __stdcall sub_00405a80(int a0) {  }

// @baa 0x00405a90
void __stdcall sub_00405a90(int a0) {  }

struct C_00406090 {
    undefined4 sub_00406090();
};

int sub_01ab3bf0(void);
// @baa 0x00406090
undefined4 C_00406090::sub_00406090(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab3bf0();
  return param_1;
}

// @baa 0x004060c0
void __stdcall sub_004060c0(int param_1)
{
  *(char *)(param_1 + 0x20) = 1;
}

extern undefined4 g_02616f08;
// @baa 0x0040cb50
void sub_0040cb50(undefined4 param_1)
{
  g_02616f08 = param_1;
  return;
}

class wxSizer;
class wxWindow;
class wxSizer {
    public:
    public: __declspec(dllimport) bool SetItemMinSize(wxWindow *,int,int);
    friend struct C_00411330;
};

class wxWindow {
    public:
};

struct C_00411330 {
    void sub_00411330();
    int sub_0040f6a0(int);
};

int sub_0040a870(...);
extern undefined4 g_025d400c;
// @baa 0x00411330
void C_00411330::sub_00411330(void)
{
    int param_1 = (int)this;
  sub_0040a870(param_1 + 0x19c);
  ((C_00411330 *)(this))->sub_0040f6a0(1);
  ((wxSizer *)(*(wxSizer **)(*(int *)(param_1 + 0x2b4) + 0xc0)))->wxSizer::SetItemMinSize(*(wxWindow **)(param_1 + 0x278), 0, g_025d400c);
  return;
}

extern char g_025d4948[];
// @baa 0x00430c30
int sub_00430c30(void) { return (int)g_025d4948; }

extern char g_02617e68[];
// @baa 0x00430c40
int sub_00430c40(void) { return (int)g_02617e68; }

struct C_0045c760 { int sub_0045c760(void); };

// @baa 0x0045c760
int C_0045c760::sub_0045c760(void) { return *(int*)((char*)this + 432); }

struct C_0045c770 { int sub_0045c770(void); };

// @baa 0x0045c770
int C_0045c770::sub_0045c770(void) { return *(int*)((char*)this + 436); }

extern char g_01e52cb0[];
struct C_0045c7b0 { C_0045c7b0* sub_0045c7b0(void); };

// @baa 0x0045c7b0
C_0045c7b0* C_0045c7b0::sub_0045c7b0(void) { *(int*)((char*)this + 0) = (int)g_01e52cb0; return this; }

struct C_0045c7c0 { void sub_0045c7c0(void); };

// @baa 0x0045c7c0
void C_0045c7c0::sub_0045c7c0(void) { *(int*)((char*)this + 0) = (int)g_01e52cb0; }

// @baa 0x0045c7d0
int sub_0045c7d0(void) { return 0; }

struct C_0045c7e0 { float sub_0045c7e0(void); };

// @baa 0x0045c7e0
float C_0045c7e0::sub_0045c7e0(void) { return *(float*)((char*)this + 36); }

struct C_0045c860 { float sub_0045c860(void); };

// @baa 0x0045c860
float C_0045c860::sub_0045c860(void) { return *(float*)((char*)this + 0); }

struct C_0045c870 { float sub_0045c870(void); };

// @baa 0x0045c870
float C_0045c870::sub_0045c870(void) { return *(float*)((char*)this + 4); }

struct C_0045c880 { float sub_0045c880(void); };

// @baa 0x0045c880
float C_0045c880::sub_0045c880(void) { return *(float*)((char*)this + 8); }

struct C_0045c890 { float sub_0045c890(void); };

// @baa 0x0045c890
float C_0045c890::sub_0045c890(void) { return *(float*)((char*)this + 12); }

struct C_0045c970 { float sub_0045c970(void); };

// @baa 0x0045c970
float C_0045c970::sub_0045c970(void) { return *(float*)((char*)this + 28); }

struct C_0045ca70 {
    int sub_0045ca70();
};

// @baa 0x0045ca70
int C_0045ca70::sub_0045ca70(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0xc) + -1 + *(int *)(param_1 + 4);
}

struct C_0045ca80 {
    int sub_0045ca80();
};

// @baa 0x0045ca80
int C_0045ca80::sub_0045ca80(void)
{
    int * param_1 = (int *)this;

  return param_1[2] + -1 + *param_1;
}

struct C_0045caf0 {
    undefined4 sub_0045caf0();
};

// @baa 0x0045caf0
undefined4 C_0045caf0::sub_0045caf0(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  return 0;
}

extern char g_01e52cbc[];
struct C_0045cb30 { void sub_0045cb30(void); };

// @baa 0x0045cb30
void C_0045cb30::sub_0045cb30(void) { *(int*)((char*)this + 0) = (int)g_01e52cbc; }

struct C_0045cc60 {
    undefined1 sub_0045cc60();
};

// @baa 0x0045cc60
undefined1 C_0045cc60::sub_0045cc60(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_0045ee20 { void sub_0045ee20(int a0); };

// @baa 0x0045ee20
void C_0045ee20::sub_0045ee20(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_0045ee30 { void sub_0045ee30(int a0); };

// @baa 0x0045ee30
void C_0045ee30::sub_0045ee30(int a0) { *(int*)((char*)this + 44) = a0; }

extern undefined4 g_026639d0;
// @baa 0x00462480
undefined4 sub_00462480(void)
{
  return g_026639d0;
}

extern undefined4 g_026639c8;
// @baa 0x00462490
undefined4 sub_00462490(int param_1)
{
  return *(undefined4 *)(g_026639c8 + param_1 * 4);
}

struct C_0046a5b0 {
    void sub_0046a5b0();
};

int sub_01ab3290(...);
// @baa 0x0046a5b0
void C_0046a5b0::sub_0046a5b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a5e0 {
    void sub_0046a5e0();
};

// @baa 0x0046a5e0
void C_0046a5e0::sub_0046a5e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x24);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046a610 {
    void sub_0046a610();
};

// @baa 0x0046a610
void C_0046a610::sub_0046a610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0046eec0 {
    undefined4 sub_0046eec0(byte);
};

int sub_0046a470(void);
int sub_0053dfa0(...);
// @baa 0x0046eec0
undefined4 C_0046eec0::sub_0046eec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046a470();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004bb430 {
    undefined1 sub_004bb430();
};

// @baa 0x004bb430
undefined1 C_004bb430::sub_004bb430(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

// @baa 0x004bb460
void __stdcall sub_004bb460(int a0) {  }

// @baa 0x004bb470
void __stdcall sub_004bb470(int a0, int a1) {  }

// @baa 0x004bb480
void __stdcall sub_004bb480(int a0, int a1) {  }

extern char g_025d4f0c[];
// @baa 0x004bb490
int sub_004bb490(void) { return (int)g_025d4f0c; }

extern char g_026641ac[];
// @baa 0x004bb4a0
int sub_004bb4a0(void) { return (int)g_026641ac; }

extern char g_01e5ea40[];
struct C_004bb4b0 { C_004bb4b0* sub_004bb4b0(void); };

// @baa 0x004bb4b0
C_004bb4b0* C_004bb4b0::sub_004bb4b0(void) { *(int*)((char*)this + 0) = (int)g_01e5ea40; return this; }

// @baa 0x004bb510
float10 sub_004bb510(void)
{
  return (float10)0;
}

// @baa 0x004bb520
int sub_004bb520(void) { return 4; }

struct C_004c0c70 { void sub_004c0c70(void); };

// @baa 0x004c0c70
void C_004c0c70::sub_004c0c70(void) { *(int*)((char*)this + 0) = (int)g_01e52cb0; }

struct C_004c0d10 { int sub_004c0d10(void); };

// @baa 0x004c0d10
int C_004c0d10::sub_004c0d10(void) { return *(int*)((char*)this + 8); }

struct C_004c0d20 { void sub_004c0d20(int a0); };

// @baa 0x004c0d20
void C_004c0d20::sub_004c0d20(int a0) { *(int*)((char*)this + 4) = a0; }

extern char g_025d4ef4[];
// @baa 0x004c0d90
int sub_004c0d90(void) { return (int)g_025d4ef4; }

extern char g_02663e10[];
// @baa 0x004c0da0
int sub_004c0da0(void) { return (int)g_02663e10; }

struct C_004c0db0 { void sub_004c0db0(int a0); };

// @baa 0x004c0db0
void C_004c0db0::sub_004c0db0(int a0) { *(int*)((char*)this + 364) = a0; }

// @baa 0x004c0e20
int sub_004c0e20(void) { return 2; }

// @baa 0x004c0f50
void __stdcall sub_004c0f50(int a0) {  }

// @baa 0x004c0fa0
void __stdcall sub_004c0fa0(int a0) {  }

struct C_004c1510 {
    int sub_004c1510(float, int);
};

// @baa 0x004c1510
int C_004c1510::sub_004c1510(float param_2, int param_3)
{
    int param_1 = (int)this;
  return (int)(((float)*(int *)(param_3 + 0xc) -
               ((param_2 - *(float *)(param_1 + 0x17c)) /
               (*(float *)(param_1 + 0x180) - *(float *)(param_1 + 0x17c))) *
               (float)*(int *)(param_3 + 0xc)) + (float)*(int *)(param_3 + 4));
}

struct C_004c1710 {
    void sub_004c1710();
    int sub_00466a90(int, int);
    int sub_00463460(int, int, int, int, int, int);
};

// @baa 0x004c1710
void C_004c1710::sub_004c1710(void)
{
    int param_1 = (int)this;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  float local_8;
  float local_4;
  ((C_004c1710 *)((*(char **)((char *)this + 0x16c))))->sub_00466a90((int)(&local_14), (int)(&local_10));
  if ((local_14 != -1) && (local_10 != -1)) {
    ((C_004c1710 *)((*(char **)((char *)this + 0x16c))))->sub_00463460(local_14, local_10, (int)(&local_8), (int)(&local_4), (int)(local_c), (int)(local_c));
    *(double *)(param_1 + 0x20c) = (double)local_8;
    *(double *)(param_1 + 0x214) = (double)local_4;
  }
  return;
}

class wxClientDataContainer;
class wxClientDataContainer {
    public:
    public: __declspec(dllimport) wxClientDataContainer();
    friend struct C_004c1780;
};

struct C_004c1780 {
    wxClientDataContainer * sub_004c1780(undefined4);
};

extern undefined * g_01e5f164;
// @baa 0x004c1780
wxClientDataContainer * C_004c1780::sub_004c1780(undefined4 param_2)
{
    wxClientDataContainer * param_1 = (wxClientDataContainer *)this;

  ((wxClientDataContainer *)(param_1))->wxClientDataContainer::wxClientDataContainer();
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined ***)param_1 = &g_01e5f164;
  return param_1;
}

// @baa 0x004c17b0
void __stdcall sub_004c17b0(INT* pValue, void* a2, void* a3, void* a4, void* a5, void* a6)
{
    pValue[0] = 100;
    pValue[1] = 100;
}

class wxGridCellFloatEditor;
class wxGridCellFloatEditor {
    public:
    public: __declspec(dllimport) wxGridCellFloatEditor(int,int);
    friend struct C_004c1850;
};

struct C_004c1850 {
    wxGridCellFloatEditor * sub_004c1850(int, int);
};

extern undefined * g_01e5f188;
// @baa 0x004c1850
wxGridCellFloatEditor * C_004c1850::sub_004c1850(int param_2, int param_3)
{
    wxGridCellFloatEditor * param_1 = (wxGridCellFloatEditor *)this;

  ((wxGridCellFloatEditor *)(param_1))->wxGridCellFloatEditor::wxGridCellFloatEditor(param_2, param_3);
  *(int *)(param_1 + 100) = param_3;
  *(int *)(param_1 + 0x60) = param_2;
  *(undefined ***)param_1 = &g_01e5f188;
  return param_1;
}

class wxGridCellTextEditor;
class wxKeyEvent;
class wxGridCellTextEditor {
    public:
    public: __declspec(dllimport) virtual void StartingKey(wxKeyEvent &);
    friend struct C_004c1880;
};

class wxKeyEvent {
    public:
};

struct C_004c1880 {
    void sub_004c1880(wxKeyEvent *);
};

extern "C" __declspec(dllimport) int isdigit(...);
// @baa 0x004c1880
void C_004c1880::sub_004c1880(wxKeyEvent * param_2)
{
    wxGridCellTextEditor * param_1 = (wxGridCellTextEditor *)this;
  int _C;
  int iVar1;
  _C = *(int *)(param_2 + 0x2c);
  iVar1 = isdigit(_C);
  if (((((((iVar1 == 0) && (_C != 0x2b)) && (_C != 0x2d)) && ((_C != 0x2e && (_C != 0x144)))) &&
       ((_C != 0x145 && ((_C != 0x146 && (_C != 0x147)))))) && (_C != 0x148)) &&
     (((((_C != 0x149 && (_C != 0x14a)) && (_C != 0x14b)) &&
       (((_C != 0x14c && (_C != 0x14d)) && ((_C != 0x14f && ((_C != 0x184 && (_C != 0x151)))))))) &&
      ((_C != 0x186 && (_C != 0x187)))))) {
    ((char *)param_2)[0x20] = (char)0x1;
    return;
  }
  ((wxGridCellTextEditor *)(param_1))->wxGridCellTextEditor::StartingKey(*(wxKeyEvent *)(param_2));
  return;
}

extern char g_025d4efc[];
// @baa 0x004c19e0
int sub_004c19e0(void) { return (int)g_025d4efc; }

extern char g_02663e64[];
// @baa 0x004c19f0
int sub_004c19f0(void) { return (int)g_02663e64; }

struct C_004c1a00 {
    void sub_004c1a00(undefined4, int);
};

// @baa 0x004c1a00
void C_004c1a00::sub_004c1a00(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  if (param_3 != 0) {
    *(int *)(param_1 + 8) = param_3 + 0x1c;
  }
  return;
}

// @baa 0x004c1a20
void __stdcall sub_004c1a20(int a0) {  }

struct C_004c1a30 { void sub_004c1a30(int a0); };

// @baa 0x004c1a30
void C_004c1a30::sub_004c1a30(int a0) { *(int*)((char*)this + 928) = a0; }

struct A_004cbf00 { virtual void sub_004cbf30(); char pad[332]; };

struct B_004cbf00 { virtual void sub_004cbf30(); };

struct C_004cbf00 : A_004cbf00, B_004cbf00 { virtual void sub_004cbf30(); C_004cbf00(); };

C_004cbf00::C_004cbf00() {}

// @baa 0x004cbf00
void C_004cbf00::sub_004cbf30() {}

struct A_004cbf10 { virtual void sub_004cbf30(); char pad[428]; };

struct B_004cbf10 { virtual void sub_004cbf30(); };

struct C_004cbf10 : A_004cbf10, B_004cbf10 { virtual void sub_004cbf30(); C_004cbf10(); };

C_004cbf10::C_004cbf10() {}

// @baa 0x004cbf10
void C_004cbf10::sub_004cbf30() {}

struct A_004cbf20 { virtual void sub_004cbf30(); char pad[432]; };

struct B_004cbf20 { virtual void sub_004cbf30(); };

struct C_004cbf20 : A_004cbf20, B_004cbf20 { virtual void sub_004cbf30(); C_004cbf20(); };

C_004cbf20::C_004cbf20() {}

// @baa 0x004cbf20
void C_004cbf20::sub_004cbf30() {}

struct C_004cc5a0 {
    void sub_004cc5a0();
};

// @baa 0x004cc5a0
void C_004cc5a0::sub_004cc5a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cc7f0 {
    void sub_004cc7f0();
};

// @baa 0x004cc7f0
void C_004cc7f0::sub_004cc7f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 2);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004cc8b0 {
    void sub_004cc8b0();
};

// @baa 0x004cc8b0
void C_004cc8b0::sub_004cc8b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 8);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004e78a0 { void sub_004e78a0(int a0); };

// @baa 0x004e78a0
void C_004e78a0::sub_004e78a0(int a0) { *(int*)((char*)this + 336) = a0; }

// @baa 0x0053e3e0
void sub_0053e3e0(void) {  }

// @baa 0x0053e3f0
void sub_0053e3f0(void) {  }

int sub_008346b0(void);
int sub_0084ad90(...);
extern undefined4 g_026b55cc;
// @baa 0x00852920
int sub_00852920(void)
{
  if (g_026b55cc == 0) {
    g_026b55cc = sub_0084ad90(L"Engine");
    sub_008346b0();
  }
  return g_026b55cc;
}

int sub_009f8e20(void);
int sub_00a2e0a0(...);
extern undefined4 g_026b6608;
// @baa 0x00c4a410
int sub_00c4a410(void)
{
  if (g_026b6608 == 0) {
    g_026b6608 = sub_00a2e0a0(L"Engine");
    sub_009f8e20();
  }
  return g_026b6608;
}

int sub_005eae70(...);
int sub_00becaf0(void);
int sub_00bf4420(...);
extern undefined4 g_026c0584;
// @baa 0x0108df60
void sub_0108df60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c0584 == 0) {
    g_026c0584 = sub_00bf4420(L"Engine");
    sub_00becaf0();
  }
  sub_005eae70(g_026c0584,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_01116e70 {
    undefined4 sub_01116e70();
};

// @baa 0x01116e70
undefined4 C_01116e70::sub_01116e70(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x1a0);
}

// @baa 0x0115a410
void __stdcall sub_0115a410(int a0) {  }

// @baa 0x0115a480
int UGenericBrowserType::sub_0115a480(void) { return *(int*)((char*)this + 52); }

// @baa 0x0115bb30
int sub_0115bb30(int a0, int a1) { return a1; }

struct V_0115bb40 {
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
    virtual void g(int a0);
    void sub_0115bb40(int a0);
};

// @baa 0x0115bb40
void V_0115bb40::sub_0115bb40(int a0) { g(a0); }

struct A_0115c3b0 { virtual void sub_01160a30(); char pad[412]; };

struct B_0115c3b0 { virtual void sub_01160a30(); };

struct C_0115c3b0 : A_0115c3b0, B_0115c3b0 { virtual void sub_01160a30(); C_0115c3b0(); };

C_0115c3b0::C_0115c3b0() {}

// @baa 0x0115c3b0
void C_0115c3b0::sub_01160a30() {}

struct A_0115c3c0 { virtual void sub_01160a30(); char pad[424]; };

struct B_0115c3c0 { virtual void sub_01160a30(); };

struct C_0115c3c0 : A_0115c3c0, B_0115c3c0 { virtual void sub_01160a30(); C_0115c3c0(); };

C_0115c3c0::C_0115c3c0() {}

// @baa 0x0115c3c0
void C_0115c3c0::sub_01160a30() {}

struct C_0115c4b0 {
    undefined4 sub_0115c4b0(byte);
};

int sub_0115a910(void);
// @baa 0x0115c4b0
undefined4 C_0115c4b0::sub_0115c4b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0115a910();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxMenu;
class wxMenu {
    public:
    public: __declspec(dllimport) wxMenu(long);
    friend struct C_0115ce40;
};

struct C_0115ce40 {
    wxMenu * sub_0115ce40();
};

extern undefined * g_021d00f0;
// @baa 0x0115ce40
wxMenu * C_0115ce40::sub_0115ce40(void)
{
    wxMenu * param_1 = (wxMenu *)this;

  ((wxMenu *)(param_1))->wxMenu::wxMenu(0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined ***)param_1 = &g_021d00f0;
  return param_1;
}

// @baa 0x0115cef0
IMPLEMENT_CLASS_AT(UGenericBrowserType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 59);

// @baa 0x0115d000
int UGenericBrowserType::vf_000(void) { return 1; }

// @baa 0x0115d010
bool UGenericBrowserType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0115d050
int UGenericBrowserType_All::vf_000(void) { return 1; }

// @baa 0x0115d060
int UGenericBrowserType_AnimTree::vf_000(void) { return 1; }

// @baa 0x0115d070
int UGenericBrowserType_Animation::vf_000(void) { return 1; }

// @baa 0x0115d080
int UGenericBrowserType_Archetype::vf_000(void) { return 1; }

// @baa 0x0115d090
int UGenericBrowserType_CameraAnim::vf_000(void) { return 1; }

// @baa 0x0115d0a0
int UGenericBrowserType_CurveEdPresetCurve::vf_000(void) { return 1; }

// @baa 0x0115d0b0
int UGenericBrowserType_Custom::vf_000(void) { return 1; }

// @baa 0x0115d0c0
int UGenericBrowserType_DecalMaterial::vf_000(void) { return 1; }

// @baa 0x0115d0d0
int UGenericBrowserType_FaceFXAnimSet::vf_000(void) { return 1; }

// @baa 0x0115d0e0
int UGenericBrowserType_FaceFXAsset::vf_000(void) { return 1; }

// @baa 0x0115d0f0
int UGenericBrowserType_Font::vf_000(void) { return 1; }

// @baa 0x0115d100
int UGenericBrowserType_FracturedStaticMesh::vf_000(void) { return 1; }

// @baa 0x0115d110
int UGenericBrowserType_LensFlare::vf_000(void) { return 1; }

// @baa 0x0115d120
int UGenericBrowserType_Material::vf_000(void) { return 1; }

// @baa 0x0115d130
int UGenericBrowserType_MaterialInstanceConstant::vf_000(void) { return 1; }

// @baa 0x0115d140
int UGenericBrowserType_MaterialInstanceTimeVarying::vf_000(void) { return 1; }

// @baa 0x0115d150
int UGenericBrowserType_MaterialLackingPhysMat::vf_000(void) { return 1; }

// @baa 0x0115d160
int UGenericBrowserType_MorphTargetSet::vf_000(void) { return 1; }

// @baa 0x0115d170
int UGenericBrowserType_MorphWeightSequence::vf_000(void) { return 1; }

// @baa 0x0115d180
int UGenericBrowserType_ParticleSystem::vf_000(void) { return 1; }

// @baa 0x0115d190
int UGenericBrowserType_PhysicalMaterial::vf_000(void) { return 1; }

// @baa 0x0115d1a0
int UGenericBrowserType_PhysXParticleSystem::vf_000(void) { return 1; }

// @baa 0x0115d1b0
int UGenericBrowserType_ApexDestructibleAsset::vf_000(void) { return 1; }

// @baa 0x0115d1c0
int UGenericBrowserType_ApexRenderMeshAsset::vf_000(void) { return 1; }

// @baa 0x0115d1d0
int UGenericBrowserType_ApexParticleSystemAsset::vf_000(void) { return 1; }

// @baa 0x0115d1e0
int UGenericBrowserType_ApexMeshParticleFactoryAsset::vf_000(void) { return 1; }

// @baa 0x0115d1f0
int UGenericBrowserType_DestructibleDamageParameters::vf_000(void) { return 1; }

// @baa 0x0115d200
int UGenericBrowserType_PhysicsAsset::vf_000(void) { return 1; }

// @baa 0x0115d210
int UGenericBrowserType_PostProcess::vf_000(void) { return 1; }

// @baa 0x0115d220
int UGenericBrowserType_Prefab::vf_000(void) { return 1; }

// @baa 0x0115d230
int UGenericBrowserType_RenderTexture::vf_000(void) { return 1; }

// @baa 0x0115d240
int UGenericBrowserType_Sequence::vf_000(void) { return 1; }

// @baa 0x0115d250
int UGenericBrowserType_SkeletalMesh::vf_000(void) { return 1; }

// @baa 0x0115d260
int UGenericBrowserType_SoundCue::vf_000(void) { return 1; }

// @baa 0x0115d270
int UGenericBrowserType_SoundMode::vf_000(void) { return 1; }

// @baa 0x0115d280
int UGenericBrowserType_SoundWave::vf_000(void) { return 1; }

// @baa 0x0115d290
int UGenericBrowserType_Sounds::vf_000(void) { return 1; }

// @baa 0x0115d2a0
int UGenericBrowserType_SpeechRecognition::vf_000(void) { return 1; }

// @baa 0x0115d2b0
int UGenericBrowserType_StaticMesh::vf_000(void) { return 1; }

// @baa 0x0115d2c0
int UGenericBrowserType_TerrainLayer::vf_000(void) { return 1; }

// @baa 0x0115d2d0
int UGenericBrowserType_TerrainMaterial::vf_000(void) { return 1; }

// @baa 0x0115d2e0
int UGenericBrowserType_Texture::vf_000(void) { return 1; }

// @baa 0x0115d2f0
int UGenericBrowserType_TextureWithAlpha::vf_000(void) { return 1; }

// @baa 0x0115d300
int UGenericBrowserType_UIArchetype::vf_000(void) { return 1; }

// @baa 0x0115d310
int UGenericBrowserType_UIScene::vf_000(void) { return 1; }

// @baa 0x0115d320
int UGenericBrowserType_UISkin::vf_000(void) { return 1; }

// @baa 0x0115d990
IMPLEMENT_CLASS_AT(UOptionsProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 15);

// @baa 0x0115daa0
int UOptionsProxy::vf_000(void) { return 1; }

// @baa 0x0115dab0
bool UOptionsProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005c7a20(void);
extern undefined * g_021cfc40;
// @baa 0x0115daf0
undefined4 * UObject::sub_0115daf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021cfc40);
  return param_1;
}

// @baa 0x0115dbb0
int UOptions2DShaper::vf_000(void) { return 1; }

extern undefined * g_021d0160;
// @baa 0x0115dbc0
undefined4 * UObject::sub_0115dbc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d0160);
  return param_1;
}

// @baa 0x0115dbe0
IMPLEMENT_CLASS_AT(UOptions2DShaperSheet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 67);

// @baa 0x0115dc40
int sub_0115db10(void);
// @baa 0x0115dc60
void UOptions2DShaperSheet::vf_10c(void)
{
    int param_1 = (int)this;

  sub_0115db10();
  *(undefined1 *)(param_1 + 0x34) = 2;
  return;
}

// @baa 0x0115dc70
int UOptions2DShaperSheet::vf_000(void) { return 1; }

extern undefined * g_021d0270;
// @baa 0x0115dc80
undefined4 * UObject::sub_0115dc80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d0270);
  return param_1;
}

// @baa 0x0115dca0
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrude, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 91);

// @baa 0x0115dd00
// @baa 0x0115ddc0
int UOptions2DShaperExtrude::vf_000(void) { return 1; }

extern undefined * g_021d0380;
// @baa 0x0115ddd0
undefined4 * UObject::sub_0115ddd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d0380);
  return param_1;
}

// @baa 0x0115ddf0
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrudeToPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 115);

// @baa 0x0115de50
// @baa 0x0115df10
int UOptions2DShaperExtrudeToPoint::vf_000(void) { return 1; }

extern undefined * g_021d0490;
// @baa 0x0115df20
undefined4 * UObject::sub_0115df20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d0490);
  return param_1;
}

// @baa 0x0115df40
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrudeToBevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 141);

// @baa 0x0115dfa0
// @baa 0x0115e0f0
int UOptions2DShaperExtrudeToBevel::vf_000(void) { return 1; }

extern undefined * g_021d05a0;
// @baa 0x0115e100
undefined4 * UObject::sub_0115e100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d05a0);
  return param_1;
}

// @baa 0x0115e120
IMPLEMENT_CLASS_AT(UOptions2DShaperRevolve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 167);

// @baa 0x0115e180
// @baa 0x0115e2d0
int UOptions2DShaperRevolve::vf_000(void) { return 1; }

extern undefined * g_021d06b0;
// @baa 0x0115e2e0
undefined4 * UObject::sub_0115e2e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d06b0);
  return param_1;
}

// @baa 0x0115e300
IMPLEMENT_CLASS_AT(UOptions2DShaperBezierDetail, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 189);

// @baa 0x0115e360
// @baa 0x0115e410
int UOptions2DShaperBezierDetail::vf_000(void) { return 1; }

// @baa 0x0115e420
int UOptionsDupObject::vf_000(void) { return 1; }

// @baa 0x0115e540
int UOptionsNewClassFromSel::vf_000(void) { return 1; }

struct C_0115ed00 {
    undefined4 sub_0115ed00();
};

// @baa 0x0115ed00
undefined4 C_0115ed00::sub_0115ed00(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0115ed60 { C_0115ed60* sub_0115ed60(void); };

// @baa 0x0115ed60
C_0115ed60* C_0115ed60::sub_0115ed60(void) { return this; }

struct C_0115ed70 { C_0115ed70* sub_0115ed70(void); };

// @baa 0x0115ed70
C_0115ed70* C_0115ed70::sub_0115ed70(void) { return this; }

struct C_0115f640 { int a, b, c; C_0115f640(); };

// @baa 0x0115f640
C_0115f640::C_0115f640() : a(0), b(0), c(0) {}

struct C_0115f650 { int a, b, c; C_0115f650(); };

// @baa 0x0115f650
C_0115f650::C_0115f650() : a(0), b(0), c(0) {}

struct C_0115f660 { int a, b, c; C_0115f660(); };

// @baa 0x0115f660
C_0115f660::C_0115f660() : a(0), b(0), c(0) {}

struct C_0115f670 { int a, b, c; C_0115f670(); };

// @baa 0x0115f670
C_0115f670::C_0115f670() : a(0), b(0), c(0) {}

struct C_0115f700 { int a, b, c; C_0115f700(); };

// @baa 0x0115f700
C_0115f700::C_0115f700() : a(0), b(0), c(0) {}

struct C_0115f710 { int a, b, c; C_0115f710(); };

// @baa 0x0115f710
C_0115f710::C_0115f710() : a(0), b(0), c(0) {}

struct C_0115f720 { int a, b, c; C_0115f720(); };

// @baa 0x0115f720
C_0115f720::C_0115f720() : a(0), b(0), c(0) {}

struct C_0115f7a0 { int a, b, c; C_0115f7a0(); };

// @baa 0x0115f7a0
C_0115f7a0::C_0115f7a0() : a(0), b(0), c(0) {}

struct C_0115f7b0 { int a, b, c; C_0115f7b0(); };

// @baa 0x0115f7b0
C_0115f7b0::C_0115f7b0() : a(0), b(0), c(0) {}

struct C_0115f7c0 { int sub_0115f7c0(void); };

// @baa 0x0115f7c0
int C_0115f7c0::sub_0115f7c0(void) { return *(int*)((char*)this + 0); }

struct C_0115f990 { int sub_0115f990(void); };

// @baa 0x0115f990
int C_0115f990::sub_0115f990(void) { return *(int*)((char*)this + 0); }

struct C_0115f9a0 { int sub_0115f9a0(void); };

// @baa 0x0115f9a0
int C_0115f9a0::sub_0115f9a0(void) { return *(int*)((char*)this + 0); }

struct C_0115fa20 { int sub_0115fa20(void); };

// @baa 0x0115fa20
int C_0115fa20::sub_0115fa20(void) { return *(int*)((char*)this + 0); }

struct C_0115faa0 { int sub_0115faa0(void); };

// @baa 0x0115faa0
int C_0115faa0::sub_0115faa0(void) { return *(int*)((char*)this + 0); }

struct C_0115fab0 { int sub_0115fab0(void); };

// @baa 0x0115fab0
int C_0115fab0::sub_0115fab0(void) { return *(int*)((char*)this + 0); }

struct C_0115fac0 {
    int sub_0115fac0(int);
};

// @baa 0x0115fac0
int C_0115fac0::sub_0115fac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0115fad0 { int sub_0115fad0(void); };

// @baa 0x0115fad0
int C_0115fad0::sub_0115fad0(void) { return *(int*)((char*)this + 0); }

struct C_0115fb50 { int sub_0115fb50(void); };

// @baa 0x0115fb50
int C_0115fb50::sub_0115fb50(void) { return *(int*)((char*)this + 0); }

struct C_0115fcf0 { int sub_0115fcf0(void); };

// @baa 0x0115fcf0
int C_0115fcf0::sub_0115fcf0(void) { return *(int*)((char*)this + 0); }

struct C_0115fd70 { int sub_0115fd70(void); };

// @baa 0x0115fd70
int C_0115fd70::sub_0115fd70(void) { return *(int*)((char*)this + 0); }

struct C_0115fd80 { int sub_0115fd80(void); };

// @baa 0x0115fd80
int C_0115fd80::sub_0115fd80(void) { return *(int*)((char*)this + 0); }

struct C_0115fe50 {
    int sub_0115fe50(int);
};

// @baa 0x0115fe50
int C_0115fe50::sub_0115fe50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x480 + *param_1;
}

struct C_0115fe60 { int sub_0115fe60(void); };

// @baa 0x0115fe60
int C_0115fe60::sub_0115fe60(void) { return *(int*)((char*)this + 0); }

struct C_0115fe70 { int sub_0115fe70(void); };

// @baa 0x0115fe70
int C_0115fe70::sub_0115fe70(void) { return *(int*)((char*)this + 0); }

struct C_0115ff00 { int sub_0115ff00(void); };

// @baa 0x0115ff00
int C_0115ff00::sub_0115ff00(void) { return *(int*)((char*)this + 0); }

struct C_0115ff10 { int sub_0115ff10(void); };

// @baa 0x0115ff10
int C_0115ff10::sub_0115ff10(void) { return *(int*)((char*)this + 0); }

struct C_0115ff90 { int sub_0115ff90(void); };

// @baa 0x0115ff90
int C_0115ff90::sub_0115ff90(void) { return *(int*)((char*)this + 0); }

struct C_01160020 {
    int sub_01160020();
};

// @baa 0x01160020
int C_01160020::sub_01160020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01160030 { int sub_01160030(void); };

// @baa 0x01160030
int C_01160030::sub_01160030(void) { return *(int*)((char*)this + 0); }

struct C_01160040 { int sub_01160040(void); };

// @baa 0x01160040
int C_01160040::sub_01160040(void) { return *(int*)((char*)this + 0); }

struct C_01160050 { int sub_01160050(void); };

// @baa 0x01160050
int C_01160050::sub_01160050(void) { return *(int*)((char*)this + 0); }

// @baa 0x01160060
undefined4 sub_01160060(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01160080 { int sub_01160080(void); };

// @baa 0x01160080
int C_01160080::sub_01160080(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01160090 { int sub_01160090(void); };

// @baa 0x01160090
int C_01160090::sub_01160090(void) { return *(int*)((char*)this + 0); }

struct C_011600a0 { int sub_011600a0(void); };

// @baa 0x011600a0
int C_011600a0::sub_011600a0(void) { return *(int*)((char*)this + 0); }

struct C_011600b0 { int sub_011600b0(void); };

// @baa 0x011600b0
int C_011600b0::sub_011600b0(void) { return *(int*)((char*)this + 0); }

struct C_011600c0 { int sub_011600c0(void); };

// @baa 0x011600c0
int C_011600c0::sub_011600c0(void) { return *(int*)((char*)this + 0); }

struct C_011600d0 { int sub_011600d0(void); };

// @baa 0x011600d0
int C_011600d0::sub_011600d0(void) { return *(int*)((char*)this + 0); }

struct C_011600e0 { int sub_011600e0(void); };

// @baa 0x011600e0
int C_011600e0::sub_011600e0(void) { return *(int*)((char*)this + 0); }

struct C_01160110 {
    int sub_01160110(int);
};

// @baa 0x01160110
int C_01160110::sub_01160110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01160130 {
    int sub_01160130(int);
};

// @baa 0x01160130
int C_01160130::sub_01160130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01160150 { int sub_01160150(void); };

// @baa 0x01160150
int C_01160150::sub_01160150(void) { return *(int*)((char*)this + 20); }

struct C_01160160 { int sub_01160160(void); };

// @baa 0x01160160
int C_01160160::sub_01160160(void) { return *(int*)((char*)this + 20); }

int sub_00becc60(void);
int sub_00bf4c10(...);
extern undefined4 g_026c0588;
// @baa 0x011601d0
void sub_011601d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c0588 == 0) {
    g_026c0588 = sub_00bf4c10(L"Engine");
    sub_00becc60();
  }
  sub_005eae70(g_026c0588,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct E { BYTE Bytes[116]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01160460(INT Index) const;
};

// @baa 0x01160460
const E* S::sub_01160460(INT Index) const
{
    return &Items(Index);
}

struct E_011604b0 { BYTE Bytes[16]; };

struct S_011604b0 {
    TArray<E_011604b0> Items; // 0x00
    const E_011604b0* sub_011604b0(INT Index) const;
};

// @baa 0x011604b0
const E_011604b0* S_011604b0::sub_011604b0(INT Index) const
{
    return &Items(Index);
}

struct C_01160500 {
    void sub_01160500(int *);
};

// @baa 0x01160500
void C_01160500::sub_01160500(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x30;
  param_2[1] = 0;
  return;
}

struct S_01160620 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01160620(INT Index);
};

// @baa 0x01160620
DWORD* S_01160620::sub_01160620(INT Index)
{
    return &Items(Index);
}

struct C_01160670 {
    int sub_01160670(int);
};

// @baa 0x01160670
int C_01160670::sub_01160670(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

int sub_0115c2c0(void);
// @baa 0x01160a30
undefined4 UOptionsProxy::sub_01160a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0115c2c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006e0930(...);
// @baa 0x01161270
undefined4 sub_01161270(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = sub_006e0930(param_1);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x20c) & 0x2000000) == 0)) {
    return 1;
  }
  return 0;
}

int sub_008febf0(...);
int sub_00da7650(void);
int sub_00dc2f50(...);
extern undefined4 g_026c5c90;
// @baa 0x01161440
undefined4 sub_01161440(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = sub_008febf0(param_1);
  if (iVar1 != 0) {
    if (g_026c5c90 == 0) {
      g_026c5c90 = sub_00dc2f50(L"Engine");
      sub_00da7650();
      if (g_026c5c90 == 0) {
        return 0;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    while( true ) {
      if (iVar1 == 0) {
        return 1;
      }
      if (iVar1 == g_026c5c90) break;
      iVar1 = *(int *)(iVar1 + 0x30);
    }
  }
  return 0;
}

int sub_0105d6c0(...);
int sub_01160220(...);
// @baa 0x01161590
undefined4 sub_01161590(int param_1)
{
  int iVar1;
  
  iVar1 = sub_0105d6c0(param_1);
  if (iVar1 != 0) {
    iVar1 = sub_01160220(*(undefined4 *)(param_1 + 0x1c));
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

struct T_011631e0 { BYTE b[4]; };

// @baa 0x011631e0
template T_011631e0& TArray<T_011631e0>::Last(INT);

struct C_01163c40 {
    int sub_01163c40(int);
};

// @baa 0x01163c40
int C_01163c40::sub_01163c40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01163c60 {
    int sub_01163c60(int);
};

// @baa 0x01163c60
int C_01163c60::sub_01163c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01163c80 {
    int sub_01163c80();
};

// @baa 0x01163c80
int C_01163c80::sub_01163c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01163ca0 {
    int sub_01163ca0();
};

// @baa 0x01163ca0
int C_01163ca0::sub_01163ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01163cc0 {
    int sub_01163cc0();
};

// @baa 0x01163cc0
int C_01163cc0::sub_01163cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01163ce0 {
    int sub_01163ce0();
};

// @baa 0x01163ce0
int C_01163ce0::sub_01163ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct A_0116c6b0 { virtual void sub_011765d0(); char pad[412]; };

struct B_0116c6b0 { virtual void sub_011765d0(); };

struct C_0116c6b0 : A_0116c6b0, B_0116c6b0 { virtual void sub_011765d0(); C_0116c6b0(); };

C_0116c6b0::C_0116c6b0() {}

// @baa 0x0116c6b0
void C_0116c6b0::sub_011765d0() {}

struct C_0116e430 {
    undefined4 * sub_0116e430();
};

int sub_01166630(void);
extern undefined * g_021d1b90;
// @baa 0x0116e430
undefined4 * C_0116e430::sub_0116e430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01166630();
  *param_1 = (undefined4)(&g_021d1b90);
  return param_1;
}

int sub_006e0990(...);
// @baa 0x0116f6c0
undefined4 sub_0116f6c0(int param_1)
{
  int iVar1;
  
  iVar1 = sub_006e0990(param_1);
  if ((iVar1 == 0) || ((*(char *)(iVar1 + 0xc4) != '\x06' && (*(char *)(iVar1 + 0xc4) != '\a')))) {
    return 0;
  }
  iVar1 = sub_0105d6c0(param_1);
  if ((iVar1 != 0) && (iVar1 = sub_01160220(*(undefined4 *)(param_1 + 0x1c)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x01170df0
IMPLEMENT_CLASS_AT(UOptions2DShaper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 48);

// @baa 0x01170f00
bool UOptions2DShaper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01170f40
// @baa 0x01171050
bool UOptions2DShaperBezierDetail::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011710c0
IMPLEMENT_CLASS_AT(UOptionsDupObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 215);

// @baa 0x01171140
// @baa 0x011712a0
// @baa 0x011713b0
bool UOptionsDupObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01171420
IMPLEMENT_CLASS_AT(UOptionsNewClassFromSel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 239);

// @baa 0x011714a0
// @baa 0x011714c0
// @baa 0x011715d0
bool UOptionsNewClassFromSel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01172570 { void* Data; int Num; int Max; void sub_01172570(); };

// @baa 0x01172570
void C_01172570::sub_01172570() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_011726a0 { void* Data; int Num; int Max; void sub_011726a0(); };

// @baa 0x011726a0
void C_011726a0::sub_011726a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01172a70 { void* Data; int Num; int Max; void sub_01172a70(); };

// @baa 0x01172a70
void C_01172a70::sub_01172a70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01172ad0 {
    int sub_01172ad0(int);
};

// @baa 0x01172ad0
int C_01172ad0::sub_01172ad0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

int sub_0040fcc0(void);
// @baa 0x01172b60
undefined4 UObject::sub_01172b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01172b80 { void sub_0040fcc0(); };

struct C_01172b80 { char pad[8]; M_01172b80 m; void sub_01172b80(); };

// @baa 0x01172b80
void C_01172b80::sub_01172b80() { m.sub_0040fcc0(); }

struct C_01172d00 {
    int sub_01172d00(int);
};

// @baa 0x01172d00
int C_01172d00::sub_01172d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct M_01172dc0 { void sub_0040fcc0(); };

struct C_01172dc0 { char pad[8]; M_01172dc0 m; void sub_01172dc0(); };

// @baa 0x01172dc0
void C_01172dc0::sub_01172dc0() { m.sub_0040fcc0(); }

struct C_01173550 {
    undefined4 sub_01173550(byte);
    int sub_0040fcc0();
};

// @baa 0x01173550
undefined4 C_01173550::sub_01173550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01173550 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01173630 { void* Data; int Num; int Max; void sub_01173630(); };

// @baa 0x01173630
void C_01173630::sub_01173630() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_01173630();
// @baa 0x0117b3e0
void sub_0117b3e0(void) { sub_01173630(); }

int sub_01170df0(void);
int sub_01179680(...);
extern undefined4 g_026d0f98;
// @baa 0x0117b3f0
int sub_0117b3f0(void)
{
  if (g_026d0f98 == 0) {
    g_026d0f98 = sub_01179680(L"UnrealEd");
    sub_01170df0();
  }
  return g_026d0f98;
}

struct C_0117b420 { C_0117b420* sub_0117b420(void); };

// @baa 0x0117b420
C_0117b420* C_0117b420::sub_0117b420(void) { return this; }

// @baa 0x0117b690
// @baa 0x0117b7a0
bool UOptions2DShaperSheet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0117b7e0
// @baa 0x0117b8f0
bool UOptions2DShaperExtrude::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0117b930
// @baa 0x0117ba40
bool UOptions2DShaperExtrudeToPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0117ba80
// @baa 0x0117bb90
bool UOptions2DShaperExtrudeToBevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0117bbd0
// @baa 0x0117bce0
bool UOptions2DShaperRevolve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0117cbd0 {
    int sub_0117cbd0(int);
    int sub_01172c70(int, int);
};

// @baa 0x0117cbd0
int C_0117cbd0::sub_0117cbd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0117cbd0 *)(this))->sub_01172c70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_0117cd80 { void sub_0117adb0(int); C_0117cd80 *sub_0117cd80(int); };

// @baa 0x0117cd80
C_0117cd80 *C_0117cd80::sub_0117cd80(int a) { sub_0117adb0(a); return this; }

int sub_0117b040(void);
// @baa 0x0117cf20
undefined4 UBrushComponent::sub_0117cf20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117b040();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
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

struct TConstSetBitIterator_0117d0d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117d0d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117d0d0& operator++();
};

TConstSetBitIterator_0117d0d0::TConstSetBitIterator_0117d0d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117d0d0
TConstSetBitIterator_0117d0d0& TConstSetBitIterator_0117d0d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0117d180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117d180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117d180& operator++();
};

TConstSetBitIterator_0117d180::TConstSetBitIterator_0117d180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117d180
TConstSetBitIterator_0117d180& TConstSetBitIterator_0117d180::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0117d210
void __stdcall sub_0117d210(int a0, int a1) {  }

// @baa 0x0117d220
void sub_0117d220(void) {  }

// @baa 0x0117d230
void sub_0117d230(void) {  }

// @baa 0x0117d240
int sub_0117d240(void) { return 0; }

// @baa 0x0117d250
void __stdcall sub_0117d250(int a0) {  }

// @baa 0x0117d260
int sub_0117d260(void) { return 0; }

// @baa 0x0117d270
void sub_0117d270(void) {  }

// @baa 0x0117d280
void sub_0117d280(void) {  }

// @baa 0x0117d290
void sub_0117d290(void) {  }

// @baa 0x0117d2a0
void sub_0117d2a0(void) {  }

// @baa 0x0117d2b0
void sub_0117d2b0(void) {  }

// @baa 0x0117d2c0
void __stdcall sub_0117d2c0(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x0117d2d0
void sub_0117d2d0(void) {  }

// @baa 0x0117d340
// @baa 0x0117d3c0
void UGenericBrowserType::vf_10c(void) {  }

// @baa 0x0117d3d0
void UGenericBrowserType::vf_120(int a0, int a1) {  }

// @baa 0x0117d3e0
int UGenericBrowserType::vf_130(int a0, int a1) { return 1; }

// @baa 0x0117d3f0
int UGenericBrowserType::vf_138(int a0) { return 1; }

// @baa 0x0117d400
void UGenericBrowserType::vf_13c(int a0, int a1) {  }

// @baa 0x0117d410
extern undefined * g_021d1e78;
// @baa 0x0117d430
undefined4 * UObject::sub_0117d430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d1e78);
  return param_1;
}

extern undefined * g_021d1fb8;
// @baa 0x0117d450
undefined4 * UObject::sub_0117d450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d1fb8);
  return param_1;
}

// @baa 0x0117d470
IMPLEMENT_CLASS_AT(UGenericBrowserType_Animation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 62);

// @baa 0x0117d4d0
extern undefined * g_021d20f8;
// @baa 0x0117d4f0
undefined4 * UObject::sub_0117d4f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d20f8);
  return param_1;
}

// @baa 0x0117d510
IMPLEMENT_CLASS_AT(UGenericBrowserType_AnimTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 61);

// @baa 0x0117d570
extern undefined * g_021d2238;
// @baa 0x0117d590
undefined4 * UObject::sub_0117d590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2238);
  return param_1;
}

// @baa 0x0117d5b0
IMPLEMENT_CLASS_AT(UGenericBrowserType_ApexDestructibleAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 83);

// @baa 0x0117d610
extern undefined * g_021d2378;
// @baa 0x0117d630
undefined4 * UObject::sub_0117d630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2378);
  return param_1;
}

// @baa 0x0117d650
IMPLEMENT_CLASS_AT(UGenericBrowserType_ApexMeshParticleFactoryAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 86);

// @baa 0x0117d6b0
extern undefined * g_021d24b8;
// @baa 0x0117d6d0
undefined4 * UObject::sub_0117d6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d24b8);
  return param_1;
}

// @baa 0x0117d6f0
IMPLEMENT_CLASS_AT(UGenericBrowserType_ApexParticleSystemAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 85);

// @baa 0x0117d750
extern undefined * g_021d25f8;
// @baa 0x0117d770
undefined4 * UObject::sub_0117d770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d25f8);
  return param_1;
}

// @baa 0x0117d790
IMPLEMENT_CLASS_AT(UGenericBrowserType_ApexRenderMeshAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 84);

// @baa 0x0117d7f0
// @baa 0x0117d810
IMPLEMENT_CLASS_AT(UGenericBrowserType_Archetype, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 63);

// @baa 0x0117d870
extern undefined * g_021d2738;
// @baa 0x0117d890
undefined4 * UObject::sub_0117d890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2738);
  return param_1;
}

extern undefined * g_021d2878;
// @baa 0x0117d8b0
undefined4 * UObject::sub_0117d8b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2878);
  return param_1;
}

// @baa 0x0117d8d0
IMPLEMENT_CLASS_AT(UGenericBrowserType_UIArchetype, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 107);

// @baa 0x0117d930
extern undefined * g_021d29b8;
// @baa 0x0117d950
undefined4 * UObject::sub_0117d950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d29b8);
  return param_1;
}

// @baa 0x0117d970
IMPLEMENT_CLASS_AT(UGenericBrowserType_CameraAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 64);

// @baa 0x0117d9d0
extern undefined * g_021d2af8;
// @baa 0x0117d9f0
undefined4 * UObject::sub_0117d9f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2af8);
  return param_1;
}

// @baa 0x0117da10
IMPLEMENT_CLASS_AT(UGenericBrowserType_CurveEdPresetCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 65);

// @baa 0x0117da70
// @baa 0x0117da90
IMPLEMENT_CLASS_AT(UGenericBrowserType_Custom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 66);

// @baa 0x0117daf0
extern undefined * g_021d2c38;
// @baa 0x0117db10
undefined4 * UObject::sub_0117db10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2c38);
  return param_1;
}

extern undefined * g_021d2d78;
// @baa 0x0117db30
undefined4 * UObject::sub_0117db30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2d78);
  return param_1;
}

// @baa 0x0117db50
IMPLEMENT_CLASS_AT(UGenericBrowserType_All, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 60);

// @baa 0x0117dbb0
extern undefined * g_021d2eb8;
// @baa 0x0117dbd0
undefined4 * UObject::sub_0117dbd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2eb8);
  return param_1;
}

// @baa 0x0117dbf0
IMPLEMENT_CLASS_AT(UGenericBrowserType_DecalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 67);

// @baa 0x0117dc50
extern undefined * g_021d2ff8;
// @baa 0x0117dc70
undefined4 * UObject::sub_0117dc70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d2ff8);
  return param_1;
}

// @baa 0x0117dc90
IMPLEMENT_CLASS_AT(UGenericBrowserType_DestructibleDamageParameters, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 89);

// @baa 0x0117dcf0
extern undefined * g_021d3138;
// @baa 0x0117dd10
undefined4 * UObject::sub_0117dd10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3138);
  return param_1;
}

// @baa 0x0117dd30
IMPLEMENT_CLASS_AT(UGenericBrowserType_FaceFXAnimSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 68);

// @baa 0x0117dd90
extern undefined * g_021d3278;
// @baa 0x0117ddb0
undefined4 * UObject::sub_0117ddb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3278);
  return param_1;
}

// @baa 0x0117ddd0
IMPLEMENT_CLASS_AT(UGenericBrowserType_FaceFXAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 69);

// @baa 0x0117de30
extern undefined * g_021d33b8;
// @baa 0x0117de50
undefined4 * UObject::sub_0117de50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d33b8);
  return param_1;
}

// @baa 0x0117de70
IMPLEMENT_CLASS_AT(UGenericBrowserType_Font, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 70);

// @baa 0x0117ded0
extern undefined * g_021d34f8;
// @baa 0x0117def0
undefined4 * UObject::sub_0117def0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d34f8);
  return param_1;
}

// @baa 0x0117df10
IMPLEMENT_CLASS_AT(UGenericBrowserType_LensFlare, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 72);

// @baa 0x0117df70
extern undefined * g_021d3638;
// @baa 0x0117df90
undefined4 * UObject::sub_0117df90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3638);
  return param_1;
}

// @baa 0x0117dfb0
IMPLEMENT_CLASS_AT(UGenericBrowserType_Material, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 73);

// @baa 0x0117e010
extern undefined * g_021d3778;
// @baa 0x0117e030
undefined4 * UObject::sub_0117e030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3778);
  return param_1;
}

// @baa 0x0117e050
IMPLEMENT_CLASS_AT(UGenericBrowserType_MaterialInstanceConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 74);

// @baa 0x0117e0b0
extern undefined * g_021d38b8;
// @baa 0x0117e0d0
undefined4 * UObject::sub_0117e0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d38b8);
  return param_1;
}

// @baa 0x0117e0f0
IMPLEMENT_CLASS_AT(UGenericBrowserType_MaterialInstanceTimeVarying, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 75);

// @baa 0x0117e150
extern undefined * g_021d39f8;
// @baa 0x0117e170
undefined4 * UObject::sub_0117e170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d39f8);
  return param_1;
}

// @baa 0x0117e190
IMPLEMENT_CLASS_AT(UGenericBrowserType_MaterialLackingPhysMat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 76);

// @baa 0x0117e1f0
extern undefined * g_021d3b38;
// @baa 0x0117e210
undefined4 * UObject::sub_0117e210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3b38);
  return param_1;
}

// @baa 0x0117e230
IMPLEMENT_CLASS_AT(UGenericBrowserType_MorphTargetSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 77);

// @baa 0x0117e290
extern undefined * g_021d3c78;
// @baa 0x0117e2b0
undefined4 * UObject::sub_0117e2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3c78);
  return param_1;
}

// @baa 0x0117e2d0
IMPLEMENT_CLASS_AT(UGenericBrowserType_MorphWeightSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 78);

// @baa 0x0117e330
extern undefined * g_021d3db8;
// @baa 0x0117e350
undefined4 * UObject::sub_0117e350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3db8);
  return param_1;
}

// @baa 0x0117e370
IMPLEMENT_CLASS_AT(UGenericBrowserType_ParticleSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 79);

// @baa 0x0117e3d0
extern undefined * g_021d3ef8;
// @baa 0x0117e3f0
undefined4 * UObject::sub_0117e3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d3ef8);
  return param_1;
}

// @baa 0x0117e410
IMPLEMENT_CLASS_AT(UGenericBrowserType_PhysicalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 80);

// @baa 0x0117e470
extern undefined * g_021d4038;
// @baa 0x0117e490
undefined4 * UObject::sub_0117e490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4038);
  return param_1;
}

// @baa 0x0117e4b0
IMPLEMENT_CLASS_AT(UGenericBrowserType_PhysicsAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 91);

// @baa 0x0117e510
extern undefined * g_021d4178;
// @baa 0x0117e530
undefined4 * UObject::sub_0117e530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4178);
  return param_1;
}

// @baa 0x0117e550
IMPLEMENT_CLASS_AT(UGenericBrowserType_PhysXParticleSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 81);

// @baa 0x0117e5b0
extern undefined * g_021d42b8;
// @baa 0x0117e5d0
undefined4 * UObject::sub_0117e5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d42b8);
  return param_1;
}

// @baa 0x0117e5f0
IMPLEMENT_CLASS_AT(UGenericBrowserType_PostProcess, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 92);

// @baa 0x0117e650
extern undefined * g_021d43f8;
// @baa 0x0117e670
undefined4 * UObject::sub_0117e670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d43f8);
  return param_1;
}

// @baa 0x0117e690
IMPLEMENT_CLASS_AT(UGenericBrowserType_Prefab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 93);

// @baa 0x0117e6f0
extern undefined * g_021d4538;
// @baa 0x0117e710
undefined4 * UObject::sub_0117e710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4538);
  return param_1;
}

// @baa 0x0117e730
IMPLEMENT_CLASS_AT(UGenericBrowserType_Sequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 95);

// @baa 0x0117e790
extern undefined * g_021d4678;
// @baa 0x0117e7b0
undefined4 * UObject::sub_0117e7b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4678);
  return param_1;
}

// @baa 0x0117e7d0
IMPLEMENT_CLASS_AT(UGenericBrowserType_SkeletalMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 96);

// @baa 0x0117e830
extern undefined * g_021d47b8;
// @baa 0x0117e850
undefined4 * UObject::sub_0117e850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d47b8);
  return param_1;
}

// @baa 0x0117e870
IMPLEMENT_CLASS_AT(UGenericBrowserType_SoundMode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 98);

// @baa 0x0117e8d0
// @baa 0x0117e8f0
IMPLEMENT_CLASS_AT(UGenericBrowserType_Sounds, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 100);

// @baa 0x0117e950
extern undefined * g_021d48f8;
// @baa 0x0117e970
undefined4 * UObject::sub_0117e970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d48f8);
  return param_1;
}

extern undefined * g_021d4a38;
// @baa 0x0117e990
undefined4 * UObject::sub_0117e990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4a38);
  return param_1;
}

// @baa 0x0117e9b0
IMPLEMENT_CLASS_AT(UGenericBrowserType_SoundCue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 97);

// @baa 0x0117ea10
extern undefined * g_021d4b78;
// @baa 0x0117ea30
undefined4 * UObject::sub_0117ea30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4b78);
  return param_1;
}

// @baa 0x0117ea50
IMPLEMENT_CLASS_AT(UGenericBrowserType_SoundWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 99);

// @baa 0x0117eab0
extern undefined * g_021d4cb8;
// @baa 0x0117ead0
undefined4 * UObject::sub_0117ead0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4cb8);
  return param_1;
}

// @baa 0x0117eaf0
IMPLEMENT_CLASS_AT(UGenericBrowserType_SpeechRecognition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 101);

// @baa 0x0117eb50
// @baa 0x0117eb70
IMPLEMENT_CLASS_AT(UGenericBrowserType_StaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 102);

// @baa 0x0117ebd0
extern undefined * g_021d4df8;
// @baa 0x0117ebf0
undefined4 * UObject::sub_0117ebf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4df8);
  return param_1;
}

extern undefined * g_021d4f38;
// @baa 0x0117ec10
undefined4 * UObject::sub_0117ec10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d4f38);
  return param_1;
}

// @baa 0x0117ec30
IMPLEMENT_CLASS_AT(UGenericBrowserType_FracturedStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 71);

// @baa 0x0117ec90
extern undefined * g_021d5078;
// @baa 0x0117ecb0
undefined4 * UObject::sub_0117ecb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d5078);
  return param_1;
}

// @baa 0x0117ecd0
IMPLEMENT_CLASS_AT(UGenericBrowserType_TerrainLayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 103);

// @baa 0x0117ed30
extern undefined * g_021d51b8;
// @baa 0x0117ed50
undefined4 * UObject::sub_0117ed50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d51b8);
  return param_1;
}

// @baa 0x0117ed70
IMPLEMENT_CLASS_AT(UGenericBrowserType_TerrainMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 104);

// @baa 0x0117edd0
// @baa 0x0117edf0
IMPLEMENT_CLASS_AT(UGenericBrowserType_Texture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 105);

// @baa 0x0117ee50
extern undefined * g_021d52f8;
// @baa 0x0117ee70
undefined4 * UObject::sub_0117ee70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d52f8);
  return param_1;
}

extern undefined * g_021d5438;
// @baa 0x0117ee90
undefined4 * UObject::sub_0117ee90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d5438);
  return param_1;
}

// @baa 0x0117eeb0
IMPLEMENT_CLASS_AT(UGenericBrowserType_RenderTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 94);

// @baa 0x0117ef10
extern undefined * g_021d5578;
// @baa 0x0117ef30
undefined4 * UObject::sub_0117ef30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d5578);
  return param_1;
}

// @baa 0x0117ef50
IMPLEMENT_CLASS_AT(UGenericBrowserType_TextureWithAlpha, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 106);

// @baa 0x0117efb0
extern undefined * g_021d56b8;
// @baa 0x0117efd0
undefined4 * UObject::sub_0117efd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d56b8);
  return param_1;
}

// @baa 0x0117eff0
IMPLEMENT_CLASS_AT(UGenericBrowserType_UIScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 108);

// @baa 0x0117f050
extern undefined * g_021d57f8;
// @baa 0x0117f070
undefined4 * UObject::sub_0117f070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021d57f8);
  return param_1;
}

// @baa 0x0117f090
IMPLEMENT_CLASS_AT(UGenericBrowserType_UISkin, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericBrowserTypes.cpp", 109);

// @baa 0x0117f0f0
int sub_0117d2e0(void);
// @baa 0x01181070
undefined4 UOptionsDupObject::sub_01181070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117d2e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01181090
// @baa 0x011810b0
// @baa 0x011810d0
// @baa 0x011810f0
// @baa 0x01181110
// @baa 0x01181130
// @baa 0x01181150
// @baa 0x01181170
// @baa 0x01181190
// @baa 0x011811b0
// @baa 0x011811d0
// @baa 0x011811f0
// @baa 0x01181210
// @baa 0x01181230
// @baa 0x01181250
// @baa 0x01181270
// @baa 0x01181290
// @baa 0x011812b0
// @baa 0x011812d0
// @baa 0x011812f0
// @baa 0x01181310
// @baa 0x01181330
// @baa 0x01181350
// @baa 0x01181370
// @baa 0x01181390
// @baa 0x011813b0
// @baa 0x011813d0
// @baa 0x011813f0
// @baa 0x01181410
// @baa 0x01181430
// @baa 0x01181450
// @baa 0x01181470
// @baa 0x01181490
// @baa 0x011814b0
// @baa 0x011814d0
// @baa 0x011814f0
// @baa 0x01181510
// @baa 0x01181530
// @baa 0x01181550
// @baa 0x01181570
// @baa 0x01181590
// @baa 0x011815b0
// @baa 0x011815d0
// @baa 0x011815f0
// @baa 0x01181610
// @baa 0x01181630
// @baa 0x01181650
int sub_0117f220(void);
// @baa 0x01181670
undefined4 UGenericBrowserType::sub_01181670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117f220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01181690
// @baa 0x01181750
// @baa 0x01181810
// @baa 0x011818d0
// @baa 0x01181990
// @baa 0x01181a50
// @baa 0x01181b10
// @baa 0x01181bd0
// @baa 0x01181c90
// @baa 0x01181d50
// @baa 0x01181e10
// @baa 0x01181ed0
// @baa 0x01181f90
// @baa 0x01182050
// @baa 0x01182110
// @baa 0x011821d0
// @baa 0x01182290
// @baa 0x01182350
// @baa 0x01182410
// @baa 0x011824d0
// @baa 0x01182590
// @baa 0x01182650
// @baa 0x01182710
// @baa 0x011827d0
// @baa 0x01182890
// @baa 0x01182950
// @baa 0x01182a10
// @baa 0x01182ad0
// @baa 0x01182b90
// @baa 0x01182c50
// @baa 0x01182d10
// @baa 0x01182dd0
// @baa 0x01182e90
// @baa 0x01182f50
// @baa 0x01183010
// @baa 0x011830d0
// @baa 0x01183190
// @baa 0x01183250
// @baa 0x01183310
// @baa 0x011833d0
// @baa 0x01183490
// @baa 0x01183550
// @baa 0x01183610
// @baa 0x011836d0
// @baa 0x01183790
// @baa 0x01183850
// @baa 0x01183910
struct C_01184e20 {
    int sub_01184e20();
};

int sub_0117d120(void);
// @baa 0x01184e20
int C_01184e20::sub_01184e20(void)
{
    int param_1 = (int)this;

  sub_0117d120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0115cef0(void);
int sub_01181690(...);
extern undefined4 g_026d0ed8;
// @baa 0x01184e40
int sub_01184e40(void)
{
  if (g_026d0ed8 == 0) {
    g_026d0ed8 = sub_01181690(L"UnrealEd");
    sub_0115cef0();
  }
  return g_026d0ed8;
}

// @baa 0x01184e70
// @baa 0x01184f80
bool UGenericBrowserType_AnimTree::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01184fc0
// @baa 0x011850d0
bool UGenericBrowserType_Animation::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185110
// @baa 0x01185220
bool UGenericBrowserType_Archetype::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185260
// @baa 0x011853b0
// @baa 0x011854c0
bool UGenericBrowserType_CurveEdPresetCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185500
// @baa 0x01185610
bool UGenericBrowserType_Custom::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185650
// @baa 0x01185760
bool UGenericBrowserType_DecalMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011857a0
// @baa 0x011858b0
bool UGenericBrowserType_FaceFXAnimSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011858f0
// @baa 0x01185a00
bool UGenericBrowserType_FaceFXAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185a40
// @baa 0x01185b50
bool UGenericBrowserType_Font::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185b90
// @baa 0x01185ca0
bool UGenericBrowserType_LensFlare::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185ce0
// @baa 0x01185df0
bool UGenericBrowserType_Material::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185e30
// @baa 0x01185f40
bool UGenericBrowserType_MaterialInstanceConstant::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01185f80
// @baa 0x01186090
bool UGenericBrowserType_MaterialInstanceTimeVarying::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011860d0
// @baa 0x011861e0
bool UGenericBrowserType_MaterialLackingPhysMat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186220
// @baa 0x01186330
bool UGenericBrowserType_MorphTargetSet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186370
// @baa 0x01186480
bool UGenericBrowserType_MorphWeightSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011864c0
// @baa 0x011865d0
bool UGenericBrowserType_ParticleSystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186610
// @baa 0x01186720
bool UGenericBrowserType_PhysicalMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186760
// @baa 0x01186870
bool UGenericBrowserType_PhysXParticleSystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011868b0
// @baa 0x011869c0
bool UGenericBrowserType_ApexDestructibleAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186a00
// @baa 0x01186b10
bool UGenericBrowserType_ApexRenderMeshAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186b50
// @baa 0x01186c60
bool UGenericBrowserType_ApexParticleSystemAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186ca0
// @baa 0x01186db0
bool UGenericBrowserType_ApexMeshParticleFactoryAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186df0
// @baa 0x01186f00
bool UGenericBrowserType_DestructibleDamageParameters::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01186f40
// @baa 0x01187050
bool UGenericBrowserType_PhysicsAsset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187090
// @baa 0x011871a0
bool UGenericBrowserType_PostProcess::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011871e0
// @baa 0x011872f0
bool UGenericBrowserType_Prefab::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187330
// @baa 0x01187440
bool UGenericBrowserType_Sequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187480
// @baa 0x01187590
bool UGenericBrowserType_SkeletalMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011875d0
// @baa 0x011876e0
bool UGenericBrowserType_SoundMode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187720
// @baa 0x01187830
bool UGenericBrowserType_Sounds::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187870
// @baa 0x01187980
bool UGenericBrowserType_SpeechRecognition::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011879c0
// @baa 0x01187ad0
bool UGenericBrowserType_StaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187b10
// @baa 0x01187c20
bool UGenericBrowserType_TerrainLayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187c60
// @baa 0x01187d70
bool UGenericBrowserType_TerrainMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187db0
// @baa 0x01187ec0
bool UGenericBrowserType_Texture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01187f00
// @baa 0x01188010
bool UGenericBrowserType_UIScene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01188050
// @baa 0x01188160
bool UGenericBrowserType_UISkin::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01189ca0 {
    int sub_01189ca0(undefined4, undefined4);
    int sub_01184da0(int, int);
};

// @baa 0x01189ca0
int C_01189ca0::sub_01189ca0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_01189ca0 *)(this))->sub_01184da0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01189cc0 {
    int sub_01189cc0();
};

// @baa 0x01189cc0
int C_01189cc0::sub_01189cc0(void)
{
    int param_1 = (int)this;

  sub_0117d120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01181990(...);
int sub_01185110(void);
extern undefined4 g_026d0ee8;
// @baa 0x01189ce0
int sub_01189ce0(void)
{
  if (g_026d0ee8 == 0) {
    g_026d0ee8 = sub_01181990(L"UnrealEd");
    sub_01185110();
  }
  return g_026d0ee8;
}

int sub_01181bd0(...);
int sub_01185500(void);
extern undefined4 g_026d0ef4;
// @baa 0x01189d10
int sub_01189d10(void)
{
  if (g_026d0ef4 == 0) {
    g_026d0ef4 = sub_01181bd0(L"UnrealEd");
    sub_01185500();
  }
  return g_026d0ef4;
}

int sub_01183250(...);
int sub_01187720(void);
extern undefined4 g_026d0f6c;
// @baa 0x01189d40
int sub_01189d40(void)
{
  if (g_026d0f6c == 0) {
    g_026d0f6c = sub_01183250(L"UnrealEd");
    sub_01187720();
  }
  return g_026d0f6c;
}

int sub_011833d0(...);
int sub_011879c0(void);
extern undefined4 g_026d0f74;
// @baa 0x01189d70
int sub_01189d70(void)
{
  if (g_026d0f74 == 0) {
    g_026d0f74 = sub_011833d0(L"UnrealEd");
    sub_011879c0();
  }
  return g_026d0f74;
}

int sub_01183610(...);
int sub_01187db0(void);
extern undefined4 g_026d0f80;
// @baa 0x01189da0
int sub_01189da0(void)
{
  if (g_026d0f80 == 0) {
    g_026d0f80 = sub_01183610(L"UnrealEd");
    sub_01187db0();
  }
  return g_026d0f80;
}

void sub_01189a20();
// @baa 0x01189dd0
void sub_01189dd0(void) { sub_01189a20(); }

// @baa 0x01189de0
// @baa 0x01189ef0
bool UGenericBrowserType_All::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01189f30
// @baa 0x0118a040
bool UGenericBrowserType_FracturedStaticMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0118a080
// @baa 0x0118a190
bool UGenericBrowserType_RenderTexture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0118a1d0
// @baa 0x0118a2e0
bool UGenericBrowserType_SoundCue::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0118a320
// @baa 0x0118a430
bool UGenericBrowserType_SoundWave::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0118a470
// @baa 0x0118a580
bool UGenericBrowserType_TextureWithAlpha::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0118a5c0
// @baa 0x0118a6d0
bool UGenericBrowserType_UIArchetype::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_01189b40();
// @baa 0x0118ae40
void sub_0118ae40(void) { sub_01189b40(); }

struct C_0118aea0 {
    int sub_0118aea0();
};

// @baa 0x0118aea0
int C_0118aea0::sub_0118aea0(void)
{
    int param_1 = (int)this;

  sub_0117d120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01181750(...);
int sub_01189de0(void);
extern undefined4 g_026d0edc;
// @baa 0x0118af20
int sub_0118af20(void)
{
  if (g_026d0edc == 0) {
    g_026d0edc = sub_01181750(L"UnrealEd");
    sub_01189de0();
  }
  return g_026d0edc;
}

// @baa 0x0118af50
void sub_0118af50(void) { sub_01189a20(); }

// @baa 0x012a2200
void sub_012a2200(void) {  }

extern char g_022cc3d8[];
// @baa 0x018072f0
int sub_018072f0(void) { return (int)g_022cc3d8; }
