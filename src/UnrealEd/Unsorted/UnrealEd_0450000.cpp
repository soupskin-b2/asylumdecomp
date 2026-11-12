// UnrealEd_0450000.cpp: 126 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S_00455ca0 { void sub_0043f6f0(); };

// @baa 0x00455ca0
void sub_00455ca0(S_00455ca0 *p) { if (p) p->sub_0043f6f0(); }

extern char g_02617a80[];
// @baa 0x00455ec0
int sub_00455ec0(void) { return (int)g_02617a80; }

struct C {
    undefined4 sub_00458500(byte);
};

int sub_00455ed0(void);
int sub_0053dfa0(...);
// @baa 0x00458500
undefined4 C::sub_00458500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00455ed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00459160();
// @baa 0x004595c0
void sub_004595c0(void) { sub_00459160(); }

struct C_0045aea0 {
    undefined4 sub_0045aea0(byte);
};

int sub_0045ad90(void);
// @baa 0x0045aea0
undefined4 C_0045aea0::sub_0045aea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045ad90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" float sqrt(double);
// @baa 0x0045c0f0
float sub_0045c0f0(float param_1)
{
    return sqrt((double)param_1);
}

// @baa 0x0045c120
float sub_0045c120(float param_1)
{
    return sqrt((double)param_1);
}

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x0045c130
char * sub_0045c130(char * param_1, rsize_t param_2, char * param_3)
{
  strcpy_s(param_1,param_2,param_3);
  return param_1;
}

// @baa 0x0045c260
float sub_0045c260(float param_1)
{
    return sqrt((double)param_1);
}

struct C_0045c2d0 {
    bool sub_0045c2d0();
};

// @baa 0x0045c2d0
bool C_0045c2d0::sub_0045c2d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

extern char g_025d4e30[];
// @baa 0x0045c500
int sub_0045c500(void) { return (int)g_025d4e30; }

extern char g_026638b0[];
// @baa 0x0045c510
int sub_0045c510(void) { return (int)g_026638b0; }

extern char g_026639f0[];
// @baa 0x0045c530
int sub_0045c530(void) { return (int)g_026639f0; }

struct C_0045c540 { int sub_0045c540(void); };

// @baa 0x0045c540
int C_0045c540::sub_0045c540(void) { return *(int*)((char*)this + 332); }

struct C_0045c5c0 { int sub_0045c5c0(void); };

// @baa 0x0045c5c0
int C_0045c5c0::sub_0045c5c0(void) { return *(int*)((char*)this + 324); }

struct C_0045c5d0 { int sub_0045c5d0(void); };

// @baa 0x0045c5d0
int C_0045c5d0::sub_0045c5d0(void) { return *(int*)((char*)this + 328); }

struct C_0045c5e0 { void sub_0045c5e0(int a0); };

// @baa 0x0045c5e0
void C_0045c5e0::sub_0045c5e0(int a0) { *(int*)((char*)this + 340) = a0; }

struct C_0045c5f0 { void sub_0045c5f0(int a0); };

// @baa 0x0045c5f0
void C_0045c5f0::sub_0045c5f0(int a0) { *(int*)((char*)this + 336) = a0; }

struct C_0045c600 { int sub_0045c600(void); };

// @baa 0x0045c600
int C_0045c600::sub_0045c600(void) { return *(int*)((char*)this + 340); }

struct C_0045c610 { int sub_0045c610(void); };

// @baa 0x0045c610
int C_0045c610::sub_0045c610(void) { return *(int*)((char*)this + 336); }

// @baa 0x0045c620
void __stdcall sub_0045c620(int a0) {  }

struct C_0045c630 {
    int sub_0045c630();
};

// @baa 0x0045c630
int C_0045c630::sub_0045c630(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x158);
}

struct C_0045c640 {
    void sub_0045c640();
};

// @baa 0x0045c640
void C_0045c640::sub_0045c640(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x158) = 2;
  *(undefined4 *)(param_1 + 0x15c) = 2;
  return;
}

extern char g_025d4e20[];
// @baa 0x0045c720
int sub_0045c720(void) { return (int)g_025d4e20; }

extern char g_02663954[];
// @baa 0x0045c730
int sub_0045c730(void) { return (int)g_02663954; }

struct C_0045c740 {
    undefined1 sub_0045c740();
};

// @baa 0x0045c740
undefined1 C_0045c740::sub_0045c740(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1b8);
}

struct C_0045c750 { int sub_0045c750(void); };

// @baa 0x0045c750
int C_0045c750::sub_0045c750(void) { return *(int*)((char*)this + 444); }

struct C_0045ccd0 {
    void sub_0045ccd0(undefined4 *);
};

// @baa 0x0045ccd0
void C_0045ccd0::sub_0045ccd0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  return;
}

struct C_0045cd10 {
    void sub_0045cd10(undefined4 *);
};

// @baa 0x0045cd10
void C_0045cd10::sub_0045cd10(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  return;
}

struct C_0045cd30 {
    undefined1 sub_0045cd30();
};

// @baa 0x0045cd30
undefined1 C_0045cd30::sub_0045cd30(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2c);
}

struct C_0045cd80 {
    undefined1 sub_0045cd80();
};

// @baa 0x0045cd80
undefined1 C_0045cd80::sub_0045cd80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2e);
}

struct C_0045cdb0 {
    undefined1 sub_0045cdb0();
};

// @baa 0x0045cdb0
undefined1 C_0045cdb0::sub_0045cdb0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2d);
}

struct C_0045ce00 { int sub_0045ce00(void); };

// @baa 0x0045ce00
int C_0045ce00::sub_0045ce00(void) { return *(int*)((char*)this + 12); }

struct C_0045ce10 { int sub_0045ce10(void); };

// @baa 0x0045ce10
int C_0045ce10::sub_0045ce10(void) { return *(int*)((char*)this + 24); }

struct M_0045cec0 { void sub_01ac3080(); };

struct C_0045cec0 { char pad[8]; M_0045cec0 m; void sub_0045cec0(); };

// @baa 0x0045cec0
void C_0045cec0::sub_0045cec0() { m.sub_01ac3080(); }

struct C_0045ced0 { char* sub_0045ced0(void); };

// @baa 0x0045ced0
char* C_0045ced0::sub_0045ced0(void) { return (char*)this + 8; }

struct C_0045cee0 { char* sub_0045cee0(void); };

// @baa 0x0045cee0
char* C_0045cee0::sub_0045cee0(void) { return (char*)this + 40; }

struct C_0045cef0 { char* sub_0045cef0(void); };

// @baa 0x0045cef0
char* C_0045cef0::sub_0045cef0(void) { return (char*)this + 68; }

struct C_0045cf00 { char* sub_0045cf00(void); };

// @baa 0x0045cf00
char* C_0045cf00::sub_0045cf00(void) { return (char*)this + 80; }

struct C_0045cf10 { char* sub_0045cf10(void); };

// @baa 0x0045cf10
char* C_0045cf10::sub_0045cf10(void) { return (char*)this + 92; }

struct C_0045cf20 { char* sub_0045cf20(void); };

// @baa 0x0045cf20
char* C_0045cf20::sub_0045cf20(void) { return (char*)this + 104; }

struct C_0045cf50 { int sub_0045cf50(void); };

// @baa 0x0045cf50
int C_0045cf50::sub_0045cf50(void) { return *(int*)((char*)this + 8); }

struct C_0045cf60 { int sub_0045cf60(void); };

// @baa 0x0045cf60
int C_0045cf60::sub_0045cf60(void) { return *(int*)((char*)this + 12); }

struct C_0045cf70 { float sub_0045cf70(void); };

// @baa 0x0045cf70
float C_0045cf70::sub_0045cf70(void) { return *(float*)((char*)this + 16); }

struct C_0045cf80 {
    undefined1 sub_0045cf80();
};

// @baa 0x0045cf80
undefined1 C_0045cf80::sub_0045cf80(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  return 0;
}

struct C_0045cfc0 { int a; C_0045cfc0(int); };

// @baa 0x0045cfc0
C_0045cfc0::C_0045cfc0(int x) : a(x) {}

struct C_0045cfd0 { int sub_0045cfd0(void); };

// @baa 0x0045cfd0
int C_0045cfd0::sub_0045cfd0(void) { return *(int*)((char*)this + 28); }

int sub_00d02b80(void);
int sub_00d0e440(...);
extern undefined4 g_026c5700;
// @baa 0x0045cfe0
int sub_0045cfe0(void)
{
  if (g_026c5700 == 0) {
    g_026c5700 = sub_00d0e440(L"Engine");
    sub_00d02b80();
  }
  return g_026c5700;
}

int sub_00cee610(...);
int sub_00cf23e0(void);
extern undefined4 g_026c5704;
// @baa 0x0045d010
int sub_0045d010(void)
{
  if (g_026c5704 == 0) {
    g_026c5704 = sub_00cee610(L"Engine");
    sub_00cf23e0();
  }
  return g_026c5704;
}

struct C_0045d040 { int sub_0045d040(void); };

// @baa 0x0045d040
int C_0045d040::sub_0045d040(void) { return *(int*)((char*)this + 56); }

struct C_0045d050 { char* sub_0045d050(void); };

// @baa 0x0045d050
char* C_0045d050::sub_0045d050(void) { return (char*)this + 80; }

struct C_0045d060 { int sub_0045d060(void); };

// @baa 0x0045d060
int C_0045d060::sub_0045d060(void) { return *(int*)((char*)this + 80); }

struct C_0045d070 {
    undefined4 sub_0045d070();
};

// @baa 0x0045d070
undefined4 C_0045d070::sub_0045d070(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x38);
}

struct C_0045d4b0 { C_0045d4b0* sub_0045d4b0(void); };

// @baa 0x0045d4b0
C_0045d4b0* C_0045d4b0::sub_0045d4b0(void) { return this; }

struct C_0045d4c0 { char* sub_0045d4c0(void); };

// @baa 0x0045d4c0
char* C_0045d4c0::sub_0045d4c0(void) { return (char*)this + 12; }

struct M_0045d4e0 { void sub_01acd030(); };

struct C_0045d4e0 { char pad[24]; M_0045d4e0 m; void sub_0045d4e0(); };

// @baa 0x0045d4e0
void C_0045d4e0::sub_0045d4e0() { m.sub_01acd030(); }

struct C_0045d4f0 { char* sub_0045d4f0(void); };

// @baa 0x0045d4f0
char* C_0045d4f0::sub_0045d4f0(void) { return (char*)this + 24; }

struct C_0045d500 { char* sub_0045d500(void); };

// @baa 0x0045d500
char* C_0045d500::sub_0045d500(void) { return (char*)this + 56; }

struct C_0045d510 { void sub_0045d510(int a0); };

// @baa 0x0045d510
void C_0045d510::sub_0045d510(int a0) { *(int*)((char*)this + 72) = a0; }

struct C_0045d520 { int sub_0045d520(void); };

// @baa 0x0045d520
int C_0045d520::sub_0045d520(void) { return *(int*)((char*)this + 72); }

struct C_0045d530 {
    void sub_0045d530(undefined1);
};

// @baa 0x0045d530
void C_0045d530::sub_0045d530(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x4c) = param_2;
  return;
}

struct C_0045d540 {
    undefined1 sub_0045d540();
};

// @baa 0x0045d540
undefined1 C_0045d540::sub_0045d540(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x4c);
}

// @baa 0x0045d550
undefined1 sub_0045d550(void)
{
  return 0;
}

struct C_0045d770 {
    void sub_0045d770(undefined1);
};

// @baa 0x0045d770
void C_0045d770::sub_0045d770(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}

struct C_0045d7a0 {
    void sub_0045d7a0(undefined1);
};

// @baa 0x0045d7a0
void C_0045d7a0::sub_0045d7a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x21) = param_2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}

struct C_0045d7d0 {
    void sub_0045d7d0(undefined4);
};

// @baa 0x0045d7d0
void C_0045d7d0::sub_0045d7d0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}

struct C_0045d7f0 { char* sub_0045d7f0(void); };

// @baa 0x0045d7f0
char* C_0045d7f0::sub_0045d7f0(void) { return (char*)this + 44; }

struct C_0045d800 { char* sub_0045d800(void); };

// @baa 0x0045d800
char* C_0045d800::sub_0045d800(void) { return (char*)this + 56; }

struct C_0045d810 { char* sub_0045d810(void); };

// @baa 0x0045d810
char* C_0045d810::sub_0045d810(void) { return (char*)this + 68; }

struct C_0045d820 { char* sub_0045d820(void); };

// @baa 0x0045d820
char* C_0045d820::sub_0045d820(void) { return (char*)this + 80; }

struct C_0045d830 {
    void sub_0045d830(undefined1);
};

// @baa 0x0045d830
void C_0045d830::sub_0045d830(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}

struct C_0045d980 {
    undefined1 sub_0045d980();
};

// @baa 0x0045d980
undefined1 C_0045d980::sub_0045d980(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_0045d990 {
    void sub_0045d990(undefined1);
};

// @baa 0x0045d990
void C_0045d990::sub_0045d990(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

struct C_0045d9a0 { char* sub_0045d9a0(void); };

// @baa 0x0045d9a0
char* C_0045d9a0::sub_0045d9a0(void) { return (char*)this + 12; }

struct M_0045d9b0 { void sub_01ab5820(); };

struct C_0045d9b0 { char pad[12]; M_0045d9b0 m; void sub_0045d9b0(); };

// @baa 0x0045d9b0
void C_0045d9b0::sub_0045d9b0() { m.sub_01ab5820(); }

struct C_0045d9c0 {
    undefined1 sub_0045d9c0();
};

// @baa 0x0045d9c0
undefined1 C_0045d9c0::sub_0045d9c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x10);
}

struct C_0045d9d0 {
    void sub_0045d9d0(undefined1);
};

// @baa 0x0045d9d0
void C_0045d9d0::sub_0045d9d0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}

struct C_0045d9e0 { float sub_0045d9e0(void); };

// @baa 0x0045d9e0
float C_0045d9e0::sub_0045d9e0(void) { return *(float*)((char*)this + 20); }

struct C_0045da00 { float sub_0045da00(void); };

// @baa 0x0045da00
float C_0045da00::sub_0045da00(void) { return *(float*)((char*)this + 24); }

struct C_0045da20 {
    void sub_0045da20(undefined4 *);
};

// @baa 0x0045da20
void C_0045da20::sub_0045da20(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[3];
  return;
}

struct C_0045da40 { char* sub_0045da40(void); };

// @baa 0x0045da40
char* C_0045da40::sub_0045da40(void) { return (char*)this + 28; }

struct C_0045da50 {
    void sub_0045da50(undefined4 *);
};

// @baa 0x0045da50
void C_0045da50::sub_0045da50(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[2];
  return;
}

struct C_0045da70 { char* sub_0045da70(void); };

// @baa 0x0045da70
char* C_0045da70::sub_0045da70(void) { return (char*)this + 44; }

struct C_0045da80 {
    void sub_0045da80(undefined4 *);
};

// @baa 0x0045da80
void C_0045da80::sub_0045da80(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_2[1];
  *(undefined4 *)(param_1 + 0x40) = param_2[2];
  return;
}

struct C_0045daa0 { char* sub_0045daa0(void); };

// @baa 0x0045daa0
char* C_0045daa0::sub_0045daa0(void) { return (char*)this + 56; }

struct C_0045dab0 {
    void sub_0045dab0(undefined4 *);
};

// @baa 0x0045dab0
void C_0045dab0::sub_0045dab0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = param_2[2];
  *(undefined4 *)(param_1 + 0x50) = param_2[3];
  return;
}

struct C_0045dad0 { char* sub_0045dad0(void); };

// @baa 0x0045dad0
char* C_0045dad0::sub_0045dad0(void) { return (char*)this + 68; }

struct C_0045dae0 {
    void sub_0045dae0(undefined4 *);
};

// @baa 0x0045dae0
void C_0045dae0::sub_0045dae0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x54) = *param_2;
  *(undefined4 *)(param_1 + 0x58) = param_2[1];
  *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  return;
}

struct C_0045db00 { char* sub_0045db00(void); };

// @baa 0x0045db00
char* C_0045db00::sub_0045db00(void) { return (char*)this + 84; }

struct C_0045db10 {
    void sub_0045db10(undefined4 *);
};

// @baa 0x0045db10
void C_0045db10::sub_0045db10(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x60) = *param_2;
  *(undefined4 *)(param_1 + 100) = param_2[1];
  *(undefined4 *)(param_1 + 0x68) = param_2[2];
  *(undefined4 *)(param_1 + 0x6c) = param_2[3];
  return;
}

struct C_0045db30 { char* sub_0045db30(void); };

// @baa 0x0045db30
char* C_0045db30::sub_0045db30(void) { return (char*)this + 96; }

// @baa 0x0045dbf0
void sub_0045dbf0(void) {  }

extern char g_026638e0[];
// @baa 0x0045dcb0
int sub_0045dcb0(void) { return (int)g_026638e0; }

extern char g_026639d4[];
// @baa 0x0045dcc0
int sub_0045dcc0(void) { return (int)g_026639d4; }

extern char g_025d4e28[];
// @baa 0x0045dcd0
int sub_0045dcd0(void) { return (int)g_025d4e28; }

extern char g_026639a4[];
// @baa 0x0045dce0
int sub_0045dce0(void) { return (int)g_026639a4; }

// @baa 0x0045dd20
void sub_0045dd20(void) {  }

struct C_0045de80 { float sub_0045de80(void); };

// @baa 0x0045de80
float C_0045de80::sub_0045de80(void) { return *(float*)((char*)this + 0); }

struct C_0045de90 { float sub_0045de90(void); };

// @baa 0x0045de90
float C_0045de90::sub_0045de90(void) { return *(float*)((char*)this + 4); }

struct C_0045dea0 { float sub_0045dea0(void); };

// @baa 0x0045dea0
float C_0045dea0::sub_0045dea0(void) { return *(float*)((char*)this + 8); }

struct C_0045df10 { float sub_0045df10(void); };

// @baa 0x0045df10
float C_0045df10::sub_0045df10(void) { return *(float*)((char*)this + 12); }

struct C_0045df20 { float sub_0045df20(void); };

// @baa 0x0045df20
float C_0045df20::sub_0045df20(void) { return *(float*)((char*)this + 16); }

struct C_0045df30 { float sub_0045df30(void); };

// @baa 0x0045df30
float C_0045df30::sub_0045df30(void) { return *(float*)((char*)this + 20); }

extern char g_02663a08[];
// @baa 0x0045e120
int sub_0045e120(void) { return (int)g_02663a08; }

// @baa 0x0045e130
int sub_0045e130(void) { return 16; }

// @baa 0x0045e160
void sub_0045e160(void) {  }

struct C_0045e170 {
    C_0045e170* sub_0045e170();
};

// @baa 0x0045e170
C_0045e170* C_0045e170::sub_0045e170()
{
    *reinterpret_cast<BYTE*>(this) = 0;
    return this;
}

// @baa 0x0045e180
void sub_0045e180(void) {  }

// @baa 0x0045e190
float10 sub_0045e190(int param_1, int * param_2, float param_3, float param_4)
{
  return ((float10)(param_1 - *param_2) / (float10)param_2[2]) *
         ((float10)param_4 - (float10)param_3) + (float10)param_3;
}

// @baa 0x0045e1c0
int sub_0045e1c0(float param_1, int * param_2, float param_3, float param_4)
{
  return (int)(((param_1 - param_3) / (param_4 - param_3)) * (float)param_2[2] + (float)*param_2);
}

// @baa 0x0045e230
int sub_0045e230(float param_1, int param_2, float param_3, float param_4)
{
  return (int)((float)(*(int *)(param_2 + 4) + -1 + *(int *)(param_2 + 0xc)) -
              ((param_1 - param_3) / (param_4 - param_3)) * (float)*(int *)(param_2 + 0xc));
}

struct C_0045e950 {
    undefined1 sub_0045e950();
};

// @baa 0x0045e950
undefined1 C_0045e950::sub_0045e950(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x28);
}

struct C_0045e960 {
    void sub_0045e960();
};

// @baa 0x0045e960
void C_0045e960::sub_0045e960(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

struct C_0045eaf0 {
    undefined4 sub_0045eaf0(int *);
};

// @baa 0x0045eaf0
undefined4 C_0045eaf0::sub_0045eaf0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}

struct C_0045ed00 {
    void sub_0045ed00(int *);
};

// @baa 0x0045ed00
void C_0045ed00::sub_0045ed00(int * param_2)
{
    float * param_1 = (float *)this;
  *param_1 = (float)*param_2;
  param_1[1] = (float)param_2[1];
  return;
}

struct C_0045ed40 {
    void sub_0045ed40(int *);
};

// @baa 0x0045ed40
void C_0045ed40::sub_0045ed40(int * param_2)
{
    int param_1 = (int)this;
  *(float *)(param_1 + 8) = (float)*param_2;
  *(float *)(param_1 + 0xc) = (float)param_2[1];
  return;
}

extern char g_025d4e38[];
// @baa 0x0045ed60
int sub_0045ed60(void) { return (int)g_025d4e38; }

extern char g_02663924[];
// @baa 0x0045ed70
int sub_0045ed70(void) { return (int)g_02663924; }

struct C_0045ee40 { void sub_0045ee40(int a0); };

// @baa 0x0045ee40
void C_0045ee40::sub_0045ee40(int a0) { *(int*)((char*)this + 48) = a0; }

struct C_0045ef40 {
    void sub_0045ef40(undefined1);
};

// @baa 0x0045ef40
void C_0045ef40::sub_0045ef40(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x5d) = param_2;
  return;
}

// @baa 0x0045ef50
void __stdcall sub_0045ef50(int a0, int a1) {  }

struct C_0045ef60 { int a, b; C_0045ef60(int, int); };

// @baa 0x0045ef60
C_0045ef60::C_0045ef60(int x, int y) : a(x), b(y) {}

class wxWindow
{
public:
    __declspec(dllimport) virtual ~wxWindow();
};

extern void* g_01e529d8[];
struct C_0045c520 : public wxWindow
{
    void sub_0045c520();
};

// @baa 0x0045c520
void C_0045c520::sub_0045c520()
{
    *(void**)this = g_01e529d8;
    ((wxWindow*)this)->wxWindow::~wxWindow();
}

struct C_0045d9f0
{
    char pad_00[0x14];
    float Value;

    void sub_0045d9f0(float In);
};

// @baa 0x0045d9f0
void C_0045d9f0::sub_0045d9f0(float In)
{
    Value = In;
}

struct C_0045da10
{
    char pad_00[0x18];
    float Value;

    void sub_0045da10(float In);
};

// @baa 0x0045da10
void C_0045da10::sub_0045da10(float In)
{
    Value = In;
}

struct sub_0045e140_Obj
{
    DWORD First;
    DWORD Second;
    DWORD Third;
    DWORD Fourth;
    DWORD Fifth;

    sub_0045e140_Obj* sub_0045e140(DWORD Value);
};

// @baa 0x0045e140
sub_0045e140_Obj* sub_0045e140_Obj::sub_0045e140(DWORD Value)
{
    First = Value;
    Second = 0;
    Third = 0;
    Fourth = 0;
    Fifth = 0;
    return this;
}
