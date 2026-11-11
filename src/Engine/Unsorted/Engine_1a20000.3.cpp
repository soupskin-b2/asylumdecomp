// Engine_1a20000.cpp (part 3 of 3): 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_01a282e0 { int a, b, c; C_01a282e0(); };

// @baa 0x01a282e0
C_01a282e0::C_01a282e0() : a(0), b(0), c(0) {}

struct C_01a28300 { int a, b, c; C_01a28300(); };

// @baa 0x01a28300
C_01a28300::C_01a28300() : a(0), b(0), c(0) {}

struct C_01a28310 { int a, b, c; C_01a28310(); };

// @baa 0x01a28310
C_01a28310::C_01a28310() : a(0), b(0), c(0) {}

struct C_01a28320 { int a, b, c; C_01a28320(); };

// @baa 0x01a28320
C_01a28320::C_01a28320() : a(0), b(0), c(0) {}

struct C_01a28330 { int a, b, c; C_01a28330(); };

// @baa 0x01a28330
C_01a28330::C_01a28330() : a(0), b(0), c(0) {}

struct C_01a28340 { int a, b, c; C_01a28340(); };

// @baa 0x01a28340
C_01a28340::C_01a28340() : a(0), b(0), c(0) {}

struct C {
    void sub_01a28590(undefined4);
};

// @baa 0x01a28590
void C::sub_01a28590(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

struct C_01a286f0 {
    void sub_01a286f0(undefined4);
};

// @baa 0x01a286f0
void C_01a286f0::sub_01a286f0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

struct C_01a28770 {
    void sub_01a28770(undefined4);
};

// @baa 0x01a28770
void C_01a28770::sub_01a28770(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// @baa 0x01a28c50
undefined4 sub_01a28c50(void)
{
  return 0;
}

// @baa 0x01a28cd0
undefined4 sub_01a28cd0(void)
{
  return 0;
}

struct C_01a28dc0 {
    undefined4 sub_01a28dc0();
};

// @baa 0x01a28dc0
undefined4 C_01a28dc0::sub_01a28dc0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01a28eb0 {
    undefined4 sub_01a28eb0();
};

// @baa 0x01a28eb0
undefined4 C_01a28eb0::sub_01a28eb0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x01a28f00
undefined4 sub_01a28f00(void)
{
  return 0;
}

extern undefined4 g_024052a8;
// @baa 0x01a29180
undefined * sub_01a29180(void)
{
  return (undefined *)(&g_024052a8);
}

struct C_01a2b7f0 {
    int * sub_01a2b7f0(int *, undefined4);
    int sub_01a2a2f0(int);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a2b7f0
int * C_01a2b7f0::sub_01a2b7f0(int * param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_01a2b7f0 *)(this))->sub_01a2a2f0(param_3);
  *param_2 = 0;
  param_2[1] = iVar1;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = param_1;
  return param_2;
}

struct C_01a2baf0 {
    undefined4 sub_01a2baf0(undefined4 a, undefined4 b);
};

// @baa 0x01a2baf0
undefined4 C_01a2baf0::sub_01a2baf0(undefined4 a, undefined4 b)
{
    return (undefined4)this;
}

struct C_01a2be60{
void sub_01a2be60();
int sub_01a2b4d0();
};

// @baa 0x01a2be60
void C_01a2be60::sub_01a2be60(void)
{
int*param_1=(int*)this;
((C_01a2be60*)(this))->sub_01a2b4d0();
param_1=(int*)*param_1;
if(param_1!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_1+8))((int)(param_1));
}
return;
}

struct C_01a2f150 {
    int * sub_01a2f150(int *, undefined4);
    int sub_01a2a110(int);
};

// @baa 0x01a2f150
int * C_01a2f150::sub_01a2f150(int * param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_01a2f150 *)(this))->sub_01a2a110(param_3);
  *param_2 = 0;
  param_2[1] = iVar1;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = param_1;
  return param_2;
}
