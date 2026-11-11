// fmod_segmentplayer.cpp (part 1 of 2): 17 functions
// Placed here by: neighbours 17.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    uint sub_017fa800();
};

// @baa 0x017fa800
uint C::sub_017fa800(void)
{
    int param_1 = (int)this;

  return (uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) % *(uint *)(param_1 + 0xc);
}

extern char g_023e0a44[];
struct C_017fa830 { C_017fa830* sub_017fa830(void); };

// @baa 0x017fa830
C_017fa830* C_017fa830::sub_017fa830(void) { *(int*)((char*)this + 0) = (int)g_023e0a44; return this; }

struct C_017fa900 {
    void sub_017fa900();
};

// @baa 0x017fa900
void C_017fa900::sub_017fa900(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

struct C_017fa9c0 {
    void sub_017fa9c0(undefined4, undefined4);
};

// @baa 0x017fa9c0
void C_017fa9c0::sub_017fa9c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x94);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
  }
  return;
}

struct C_017fabb0 {
    undefined4 sub_017fabb0(undefined4 *);
};

// @baa 0x017fabb0
undefined4 C_017fabb0::sub_017fabb0(undefined4 * param_2)
{
    int param_1 = (int)this;

  if (param_2 == (undefined4 *)0x0) {
    return 0x25;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  return 0;
}

struct C_017fae00 {
    undefined4 sub_017fae00();
};

// @baa 0x017fae00
undefined4 C_017fae00::sub_017fae00(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x10);
  }
  return 0;
}

struct C_017faf80 {
    undefined1 sub_017faf80();
};

// @baa 0x017faf80
undefined1 C_017faf80::sub_017faf80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_017faf90 {
    undefined1 sub_017faf90();
};

// @baa 0x017faf90
undefined1 C_017faf90::sub_017faf90(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 9);
}

struct C_017fafa0 {
    undefined8 sub_017fafa0();
};

// @baa 0x017fafa0
undefined8 C_017fafa0::sub_017fafa0(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x10);
}

struct C_017fafb0 { int sub_017fafb0(void); };

// @baa 0x017fafb0
int C_017fafb0::sub_017fafb0(void) { return *(int*)((char*)this + 32); }

struct C_017fafc0 { int sub_017fafc0(void); };

// @baa 0x017fafc0
int C_017fafc0::sub_017fafc0(void) { return *(int*)((char*)this + 36); }

struct C_017fafd0 { int sub_017fafd0(void); };

// @baa 0x017fafd0
int C_017fafd0::sub_017fafd0(void) { return *(int*)((char*)this + 40); }

struct C_017fafe0 {
    undefined1 sub_017fafe0();
};

// @baa 0x017fafe0
undefined1 C_017fafe0::sub_017fafe0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2d);
}

struct C_017faff0 {
    undefined1 sub_017faff0();
};

// @baa 0x017faff0
undefined1 C_017faff0::sub_017faff0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x2c);
}

struct C_017fb000 {
    undefined8 sub_017fb000();
};

// @baa 0x017fb000
undefined8 C_017fb000::sub_017fb000(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x30);
}

struct C_017fb010 {
    undefined8 sub_017fb010();
};

// @baa 0x017fb010
undefined8 C_017fb010::sub_017fb010(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x18);
}

struct C_017fb170 {
    int sub_017fb170();
};

int sub_017fb130(void);
// @baa 0x017fb170
int C_017fb170::sub_017fb170(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_017fb130();
  if (iVar1 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 8) = 0;
    iVar1 = 0;
  }
  return iVar1;
}
