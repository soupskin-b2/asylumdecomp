// fmod_compositioncore.cpp (part 2 of 2): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S017e77a0 {
    int sub_017e77a0();
};

struct C017e7ce0 {
    char pad[0xc];
    S017e77a0 * p0xc;

    int sub_017e7ce0();
};

int (C017e7ce0::*fp)() = &C017e7ce0::sub_017e7ce0;
// @baa 0x017e7ce0
int C017e7ce0::sub_017e7ce0() { return p0xc->sub_017e77a0(); }

struct C {
    undefined4 sub_017e8100(int, int *);
    int sub_017e7420(int);
};

// @baa 0x017e8100
undefined4 C::sub_017e8100(int param_2, int * param_3)
{
    int * param_1 = (int *)this;
  undefined4 uVar1;
  *param_1 = param_2;
  if ((param_3 != (int *)0x0) && (*param_3 != param_2)) {
    return 0x21;
  }
  uVar1 = ((C *)(this))->sub_017e7420((int)(param_3));
  return uVar1;
}

struct C5;
struct D;
struct A8;
struct B10;
struct CC02;
struct CA;
typedef int (C5::*PMF)(int);

struct C5 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3(int);
};

struct D {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual char v6();
};

struct A8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual unsigned int v6();
    virtual void v7();
    virtual void v8();
    virtual unsigned long long v9(float f);
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual unsigned long long v19(unsigned long long x);
    virtual int v20(unsigned long long* p);
};

struct B10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual float v6();
    virtual void v7();
    virtual void v8();
    virtual int v9();
    virtual void* v10();
};

struct CC02 {
    int sub_017e7590(unsigned long long, unsigned long long, unsigned long long);
};

struct CA {
    unsigned long long sub_017e72e0(unsigned long long);
};

C5* sub_017e8070();
struct ThisClass {
    char pad0[8];
    A8* p08;
    CC02* p0c;
    B10* p10;
    unsigned long long v18;
    unsigned long long v20;
    unsigned long long f28;
    int f30;
    int sub_017e81a0(ThisClass* arg);
};

// @baa 0x017e81a0
int ThisClass::sub_017e81a0(ThisClass* arg)
{
    if (arg != 0 && arg->f30 == 3) {
        v18 = arg->v20;
    } else {
        int r = p08->v20(&v18);
        if (r) return r;
        v18 += p08->v6();
        v18 = p08->v19(v18);
    }

    unsigned long long v = p08->v9(p10->v6());
    f28 = 0;
    if (p10->v9()) {
        C5* r5 = (C5*)sub_017e8070();
        PMF* slot = (PMF*)((char*)*(void**)r5 + 0xc);
        int a = (r5->*(*slot))(p10->v9());
        if (a == 0) return 0x21;
        unsigned long long r = ((CA*)a)->sub_017e72e0(v18);
        f28 = r;
        if (f28 >= v) {
            if (v > 0)
                f28 = f28 % v;
            else
                f28 = 0;
        }
    }

    v18 -= f28;
    v20 = v18 + v;

    if (p10->v6() > 0.0f) {
        D* d = (D*)p10->v10();
        char c = d->v6();
        f30 = (c != 0) + 1;
    } else {
        f30 = 4;
    }

    return p0c->sub_017e7590(v18, v20, f28);
}
