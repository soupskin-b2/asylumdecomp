// GFxUI_18f0000.cpp (part 2 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018f0e80();
};

int sub_018d3de0(void);
extern undefined * g_023f4f44;
// @baa 0x018f0e80
void C::sub_018f0e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

void __stdcall sub_018d7170(int Obj);
// @baa 0x018f1af0
void __cdecl sub_018f1af0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

void __stdcall sub_018d7150(int Index);
// @baa 0x018f1b10
void sub_018f1b10(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x018f1b30
void __cdecl sub_018f1b30(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_018f1b50 { int a, b, c; C_018f1b50(); };

// @baa 0x018f1b50
C_018f1b50::C_018f1b50() : a(0), b(0), c(0) {}

struct C_018f1b60 { int a, b, c; C_018f1b60(); };

// @baa 0x018f1b60
C_018f1b60::C_018f1b60() : a(0), b(0), c(0) {}

// @baa 0x018f1b80
void __cdecl sub_018f1b80(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}
