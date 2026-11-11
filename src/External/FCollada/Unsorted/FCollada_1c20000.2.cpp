// FCollada_1c20000.cpp (part 2 of 2): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_027d4d0c[];
// @baa 0x01c212b0
int sub_01c212b0(void) { return (int)g_027d4d0c; }

extern char g_027d4d14[];
// @baa 0x01c212c0
int sub_01c212c0(void) { return (int)g_027d4d14; }

int sub_01c26a20(void);
int sub_01c2af50(...);
// @baa 0x01c26a40
void sub_01c26a40(int param_1, int param_2)
{
  if ((param_1 != 0) && (param_2 != 0)) {
    sub_01c2af50(param_2,sub_01c26a20,param_1);
  }
  return;
}

int sub_01c27010(void);
// @baa 0x01c27030
void sub_01c27030(int param_1, int param_2)
{
  if ((param_1 != 0) && (param_2 != 0)) {
    sub_01c2af50(param_2,sub_01c27010,param_1);
  }
  return;
}

int sub_01c27310(void);
// @baa 0x01c27330
void sub_01c27330(int param_1, int param_2)
{
  if ((param_1 != 0) && (param_2 != 0)) {
    sub_01c2af50(param_2,&sub_01c27310,param_1);
  }
  return;
}

int sub_01c29140(void);
// @baa 0x01c29160
void sub_01c29160(undefined4 param_1, undefined4 param_2)
{
  sub_01c2af50(param_2,sub_01c29140,param_1);
  return;
}

int sub_01c2a900(...);
// @baa 0x01c2aec0
void sub_01c2aec0(undefined4 param_1, undefined4 param_2)
{
  sub_01c2a900(param_1,param_2,0,0);
  return;
}

extern undefined4 g_026143f0;
extern undefined4 g_027d4d34;
extern undefined4 g_027d4d8c;
// @baa 0x01c2d640
void sub_01c2d640(void)
{
  (*(code *)g_026143f0)
            (g_027d4d34,"xmlMallocBreakpoint reached on block %d\012",g_027d4d8c);
  return;
}

int sub_01c2a0a0(int);
// @baa 0x01c28c80
int sub_01c28c80()
{
    return sub_01c2a0a0(0);
}
