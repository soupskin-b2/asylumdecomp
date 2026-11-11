// FMOD_17e0000.cpp (part 2 of 2): 72 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_017e0ae0(void); };

// @baa 0x017e0ae0
int C::sub_017e0ae0(void) { return *(int*)((char*)this + 4); }

struct C_017e0b10 { int sub_017e0b10(void); };

// @baa 0x017e0b10
int C_017e0b10::sub_017e0b10(void) { return *(int*)((char*)this + 128); }

extern char g_023dfba4[];
struct C_017e0b20 { void sub_017e0b20(void); };

// @baa 0x017e0b20
void C_017e0b20::sub_017e0b20(void) { *(int*)((char*)this + 0) = (int)g_023dfba4; }

struct C_017e0b30 {
    undefined4 * sub_017e0b30(byte);
};

int sub_00402660(...);
// @baa 0x017e0b30
undefined4 * C_017e0b30::sub_017e0b30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfba4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dfbfc[];
struct C_017e0b50 { void sub_017e0b50(void); };

// @baa 0x017e0b50
void C_017e0b50::sub_017e0b50(void) { *(int*)((char*)this + 0) = (int)g_023dfbfc; }

struct C_017e0b60 {
    undefined4 * sub_017e0b60(byte);
};

// @baa 0x017e0b60
undefined4 * C_017e0b60::sub_017e0b60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfbfc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e0b80 { C_017e0b80* sub_017e0b80(void); };

// @baa 0x017e0b80
C_017e0b80* C_017e0b80::sub_017e0b80(void) { *(int*)((char*)this + 0) = (int)g_023dfbfc; return this; }

struct C_017e0b90 { void sub_017e0b90(void); };

// @baa 0x017e0b90
void C_017e0b90::sub_017e0b90(void) { *(int*)((char*)this + 0) = (int)g_023dfbfc; }

struct C_017e16b0 { int sub_017e16b0(void); };

// @baa 0x017e16b0
int C_017e16b0::sub_017e16b0(void) { return *(int*)((char*)this + 312); }

extern char g_023dfd54[];
struct C_017e3cf0 { void sub_017e3cf0(void); };

// @baa 0x017e3cf0
void C_017e3cf0::sub_017e3cf0(void) { *(int*)((char*)this + 0) = (int)g_023dfd54; }

struct C_017e3d00 {
    undefined4 * sub_017e3d00(byte);
};

// @baa 0x017e3d00
undefined4 * C_017e3d00::sub_017e3d00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfd54));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e3d20 { C_017e3d20* sub_017e3d20(void); };

// @baa 0x017e3d20
C_017e3d20* C_017e3d20::sub_017e3d20(void) { *(int*)((char*)this + 0) = (int)g_023dfd54; return this; }

struct C_017e4fd0 {
    undefined4 sub_017e4fd0(undefined4 *);
};

// @baa 0x017e4fd0
undefined4 C_017e4fd0::sub_017e4fd0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return 0;
}

struct C_017e71a0 { void sub_017e71a0(int a0); };

// @baa 0x017e71a0
void C_017e71a0::sub_017e71a0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_017e71b0 { int sub_017e71b0(void); };

// @baa 0x017e71b0
int C_017e71b0::sub_017e71b0(void) { return *(int*)((char*)this + 12); }

struct C_017e71c0 { int sub_017e71c0(void); };

// @baa 0x017e71c0
int C_017e71c0::sub_017e71c0(void) { return *(int*)((char*)this + 48); }

struct C_017e71d0 { int sub_017e71d0(void); };

// @baa 0x017e71d0
int C_017e71d0::sub_017e71d0(void) { return *(int*)((char*)this + 16); }

struct C_017e71e0 { int sub_017e71e0(void); };

// @baa 0x017e71e0
int C_017e71e0::sub_017e71e0(void) { return *(int*)((char*)this + 4); }

extern char g_023dfeec[];
struct C_017e8780 { void sub_017e8780(void); };

// @baa 0x017e8780
void C_017e8780::sub_017e8780(void) { *(int*)((char*)this + 0) = (int)g_023dfeec; }

struct C_017e8790 { int sub_017e8790(void); };

// @baa 0x017e8790
int C_017e8790::sub_017e8790(void) { return *(int*)((char*)this + 4); }

struct C_017e87a0 { void sub_017e87a0(int a0); };

// @baa 0x017e87a0
void C_017e87a0::sub_017e87a0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_017e87b0 {
    undefined4 * sub_017e87b0(byte);
};

// @baa 0x017e87b0
undefined4 * C_017e87b0::sub_017e87b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfeec));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dfefc[];
struct C_017e87f0 { void sub_017e87f0(void); };

// @baa 0x017e87f0
void C_017e87f0::sub_017e87f0(void) { *(int*)((char*)this + 0) = (int)g_023dfefc; }

struct C_017e8800 { int sub_017e8800(void); };

// @baa 0x017e8800
int C_017e8800::sub_017e8800(void) { return *(int*)((char*)this + 4); }

struct C_017e8810 { void sub_017e8810(int a0); };

// @baa 0x017e8810
void C_017e8810::sub_017e8810(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_017e8820 {
    undefined4 * sub_017e8820(byte);
};

// @baa 0x017e8820
undefined4 * C_017e8820::sub_017e8820(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfefc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff0c[];
struct C_017e88a0 { void sub_017e88a0(void); };

// @baa 0x017e88a0
void C_017e88a0::sub_017e88a0(void) { *(int*)((char*)this + 0) = (int)g_023dff0c; }

struct C_017e88b0 { int sub_017e88b0(void); };

// @baa 0x017e88b0
int C_017e88b0::sub_017e88b0(void) { return *(int*)((char*)this + 8); }

struct C_017e88c0 { void sub_017e88c0(int a0); };

// @baa 0x017e88c0
void C_017e88c0::sub_017e88c0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_017e88d0 {
    undefined4 * sub_017e88d0(byte);
};

// @baa 0x017e88d0
undefined4 * C_017e88d0::sub_017e88d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff0c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff20[];
struct C_017e8950 { void sub_017e8950(void); };

// @baa 0x017e8950
void C_017e8950::sub_017e8950(void) { *(int*)((char*)this + 0) = (int)g_023dff20; }

struct C_017e8960 { int sub_017e8960(void); };

// @baa 0x017e8960
int C_017e8960::sub_017e8960(void) { return *(int*)((char*)this + 8); }

struct C_017e8970 { void sub_017e8970(int a0); };

// @baa 0x017e8970
void C_017e8970::sub_017e8970(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_017e8980 {
    undefined4 * sub_017e8980(byte);
};

// @baa 0x017e8980
undefined4 * C_017e8980::sub_017e8980(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff20));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff50[];
struct C_017e89c0 { void sub_017e89c0(void); };

// @baa 0x017e89c0
void C_017e89c0::sub_017e89c0(void) { *(int*)((char*)this + 0) = (int)g_023dff50; }

struct C_017e89d0 { int sub_017e89d0(void); };

// @baa 0x017e89d0
int C_017e89d0::sub_017e89d0(void) { return *(int*)((char*)this + 8); }

struct C_017e89e0 { void sub_017e89e0(int a0); };

// @baa 0x017e89e0
void C_017e89e0::sub_017e89e0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_017e89f0 {
    undefined4 * sub_017e89f0(byte);
};

// @baa 0x017e89f0
undefined4 * C_017e89f0::sub_017e89f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff50));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff58[];
struct C_017e8a40 { void sub_017e8a40(void); };

// @baa 0x017e8a40
void C_017e8a40::sub_017e8a40(void) { *(int*)((char*)this + 0) = (int)g_023dff58; }

struct C_017e8a50 { int sub_017e8a50(void); };

// @baa 0x017e8a50
int C_017e8a50::sub_017e8a50(void) { return *(int*)((char*)this + 12); }

struct C_017e8a60 {
    undefined4 * sub_017e8a60(byte);
};

// @baa 0x017e8a60
undefined4 * C_017e8a60::sub_017e8a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff58));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x017e8aa0
int sub_017e8aa0(void) { return 0; }

struct C_017e8ab0 { int sub_017e8ab0(void); };

// @baa 0x017e8ab0
int C_017e8ab0::sub_017e8ab0(void) { return *(int*)((char*)this + 4); }

struct C_017e8ac0 {
    undefined4 * sub_017e8ac0(byte);
};

extern undefined4 g_023dff84;
// @baa 0x017e8ac0
undefined4 * C_017e8ac0::sub_017e8ac0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff84));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dffac[];
struct C_017e8b30 { void sub_017e8b30(void); };

// @baa 0x017e8b30
void C_017e8b30::sub_017e8b30(void) { *(int*)((char*)this + 0) = (int)g_023dffac; }

struct C_017e8b40 { void sub_017e8b40(int a0); };

// @baa 0x017e8b40
void C_017e8b40::sub_017e8b40(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_017e8b50 {
    undefined4 * sub_017e8b50(byte);
};

// @baa 0x017e8b50
undefined4 * C_017e8b50::sub_017e8b50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dffac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dffdc[];
struct C_017e8ba0 { void sub_017e8ba0(void); };

// @baa 0x017e8ba0
void C_017e8ba0::sub_017e8ba0(void) { *(int*)((char*)this + 0) = (int)g_023dffdc; }

struct C_017e8c10 { C_017e8c10* sub_017e8c10(void); };

// @baa 0x017e8c10
C_017e8c10* C_017e8c10::sub_017e8c10(void) { *(int*)((char*)this + 0) = (int)g_023dffdc; return this; }

struct C_017e8c20 {
    undefined4 * sub_017e8c20(byte);
};

// @baa 0x017e8c20
undefined4 * C_017e8c20::sub_017e8c20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dffdc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dfff0[];
struct C_017e8c40 { void sub_017e8c40(void); };

// @baa 0x017e8c40
void C_017e8c40::sub_017e8c40(void) { *(int*)((char*)this + 0) = (int)g_023dfff0; }

struct C_017e8cb0 { C_017e8cb0* sub_017e8cb0(void); };

// @baa 0x017e8cb0
C_017e8cb0* C_017e8cb0::sub_017e8cb0(void) { *(int*)((char*)this + 0) = (int)g_023dfff0; return this; }

struct C_017e8cc0 {
    undefined4 * sub_017e8cc0(byte);
};

// @baa 0x017e8cc0
undefined4 * C_017e8cc0::sub_017e8cc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfff0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e0008[];
struct C_017e8ce0 { void sub_017e8ce0(void); };

// @baa 0x017e8ce0
void C_017e8ce0::sub_017e8ce0(void) { *(int*)((char*)this + 0) = (int)g_023e0008; }

struct C_017e8d30 { C_017e8d30* sub_017e8d30(void); };

// @baa 0x017e8d30
C_017e8d30* C_017e8d30::sub_017e8d30(void) { *(int*)((char*)this + 0) = (int)g_023e0008; return this; }

struct C_017e8d40 {
    undefined4 * sub_017e8d40(byte);
};

// @baa 0x017e8d40
undefined4 * C_017e8d40::sub_017e8d40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0008));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e001c[];
struct C_017e8d60 { void sub_017e8d60(void); };

// @baa 0x017e8d60
void C_017e8d60::sub_017e8d60(void) { *(int*)((char*)this + 0) = (int)g_023e001c; }

struct C_017e8db0 { C_017e8db0* sub_017e8db0(void); };

// @baa 0x017e8db0
C_017e8db0* C_017e8db0::sub_017e8db0(void) { *(int*)((char*)this + 0) = (int)g_023e001c; return this; }

struct C_017e8dc0 {
    undefined4 * sub_017e8dc0(byte);
};

// @baa 0x017e8dc0
undefined4 * C_017e8dc0::sub_017e8dc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e001c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e0030[];
struct C_017e8de0 { void sub_017e8de0(void); };

// @baa 0x017e8de0
void C_017e8de0::sub_017e8de0(void) { *(int*)((char*)this + 0) = (int)g_023e0030; }

struct C_017e8e30 { C_017e8e30* sub_017e8e30(void); };

// @baa 0x017e8e30
C_017e8e30* C_017e8e30::sub_017e8e30(void) { *(int*)((char*)this + 0) = (int)g_023e0030; return this; }

struct C_017e8e40 {
    undefined4 * sub_017e8e40(byte);
};

// @baa 0x017e8e40
undefined4 * C_017e8e40::sub_017e8e40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0030));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e0044[];
struct C_017e8e60 { void sub_017e8e60(void); };

// @baa 0x017e8e60
void C_017e8e60::sub_017e8e60(void) { *(int*)((char*)this + 0) = (int)g_023e0044; }

struct C_017e8eb0 { C_017e8eb0* sub_017e8eb0(void); };

// @baa 0x017e8eb0
C_017e8eb0* C_017e8eb0::sub_017e8eb0(void) { *(int*)((char*)this + 0) = (int)g_023e0044; return this; }

struct C_017e8ec0 {
    undefined4 * sub_017e8ec0(byte);
};

// @baa 0x017e8ec0
undefined4 * C_017e8ec0::sub_017e8ec0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0044));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e0060[];
struct C_017e8ee0 { void sub_017e8ee0(void); };

// @baa 0x017e8ee0
void C_017e8ee0::sub_017e8ee0(void) { *(int*)((char*)this + 0) = (int)g_023e0060; }

struct C_017e8f30 { C_017e8f30* sub_017e8f30(void); };

// @baa 0x017e8f30
C_017e8f30* C_017e8f30::sub_017e8f30(void) { *(int*)((char*)this + 0) = (int)g_023e0060; return this; }

struct C_017e8f40 {
    undefined4 * sub_017e8f40(byte);
};

// @baa 0x017e8f40
undefined4 * C_017e8f40::sub_017e8f40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0060));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e8f60 { int sub_017e8f60(void); };

// @baa 0x017e8f60
int C_017e8f60::sub_017e8f60(void) { return *(int*)((char*)this + 8); }

struct C_017e8f70 {
    bool sub_017e8f70();
};

// @baa 0x017e8f70
bool C_017e8f70::sub_017e8f70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

extern char g_023e02e4[];
struct C_017edd10 { void sub_017edd10(void); };

// @baa 0x017edd10
void C_017edd10::sub_017edd10(void) { *(int*)((char*)this + 0) = (int)g_023e02e4; }

struct C_017edd20 {
    undefined4 * sub_017edd20(byte);
};

// @baa 0x017edd20
undefined4 * C_017edd20::sub_017edd20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e02e4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
