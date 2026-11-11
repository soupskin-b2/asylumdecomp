// UnrealEd_0420000.cpp (part 1 of 2): 60 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_00416fc0(int); C *sub_00422570(int); };

// @baa 0x00422570
C *C::sub_00422570(int a) { sub_00416fc0(a); return this; }

struct M_00422590 { void sub_004224a0(); };

struct C_00422590 { char pad[8]; M_00422590 m; void sub_00422590(); };

// @baa 0x00422590
void C_00422590::sub_00422590() { m.sub_004224a0(); }

int sub_01ab3290(...);
// @baa 0x004225b0
void sub_004225b0(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

// @baa 0x00422620
void sub_00422620(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

extern int g_02616f0c;
int sub_00421fc0();
// @baa 0x00422750
int sub_00422750() { if (!g_02616f0c) g_02616f0c = sub_00421fc0(); return g_02616f0c; }

// @baa 0x00422770
int sub_00422770() { if (!g_02616f0c) g_02616f0c = sub_00421fc0(); return g_02616f0c; }

extern int g_02616f10;
int sub_00422410();
// @baa 0x004227b0
int sub_004227b0() { if (!g_02616f10) g_02616f10 = sub_00422410(); return g_02616f10; }

struct C_00422c70 {
    undefined4 sub_00422c70(byte);
};

int sub_0041d8f0(void);
int sub_0053dfa0(...);
// @baa 0x00422c70
undefined4 C_00422c70::sub_00422c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0041d8f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00423c10 {
    undefined4 sub_00423c10(byte);
    int sub_004224a0();
};

// @baa 0x00423c10
undefined4 C_00423c10::sub_00423c10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00423c10 *)(((char *)this + 8)))->sub_004224a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02616f00;
int sub_00422d10();
// @baa 0x00424770
int sub_00424770() { if (!g_02616f00) g_02616f00 = sub_00422d10(); return g_02616f00; }

// @baa 0x00424790
int sub_00424790() { if (!g_02616f00) g_02616f00 = sub_00422d10(); return g_02616f00; }

void sub_00423b60();
// @baa 0x00427c90
void sub_00427c90(void) { sub_00423b60(); }

void sub_00424350();
// @baa 0x00428080
void sub_00428080(void) { sub_00424350(); }

struct C_00428090 { void sub_00424560(int); C_00428090 *sub_00428090(int); };

// @baa 0x00428090
C_00428090 *C_00428090::sub_00428090(int a) { sub_00424560(a); return this; }

struct C_0042e260 {
    undefined4 sub_0042e260(byte);
};

int sub_00429940(void);
// @baa 0x0042e260
undefined4 C_0042e260::sub_0042e260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00429940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0042e8f0 {
    undefined4 sub_0042e8f0(byte);
};

int sub_0042e820(void);
// @baa 0x0042e8f0
undefined4 C_0042e8f0::sub_0042e8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0042e820();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) int Cmp(wchar_t const *) const;
    friend bool sub_0042ea40(wchar_t * param_1, wxString * param_2);
};

// @baa 0x0042ea40
bool sub_0042ea40(wchar_t * param_1, wxString * param_2)
{
  int iVar1;
  
  iVar1 = ((wxString *)(param_2))->wxString::Cmp(param_1);
  return iVar1 == 0;
}

extern "C" double __cdecl sin(double);
// @baa 0x0042eac0
double sub_0042eac0(double x)
{
    return sin(x);
}

extern "C" double cos(double);
// @baa 0x0042ead0
double sub_0042ead0(double x)
{
    return cos(x);
}

struct C_0042eb00 {
    double* sub_0042eb00();
};

// @baa 0x0042eb00
double* C_0042eb00::sub_0042eb00()
{
    double* p = (double*)this;
    *p = 0.0;
    p[1] = 0.0;
    return p;
}

struct C_0042eb40 {
    float10 sub_0042eb40();
};

// @baa 0x0042eb40
float10 C_0042eb40::sub_0042eb40(void)
{
    double * param_1 = (double *)this;

  return (float10)*param_1;
}

struct C_0042eb50 {
    float10 sub_0042eb50();
};

// @baa 0x0042eb50
float10 C_0042eb50::sub_0042eb50(void)
{
    int param_1 = (int)this;

  return (float10)*(double *)(param_1 + 8);
}

struct C_0042eb80 {
    void sub_0042eb80(double *);
};

// @baa 0x0042eb80
void C_0042eb80::sub_0042eb80(double * param_2)
{
    double * param_1 = (double *)this;

  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  return;
}

struct C_0042eba0 {
    void sub_0042eba0(double *);
};

// @baa 0x0042eba0
void C_0042eba0::sub_0042eba0(double * param_2)
{
    double * param_1 = (double *)this;

  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  return;
}

struct C_0042ebf0 { int sub_0042ebf0(void); };

// @baa 0x0042ebf0
int C_0042ebf0::sub_0042ebf0(void) { return *(int*)((char*)this + 0); }

struct C_0042ec00 { int sub_0042ec00(void); };

// @baa 0x0042ec00
int C_0042ec00::sub_0042ec00(void) { return *(int*)((char*)this + 8); }

struct C_0042ed50 {
    int sub_0042ed50();
};

// @baa 0x0042ed50
int C_0042ed50::sub_0042ed50(void)
{
    int * param_1 = (int *)this;

  return *param_1 / 2;
}

struct C_0042ed90 {
    float10 sub_0042ed90(int);
};

// @baa 0x0042ed90
float10 C_0042ed90::sub_0042ed90(int param_2)
{
    int param_1 = (int)this;

  float10 fVar1;
  float10 fVar2;
  
  if (param_2 == 0) {
    return (float10)**(double **)(param_1 + 0x14) * (float10)**(double **)(param_1 + 0x14);
  }
  fVar1 = (float10)*(double *)(param_2 * 0x10 + 8 + *(int *)(param_1 + 0x14));
  fVar2 = (float10)*(double *)(param_2 * 0x10 + *(int *)(param_1 + 0x14));
  return fVar2 * fVar2 + fVar1 * fVar1;
}

// @baa 0x0042edc0
float10 sub_0042edc0(int param_1, int param_2, int param_3)
{
  return (float10)(param_1 * param_2) / (float10)param_3;
}

struct C_0042ee00 {
    void sub_0042ee00(int, undefined4 *);
};

// @baa 0x0042ee00
void C_0042ee00::sub_0042ee00(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) * 0x10 + *(int *)(param_1 + 0x14));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return;
}

struct C_0042f0e0 { char* sub_0042f0e0(void); };

// @baa 0x0042f0e0
char* C_0042f0e0::sub_0042f0e0(void) { return (char*)this + 24; }

struct C_0042f0f0 { int sub_0042f0f0(void); };

// @baa 0x0042f0f0
int C_0042f0f0::sub_0042f0f0(void) { return *(int*)((char*)this + 0); }

int sub_00c93400(void);
int sub_00cdbdc0(...);
extern undefined4 g_026c3c9c;
// @baa 0x0042f100
int sub_0042f100(void)
{
  if (g_026c3c9c == 0) {
    g_026c3c9c = sub_00cdbdc0(L"Engine");
    sub_00c93400();
  }
  return g_026c3c9c;
}

int sub_00e708c0(void);
int sub_00e826b0(...);
extern undefined4 g_026cc174;
// @baa 0x0042f130
int sub_0042f130(void)
{
  if (g_026cc174 == 0) {
    g_026cc174 = sub_00e826b0(L"FMODAudio");
    sub_00e708c0();
  }
  return g_026cc174;
}

struct C_0042f160 { int sub_0042f160(void); };

// @baa 0x0042f160
int C_0042f160::sub_0042f160(void) { return *(int*)((char*)this + 472); }

struct C_0042f170 {
    void sub_0042f170();
};

int sub_0040cdb0(void);
extern undefined * g_01e479d8;
// @baa 0x0042f170
void C_0042f170::sub_0042f170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e479d8);
  sub_0040cdb0();
  return;
}

struct C_0042f280 { int sub_0042f280(void); };

// @baa 0x0042f280
int C_0042f280::sub_0042f280(void) { return *(int*)((char*)this + 8); }

struct C_0042f2b0 {
    void sub_0042f2b0(float, float);
};

// @baa 0x0042f2b0
void C_0042f2b0::sub_0042f2b0(float param_2, float param_3)
{
    int param_1 = (int)this;
  *(float *)(param_1 + 0xc) = param_2;
  *(float *)(param_1 + 0x10) = param_3;
  if (param_3 < param_2) {
    *(float *)(param_1 + 0xc) = param_3;
    *(float *)(param_1 + 0x10) = param_2;
  }
  return;
}

struct C_0042f2e0 { float sub_0042f2e0(void); };

// @baa 0x0042f2e0
float C_0042f2e0::sub_0042f2e0(void) { return *(float*)((char*)this + 20); }

struct C_0042f300 { float sub_0042f300(void); };

// @baa 0x0042f300
float C_0042f300::sub_0042f300(void) { return *(float*)((char*)this + 24); }

struct C_0042f3e0 {
    void sub_0042f3e0();
};

int __stdcall sub_01763117(int, int);
// @baa 0x0042f3e0
void C_0042f3e0::sub_0042f3e0(void)
{
    int param_1 = (int)this;
  sub_01763117(*(undefined4 *)(param_1 + 0x28),1);
  return;
}

struct C_0042f3f0 {
    void sub_0042f3f0();
};

int __stdcall sub_017630f6(int);
// @baa 0x0042f3f0
void C_0042f3f0::sub_0042f3f0(void)
{
    int param_1 = (int)this;
  sub_017630f6(*(undefined4 *)(param_1 + 0x28));
  return;
}

struct C_0042f430 {
    undefined1 sub_0042f430();
};

// @baa 0x0042f430
undefined1 C_0042f430::sub_0042f430(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1c);
}

extern char g_025d4908[];
// @baa 0x0042f4d0
int sub_0042f4d0(void) { return (int)g_025d4908; }

extern char g_02618714[];
// @baa 0x0042f4e0
int sub_0042f4e0(void) { return (int)g_02618714; }

extern char g_025d48e8[];
// @baa 0x0042f510
int sub_0042f510(void) { return (int)g_025d48e8; }

extern char g_026186fc[];
// @baa 0x0042f520
int sub_0042f520(void) { return (int)g_026186fc; }

extern char g_02617d2c[];
// @baa 0x0042f5c0
int sub_0042f5c0(void) { return (int)g_02617d2c; }

struct C_0042f5d0 {
    void sub_0042f5d0(undefined4, undefined4);
};

// @baa 0x0042f5d0
void C_0042f5d0::sub_0042f5d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_3;
  return;
}

// @baa 0x0042f5f0
undefined1 sub_0042f5f0(void)
{
  return 1;
}

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Close(bool);
    friend struct C_0042f600;
};

struct C_0042f600 {
    void sub_0042f600(int);
};

// @baa 0x0042f600
void C_0042f600::sub_0042f600(int param_2)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  ((wxWindowBase *)(param_1))->wxWindowBase::Close(false);
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}

// @baa 0x0042f620
void __stdcall sub_0042f620(int param_1)
{
  *(char *)(param_1 + 0x20) = 1;
}

class wxGridCellFloatRenderer;
class wxGridCellFloatRenderer {
    public:
    public: __declspec(dllimport) wxGridCellFloatRenderer(int,int);
    friend struct C_0042f730;
};

struct C_0042f730 {
    wxGridCellFloatRenderer * sub_0042f730(int, int);
};

extern undefined * g_01e47d44;
// @baa 0x0042f730
wxGridCellFloatRenderer * C_0042f730::sub_0042f730(int param_2, int param_3)
{
    wxGridCellFloatRenderer * param_1 = (wxGridCellFloatRenderer *)this;

  ((wxGridCellFloatRenderer *)(param_1))->wxGridCellFloatRenderer::wxGridCellFloatRenderer(param_2, param_3);
  *(int *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined ***)param_1 = &g_01e47d44;
  return param_1;
}

extern char g_025d4928[];
// @baa 0x0042f7f0
int sub_0042f7f0(void) { return (int)g_025d4928; }

extern char g_02617bd0[];
// @baa 0x0042f800
int sub_0042f800(void) { return (int)g_02617bd0; }

extern char g_02618638[];
// @baa 0x0042fd30
int sub_0042fd30(void) { return (int)g_02618638; }

class wxGrid;
class wxGrid {
    public:
    public: __declspec(dllimport) bool IsCellEditControlShown() const;
    public: __declspec(dllimport) void SaveEditControlValue();
    public: __declspec(dllimport) void HideCellEditControl();
    friend struct C_0042fd40;
};

struct C_0042fd40 {
    void sub_0042fd40(int);
};

// @baa 0x0042fd40
void C_0042fd40::sub_0042fd40(int param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxGrid *)(*(wxGrid **)(param_1 + 0x1a0)))->wxGrid::IsCellEditControlShown();
  if (bVar1) {
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1a0)))->wxGrid::SaveEditControlValue();
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1a0)))->wxGrid::HideCellEditControl();
    *(undefined1 *)(param_2 + 0x20) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}

extern char g_025d48f8[];
// @baa 0x0042fda0
int sub_0042fda0(void) { return (int)g_025d48f8; }

extern char g_02617ab0[];
// @baa 0x0042fdb0
int sub_0042fdb0(void) { return (int)g_02617ab0; }

extern char g_02617cfc[];
// @baa 0x0042ff80
int sub_0042ff80(void) { return (int)g_02617cfc; }
