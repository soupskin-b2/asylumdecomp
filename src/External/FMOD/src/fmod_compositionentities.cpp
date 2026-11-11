// fmod_compositionentities.cpp (part 1 of 3): 74 functions
// Placed here by: neighbours 73, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_017e9080(int a0); };

// @baa 0x017e9080
void C::sub_017e9080(int a0) { *(int*)((char*)this + 32) = a0; }

struct C_017e9090 {
    void sub_017e9090(undefined1);
};

// @baa 0x017e9090
void C_017e9090::sub_017e9090(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}

struct C_017e90c0 { void sub_017e90c0(int a0); };

// @baa 0x017e90c0
void C_017e90c0::sub_017e90c0(int a0) { *(int*)((char*)this + 20) = a0; }

struct C_017e90d0 { void sub_017e90d0(int a0); };

// @baa 0x017e90d0
void C_017e90d0::sub_017e90d0(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_017e90e0 { void sub_017e90e0(int a0); };

// @baa 0x017e90e0
void C_017e90e0::sub_017e90e0(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_017e90f0 {
    void sub_017e90f0(undefined1);
};

// @baa 0x017e90f0
void C_017e90f0::sub_017e90f0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x11) = param_2;
  return;
}

extern char g_023e0084[];
struct C_017e9100 { void sub_017e9100(void); };

// @baa 0x017e9100
void C_017e9100::sub_017e9100(void) { *(int*)((char*)this + 0) = (int)g_023e0084; }

struct C_017e9110 {
    undefined4 * sub_017e9110(byte);
};

int sub_00402660(...);
// @baa 0x017e9110
undefined4 * C_017e9110::sub_017e9110(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0084));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e9150 { int sub_017e9150(void); };

// @baa 0x017e9150
int C_017e9150::sub_017e9150(void) { return *(int*)((char*)this + 8); }

struct C_017e9160 { char* sub_017e9160(void); };

// @baa 0x017e9160
char* C_017e9160::sub_017e9160(void) { return (char*)this + 12; }

struct C_017e91f0 { float sub_017e91f0(void); };

// @baa 0x017e91f0
float C_017e91f0::sub_017e91f0(void) { return *(float*)((char*)this + 8); }

extern char g_023dfefc[];
struct C_017e9200 { void sub_017e9200(void); };

// @baa 0x017e9200
void C_017e9200::sub_017e9200(void) { *(int*)((char*)this + 0) = (int)g_023dfefc; }

extern char g_023dff0c[];
struct C_017e9260 { void sub_017e9260(void); };

// @baa 0x017e9260
void C_017e9260::sub_017e9260(void) { *(int*)((char*)this + 0) = (int)g_023dff0c; }

struct C_017e92c0 { int sub_017e92c0(void); };

// @baa 0x017e92c0
int C_017e92c0::sub_017e92c0(void) { return *(int*)((char*)this + 16); }

struct C_017e92d0 { int sub_017e92d0(void); };

// @baa 0x017e92d0
int C_017e92d0::sub_017e92d0(void) { return *(int*)((char*)this + 20); }

struct C_017e92e0 { int sub_017e92e0(void); };

// @baa 0x017e92e0
int C_017e92e0::sub_017e92e0(void) { return *(int*)((char*)this + 32); }

struct C_017e92f0 { int sub_017e92f0(void); };

// @baa 0x017e92f0
int C_017e92f0::sub_017e92f0(void) { return *(int*)((char*)this + 24); }

struct C_017e9300 { int sub_017e9300(void); };

// @baa 0x017e9300
int C_017e9300::sub_017e9300(void) { return *(int*)((char*)this + 28); }

extern char g_023dff20[];
struct C_017e9310 { void sub_017e9310(void); };

// @baa 0x017e9310
void C_017e9310::sub_017e9310(void) { *(int*)((char*)this + 0) = (int)g_023dff20; }

extern char g_023dff50[];
struct C_017e9340 { void sub_017e9340(void); };

// @baa 0x017e9340
void C_017e9340::sub_017e9340(void) { *(int*)((char*)this + 0) = (int)g_023dff50; }

extern char g_023e0100[];
struct C_017e9370 { void sub_017e9370(void); };

// @baa 0x017e9370
void C_017e9370::sub_017e9370(void) { *(int*)((char*)this + 0) = (int)g_023e0100; }

struct C_017e9380 { int sub_017e9380(void); };

// @baa 0x017e9380
int C_017e9380::sub_017e9380(void) { return *(int*)((char*)this + 4); }

struct C_017e9390 { int sub_017e9390(void); };

// @baa 0x017e9390
int C_017e9390::sub_017e9390(void) { return *(int*)((char*)this + 8); }

struct C_017e93a0 {
    bool sub_017e93a0();
};

// @baa 0x017e93a0
bool C_017e93a0::sub_017e93a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_017e93b0 {
    undefined4 * sub_017e93b0(byte);
};

// @baa 0x017e93b0
undefined4 * C_017e93b0::sub_017e93b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0100));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff58[];
struct C_017e9410 { void sub_017e9410(void); };

// @baa 0x017e9410
void C_017e9410::sub_017e9410(void) { *(int*)((char*)this + 0) = (int)g_023dff58; }

struct C_017e9420 {
    undefined4 * sub_017e9420(byte);
};

// @baa 0x017e9420
undefined4 * C_017e9420::sub_017e9420(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff58));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dff84[];
struct C_017e94a0 { void sub_017e94a0(void); };

// @baa 0x017e94a0
void C_017e94a0::sub_017e94a0(void) { *(int*)((char*)this + 0) = (int)g_023dff84; }

struct C_017e94b0 {
    undefined4 * sub_017e94b0(byte);
};

// @baa 0x017e94b0
undefined4 * C_017e94b0::sub_017e94b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff84));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017e94d0 { C_017e94d0* sub_017e94d0(void); };

// @baa 0x017e94d0
C_017e94d0* C_017e94d0::sub_017e94d0(void) { *(int*)((char*)this + 0) = (int)g_023e0084; return this; }

// @baa 0x017e9550
int sub_017e9550(void) { return 1936614259; }

// @baa 0x017e9600
int sub_017e9600(void) { return 1936550004; }

// @baa 0x017e96b0
int sub_017e96b0(void) { return 1936616564; }

// @baa 0x017e97c0
int sub_017e97c0(void) { return 1936549747; }

// @baa 0x017e9870
int sub_017e9870(void) { return 1936420460; }

extern char g_023e0230[];
struct C_017e98b0 { C_017e98b0* sub_017e98b0(void); };

// @baa 0x017e98b0
C_017e98b0* C_017e98b0::sub_017e98b0(void) { *(int*)((char*)this + 0) = (int)g_023e0230; return this; }

// @baa 0x017e9970
int sub_017e9970(int a0) { return a0; }

// @baa 0x017e9fb0
int sub_017e9fb0(void) { return 0; }

struct C_017ea1d0 {
    undefined4 sub_017ea1d0(void *, uint *);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x017ea1d0
undefined4 C_017ea1d0::sub_017ea1d0(void * param_2, uint * param_3)
{
    int param_1 = (int)this;

  if (*param_3 < *(uint *)(param_1 + 0x2c)) {
    return 0x21;
  }
  sub_01a375f0(param_2,*(void **)(param_1 + 0x24),*(uint *)(param_1 + 0x2c) * 4);
  *param_3 = *(uint *)(param_1 + 0x2c);
  return 0;
}

struct C_017ea3d0 {
    undefined4 sub_017ea3d0(undefined4);
};

// @baa 0x017ea3d0
undefined4 C_017ea3d0::sub_017ea3d0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  return 0;
}

// @baa 0x017ea3e0
int sub_017ea3e0(void) { return 0; }

struct C_017ea470 { float sub_017ea470(void); };

// @baa 0x017ea470
float C_017ea470::sub_017ea470(void) { return *(float*)((char*)this + 24); }

struct C_017ea480 { float sub_017ea480(void); };

// @baa 0x017ea480
float C_017ea480::sub_017ea480(void) { return *(float*)((char*)this + 28); }

struct C_017ea490 { int sub_017ea490(void); };

// @baa 0x017ea490
int C_017ea490::sub_017ea490(void) { return *(int*)((char*)this + 32); }

struct C_017ea4a0 { int sub_017ea4a0(void); };

// @baa 0x017ea4a0
int C_017ea4a0::sub_017ea4a0(void) { return *(int*)((char*)this + 12); }

struct C_017ea4b0 { int sub_017ea4b0(void); };

// @baa 0x017ea4b0
int C_017ea4b0::sub_017ea4b0(void) { return *(int*)((char*)this + 16); }

struct C_017ea4c0 { int sub_017ea4c0(void); };

// @baa 0x017ea4c0
int C_017ea4c0::sub_017ea4c0(void) { return *(int*)((char*)this + 36); }

extern char g_023dffac[];
struct C_017ea4d0 { void sub_017ea4d0(void); };

// @baa 0x017ea4d0
void C_017ea4d0::sub_017ea4d0(void) { *(int*)((char*)this + 0) = (int)g_023dffac; }

struct C_017ea670 {
    undefined4 sub_017ea670(uint *);
};

// @baa 0x017ea670
undefined4 C_017ea670::sub_017ea670(uint * param_2)
{
    int param_1 = (int)this;

  if (param_2 == (uint *)0x0) {
    return 0x25;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(uint *)(*(int *)(param_1 + 0x40) + 0x14) & 0x380;
  return 0;
}

struct C_017ea7b0 {
    undefined4 sub_017ea7b0(undefined4, undefined4);
};

// @baa 0x017ea7b0
undefined4 C_017ea7b0::sub_017ea7b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}

// @baa 0x017ea7d0
int sub_017ea7d0(void) { return 0; }

struct C_017ea980 { int sub_017ea980(void); };

// @baa 0x017ea980
int C_017ea980::sub_017ea980(void) { return *(int*)((char*)this + 16); }

// @baa 0x017eac00
int sub_017eac00(void) { return 1936029027; }

// @baa 0x017eac60
bool sub_017eac60(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) == param_1;
}

// @baa 0x017eae10
bool sub_017eae10(int param_1, int param_2)
{
  return *(int *)(param_2 + 8) == param_1;
}

// @baa 0x017eaff0
bool sub_017eaff0(int param_1, int param_2)
{
  return *(int *)(param_2 + 8) == param_1;
}

// @baa 0x017eb1b0
bool sub_017eb1b0(int param_1, int param_2)
{
  return *(int *)(param_2 + 8) == param_1;
}

// @baa 0x017eb760
bool sub_017eb760(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) == param_1;
}

// @baa 0x017eba20
bool sub_017eba20(int param_1, int param_2)
{
  return *(int *)(param_2 + 4) == param_1;
}

// @baa 0x017eba40
bool sub_017eba40(int param_1, int * param_2)
{
  return *param_2 == param_1;
}

struct C_017ebc70 {
    undefined4 sub_017ebc70(byte);
};

int sub_017e9170(void);
// @baa 0x017ebc70
undefined4 C_017ebc70::sub_017ebc70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_017e9170();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ebc90 {
    undefined4 * sub_017ebc90(byte);
};

// @baa 0x017ebc90
undefined4 * C_017ebc90::sub_017ebc90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfefc));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ebcb0 {
    undefined4 * sub_017ebcb0(byte);
};

// @baa 0x017ebcb0
undefined4 * C_017ebcb0::sub_017ebcb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff0c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ebcd0 {
    undefined4 * sub_017ebcd0(byte);
};

// @baa 0x017ebcd0
undefined4 * C_017ebcd0::sub_017ebcd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff20));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ebcf0 {
    undefined4 * sub_017ebcf0(byte);
};

// @baa 0x017ebcf0
undefined4 * C_017ebcf0::sub_017ebcf0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff50));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x017ebda0
int sub_017ebda0(void) { return 1936552560; }

struct C_017ebfc0 {
    undefined4 * sub_017ebfc0(byte);
};

// @baa 0x017ebfc0
undefined4 * C_017ebfc0::sub_017ebfc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dffac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017f85c0 {
    undefined4 sub_017f85c0(undefined4);
};

// @baa 0x017f85c0
undefined4 C_017f85c0::sub_017f85c0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return 0;
}

struct C_017f8860 {
    undefined4 sub_017f8860(undefined4, undefined1 *);
};

// @baa 0x017f8860
undefined4 C_017f8860::sub_017f8860(undefined4 param_2, undefined1 * param_3)
{
    int param_1 = (int)this;

  *param_3 = *(undefined1 *)(param_1 + 0x11);
  return 0;
}

struct C_017f88e0 {
    undefined4 * sub_017f88e0(byte);
};

extern undefined4 g_023e08ac;
// @baa 0x017f88e0
undefined4 * C_017f88e0::sub_017f88e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e08ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x017f8960
int sub_017f8960(void) { return 1; }

struct C_017f8980 {
    undefined4 * sub_017f8980(byte);
};

// @baa 0x017f8980
undefined4 * C_017f8980::sub_017f8980(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e08ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x017f8a00
int sub_017f8a00(void) { return 2; }

struct C_017f8a20 {
    undefined4 * sub_017f8a20(byte);
};

// @baa 0x017f8a20
undefined4 * C_017f8a20::sub_017f8a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e08ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
