// GFxUI_1900000.cpp (part 1 of 2): 17 functions
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

struct C_0190fa50 { int a, b, c; C_0190fa50(); };

// @baa 0x0190fa50
C_0190fa50::C_0190fa50() : a(0), b(0), c(0) {}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bda0(int NewNum);
    void sub_0190fa60();
};

void __stdcall sub_018d7170(int A);
// @baa 0x0190fa60
void S018d4a70::sub_0190fa60()
{
    S018d4a70* Self = this;
    sub_0190bda0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fa80 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cc10(int NewNum);
    void sub_0190fa80();
};

// @baa 0x0190fa80
void S018d4a70_0190fa80::sub_0190fa80()
{
    S018d4a70_0190fa80* Self = this;
    sub_0190cc10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fac0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cd60(int NewNum);
    void sub_0190fac0();
};

// @baa 0x0190fac0
void S018d4a70_0190fac0::sub_0190fac0()
{
    S018d4a70_0190fac0* Self = this;
    sub_0190cd60(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fae0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190be70(int NewNum);
    void sub_0190fae0();
};

// @baa 0x0190fae0
void S018d4a70_0190fae0::sub_0190fae0()
{
    S018d4a70_0190fae0* Self = this;
    sub_0190be70(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

// @baa 0x01905f80
UINT __cdecl sub_01905f80(UINT A, UINT B)
{
    return A < B ? A : B;
}
