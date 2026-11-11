// Editor_0790000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_0079f130(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_0062dc50(int, int, int, int, int);
};

extern undefined * g_01eaee18;
// @baa 0x0079f130
undefined4 * C::sub_0079f130(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eaee18);
  param_1[0x1c] = param_7;
  return param_1;
}

struct C_0079f170 { C_0079f170* sub_0079f170(void); };

// @baa 0x0079f170
C_0079f170* C_0079f170::sub_0079f170(void) { return this; }

// @baa 0x0079f1b0
int sub_0079f1b0(int a0, int a1) { return a1; }

struct C_0079f1c0 { C_0079f1c0* sub_0079f1c0(void); };

// @baa 0x0079f1c0
C_0079f1c0* C_0079f1c0::sub_0079f1c0(void) { return this; }

struct C_0079f1d0 { int sub_0079f1d0(void); };

// @baa 0x0079f1d0
int C_0079f1d0::sub_0079f1d0(void) { return *(int*)((char*)this + 0); }

struct C_0079f1e0 {
    bool sub_0079f1e0(int);
};

// @baa 0x0079f1e0
bool C_0079f1e0::sub_0079f1e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_0079f1f0 { int sub_0079f1f0(void); };

// @baa 0x0079f1f0
int C_0079f1f0::sub_0079f1f0(void) { return *(int*)((char*)this + 0); }

struct C_0079f200 { int sub_0079f200(void); };

// @baa 0x0079f200
int C_0079f200::sub_0079f200(void) { return *(int*)((char*)this + 0); }

struct C_0079f210 { C_0079f210* sub_0079f210(int a0); };

// @baa 0x0079f210
C_0079f210* C_0079f210::sub_0079f210(int a0) { return this; }

int sub_00889cf0(void);
int sub_0088f630(...);
extern undefined4 g_026b596c;
// @baa 0x0079f290
int sub_0079f290(void)
{
  if (g_026b596c == 0) {
    g_026b596c = sub_0088f630(L"Engine");
    sub_00889cf0();
  }
  return g_026b596c;
}
