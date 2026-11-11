// FCollada_18b0000.cpp (part 1 of 2): 21 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018b17d0(undefined4);
};

// @baa 0x018b17d0
void C::sub_018b17d0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_018b1830 {
    void sub_018b1830(undefined2);
};

// @baa 0x018b1830
void C_018b1830::sub_018b1830(undefined2 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined2 *)(param_1 + 0xa8) = param_2;
  return;
}

struct C_018b1850 {
    void sub_018b1850(undefined1);
};

// @baa 0x018b1850
void C_018b1850::sub_018b1850(undefined1 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined1 *)(param_1 + 0xaa) = param_2;
  return;
}

struct C_018b1870 { char* sub_018b1870(void); };

// @baa 0x018b1870
char* C_018b1870::sub_018b1870(void) { return (char*)this + 96; }

struct C_018b1880 { int sub_018b1880(void); };

// @baa 0x018b1880
int C_018b1880::sub_018b1880(void) { return *(int*)((char*)this + 36); }

struct C_018b1890 {
    void sub_018b1890(undefined4);
};

// @baa 0x018b1890
void C_018b1890::sub_018b1890(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}

struct C_018b18a0 { int sub_018b18a0(void); };

// @baa 0x018b18a0
int C_018b18a0::sub_018b18a0(void) { return *(int*)((char*)this + 4); }

int sub_0182b9c0(...);
// @baa 0x018b1a90
void sub_018b1a90(undefined4 param_1, undefined4 param_2)
{
  sub_0182b9c0(&param_1,param_2);
  return;
}

struct C_018b1c10 {
    void sub_018b1c10(undefined1);
};

// @baa 0x018b1c10
void C_018b1c10::sub_018b1c10(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xa0) = param_2;
  return;
}

struct C_018b1c20 {
    void sub_018b1c20(undefined1);
};

// @baa 0x018b1c20
void C_018b1c20::sub_018b1c20(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0xc4) = param_2;
  return;
}

extern undefined1 g_026ccbc8;
extern "C" __declspec(dllimport) int _stricmp(...);
// @baa 0x018b2130
bool sub_018b2130(int param_1, char * param_2)
{
  char *_Str1;
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str1 = (char *)(&g_026ccbc8);
  }
  else {
    _Str1 = *(char **)(param_1 + 8);
  }
  iVar1 = _stricmp(_Str1,param_2);
  return iVar1 == 0;
}

struct C_018ba310 { char* sub_018ba310(void); };

// @baa 0x018ba310
char* C_018ba310::sub_018ba310(void) { return (char*)this + 136; }

struct C_018ba320 { char* sub_018ba320(void); };

// @baa 0x018ba320
char* C_018ba320::sub_018ba320(void) { return (char*)this + 116; }

struct C_018ba760 {
    void sub_018ba760();
};

// @baa 0x018ba760
void C_018ba760::sub_018ba760(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
  return;
}

struct C_018ba770 { char* sub_018ba770(void); };

// @baa 0x018ba770
char* C_018ba770::sub_018ba770(void) { return (char*)this + 56; }

struct C_018ba780 { int sub_018ba780(void); };

// @baa 0x018ba780
int C_018ba780::sub_018ba780(void) { return *(int*)((char*)this + 100); }

struct C_018ba790 {
    void sub_018ba790(undefined4);
};

// @baa 0x018ba790
void C_018ba790::sub_018ba790(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}

struct C_018ba7a0 {
    void sub_018ba7a0(undefined4);
};

// @baa 0x018ba7a0
void C_018ba7a0::sub_018ba7a0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}

struct C_018be0f0 { int sub_018be0f0(void); };

// @baa 0x018be0f0
int C_018be0f0::sub_018be0f0(void) { return *(int*)((char*)this + 92); }

struct C_018be140 { int sub_018be140(void); };

// @baa 0x018be140
int C_018be140::sub_018be140(void) { return *(int*)((char*)this + 92); }

void sub_0185b3f0();
// @baa 0x018be150
void sub_018be150(void) { sub_0185b3f0(); }
