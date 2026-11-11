// Engine_1ad0000.cpp (part 2 of 3): 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_01ad7520 { void sub_00423d80(); };

struct C { char pad[20]; M_01ad7520 m; void sub_01ad7520(); };

// @baa 0x01ad7520
void C::sub_01ad7520() { m.sub_00423d80(); }

extern int g_027ca55c;
int sub_01ad7720();
// @baa 0x01ad77b0
int sub_01ad77b0() { if (!g_027ca55c) g_027ca55c = sub_01ad7720(); return g_027ca55c; }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ad78c0(volatile FFaceData *Other);
};

// @baa 0x01ad78c0
void FFaceData::sub_01ad78c0(volatile FFaceData *Other)
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

struct C_01ad9a00 { int a; C_01ad9a00(int); };

// @baa 0x01ad9a00
C_01ad9a00::C_01ad9a00(int x) : a(x) {}

struct M_01ada1f0 { void sub_004164d0(); };

struct C_01ada1f0 { char pad[8]; M_01ada1f0 m; void sub_01ada1f0(); };

// @baa 0x01ada1f0
void C_01ada1f0::sub_01ada1f0() { m.sub_004164d0(); }

extern int g_027ca564;
int sub_01ada140();
// @baa 0x01ada200
int sub_01ada200() { if (!g_027ca564) g_027ca564 = sub_01ada140(); return g_027ca564; }

struct C_01ada260 {
    void sub_01ada260();
};

int sub_01ab7640(void);
extern undefined * g_0240dddc;
// @baa 0x01ada260
void C_01ada260::sub_01ada260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240dddc);
  sub_01ab7640();
  return;
}

extern int g_027ca568;
int sub_01ada330();
// @baa 0x01ada3f0
int sub_01ada3f0() { if (!g_027ca568) g_027ca568 = sub_01ada330(); return g_027ca568; }

extern int g_027ca56c;
int sub_01ada4a0();
// @baa 0x01ada5e0
int sub_01ada5e0() { if (!g_027ca56c) g_027ca56c = sub_01ada4a0(); return g_027ca56c; }

struct C_01ada640 {
    void sub_01ada640();
};

extern undefined * g_0240de24;
// @baa 0x01ada640
void C_01ada640::sub_01ada640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240de24);
  sub_01ab7640();
  return;
}

extern int g_027ca570;
int sub_01ada710();
// @baa 0x01ada830
int sub_01ada830() { if (!g_027ca570) g_027ca570 = sub_01ada710(); return g_027ca570; }

extern int g_027ca574;
int sub_01ada930();
// @baa 0x01ada9f0
int sub_01ada9f0() { if (!g_027ca574) g_027ca574 = sub_01ada930(); return g_027ca574; }

struct C_01adaa30 {
    void sub_01adaa30();
};

int sub_01ada490(void);
extern undefined * g_0240de68;
// @baa 0x01adaa30
void C_01adaa30::sub_01adaa30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240de68);
  sub_01ada490();
  return;
}

extern int g_027ca578;
int sub_01adac00();
// @baa 0x01adac90
int sub_01adac90() { if (!g_027ca578) g_027ca578 = sub_01adac00(); return g_027ca578; }

struct C_01adacf0 {
    void sub_01adacf0();
};

extern undefined * g_0240dea0;
// @baa 0x01adacf0
void C_01adacf0::sub_01adacf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0240dea0);
  sub_01ab7640();
  return;
}

struct FxCurrentTimeNode { BYTE sub_01adada0(int); };

// @baa 0x01adada0
BYTE FxCurrentTimeNode::sub_01adada0(int) { return 0; }

extern int g_027ca57c;
int sub_01adadd0();
// @baa 0x01adae90
int sub_01adae90() { if (!g_027ca57c) g_027ca57c = sub_01adadd0(); return g_027ca57c; }
