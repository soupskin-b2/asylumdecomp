// FCollada_1820000.cpp (part 2 of 6): 49 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_018218d0(int *);
};

// @baa 0x018218d0
bool C::sub_018218d0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018218e0 {
    undefined4 sub_018218e0();
};

// @baa 0x018218e0
undefined4 C_018218e0::sub_018218e0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct C_01821cf0 { int a; C_01821cf0(int); };

// @baa 0x01821cf0
C_01821cf0::C_01821cf0(int x) : a(x) {}

struct C_01822100 {
    int v;
    int *sub_01822100(int *a);
};

// @baa 0x01822100
int *C_01822100::sub_01822100(int *a) {
    *a = v;
    return a;
}

struct M_01822150 { void sub_00ef1560(); };

struct C_01822150 { char pad[4]; M_01822150 m; void sub_01822150(); };

// @baa 0x01822150
void C_01822150::sub_01822150() { m.sub_00ef1560(); }

struct M_018221c0 { void sub_00ef1560(); };

struct C_018221c0 { char pad[4]; M_018221c0 m; void sub_018221c0(); };

// @baa 0x018221c0
void C_018221c0::sub_018221c0() { m.sub_00ef1560(); }

struct M_01822250 { void sub_00ef1560(); };

struct C_01822250 { char pad[4]; M_01822250 m; void sub_01822250(); };

// @baa 0x01822250
void C_01822250::sub_01822250() { m.sub_00ef1560(); }

struct M_01822260 { void sub_00ef1560(); };

struct C_01822260 { char pad[4]; M_01822260 m; void sub_01822260(); };

// @baa 0x01822260
void C_01822260::sub_01822260() { m.sub_00ef1560(); }

typedef uint size_t;

struct C_01823330 {
    undefined4 * sub_01823330(undefined4 *);
    int sub_00ec79a0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01823330
undefined4 * C_01823330::sub_01823330(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01823330 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_01823aa0 {
    undefined4 * sub_01823aa0(undefined4 *);
    int sub_00ec79a0(int);
};

// @baa 0x01823aa0
undefined4 * C_01823aa0::sub_01823aa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01823aa0 *)(this))->sub_00ec79a0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1]);
  }
  return param_1;
}

struct C_01824fd0 { int a; C_01824fd0(int); };

// @baa 0x01824fd0
C_01824fd0::C_01824fd0(int x) : a(x) {}

struct C_01825010 { int a; C_01825010(int); };

// @baa 0x01825010
C_01825010::C_01825010(int x) : a(x) {}

struct M_018251d0 { void sub_00ef1560(); };

struct C_018251d0 { char pad[4]; M_018251d0 m; void sub_018251d0(); };

// @baa 0x018251d0
void C_018251d0::sub_018251d0() { m.sub_00ef1560(); }

struct C_01825200 {
    int v;
    int *sub_01825200(int *a);
};

// @baa 0x01825200
int *C_01825200::sub_01825200(int *a) {
    *a = v;
    return a;
}

struct C_01825310 {
    int v;
    int *sub_01825310(int *a);
};

// @baa 0x01825310
int *C_01825310::sub_01825310(int *a) {
    *a = v;
    return a;
}

struct C_01825530 {
    undefined4 * sub_01825530(undefined4 *);
    int sub_00ec80e0(int);
};

// @baa 0x01825530
undefined4 * C_01825530::sub_01825530(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_01825530 *)(this))->sub_00ec80e0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] * 4);
  }
  return param_1;
}

struct C_018257e0 {
    undefined4 * sub_018257e0(undefined4, undefined4);
    int sub_0181bbf0(int, int);
};

extern undefined4 g_023e4f4c;
// @baa 0x018257e0
undefined4 * C_018257e0::sub_018257e0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018257e0 *)(this))->sub_0181bbf0(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f4c));
  return param_1;
}

struct C_01825810 {
    undefined4 * sub_01825810(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4f5c;
// @baa 0x01825810
undefined4 * C_01825810::sub_01825810(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825810 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f5c));
  return param_1;
}

struct C_01825840 {
    undefined4 * sub_01825840(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4f6c;
// @baa 0x01825840
undefined4 * C_01825840::sub_01825840(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825840 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f6c));
  return param_1;
}

struct C_01825870 {
    undefined4 * sub_01825870(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4f7c;
// @baa 0x01825870
undefined4 * C_01825870::sub_01825870(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825870 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f7c));
  return param_1;
}

struct C_018258a0 {
    undefined4 * sub_018258a0(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4f8c;
// @baa 0x018258a0
undefined4 * C_018258a0::sub_018258a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018258a0 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f8c));
  return param_1;
}

struct C_018258d0 {
    undefined4 * sub_018258d0(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4f9c;
// @baa 0x018258d0
undefined4 * C_018258d0::sub_018258d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018258d0 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4f9c));
  return param_1;
}

struct C_01825900 {
    undefined4 * sub_01825900(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4fac;
// @baa 0x01825900
undefined4 * C_01825900::sub_01825900(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825900 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4fac));
  return param_1;
}

struct C_01825930 {
    undefined4 * sub_01825930(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4fbc;
// @baa 0x01825930
undefined4 * C_01825930::sub_01825930(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825930 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4fbc));
  return param_1;
}

struct C_01825960 {
    undefined4 * sub_01825960(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4fcc;
// @baa 0x01825960
undefined4 * C_01825960::sub_01825960(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825960 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4fcc));
  return param_1;
}

struct C_01825990 {
    undefined4 * sub_01825990(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4fdc;
// @baa 0x01825990
undefined4 * C_01825990::sub_01825990(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01825990 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4fdc));
  return param_1;
}

struct C_018259b0 {
    void sub_018259b0();
};

int sub_0181b5d0(void);
// @baa 0x018259b0
void C_018259b0::sub_018259b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e4fdc);
  sub_0181b5d0();
  return;
}

struct C_01827660 {
    undefined4 * sub_01827660();
    int sub_01826490(int);
};

// @baa 0x01827660
undefined4 * C_01827660::sub_01827660(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ((C_01827660 *)(this))->sub_01826490(0x20);
  return param_1;
}

struct C_01827680 {
    undefined4 * sub_01827680(undefined4);
    int sub_01826490(int);
};

// @baa 0x01827680
undefined4 * C_01827680::sub_01827680(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ((C_01827680 *)(this))->sub_01826490(param_2);
  return param_1;
}

struct C_018276f0 { void sub_01826490(int); void sub_018276f0(); };

// @baa 0x018276f0
void C_018276f0::sub_018276f0() { sub_01826490(0); }

struct C_01827700 {
    undefined4 * sub_01827700();
    int sub_01826920(int);
};

// @baa 0x01827700
undefined4 * C_01827700::sub_01827700(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ((C_01827700 *)(this))->sub_01826920(0x20);
  return param_1;
}

struct C_01827720 {
    undefined4 * sub_01827720(undefined4);
    int sub_01826920(int);
};

// @baa 0x01827720
undefined4 * C_01827720::sub_01827720(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ((C_01827720 *)(this))->sub_01826920(param_2);
  return param_1;
}

struct C_01827790 { void sub_01826920(int); void sub_01827790(); };

// @baa 0x01827790
void C_01827790::sub_01827790() { sub_01826920(0); }

struct C_01828dc0 {
    undefined4 * sub_01828dc0(char *);
    int sub_01826920(int);
    int sub_01827850(int);
};

// @baa 0x01828dc0
undefined4 * C_01828dc0::sub_01828dc0(char * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  int iVar3;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  iVar3 = 0;
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + 1;
    cVar1 = *pcVar2;
  }
  ((C_01828dc0 *)(this))->sub_01826920(iVar3 + 0x20);
  ((C_01828dc0 *)(this))->sub_01827850((int)(param_2));
  return param_1;
}

struct C_01829310 {
    undefined4 * sub_01829310(short *);
    int sub_01826490(int);
    int sub_01828c60(int);
};

// @baa 0x01829310
undefined4 * C_01829310::sub_01829310(short * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  short sVar1;
  short *psVar2;
  int iVar3;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  iVar3 = 0;
  sVar1 = *param_2;
  psVar2 = param_2;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + 1;
    sVar1 = *psVar2;
  }
  ((C_01829310 *)(this))->sub_01826490(iVar3 + 0x20);
  ((C_01829310 *)(this))->sub_01828c60((int)(param_2));
  return param_1;
}

struct C_01829c20 {
    undefined4 * sub_01829c20(undefined4);
    int sub_0181d650(int);
};

extern undefined4 g_023e52b0;
// @baa 0x01829c20
undefined4 * C_01829c20::sub_01829c20(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01829c20 *)(this))->sub_0181d650(param_2);
  *param_1 = (undefined4)((&g_023e52b0));
  return param_1;
}

struct C_01829ca0 {
    void sub_01829ca0(undefined4);
    int sub_0181d6f0(int);
};

// @baa 0x01829ca0
void C_01829ca0::sub_01829ca0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01829ca0 *)(((char *)this + 0x44)))->sub_0181d6f0(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_0182a2c0 { int a, b, c; C_0182a2c0(); };

// @baa 0x0182a2c0
C_0182a2c0::C_0182a2c0() : a(0), b(0), c(0) {}

struct C_0182a300 { int a, b, c; C_0182a300(); };

// @baa 0x0182a300
C_0182a300::C_0182a300() : a(0), b(0), c(0) {}

struct C_0182a320 { int a, b, c; C_0182a320(); };

// @baa 0x0182a320
C_0182a320::C_0182a320() : a(0), b(0), c(0) {}

struct C_0182a340 { int a, b, c; C_0182a340(); };

// @baa 0x0182a340
C_0182a340::C_0182a340() : a(0), b(0), c(0) {}

struct C_0182a360 { int a, b, c; C_0182a360(); };

// @baa 0x0182a360
C_0182a360::C_0182a360() : a(0), b(0), c(0) {}

struct C_0182d8f0 {
    void sub_0182d8f0(undefined4);
    int sub_0182c100(int);
};

// @baa 0x0182d8f0
void C_0182d8f0::sub_0182d8f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0182d8f0 *)(this))->sub_0182c100(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_0182d910 {
    void sub_0182d910(undefined4);
    int sub_0182c180(int, int);
};

// @baa 0x0182d910
void C_0182d910::sub_0182d910(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182d910 *)(this))->sub_0182c180(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct C_0182d970 {
    void sub_0182d970(undefined4);
    int sub_0182c290(int, int);
};

// @baa 0x0182d970
void C_0182d970::sub_0182d970(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182d970 *)(this))->sub_0182c290(*(int *)(param_1 + 8) + *(int *)(param_1 + 4), param_2);
  return;
}

struct C_0182d9c0 {
    void sub_0182d9c0(undefined4);
    int sub_0182c3d0(int, int);
};

// @baa 0x0182d9c0
void C_0182d9c0::sub_0182d9c0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182d9c0 *)(this))->sub_0182c3d0(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8, param_2);
  return;
}

struct C_0182da10 {
    void sub_0182da10(undefined4);
    int sub_0182c520(int, int);
};

// @baa 0x0182da10
void C_0182da10::sub_0182da10(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182da10 *)(this))->sub_0182c520(*(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8), param_2);
  return;
}

struct C_0182da60 {
    void sub_0182da60(undefined4);
    int sub_0182c680(int, int);
};

// @baa 0x0182da60
void C_0182da60::sub_0182da60(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182da60 *)(this))->sub_0182c680(*(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8), param_2);
  return;
}

struct C_0182f430 {
    void sub_0182f430(undefined4);
    int sub_0182f360(int, int);
};

// @baa 0x0182f430
void C_0182f430::sub_0182f430(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0182f430 *)(this))->sub_0182f360(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc, param_2);
  return;
}
