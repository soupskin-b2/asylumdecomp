// fmod_systemi.cpp (part 2 of 7): 63 functions
// Placed here by: callers 33, neighbours 29.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    unsigned int sub_017684ac(unsigned int arg1);
};

// @baa 0x017684ac
unsigned int C::sub_017684ac(unsigned int arg1)
{
    unsigned int v = 0x4b;
    return v;
}

struct C_017686ea {
    undefined4 sub_017686ea(int, int, int, int);
};

// @baa 0x017686ea
undefined4 C_017686ea::sub_017686ea(int param_2, int param_3, int param_4, int param_5)
{
    int param_1 = (int)this;

  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_5 == 0)) {
    param_2 = 0;
    param_3 = 0;
    param_4 = 0;
    param_5 = 0;
  }
  *(int *)(param_1 + 0x19c) = param_2;
  *(int *)(param_1 + 0x1a0) = param_3;
  *(int *)(param_1 + 0x1a8) = param_5;
  *(int *)(param_1 + 0x1a4) = param_4;
  return 0;
}

struct C_017698ed {
    undefined4 sub_017698ed(undefined4 *);
};

// @baa 0x017698ed
undefined4 C_017698ed::sub_017698ed(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x4ec);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01769ec5 {
    undefined4 sub_01769ec5(undefined4 *);
};

// @baa 0x01769ec5
undefined4 C_01769ec5::sub_01769ec5(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x504);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0176a037 {
    undefined4 sub_0176a037(undefined4 *);
};

// @baa 0x0176a037
undefined4 C_0176a037::sub_0176a037(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x956c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0176a0de {
    undefined4 sub_0176a0de(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0176a0de
undefined4 C_0176a0de::sub_0176a0de(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x9620) = param_2;
  *(undefined4 *)(param_1 + 0x9624) = param_3;
  *(undefined4 *)(param_1 + 0x9628) = param_4;
  *(undefined4 *)(param_1 + 0x962c) = param_5;
  return 0;
}

struct C_0176a43f {
    void sub_0176a43f(undefined4, undefined4, undefined4);
    int sub_01781b66(int, int, int, int);
};

int sub_01769471(void);
// @baa 0x0176a43f
void C_0176a43f::sub_0176a43f(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(char *)(param_1 + 0x16) == '\0') && (iVar1 = sub_01769471(), iVar1 != 0)) {
    return;
  }
  ((C_0176a43f *)((*(char **)((char *)this + 0x93d4))))->sub_01781b66(param_2, param_3, 0, param_4);
  return;
}

struct C_0176a63c {
    void sub_0176a63c(undefined4);
    int sub_01781149(int);
};

// @baa 0x0176a63c
void C_0176a63c::sub_0176a63c(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if ((*(char *)(param_1 + 0x16) == '\0') && (iVar1 = sub_01769471(), iVar1 != 0)) {
    return;
  }
  ((C_0176a63c *)((*(char **)((char *)this + 0x93d4))))->sub_01781149(param_2);
  return;
}

struct C_0176a6fa {
    undefined4 sub_0176a6fa(undefined4 *);
};

// @baa 0x0176a6fa
undefined4 C_0176a6fa::sub_0176a6fa(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x4f8);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0176ab07 {
    undefined4 sub_0176ab07(undefined4 *);
};

// @baa 0x0176ab07
undefined4 C_0176ab07::sub_0176ab07(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x93c0);
    uVar1 = 0;
  }
  return uVar1;
}

// @baa 0x0176ad47
DWORD __stdcall sub_0176ad47(DWORD a1)
{
    return 0x4f;
}

// @baa 0x0176ad4d
DWORD __stdcall sub_0176ad4d(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return 0x4f;
}

struct C_0176b496 {
    undefined4 sub_0176b496();
};

int sub_01782a6b(...);
// @baa 0x0176b496
undefined4 C_0176b496::sub_0176b496(void)
{
    int param_1 = (int)this;

  sub_01782a6b(*(undefined4 *)(param_1 + 0x115c));
  return 0;
}

struct C_0176b4a5 {
    undefined4 sub_0176b4a5();
};

int sub_01782a83(...);
// @baa 0x0176b4a5
undefined4 C_0176b4a5::sub_0176b4a5(void)
{
    int param_1 = (int)this;

  sub_01782a83(*(undefined4 *)(param_1 + 0x115c));
  return 0;
}

// @baa 0x0176b4d9
DWORD __stdcall sub_0176b4d9(DWORD a1)
{
    return 0x4f;
}

// @baa 0x0176b4eb
// External/FMOD/src/fmod_systemi.cpp
int __stdcall sub_0176b4eb(int a, int b, int c)
{
    return 0x4f;
}

// @baa 0x0176b4f7
DWORD __stdcall sub_0176b4f7(int a, int b) { return 0x4f; }

// @baa 0x0176b4fd
DWORD __stdcall sub_0176b4fd(int a, int b) { return 0x4f; }

struct S0 { int sub_0176b759(int a1); };

// @baa 0x0176b759
int S0::sub_0176b759(int a1) { int x; x = 0x4f; return x; }

// @baa 0x0176b75f
DWORD __stdcall sub_0176b75f(int a, int b) { return 0x4f; }

// @baa 0x0176b765
DWORD __stdcall sub_0176b765(DWORD a)
{
    return 0x4f;
}

// @baa 0x0176b76b
DWORD __stdcall sub_0176b76b(DWORD arg1) {
  return 0x4f;
}

struct C_0176ff1f {
    undefined4 sub_0176ff1f(byte);
};

int sub_00402660(...);
int sub_0176fed0(void);
// @baa 0x0176ff1f
undefined4 C_0176ff1f::sub_0176ff1f(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0176fed0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0177151e {
    void sub_0177151e();
};

// @baa 0x0177151e
void C_0177151e::sub_0177151e(void)
{
    int * param_1 = (int *)this;

  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  param_1[3] = -1;
  param_1[2] = 0;
  param_1[1] = (int)param_1;
  *param_1 = (int)param_1;
  return;
}

struct C_0177153b {
    void sub_0177153b(undefined4 *, int, uint);
};

// @baa 0x0177153b
void C_0177153b::sub_0177153b(undefined4 * param_2, int param_3, uint param_4)
{
    undefined4 * param_1 = (undefined4 *)this;

  int *piVar1;
  
  piVar1 = (int *)*param_2;
  do {
    if (param_4 < (uint)piVar1[3]) {
      param_1[3] = param_4;
      param_1[1] = piVar1[1];
      *param_1 = (undefined4)(piVar1);
      piVar1[1] = (int)param_1;
      *(undefined4 **)param_1[1] = param_1;
      return;
    }
    piVar1 = (int *)*piVar1;
  } while (piVar1[1] != param_3);
  return;
}

struct C_0177526d {
  void sub_01774f20(int arg);
  void sub_0177526d(void);
};

// @baa 0x0177526d
void C_0177526d::sub_0177526d(void)
{
  this->sub_01774f20(0x5f);
  return;
}

struct C_01780285 {
    undefined4 sub_01780285();
};

int sub_01782849(...);
// @baa 0x01780285
undefined4 C_01780285::sub_01780285(void)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = sub_01782849(iVar1);
    *(int *)(param_1 + 0x19c) = 0;
  }
  return uVar2;
}

struct C_01780325 {
    void sub_01780325(undefined4);
};

int sub_017828a0(...);
// @baa 0x01780325
void C_01780325::sub_01780325(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_017828a0(*(undefined4 *)(param_1 + 0x19c),param_2);
  return;
}

struct C_01780339 {
    void sub_01780339();
};

int sub_01782861(...);
// @baa 0x01780339
void C_01780339::sub_01780339(void)
{
    int param_1 = (int)this;

  sub_01782861(*(undefined4 *)(param_1 + 0x19c));
  return;
}

typedef uint size_t;

struct C_01780450 {
    undefined4 * sub_01780450();
    int sub_01796fef();
};

void * sub_01a37612(void *, int, size_t);
extern undefined4 g_023db680;
// @baa 0x01780450
undefined4 * C_01780450::sub_01780450(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01780450 *)(this))->sub_01796fef();
  *param_1 = (undefined4)((&g_023db680));
  sub_01a37612(param_1 + 0x14,0,0xac);
  param_1[0x40] = 0;
  return param_1;
}

struct C_0178267d {
    undefined4 sub_0178267d();
};

int sub_017828cb(...);
// @baa 0x0178267d
undefined4 C_0178267d::sub_0178267d(void)
{
    int param_1 = (int)this;

  sub_017828cb(param_1);
  *(undefined1 *)(param_1 + 0x34) = 1;
  return 0;
}

int sub_017839b3(...);
int sub_017839c8(...);
int sub_017839dd(void);
int sub_01783a04(...);
int sub_01783a25(...);
int sub_0178450b(...);
int sub_017975d8(...);
extern undefined4 g_025f1178;
extern undefined4 g_025f1448;
extern undefined4 g_025f1468;
extern undefined4 g_025f1470;
extern undefined4 g_025f1474;
extern undefined4 g_025f1478;
extern undefined4 g_025f147c;
extern undefined4 g_025f1484;
extern undefined4 g_025f1488;
extern undefined4 g_025f148c;
extern undefined4 g_025f1490;
extern undefined4 g_025f14b4;
extern undefined4 g_025f14b8;
extern undefined4 g_025f14bc;
// @baa 0x01784520
undefined * sub_01784520(void)
{
  sub_01a37612(&g_025f1448,0,0x94);
  sub_017975d8(&g_025f1448,"SFX Reverb");
  g_025f14bc = 0;
  g_025f1468 = 0x10100;
  g_025f1470 = (undefined4)(&sub_0178450b);
  g_025f1474 = (undefined4)(&sub_017839b3);
  g_025f1478 = (undefined4)(&sub_017839c8);
  g_025f147c = (undefined4)(sub_017839dd);
  g_025f1484 = 0xf;
  g_025f1488 = (undefined4)(&g_025f1178);
  g_025f148c = (undefined4)(&sub_01783a04);
  g_025f1490 = (undefined4)(&sub_01783a25);
  g_025f14b4 = 0x12;
  g_025f14b8 = 0x760;
  return (undefined *)(&g_025f1448);
}

int sub_01784a6d(...);
int sub_01784a82(void);
int sub_01784aa9(...);
int sub_01784aca(...);
extern undefined4 g_025f14e8;
extern undefined4 g_025f15a8;
extern undefined4 g_025f15c8;
extern undefined4 g_025f15d0;
extern undefined4 g_025f15dc;
extern undefined4 g_025f15e4;
extern undefined4 g_025f15e8;
extern undefined4 g_025f15ec;
extern undefined4 g_025f15f0;
extern undefined4 g_025f1614;
extern undefined4 g_025f1618;
extern undefined4 g_025f161c;
// @baa 0x01784aeb
undefined * sub_01784aeb(void)
{
  sub_01a37612(&g_025f15a8,0,0x94);
  sub_017975d8(&g_025f15a8,"FMOD Compressor");
  g_025f161c = 0;
  g_025f15c8 = 0x10100;
  g_025f15d0 = (undefined4)(&sub_01784a6d);
  g_025f15dc = (undefined4)(sub_01784a82);
  g_025f15e4 = 4;
  g_025f15e8 = (undefined4)(&g_025f14e8);
  g_025f15ec = (undefined4)(&sub_01784aa9);
  g_025f15f0 = (undefined4)(&sub_01784aca);
  g_025f1614 = 0x11;
  g_025f1618 = 400;
  return (undefined *)(&g_025f15a8);
}

int sub_01785094(...);
int sub_017850a9(...);
int sub_017850be(...);
int sub_017850d3(void);
int sub_017850fa(...);
int sub_0178511b(...);
extern undefined4 g_025f1648;
extern undefined4 g_025f1738;
extern undefined4 g_025f1758;
extern undefined4 g_025f1760;
extern undefined4 g_025f1764;
extern undefined4 g_025f1768;
extern undefined4 g_025f176c;
extern undefined4 g_025f1774;
extern undefined4 g_025f1778;
extern undefined4 g_025f177c;
extern undefined4 g_025f1780;
extern undefined4 g_025f17a4;
extern undefined4 g_025f17a8;
extern undefined4 g_025f17ac;
// @baa 0x0178513c
undefined * sub_0178513c(void)
{
  sub_01a37612(&g_025f1738,0,0x94);
  sub_017975d8(&g_025f1738,"FMOD IT Echo");
  g_025f17ac = 0;
  g_025f1758 = 0x10100;
  g_025f1760 = (undefined4)(&sub_01785094);
  g_025f1764 = (undefined4)(&sub_017850a9);
  g_025f1768 = (undefined4)(&sub_017850be);
  g_025f176c = (undefined4)(sub_017850d3);
  g_025f1774 = 5;
  g_025f1778 = (undefined4)(&g_025f1648);
  g_025f177c = (undefined4)(&sub_017850fa);
  g_025f1780 = (undefined4)(&sub_0178511b);
  g_025f17a4 = 0x10;
  g_025f17a8 = 0x168;
  return (undefined *)(&g_025f1738);
}

int sub_01785559(...);
int sub_0178556e(...);
int sub_01785583(...);
int sub_01785598(void);
int sub_017855bf(...);
int sub_017855e0(...);
extern undefined4 g_025f17d8;
extern undefined4 g_025f1900;
extern undefined4 g_025f1920;
extern undefined4 g_025f1928;
extern undefined4 g_025f192c;
extern undefined4 g_025f1930;
extern undefined4 g_025f1934;
extern undefined4 g_025f193c;
extern undefined4 g_025f1940;
extern undefined4 g_025f1944;
extern undefined4 g_025f1948;
extern undefined4 g_025f196c;
extern undefined4 g_025f1970;
extern undefined4 g_025f1974;
extern undefined4 g_025f1978;
// @baa 0x01785601
undefined * sub_01785601(void)
{
  sub_01a37612(&g_025f1900,0,0x94);
  sub_017975d8(&g_025f1900,"FMOD Reverb");
  g_025f1974 = 0;
  g_025f1978 = 0;
  g_025f1920 = 0x10100;
  g_025f1928 = (undefined4)(&sub_01785559);
  g_025f192c = (undefined4)(&sub_0178556e);
  g_025f1930 = (undefined4)(&sub_01785583);
  g_025f1934 = (undefined4)(sub_01785598);
  g_025f193c = 6;
  g_025f1940 = (undefined4)(&g_025f17d8);
  g_025f1944 = (undefined4)(&sub_017855bf);
  g_025f1948 = (undefined4)(&sub_017855e0);
  g_025f196c = 0xd;
  g_025f1970 = 0x1913c;
  return (undefined *)(&g_025f1900);
}

struct C_017858d1 {
    undefined4 sub_017858d1();
};

// @baa 0x017858d1
undefined4 C_017858d1::sub_017858d1(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    sub_01a37612(*(void **)(param_1 + 0x148),0,*(size_t *)(param_1 + 0x154));
  }
  return 0;
}

int sub_01785ff2(...);
int sub_01786007(...);
int sub_0178601c(...);
int sub_01786031(void);
int sub_01786058(...);
int sub_01786079(...);
extern undefined4 g_025f19a0;
extern undefined4 g_025f1b20;
extern undefined4 g_025f1b40;
extern undefined4 g_025f1b48;
extern undefined4 g_025f1b4c;
extern undefined4 g_025f1b50;
extern undefined4 g_025f1b54;
extern undefined4 g_025f1b5c;
extern undefined4 g_025f1b60;
extern undefined4 g_025f1b64;
extern undefined4 g_025f1b68;
extern undefined4 g_025f1b8c;
extern undefined4 g_025f1b90;
extern undefined4 g_025f1b94;
// @baa 0x0178609a
undefined * sub_0178609a(void)
{
  sub_01a37612(&g_025f1b20,0,0x94);
  sub_017975d8(&g_025f1b20,"FMOD Chorus");
  g_025f1b94 = 0;
  g_025f1b40 = 0x10100;
  g_025f1b48 = (undefined4)(&sub_01785ff2);
  g_025f1b4c = (undefined4)(&sub_01786007);
  g_025f1b50 = (undefined4)(&sub_0178601c);
  g_025f1b54 = (undefined4)(sub_01786031);
  g_025f1b5c = 8;
  g_025f1b60 = (undefined4)(&g_025f19a0);
  g_025f1b64 = (undefined4)(&sub_01786058);
  g_025f1b68 = (undefined4)(&sub_01786079);
  g_025f1b8c = 0xc;
  g_025f1b90 = 0x8178;
  return (undefined *)(&g_025f1b20);
}

int sub_01787cc5(...);
int sub_01788cd8(...);
int sub_01788ced(void);
int sub_01788d14(...);
int sub_01788d35(...);
int sub_01788e11(...);
extern undefined4 g_025f2528;
extern undefined4 g_025f25b8;
extern undefined4 g_025f25d8;
extern undefined4 g_025f25e0;
extern undefined4 g_025f25e8;
extern undefined4 g_025f25ec;
extern undefined4 g_025f25f4;
extern undefined4 g_025f25f8;
extern undefined4 g_025f25fc;
extern undefined4 g_025f2600;
extern undefined4 g_025f2624;
extern undefined4 g_025f2628;
extern undefined4 g_025f262c;
extern undefined4 g_025f2648;
// @baa 0x01788e26
undefined * sub_01788e26(void)
{
  sub_01a37612(&g_025f25b8,0,0x94);
  sub_017975d8(&g_025f25b8,"FMOD ParamEQ");
  g_025f262c = 0;
  g_025f25d8 = 0x10100;
  g_025f25e0 = (undefined4)(&sub_01788e11);
  g_025f25e8 = (undefined4)(&sub_01788cd8);
  g_025f25ec = (undefined4)(sub_01788ced);
  g_025f25f4 = 3;
  g_025f25f8 = (undefined4)(&g_025f2528);
  g_025f25fc = (undefined4)(&sub_01788d14);
  g_025f2600 = (undefined4)(&sub_01788d35);
  g_025f2624 = 10;
  g_025f2628 = 600;
  g_025f2648 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f25b8);
}

int sub_01789159(...);
int sub_0178916e(...);
int sub_01789183(...);
int sub_01789198(void);
int sub_017891bf(...);
int sub_017891e0(...);
extern undefined4 g_025f2658;
extern undefined4 g_025f26e8;
extern undefined4 g_025f2708;
extern undefined4 g_025f2710;
extern undefined4 g_025f2714;
extern undefined4 g_025f2718;
extern undefined4 g_025f271c;
extern undefined4 g_025f2724;
extern undefined4 g_025f2728;
extern undefined4 g_025f272c;
extern undefined4 g_025f2730;
extern undefined4 g_025f2754;
extern undefined4 g_025f2758;
extern undefined4 g_025f275c;
extern undefined4 g_025f2778;
// @baa 0x01789201
undefined * sub_01789201(void)
{
  sub_01a37612(&g_025f26e8,0,0x94);
  sub_017975d8(&g_025f26e8,"FMOD Normalize");
  g_025f275c = 0;
  g_025f2708 = 0x10100;
  g_025f2710 = (undefined4)(&sub_01789159);
  g_025f2714 = (undefined4)(&sub_0178916e);
  g_025f2718 = (undefined4)(&sub_01789183);
  g_025f271c = (undefined4)(sub_01789198);
  g_025f2724 = 3;
  g_025f2728 = (undefined4)(&g_025f2658);
  g_025f272c = (undefined4)(&sub_017891bf);
  g_025f2730 = (undefined4)(&sub_017891e0);
  g_025f2754 = 9;
  g_025f2758 = 0x144;
  g_025f2778 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f26e8);
}

int sub_0178979f(...);
int sub_017897b4(...);
int sub_017897c9(...);
int sub_017897de(void);
int sub_01789805(...);
int sub_01789826(...);
extern undefined4 g_025f2784;
extern undefined4 g_025f27b8;
extern undefined4 g_025f27d8;
extern undefined4 g_025f27e0;
extern undefined4 g_025f27e4;
extern undefined4 g_025f27e8;
extern undefined4 g_025f27ec;
extern undefined4 g_025f27f4;
extern undefined4 g_025f27f8;
extern undefined4 g_025f27fc;
extern undefined4 g_025f2800;
extern undefined4 g_025f2824;
extern undefined4 g_025f2828;
extern undefined4 g_025f282c;
// @baa 0x01789847
undefined * sub_01789847(void)
{
  sub_01a37612(&g_025f27b8,0,0x94);
  sub_017975d8(&g_025f27b8,"FMOD Distortion");
  g_025f282c = 0;
  g_025f27d8 = 0x10100;
  g_025f27e0 = (undefined4)(&sub_0178979f);
  g_025f27e4 = (undefined4)(&sub_017897b4);
  g_025f27e8 = (undefined4)(&sub_017897c9);
  g_025f27ec = (undefined4)(sub_017897de);
  g_025f27f4 = 1;
  g_025f27f8 = (undefined4)(&g_025f2784);
  g_025f27fc = (undefined4)(&sub_01789805);
  g_025f2800 = (undefined4)(&sub_01789826);
  g_025f2824 = 8;
  g_025f2828 = 0x130;
  return (undefined *)(&g_025f27b8);
}

struct C_01789af3 {
    undefined4 sub_01789af3();
};

// @baa 0x01789af3
undefined4 C_01789af3::sub_01789af3(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    sub_01a37612(*(void **)(param_1 + 0x138),0,*(size_t *)(param_1 + 0x140));
  }
  return 0;
}

int sub_01789ec2(...);
int sub_01789ed7(...);
int sub_01789eec(...);
int sub_01789f01(void);
int sub_01789f28(...);
int sub_01789f49(...);
extern undefined4 g_025f2858;
extern undefined4 g_025f2918;
extern undefined4 g_025f2938;
extern undefined4 g_025f2940;
extern undefined4 g_025f2944;
extern undefined4 g_025f2948;
extern undefined4 g_025f294c;
extern undefined4 g_025f2954;
extern undefined4 g_025f2958;
extern undefined4 g_025f295c;
extern undefined4 g_025f2960;
extern undefined4 g_025f2984;
extern undefined4 g_025f2988;
extern undefined4 g_025f298c;
// @baa 0x01789f6a
undefined * sub_01789f6a(void)
{
  sub_01a37612(&g_025f2918,0,0x94);
  sub_017975d8(&g_025f2918,"FMOD Flange");
  g_025f298c = 0;
  g_025f2938 = 0x10100;
  g_025f2940 = (undefined4)(&sub_01789ec2);
  g_025f2944 = (undefined4)(&sub_01789ed7);
  g_025f2948 = (undefined4)(&sub_01789eec);
  g_025f294c = (undefined4)(sub_01789f01);
  g_025f2954 = 4;
  g_025f2958 = (undefined4)(&g_025f2858);
  g_025f295c = (undefined4)(&sub_01789f28);
  g_025f2960 = (undefined4)(&sub_01789f49);
  g_025f2984 = 7;
  g_025f2988 = 0x8158;
  return (undefined *)(&g_025f2918);
}

int sub_0178af81(...);
int sub_0178af96(...);
int sub_0178afab(void);
int sub_0178afd2(...);
int sub_0178aff3(...);
int sub_0178b1ab(...);
int sub_0178b1c0(...);
extern undefined4 g_025f29b8;
extern undefined4 g_025f2aa8;
extern undefined4 g_025f2ac8;
extern undefined4 g_025f2ad0;
extern undefined4 g_025f2ad4;
extern undefined4 g_025f2ad8;
extern undefined4 g_025f2adc;
extern undefined4 g_025f2ae4;
extern undefined4 g_025f2ae8;
extern undefined4 g_025f2aec;
extern undefined4 g_025f2af0;
extern undefined4 g_025f2b14;
extern undefined4 g_025f2b18;
extern undefined4 g_025f2b1c;
extern undefined4 g_025f2b38;
// @baa 0x0178b1d9
undefined * sub_0178b1d9(void)
{
  sub_01a37612(&g_025f2aa8,0,0x94);
  sub_017975d8(&g_025f2aa8,"FMOD Echo");
  g_025f2b1c = 0;
  g_025f2ac8 = 0x10100;
  g_025f2ad0 = (undefined4)(&sub_0178b1ab);
  g_025f2ad4 = (undefined4)(&sub_0178af81);
  g_025f2ad8 = (undefined4)(&sub_0178af96);
  g_025f2adc = (undefined4)(sub_0178afab);
  g_025f2ae4 = 5;
  g_025f2ae8 = (undefined4)(&g_025f29b8);
  g_025f2aec = (undefined4)(&sub_0178afd2);
  g_025f2af0 = (undefined4)(&sub_0178aff3);
  g_025f2b38 = (undefined4)(&sub_0178b1c0);
  g_025f2b14 = 6;
  g_025f2b18 = 0x178;
  return (undefined *)(&g_025f2aa8);
}

int sub_0178c09f(...);
int sub_0178c0b4(void);
int sub_0178c0db(...);
int sub_0178c0fc(...);
int sub_0178c1a9(...);
extern undefined4 g_025f2b48;
extern undefined4 g_025f2ba8;
extern undefined4 g_025f2bc8;
extern undefined4 g_025f2bd0;
extern undefined4 g_025f2bd8;
extern undefined4 g_025f2bdc;
extern undefined4 g_025f2be4;
extern undefined4 g_025f2be8;
extern undefined4 g_025f2bec;
extern undefined4 g_025f2bf0;
extern undefined4 g_025f2c14;
extern undefined4 g_025f2c18;
extern undefined4 g_025f2c1c;
extern undefined4 g_025f2c38;
// @baa 0x0178c1be
undefined * sub_0178c1be(void)
{
  sub_01a37612(&g_025f2ba8,0,0x94);
  sub_017975d8(&g_025f2ba8,"FMOD Highpass");
  g_025f2c1c = 0;
  g_025f2bc8 = 0x10100;
  g_025f2bd0 = (undefined4)(&sub_0178c1a9);
  g_025f2bd8 = (undefined4)(&sub_0178c09f);
  g_025f2bdc = (undefined4)(sub_0178c0b4);
  g_025f2be4 = 2;
  g_025f2be8 = (undefined4)(&g_025f2b48);
  g_025f2bec = (undefined4)(&sub_0178c0db);
  g_025f2bf0 = (undefined4)(&sub_0178c0fc);
  g_025f2c14 = 5;
  g_025f2c18 = 0x250;
  g_025f2c38 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f2ba8);
}

int sub_0178cdc6(...);
int sub_0178cddb(void);
int sub_0178ce02(...);
int sub_0178ce23(...);
int sub_0178ceb5(...);
extern undefined4 g_025f2c44;
extern undefined4 g_025f2c78;
extern undefined4 g_025f2c98;
extern undefined4 g_025f2ca0;
extern undefined4 g_025f2ca8;
extern undefined4 g_025f2cac;
extern undefined4 g_025f2cb4;
extern undefined4 g_025f2cb8;
extern undefined4 g_025f2cbc;
extern undefined4 g_025f2cc0;
extern undefined4 g_025f2ce4;
extern undefined4 g_025f2ce8;
extern undefined4 g_025f2cec;
extern undefined4 g_025f2d08;
// @baa 0x0178ceca
undefined * sub_0178ceca(void)
{
  sub_01a37612(&g_025f2c78,0,0x94);
  sub_017975d8(&g_025f2c78,"FMOD Lowpass Simple");
  g_025f2cec = 0;
  g_025f2c98 = 0x10100;
  g_025f2ca0 = (undefined4)(&sub_0178ceb5);
  g_025f2ca8 = (undefined4)(&sub_0178cdc6);
  g_025f2cac = (undefined4)(sub_0178cddb);
  g_025f2cb4 = 1;
  g_025f2cb8 = (undefined4)(&g_025f2c44);
  g_025f2cbc = (undefined4)(&sub_0178ce02);
  g_025f2cc0 = (undefined4)(&sub_0178ce23);
  g_025f2ce4 = 0x13;
  g_025f2ce8 = 0x1b8;
  g_025f2d08 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f2c78);
}

int sub_0178dab1(...);
int sub_0178dac6(void);
int sub_0178daed(...);
int sub_0178db0e(...);
int sub_0178dbbb(...);
extern undefined4 g_025f2d18;
extern undefined4 g_025f2d78;
extern undefined4 g_025f2d98;
extern undefined4 g_025f2da0;
extern undefined4 g_025f2da8;
extern undefined4 g_025f2dac;
extern undefined4 g_025f2db4;
extern undefined4 g_025f2db8;
extern undefined4 g_025f2dbc;
extern undefined4 g_025f2dc0;
extern undefined4 g_025f2de4;
extern undefined4 g_025f2de8;
extern undefined4 g_025f2dec;
extern undefined4 g_025f2e08;
// @baa 0x0178dbd0
undefined * sub_0178dbd0(void)
{
  sub_01a37612(&g_025f2d78,0,0x94);
  sub_017975d8(&g_025f2d78,"FMOD IT Lowpass");
  g_025f2dec = 0;
  g_025f2d98 = 0x10100;
  g_025f2da0 = (undefined4)(&sub_0178dbbb);
  g_025f2da8 = (undefined4)(&sub_0178dab1);
  g_025f2dac = (undefined4)(sub_0178dac6);
  g_025f2db4 = 2;
  g_025f2db8 = (undefined4)(&g_025f2d18);
  g_025f2dbc = (undefined4)(&sub_0178daed);
  g_025f2dc0 = (undefined4)(&sub_0178db0e);
  g_025f2de4 = 4;
  g_025f2de8 = 0x1c4;
  g_025f2e08 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f2d78);
}

int sub_0178e01e(...);
int sub_0178e03f(...);
int sub_0178f38d(...);
int sub_0178f3a2(void);
extern undefined4 g_025f2e18;
extern undefined4 g_025f2e78;
extern undefined4 g_025f2e98;
extern undefined4 g_025f2ea0;
extern undefined4 g_025f2eac;
extern undefined4 g_025f2eb4;
extern undefined4 g_025f2eb8;
extern undefined4 g_025f2ebc;
extern undefined4 g_025f2ec0;
extern undefined4 g_025f2ee4;
extern undefined4 g_025f2ee8;
extern undefined4 g_025f2eec;
extern undefined4 g_025f2f08;
// @baa 0x0178f3c9
undefined * sub_0178f3c9(void)
{
  sub_01a37612(&g_025f2e78,0,0x94);
  sub_017975d8(&g_025f2e78,"FMOD Lowpass");
  g_025f2eec = 0;
  g_025f2e98 = 0x10100;
  g_025f2ea0 = (undefined4)(&sub_0178f38d);
  g_025f2eac = (undefined4)(sub_0178f3a2);
  g_025f2eb4 = 2;
  g_025f2eb8 = (undefined4)(&g_025f2e18);
  g_025f2ebc = (undefined4)(&sub_0178e01e);
  g_025f2ec0 = (undefined4)(&sub_0178e03f);
  g_025f2ee4 = 3;
  g_025f2ee8 = 0x294;
  g_025f2f08 = (undefined4)(&sub_01787cc5);
  return (undefined *)(&g_025f2e78);
}

int sub_017911e7(...);
int sub_017911fc(...);
int sub_01792125(...);
int sub_01792142(...);
extern undefined4 g_025f3528;
extern undefined4 g_025f352c;
extern undefined4 g_025f3534;
extern undefined4 g_025f3538;
extern undefined4 g_025f353c;
extern undefined4 g_025f3540;
extern undefined4 g_025f3548;
extern undefined4 g_025f3568;
extern undefined4 g_025f356c;
// @baa 0x01792163
undefined * sub_01792163(void)
{
  sub_01a37612(&g_025f3528,0,0x70);
  g_025f3528 = (undefined4)("FMOD DLS Codec");
  g_025f352c = 0x10100;
  g_025f3534 = 2;
  g_025f3538 = (undefined4)(&sub_01792125);
  g_025f353c = (undefined4)(&sub_017911e7);
  g_025f3540 = (undefined4)(&sub_017911fc);
  g_025f3548 = (undefined4)(&sub_01792142);
  g_025f3568 = 6;
  g_025f356c = 0x124;
  return (undefined *)(&g_025f3528);
}

int sub_017924a7(...);
int sub_017924bc(...);
int sub_01792c59(...);
int sub_01792c76(...);
extern undefined4 g_025f35a0;
extern undefined4 g_025f35a4;
extern undefined4 g_025f35ac;
extern undefined4 g_025f35b0;
extern undefined4 g_025f35b4;
extern undefined4 g_025f35b8;
extern undefined4 g_025f35c0;
extern undefined4 g_025f35e0;
extern undefined4 g_025f35e4;
// @baa 0x01792c97
undefined * sub_01792c97(void)
{
  sub_01a37612(&g_025f35a0,0,0x70);
  g_025f35ac = 2;
  g_025f35e0 = 2;
  g_025f35a0 = (undefined4)("FMOD AIFF Codec");
  g_025f35a4 = 0x10100;
  g_025f35b0 = (undefined4)(&sub_01792c59);
  g_025f35b4 = (undefined4)(&sub_017924a7);
  g_025f35b8 = (undefined4)(&sub_017924bc);
  g_025f35c0 = (undefined4)(&sub_01792c76);
  g_025f35e4 = 0x108;
  return (undefined *)(&g_025f35a0);
}

int sub_01794225(...);
int sub_0179423a(...);
int sub_0179424f(...);
int sub_0179482c(...);
int sub_01794849(...);
int sub_017954d2(...);
int sub_017954f3(...);
int sub_01795514(...);
int sub_01795531(...);
int sub_017964a4(...);
extern undefined4 g_025f3690;
extern undefined4 g_025f3694;
extern undefined4 g_025f369c;
extern undefined4 g_025f36a0;
extern undefined4 g_025f36a4;
extern undefined4 g_025f36a8;
extern undefined4 g_025f36b0;
extern undefined4 g_025f36b4;
extern undefined4 g_025f36b8;
extern undefined4 g_025f36bc;
extern undefined4 g_025f36d0;
extern undefined4 g_025f36d4;
extern undefined4 g_025f36e0;
extern undefined4 g_025f36e4;
extern undefined4 g_025f36fc;
// @baa 0x017964c1
undefined * sub_017964c1(void)
{
  sub_01a37612(&g_025f3690,0,0x70);
  g_025f3690 = (undefined4)("FMOD FSB Codec");
  g_025f3694 = 0x10100;
  g_025f369c = 10;
  g_025f36a0 = (undefined4)(&sub_017964a4);
  g_025f36a4 = (undefined4)(&sub_01794225);
  g_025f36a8 = (undefined4)(&sub_017954d2);
  g_025f36b0 = (undefined4)(&sub_017954f3);
  g_025f36b4 = (undefined4)(&sub_01795514);
  g_025f36b8 = (undefined4)(&sub_01795531);
  g_025f36bc = (undefined4)(&sub_0179482c);
  g_025f36e0 = (undefined4)(&sub_0179423a);
  g_025f36e4 = (undefined4)(&sub_0179424f);
  g_025f36fc = (undefined4)(&sub_01794849);
  g_025f36d0 = 8;
  g_025f36d4 = 0x168;
  return (undefined *)(&g_025f3690);
}

int sub_017965ef(...);
int sub_01796608(...);
int sub_01796629(...);
int sub_01796646(...);
int sub_0179665b(...);
int sub_01796780(void);
extern undefined4 g_025f3758;
extern undefined4 g_025f375c;
extern undefined4 g_025f3760;
extern undefined4 g_025f3764;
extern undefined4 g_025f3768;
extern undefined4 g_025f376c;
extern undefined4 g_025f3770;
extern undefined4 g_025f3774;
extern undefined4 g_025f3778;
extern undefined4 g_025f3798;
extern undefined4 g_025f379c;
// @baa 0x017967b0
undefined * sub_017967b0(void)
{
  sub_01a37612(&g_025f3758,0,0xac);
  g_025f3760 = 0;
  g_025f3758 = (undefined4)("FMOD NoSound Output - Non real-time");
  g_025f375c = 0x10100;
  g_025f3764 = (undefined4)(&sub_017965ef);
  g_025f3768 = (undefined4)(&sub_01796608);
  g_025f376c = (undefined4)(&sub_01796629);
  g_025f3770 = (undefined4)(sub_01796780);
  g_025f3774 = (undefined4)(&sub_01796646);
  g_025f3778 = (undefined4)(&sub_0179665b);
  g_025f3798 = 4;
  g_025f379c = 0x104;
  return (undefined *)(&g_025f3758);
}

int sub_0179694f(...);
int sub_01796968(...);
int sub_01796989(...);
int sub_017969a6(...);
int sub_017969bb(...);
int sub_017969d4(void);
int sub_01796b22(void);
extern undefined4 g_025f3810;
extern undefined4 g_025f3814;
extern undefined4 g_025f3818;
extern undefined4 g_025f381c;
extern undefined4 g_025f3820;
extern undefined4 g_025f3824;
extern undefined4 g_025f3828;
extern undefined4 g_025f382c;
extern undefined4 g_025f3838;
extern undefined4 g_025f383c;
extern undefined4 g_025f3850;
extern undefined4 g_025f3854;
// @baa 0x01796b52
undefined * sub_01796b52(void)
{
  sub_01a37612(&g_025f3810,0,0xac);
  g_025f3810 = (undefined4)("FMOD NoSound Output");
  g_025f3814 = 0x10100;
  g_025f3818 = 1;
  g_025f381c = (undefined4)(&sub_0179694f);
  g_025f3820 = (undefined4)(&sub_01796968);
  g_025f3824 = (undefined4)(&sub_01796989);
  g_025f3828 = (undefined4)(sub_01796b22);
  g_025f382c = (undefined4)(&sub_017969a6);
  g_025f3838 = (undefined4)(&sub_017969bb);
  g_025f383c = (undefined4)(sub_017969d4);
  g_025f3850 = 2;
  g_025f3854 = 0x23c;
  return (undefined *)(&g_025f3810);
}

// @baa 0x0179b903
undefined4 sub_0179b903(int param_1, int * param_2)
{
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  if (param_1 == 0) {
    return 0x24;
  }
  *param_2 = param_1;
  return 0;
}

struct C_017ac236 {
    undefined4 sub_017ac236(undefined4 *);
};

// @baa 0x017ac236
undefined4 C_017ac236::sub_017ac236(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x220);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017ac5c8 {
    undefined4 sub_017ac5c8(int, undefined4, int *, undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x017ac5c8
undefined4 C_017ac5c8::sub_017ac5c8(int param_2, undefined4 param_3, int * param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 700) == 0) {
    uVar1 = 0x25;
  }
  else {
    *param_4 = *(int *)(param_1 + 700) + param_2;
    *param_6 = param_3;
    *param_5 = 0;
    *param_7 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

// @baa 0x017ac73a
int __stdcall sub_017ac73a(int a, int b)
{
    return 0x10;
}

int sub_017b6db6(...);
int sub_017b6dcf(...);
int sub_017b6df0(...);
int sub_017b6e0d(...);
int sub_017b6e22(...);
int sub_017b6e37(...);
int sub_017b6e4c(...);
int sub_017b7413(void);
extern undefined4 g_025f6398;
extern undefined4 g_025f639c;
extern undefined4 g_025f63a0;
extern undefined4 g_025f63a4;
extern undefined4 g_025f63a8;
extern undefined4 g_025f63ac;
extern undefined4 g_025f63b0;
extern undefined4 g_025f63b4;
extern undefined4 g_025f63bc;
extern undefined4 g_025f63d8;
extern undefined4 g_025f63dc;
extern undefined4 g_025f63fc;
extern undefined4 g_025f6400;
// @baa 0x017b7443
undefined * sub_017b7443(void)
{
  sub_01a37612(&g_025f6398,0,0xac);
  g_025f63a0 = 0;
  g_025f6398 = (undefined4)("FMOD ASIO Output");
  g_025f639c = 0x10100;
  g_025f63a4 = (undefined4)(&sub_017b6db6);
  g_025f63a8 = (undefined4)(&sub_017b6dcf);
  g_025f63ac = (undefined4)(&sub_017b6df0);
  g_025f63b0 = (undefined4)(sub_017b7413);
  g_025f63b4 = (undefined4)(&sub_017b6e0d);
  g_025f63fc = (undefined4)(&sub_017b6e22);
  g_025f6400 = (undefined4)(&sub_017b6e37);
  g_025f63bc = (undefined4)(&sub_017b6e4c);
  g_025f63d8 = 10;
  g_025f63dc = 0x138;
  return (undefined *)(&g_025f6398);
}

int sub_017b8370(...);
int sub_017b8389(void);
int sub_017b83ad(void);
int sub_017b83d4(...);
int sub_017b83e9(...);
int sub_017b83fe(...);
int sub_017b8e21(void);
int sub_017b8e5a(...);
extern undefined4 g_025f6450;
extern undefined4 g_025f6454;
extern undefined4 g_025f6458;
extern undefined4 g_025f645c;
extern undefined4 g_025f646c;
extern undefined4 g_025f6474;
extern undefined4 g_025f6490;
extern undefined4 g_025f6494;
extern undefined4 g_025f64a4;
extern undefined4 g_025f64a8;
extern undefined4 g_025f64b0;
extern undefined4 g_025f64b4;
extern undefined4 g_025f64b8;
// @baa 0x017b8e6f
undefined * sub_017b8e6f(void)
{
  sub_01a37612(&g_025f6450,0,0xac);
  g_025f6458 = 0;
  g_025f6450 = (undefined4)("FMOD WASAPI Output");
  g_025f6454 = 0x10100;
  g_025f6490 = 9;
  g_025f6494 = 0x59c;
  g_025f645c = (undefined4)(&sub_017b8370);
  g_025f64a4 = (undefined4)(sub_017b8389);
  g_025f64a8 = (undefined4)(sub_017b83ad);
  g_025f64b0 = (undefined4)(sub_017b8e21);
  g_025f646c = (undefined4)(&sub_017b83d4);
  g_025f64b4 = (undefined4)(&sub_017b8e5a);
  g_025f64b8 = (undefined4)(&sub_017b83e9);
  g_025f6474 = (undefined4)(&sub_017b83fe);
  return (undefined *)(&g_025f6450);
}

int sub_017b932b(...);
int sub_017b9344(...);
int sub_017b9365(...);
int sub_017b9382(...);
int sub_017b9397(...);
int sub_017b93ac(...);
int sub_017b93c1(...);
int sub_017b93da(...);
int sub_017b93f3(void);
int sub_017b9739(void);
extern undefined4 g_025f6508;
extern undefined4 g_025f650c;
extern undefined4 g_025f6510;
extern undefined4 g_025f6514;
extern undefined4 g_025f6518;
extern undefined4 g_025f651c;
extern undefined4 g_025f6520;
extern undefined4 g_025f6524;
extern undefined4 g_025f652c;
extern undefined4 g_025f6530;
extern undefined4 g_025f6534;
extern undefined4 g_025f6548;
extern undefined4 g_025f654c;
extern undefined4 g_025f656c;
extern undefined4 g_025f6570;
// @baa 0x017b9769
undefined * sub_017b9769(void)
{
  sub_01a37612(&g_025f6508,0,0xac);
  g_025f6508 = (undefined4)("FMOD WinMM Output");
  g_025f650c = 0x10100;
  g_025f6510 = 1;
  g_025f6514 = (undefined4)(&sub_017b932b);
  g_025f6518 = (undefined4)(&sub_017b9344);
  g_025f651c = (undefined4)(&sub_017b9365);
  g_025f6520 = (undefined4)(sub_017b9739);
  g_025f6524 = (undefined4)(&sub_017b9382);
  g_025f656c = (undefined4)(&sub_017b9397);
  g_025f6570 = (undefined4)(&sub_017b93ac);
  g_025f652c = (undefined4)(&sub_017b93c1);
  g_025f6530 = (undefined4)(&sub_017b93da);
  g_025f6534 = (undefined4)(sub_017b93f3);
  g_025f6548 = 7;
  g_025f654c = 0x270;
  return (undefined *)(&g_025f6508);
}

struct C_017c8e0b {
    void sub_017c8e0b(undefined4, undefined4);
};

// @baa 0x017c8e0b
void C_017c8e0b::sub_017c8e0b(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

struct C_017c8e57 {
    char pad[0xc];
    DWORD d;
    DWORD sub_017c8e57();
};

// @baa 0x017c8e57
DWORD C_017c8e57::sub_017c8e57() {
    d &= 0;
    return (DWORD)this;
}

struct C_017c8e5e {
    void sub_017c8e5e(undefined4, undefined4);
};

// @baa 0x017c8e5e
void C_017c8e5e::sub_017c8e5e(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

struct C_017c8dff
{
    INT pad_00;
    float Value;
    INT pad_08[4];
    DWORD Flags;

    C_017c8dff();
};

// @baa 0x017c8dff
C_017c8dff::C_017c8dff()
{
    Value = 0.0f;
    Flags &= 0;
}
