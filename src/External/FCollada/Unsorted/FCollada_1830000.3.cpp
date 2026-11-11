// FCollada_1830000.cpp (part 3 of 24): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_01833d80 { virtual void sub_01833da0(); char pad[32]; };

struct B_01833d80 { virtual void sub_01833da0(); };

struct C_01833d80 : A_01833d80, B_01833d80 { virtual void sub_01833da0(); C_01833d80(); };

C_01833d80::C_01833d80() {}

// @baa 0x01833d80
void C_01833d80::sub_01833da0() {}

struct C {
    undefined4 sub_01834a70();
};

// @baa 0x01834a70
undefined4 C::sub_01834a70(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x6c);
}

struct B {
    virtual int f0(int);
    virtual int f1(int);
    virtual int f2(int);
    virtual int f3(int);
    virtual int f4(int);
    virtual int f5(int);
    virtual int f6(int);
};

int B::f0(int a) { return a; }

int B::f1(int a) { return a; }

int B::f2(int a) { return a; }

int B::f3(int a) { return a; }

int B::f4(int a) { return a; }

int B::f5(int a) { return a; }

int B::f6(int a) { return a; }

struct C_01835180 : B {
    int sub_01835180(int a);
};

// @baa 0x01835180
int C_01835180::sub_01835180(int a) {
    B &b = *this;
    return b.f6(a);
}

struct C_0183ea10 {
    undefined4 * sub_0183ea10(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e5c68;
// @baa 0x0183ea10
undefined4 * C_0183ea10::sub_0183ea10(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0183ea10 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e5c68));
  return param_1;
}
