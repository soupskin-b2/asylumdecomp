// Editor_0eb0000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_00eb22a0();
// @baa 0x00eb2340
void sub_00eb2340(void) { sub_00eb22a0(); }

// @baa 0x00eb2350
void sub_00eb2350(void) {  }

// @baa 0x00eb2360
void sub_00eb2360(void) {  }

// @baa 0x00eb2370
INT sub_00eb2370(BYTE param_1)
{
  return param_1;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00eb2440
void sub_00eb2440(S* p, INT Value)
{
    p->vf_18(Value);
}
