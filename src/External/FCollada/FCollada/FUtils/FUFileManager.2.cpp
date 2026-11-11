// FUFileManager.cpp (part 2 of 3): 19 functions
// Placed here by: neighbours 19.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01850880();
};

void sub_01826080(void *);
// @baa 0x01850880
void C::sub_01850880(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01850890 { int sub_01850890(void); };

// @baa 0x01850890
int C_01850890::sub_01850890(void) { return *(int*)((char*)this + 4); }

struct C_018508a0 {
    bool sub_018508a0();
};

// @baa 0x018508a0
bool C_018508a0::sub_018508a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

struct C_018508c0 { int sub_018508c0(void); };

// @baa 0x018508c0
int C_018508c0::sub_018508c0(void) { return *(int*)((char*)this + 4); }

struct C_018509b0 {
    int sub_018509b0();
};

// @baa 0x018509b0
int C_018509b0::sub_018509b0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_018509c0 {
    bool sub_018509c0(int *);
};

// @baa 0x018509c0
bool C_018509c0::sub_018509c0(int * param_2)
{
    int * param_1 = (int *)this;

  return *param_2 != *param_1;
}

struct C_01850a10 {
    int sub_01850a10();
};

// @baa 0x01850a10
int C_01850a10::sub_01850a10(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x10;
}

struct C_01850a20 {
    int sub_01850a20();
};

// @baa 0x01850a20
int C_01850a20::sub_01850a20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_01850a30 {
    int sub_01850a30();
};

// @baa 0x01850a30
int C_01850a30::sub_01850a30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x5c + *(int *)(param_1 + 8);
}

struct C_01850b20 { int sub_01850b20(void); };

// @baa 0x01850b20
int C_01850b20::sub_01850b20(void) { return *(int*)((char*)this + 8); }

struct C_01850b60 { int sub_01850b60(void); };

// @baa 0x01850b60
int C_01850b60::sub_01850b60(void) { return *(int*)((char*)this + 8); }

// @baa 0x01850bd0
uint * sub_01850bd0(uint * param_1, uint * param_2)
{
  if (*param_1 <= *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// @baa 0x01850c20
void sub_01850c20(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

struct C_01850ca0 {
    void sub_01850ca0();
};

int sub_01850900(void);
// @baa 0x01850ca0
void C_01850ca0::sub_01850ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01850900();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01851060 {
    void sub_01851060();
};

// @baa 0x01851060
void C_01851060::sub_01851060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01850900();
  sub_01826080((void *)*param_1);
  *param_1 = 0;
  return;
}

struct C_01851100 {
    undefined4 sub_01851100(byte);
};

int sub_00402660(...);
int sub_0184b1a0(void);
// @baa 0x01851100
undefined4 C_01851100::sub_01851100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184b1a0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01851120
void sub_01851120(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

struct C_01851140 {
    undefined4 sub_01851140(byte);
};

int sub_0184f3e0(void);
// @baa 0x01851140
undefined4 C_01851140::sub_01851140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0184f3e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018511e0 {
    undefined4 * sub_018511e0();
};

void * sub_01826070(size_t);
// @baa 0x018511e0
undefined4 * C_018511e0::sub_018511e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)(sub_01826070(0x18));
  *param_1 = (undefined4)(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return param_1;
}
