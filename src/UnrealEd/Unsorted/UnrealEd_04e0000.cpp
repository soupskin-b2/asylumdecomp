// UnrealEd_04e0000.cpp: 92 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_004e0b90(byte);
};

int sub_00402660(...);
int sub_004de6e0(void);
// @baa 0x004e0b90
undefined4 C::sub_004e0b90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004de6e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004e0bb0 {
    void sub_004e0bb0();
};

int sub_004df630(...);
int sub_01ab3290(...);
// @baa 0x004e0bb0
void C_004e0bb0::sub_004e0bb0(void)
{
    int * param_1 = (int *)this;

  sub_004df630(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004e0bf0 {
    void sub_004e0bf0();
};

int sub_004df670(...);
// @baa 0x004e0bf0
void C_004e0bf0::sub_004e0bf0(void)
{
    int * param_1 = (int *)this;

  sub_004df670(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004e13e0 {
    void sub_004e13e0();
};

// @baa 0x004e13e0
void C_004e13e0::sub_004e13e0(void)
{
    int * param_1 = (int *)this;

  sub_004df670(*param_1,*param_1 + param_1[2] * 0x14);
  sub_01ab3290(*param_1,param_1[1] * 0x14);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004e1420 {
    void sub_004e1420();
};

// @baa 0x004e1420
void C_004e1420::sub_004e1420(void)
{
    int * param_1 = (int *)this;

  sub_004df630(*param_1,*param_1 + param_1[2] * 0xc);
  sub_01ab3290(*param_1,param_1[1] * 0xc);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004e3f50 {
    undefined4 sub_004e3f50(byte);
};

int sub_004e1380(void);
// @baa 0x004e3f50
undefined4 C_004e3f50::sub_004e3f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004e1380();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_004e3c50();
// @baa 0x004e3f70
void sub_004e3f70(void) { sub_004e3c50(); }

extern char g_02663e4c[];
// @baa 0x004e6cb0
int sub_004e6cb0(void) { return (int)g_02663e4c; }

struct A_004e6cc0 { virtual void sub_004e7460(); char pad[328]; };

struct B_004e6cc0 { virtual void sub_004e7460(); };

struct C_004e6cc0 : A_004e6cc0, B_004e6cc0 { virtual void sub_004e7460(); C_004e6cc0(); };

C_004e6cc0::C_004e6cc0() {}

// @baa 0x004e6cc0
void C_004e6cc0::sub_004e7460() {}

struct C_004e7460 {
    undefined4 sub_004e7460(byte);
};

int sub_004e6cd0(void);
// @baa 0x004e7460
undefined4 C_004e7460::sub_004e7460(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004e6cd0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004e7480 {
    bool sub_004e7480();
};

// @baa 0x004e7480
bool C_004e7480::sub_004e7480(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) == 9;
}

struct C_004e7590 { int sub_004e7590(void); };

// @baa 0x004e7590
int C_004e7590::sub_004e7590(void) { return *(int*)((char*)this + 0); }

struct C_004e75a0 { int sub_004e75a0(void); };

// @baa 0x004e75a0
int C_004e75a0::sub_004e75a0(void) { return *(int*)((char*)this + 4); }

struct C_004e75b0 { int sub_004e75b0(void); };

// @baa 0x004e75b0
int C_004e75b0::sub_004e75b0(void) { return *(int*)((char*)this + 8); }

struct C_004e75c0 { int sub_004e75c0(void); };

// @baa 0x004e75c0
int C_004e75c0::sub_004e75c0(void) { return *(int*)((char*)this + 12); }

struct C_004e75f0 {
    void sub_004e75f0(undefined4 *);
};

// @baa 0x004e75f0
void C_004e75f0::sub_004e75f0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  return;
}

struct C_004e7610 {
    void sub_004e7610(int, int);
};

// @baa 0x004e7610
void C_004e7610::sub_004e7610(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  return;
}

struct C_004e7620 {
    void sub_004e7620(int *);
};

// @baa 0x004e7620
void C_004e7620::sub_004e7620(int * param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = param_2[1];
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + iVar1;
  return;
}

struct C_004e7680 {
    void sub_004e7680(undefined1);
};

// @baa 0x004e7680
void C_004e7680::sub_004e7680(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x188) = 1;
  *(undefined1 *)(param_1 + 0x18a) = param_2;
  return;
}

class wxString;
class wxTextValidator;
class wxString {
    public:
};

class wxTextValidator {
    public:
    public: __declspec(dllimport) wxTextValidator(long,wxString *);
    friend struct C_004e76a0;
};

struct C_004e76a0 {
    wxTextValidator * sub_004e76a0(undefined4);
};

extern undefined * g_01e65348;
// @baa 0x004e76a0
wxTextValidator * C_004e76a0::sub_004e76a0(undefined4 param_2)
{
    wxTextValidator * param_1 = (wxTextValidator *)this;

  ((wxTextValidator *)(param_1))->wxTextValidator::wxTextValidator(0, (wxString *)0x0);
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined ***)param_1 = &g_01e65348;
  return param_1;
}

// @baa 0x004e77a0
BYTE __stdcall sub_004e77a0(DWORD arg1)
{
    return 1;
}

extern char g_025d4f54[];
// @baa 0x004e7870
int sub_004e7870(void) { return (int)g_025d4f54; }

extern char g_02664cf8[];
// @baa 0x004e7880
int sub_004e7880(void) { return (int)g_02664cf8; }

struct C_004e7890 { int sub_004e7890(void); };

// @baa 0x004e7890
int C_004e7890::sub_004e7890(void) { return *(int*)((char*)this + 332); }

struct C_004e78b0 {
    void sub_004e78b0(undefined1);
};

// @baa 0x004e78b0
void C_004e78b0::sub_004e78b0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x319) = param_2;
  return;
}

// @baa 0x004e7f30
void __stdcall sub_004e7f30(int a0) {  }

class wxBitmap {
public:
    __declspec(dllimport) virtual ~wxBitmap();
};

struct C_004e83a0 {
    void sub_004e83a0();
};

// @baa 0x004e83a0
void C_004e83a0::sub_004e83a0()
{
    wxBitmap* p = (wxBitmap*)((char*)this + 4);
    p->wxBitmap::~wxBitmap();
}

struct M_004e8860 { void sub_01ab58f0(); };

struct C_004e8860 { char pad[8]; M_004e8860 m; void sub_004e8860(); };

// @baa 0x004e8860
void C_004e8860::sub_004e8860() { m.sub_01ab58f0(); }

extern char g_025d4f5c[];
// @baa 0x004e8a60
int sub_004e8a60(void) { return (int)g_025d4f5c; }

extern char g_02664f5c[];
// @baa 0x004e8a70
int sub_004e8a70(void) { return (int)g_02664f5c; }

extern char g_02665694[];
// @baa 0x004e8af0
int sub_004e8af0(void) { return (int)g_02665694; }

// @baa 0x004e8b80
undefined1 sub_004e8b80(void)
{
  return 1;
}

extern char g_025d4f1c[];
// @baa 0x004e8f50
int sub_004e8f50(void) { return (int)g_025d4f1c; }

extern char g_0266567c[];
// @baa 0x004e8f60
int sub_004e8f60(void) { return (int)g_0266567c; }

struct C_004e92e0 {
    void sub_004e92e0(int);
};

// @baa 0x004e92e0
void C_004e92e0::sub_004e92e0(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x14);
  return;
}

extern char g_025d4f3c[];
// @baa 0x004ea2a0
int sub_004ea2a0(void) { return (int)g_025d4f3c; }

extern char g_02664ce0[];
// @baa 0x004ea2b0
int sub_004ea2b0(void) { return (int)g_02664ce0; }

struct C_004ea2c0 {
    void sub_004ea2c0(undefined4, undefined4, undefined4);
};

// @baa 0x004ea2c0
void C_004ea2c0::sub_004ea2c0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}

// @baa 0x004ea2d0
void __stdcall sub_004ea2d0(int a0, int a1, int a2) {  }

class wxGridCellFloatEditor;
class wxGridCellFloatEditor {
    public:
    public: __declspec(dllimport) wxGridCellFloatEditor(int,int);
    friend struct C_004ea870;
};

struct C_004ea870 {
    wxGridCellFloatEditor * sub_004ea870(int, int);
};

extern undefined * g_01e659b0;
// @baa 0x004ea870
wxGridCellFloatEditor * C_004ea870::sub_004ea870(int param_2, int param_3)
{
    wxGridCellFloatEditor * param_1 = (wxGridCellFloatEditor *)this;

  ((wxGridCellFloatEditor *)(param_1))->wxGridCellFloatEditor::wxGridCellFloatEditor(param_2, param_3);
  *(int *)(param_1 + 100) = param_3;
  *(int *)(param_1 + 0x60) = param_2;
  *(undefined ***)param_1 = &g_01e659b0;
  return param_1;
}

class wxGridCellTextEditor;
class wxKeyEvent;
class wxGridCellTextEditor {
    public:
    public: __declspec(dllimport) virtual void StartingKey(wxKeyEvent &);
    friend struct C_004ea8a0;
};

class wxKeyEvent {
    public:
};

struct C_004ea8a0 {
    void sub_004ea8a0(wxKeyEvent *);
};

extern "C" __declspec(dllimport) int isdigit(...);
// @baa 0x004ea8a0
void C_004ea8a0::sub_004ea8a0(wxKeyEvent * param_2)
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

extern char g_025d4f2c[];
// @baa 0x004eaa60
int sub_004eaa60(void) { return (int)g_025d4f2c; }

extern char g_02664c48[];
// @baa 0x004eaa70
int sub_004eaa70(void) { return (int)g_02664c48; }

extern char g_025d4f34[];
// @baa 0x004eaa80
int sub_004eaa80(void) { return (int)g_025d4f34; }

extern char g_02664c60[];
// @baa 0x004eaa90
int sub_004eaa90(void) { return (int)g_02664c60; }

extern char g_026653f4[];
// @baa 0x004eab40
int sub_004eab40(void) { return (int)g_026653f4; }

struct C_004eab50 {
    void sub_004eab50(undefined4, undefined4, undefined4);
    int sub_01ab5820(int);
};

// @baa 0x004eab50
void C_004eab50::sub_004eab50(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_004eab50 *)(((char *)this + 0x10)))->sub_01ab5820(param_3);
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}

struct C_004eab70 {
    void sub_004eab70(undefined4, undefined4, undefined4);
};

// @baa 0x004eab70
void C_004eab70::sub_004eab70(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = param_4;
  return;
}

extern char g_025d4f4c[];
// @baa 0x004eb010
int sub_004eb010(void) { return (int)g_025d4f4c; }

extern char g_026656c4[];
// @baa 0x004eb020
int sub_004eb020(void) { return (int)g_026656c4; }

extern char g_025d4f44[];
// @baa 0x004ebe30
int sub_004ebe30(void) { return (int)g_025d4f44; }

extern char g_02664f44[];
// @baa 0x004ebe40
int sub_004ebe40(void) { return (int)g_02664f44; }

// @baa 0x004ebf10
int sub_004ebf10(void) { return 3; }

extern char g_025d4f24[];
// @baa 0x004ec7a0
int sub_004ec7a0(void) { return (int)g_025d4f24; }

extern char g_026656ac[];
// @baa 0x004ec7b0
int sub_004ec7b0(void) { return (int)g_026656ac; }

extern char g_02664f14[];
// @baa 0x004ec830
int sub_004ec830(void) { return (int)g_02664f14; }

// @baa 0x004ec8c0
undefined1 sub_004ec8c0(void)
{
  return 1;
}

extern char g_025d4f64[];
// @baa 0x004ecaf0
int sub_004ecaf0(void) { return (int)g_025d4f64; }

extern char g_02664d10[];
// @baa 0x004ecb00
int sub_004ecb00(void) { return (int)g_02664d10; }

// @baa 0x004ed380
int sub_004ed380(void) { return (int)g_02664f14; }

extern char g_0266526c[];
// @baa 0x004ed620
int sub_004ed620(void) { return (int)g_0266526c; }

struct C_004ed6a0 {
    void sub_004ed6a0(undefined4, undefined4);
};

// @baa 0x004ed6a0
void C_004ed6a0::sub_004ed6a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

// @baa 0x004ed6b0
void __stdcall sub_004ed6b0(int a0, int a1) {  }

struct C_004ed6c0 {
    int sub_004ed6c0();
};

// @baa 0x004ed6c0
int C_004ed6c0::sub_004ed6c0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[2] * 4;
}

struct C_004ed6d0 { int sub_004ed6d0(void); };

// @baa 0x004ed6d0
int C_004ed6d0::sub_004ed6d0(void) { return *(int*)((char*)this + 8); }

struct C_004ed6e0 {
    int sub_004ed6e0(int);
};

// @baa 0x004ed6e0
int C_004ed6e0::sub_004ed6e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_004ed6f0 { int sub_004ed6f0(void); };

// @baa 0x004ed6f0
int C_004ed6f0::sub_004ed6f0(void) { return *(int*)((char*)this + 8); }

struct C_004ed700 {
    int sub_004ed700(int);
};

// @baa 0x004ed700
int C_004ed700::sub_004ed700(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_004ed710 { int sub_004ed710(void); };

// @baa 0x004ed710
int C_004ed710::sub_004ed710(void) { return *(int*)((char*)this + 8); }

struct C_004ed720 {
    int sub_004ed720(int);
};

// @baa 0x004ed720
int C_004ed720::sub_004ed720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_004ed730 { int sub_004ed730(void); };

// @baa 0x004ed730
int C_004ed730::sub_004ed730(void) { return *(int*)((char*)this + 8); }

struct C_004ed740 {
    int sub_004ed740(int);
};

// @baa 0x004ed740
int C_004ed740::sub_004ed740(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_004ed750 {
    int sub_004ed750(int);
};

// @baa 0x004ed750
int C_004ed750::sub_004ed750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_004ed760 {
    int sub_004ed760(int);
};

// @baa 0x004ed760
int C_004ed760::sub_004ed760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_004ed770 { int sub_004ed770(void); };

// @baa 0x004ed770
int C_004ed770::sub_004ed770(void) { return *(int*)((char*)this + 8); }

struct C_004ed780 {
    int sub_004ed780(int);
};

// @baa 0x004ed780
int C_004ed780::sub_004ed780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_004ed790 {
    int sub_004ed790();
};

// @baa 0x004ed790
int C_004ed790::sub_004ed790(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[2] * 4;
}

// @baa 0x004ed8a0
void sub_004ed8a0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004ed8c0
void sub_004ed8c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004ed8e0
void sub_004ed8e0(void) {  }

// @baa 0x004ed8f0
void sub_004ed8f0(void) {  }

// @baa 0x004ed900
void sub_004ed900(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004ed920
void sub_004ed920(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004ed940
void sub_004ed940(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004ed960
void sub_004ed960(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004ed980
void sub_004ed980(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_004edab0 {
    undefined4 sub_004edab0(byte);
};

int sub_004ec690(void);
// @baa 0x004edab0
undefined4 C_004edab0::sub_004edab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004ec690();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct A_004edad0 { virtual void sub_004f1f40(); char pad[332]; };

struct B_004edad0 { virtual void sub_004f1f40(); };

struct C_004edad0 : A_004edad0, B_004edad0 { virtual void sub_004f1f40(); C_004edad0(); };

C_004edad0::C_004edad0() {}

// @baa 0x004edad0
void C_004edad0::sub_004f1f40() {}

struct A_004edae0 { virtual void sub_004f1f40(); char pad[900]; };

struct B_004edae0 { virtual void sub_004f1f40(); };

struct C_004edae0 : A_004edae0, B_004edae0 { virtual void sub_004f1f40(); C_004edae0(); };

C_004edae0::C_004edae0() {}

// @baa 0x004edae0
void C_004edae0::sub_004f1f40() {}

struct A_004edaf0 { virtual void sub_004f6930(); char pad[320]; };

struct B_004edaf0 { virtual void sub_004f6930(); };

struct C_004edaf0 : A_004edaf0, B_004edaf0 { virtual void sub_004f6930(); C_004edaf0(); };

C_004edaf0::C_004edaf0() {}

// @baa 0x004edaf0
void C_004edaf0::sub_004f6930() {}

struct C_004edb00 {
    undefined4 sub_004edb00(byte);
};

int sub_004e77b0(void);
// @baa 0x004edb00
undefined4 C_004edb00::sub_004edb00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004e77b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004eee60 {
    undefined4 sub_004eee60(byte);
    int sub_01ab58f0();
};

// @baa 0x004eee60
undefined4 C_004eee60::sub_004eee60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_004eee60 *)(((char *)this + 8)))->sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
