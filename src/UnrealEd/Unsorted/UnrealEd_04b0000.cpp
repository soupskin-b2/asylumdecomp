// UnrealEd_04b0000.cpp (part 1 of 2): 55 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern int g_02663cf4;
int sub_004a5a10();
// @baa 0x004b21b0
int sub_004b21b0() { if (!g_02663cf4) g_02663cf4 = sub_004a5a10(); return g_02663cf4; }

// @baa 0x004b21d0
int sub_004b21d0() { if (!g_02663cf4) g_02663cf4 = sub_004a5a10(); return g_02663cf4; }

struct C_004b2b70 { int a, b, c; C_004b2b70(); };

// @baa 0x004b2b70
C_004b2b70::C_004b2b70() : a(0), b(0), c(0) {}

extern int g_02663d10;
int sub_004a6f10();
// @baa 0x004b2b80
int sub_004b2b80() { if (!g_02663d10) g_02663d10 = sub_004a6f10(); return g_02663d10; }

// @baa 0x004b2ba0
int sub_004b2ba0() { if (!g_02663d10) g_02663d10 = sub_004a6f10(); return g_02663d10; }

extern int g_02663d74;
int sub_004ada20();
// @baa 0x004b60d0
int sub_004b60d0() { if (!g_02663d74) g_02663d74 = sub_004ada20(); return g_02663d74; }

// @baa 0x004b60f0
int sub_004b60f0() { if (!g_02663d74) g_02663d74 = sub_004ada20(); return g_02663d74; }

extern int g_02663d48;
int sub_004ab950();
// @baa 0x004b6130
int sub_004b6130() { if (!g_02663d48) g_02663d48 = sub_004ab950(); return g_02663d48; }

// @baa 0x004b6150
int sub_004b6150() { if (!g_02663d48) g_02663d48 = sub_004ab950(); return g_02663d48; }

extern int g_02663d40;
int sub_004ab350();
// @baa 0x004b6190
int sub_004b6190() { if (!g_02663d40) g_02663d40 = sub_004ab350(); return g_02663d40; }

// @baa 0x004b61b0
int sub_004b61b0() { if (!g_02663d40) g_02663d40 = sub_004ab350(); return g_02663d40; }

extern int g_02663d7c;
int sub_004ae720();
// @baa 0x004b61f0
int sub_004b61f0() { if (!g_02663d7c) g_02663d7c = sub_004ae720(); return g_02663d7c; }

// @baa 0x004b6210
int sub_004b6210() { if (!g_02663d7c) g_02663d7c = sub_004ae720(); return g_02663d7c; }

extern int g_02663ce0;
int sub_004b2210();
// @baa 0x004b7e10
int sub_004b7e10() { if (!g_02663ce0) g_02663ce0 = sub_004b2210(); return g_02663ce0; }

// @baa 0x004b7e30
int sub_004b7e30() { if (!g_02663ce0) g_02663ce0 = sub_004b2210(); return g_02663ce0; }

extern int g_02663d30;
int sub_004b3d80();
// @baa 0x004b8840
int sub_004b8840() { if (!g_02663d30) g_02663d30 = sub_004b3d80(); return g_02663d30; }

// @baa 0x004b8860
int sub_004b8860() { if (!g_02663d30) g_02663d30 = sub_004b3d80(); return g_02663d30; }

extern "C" double log(double);
// @baa 0x004ba710
double sub_004ba710(double x) { return log(x); }

struct C { int sub_004ba730(void); };

// @baa 0x004ba730
int C::sub_004ba730(void) { return *(int*)((char*)this + 12); }

struct C_004ba740 {
    char pad[0xc];
    INT field_0xc;
    unsigned char sub_004ba740();
};

// @baa 0x004ba740
unsigned char C_004ba740::sub_004ba740()
{
    return field_0xc != 0;
}

struct C_004ba750 { float sub_004ba750(void); };

// @baa 0x004ba750
float C_004ba750::sub_004ba750(void) { return *(float*)((char*)this + 16); }

struct C_004ba8b0 { float sub_004ba8b0(void); };

// @baa 0x004ba8b0
float C_004ba8b0::sub_004ba8b0(void) { return *(float*)((char*)this + 36); }

struct C_004ba8c0 {
    float10 sub_004ba8c0(int);
};

// @baa 0x004ba8c0
float10 C_004ba8c0::sub_004ba8c0(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return (float10)*(double *)(*param_1 + param_2 * 8);
  }
  return (float10)0;
}

struct C_004ba8f0 {
    undefined4 sub_004ba8f0();
};

// @baa 0x004ba8f0
undefined4 C_004ba8f0::sub_004ba8f0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x20);
}

// @baa 0x004ba960
float10 sub_004ba960(void)
{
  return (float10)0;
}

extern char g_01e5a54c[];
// @baa 0x004ba9d0
int sub_004ba9d0(void) { return (int)g_01e5a54c; }

extern char g_02663e34[];
// @baa 0x004ba9e0
int sub_004ba9e0(void) { return (int)g_02663e34; }

extern char g_026647c8[];
// @baa 0x004baae0
int sub_004baae0(void) { return (int)g_026647c8; }

struct C_004bab60 {
    void sub_004bab60();
};

int sub_00449b60(void);
// @baa 0x004bab60
void C_004bab60::sub_004bab60(void)
{
    int param_1 = (int)this;

  sub_00449b60();
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}

// @baa 0x004babc0
void __stdcall sub_004babc0(int a0, int a1) {  }

extern char g_01e5a61c[];
// @baa 0x004babd0
int sub_004babd0(void) { return (int)g_01e5a61c; }

extern char g_02664a04[];
// @baa 0x004babe0
int sub_004babe0(void) { return (int)g_02664a04; }

class wxEvtHandler;
class wxEvtHandler {
    public:
    public: __declspec(dllimport) wxEvtHandler();
    friend struct C_004babf0;
};

struct C_004babf0 {
    wxEvtHandler * sub_004babf0(undefined4);
};

extern undefined * g_01e5e5d4;
// @baa 0x004babf0
wxEvtHandler * C_004babf0::sub_004babf0(undefined4 param_2)
{
    wxEvtHandler * param_1 = (wxEvtHandler *)this;

  ((wxEvtHandler *)(param_1))->wxEvtHandler::wxEvtHandler();
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined ***)param_1 = &g_01e5e5d4;
  return param_1;
}

extern char g_025d4edc[];
// @baa 0x004bac20
int sub_004bac20(void) { return (int)g_025d4edc; }

extern char g_02664898[];
// @baa 0x004bac30
int sub_004bac30(void) { return (int)g_02664898; }

struct C_004bac40 {
    void sub_004bac40();
};

// @baa 0x004bac40
void C_004bac40::sub_004bac40(void)
{
    int param_1 = (int)this;

  sub_00449b60();
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
}

extern char g_01e5a790[];
// @baa 0x004bad00
int sub_004bad00(void) { return (int)g_01e5a790; }

extern char g_026648c8[];
// @baa 0x004bad10
int sub_004bad10(void) { return (int)g_026648c8; }

struct C_004bad20 {
    void sub_004bad20();
};

// @baa 0x004bad20
void C_004bad20::sub_004bad20(void)
{
    int param_1 = (int)this;

  sub_00449b60();
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return;
}

extern char g_01e5aba4[];
// @baa 0x004bafe0
int sub_004bafe0(void) { return (int)g_01e5aba4; }

extern char g_026647e0[];
// @baa 0x004baff0
int sub_004baff0(void) { return (int)g_026647e0; }

extern char g_02664be4[];
// @baa 0x004bb080
int sub_004bb080(void) { return (int)g_02664be4; }

struct C_004bb090 {
    void sub_004bb090(undefined4, undefined4);
};

// @baa 0x004bb090
void C_004bb090::sub_004bb090(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

// @baa 0x004bb0a0
void __stdcall sub_004bb0a0(int a0, int a1) {  }

struct C_004bb1a0 { void sub_004bb1a0(int a0); };

// @baa 0x004bb1a0
void C_004bb1a0::sub_004bb1a0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_004bb1d0 {
    void sub_004bb1d0(undefined4, undefined4);
};

// @baa 0x004bb1d0
void C_004bb1d0::sub_004bb1d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

struct C_004bb1e0 {
    void sub_004bb1e0(undefined4, undefined4, undefined4);
};

// @baa 0x004bb1e0
void C_004bb1e0::sub_004bb1e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

// @baa 0x004bb220
void __stdcall sub_004bb220(int a0, int a1) {  }

// @baa 0x004bb230
void __stdcall sub_004bb230(int a0, int a1) {  }

// @baa 0x004bbc80
void __stdcall sub_004bbc80(int a0) {  }

extern char g_025d4f04[];
// @baa 0x004bc800
int sub_004bc800(void) { return (int)g_025d4f04; }

extern char g_026644b0[];
// @baa 0x004bc810
int sub_004bc810(void) { return (int)g_026644b0; }

extern char g_026644e0[];
// @baa 0x004bca40
int sub_004bca40(void) { return (int)g_026644e0; }

struct C_004bca50 {
    undefined4 sub_004bca50(byte);
};

int sub_00402660(...);
int sub_004bb5b0(void);
// @baa 0x004bca50
undefined4 C_004bca50::sub_004bca50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004bb5b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x004bfd40
undefined1 sub_004bfd40(void)
{
  return 1;
}
