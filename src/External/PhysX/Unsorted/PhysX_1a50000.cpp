// PhysX_1a50000.cpp (part 1 of 3): 156 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { char* sub_01a50000(void); };

// @baa 0x01a50000
char* C::sub_01a50000(void) { return (char*)this + 12; }

struct C_01a50010 { char* sub_01a50010(void); };

// @baa 0x01a50010
char* C_01a50010::sub_01a50010(void) { return (char*)this + 12; }

struct C_01a50020 { char* sub_01a50020(void); };

// @baa 0x01a50020
char* C_01a50020::sub_01a50020(void) { return (char*)this + 12; }

struct C_01a50030 { char* sub_01a50030(void); };

// @baa 0x01a50030
char* C_01a50030::sub_01a50030(void) { return (char*)this + 12; }

struct C_01a50040 { char* sub_01a50040(void); };

// @baa 0x01a50040
char* C_01a50040::sub_01a50040(void) { return (char*)this + 12; }

struct C_01a50050 { char* sub_01a50050(void); };

// @baa 0x01a50050
char* C_01a50050::sub_01a50050(void) { return (char*)this + 12; }

struct C_01a50060 { char* sub_01a50060(void); };

// @baa 0x01a50060
char* C_01a50060::sub_01a50060(void) { return (char*)this + 12; }

struct C_01a50070 { char* sub_01a50070(void); };

// @baa 0x01a50070
char* C_01a50070::sub_01a50070(void) { return (char*)this + 12; }

struct C_01a50080 { char* sub_01a50080(void); };

// @baa 0x01a50080
char* C_01a50080::sub_01a50080(void) { return (char*)this + 12; }

struct C_01a50090 { char* sub_01a50090(void); };

// @baa 0x01a50090
char* C_01a50090::sub_01a50090(void) { return (char*)this + 12; }

struct C_01a500a0 { char* sub_01a500a0(void); };

// @baa 0x01a500a0
char* C_01a500a0::sub_01a500a0(void) { return (char*)this + 12; }

struct C_01a500b0 { char* sub_01a500b0(void); };

// @baa 0x01a500b0
char* C_01a500b0::sub_01a500b0(void) { return (char*)this + 12; }

struct C_01a500c0 { char* sub_01a500c0(void); };

// @baa 0x01a500c0
char* C_01a500c0::sub_01a500c0(void) { return (char*)this + 12; }

struct C_01a500d0 { char* sub_01a500d0(void); };

// @baa 0x01a500d0
char* C_01a500d0::sub_01a500d0(void) { return (char*)this + 12; }

struct C_01a51200 { int sub_01a51200(void); };

// @baa 0x01a51200
int C_01a51200::sub_01a51200(void) { return *(int*)((char*)this + 12); }

struct C_01a51990 {
    void sub_01a51990(undefined2);
};

// @baa 0x01a51990
void C_01a51990::sub_01a51990(undefined2 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x1000;
  *(undefined2 *)(param_1 + 0x40) = param_2;
  return;
}

struct C_01a51b40 {
    void sub_01a51b40(undefined2);
};

// @baa 0x01a51b40
void C_01a51b40::sub_01a51b40(undefined2 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x20000;
  *(undefined2 *)(param_1 + 0x42) = param_2;
  return;
}

struct C_01a51c10 {
    void sub_01a51c10(uint);
};

// @baa 0x01a51c10
void C_01a51c10::sub_01a51c10(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | param_2;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & ~param_2;
  return;
}

struct C_01a51c30 {
    void sub_01a51c30(uint);
};

// @baa 0x01a51c30
void C_01a51c30::sub_01a51c30(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | param_2;
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & ~param_2;
  return;
}

struct C_01a531d0 { int sub_01a531d0(void); };

// @baa 0x01a531d0
int C_01a531d0::sub_01a531d0(void) { return *(int*)((char*)this + 248); }

struct C_01a531e0 { int sub_01a531e0(void); };

// @baa 0x01a531e0
int C_01a531e0::sub_01a531e0(void) { return *(int*)((char*)this + 244); }

struct C_01a53d10 { int sub_01a53d10(void); };

// @baa 0x01a53d10
int C_01a53d10::sub_01a53d10(void) { return *(int*)((char*)this + 4); }

struct C_01a53d20 {
    int sub_01a53d20(int);
};

// @baa 0x01a53d20
int C_01a53d20::sub_01a53d20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01a53d30 {
    void sub_01a53d30(int);
};

// @baa 0x01a53d30
void C_01a53d30::sub_01a53d30(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  return;
}

struct C_01a53d50 { int sub_01a53d50(void); };

// @baa 0x01a53d50
int C_01a53d50::sub_01a53d50(void) { return *(int*)((char*)this + 0); }

extern char g_0240887c[];
struct C_01a53f50 { void sub_01a53f50(void); };

// @baa 0x01a53f50
void C_01a53f50::sub_01a53f50(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a53f60 {
    undefined4 * sub_01a53f60(byte);
};

int sub_00402660(...);
// @baa 0x01a53f60
undefined4 * C_01a53f60::sub_01a53f60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a53f80 { int sub_01a53f80(void); };

// @baa 0x01a53f80
int C_01a53f80::sub_01a53f80(void) { return *(int*)((char*)this + 12); }

struct C_01a53f90 { void sub_01a53f90(void); };

// @baa 0x01a53f90
void C_01a53f90::sub_01a53f90(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a53fc0 {
    undefined4 * sub_01a53fc0(byte);
};

// @baa 0x01a53fc0
undefined4 * C_01a53fc0::sub_01a53fc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01a43190();
// @baa 0x01a541a0
void sub_01a541a0(void) { sub_01a43190(); }

void sub_01a431e0();
// @baa 0x01a541b0
void sub_01a541b0(void) { sub_01a431e0(); }

void sub_01a43230();
// @baa 0x01a541c0
void sub_01a541c0(void) { sub_01a43230(); }

void sub_01a432a0();
// @baa 0x01a541d0
void sub_01a541d0(void) { sub_01a432a0(); }

struct C_01a548d0 {
    void sub_01a548d0();
};

extern undefined4 g_024088e4;
// @baa 0x01a548d0
void C_01a548d0::sub_01a548d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a54910 { int sub_01a54910(void); };

// @baa 0x01a54910
int C_01a54910::sub_01a54910(void) { return *(int*)((char*)this + 12); }

struct C_01a54920 { void sub_01a54920(void); };

// @baa 0x01a54920
void C_01a54920::sub_01a54920(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a54950 {
    undefined4 * sub_01a54950(byte);
};

// @baa 0x01a54950
undefined4 * C_01a54950::sub_01a54950(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a54970
void sub_01a54970(void) { sub_01a43190(); }

// @baa 0x01a54980
void sub_01a54980(void) { sub_01a431e0(); }

// @baa 0x01a54990
void sub_01a54990(void) { sub_01a43230(); }

// @baa 0x01a549a0
void sub_01a549a0(void) { sub_01a432a0(); }

struct C_01a54f80 {
    void sub_01a54f80();
};

// @baa 0x01a54f80
void C_01a54f80::sub_01a54f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a54fe0 { int sub_01a54fe0(void); };

// @baa 0x01a54fe0
int C_01a54fe0::sub_01a54fe0(void) { return *(int*)((char*)this + 12); }

struct C_01a54ff0 { void sub_01a54ff0(void); };

// @baa 0x01a54ff0
void C_01a54ff0::sub_01a54ff0(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a55020 {
    undefined4 * sub_01a55020(byte);
};

// @baa 0x01a55020
undefined4 * C_01a55020::sub_01a55020(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a55210
void sub_01a55210(void) { sub_01a43190(); }

// @baa 0x01a55220
void sub_01a55220(void) { sub_01a431e0(); }

// @baa 0x01a55230
void sub_01a55230(void) { sub_01a43230(); }

// @baa 0x01a55240
void sub_01a55240(void) { sub_01a432a0(); }

struct C_01a55e20 {
    void sub_01a55e20();
};

// @baa 0x01a55e20
void C_01a55e20::sub_01a55e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a55e70 { int sub_01a55e70(void); };

// @baa 0x01a55e70
int C_01a55e70::sub_01a55e70(void) { return *(int*)((char*)this + 12); }

struct C_01a55e80 { void sub_01a55e80(void); };

// @baa 0x01a55e80
void C_01a55e80::sub_01a55e80(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a55eb0 {
    undefined4 * sub_01a55eb0(byte);
};

// @baa 0x01a55eb0
undefined4 * C_01a55eb0::sub_01a55eb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a55ed0
void sub_01a55ed0(void) { sub_01a43190(); }

// @baa 0x01a55ee0
void sub_01a55ee0(void) { sub_01a431e0(); }

// @baa 0x01a55ef0
void sub_01a55ef0(void) { sub_01a43230(); }

// @baa 0x01a55f00
void sub_01a55f00(void) { sub_01a432a0(); }

struct C_01a56440 {
    undefined4 * sub_01a56440(byte);
};

// @baa 0x01a56440
undefined4 * C_01a56440::sub_01a56440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024088e4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a56630 {
    void sub_01a56630();
};

// @baa 0x01a56630
void C_01a56630::sub_01a56630(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a56670 { int sub_01a56670(void); };

// @baa 0x01a56670
int C_01a56670::sub_01a56670(void) { return *(int*)((char*)this + 12); }

struct C_01a56680 { void sub_01a56680(void); };

// @baa 0x01a56680
void C_01a56680::sub_01a56680(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a566b0 {
    undefined4 * sub_01a566b0(byte);
};

// @baa 0x01a566b0
undefined4 * C_01a566b0::sub_01a566b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a56750
void sub_01a56750(void) { sub_01a43190(); }

// @baa 0x01a56760
void sub_01a56760(void) { sub_01a431e0(); }

// @baa 0x01a56770
void sub_01a56770(void) { sub_01a43230(); }

// @baa 0x01a56780
void sub_01a56780(void) { sub_01a432a0(); }

struct C_01a56eb0 {
    void sub_01a56eb0();
};

// @baa 0x01a56eb0
void C_01a56eb0::sub_01a56eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a56f00 { int sub_01a56f00(void); };

// @baa 0x01a56f00
int C_01a56f00::sub_01a56f00(void) { return *(int*)((char*)this + 12); }

struct C_01a56f10 { void sub_01a56f10(void); };

// @baa 0x01a56f10
void C_01a56f10::sub_01a56f10(void) { *(int*)((char*)this + 0) = (int)g_0240887c; }

struct C_01a56f40 {
    undefined4 * sub_01a56f40(byte);
};

// @baa 0x01a56f40
undefined4 * C_01a56f40::sub_01a56f40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240887c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a570e0
void sub_01a570e0(void) { sub_01a43190(); }

// @baa 0x01a570f0
void sub_01a570f0(void) { sub_01a431e0(); }

// @baa 0x01a57100
void sub_01a57100(void) { sub_01a43230(); }

// @baa 0x01a57110
void sub_01a57110(void) { sub_01a432a0(); }

struct C_01a57810 {
    undefined4 * sub_01a57810(byte);
};

// @baa 0x01a57810
undefined4 * C_01a57810::sub_01a57810(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_024088e4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a57a00 {
    void sub_01a57a00();
};

// @baa 0x01a57a00
void C_01a57a00::sub_01a57a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x10] = (undefined4)((&g_024088e4));
  *param_1 = (undefined4)((&g_0240887c));
  return;
}

struct C_01a57b70 {
    undefined4 * sub_01a57b70(byte);
};

extern undefined4 g_0240918c;
// @baa 0x01a57b70
undefined4 * C_01a57b70::sub_01a57b70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240918c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a57dc0 { int sub_01a57dc0(void); };

// @baa 0x01a57dc0
int C_01a57dc0::sub_01a57dc0(void) { return *(int*)((char*)this + 12); }

extern char g_0240940c[];
struct C_01a58bb0 { void sub_01a58bb0(void); };

// @baa 0x01a58bb0
void C_01a58bb0::sub_01a58bb0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a58bc0 {
    undefined4 * sub_01a58bc0(byte);
};

// @baa 0x01a58bc0
undefined4 * C_01a58bc0::sub_01a58bc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a58be0 { int sub_01a58be0(void); };

// @baa 0x01a58be0
int C_01a58be0::sub_01a58be0(void) { return *(int*)((char*)this + 20); }

struct C_01a58bf0 { void sub_01a58bf0(void); };

// @baa 0x01a58bf0
void C_01a58bf0::sub_01a58bf0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a58c20 {
    undefined4 * sub_01a58c20(byte);
};

// @baa 0x01a58c20
undefined4 * C_01a58c20::sub_01a58c20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_01a50ee0();
// @baa 0x01a58fe0
void sub_01a58fe0(void) { sub_01a50ee0(); }

void sub_01a50f40();
// @baa 0x01a58ff0
void sub_01a58ff0(void) { sub_01a50f40(); }

void sub_01a50fa0();
// @baa 0x01a59000
void sub_01a59000(void) { sub_01a50fa0(); }

void sub_01a51020();
// @baa 0x01a59010
void sub_01a59010(void) { sub_01a51020(); }

// @baa 0x01a593f0
int sub_01a593f0(void) { return 7; }

struct C_01a59400 {
    void sub_01a59400();
};

extern undefined4 g_02406e04;
// @baa 0x01a59400
void C_01a59400::sub_01a59400(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a59440 { int sub_01a59440(void); };

// @baa 0x01a59440
int C_01a59440::sub_01a59440(void) { return *(int*)((char*)this + 20); }

struct C_01a59450 { void sub_01a59450(void); };

// @baa 0x01a59450
void C_01a59450::sub_01a59450(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a59480 {
    undefined4 * sub_01a59480(byte);
};

// @baa 0x01a59480
undefined4 * C_01a59480::sub_01a59480(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a59980
int sub_01a59980(void) { return 6; }

struct C_01a59990 {
    void sub_01a59990();
};

// @baa 0x01a59990
void C_01a59990::sub_01a59990(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a599d0 { int sub_01a599d0(void); };

// @baa 0x01a599d0
int C_01a599d0::sub_01a599d0(void) { return *(int*)((char*)this + 20); }

struct C_01a599e0 { void sub_01a599e0(void); };

// @baa 0x01a599e0
void C_01a599e0::sub_01a599e0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a59a10 {
    undefined4 * sub_01a59a10(byte);
};

// @baa 0x01a59a10
undefined4 * C_01a59a10::sub_01a59a10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a59a90
void sub_01a59a90(void) { sub_01a50ee0(); }

// @baa 0x01a59aa0
void sub_01a59aa0(void) { sub_01a50f40(); }

// @baa 0x01a59ab0
void sub_01a59ab0(void) { sub_01a50fa0(); }

// @baa 0x01a59ac0
void sub_01a59ac0(void) { sub_01a51020(); }

// @baa 0x01a59e90
int sub_01a59e90(void) { return 5; }

struct C_01a59ea0 {
    void sub_01a59ea0();
};

// @baa 0x01a59ea0
void C_01a59ea0::sub_01a59ea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

extern char g_02409a98[];
struct C_01a59ee0 { void sub_01a59ee0(void); };

// @baa 0x01a59ee0
void C_01a59ee0::sub_01a59ee0(void) { *(int*)((char*)this + 0) = (int)g_02409a98; }

struct C_01a59ef0 {
    undefined4 * sub_01a59ef0(byte);
};

// @baa 0x01a59ef0
undefined4 * C_01a59ef0::sub_01a59ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02409a98));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a59f10 {
    void sub_01a59f10();
};

// @baa 0x01a59f10
void C_01a59f10::sub_01a59f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x26] = (undefined4)((&g_02409a98));
  param_1[0x20] = (undefined4)((&g_02409a98));
  *param_1 = (undefined4)((&g_02406e04));
  return;
}

struct C_01a59fb0 { int sub_01a59fb0(void); };

// @baa 0x01a59fb0
int C_01a59fb0::sub_01a59fb0(void) { return *(int*)((char*)this + 20); }

struct C_01a59fc0 { void sub_01a59fc0(void); };

// @baa 0x01a59fc0
void C_01a59fc0::sub_01a59fc0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a59ff0 {
    undefined4 * sub_01a59ff0(byte);
};

// @baa 0x01a59ff0
undefined4 * C_01a59ff0::sub_01a59ff0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5a630
void sub_01a5a630(void) { sub_01a50ee0(); }

// @baa 0x01a5a640
void sub_01a5a640(void) { sub_01a50f40(); }

// @baa 0x01a5a650
void sub_01a5a650(void) { sub_01a50fa0(); }

// @baa 0x01a5a660
void sub_01a5a660(void) { sub_01a51020(); }

struct C_01a5ae80 {
    undefined4 * sub_01a5ae80(byte);
};

// @baa 0x01a5ae80
undefined4 * C_01a5ae80::sub_01a5ae80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x26] = (undefined4)((&g_02409a98));
  param_1[0x20] = (undefined4)((&g_02409a98));
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5b5e0
int sub_01a5b5e0(void) { return 4; }

struct C_01a5b5f0 {
    void sub_01a5b5f0();
};

// @baa 0x01a5b5f0
void C_01a5b5f0::sub_01a5b5f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[0x30] = (undefined4)((&g_02409a98));
  param_1[0x2a] = (undefined4)((&g_02409a98));
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a5b650 { int sub_01a5b650(void); };

// @baa 0x01a5b650
int C_01a5b650::sub_01a5b650(void) { return *(int*)((char*)this + 20); }

struct C_01a5b660 { void sub_01a5b660(void); };

// @baa 0x01a5b660
void C_01a5b660::sub_01a5b660(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a5b690 {
    undefined4 * sub_01a5b690(byte);
};

// @baa 0x01a5b690
undefined4 * C_01a5b690::sub_01a5b690(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5b7f0
void sub_01a5b7f0(void) { sub_01a50ee0(); }

// @baa 0x01a5b800
void sub_01a5b800(void) { sub_01a50f40(); }

// @baa 0x01a5b810
void sub_01a5b810(void) { sub_01a50fa0(); }

// @baa 0x01a5b820
void sub_01a5b820(void) { sub_01a51020(); }

// @baa 0x01a5bbf0
int sub_01a5bbf0(void) { return 3; }

struct C_01a5bc00 {
    void sub_01a5bc00();
};

// @baa 0x01a5bc00
void C_01a5bc00::sub_01a5bc00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a5bc40 { int sub_01a5bc40(void); };

// @baa 0x01a5bc40
int C_01a5bc40::sub_01a5bc40(void) { return *(int*)((char*)this + 20); }

struct C_01a5bc50 { void sub_01a5bc50(void); };

// @baa 0x01a5bc50
void C_01a5bc50::sub_01a5bc50(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a5bc80 {
    undefined4 * sub_01a5bc80(byte);
};

// @baa 0x01a5bc80
undefined4 * C_01a5bc80::sub_01a5bc80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5bd40
void sub_01a5bd40(void) { sub_01a50ee0(); }

// @baa 0x01a5bd50
void sub_01a5bd50(void) { sub_01a50f40(); }

// @baa 0x01a5bd60
void sub_01a5bd60(void) { sub_01a50fa0(); }

// @baa 0x01a5bd70
void sub_01a5bd70(void) { sub_01a51020(); }

// @baa 0x01a5c140
int sub_01a5c140(void) { return 1; }

struct C_01a5c150 {
    void sub_01a5c150();
};

// @baa 0x01a5c150
void C_01a5c150::sub_01a5c150(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a5c190 { int sub_01a5c190(void); };

// @baa 0x01a5c190
int C_01a5c190::sub_01a5c190(void) { return *(int*)((char*)this + 20); }

struct C_01a5c1a0 { void sub_01a5c1a0(void); };

// @baa 0x01a5c1a0
void C_01a5c1a0::sub_01a5c1a0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a5c1d0 {
    undefined4 * sub_01a5c1d0(byte);
};

// @baa 0x01a5c1d0
undefined4 * C_01a5c1d0::sub_01a5c1d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5c290
void sub_01a5c290(void) { sub_01a50ee0(); }

// @baa 0x01a5c2a0
void sub_01a5c2a0(void) { sub_01a50f40(); }

// @baa 0x01a5c2b0
void sub_01a5c2b0(void) { sub_01a50fa0(); }

// @baa 0x01a5c2c0
void sub_01a5c2c0(void) { sub_01a51020(); }

// @baa 0x01a5c690
int sub_01a5c690(void) { return 2; }

struct C_01a5c6a0 {
    void sub_01a5c6a0();
};

// @baa 0x01a5c6a0
void C_01a5c6a0::sub_01a5c6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a5c6e0 { int sub_01a5c6e0(void); };

// @baa 0x01a5c6e0
int C_01a5c6e0::sub_01a5c6e0(void) { return *(int*)((char*)this + 20); }

struct C_01a5c6f0 { void sub_01a5c6f0(void); };

// @baa 0x01a5c6f0
void C_01a5c6f0::sub_01a5c6f0(void) { *(int*)((char*)this + 0) = (int)g_0240940c; }

struct C_01a5c720 {
    undefined4 * sub_01a5c720(byte);
};

// @baa 0x01a5c720
undefined4 * C_01a5c720::sub_01a5c720(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240940c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01a5c7c0
void sub_01a5c7c0(void) { sub_01a50ee0(); }

// @baa 0x01a5c7d0
void sub_01a5c7d0(void) { sub_01a50f40(); }

// @baa 0x01a5c7e0
void sub_01a5c7e0(void) { sub_01a50fa0(); }

// @baa 0x01a5c7f0
void sub_01a5c7f0(void) { sub_01a51020(); }

// @baa 0x01a5cbe0
int sub_01a5cbe0(void) { return 0; }

struct C_01a5cbf0 {
    void sub_01a5cbf0();
};

// @baa 0x01a5cbf0
void C_01a5cbf0::sub_01a5cbf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[10] = (undefined4)((&g_02406e04));
  *param_1 = (undefined4)((&g_0240940c));
  return;
}

struct C_01a5cc30 {
    int sub_01a5cc30(int, int);
};

// @baa 0x01a5cc30
int C_01a5cc30::sub_01a5cc30(int param_2, int param_3)
{
    int param_1 = (int)this;

  return param_1 + param_3 * 4 + param_2 * 0xc;
}

struct C_01a5cd10 { int sub_01a5cd10(void); };

// @baa 0x01a5cd10
int C_01a5cd10::sub_01a5cd10(void) { return *(int*)((char*)this + 84); }

struct C_01a5cd40 { float sub_01a5cd40(void); };

// @baa 0x01a5cd40
float C_01a5cd40::sub_01a5cd40(void) { return *(float*)((char*)this + 48); }
