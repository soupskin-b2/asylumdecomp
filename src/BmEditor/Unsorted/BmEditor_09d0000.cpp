// BmEditor_09d0000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_009d44c0(void); };

// @baa 0x009d44c0
int C::sub_009d44c0(void) { return *(int*)((char*)this + 12); }

struct C_009d44d0 { int sub_009d44d0(void); };

// @baa 0x009d44d0
int C_009d44d0::sub_009d44d0(void) { return *(int*)((char*)this + 40); }

struct C_009d44e0 { int sub_009d44e0(void); };

// @baa 0x009d44e0
int C_009d44e0::sub_009d44e0(void) { return *(int*)((char*)this + 44); }

// @baa 0x009d44f0
undefined4 sub_009d44f0(int * param_1, int * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_009d45c0 { C_009d45c0* sub_009d45c0(void); };

// @baa 0x009d45c0
C_009d45c0* C_009d45c0::sub_009d45c0(void) { return this; }

struct C_009d45d0 { C_009d45d0* sub_009d45d0(void); };

// @baa 0x009d45d0
C_009d45d0* C_009d45d0::sub_009d45d0(void) { return this; }

// @baa 0x009d45e0
int sub_009d45e0(int a0, int a1) { return a1; }

extern char g_01fa3e78[];
struct C_009d45f0 { C_009d45f0* sub_009d45f0(void); };

// @baa 0x009d45f0
C_009d45f0* C_009d45f0::sub_009d45f0(void) { *(int*)((char*)this + 0) = (int)g_01fa3e78; return this; }

extern char g_026b65ec[];
// @baa 0x009d4630
int sub_009d4630(void) { return (int)g_026b65ec; }

// @baa 0x009d46c0
undefined4 sub_009d46c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}
