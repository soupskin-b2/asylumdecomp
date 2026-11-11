// TaskBrowser.cpp: 12 functions
// Placed here by: neighbours 8, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_025e9388[];
// @baa 0x0144ee40
int sub_0144ee40(void) { return (int)g_025e9388; }

extern char g_026dc4e4[];
// @baa 0x0144ee50
int sub_0144ee50(void) { return (int)g_026dc4e4; }

extern char g_02298490[];
// @baa 0x0144ef50
int sub_0144ef50(void) { return (int)g_02298490; }

extern char g_026dc510[];
// @baa 0x0144ef60
int sub_0144ef60(void) { return (int)g_026dc510; }

extern char g_0229ccc4[];
struct C { C* sub_0144ef70(void); };

// @baa 0x0144ef70
C* C::sub_0144ef70(void) { *(int*)((char*)this + 0) = (int)g_0229ccc4; return this; }

// @baa 0x0144ef80
void sub_0144ef80(void) {  }

struct SInner {
    int sub_0148d8e0();
};

struct SOuter {
    int sub_0144efd0(int arg1);
    char pad[0x188];
    SInner* inner;
};

// @baa 0x0144efd0
int SOuter::sub_0144efd0(int arg1)
{
    return ((SInner *)inner)->sub_0148d8e0();
}

struct A01471640 {
    char pad[384];
    void sub_01471640(int);
};

struct D014736a0 {
    void sub_014736a0(int);
};

struct D014736a0Impl;
struct C014736a0 : A01471640, D014736a0 {};

// @baa 0x014736a0
void D014736a0::sub_014736a0(int arg1) {
    ((A01471640 *)((char *)this - 388))->sub_01471640(arg1);
}

struct C_01473ab0 { void sub_01473a30(); void sub_01473ab0(int); };

// @baa 0x01473ab0
void C_01473ab0::sub_01473ab0(int) { sub_01473a30(); }

extern undefined4 g_026dd58c;
// @baa 0x01476c90
undefined4 sub_01476c90(void)
{
  return g_026dd58c;
}

struct C_01476cf0 {
    void sub_01476cf0();
};

// @baa 0x01476cf0
void C_01476cf0::sub_01476cf0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 100) == 2) || (*(int *)(param_1 + 100) == 5)) {
    *(undefined4 *)(param_1 + 100) = 3;
  }
  return;
}

struct C_01476d10 {
    void sub_01476d10();
};

// @baa 0x01476d10
void C_01476d10::sub_01476d10(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 5)) {
    *(undefined4 *)(param_1 + 100) = 6;
  }
  return;
}
