// FCollada_18a0000.cpp (part 1 of 2): 76 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    uint sub_018a2300();
};

// @baa 0x018a2300
uint C::sub_018a2300(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 7 & 1;
}

struct C_018a2310 {
    uint sub_018a2310();
};

// @baa 0x018a2310
uint C_018a2310::sub_018a2310(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 8 & 1;
}

struct C_018a2320 { char* sub_018a2320(void); };

// @baa 0x018a2320
char* C_018a2320::sub_018a2320(void) { return (char*)this + 116; }

struct C_018a2330 { char* sub_018a2330(void); };

// @baa 0x018a2330
char* C_018a2330::sub_018a2330(void) { return (char*)this + 176; }

struct C_018a2340 { char* sub_018a2340(void); };

// @baa 0x018a2340
char* C_018a2340::sub_018a2340(void) { return (char*)this + 196; }

struct C_018a2370 { int sub_018a2370(void); };

// @baa 0x018a2370
int C_018a2370::sub_018a2370(void) { return *(int*)((char*)this + 112); }

struct C_018a2660 {
    uint sub_018a2660();
};

// @baa 0x018a2660
uint C_018a2660::sub_018a2660(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 5 & 1;
}

struct C_018a2670 { char* sub_018a2670(void); };

// @baa 0x018a2670
char* C_018a2670::sub_018a2670(void) { return (char*)this + 100; }

struct C_018a2680 { int sub_018a2680(void); };

// @baa 0x018a2680
int C_018a2680::sub_018a2680(void) { return *(int*)((char*)this + 36); }

struct C_018a2690 { int sub_018a2690(void); };

// @baa 0x018a2690
int C_018a2690::sub_018a2690(void) { return *(int*)((char*)this + 36); }

struct C_018a26c0 { int sub_018a26c0(void); };

// @baa 0x018a26c0
int C_018a26c0::sub_018a26c0(void) { return *(int*)((char*)this + 88); }

struct C_018a26d0 { int sub_018a26d0(void); };

// @baa 0x018a26d0
int C_018a26d0::sub_018a26d0(void) { return *(int*)((char*)this + 60); }

struct C_018a26e0 { int sub_018a26e0(void); };

// @baa 0x018a26e0
int C_018a26e0::sub_018a26e0(void) { return *(int*)((char*)this + 64); }

struct C_018a26f0 { int sub_018a26f0(void); };

// @baa 0x018a26f0
int C_018a26f0::sub_018a26f0(void) { return *(int*)((char*)this + 40); }

struct C_018a6950 { char* sub_018a6950(void); };

// @baa 0x018a6950
char* C_018a6950::sub_018a6950(void) { return (char*)this + 56; }

struct C_018a6960 { char* sub_018a6960(void); };

// @baa 0x018a6960
char* C_018a6960::sub_018a6960(void) { return (char*)this + 132; }

struct C_018a6970 { char* sub_018a6970(void); };

// @baa 0x018a6970
char* C_018a6970::sub_018a6970(void) { return (char*)this + 132; }

struct C_018a6980 { char* sub_018a6980(void); };

// @baa 0x018a6980
char* C_018a6980::sub_018a6980(void) { return (char*)this + 100; }

struct C_018a6b40 { int sub_018a6b40(void); };

// @baa 0x018a6b40
int C_018a6b40::sub_018a6b40(void) { return *(int*)((char*)this + 52); }

struct C_018a6b50 { char* sub_018a6b50(void); };

// @baa 0x018a6b50
char* C_018a6b50::sub_018a6b50(void) { return (char*)this + 72; }

struct C_018a6b60 { int sub_018a6b60(void); };

// @baa 0x018a6b60
int C_018a6b60::sub_018a6b60(void) { return *(int*)((char*)this + 100); }

struct C_018a6b70 { int sub_018a6b70(void); };

// @baa 0x018a6b70
int C_018a6b70::sub_018a6b70(void) { return *(int*)((char*)this + 48); }

struct C_018a6b80 { int sub_018a6b80(void); };

// @baa 0x018a6b80
int C_018a6b80::sub_018a6b80(void) { return *(int*)((char*)this + 120); }

struct C_018a6b90 { int sub_018a6b90(void); };

// @baa 0x018a6b90
int C_018a6b90::sub_018a6b90(void) { return *(int*)((char*)this + 140); }

struct C_018a6ba0 { int sub_018a6ba0(void); };

// @baa 0x018a6ba0
int C_018a6ba0::sub_018a6ba0(void) { return *(int*)((char*)this + 100); }

struct C_018a6bb0 { int sub_018a6bb0(void); };

// @baa 0x018a6bb0
int C_018a6bb0::sub_018a6bb0(void) { return *(int*)((char*)this + 176); }

int sub_018a6f20(...);
int sub_018a9cc0(...);
// @baa 0x018a7030
undefined4 sub_018a7030(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_018a6f20(param_1,param_2);
  sub_018a9cc0(param_1,uVar1);
  return uVar1;
}

// @baa 0x018a72c0
undefined4 sub_018a72c0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_018a6f20(param_1,param_2);
  sub_018a9cc0(param_1,uVar1);
  return uVar1;
}

int sub_018a7060(...);
int sub_01bfce20(...);
int sub_01bfcfe0(...);
extern undefined4 g_023ef8d0;
// @baa 0x018a75f0
undefined4 sub_018a75f0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_018a7060(param_1,param_2);
  sub_01bfce20(uVar1,"sprite");
  sub_01bfcfe0(uVar1,&g_023ef8d0);
  return uVar1;
}

struct C_018a79a0 { int sub_018a79a0(void); };

// @baa 0x018a79a0
int C_018a79a0::sub_018a79a0(void) { return *(int*)((char*)this + 36); }

struct C_018a79b0 { char* sub_018a79b0(void); };

// @baa 0x018a79b0
char* C_018a79b0::sub_018a79b0(void) { return (char*)this + 48; }

struct C_018a79c0 { int sub_018a79c0(void); };

// @baa 0x018a79c0
int C_018a79c0::sub_018a79c0(void) { return *(int*)((char*)this + 36); }

struct C_018a79d0 { int sub_018a79d0(void); };

// @baa 0x018a79d0
int C_018a79d0::sub_018a79d0(void) { return *(int*)((char*)this + 4); }

struct C_018a7a40 { int sub_018a7a40(void); };

// @baa 0x018a7a40
int C_018a7a40::sub_018a7a40(void) { return *(int*)((char*)this + 112); }

struct C_018a7a50 { int sub_018a7a50(void); };

// @baa 0x018a7a50
int C_018a7a50::sub_018a7a50(void) { return *(int*)((char*)this + 44); }

struct C_018a7a60 { int sub_018a7a60(void); };

// @baa 0x018a7a60
int C_018a7a60::sub_018a7a60(void) { return *(int*)((char*)this + 64); }

struct C_018a7a70 { int sub_018a7a70(void); };

// @baa 0x018a7a70
int C_018a7a70::sub_018a7a70(void) { return *(int*)((char*)this + 44); }

struct C_018a86b0 { char* sub_018a86b0(void); };

// @baa 0x018a86b0
char* C_018a86b0::sub_018a86b0(void) { return (char*)this + 76; }

struct C_018a86c0 {
    undefined1 sub_018a86c0();
};

// @baa 0x018a86c0
undefined1 C_018a86c0::sub_018a86c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x70);
}

struct C_018a86d0 { char* sub_018a86d0(void); };

// @baa 0x018a86d0
char* C_018a86d0::sub_018a86d0(void) { return (char*)this + 52; }

struct C_018a86e0 { int sub_018a86e0(void); };

// @baa 0x018a86e0
int C_018a86e0::sub_018a86e0(void) { return *(int*)((char*)this + 88); }

struct C_018a86f0 { char* sub_018a86f0(void); };

// @baa 0x018a86f0
char* C_018a86f0::sub_018a86f0(void) { return (char*)this + 64; }

struct C_018a8700 { char* sub_018a8700(void); };

// @baa 0x018a8700
char* C_018a8700::sub_018a8700(void) { return (char*)this + 76; }

struct C_018a8710 { int sub_018a8710(void); };

// @baa 0x018a8710
int C_018a8710::sub_018a8710(void) { return *(int*)((char*)this + 36); }

struct C_018a8740 {
    void sub_018a8740();
};

void sub_01826080(void *);
// @baa 0x018a8740
void C_018a8740::sub_018a8740(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018a87f0 { int sub_018a87f0(void); };

// @baa 0x018a87f0
int C_018a87f0::sub_018a87f0(void) { return *(int*)((char*)this + 88); }

struct C_018a8800 { int sub_018a8800(void); };

// @baa 0x018a8800
int C_018a8800::sub_018a8800(void) { return *(int*)((char*)this + 48); }

struct C_018a8810 { int sub_018a8810(void); };

// @baa 0x018a8810
int C_018a8810::sub_018a8810(void) { return *(int*)((char*)this + 88); }

struct C_018a8820 { int sub_018a8820(void); };

// @baa 0x018a8820
int C_018a8820::sub_018a8820(void) { return *(int*)((char*)this + 76); }

struct C_018a8830 { int sub_018a8830(void); };

// @baa 0x018a8830
int C_018a8830::sub_018a8830(void) { return *(int*)((char*)this + 56); }

struct C_018a9bf0 {
    undefined1 sub_018a9bf0();
};

// @baa 0x018a9bf0
undefined1 C_018a9bf0::sub_018a9bf0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x78);
}

struct C_018a9c00 {
    undefined1 sub_018a9c00();
};

// @baa 0x018a9c00
undefined1 C_018a9c00::sub_018a9c00(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x79);
}

struct C_018a9c10 { char* sub_018a9c10(void); };

// @baa 0x018a9c10
char* C_018a9c10::sub_018a9c10(void) { return (char*)this + 140; }

struct C_018a9c40 { char* sub_018a9c40(void); };

// @baa 0x018a9c40
char* C_018a9c40::sub_018a9c40(void) { return (char*)this + 40; }

struct C_018a9c50 { char* sub_018a9c50(void); };

// @baa 0x018a9c50
char* C_018a9c50::sub_018a9c50(void) { return (char*)this + 56; }

struct C_018a9c60 { char* sub_018a9c60(void); };

// @baa 0x018a9c60
char* C_018a9c60::sub_018a9c60(void) { return (char*)this + 56; }

struct C_018a9c70 { char* sub_018a9c70(void); };

// @baa 0x018a9c70
char* C_018a9c70::sub_018a9c70(void) { return (char*)this + 180; }

struct C_018a9d40 { float sub_018a9d40(void); };

// @baa 0x018a9d40
float C_018a9d40::sub_018a9d40(void) { return *(float*)((char*)this + 128); }

struct C_018a9d50 { float sub_018a9d50(void); };

// @baa 0x018a9d50
float C_018a9d50::sub_018a9d50(void) { return *(float*)((char*)this + 136); }

struct C_018a9d60 { int sub_018a9d60(void); };

// @baa 0x018a9d60
int C_018a9d60::sub_018a9d60(void) { return *(int*)((char*)this + 104); }

struct C_018a9d70 { char* sub_018a9d70(void); };

// @baa 0x018a9d70
char* C_018a9d70::sub_018a9d70(void) { return (char*)this + 72; }

struct C_018a9d80 { char* sub_018a9d80(void); };

// @baa 0x018a9d80
char* C_018a9d80::sub_018a9d80(void) { return (char*)this + 88; }

struct C_018a9d90 { char* sub_018a9d90(void); };

// @baa 0x018a9d90
char* C_018a9d90::sub_018a9d90(void) { return (char*)this + 104; }

struct C_018a9da0 { char* sub_018a9da0(void); };

// @baa 0x018a9da0
char* C_018a9da0::sub_018a9da0(void) { return (char*)this + 72; }

struct C_018a9db0 { char* sub_018a9db0(void); };

// @baa 0x018a9db0
char* C_018a9db0::sub_018a9db0(void) { return (char*)this + 88; }

struct C_018a9dc0 { char* sub_018a9dc0(void); };

// @baa 0x018a9dc0
char* C_018a9dc0::sub_018a9dc0(void) { return (char*)this + 104; }

int sub_018aa210(...);
// @baa 0x018aa570
void sub_018aa570(undefined4 param_1, undefined4 param_2)
{
  sub_018aa210(param_1,param_2,"unknown",1);
  return;
}

struct C_018aba60 {
    void sub_018aba60();
};

// @baa 0x018aba60
void C_018aba60::sub_018aba60(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20;
  return;
}

// @baa 0x018aba70
undefined1 sub_018aba70(void)
{
  return 0;
}

struct C_018ae5b0 { char* sub_018ae5b0(void); };

// @baa 0x018ae5b0
char* C_018ae5b0::sub_018ae5b0(void) { return (char*)this + 192; }

void sub_0185b360();
// @baa 0x018ae5d0
void sub_018ae5d0(void) { sub_0185b360(); }

struct C_018ae5e0 { int sub_018ae5e0(void); };

// @baa 0x018ae5e0
int C_018ae5e0::sub_018ae5e0(void) { return *(int*)((char*)this + 100); }

struct C_018ae680 { int sub_018ae680(void); };

// @baa 0x018ae680
int C_018ae680::sub_018ae680(void) { return *(int*)((char*)this + 68); }

struct C_018ae690 {
    void sub_018ae690(undefined1);
};

// @baa 0x018ae690
void C_018ae690::sub_018ae690(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 100) = param_2;
  return;
}

struct C_018ae6a0 { int sub_018ae6a0(void); };

// @baa 0x018ae6a0
int C_018ae6a0::sub_018ae6a0(void) { return *(int*)((char*)this + 72); }

struct C_018ae6b0 { void sub_018ae6b0(int a0); };

// @baa 0x018ae6b0
void C_018ae6b0::sub_018ae6b0(int a0) { *(int*)((char*)this + 96) = a0; }
