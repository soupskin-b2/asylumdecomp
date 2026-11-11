// FCollada_0ee0000.cpp: 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_00eec700(void); };

// @baa 0x00eec700
C* C::sub_00eec700(void) { return this; }

struct C_00eec710 {
    int sub_00eec710(int);
};

// @baa 0x00eec710
int C_00eec710::sub_00eec710(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x10 + param_1;
}

void sub_01827960();
// @baa 0x00eec780
void sub_00eec780(void) { sub_01827960(); }

void sub_0183de50();
// @baa 0x00eec790
void sub_00eec790(void) { sub_0183de50(); }

void sub_018121b0();
// @baa 0x00eec7a0
void sub_00eec7a0(void) { sub_018121b0(); }

extern char g_02421c20[];
struct C_00eec860 { void sub_00eec860(void); };

// @baa 0x00eec860
void C_00eec860::sub_00eec860(void) { *(int*)((char*)this + 0) = (int)g_02421c20; }

struct C_00eec870 {
    float10 sub_00eec870(float);
};

// @baa 0x00eec870
float10 C_00eec870::sub_00eec870(float param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 4) * (float10)param_2;
}

void sub_01849920();
// @baa 0x00eec910
void sub_00eec910(void) { sub_01849920(); }

struct C_00eec920 { int sub_00eec920(void); };

// @baa 0x00eec920
int C_00eec920::sub_00eec920(void) { return *(int*)((char*)this + 36); }

struct C_00eec930 { char* sub_00eec930(void); };

// @baa 0x00eec930
char* C_00eec930::sub_00eec930(void) { return (char*)this + 168; }

struct C_00eec940 { int sub_00eec940(void); };

// @baa 0x00eec940
int C_00eec940::sub_00eec940(void) { return *(int*)((char*)this + 44); }

void sub_0184a940();
// @baa 0x00eec950
void sub_00eec950(void) { sub_0184a940(); }

void sub_01820a30();
// @baa 0x00eec960
void sub_00eec960(void) { sub_01820a30(); }

void sub_018208a0();
// @baa 0x00eec970
void sub_00eec970(void) { sub_018208a0(); }

struct C_00eec980 { int sub_00eec980(void); };

// @baa 0x00eec980
int C_00eec980::sub_00eec980(void) { return *(int*)((char*)this + 100); }

struct C_00eec990 { int sub_00eec990(void); };

// @baa 0x00eec990
int C_00eec990::sub_00eec990(void) { return *(int*)((char*)this + 104); }

void sub_018478e0();
// @baa 0x00eec9a0
void sub_00eec9a0(void) { sub_018478e0(); }

struct C_00eec9b0 { void sub_018478e0(int); void sub_00eec9b0(); };

// @baa 0x00eec9b0
void C_00eec9b0::sub_00eec9b0() { sub_018478e0(0); }

struct C_00eec9c0 { int sub_00eec9c0(void); };

// @baa 0x00eec9c0
int C_00eec9c0::sub_00eec9c0(void) { return *(int*)((char*)this + 92); }

struct C_00eec9d0 { char* sub_00eec9d0(void); };

// @baa 0x00eec9d0
char* C_00eec9d0::sub_00eec9d0(void) { return (char*)this + 68; }

// @baa 0x00eec9e0
void sub_00eec9e0(void) { sub_0184a940(); }

struct Base {
    virtual void v0(){}
    virtual void v1(){}
    virtual void v2(){}
    virtual void v3(){}
    virtual void v4(){}
    virtual void v5(){}
    virtual void v6(){}
    virtual void v7(){}
    virtual void v8();
};

struct S : Base {
    void sub_00eec9f0();
};

// @baa 0x00eec9f0
void S::sub_00eec9f0()
{
    this->v8();
}

struct C_00eeca00 {
    uint sub_00eeca00();
};

// @baa 0x00eeca00
uint C_00eeca00::sub_00eeca00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 8 & 1;
}
