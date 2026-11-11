// UnrealEd_1ac0000.cpp (part 1 of 4): 72 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_01ac9a90 { void sub_00416c80(); };

struct C { char pad[16]; M_01ac9a90 m; void sub_01ac9a90(); };

// @baa 0x01ac9a90
void C::sub_01ac9a90() { m.sub_00416c80(); }

extern int g_027ca508;
int sub_01acb390();
// @baa 0x01acb420
int sub_01acb420() { if (!g_027ca508) g_027ca508 = sub_01acb390(); return g_027ca508; }

struct V_01acb710 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int);
    void sub_01acb710();
};

// @baa 0x01acb710
void V_01acb710::sub_01acb710() { g(0); }

struct C_01acb7a0 {
    undefined4 sub_01acb7a0(byte);
};

int sub_01ab3290(...);
int sub_01acb6a0(void);
// @baa 0x01acb7a0
undefined4 C_01acb7a0::sub_01acb7a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_01acb6a0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_01acb7d0 {
    void sub_01acb7d0();
};

extern undefined4 g_0240d37c;
// @baa 0x01acb7d0
void C_01acb7d0::sub_01acb7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d37c));
  return;
}

// @baa 0x01acb870
BYTE __stdcall sub_01acb870(INT a1, INT a2)
{
  return 1;
}

struct V_01acb8d0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int);
    void sub_01acb8d0();
};

// @baa 0x01acb8d0
void V_01acb8d0::sub_01acb8d0() { g(0); }

extern int g_027ca51c;
int sub_01acdce0();
// @baa 0x01acb8f0
int sub_01acb8f0() { if (!g_027ca51c) g_027ca51c = sub_01acdce0(); return g_027ca51c; }

extern int g_027ca55c;
int sub_01ad7720();
// @baa 0x01acb910
int sub_01acb910() { if (!g_027ca55c) g_027ca55c = sub_01ad7720(); return g_027ca55c; }

extern int g_027ca558;
int sub_01ad7030();
// @baa 0x01acb930
int sub_01acb930() { if (!g_027ca558) g_027ca558 = sub_01ad7030(); return g_027ca558; }

extern int g_027ca568;
int sub_01ada330();
// @baa 0x01acb950
int sub_01acb950() { if (!g_027ca568) g_027ca568 = sub_01ada330(); return g_027ca568; }

extern int g_027ca56c;
int sub_01ada4a0();
// @baa 0x01acb970
int sub_01acb970() { if (!g_027ca56c) g_027ca56c = sub_01ada4a0(); return g_027ca56c; }

extern int g_027ca4f8;
int sub_01ac22b0();
// @baa 0x01acb990
int sub_01acb990() { if (!g_027ca4f8) g_027ca4f8 = sub_01ac22b0(); return g_027ca4f8; }

extern int g_027ca554;
int sub_01ad2b30();
// @baa 0x01acb9b0
int sub_01acb9b0() { if (!g_027ca554) g_027ca554 = sub_01ad2b30(); return g_027ca554; }

extern int g_027ca4ec;
int sub_01abf860();
// @baa 0x01acb9d0
int sub_01acb9d0() { if (!g_027ca4ec) g_027ca4ec = sub_01abf860(); return g_027ca4ec; }

extern int g_027ca4f0;
int sub_01abee40();
// @baa 0x01acb9f0
int sub_01acb9f0() { if (!g_027ca4f0) g_027ca4f0 = sub_01abee40(); return g_027ca4f0; }

extern int g_027ca518;
int sub_01acd670();
// @baa 0x01acba10
int sub_01acba10() { if (!g_027ca518) g_027ca518 = sub_01acd670(); return g_027ca518; }

extern int g_027ca500;
int sub_01ac60b0();
// @baa 0x01acba30
int sub_01acba30() { if (!g_027ca500) g_027ca500 = sub_01ac60b0(); return g_027ca500; }

extern int g_027ca570;
int sub_01ada710();
// @baa 0x01acba50
int sub_01acba50() { if (!g_027ca570) g_027ca570 = sub_01ada710(); return g_027ca570; }

extern int g_027ca4e8;
int sub_01abc6a0();
// @baa 0x01acba70
int sub_01acba70() { if (!g_027ca4e8) g_027ca4e8 = sub_01abc6a0(); return g_027ca4e8; }

extern int g_027ca574;
int sub_01ada930();
// @baa 0x01acba90
int sub_01acba90() { if (!g_027ca574) g_027ca574 = sub_01ada930(); return g_027ca574; }

extern int g_027ca564;
int sub_01ada140();
// @baa 0x01acbab0
int sub_01acbab0() { if (!g_027ca564) g_027ca564 = sub_01ada140(); return g_027ca564; }

extern int g_027ca578;
int sub_01adac00();
// @baa 0x01acbad0
int sub_01acbad0() { if (!g_027ca578) g_027ca578 = sub_01adac00(); return g_027ca578; }

extern int g_027ca57c;
int sub_01adadd0();
// @baa 0x01acbaf0
int sub_01acbaf0() { if (!g_027ca57c) g_027ca57c = sub_01adadd0(); return g_027ca57c; }

struct C_01acbbf0 {
    void sub_01acbbf0(undefined4);
    int sub_01ab6d80(int);
};

// @baa 0x01acbbf0
void C_01acbbf0::sub_01acbbf0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_01acbbf0 *)(this))->sub_01ab6d80(param_2);
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

struct C_01acbc30 {
    void sub_01acbc30();
};

int sub_01ada490(void);
extern undefined * g_0240d4b4;
// @baa 0x01acbc30
void C_01acbc30::sub_01acbc30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240d4b4);
  sub_01ada490();
  return;
}

struct C_01acbc80 {
    void sub_01acbc80();
};

// @baa 0x01acbc80
void C_01acbc80::sub_01acbc80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240d4b4);
  sub_01ada490();
  return;
}

extern int g_027ca50c;
int sub_01acbd90();
// @baa 0x01acbe50
int sub_01acbe50() { if (!g_027ca50c) g_027ca50c = sub_01acbd90(); return g_027ca50c; }

// @baa 0x01acbe70
int sub_01acbe70() { if (!g_027ca50c) g_027ca50c = sub_01acbd90(); return g_027ca50c; }

extern int g_027ca510;
int sub_01acc3a0();
// @baa 0x01acc630
int sub_01acc630() { if (!g_027ca510) g_027ca510 = sub_01acc3a0(); return g_027ca510; }

// @baa 0x01acc650
int sub_01acc650() { if (!g_027ca510) g_027ca510 = sub_01acc3a0(); return g_027ca510; }

extern int g_027ca514;
int sub_01acc430();
// @baa 0x01acc690
int sub_01acc690() { if (!g_027ca514) g_027ca514 = sub_01acc430(); return g_027ca514; }

// @baa 0x01acc6b0
int sub_01acc6b0() { if (!g_027ca514) g_027ca514 = sub_01acc430(); return g_027ca514; }

struct M_01acc970 { void sub_01ad6b00(); };

struct C_01acc970 { char pad[16]; M_01acc970 m; void sub_01acc970(); };

// @baa 0x01acc970
void C_01acc970::sub_01acc970() { m.sub_01ad6b00(); }

struct M_01acc9d0 { void sub_01ad6c20(); };

struct C_01acc9d0 { char pad[16]; M_01acc9d0 m; void sub_01acc9d0(); };

// @baa 0x01acc9d0
void C_01acc9d0::sub_01acc9d0() { m.sub_01ad6c20(); }

struct M_01acc9e0 { void sub_01ad6c40(); };

struct C_01acc9e0 { char pad[16]; M_01acc9e0 m; void sub_01acc9e0(); };

// @baa 0x01acc9e0
void C_01acc9e0::sub_01acc9e0() { m.sub_01ad6c40(); }

struct M_01acc9f0 { void sub_01ad6c60(); };

struct C_01acc9f0 { char pad[16]; M_01acc9f0 m; void sub_01acc9f0(); };

// @baa 0x01acc9f0
void C_01acc9f0::sub_01acc9f0() { m.sub_01ad6c60(); }

struct V_01acca00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int);
    void sub_01acca00();
};

// @baa 0x01acca00
void V_01acca00::sub_01acca00() { g(0); }

struct S {
    BYTE sub_01accd80(int a, int b);
};

// @baa 0x01accd80
BYTE S::sub_01accd80(int a, int b) { return 0; }

struct C_01accdf0 {
    undefined4 * sub_01accdf0(undefined4);
    int sub_01accb70(int);
};

extern undefined4 g_0240d624;
// @baa 0x01accdf0
undefined4 * C_01accdf0::sub_01accdf0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01accdf0 *)(this))->sub_01accb70(param_2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (undefined4)((&g_0240d624));
  return param_1;
}

struct V_01acce80 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void g(int);
    void sub_01acce80();
};

// @baa 0x01acce80
void V_01acce80::sub_01acce80() { g(0); }

struct C_01accf20 {
    undefined4 sub_01accf20(byte);
};

int sub_01acce20(void);
// @baa 0x01accf20
undefined4 C_01accf20::sub_01accf20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acce20();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x24);
  }
  return param_1;
}

struct M_01acd0e0 { void sub_01ab5820(); };

struct C_01acd0e0 { char pad[8]; M_01acd0e0 m; void sub_01acd0e0(); };

// @baa 0x01acd0e0
void C_01acd0e0::sub_01acd0e0() { m.sub_01ab5820(); }

struct M_01acd100 { void sub_01abf960(); };

struct C_01acd100 { char pad[12]; M_01acd100 m; void sub_01acd100(); };

// @baa 0x01acd100
void C_01acd100::sub_01acd100() { m.sub_01abf960(); }

struct FxArchive;
struct FxArchiveStoreMemory {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int sub_01acb600(void);
    int sub_01acb5f0(void);
};

struct FxObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(FxArchive* ar);
};

void* sub_01acb810(void);
struct FxArchive {
    int  f00;
    int  f04;
    int  f08;
    char f0c;
    int  f10;
    int  f14;
    int  f18;
    int  f1c;
    int  f20;
    int  f24;
    int  f28;
    int  f2c;
    int  f30;
    int  f34;
    int  f38;
    float f3c;
    int  f40;
    int  f44;
    int  f48;
    int  f4c;

    void sub_01ab8360(void*, int, int);
    void sub_01abbdf0(void);
    void sub_01abc3b0(void);
    int  sub_01ab83f0(void);
    void sub_01abc220(int);
    void sub_01ab83b0(int, float);

    FxArchive() { sub_01ab8360(sub_01acb810(), 2, 0); }
    FxArchive(void* a, int b, int c) { sub_01ab8360(a, b, c); }
    ~FxArchive() { sub_01abc3b0(); }
};

int  sub_01ab3960(int size);
FxArchiveStoreMemory* sub_01acb730(int, int);
void* sub_01a375f0(void* dst, const void* src, unsigned int n);
// @baa 0x01acd470
bool sub_01acd470(FxObject* arg1, void** arg2, int* arg3, int arg4, int arg5, float arg6)
{
    if (*arg2 == 0) {
        FxArchive ar1;
        ar1.sub_01abbdf0();
        arg1->v3(&ar1);
        FxArchiveStoreMemory* st = sub_01acb730(0, 0);
        FxArchive ar2(st, 4, arg4);
        ar2.sub_01abbdf0();
        if (ar2.f0c) {
            ar2.sub_01abc220(ar1.sub_01ab83f0());
            ar2.sub_01ab83b0(arg5, arg6);
            arg1->v3(&ar2);
            *arg3 = st->sub_01acb600();
            *arg2 = (void*)sub_01ab3960(*arg3);
            int n = *arg3;
            void* src = (void*)st->sub_01acb5f0();
            void* dst = *arg2;
            sub_01a375f0(dst, src, n);
            return true;
        }
    }
    return false;
}

// @baa 0x01acd760
int sub_01acd760() { if (!g_027ca518) g_027ca518 = sub_01acd670(); return g_027ca518; }

struct C_01acd7d0 {
    void sub_01acd7d0(undefined4);
    int sub_01ab5820(int);
};

int sub_01ace1d0(...);
// @baa 0x01acd7d0
void C_01acd7d0::sub_01acd7d0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_01acd7d0 *)(((char *)this + 0x10)))->sub_01ab5820(param_2);
  uVar1 = sub_01ace1d0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

// @baa 0x01acdd70
int sub_01acdd70() { if (!g_027ca51c) g_027ca51c = sub_01acdce0(); return g_027ca51c; }

// @baa 0x01acdff0
void sub_01acdff0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

extern int g_027ca520;
int sub_01acdeb0();
// @baa 0x01ace0b0
int sub_01ace0b0() { if (!g_027ca520) g_027ca520 = sub_01acdeb0(); return g_027ca520; }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ace820(volatile FFaceData *Other);
};

// @baa 0x01ace820
void FFaceData::sub_01ace820(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01ace850 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ace850(volatile FFaceData_01ace850 *Other);
};

// @baa 0x01ace850
void FFaceData_01ace850::sub_01ace850(volatile FFaceData_01ace850 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01ace8e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ace8e0(volatile FFaceData_01ace8e0 *Other);
};

// @baa 0x01ace8e0
void FFaceData_01ace8e0::sub_01ace8e0(volatile FFaceData_01ace8e0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_01ace910 { void sub_01ab58f0(); };

// @baa 0x01ace910
void sub_01ace910(S_01ace910 *p) { if (p) p->sub_01ab58f0(); }

extern int g_027ca528;
int sub_01ace1f0();
// @baa 0x01ace930
int sub_01ace930() { if (!g_027ca528) g_027ca528 = sub_01ace1f0(); return g_027ca528; }

extern int g_027ca52c;
int sub_01ace280();
// @baa 0x01ace950
int sub_01ace950() { if (!g_027ca52c) g_027ca52c = sub_01ace280(); return g_027ca52c; }

extern int g_027ca530;
int sub_01ace310();
// @baa 0x01ace970
int sub_01ace970() { if (!g_027ca530) g_027ca530 = sub_01ace310(); return g_027ca530; }

extern int g_027ca534;
int sub_01ace3a0();
// @baa 0x01ace990
int sub_01ace990() { if (!g_027ca534) g_027ca534 = sub_01ace3a0(); return g_027ca534; }

extern int g_027ca538;
int sub_01ace430();
// @baa 0x01ace9b0
int sub_01ace9b0() { if (!g_027ca538) g_027ca538 = sub_01ace430(); return g_027ca538; }

extern int g_027ca53c;
int sub_01ace4c0();
// @baa 0x01ace9d0
int sub_01ace9d0() { if (!g_027ca53c) g_027ca53c = sub_01ace4c0(); return g_027ca53c; }

extern int g_027ca540;
int sub_01ace550();
// @baa 0x01ace9f0
int sub_01ace9f0() { if (!g_027ca540) g_027ca540 = sub_01ace550(); return g_027ca540; }

extern int g_027ca544;
int sub_01ace5e0();
// @baa 0x01acea10
int sub_01acea10() { if (!g_027ca544) g_027ca544 = sub_01ace5e0(); return g_027ca544; }

extern int g_027ca548;
int sub_01ace670();
// @baa 0x01acea30
int sub_01acea30() { if (!g_027ca548) g_027ca548 = sub_01ace670(); return g_027ca548; }

extern int g_027ca54c;
int sub_01ace700();
// @baa 0x01acea50
int sub_01acea50() { if (!g_027ca54c) g_027ca54c = sub_01ace700(); return g_027ca54c; }

extern int g_027ca550;
int sub_01ace790();
// @baa 0x01acea70
int sub_01acea70() { if (!g_027ca550) g_027ca550 = sub_01ace790(); return g_027ca550; }

// @baa 0x01acf1b0
int sub_01acf1b0() { if (!g_027ca520) g_027ca520 = sub_01acdeb0(); return g_027ca520; }

// @baa 0x01acf350
int sub_01acf350() { if (!g_027ca528) g_027ca528 = sub_01ace1f0(); return g_027ca528; }

// @baa 0x01acf480
int sub_01acf480() { if (!g_027ca52c) g_027ca52c = sub_01ace280(); return g_027ca52c; }

// @baa 0x01acf5b0
int sub_01acf5b0() { if (!g_027ca530) g_027ca530 = sub_01ace310(); return g_027ca530; }

// @baa 0x01acf6e0
int sub_01acf6e0() { if (!g_027ca534) g_027ca534 = sub_01ace3a0(); return g_027ca534; }

// @baa 0x01acf810
int sub_01acf810() { if (!g_027ca538) g_027ca538 = sub_01ace430(); return g_027ca538; }

// @baa 0x01acf940
int sub_01acf940() { if (!g_027ca53c) g_027ca53c = sub_01ace4c0(); return g_027ca53c; }
