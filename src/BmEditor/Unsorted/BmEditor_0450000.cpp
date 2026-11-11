// BmEditor_0450000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 g_02618854;
// @baa 0x0045efe0
void sub_0045efe0(undefined4 param_1)
{
  g_02618854 = param_1;
  return;
}

// @baa 0x0045f590
undefined1 sub_0045f590(void)
{
  return 0;
}

extern undefined4 g_02663858;
// @baa 0x0045f5a0
void sub_0045f5a0(int param_1)
{
  if (g_02663858 == 0) {
    g_02663858 = param_1;
  }
  return;
}

struct C { int sub_0045f6b0(void); };

// @baa 0x0045f6b0
int C::sub_0045f6b0(void) { return *(int*)((char*)this + 44); }

struct C_0045f6c0 { void sub_0045f6c0(int a0); };

// @baa 0x0045f6c0
void C_0045f6c0::sub_0045f6c0(int a0) { *(int*)((char*)this + 44) = a0; }

struct C_0045f6d0 { int sub_0045f6d0(void); };

// @baa 0x0045f6d0
int C_0045f6d0::sub_0045f6d0(void) { return *(int*)((char*)this + 40); }

struct C_0045f6e0 { void sub_0045f6e0(int a0); };

// @baa 0x0045f6e0
void C_0045f6e0::sub_0045f6e0(int a0) { *(int*)((char*)this + 40) = a0; }
