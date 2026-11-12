// GFxUI_1900000.cpp (part 1 of 2): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    uint sub_01905d00();
};

// @baa 0x01905d00
uint C::sub_01905d00(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01905d20 {
    int sub_01905d20(int);
};

// @baa 0x01905d20
int C_01905d20::sub_01905d20(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01905d30 {
    bool sub_01905d30();
};

// @baa 0x01905d30
bool C_01905d30::sub_01905d30(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_01905e00 {
    int sub_01905e00(int);
};

// @baa 0x01905e00
int C_01905e00::sub_01905e00(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x24;
}

struct C_01905e10 {
    uint sub_01905e10();
};

// @baa 0x01905e10
uint C_01905e10::sub_01905e10(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

extern double g_01ea7878;
// @baa 0x01905f70
double sub_01905f70(double param_1)
{
  return param_1 / g_01ea7878;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01906140();
};

// @baa 0x01906140
S *S::sub_01906140()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01906150 {
    bool sub_01906150();
};

// @baa 0x01906150
bool C_01906150::sub_01906150(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -1;
}

struct C_01906190 { int a, b; C_01906190(int, int); };

// @baa 0x01906190
C_01906190::C_01906190(int x, int y) : a(x), b(y) {}

struct C_019062b0 {
    int sub_019062b0(int);
};

// @baa 0x019062b0
int C_019062b0::sub_019062b0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_019062e0 {
    int sub_019062e0(int);
};

// @baa 0x019062e0
int C_019062e0::sub_019062e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

// @baa 0x01905f80
UINT __cdecl sub_01905f80(UINT A, UINT B)
{
    return A < B ? A : B;
}
