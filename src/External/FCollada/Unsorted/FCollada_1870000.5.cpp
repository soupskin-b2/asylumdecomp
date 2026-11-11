// FCollada_1870000.cpp (part 5 of 24): 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_01872130 { virtual void sub_01872340(); char pad[32]; };

struct B_01872130 { virtual void sub_01872340(); };

struct C_01872130 : A_01872130, B_01872130 { virtual void sub_01872340(); C_01872130(); };

C_01872130::C_01872130() {}

// @baa 0x01872130
void C_01872130::sub_01872340() {}

struct C {
    undefined4 * sub_01872740(undefined4);
    int sub_01872640(int);
};

extern undefined4 g_023ed01c;
// @baa 0x01872740
undefined4 * C::sub_01872740(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01872640(param_2);
  *param_1 = (undefined4)((&g_023ed01c));
  return param_1;
}

struct C_01872850 {
    undefined4 * sub_01872850(undefined4);
    int sub_01872640(int);
};

extern undefined4 g_023ed03c;
// @baa 0x01872850
undefined4 * C_01872850::sub_01872850(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01872850 *)(this))->sub_01872640(param_2);
  *param_1 = (undefined4)((&g_023ed03c));
  return param_1;
}

struct M_01873610 { void sub_01873450(); };

struct C_01873610 { char pad[52]; M_01873610 m; void sub_01873610(); };

// @baa 0x01873610
void C_01873610::sub_01873610() { m.sub_01873450(); }

struct C_018742a0 {
    undefined4 * sub_018742a0(undefined4, undefined4, undefined4);
    int sub_0184ad30(int, int, int);
};

extern undefined4 g_023ed104;
extern undefined4 g_023ed114;
// @baa 0x018742a0
undefined4 * C_018742a0::sub_018742a0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018742a0 *)(this))->sub_0184ad30(param_2, param_3, param_4);
  *param_1 = (undefined4)((&g_023ed114));
  param_1[9] = (undefined4)((&g_023ed104));
  return param_1;
}

struct A_018743c0 { virtual void sub_018743d0(); char pad[32]; };

struct B_018743c0 { virtual void sub_018743d0(); };

struct C_018743c0 : A_018743c0, B_018743c0 { virtual void sub_018743d0(); C_018743c0(); };

C_018743c0::C_018743c0() {}

// @baa 0x018743c0
void C_018743c0::sub_018743d0() {}

struct A_01874470 { virtual void sub_01874480(); char pad[32]; };

struct B_01874470 { virtual void sub_01874480(); };

struct C_01874470 : A_01874470, B_01874470 { virtual void sub_01874480(); C_01874470(); };

C_01874470::C_01874470() {}

// @baa 0x01874470
void C_01874470::sub_01874480() {}

struct C_01874c90 { void sub_01851350(int); void sub_01874c90(); };

// @baa 0x01874c90
void C_01874c90::sub_01874c90() { sub_01851350(0); }

struct A_01874ec0 { virtual void sub_01874ed0(); char pad[32]; };

struct B_01874ec0 { virtual void sub_01874ed0(); };

struct C_01874ec0 : A_01874ec0, B_01874ec0 { virtual void sub_01874ed0(); C_01874ec0(); };

C_01874ec0::C_01874ec0() {}

// @baa 0x01874ec0
void C_01874ec0::sub_01874ed0() {}

extern "C" __declspec(dllimport) int __stdcall DeleteCriticalSection(void*);
struct C_01874f70 {
    void sub_01874f70();
};

// @baa 0x01874f70
void C_01874f70::sub_01874f70() {
    DeleteCriticalSection(this);
}

struct C_01874fa0 {
    undefined4 * sub_01874fa0(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023ed1f8;
// @baa 0x01874fa0
undefined4 * C_01874fa0::sub_01874fa0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01874fa0 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023ed1f8));
  return param_1;
}

struct C_01874fc0 {
    void sub_01874fc0();
};

int sub_0181b5d0(void);
// @baa 0x01874fc0
void C_01874fc0::sub_01874fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023ed1f8);
  sub_0181b5d0();
  return;
}

struct C_01874fd0 { void sub_01818ec0(int); C_01874fd0 *sub_01874fd0(int); };

// @baa 0x01874fd0
C_01874fd0 *C_01874fd0::sub_01874fd0(int a) { sub_01818ec0(a); return this; }

struct M_01875090 { void sub_01817ee0(); };

struct C_01875090 { char pad[48]; M_01875090 m; void sub_01875090(); };

// @baa 0x01875090
void C_01875090::sub_01875090() { m.sub_01817ee0(); }

struct M_018750a0 { void sub_01817f00(); };

struct C_018750a0 { char pad[48]; M_018750a0 m; void sub_018750a0(); };

// @baa 0x018750a0
void C_018750a0::sub_018750a0() { m.sub_01817f00(); }

struct M_018750b0 { void sub_01817860(); };

struct C_018750b0 { char pad[48]; M_018750b0 m; void sub_018750b0(); };

// @baa 0x018750b0
void C_018750b0::sub_018750b0() { m.sub_01817860(); }

struct A_018766c0 { virtual void sub_018766d0(); char pad[32]; };

struct B_018766c0 { virtual void sub_018766d0(); };

struct C_018766c0 : A_018766c0, B_018766c0 { virtual void sub_018766d0(); C_018766c0(); };

C_018766c0::C_018766c0() {}

// @baa 0x018766c0
void C_018766c0::sub_018766d0() {}

struct C_01876d40 {
    undefined4 * sub_01876d40(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023ed4d0;
// @baa 0x01876d40
undefined4 * C_01876d40::sub_01876d40(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01876d40 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023ed4d0));
  return param_1;
}

struct C_01876d70 { void sub_01818ec0(int); C_01876d70 *sub_01876d70(int); };

// @baa 0x01876d70
C_01876d70 *C_01876d70::sub_01876d70(int a) { sub_01818ec0(a); return this; }

struct C_01876d90 {
    undefined4 * sub_01876d90(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023ed4e0;
// @baa 0x01876d90
undefined4 * C_01876d90::sub_01876d90(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01876d90 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023ed4e0));
  return param_1;
}

struct C_01876dc0 { void sub_01818ec0(int); C_01876dc0 *sub_01876dc0(int); };

// @baa 0x01876dc0
C_01876dc0 *C_01876dc0::sub_01876dc0(int a) { sub_01818ec0(a); return this; }

struct C_01877860 {
    void sub_01877860();
};

extern undefined4 g_023ed500;
// @baa 0x01877860
void C_01877860::sub_01877860(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed500));
  return;
}

struct C_01877a90 {
    undefined4 * sub_01877a90(byte);
};

int sub_00402660(...);
// @baa 0x01877a90
undefined4 * C_01877a90::sub_01877a90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023ed500);
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01878a20 { int a, b, c; C_01878a20(); };

// @baa 0x01878a20
C_01878a20::C_01878a20() : a(0), b(0), c(0) {}

struct C_01879f30 { void sub_01875de0(); };

struct D {
    void sub_01879f30();
    C_01879f30 *m_p;
};

// @baa 0x01879f30
void D::sub_01879f30() { m_p->sub_01875de0(); }

struct C_0187f150 {
    void sub_0187f150();
};

extern undefined4 g_023ee690;
// @baa 0x0187f150
void C_0187f150::sub_0187f150(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  return;
}

struct C_0187f190 { int a, b, c; C_0187f190(); };

// @baa 0x0187f190
C_0187f190::C_0187f190() : a(0), b(0), c(0) {}

struct C_0187f1c0 { int a, b, c; C_0187f1c0(); };

// @baa 0x0187f1c0
C_0187f1c0::C_0187f1c0() : a(0), b(0), c(0) {}

// @baa 0x0187f2c0
void sub_0187f2c0(void)
{
  return;
}

struct M_0187f440 { void sub_00ef1560(); };

struct C_0187f440 { char pad[4]; M_0187f440 m; void sub_0187f440(); };

// @baa 0x0187f440
void C_0187f440::sub_0187f440() { m.sub_00ef1560(); }

struct C_0187f940 {
    void sub_0187f940(undefined4);
    int sub_0187f500(int, int);
};

// @baa 0x0187f940
void C_0187f940::sub_0187f940(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0187f940 *)(this))->sub_0187f500(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct M_0187fd20 { void sub_0187fa80(); };

struct C_0187fd20 { char pad[4]; M_0187fd20 m; void sub_0187fd20(); };

// @baa 0x0187fd20
void C_0187fd20::sub_0187fd20() { m.sub_0187fa80(); }
