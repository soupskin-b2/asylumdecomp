// FMOD_17c0000.cpp (part 3 of 3): 59 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S {
    int Unk00;
};

extern void __cdecl sub_017d3310(struct S const &Ref, int Value);
// @baa 0x017cca50
void __stdcall sub_017cca50(struct S const &Ref)
{
    sub_017d3310(Ref, 0);
}

int __stdcall sub_01763faa(int);
// @baa 0x017ce2b0
void sub_017ce2b0(undefined4 param_1)
{
  sub_01763faa(param_1);
  return;
}

struct C {
    void sub_017ce350(undefined4);
};

// @baa 0x017ce350
void C::sub_017ce350(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4) = param_2;
  return;
}

struct C_017ce360 {
    undefined4 sub_017ce360();
};

// @baa 0x017ce360
undefined4 C_017ce360::sub_017ce360(void)
{
    int param_1 = (int)this;
  if (*(undefined4 **)(param_1 + 0xb4) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0xb4);
  }
  return 0;
}

struct C_017ce370 {
    void sub_017ce370(undefined4);
};

// @baa 0x017ce370
void C_017ce370::sub_017ce370(undefined4 param_2)
{
    int param_1 = (int)this;
  **(undefined4 **)(param_1 + 0xb4) = param_2;
  return;
}

struct C_017ce380 {
    void sub_017ce380(undefined4);
};

// @baa 0x017ce380
void C_017ce380::sub_017ce380(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8) = param_2;
  return;
}

struct C_017ce390 {
    undefined4 sub_017ce390();
};

// @baa 0x017ce390
undefined4 C_017ce390::sub_017ce390(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x18);
}

struct C_017ce460 {
    void sub_017ce460(undefined4);
};

// @baa 0x017ce460
void C_017ce460::sub_017ce460(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x10) = param_2;
  return;
}

struct C_017ce470 {
    undefined4 sub_017ce470();
};

// @baa 0x017ce470
undefined4 C_017ce470::sub_017ce470(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xb4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10);
  }
  return 0;
}

struct C_017ce4d0 {
    void sub_017ce4d0(undefined4);
};

// @baa 0x017ce4d0
void C_017ce4d0::sub_017ce4d0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x14) = param_2;
  return;
}

struct C_017ce4e0 {
    void sub_017ce4e0(undefined4);
};

// @baa 0x017ce4e0
void C_017ce4e0::sub_017ce4e0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

struct C_017ce500 {
    char pad[0x30];
    float f30;
    void sub_017ce500(float f);
};

// @baa 0x017ce500
void C_017ce500::sub_017ce500(float f)
{
    f30 = f;
}

struct C_017ce520 {
    void sub_017ce520(float param_2);
};

// @baa 0x017ce520
void C_017ce520::sub_017ce520(float param_2)
{
    *(float *)(this + 0x34) = param_2;
}

struct C_017ce540 {
    void sub_017ce540(float arg1);
};

// @baa 0x017ce540
void C_017ce540::sub_017ce540(float arg1)
{
    *(float *)(this + 0x38) = arg1;
}

struct C_017ce560 {
    char pad[0x3c];
    float f3c;
    void sub_017ce560(float param_1);
};

// @baa 0x017ce560
void C_017ce560::sub_017ce560(float param_1)
{
    this->f3c = param_1;
}

struct C_017ce580 {
    void sub_017ce580(float param1);
};

// @baa 0x017ce580
void C_017ce580::sub_017ce580(float param1)
{
    *(float *)(this + 0x40) = param1;
}

struct C_017ce740 {
    char pad[0x50];
    float f0x50;
    void sub_017ce740(float f);
};

// @baa 0x017ce740
void C_017ce740::sub_017ce740(float f)
{
    f0x50 = f;
}

struct C_017ce760 {
    char pad[0x54];
    FLOAT f_54;
    void sub_017ce760(FLOAT v);
};

// @baa 0x017ce760
void C_017ce760::sub_017ce760(FLOAT v)
{
    f_54 = v;
}

struct C_017ce8e0 {
    char pad[0x78];
    float f_78;
    void sub_017ce8e0(float v);
};

// @baa 0x017ce8e0
void C_017ce8e0::sub_017ce8e0(float v)
{
    f_78 = v;
}

struct C_017ce900 {
    void sub_017ce900(float f);
};

// @baa 0x017ce900
void C_017ce900::sub_017ce900(float f)
{
    *(float *)(this + 0x7c) = f;
}

struct C_017ce970 {
    void sub_017ce970(undefined4);
};

// @baa 0x017ce970
void C_017ce970::sub_017ce970(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x14) = param_2;
  return;
}

struct C_017ce980 {
    undefined2 sub_017ce980();
};

// @baa 0x017ce980
undefined2 C_017ce980::sub_017ce980(void)
{
    int param_1 = (int)this;
  return *(undefined2 *)(param_1 + 0x98);
}

struct S_0x18 { char pad[0x18]; WORD w; };

struct C_017ce9c0 { char pad[0xb4]; S_0x18* p; WORD sub_017ce9c0(); };

// @baa 0x017ce9c0
WORD C_017ce9c0::sub_017ce9c0()
{
    return p->w;
}

struct C_017ceab0 {
    void sub_017ceab0(undefined4);
};

// @baa 0x017ceab0
void C_017ceab0::sub_017ceab0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x1c) = param_2;
  return;
}

struct C_017ceac0 {
    undefined4 sub_017ceac0();
};

// @baa 0x017ceac0
undefined4 C_017ceac0::sub_017ceac0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x18);
}

struct C_017cead0 {
    void sub_017cead0(undefined4);
};

// @baa 0x017cead0
void C_017cead0::sub_017cead0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x18) = param_2;
  return;
}

struct C_017ceae0 {
    undefined4 sub_017ceae0();
};

// @baa 0x017ceae0
undefined4 C_017ceae0::sub_017ceae0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x90);
}

struct C_017ceb10 {
    void sub_017ceb10(undefined4);
};

// @baa 0x017ceb10
void C_017ceb10::sub_017ceb10(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x1c) = param_2;
  return;
}

struct C_017ceb20 {
    undefined4 sub_017ceb20();
};

// @baa 0x017ceb20
undefined4 C_017ceb20::sub_017ceb20(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x20);
}

struct C_017ceb30 {
    void sub_017ceb30(undefined4);
};

// @baa 0x017ceb30
void C_017ceb30::sub_017ceb30(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x20) = param_2;
  return;
}

struct C_017ceb40 {
    undefined4 sub_017ceb40();
};

// @baa 0x017ceb40
undefined4 C_017ceb40::sub_017ceb40(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x24);
}

struct C_017ceb50 {
    void sub_017ceb50(undefined4);
};

// @baa 0x017ceb50
void C_017ceb50::sub_017ceb50(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x24) = param_2;
  return;
}

struct C_017ceb60 {
    undefined4 sub_017ceb60();
};

// @baa 0x017ceb60
undefined4 C_017ceb60::sub_017ceb60(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28);
}

struct C_017ceb70 {
    void sub_017ceb70(undefined4);
};

// @baa 0x017ceb70
void C_017ceb70::sub_017ceb70(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28) = param_2;
  return;
}

struct C_017ceb80 {
    undefined4 sub_017ceb80();
};

// @baa 0x017ceb80
undefined4 C_017ceb80::sub_017ceb80(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x2c);
}

struct C_017ceb90 {
    void sub_017ceb90(undefined4);
};

// @baa 0x017ceb90
void C_017ceb90::sub_017ceb90(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x2c) = param_2;
  return;
}

struct C_017ceba0 {
    undefined4 sub_017ceba0();
};

// @baa 0x017ceba0
undefined4 C_017ceba0::sub_017ceba0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x30);
}

struct C_017cebb0 {
    void sub_017cebb0(undefined4);
};

// @baa 0x017cebb0
void C_017cebb0::sub_017cebb0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x30) = param_2;
  return;
}

struct C_017cebc0 {
    void sub_017cebc0(undefined4);
};

// @baa 0x017cebc0
void C_017cebc0::sub_017cebc0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34) = param_2;
  return;
}

struct C_017cebd0 {
    undefined4 sub_017cebd0();
};

// @baa 0x017cebd0
undefined4 C_017cebd0::sub_017cebd0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x38);
}

struct C_017cebe0 {
    void sub_017cebe0(undefined4);
};

// @baa 0x017cebe0
void C_017cebe0::sub_017cebe0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x38) = param_2;
  return;
}

struct C_017cebf0 {
    undefined4 sub_017cebf0();
};

// @baa 0x017cebf0
undefined4 C_017cebf0::sub_017cebf0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0xa8);
}

struct C_017cec70 {
    void sub_017cec70(undefined4);
};

// @baa 0x017cec70
void C_017cec70::sub_017cec70(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x20) = param_2;
  return;
}

struct V_017cec80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void g();
};

struct O_017cec80 { char pad[320]; V_017cec80* p; void sub_017cec80(); };

// @baa 0x017cec80
void O_017cec80::sub_017cec80() { p->g(); }

struct V_017cec90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void g(int a0);
};

struct O_017cec90 { char pad[320]; V_017cec90* p; void sub_017cec90(int a0); };

// @baa 0x017cec90
void O_017cec90::sub_017cec90(int a0) { p->g(a0); }

struct V_017ceca0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void g(int a0);
};

struct O_017ceca0 { char pad[320]; V_017ceca0* p; void sub_017ceca0(int a0); };

// @baa 0x017ceca0
void O_017ceca0::sub_017ceca0(int a0) { p->g(a0); }

struct V_017cecb0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void g(int a0);
};

struct O_017cecb0 { char pad[320]; V_017cecb0* p; void sub_017cecb0(int a0); };

// @baa 0x017cecb0
void O_017cecb0::sub_017cecb0(int a0) { p->g(a0); }

struct C_017ce670
{
    char pad_00[0xf8];
    float Value;

    void sub_017ce670(float In);
};

// @baa 0x017ce670
void C_017ce670::sub_017ce670(float In)
{
    Value = In;
}

struct C_017ce690
{
    char pad_00[0xfc];
    float Value;

    void sub_017ce690(float In);
};

// @baa 0x017ce690
void C_017ce690::sub_017ce690(float In)
{
    Value = In;
}

struct C_017ce6b0
{
    char pad_00[0x100];
    float Value;

    void sub_017ce6b0(float In);
};

// @baa 0x017ce6b0
void C_017ce6b0::sub_017ce6b0(float In)
{
    Value = In;
}

struct C_017ce6d0
{
    char pad_00[0x104];
    float Value;

    void sub_017ce6d0(float In);
};

// @baa 0x017ce6d0
void C_017ce6d0::sub_017ce6d0(float In)
{
    Value = In;
}

struct C_017ce6f0
{
    char pad_00[0x108];
    float Value;

    void sub_017ce6f0(float In);
};

// @baa 0x017ce6f0
void C_017ce6f0::sub_017ce6f0(float In)
{
    Value = In;
}

struct C_017ce710
{
    char pad_00[0x10c];
    float Value;

    void sub_017ce710(float In);
};

// @baa 0x017ce710
void C_017ce710::sub_017ce710(float In)
{
    Value = In;
}

struct C_017ce7a0
{
    char pad_00[0x110];
    float Value;

    void sub_017ce7a0(float In);
};

// @baa 0x017ce7a0
void C_017ce7a0::sub_017ce7a0(float In)
{
    Value = In;
}

struct C_017ce7c0
{
    char pad_00[0x114];
    float Value;

    void sub_017ce7c0(float In);
};

// @baa 0x017ce7c0
void C_017ce7c0::sub_017ce7c0(float In)
{
    Value = In;
}

struct C_017ce8a0
{
    char pad_00[0x118];
    float Value;

    void sub_017ce8a0(float In);
};

// @baa 0x017ce8a0
void C_017ce8a0::sub_017ce8a0(float In)
{
    Value = In;
}

struct C_017ce8c0
{
    char pad_00[0x11c];
    float Value;

    void sub_017ce8c0(float In);
};

// @baa 0x017ce8c0
void C_017ce8c0::sub_017ce8c0(float In)
{
    Value = In;
}

struct C_017ce920
{
    char pad_00[0x80];
    float Value;

    void sub_017ce920(float In);
};

// @baa 0x017ce920
void C_017ce920::sub_017ce920(float In)
{
    Value = In;
}

struct C_017ce940
{
    char pad_00[0x84];
    float Value;

    void sub_017ce940(float In);
};

// @baa 0x017ce940
void C_017ce940::sub_017ce940(float In)
{
    Value = In;
}
