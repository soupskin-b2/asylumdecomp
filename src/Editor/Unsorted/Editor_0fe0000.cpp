// Editor_0fe0000.cpp: 46 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { char* sub_00fed580(void); };

// @baa 0x00fed580
char* C::sub_00fed580(void) { return (char*)this + 12; }

struct C_00fed590 { int sub_00fed590(void); };

// @baa 0x00fed590
int C_00fed590::sub_00fed590(void) { return *(int*)((char*)this + 12); }

// @baa 0x00fed610
int sub_00fed610(int a0, int a1) { return a1; }

// @baa 0x00fed620
int sub_00fed620(int a0, int a1) { return a1; }

// @baa 0x00fed630
int sub_00fed630(int a0, int a1) { return a1; }

// @baa 0x00fed640
int sub_00fed640(int param_1, int param_2)
{
  return *(int *)(param_1 + 0xf0) - *(int *)(param_2 + 0xf0);
}

struct C_00fed720 {
    void sub_00fed720(int);
};

// @baa 0x00fed720
void C_00fed720::sub_00fed720(int param_2)
{
    byte * param_1 = (byte *)this;
  if (param_2 != 0) {
    *param_1 = *param_1 | 2;
    return;
  }
  *param_1 = *param_1 & 0xfd;
  return;
}

struct C_00fed7d0 {
    void sub_00fed7d0();
};

// @baa 0x00fed7d0
void C_00fed7d0::sub_00fed7d0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

struct C_00fed860 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00fed860(INT Index);
};

// @baa 0x00fed860
UBOOL C_00fed860::sub_00fed860(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00fed880 { int sub_00fed880(void); };

// @baa 0x00fed880
int C_00fed880::sub_00fed880(void) { return *(int*)((char*)this + 4); }

struct C_00fed890 { int sub_00fed890(void); };

// @baa 0x00fed890
int C_00fed890::sub_00fed890(void) { return *(int*)((char*)this + 4); }

struct C_00fed8a0 { int sub_00fed8a0(void); };

// @baa 0x00fed8a0
int C_00fed8a0::sub_00fed8a0(void) { return *(int*)((char*)this + 4); }

struct C_00fed8b0 { int sub_00fed8b0(void); };

// @baa 0x00fed8b0
int C_00fed8b0::sub_00fed8b0(void) { return *(int*)((char*)this + 4); }

struct C_00fed8c0 { int sub_00fed8c0(void); };

// @baa 0x00fed8c0
int C_00fed8c0::sub_00fed8c0(void) { return *(int*)((char*)this + 4); }

struct C_00fed8d0 { C_00fed8d0* sub_00fed8d0(void); };

// @baa 0x00fed8d0
C_00fed8d0* C_00fed8d0::sub_00fed8d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00fed8e0 { C_00fed8e0* sub_00fed8e0(void); };

// @baa 0x00fed8e0
C_00fed8e0* C_00fed8e0::sub_00fed8e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00fed8f0 { int sub_00fed8f0(void); };

// @baa 0x00fed8f0
int C_00fed8f0::sub_00fed8f0(void) { return *(int*)((char*)this + 0); }

struct C_00fed900 { int sub_00fed900(void); };

// @baa 0x00fed900
int C_00fed900::sub_00fed900(void) { return *(int*)((char*)this + 4); }

struct C_00fed910 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00fed910(INT Index);
};

// @baa 0x00fed910
UBOOL C_00fed910::sub_00fed910(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00fed930 { int sub_00fed930(void); };

// @baa 0x00fed930
int C_00fed930::sub_00fed930(void) { return *(int*)((char*)this + 4); }

struct C_00fed940 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00fed940(INT Index);
};

// @baa 0x00fed940
UBOOL C_00fed940::sub_00fed940(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00fed960 { int sub_00fed960(void); };

// @baa 0x00fed960
int C_00fed960::sub_00fed960(void) { return *(int*)((char*)this + 4); }

struct C_00fed970 { int sub_00fed970(void); };

// @baa 0x00fed970
int C_00fed970::sub_00fed970(void) { return *(int*)((char*)this + 4); }

struct C_00fed980 { int sub_00fed980(void); };

// @baa 0x00fed980
int C_00fed980::sub_00fed980(void) { return *(int*)((char*)this + 4); }

struct C_00fed990 { int sub_00fed990(void); };

// @baa 0x00fed990
int C_00fed990::sub_00fed990(void) { return *(int*)((char*)this + 4); }

struct C_00fed9a0 { int sub_00fed9a0(void); };

// @baa 0x00fed9a0
int C_00fed9a0::sub_00fed9a0(void) { return *(int*)((char*)this + 4); }

struct C_00fed9b0 { int sub_00fed9b0(void); };

// @baa 0x00fed9b0
int C_00fed9b0::sub_00fed9b0(void) { return *(int*)((char*)this + 4); }

struct C_00fed9c0 { int sub_00fed9c0(void); };

// @baa 0x00fed9c0
int C_00fed9c0::sub_00fed9c0(void) { return *(int*)((char*)this + 4); }

struct C_00fed9d0 { int sub_00fed9d0(void); };

// @baa 0x00fed9d0
int C_00fed9d0::sub_00fed9d0(void) { return *(int*)((char*)this + 4); }

struct C_00fed9e0 { int a, b; C_00fed9e0(int, int); };

// @baa 0x00fed9e0
C_00fed9e0::C_00fed9e0(int x, int y) : a(x), b(y) {}

struct C_00feda00 { int a, b; C_00feda00(int, int); };

// @baa 0x00feda00
C_00feda00::C_00feda00(int x, int y) : a(x), b(y) {}

// @baa 0x00feda20
int sub_00feda20(int a0) { return *(int*)a0; }

// @baa 0x00feda30
bool sub_00feda30(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00feda40 { int a, b; C_00feda40(const C_00feda40 &); };

// @baa 0x00feda40
C_00feda40::C_00feda40(const C_00feda40 &o) : a(o.a), b(o.b) {}

// @baa 0x00feda80
int sub_00feda80(int a0) { return *(int*)a0; }

struct C_00feda90 {
    void sub_00feda90(int *);
};

// @baa 0x00feda90
void C_00feda90::sub_00feda90(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00fedaf0 { int a, b; C_00fedaf0(const C_00fedaf0 &); };

// @baa 0x00fedaf0
C_00fedaf0::C_00fedaf0(const C_00fedaf0 &o) : a(o.a), b(o.b) {}

// @baa 0x00fedb50
void sub_00fedb50(void) {  }

// @baa 0x00fedb80
undefined2 sub_00fedb80(void)
{
  return 0x69;
}

// @baa 0x00fedb90
undefined2 sub_00fedb90(void)
{
  return 0x73;
}

struct C_00fee370 { int sub_00fee370(void); };

// @baa 0x00fee370
int C_00fee370::sub_00fee370(void) { return *(int*)((char*)this + 0); }

struct C_00fee380 { int sub_00fee380(void); };

// @baa 0x00fee380
int C_00fee380::sub_00fee380(void) { return *(int*)((char*)this + 0); }

struct C_00fee390 {
    bool sub_00fee390();
};

// @baa 0x00fee390
bool C_00fee390::sub_00fee390(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

struct C_00feece0 { C_00feece0* sub_00feece0(void); };

// @baa 0x00feece0
C_00feece0* C_00feece0::sub_00feece0(void) { return this; }

struct C_00fed760
{
    char pad_00[0x20];
    INT Value;

    INT sub_00fed760(INT A, INT B, INT C_00fed760, INT D, INT E);
};

// @baa 0x00fed760
INT C_00fed760::sub_00fed760(INT A, INT, INT, INT, INT)
{
    return Value == A;
}

struct C_00fed7c0
{
    char pad_00[0x20];
    INT Value;

    INT sub_00fed7c0(INT A, INT B, INT C_00fed7c0, INT D, INT E);
};

// @baa 0x00fed7c0
INT C_00fed7c0::sub_00fed7c0(INT A, INT, INT, INT, INT)
{
    return Value == A;
}
