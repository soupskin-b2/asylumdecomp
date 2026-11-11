// Editor_0450000.cpp (part 1 of 2): 61 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_0045f860();
};

int sub_0048af70(void);
extern undefined * g_01e52d94;
// @baa 0x0045f860
undefined4 * C::sub_0045f860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e52d94);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

// @baa 0x0045f880
void __stdcall sub_0045f880(int a0) {  }

struct C_0045f890 {
    void sub_0045f890();
};

int sub_0048b010(void);
// @baa 0x0045f890
void C_0045f890::sub_0045f890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e52d94);
  sub_0048b010();
  return;
}

struct C_0045f8a0 { int sub_0045f8a0(void); };

// @baa 0x0045f8a0
int C_0045f8a0::sub_0045f8a0(void) { return *(int*)((char*)this + 4); }

struct C_0045f8b0 { int sub_0045f8b0(void); };

// @baa 0x0045f8b0
int C_0045f8b0::sub_0045f8b0(void) { return *(int*)((char*)this + 4); }

struct C_0045f8c0 { int sub_0045f8c0(void); };

// @baa 0x0045f8c0
int C_0045f8c0::sub_0045f8c0(void) { return *(int*)((char*)this + 4); }

struct C_0045f8d0 {
    void sub_0045f8d0();
};

int sub_0053dfa0(...);
// @baa 0x0045f8d0
void C_0045f8d0::sub_0045f8d0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 != param_1 + 4) && (iVar1 != 0)) {
    sub_0053dfa0(iVar1);
  }
  return;
}

struct C_0045f8f0 { int sub_0045f8f0(void); };

// @baa 0x0045f8f0
int C_0045f8f0::sub_0045f8f0(void) { return *(int*)((char*)this + 132); }

struct C_0045f900 {
    int *f;
    C_0045f900 *sub_0045f900();
};

// @baa 0x0045f900
C_0045f900 *C_0045f900::sub_0045f900()
{
    f = (int*)f[2];
    return this;
}

struct C_0045f910 { int sub_0045f910(void); };

// @baa 0x0045f910
int C_0045f910::sub_0045f910(void) { return *(int*)((char*)this + 0); }

struct C_0045f940 { int sub_0045f940(void); };

// @baa 0x0045f940
int C_0045f940::sub_0045f940(void) { return *(int*)((char*)this + 4); }

struct C_0045f950 { int sub_0045f950(void); };

// @baa 0x0045f950
int C_0045f950::sub_0045f950(void) { return *(int*)((char*)this + 0); }

struct C_0045f960 { int sub_0045f960(void); };

// @baa 0x0045f960
int C_0045f960::sub_0045f960(void) { return *(int*)((char*)this + 0); }

struct C_0045f970 { int sub_0045f970(void); };

// @baa 0x0045f970
int C_0045f970::sub_0045f970(void) { return *(int*)((char*)this + 0); }

struct C_0045f980 { int sub_0045f980(void); };

// @baa 0x0045f980
int C_0045f980::sub_0045f980(void) { return *(int*)((char*)this + 0); }

struct C_0045fa00 { int sub_0045fa00(void); };

// @baa 0x0045fa00
int C_0045fa00::sub_0045fa00(void) { return *(int*)((char*)this + 8); }

struct C_0045fa10 {
    int sub_0045fa10(int);
};

// @baa 0x0045fa10
int C_0045fa10::sub_0045fa10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0045fa80 { void sub_0045fa80(void); };

// @baa 0x0045fa80
void C_0045fa80::sub_0045fa80(void) { *(int*)((char*)this + 8) = 0; }

struct C_0045fa90 {
    int sub_0045fa90(int);
};

// @baa 0x0045fa90
int C_0045fa90::sub_0045fa90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

struct C_0045faa0 {
    bool sub_0045faa0();
};

// @baa 0x0045faa0
bool C_0045faa0::sub_0045faa0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_0045fab0 {
    int sub_0045fab0(int);
};

// @baa 0x0045fab0
int C_0045fab0::sub_0045fab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0045fac0
float10 sub_0045fac0(float * param_1)
{
  return (float10)*param_1 * (float10)*param_1;
}

struct C_0045fad0 {
    int sub_0045fad0(int);
};

// @baa 0x0045fad0
int C_0045fad0::sub_0045fad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_0045fae0 { int sub_0045fae0(void); };

// @baa 0x0045fae0
int C_0045fae0::sub_0045fae0(void) { return *(int*)((char*)this + 8); }

struct C_0045faf0 {
    int sub_0045faf0(int);
};

// @baa 0x0045faf0
int C_0045faf0::sub_0045faf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0045fb00 {
    int sub_0045fb00(int);
};

// @baa 0x0045fb00
int C_0045fb00::sub_0045fb00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0045fc50 { int sub_0045fc50(void); };

// @baa 0x0045fc50
int C_0045fc50::sub_0045fc50(void) { return *(int*)((char*)this + 8); }

struct C_0045fc60 {
    int sub_0045fc60(int);
};

// @baa 0x0045fc60
int C_0045fc60::sub_0045fc60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0045fc70 {
    int sub_0045fc70(int);
};

// @baa 0x0045fc70
int C_0045fc70::sub_0045fc70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0045fc80 {
    int sub_0045fc80();
};

// @baa 0x0045fc80
int C_0045fc80::sub_0045fc80(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + -0x10 + *param_1;
}

struct C_0045fc90 { int sub_0045fc90(void); };

// @baa 0x0045fc90
int C_0045fc90::sub_0045fc90(void) { return *(int*)((char*)this + 8); }

struct C_0045fca0 {
    int sub_0045fca0(int);
};

// @baa 0x0045fca0
int C_0045fca0::sub_0045fca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0045fcb0 {
    int sub_0045fcb0(int);
};

// @baa 0x0045fcb0
int C_0045fcb0::sub_0045fcb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0045fcc0();
};

// @baa 0x0045fcc0
S *S::sub_0045fcc0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0045fdd0 { int sub_0045fdd0(void); };

// @baa 0x0045fdd0
int C_0045fdd0::sub_0045fdd0(void) { return *(int*)((char*)this + 8); }

struct C_0045fde0 {
    int sub_0045fde0(int);
};

// @baa 0x0045fde0
int C_0045fde0::sub_0045fde0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0045fdf0 { int sub_0045fdf0(void); };

// @baa 0x0045fdf0
int C_0045fdf0::sub_0045fdf0(void) { return *(int*)((char*)this + 8); }

struct C_0045fe00 {
    int sub_0045fe00(int);
};

// @baa 0x0045fe00
int C_0045fe00::sub_0045fe00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0045fe10 { int sub_0045fe10(void); };

// @baa 0x0045fe10
int C_0045fe10::sub_0045fe10(void) { return *(int*)((char*)this + 8); }

struct C_0045fe20 {
    int sub_0045fe20(int);
};

// @baa 0x0045fe20
int C_0045fe20::sub_0045fe20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0045fe30 {
    int sub_0045fe30(int);
};

// @baa 0x0045fe30
int C_0045fe30::sub_0045fe30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0045fe40 { int sub_0045fe40(void); };

// @baa 0x0045fe40
int C_0045fe40::sub_0045fe40(void) { return *(int*)((char*)this + 8); }

struct C_0045fe50 {
    int sub_0045fe50(int);
};

// @baa 0x0045fe50
int C_0045fe50::sub_0045fe50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0045fe60 { int sub_0045fe60(void); };

// @baa 0x0045fe60
int C_0045fe60::sub_0045fe60(void) { return *(int*)((char*)this + 8); }

struct C_0045fe70 {
    int sub_0045fe70(int);
};

// @baa 0x0045fe70
int C_0045fe70::sub_0045fe70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x70 + *param_1;
}

struct C_0045fe80 { int sub_0045fe80(void); };

// @baa 0x0045fe80
int C_0045fe80::sub_0045fe80(void) { return *(int*)((char*)this + 8); }

struct C_0045fe90 {
    int sub_0045fe90(int);
};

// @baa 0x0045fe90
int C_0045fe90::sub_0045fe90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0045fec0 { int sub_0045fec0(void); };

// @baa 0x0045fec0
int C_0045fec0::sub_0045fec0(void) { return *(int*)((char*)this + 8); }

struct C_0045fed0 {
    int sub_0045fed0(int);
};

// @baa 0x0045fed0
int C_0045fed0::sub_0045fed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0045fee0 { int sub_0045fee0(void); };

// @baa 0x0045fee0
int C_0045fee0::sub_0045fee0(void) { return *(int*)((char*)this + 8); }

struct C_0045fef0 {
    int sub_0045fef0(int);
};

// @baa 0x0045fef0
int C_0045fef0::sub_0045fef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0045ff00 {
    int sub_0045ff00(int);
};

// @baa 0x0045ff00
int C_0045ff00::sub_0045ff00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0045ff70 { int sub_0045ff70(void); };

// @baa 0x0045ff70
int C_0045ff70::sub_0045ff70(void) { return *(int*)((char*)this + 8); }

struct C_0045ff80 {
    int sub_0045ff80(int);
};

// @baa 0x0045ff80
int C_0045ff80::sub_0045ff80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_0045ff90 { int sub_0045ff90(void); };

// @baa 0x0045ff90
int C_0045ff90::sub_0045ff90(void) { return *(int*)((char*)this + 8); }

struct C_0045ffa0 {
    int sub_0045ffa0(int);
};

// @baa 0x0045ffa0
int C_0045ffa0::sub_0045ffa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xe8 + *param_1;
}

struct C_0045ffb0 { int sub_0045ffb0(void); };

// @baa 0x0045ffb0
int C_0045ffb0::sub_0045ffb0(void) { return *(int*)((char*)this + 8); }

struct C_0045ffc0 {
    int sub_0045ffc0(int);
};

// @baa 0x0045ffc0
int C_0045ffc0::sub_0045ffc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0045ffd0 {
    int sub_0045ffd0();
};

// @baa 0x0045ffd0
int C_0045ffd0::sub_0045ffd0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -8 + param_1[2] * 8;
}

struct C_0045ffe0 { int sub_0045ffe0(void); };

// @baa 0x0045ffe0
int C_0045ffe0::sub_0045ffe0(void) { return *(int*)((char*)this + 8); }

struct C_0045fff0 {
    int sub_0045fff0(int);
};

// @baa 0x0045fff0
int C_0045fff0::sub_0045fff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}
