// Engine_05e0000.cpp (part 2 of 2): 16 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_005edc80(void); };

// @baa 0x005edc80
int C::sub_005edc80(void) { return *(int*)((char*)this + 0); }

// @baa 0x005edc90
int sub_005edc90(int a0) { return *(int*)a0; }

struct C_005edca0 {
    void sub_005edca0(int *);
};

// @baa 0x005edca0
void C_005edca0::sub_005edca0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_005edcb0 {
    int sub_005edcb0(int);
};

// @baa 0x005edcb0
int C_005edcb0::sub_005edcb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_005edcc0 { int sub_005edcc0(void); };

// @baa 0x005edcc0
int C_005edcc0::sub_005edcc0(void) { return *(int*)((char*)this + 20); }

struct C_005edcd0 { int sub_005edcd0(void); };

// @baa 0x005edcd0
int C_005edcd0::sub_005edcd0(void) { return *(int*)((char*)this + 20); }

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x005edce0
wchar_t * sub_005edce0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x400,param_2);
  return param_1;
}

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x005edd40
wchar_t * sub_005edd40(wchar_t * param_1, wchar_t * param_2)
{
  wcscat_s(param_1,0x403,param_2);
  return param_1;
}

struct C_005edd60 {
    void sub_005edd60(undefined4, undefined4, undefined4, undefined4);
};

int sub_00630ea0(...);
// @baa 0x005edd60
void C_005edd60::sub_005edd60(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

extern "C" __declspec(dllimport) int _wcslwr_s(...);
// @baa 0x005edd80
wchar_t * sub_005edd80(wchar_t * param_1)
{
  _wcslwr_s(param_1,0x100);
  return param_1;
}

// @baa 0x005edda0
wchar_t * sub_005edda0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,10,param_2);
  return param_1;
}

// @baa 0x005eddc0
wchar_t * sub_005eddc0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x20,param_2);
  return param_1;
}

// @baa 0x005edde0
wchar_t * sub_005edde0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x800,param_2);
  return param_1;
}

// @baa 0x005ede00
wchar_t * sub_005ede00(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x104,param_2);
  return param_1;
}

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x005ede80
char * sub_005ede80(char * param_1, char * param_2)
{
  strcpy_s(param_1,0x400,param_2);
  return param_1;
}

extern "C" __declspec(dllimport) int strcat_s(...);
// @baa 0x005edea0
char * sub_005edea0(char * param_1, char * param_2)
{
  strcat_s(param_1,0x400,param_2);
  return param_1;
}
