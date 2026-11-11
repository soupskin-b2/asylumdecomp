// FMTreeTest.cpp (part 1 of 2): 21 functions
// Placed here by: neighbours 21.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01869f90();
};

// @baa 0x01869f90
undefined4 C::sub_01869f90(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01869fc0 {
    bool sub_01869fc0(int *);
};

// @baa 0x01869fc0
bool C_01869fc0::sub_01869fc0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01869fd0 {
    bool sub_01869fd0(int *);
};

// @baa 0x01869fd0
bool C_01869fd0::sub_01869fd0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01869fe0 {
    bool sub_01869fe0(int *);
};

// @baa 0x01869fe0
bool C_01869fe0::sub_01869fe0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0186a070 {
    int sub_0186a070();
};

// @baa 0x0186a070
int C_0186a070::sub_0186a070(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0186a0a0 {
    bool sub_0186a0a0(int *);
};

// @baa 0x0186a0a0
bool C_0186a0a0::sub_0186a0a0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_0186a0b0 {
    bool sub_0186a0b0(int *);
};

// @baa 0x0186a0b0
bool C_0186a0b0::sub_0186a0b0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0186a150 { int a; C_0186a150(int); };

// @baa 0x0186a150
C_0186a150::C_0186a150(int x) : a(x) {}

struct C_0186a160 { int a; C_0186a160(int); };

// @baa 0x0186a160
C_0186a160::C_0186a160(int x) : a(x) {}

struct C_0186a1d0 { int a; C_0186a1d0(int); };

// @baa 0x0186a1d0
C_0186a1d0::C_0186a1d0(int x) : a(x) {}

struct C_0186a1e0 {
    bool sub_0186a1e0(int *);
};

// @baa 0x0186a1e0
bool C_0186a1e0::sub_0186a1e0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0186a1f0 {
    int sub_0186a1f0();
};

// @baa 0x0186a1f0
int C_0186a1f0::sub_0186a1f0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0186a200 { int a; C_0186a200(int); };

// @baa 0x0186a200
C_0186a200::C_0186a200(int x) : a(x) {}

struct C_0186a210 {
    bool sub_0186a210(int *);
};

// @baa 0x0186a210
bool C_0186a210::sub_0186a210(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_0186a220 {
    int sub_0186a220();
};

// @baa 0x0186a220
int C_0186a220::sub_0186a220(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_0186a510 {
    int v;
    int *sub_0186a510(int *a);
};

// @baa 0x0186a510
int *C_0186a510::sub_0186a510(int *a) {
    *a = v;
    return a;
}

struct C_0186a520 {
    int v;
    int *sub_0186a520(int *a);
};

// @baa 0x0186a520
int *C_0186a520::sub_0186a520(int *a) {
    *a = v;
    return a;
}

struct C_0186a780 {
    int v;
    int *sub_0186a780(int *a);
};

// @baa 0x0186a780
int *C_0186a780::sub_0186a780(int *a) {
    *a = v;
    return a;
}

struct C_0186a850 {
    int v;
    int *sub_0186a850(int *a);
};

// @baa 0x0186a850
int *C_0186a850::sub_0186a850(int *a) {
    *a = v;
    return a;
}

struct C_0186a8e0 {
    void sub_0186a8e0();
    int sub_0186a170();
};

void sub_01826080(void *);
// @baa 0x0186a8e0
void C_0186a8e0::sub_0186a8e0(void)
{
    int param_1 = (int)this;
  ((C_0186a8e0 *)(((char *)this + 4)))->sub_0186a170();
  sub_01826080(*(void **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_0186ae70 {
    undefined4 * sub_0186ae70(undefined4 *);
    int sub_0186ad40(int);
};

// @baa 0x0186ae70
undefined4 * C_0186ae70::sub_0186ae70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0186ae70 *)(((char *)this + 4)))->sub_0186ad40((int)(param_2 + 1));
  return param_1;
}
