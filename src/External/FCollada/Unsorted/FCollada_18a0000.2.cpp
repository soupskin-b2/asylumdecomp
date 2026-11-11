// FCollada_18a0000.cpp (part 2 of 2): 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_01827850(int); C *sub_018a79e0(int); };

// @baa 0x018a79e0
C *C::sub_018a79e0(int a) { sub_01827850(a); return this; }

struct C_018a7a00 { void sub_01827850(int); C_018a7a00 *sub_018a7a00(int); };

// @baa 0x018a7a00
C_018a7a00 *C_018a7a00::sub_018a7a00(int a) { sub_01827850(a); return this; }

struct C_018a7a20 { void sub_01827850(int); C_018a7a20 *sub_018a7a20(int); };

// @baa 0x018a7a20
C_018a7a20 *C_018a7a20::sub_018a7a20(int a) { sub_01827850(a); return this; }

struct C_018a86a0 {
    int sub_018a86a0();
};

// @baa 0x018a86a0
int C_018a86a0::sub_018a86a0(void)
{
    int param_1 = (int)this;
  return param_1 + 8;
}

struct C_018a87d0 { void sub_01827890(int); C_018a87d0 *sub_018a87d0(int); };

// @baa 0x018a87d0
C_018a87d0 *C_018a87d0::sub_018a87d0(int a) { sub_01827890(a); return this; }

struct C_018a9d00 {
    undefined4 sub_018a9d00(undefined1 *);
    int sub_018278c0(int);
};

// @baa 0x018a9d00
undefined4 C_018a9d00::sub_018a9d00(undefined1 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_018a9d00 *)(this))->sub_018278c0(*param_2);
  return param_1;
}

struct C_018ab100 { void sub_01818ec0(int); C_018ab100 *sub_018ab100(int); };

// @baa 0x018ab100
C_018ab100 *C_018ab100::sub_018ab100(int a) { sub_01818ec0(a); return this; }

struct C_018ab120 { void sub_01818ec0(int); C_018ab120 *sub_018ab120(int); };

// @baa 0x018ab120
C_018ab120 *C_018ab120::sub_018ab120(int a) { sub_01818ec0(a); return this; }

struct C_018ab140 { void sub_01818ec0(int); C_018ab140 *sub_018ab140(int); };

// @baa 0x018ab140
C_018ab140 *C_018ab140::sub_018ab140(int a) { sub_01818ec0(a); return this; }

struct C_018aba80 {
    bool sub_018aba80(int *);
};

// @baa 0x018aba80
bool C_018aba80::sub_018aba80(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018aba90 {
    int sub_018aba90();
};

// @baa 0x018aba90
int C_018aba90::sub_018aba90(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018abaa0 { int a; C_018abaa0(int); };

// @baa 0x018abaa0
C_018abaa0::C_018abaa0(int x) : a(x) {}

struct M_018ae5c0 { void sub_0181a730(); };

struct C_018ae5c0 { char pad[192]; M_018ae5c0 m; void sub_018ae5c0(); };

// @baa 0x018ae5c0
void C_018ae5c0::sub_018ae5c0() { m.sub_0181a730(); }

struct C_018aea70 {
    bool sub_018aea70(int *);
};

// @baa 0x018aea70
bool C_018aea70::sub_018aea70(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018aea80 {
    int sub_018aea80();
};

// @baa 0x018aea80
int C_018aea80::sub_018aea80(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018aea90 {
    bool sub_018aea90(int *);
};

// @baa 0x018aea90
bool C_018aea90::sub_018aea90(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018aeaa0 { int a; C_018aeaa0(int); };

// @baa 0x018aeaa0
C_018aeaa0::C_018aeaa0(int x) : a(x) {}

struct M_018aefd0 { void sub_01888690(); };

struct C_018aefd0 { char pad[60]; M_018aefd0 m; void sub_018aefd0(); };

// @baa 0x018aefd0
void C_018aefd0::sub_018aefd0() { m.sub_01888690(); }

struct C_018af4e0 {
    int v;
    int *sub_018af4e0(int *a);
};

// @baa 0x018af4e0
int *C_018af4e0::sub_018af4e0(int *a) {
    *a = v;
    return a;
}

struct C_018af4f0 {
    int v;
    int *sub_018af4f0(int *a);
};

// @baa 0x018af4f0
int *C_018af4f0::sub_018af4f0(int *a) {
    *a = v;
    return a;
}
