// UnrealEd_0510000.cpp (part 1 of 3): 213 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern char g_026656f4[];
// @baa 0x00510060
int sub_00510060(void) { return (int)g_026656f4; }

struct A_00510070 { virtual void sub_00510430(); char pad[332]; };

struct B_00510070 { virtual void sub_00510430(); };

struct C_00510070 : A_00510070, B_00510070 { virtual void sub_00510430(); C_00510070(); };

C_00510070::C_00510070() {}

// @baa 0x00510070
void C_00510070::sub_00510430() {}

struct A_00510080 { virtual void sub_00510430(); char pad[428]; };

struct B_00510080 { virtual void sub_00510430(); };

struct C_00510080 : A_00510080, B_00510080 { virtual void sub_00510430(); C_00510080(); };

C_00510080::C_00510080() {}

// @baa 0x00510080
void C_00510080::sub_00510430() {}

void sub_00482280();
// @baa 0x005103b0
void sub_005103b0(void) { sub_00482280(); }

struct C {
    undefined4 sub_00510430(byte);
};

int sub_00402660(...);
int sub_00510090(void);
// @baa 0x00510430
undefined4 C::sub_00510430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00510090();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_00510450();
// @baa 0x00510630
void sub_00510630(void) { sub_00510450(); }

extern "C" double atan(double);
// @baa 0x00510640
double sub_00510640(float f) { return atan(f); }

extern "C" double cos(double);
// @baa 0x00510650
double sub_00510650(float f) { return cos((double)f); }

// @baa 0x00510670
double sub_00510670(float f) { return atan(f); }

// @baa 0x00510680
double sub_00510680(float f) { return cos((double)f); }

extern "C" double sin(double);
// @baa 0x00510690
double sub_00510690(float f) { return sin(f); }

// @baa 0x005106a0
float sub_005106a0(float f) { return sin(f); }

// @baa 0x005106b0
double sub_005106b0(float f) { return cos(f); }

// @baa 0x005106c0
double sub_005106c0(float f) { return atan(f); }

struct C_005106d0 { float sub_005106d0(void); };

// @baa 0x005106d0
float C_005106d0::sub_005106d0(void) { return *(float*)((char*)this + 36); }

struct C_005106e0 {
    undefined1 sub_005106e0();
};

// @baa 0x005106e0
undefined1 C_005106e0::sub_005106e0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x54);
}

struct C_005106f0 {
    void sub_005106f0();
};

// @baa 0x005106f0
void C_005106f0::sub_005106f0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x56) = 0;
  return;
}

struct C_00510700 {
    undefined1 sub_00510700();
};

// @baa 0x00510700
undefined1 C_00510700::sub_00510700(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x56);
}

extern char g_025d4f78[];
// @baa 0x00510770
int sub_00510770(void) { return (int)g_025d4f78; }

extern char g_02665f38[];
// @baa 0x00510780
int sub_00510780(void) { return (int)g_02665f38; }

extern char g_026660c4[];
// @baa 0x005108c0
int sub_005108c0(void) { return (int)g_026660c4; }

// @baa 0x00510960
void __stdcall sub_00510960(int a0, int a1) {  }

extern char g_025d4fa8[];
// @baa 0x00510990
int sub_00510990(void) { return (int)g_025d4fa8; }

extern char g_02665a30[];
// @baa 0x005109a0
int sub_005109a0(void) { return (int)g_02665a30; }

class wxWindow;
class wxWindow {
    public:
    public: __declspec(dllimport) wxWindow();
    friend struct C_005109b0;
};

struct C_005109b0 {
    wxWindow * sub_005109b0();
};

extern undefined * g_01e6a6f8;
// @baa 0x005109b0
wxWindow * C_005109b0::sub_005109b0(void)
{
    wxWindow * param_1 = (wxWindow *)this;
  ((wxWindow *)(param_1))->wxWindow::wxWindow();
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  ((char *)param_1)[0x14c] = (char)0x0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined ***)param_1 = &g_01e6a6f8;
  return param_1;
}

extern char g_02665af0[];
// @baa 0x00510a00
int sub_00510a00(void) { return (int)g_02665af0; }

extern char g_025d4f88[];
// @baa 0x00511220
int sub_00511220(void) { return (int)g_025d4f88; }

extern char g_02665840[];
// @baa 0x00511230
int sub_00511230(void) { return (int)g_02665840; }

extern char g_025d4fb0[];
// @baa 0x005113e0
int sub_005113e0(void) { return (int)g_025d4fb0; }

extern char g_026658ec[];
// @baa 0x005113f0
int sub_005113f0(void) { return (int)g_026658ec; }

extern char g_02665828[];
// @baa 0x00511540
int sub_00511540(void) { return (int)g_02665828; }

extern char g_025d4fb8[];
// @baa 0x00511e20
int sub_00511e20(void) { return (int)g_025d4fb8; }

extern char g_02666548[];
// @baa 0x00511e30
int sub_00511e30(void) { return (int)g_02666548; }

// @baa 0x00511f60
int sub_00511f60(void) { return 1; }

struct C_00511f70 {
    void sub_00511f70(float *, float *);
};

// @baa 0x00511f70
void C_00511f70::sub_00511f70(float * param_2, float * param_3)
{
    int param_1 = (int)this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  fVar1 = *(float *)(*(int *)(param_1 + 0xc) + 0x164);
  fVar2 = *(float *)(*(int *)(param_1 + 0xc) + 0x170);
  fVar3 = *param_2;
  if (fVar3 < fVar1) {
    fVar4 = *param_3;
    if (fVar2 < fVar4) {
      *param_2 = fVar1;
      *param_3 = fVar2;
      return;
    }
    if (fVar4 < *(float *)(param_1 + 0x20)) {
      *param_2 = fVar1;
      *param_3 = *(float *)(param_1 + 0x20);
      return;
    }
    if (*(float *)(param_1 + 0x20) < fVar4) {
      *param_2 = fVar1;
      return;
    }
  }
  if (fVar2 < *param_3) {
    fVar1 = *(float *)(param_1 + 0x1c);
    if (fVar1 < fVar3) {
      *param_2 = fVar1;
      *param_3 = fVar2;
      return;
    }
    if (fVar3 < fVar1) {
      *param_3 = fVar2;
    }
  }
  return;
}

struct C_00512050 {
    void sub_00512050(undefined1);
};

// @baa 0x00512050
void C_00512050::sub_00512050(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x178) = param_2;
  return;
}

struct C_00512350 { float sub_00512350(void); };

// @baa 0x00512350
float C_00512350::sub_00512350(void) { return *(float*)((char*)this + 360); }

struct C_00512360 { float sub_00512360(void); };

// @baa 0x00512360
float C_00512360::sub_00512360(void) { return *(float*)((char*)this + 364); }

struct C_00512370 { float sub_00512370(void); };

// @baa 0x00512370
float C_00512370::sub_00512370(void) { return *(float*)((char*)this + 368); }

// @baa 0x00512420
void __stdcall sub_00512420(int a0) {  }

// @baa 0x00512430
void __stdcall sub_00512430(int a0) {  }

// @baa 0x00512440
void __stdcall sub_00512440(int a0) {  }

// @baa 0x00512450
void __stdcall sub_00512450(int a0, int a1) {  }

// @baa 0x00512460
void __stdcall sub_00512460(int a0) {  }

// @baa 0x00512470
void __stdcall sub_00512470(int a0, int a1) {  }

// @baa 0x00512480
void __stdcall sub_00512480(int a0, int a1) {  }

// @baa 0x00512490
void __stdcall sub_00512490(int a0, int a1) {  }

// @baa 0x005124a0
void __stdcall sub_005124a0(int a0) {  }

// @baa 0x005124b0
void __stdcall sub_005124b0(int a0, int a1) {  }

// @baa 0x005124c0
void __stdcall sub_005124c0(int a0, int a1, int a2) {  }

// @baa 0x005124d0
void __stdcall sub_005124d0(int a0, int a1, int a2) {  }

// @baa 0x005124e0
void __stdcall sub_005124e0(int a0, int a1, int a2, int a3, int a4) {  }

// @baa 0x005124f0
void __stdcall sub_005124f0(int a0, int a1, int a2) {  }

// @baa 0x00512500
void __stdcall sub_00512500(int a0, int a1) {  }

// @baa 0x00512510
void __stdcall sub_00512510(int a0, int a1, int a2) {  }

// @baa 0x00512520
void __stdcall sub_00512520(int a0, int a1, int a2) {  }

// @baa 0x00512530
void __stdcall sub_00512530(int a0, int a1) {  }

// @baa 0x00512540
void __stdcall sub_00512540(int a0, int a1) {  }

// @baa 0x00512550
void __stdcall sub_00512550(int a0) {  }

// @baa 0x00512560
void __stdcall sub_00512560(int a0, int a1) {  }

// @baa 0x00512570
void __stdcall sub_00512570(int a0, int a1) {  }

// @baa 0x00512580
void __stdcall sub_00512580(int a0, int a1, int a2) {  }

// @baa 0x00512590
void __stdcall sub_00512590(int a0, int a1) {  }

// @baa 0x005125a0
void __stdcall sub_005125a0(int a0, int a1, int a2) {  }

// @baa 0x005125b0
void __stdcall sub_005125b0(int a0) {  }

// @baa 0x005125c0
void __stdcall sub_005125c0(int a0, int a1) {  }

// @baa 0x005125d0
void __stdcall sub_005125d0(int a0, int a1, int a2, int a3) {  }

// @baa 0x005125e0
void __stdcall sub_005125e0(int a0) {  }

// @baa 0x005125f0
void __stdcall sub_005125f0(int a0) {  }

// @baa 0x00512600
void __stdcall sub_00512600(int a0, int a1, int a2) {  }

// @baa 0x00512610
void __stdcall sub_00512610(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  }

// @baa 0x00512620
void __stdcall sub_00512620(int a0) {  }

// @baa 0x00512630
void __stdcall sub_00512630(int a0, int a1) {  }

// @baa 0x00512640
void __stdcall sub_00512640(int a0, int a1, int a2) {  }

// @baa 0x00512650
void __stdcall sub_00512650(int a0, int a1) {  }

// @baa 0x00512660
void __stdcall sub_00512660(int a0, int a1) {  }

struct C_00512670 { int sub_00512670(void); };

// @baa 0x00512670
int C_00512670::sub_00512670(void) { return *(int*)((char*)this + 352); }

struct C_00512680 { int sub_00512680(void); };

// @baa 0x00512680
int C_00512680::sub_00512680(void) { return *(int*)((char*)this + 356); }

struct C_00512690 { int sub_00512690(void); };

// @baa 0x00512690
int C_00512690::sub_00512690(void) { return *(int*)((char*)this + 360); }

struct C_005126a0 { char* sub_005126a0(void); };

// @baa 0x005126a0
char* C_005126a0::sub_005126a0(void) { return (char*)this + 352; }

class wxTextDropTarget;
class wxTextDropTarget {
    public:
    public: __declspec(dllimport) wxTextDropTarget();
    friend struct C_005126b0;
};

struct C_005126b0 {
    wxTextDropTarget * sub_005126b0(undefined4);
};

extern undefined * g_01e6ac54;
// @baa 0x005126b0
wxTextDropTarget * C_005126b0::sub_005126b0(undefined4 param_2)
{
    wxTextDropTarget * param_1 = (wxTextDropTarget *)this;

  ((wxTextDropTarget *)(param_1))->wxTextDropTarget::wxTextDropTarget();
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined ***)param_1 = &g_01e6ac54;
  return param_1;
}

extern char g_025d4f98[];
// @baa 0x00512860
int sub_00512860(void) { return (int)g_025d4f98; }

extern char g_0266607c[];
// @baa 0x00512870
int sub_00512870(void) { return (int)g_0266607c; }

extern char g_025d4fc0[];
// @baa 0x005137d0
int sub_005137d0(void) { return (int)g_025d4fc0; }

extern char g_026657f8[];
// @baa 0x005137e0
int sub_005137e0(void) { return (int)g_026657f8; }

extern char g_025d4fa0[];
// @baa 0x00515190
int sub_00515190(void) { return (int)g_025d4fa0; }

extern char g_02665a48[];
// @baa 0x005151a0
int sub_005151a0(void) { return (int)g_02665a48; }

extern char g_025d4f70[];
// @baa 0x00515710
int sub_00515710(void) { return (int)g_025d4f70; }

extern char g_026657e0[];
// @baa 0x00515720
int sub_00515720(void) { return (int)g_026657e0; }

struct C_00515790 {
    void sub_00515790(undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x00515790
void C_00515790::sub_00515790(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  *(undefined4 *)(param_1 + 0x24) = *param_3;
  *(undefined4 *)(param_1 + 0x28) = param_3[1];
  *(undefined4 *)(param_1 + 0x2c) = param_3[2];
  *(undefined4 *)(param_1 + 0x30) = param_3[3];
  *(undefined4 *)(param_1 + 0x34) = *param_4;
  *(undefined4 *)(param_1 + 0x38) = param_4[1];
  *(undefined4 *)(param_1 + 0x3c) = param_4[2];
  *(undefined4 *)(param_1 + 0x40) = param_4[3];
  return;
}

extern char g_025d4fd0[];
// @baa 0x00515830
int sub_00515830(void) { return (int)g_025d4fd0; }

extern char g_026658bc[];
// @baa 0x00515840
int sub_00515840(void) { return (int)g_026658bc; }

struct C_00515890 {
    void sub_00515890(int param1);
};

// @baa 0x00515890
void C_00515890::sub_00515890(int param1)
{
    *(BYTE *)(this + 0x1d4) = 1;
}

extern char g_025d4fc8[];
// @baa 0x00517d20
int sub_00517d20(void) { return (int)g_025d4fc8; }

extern char g_026658d4[];
// @baa 0x00517d30
int sub_00517d30(void) { return (int)g_026658d4; }

struct C_00517d70 { char* sub_00517d70(void); };

// @baa 0x00517d70
char* C_00517d70::sub_00517d70(void) { return (char*)this + 4; }

struct C_00517d80 { char* sub_00517d80(void); };

// @baa 0x00517d80
char* C_00517d80::sub_00517d80(void) { return (char*)this + 24; }

struct C_00517d90 { char* sub_00517d90(void); };

// @baa 0x00517d90
char* C_00517d90::sub_00517d90(void) { return (char*)this + 32; }

struct C_00517da0 { float sub_00517da0(void); };

// @baa 0x00517da0
float C_00517da0::sub_00517da0(void) { return *(float*)((char*)this + 40); }

struct C_00518ee0 { char* sub_00518ee0(void); };

// @baa 0x00518ee0
char* C_00518ee0::sub_00518ee0(void) { return (char*)this + 160; }

struct C_00518ef0 { char* sub_00518ef0(void); };

// @baa 0x00518ef0
char* C_00518ef0::sub_00518ef0(void) { return (char*)this + 172; }

struct C_00518f00 { void sub_00518f00(int a0); };

// @baa 0x00518f00
void C_00518f00::sub_00518f00(int a0) { *(int*)((char*)this + 216) = a0; }

struct D { void a(float,int); int b(int,float); };

struct E { char p[4]; char q[12]; float mn; float mx; };

void sub_00488b20(void*, float*);
void sub_00488b50(void*, float*);
struct C_00518f10 {
    char pad[0xbc];
    E* e1; E* e2;
    char pad2[0xd0-0xc4];
    int i0; int i1; D* d; float t;
    char pad3[0xf4-0xe0];
    int mode; char f0; char f1; float r0; float r1;
    float calc(E* e, int idx, char* flag);
    void sub_00518f10();
};

float C_00518f10::calc(E* e, int idx, char* flag){ return 0; }

// @baa 0x00518f10
void C_00518f10::sub_00518f10()
{
    float v;
    if (e1) {
        v = 0;
        if (mode == 2 || mode == 0) sub_00488b50((char*)e1 + 4, &v);
        else if (mode == 1) {
            if (d) d->a(t, 0);
            sub_00488b20((char*)e1 + 4, &v);
            if (d) f0 = d->b(i0, t) != -1;
        }
        r0 = (v - e1->mn) / (e1->mx - e1->mn);
    }
    if (e2) {
        v = 0;
        if (mode == 2 || mode == 0) sub_00488b50((char*)e2 + 4, &v);
        else if (mode == 1) {
            if (d) d->a(t, 0);
            sub_00488b20((char*)e2 + 4, &v);
            if (d) f1 = d->b(i1, t) != -1;
        }
        r1 = (v - e2->mn) / (e2->mx - e2->mn);
    }
}

struct C_005190b0 {
    void sub_005190b0(undefined4);
};

int sub_00518f10(void);
// @baa 0x005190b0
void C_005190b0::sub_005190b0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xf4) = param_2;
  sub_00518f10();
  return;
}

struct C_005190d0 {
    void sub_005190d0(undefined1);
};

// @baa 0x005190d0
void C_005190d0::sub_005190d0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x104) = param_2;
  return;
}

class wxStringBase;
class wxStringBase {
    public:
    public: __declspec(dllimport) wxStringBase & operator=(wchar_t const *);
    friend struct C_005190e0;
};

struct C_005190e0 {
    void sub_005190e0(char);
};

extern undefined4 wxEmptyString_exref;
// @baa 0x005190e0
void C_005190e0::sub_005190e0(char param_2)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x106) != '\0') {
    if (param_2 == '\0') {
      ((wxStringBase *)((wxStringBase *)(param_1 + 0x10c)))->wxStringBase::operator=(*(wchar_t **)wxEmptyString_exref);
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x107) = 0;
    }
    *(char *)(param_1 + 0x106) = param_2;
    return;
  }
  *(char *)(param_1 + 0x106) = param_2;
  return;
}

struct C_00519140 {
    undefined1 sub_00519140();
};

// @baa 0x00519140
undefined1 C_00519140::sub_00519140(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x106);
}

struct C_005199c0 { char* sub_005199c0(void); };

// @baa 0x005199c0
char* C_005199c0::sub_005199c0(void) { return (char*)this + 164; }

struct M_005199d0 { void sub_01ab5820(); };

struct C_005199d0 { char pad[164]; M_005199d0 m; void sub_005199d0(); };

// @baa 0x005199d0
void C_005199d0::sub_005199d0() { m.sub_01ab5820(); }

struct C_005199e0 { char* sub_005199e0(void); };

// @baa 0x005199e0
char* C_005199e0::sub_005199e0(void) { return (char*)this + 32; }

struct C_005199f0 { int sub_005199f0(void); };

// @baa 0x005199f0
int C_005199f0::sub_005199f0(void) { return *(int*)((char*)this + 72); }

struct C_00519a00 { int sub_00519a00(void); };

// @baa 0x00519a00
int C_00519a00::sub_00519a00(void) { return *(int*)((char*)this + 80); }

class wxColour {
public:
    __declspec(dllimport) wxColour &operator=(const wxColour &);
};

struct A { char data[0x58]; };

struct C_00519a40 {
    A a;
    wxColour w;
    wxColour &sub_00519a40(const wxColour &r);
};

// @baa 0x00519a40
wxColour &C_00519a40::sub_00519a40(const wxColour &r)
{
    return w = r;
}

struct C_00519a50 {
    undefined1 sub_00519a50();
};

// @baa 0x00519a50
undefined1 C_00519a50::sub_00519a50(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x6c);
}

struct C_00519d30 {
    undefined1 sub_00519d30();
};

// @baa 0x00519d30
undefined1 C_00519d30::sub_00519d30(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x10);
}

struct C_00519d40 {
    void sub_00519d40(undefined1);
};

// @baa 0x00519d40
void C_00519d40::sub_00519d40(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}

extern char g_025d4f90[];
// @baa 0x00519d50
int sub_00519d50(void) { return (int)g_025d4f90; }

extern char g_026657c8[];
// @baa 0x00519d60
int sub_00519d60(void) { return (int)g_026657c8; }

extern char g_01e6b368[];
struct C_00519d70 { C_00519d70* sub_00519d70(void); };

// @baa 0x00519d70
C_00519d70* C_00519d70::sub_00519d70(void) { *(int*)((char*)this + 0) = (int)g_01e6b368; return this; }

struct C_00519d80 {
    void sub_00519d80(undefined4, undefined4);
};

// @baa 0x00519d80
void C_00519d80::sub_00519d80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}

struct C_00519d90 {
    char pad_[0x25];
    void sub_00519d90(int param1);
};

// @baa 0x00519d90
void C_00519d90::sub_00519d90(int param1)
{
    pad_[0x24] = 1;
}

struct C_00519da0 {
    void sub_00519da0(uchar);
};

// @baa 0x00519da0
void C_00519da0::sub_00519da0(uchar)
{
    *(uchar *)(this + 0x24) = 0;
}

// @baa 0x00519ea0
void sub_00519ea0(void) {  }

extern char g_025d4f80[];
// @baa 0x0051bbb0
int sub_0051bbb0(void) { return (int)g_025d4f80; }

extern char g_02665810[];
// @baa 0x0051bbc0
int sub_0051bbc0(void) { return (int)g_02665810; }

struct C_0051bbe0 {
    void sub_0051bbe0(int param_1);
};

// @baa 0x0051bbe0
void C_0051bbe0::sub_0051bbe0(int param_1)
{
    *(BYTE *)(this + 0x20) = 0;
}

// @baa 0x0051bd60
void __stdcall sub_0051bd60(int a0) {  }

struct N_0051be40 { char pad[276]; N_0051be40* next; };

struct It_0051be40 { N_0051be40* p; It_0051be40& sub_0051be40(); };

// @baa 0x0051be40
It_0051be40& It_0051be40::sub_0051be40() { p = p->next; return *this; }

struct C_0051be50 { int sub_0051be50(void); };

// @baa 0x0051be50
int C_0051be50::sub_0051be50(void) { return *(int*)((char*)this + 0); }

struct C_0051be60 { int sub_0051be60(void); };

// @baa 0x0051be60
int C_0051be60::sub_0051be60(void) { return *(int*)((char*)this + 0); }

struct S {
    int Unk0; // 0x00
    BYTE sub_0051be70(S* Other);
};

// @baa 0x0051be70
BYTE S::sub_0051be70(S* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct N_0051bee0 { char pad[184]; N_0051bee0* next; };

struct It_0051bee0 { N_0051bee0* p; It_0051bee0& sub_0051bee0(); };

// @baa 0x0051bee0
It_0051bee0& It_0051bee0::sub_0051bee0() { p = p->next; return *this; }

struct C_0051bef0 { int sub_0051bef0(void); };

// @baa 0x0051bef0
int C_0051bef0::sub_0051bef0(void) { return *(int*)((char*)this + 0); }

struct C_0051bf00 { int sub_0051bf00(void); };

// @baa 0x0051bf00
int C_0051bf00::sub_0051bf00(void) { return *(int*)((char*)this + 0); }

struct N_0051bf30 { char pad[168]; N_0051bf30* next; };

struct It_0051bf30 { N_0051bf30* p; It_0051bf30& sub_0051bf30(); };

// @baa 0x0051bf30
It_0051bf30& It_0051bf30::sub_0051bf30() { p = p->next; return *this; }

struct C_0051bf40 { int sub_0051bf40(void); };

// @baa 0x0051bf40
int C_0051bf40::sub_0051bf40(void) { return *(int*)((char*)this + 0); }

struct C_0051bf50 { int sub_0051bf50(void); };

// @baa 0x0051bf50
int C_0051bf50::sub_0051bf50(void) { return *(int*)((char*)this + 0); }

struct C_0051bfb0 {
    C_0051bfb0 *sub_0051bfb0();
};

// @baa 0x0051bfb0
C_0051bfb0 *C_0051bfb0::sub_0051bfb0()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_0051bfc0 { int sub_0051bfc0(void); };

// @baa 0x0051bfc0
int C_0051bfc0::sub_0051bfc0(void) { return *(int*)((char*)this + 0); }

struct N_0051bff0 { char pad[280]; N_0051bff0* next; };

struct It_0051bff0 { N_0051bff0* p; It_0051bff0& sub_0051bff0(); };

// @baa 0x0051bff0
It_0051bff0& It_0051bff0::sub_0051bff0() { p = p->next; return *this; }

struct C_0051c000 { int sub_0051c000(void); };

// @baa 0x0051c000
int C_0051c000::sub_0051c000(void) { return *(int*)((char*)this + 0); }

struct C_0051c010 { int sub_0051c010(void); };

// @baa 0x0051c010
int C_0051c010::sub_0051c010(void) { return *(int*)((char*)this + 0); }

struct S_0051c020 {
    int Unk0; // 0x00
    BYTE sub_0051c020(S_0051c020* Other);
};

// @baa 0x0051c020
BYTE S_0051c020::sub_0051c020(S_0051c020* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct N_0051c060 { char pad[172]; N_0051c060* next; };

struct It_0051c060 { N_0051c060* p; It_0051c060& sub_0051c060(); };

// @baa 0x0051c060
It_0051c060& It_0051c060::sub_0051c060() { p = p->next; return *this; }

struct C_0051c070 { int sub_0051c070(void); };

// @baa 0x0051c070
int C_0051c070::sub_0051c070(void) { return *(int*)((char*)this + 0); }

struct C_0051c080 { int sub_0051c080(void); };

// @baa 0x0051c080
int C_0051c080::sub_0051c080(void) { return *(int*)((char*)this + 0); }

struct N_0051c0b0 { char pad[188]; N_0051c0b0* next; };

struct It_0051c0b0 { N_0051c0b0* p; It_0051c0b0& sub_0051c0b0(); };

// @baa 0x0051c0b0
It_0051c0b0& It_0051c0b0::sub_0051c0b0() { p = p->next; return *this; }

struct C_0051c0c0 { int sub_0051c0c0(void); };

// @baa 0x0051c0c0
int C_0051c0c0::sub_0051c0c0(void) { return *(int*)((char*)this + 0); }

struct C_0051c0d0 { int sub_0051c0d0(void); };

// @baa 0x0051c0d0
int C_0051c0d0::sub_0051c0d0(void) { return *(int*)((char*)this + 0); }

struct N_0051c100 { char pad[120]; N_0051c100* next; };

struct It_0051c100 { N_0051c100* p; It_0051c100& sub_0051c100(); };

// @baa 0x0051c100
It_0051c100& It_0051c100::sub_0051c100() { p = p->next; return *this; }

struct C_0051c110 { int sub_0051c110(void); };

// @baa 0x0051c110
int C_0051c110::sub_0051c110(void) { return *(int*)((char*)this + 0); }

struct C_0051c120 { int sub_0051c120(void); };

// @baa 0x0051c120
int C_0051c120::sub_0051c120(void) { return *(int*)((char*)this + 0); }

struct C_0051c170 {
    C_0051c170 *sub_0051c170();
};

// @baa 0x0051c170
C_0051c170 *C_0051c170::sub_0051c170()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_0051c180 { int sub_0051c180(void); };

// @baa 0x0051c180
int C_0051c180::sub_0051c180(void) { return *(int*)((char*)this + 0); }

struct C_0051c1b0 { int sub_0051c1b0(void); };

// @baa 0x0051c1b0
int C_0051c1b0::sub_0051c1b0(void) { return *(int*)((char*)this + 4); }

struct C_0051c1c0 { int sub_0051c1c0(void); };

// @baa 0x0051c1c0
int C_0051c1c0::sub_0051c1c0(void) { return *(int*)((char*)this + 8); }

struct C_0051c1d0 {
    int sub_0051c1d0(int);
};

// @baa 0x0051c1d0
int C_0051c1d0::sub_0051c1d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S_0051c210 {
    INT Unk00;
    INT Unk04;
    S_0051c210 *sub_0051c210();
};

// @baa 0x0051c210
S_0051c210 *S_0051c210::sub_0051c210()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_0051c220 {
    INT Unk00;
    INT Unk04;
    S_0051c220 *sub_0051c220();
};

// @baa 0x0051c220
S_0051c220 *S_0051c220::sub_0051c220()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0051c230 {
    undefined4 sub_0051c230();
};

// @baa 0x0051c230
undefined4 C_0051c230::sub_0051c230(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct S_0051c240 {
    INT Unk00;
    INT Unk04;
    S_0051c240 *sub_0051c240();
};

// @baa 0x0051c240
S_0051c240 *S_0051c240::sub_0051c240()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0051c250 {
    undefined4 sub_0051c250();
};

// @baa 0x0051c250
undefined4 C_0051c250::sub_0051c250(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct S_0051c260 {
    INT Unk00;
    INT Unk04;
    S_0051c260 *sub_0051c260();
};

// @baa 0x0051c260
S_0051c260 *S_0051c260::sub_0051c260()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0051c270 {
    undefined4 sub_0051c270();
};

// @baa 0x0051c270
undefined4 C_0051c270::sub_0051c270(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct S_0051c280 {
    INT Unk00;
    INT Unk04;
    S_0051c280 *sub_0051c280();
};

// @baa 0x0051c280
S_0051c280 *S_0051c280::sub_0051c280()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0051c290 {
    undefined4 sub_0051c290();
};

// @baa 0x0051c290
undefined4 C_0051c290::sub_0051c290(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct S_0051c2a0 {
    INT Unk00;
    INT Unk04;
    S_0051c2a0 *sub_0051c2a0();
};

// @baa 0x0051c2a0
S_0051c2a0 *S_0051c2a0::sub_0051c2a0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0051c2b0 {
    undefined4 sub_0051c2b0();
};

// @baa 0x0051c2b0
undefined4 C_0051c2b0::sub_0051c2b0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct C_0051c2c0 {
    int sub_0051c2c0(int);
};

// @baa 0x0051c2c0
int C_0051c2c0::sub_0051c2c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0051c310 { int a; C_0051c310(int); };

// @baa 0x0051c310
C_0051c310::C_0051c310(int x) : a(x) {}

struct N_0051c320 { char pad[280]; N_0051c320* next; };

struct It_0051c320 { N_0051c320* p; It_0051c320& sub_0051c320(); };

// @baa 0x0051c320
It_0051c320& It_0051c320::sub_0051c320() { p = p->next; return *this; }

struct C_0051c330 { int a; C_0051c330(int); };

// @baa 0x0051c330
C_0051c330::C_0051c330(int x) : a(x) {}

struct N_0051c340 { char pad[188]; N_0051c340* next; };

struct It_0051c340 { N_0051c340* p; It_0051c340& sub_0051c340(); };

// @baa 0x0051c340
It_0051c340& It_0051c340::sub_0051c340() { p = p->next; return *this; }

struct C_0051c350 { int a; C_0051c350(int); };

// @baa 0x0051c350
C_0051c350::C_0051c350(int x) : a(x) {}

struct N_0051c360 { char pad[172]; N_0051c360* next; };

struct It_0051c360 { N_0051c360* p; It_0051c360& sub_0051c360(); };

// @baa 0x0051c360
It_0051c360& It_0051c360::sub_0051c360() { p = p->next; return *this; }

struct C_0051c370 { int a; C_0051c370(int); };

// @baa 0x0051c370
C_0051c370::C_0051c370(int x) : a(x) {}

struct C_0051c380 { int a; C_0051c380(int); };

// @baa 0x0051c380
C_0051c380::C_0051c380(int x) : a(x) {}

struct C_0051c390 { int a; C_0051c390(int); };

// @baa 0x0051c390
C_0051c390::C_0051c390(int x) : a(x) {}

struct C_0051c3a0 { int a; C_0051c3a0(int); };

// @baa 0x0051c3a0
C_0051c3a0::C_0051c3a0(int x) : a(x) {}

struct C_0051c3b0 { int a; C_0051c3b0(int); };

// @baa 0x0051c3b0
C_0051c3b0::C_0051c3b0(int x) : a(x) {}

struct C_0051c3c0 { int a; C_0051c3c0(int); };

// @baa 0x0051c3c0
C_0051c3c0::C_0051c3c0(int x) : a(x) {}

struct N_0051c3d0 { char pad[184]; N_0051c3d0* next; };

struct It_0051c3d0 { N_0051c3d0* p; It_0051c3d0& sub_0051c3d0(); };

// @baa 0x0051c3d0
It_0051c3d0& It_0051c3d0::sub_0051c3d0() { p = p->next; return *this; }

struct C_0051c3e0 { int sub_0051c3e0(void); };

// @baa 0x0051c3e0
int C_0051c3e0::sub_0051c3e0(void) { return *(int*)((char*)this + 0); }

struct N_0051c410 { char pad[276]; N_0051c410* next; };

struct It_0051c410 { N_0051c410* p; It_0051c410& sub_0051c410(); };

// @baa 0x0051c410
It_0051c410& It_0051c410::sub_0051c410() { p = p->next; return *this; }

struct C_0051c420 { int sub_0051c420(void); };

// @baa 0x0051c420
int C_0051c420::sub_0051c420(void) { return *(int*)((char*)this + 0); }

struct N_0051c450 { char pad[168]; N_0051c450* next; };

struct It_0051c450 { N_0051c450* p; It_0051c450& sub_0051c450(); };

// @baa 0x0051c450
It_0051c450& It_0051c450::sub_0051c450() { p = p->next; return *this; }

struct C_0051c460 { int sub_0051c460(void); };

// @baa 0x0051c460
int C_0051c460::sub_0051c460(void) { return *(int*)((char*)this + 0); }

// @baa 0x0051c490
void sub_0051c490(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x0051c4b0
void sub_0051c4b0(void) {  }

struct C_0051c4c0 { int sub_0051c4c0(void); };

// @baa 0x0051c4c0
int C_0051c4c0::sub_0051c4c0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0051c4d0
void sub_0051c4d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

void sub_005193b0();
// @baa 0x0051c4f0
void sub_0051c4f0(void) { sub_005193b0(); }

void sub_005196d0();
// @baa 0x0051c500
void sub_0051c500(void) { sub_005196d0(); }

struct C_0051c510 { int sub_0051c510(void); };

// @baa 0x0051c510
int C_0051c510::sub_0051c510(void) { return *(int*)((char*)this + 0); }

struct C_0051c520 { int sub_0051c520(void); };

// @baa 0x0051c520
int C_0051c520::sub_0051c520(void) { return *(int*)((char*)this + 0); }

struct C_0051c530 { int sub_0051c530(void); };

// @baa 0x0051c530
int C_0051c530::sub_0051c530(void) { return *(int*)((char*)this + 0); }

struct C_0051c540 { int sub_0051c540(void); };

// @baa 0x0051c540
int C_0051c540::sub_0051c540(void) { return *(int*)((char*)this + 0); }

struct C_0051c550 { int sub_0051c550(void); };

// @baa 0x0051c550
int C_0051c550::sub_0051c550(void) { return *(int*)((char*)this + 0); }

struct C_0051c560 { int sub_0051c560(void); };

// @baa 0x0051c560
int C_0051c560::sub_0051c560(void) { return *(int*)((char*)this + 0); }

struct C_0051c570 {
    int pad;
    int a;
    int b;
    C_0051c570 *sub_0051c570();
};

// @baa 0x0051c570
C_0051c570 *C_0051c570::sub_0051c570()
{
    a = 0;
    b = 0;
    return this;
}

struct C_0051c5a0 {
    int pad;
    int a;
    int b;
    C_0051c5a0 *sub_0051c5a0();
};

// @baa 0x0051c5a0
C_0051c5a0 *C_0051c5a0::sub_0051c5a0()
{
    a = 0;
    b = 0;
    return this;
}

struct C_0051c5d0 { int a; C_0051c5d0(int); };

// @baa 0x0051c5d0
C_0051c5d0::C_0051c5d0(int x) : a(x) {}

struct C_0051c5e0 { int a; C_0051c5e0(int); };

// @baa 0x0051c5e0
C_0051c5e0::C_0051c5e0(int x) : a(x) {}

struct C_0051c5f0 { int a; C_0051c5f0(int); };

// @baa 0x0051c5f0
C_0051c5f0::C_0051c5f0(int x) : a(x) {}

// @baa 0x0051c600
void sub_0051c600(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0051c620
void sub_0051c620(void) {  }

// @baa 0x0051c630
void sub_0051c630(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0051c650
void sub_0051c650(void) {  }

struct C_0051d670 {
    undefined4 sub_0051d670(byte);
};

int sub_00511550(void);
// @baa 0x0051d670
undefined4 C_0051d670::sub_0051d670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00511550();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct S0051d120 {
    double sub_0051d120();
};

struct S0051d690 {
    char _pad[0x180];
    S0051d120 *p;
    double sub_0051d690();
};

// @baa 0x0051d690
double S0051d690::sub_0051d690() {
    return p->sub_0051d120();
}

struct C_0051e6a0 {
    undefined4 sub_0051e6a0(byte);
};

int sub_0051e640(void);
// @baa 0x0051e6a0
undefined4 C_0051e6a0::sub_0051e6a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0051e640();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0051e810 {
    undefined4 sub_0051e810(byte);
};

int sub_0051e790(void);
// @baa 0x0051e810
undefined4 C_0051e810::sub_0051e810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0051e790();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct STarget {
    virtual void sub00() {}
    virtual void sub01() {}
    virtual void sub02() {}
    virtual void sub03() {}
    virtual void sub04() {}
    virtual void sub05() {}
    virtual void sub06() {}
    virtual void sub07() {}
    virtual void sub08() {}
    virtual void sub09() {}
    virtual void sub10() {}
    virtual void sub11() {}
    virtual void sub12() {}
    virtual void sub13() {}
    virtual void sub14() {}
    virtual void sub15() {}
    virtual void sub16() {}
    virtual void sub17() {}
    virtual void sub18() {}
    virtual void sub19() {}
    virtual void sub20() {}
    virtual void sub21() {}
    virtual void sub22() {}
    virtual void sub23() {}
    virtual void sub24() {}
    virtual void sub25() {}
    virtual void sub_0051be20(int) {} // slot 26 = 0x68
};

struct SOuter {
    char pad0[0x148];
    STarget* Field_148;

    void sub_0051be20();
};

// @baa 0x0051be20
void SOuter::sub_0051be20()
{
    if (Field_148)
        Field_148->sub_0051be20(0);
}
