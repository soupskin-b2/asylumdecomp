// Core_1800000.cpp: 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined * g_025f7758;
// @baa 0x018028f0
undefined ** sub_018028f0(undefined4 param_1, int param_2)
{
  if (9 < param_2 - 1U) {
    return (undefined **)0x0;
  }
  return &g_025f7758 + param_2 * 6;
}

// @baa 0x01802990
void sub_01802990(void) {  }

// @baa 0x01803a60
int sub_01803a60(void) { return 0; }

// @baa 0x01803a70
void sub_01803a70(int param_1)
{
  char *pcVar1;
  undefined1 *puVar2;
  
  pcVar1 = *(char **)(param_1 + 0x1c);
  *(char **)(param_1 + 0x1c) = pcVar1 + 1;
  *pcVar1 = *(char *)(param_1 + 0x204) + '\x01';
  puVar2 = *(undefined1 **)(param_1 + 0x1c);
  *(undefined1 **)(param_1 + 0x1c) = puVar2 + 1;
  *puVar2 = 0;
  puVar2 = *(undefined1 **)(param_1 + 0x1c);
  *(undefined1 **)(param_1 + 0x1c) = puVar2 + 1;
  *puVar2 = 0;
  return;
}

// @baa 0x01803ab0
int sub_01803ab0(void) { return 0; }

// @baa 0x01803ac0
void sub_01803ac0(void) {  }

// @baa 0x01803ce0
int sub_01803ce0(void) { return 0; }

// @baa 0x01803cf0
bool sub_01803cf0(undefined4 param_1, int * param_2)
{
  return *param_2 == 0;
}

// @baa 0x01803d00
bool sub_01803d00(undefined4 param_1, uint * param_2)
{
  return *param_2 < 3;
}

// @baa 0x01804120
void sub_01804120(int param_1)
{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x1c);
  *(undefined1 **)(param_1 + 0x1c) = puVar1 + 1;
  *puVar1 = 0;
  return;
}

// @baa 0x01804140
int sub_01804140(void) { return 0; }

// @baa 0x01804150
bool sub_01804150(undefined4 param_1, int * param_2)
{
  return *param_2 == 0;
}

// @baa 0x01804160
bool sub_01804160(undefined4 param_1, uint * param_2)
{
  return *param_2 < 3;
}

// @baa 0x01804270
int sub_01804270(void) { return 0; }

void sub_01804280();
// @baa 0x01804280
void sub_01804280(void) { sub_01804280(); }

void sub_01804290();
// @baa 0x01804290
void sub_01804290(void) { sub_01804290(); }

void sub_018042a0();
// @baa 0x018042a0
void sub_018042a0(void) { sub_018042a0(); }

void sub_018042b0();
// @baa 0x018042b0
void sub_018042b0(void) { sub_018042b0(); }

// @baa 0x018042c0
int sub_018042c0(void) { return 9; }

// @baa 0x018042d0
bool sub_018042d0(undefined4 param_1, int * param_2)
{
  return *param_2 == 0;
}

// @baa 0x018042e0
bool sub_018042e0(undefined4 param_1, uint * param_2)
{
  return *param_2 < 3;
}

extern char g_023e1810[];
// @baa 0x0180be50
int sub_0180be50(void) { return (int)g_023e1810; }

// @baa 0x0180c630
void sub_0180c630(void) {  }
