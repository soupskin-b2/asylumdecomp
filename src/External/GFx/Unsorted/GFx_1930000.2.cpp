// GFx_1930000.cpp (part 2 of 4): 107 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01931820
float sub_01931820(void)
{
  return 15.75f;
}

// @baa 0x01931830
float sub_01931830(void)
{
    return 15.75f;
}

extern float g_023f8144;
// @baa 0x01931840
float sub_01931840(void)
{
	return g_023f8144;
}

struct C {
    int sub_01932630(uint);
};

// @baa 0x01932630
int C::sub_01932630(uint param_2)
{
    int param_1 = (int)this;

  return *(int *)(*(int *)(param_1 + 0xc) + (param_2 >> 6) * 4) + (param_2 & 0x3f) * 4;
}

struct C_01932650 { int a, b, c; C_01932650(); };

// @baa 0x01932650
C_01932650::C_01932650() : a(0), b(0), c(0) {}

struct C_019326b0 {
    void sub_019326b0(int);
};

// @baa 0x019326b0
void C_019326b0::sub_019326b0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_019326c0 {
    void *field0;
    void *field4;
    C_019326c0 *sub_019326c0();
};

// @baa 0x019326c0
C_019326c0 *C_019326c0::sub_019326c0()
{
    field0 = this;
    field4 = this;
    return this;
}

struct C_019327e0 {
    void sub_019327e0(int);
};

// @baa 0x019327e0
void C_019327e0::sub_019327e0(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

struct C_019327f0 { int a, b, c; C_019327f0(); };

// @baa 0x019327f0
C_019327f0::C_019327f0() : a(0), b(0), c(0) {}

struct C_01932810 {
    int sub_01932810(int);
};

// @baa 0x01932810
int C_01932810::sub_01932810(int param_2)
{
    int param_1 = (int)this;
  return param_2 * 0x30 + *(int *)(param_1 + 8);
}

struct C_01932890 { int a, b, c; C_01932890(); };

// @baa 0x01932890
C_01932890::C_01932890() : a(0), b(0), c(0) {}

struct C_019328c0 {
    int sub_019328c0(int);
};

// @baa 0x019328c0
int C_019328c0::sub_019328c0(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 8) + param_2 * 0x18;
}

struct C_019328d0 {
    undefined4 sub_019328d0();
};

// @baa 0x019328d0
undefined4 C_019328d0::sub_019328d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_019328e0 { int a, b, c; C_019328e0(); };

// @baa 0x019328e0
C_019328e0::C_019328e0() : a(0), b(0), c(0) {}

void __stdcall sub_018d7170(int Obj);
// @baa 0x01932970
void __cdecl sub_01932970(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932980
void __cdecl sub_01932980(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932990
void __cdecl sub_01932990(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019329a0
void __cdecl sub_019329a0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019329b0
void __cdecl sub_019329b0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019329c0
void __cdecl sub_019329c0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019329d0
void __cdecl sub_019329d0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x019329e0
void __cdecl sub_019329e0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932a10
void __cdecl sub_01932a10(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932a40
void __cdecl sub_01932a40(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932a50
void __cdecl sub_01932a50(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_01932a60 { int a, b; C_01932a60(int, int); };

// @baa 0x01932a60
C_01932a60::C_01932a60(int x, int y) : a(x), b(y) {}

// @baa 0x01932a80
void __cdecl sub_01932a80(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932a90
void __cdecl sub_01932a90(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932aa0
void __cdecl sub_01932aa0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01932ab0
void __cdecl sub_01932ab0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct C_01932ac0 {
    void sub_01932ac0(undefined4, undefined4);
};

// @baa 0x01932ac0
void C_01932ac0::sub_01932ac0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

struct C_01932ad0 {
    void sub_01932ad0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01932ad0
void C_01932ad0::sub_01932ad0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

struct C_01932af0 {
    int sub_01932af0(int);
};

// @baa 0x01932af0
int C_01932af0::sub_01932af0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

void __stdcall sub_018d7150(int Index);
// @baa 0x01932ba0
void sub_01932ba0(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01932c00
void sub_01932c00(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_01932d90 {
    int sub_01932d90(int);
};

// @baa 0x01932d90
int C_01932d90::sub_01932d90(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_01932da0 {
    undefined4 sub_01932da0();
};

// @baa 0x01932da0
undefined4 C_01932da0::sub_01932da0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x34);
}

struct V_01932ea0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void g(int a0);
};

struct O_01932ea0 { char pad[12]; V_01932ea0* p; void sub_01932ea0(int a0); };

// @baa 0x01932ea0
void O_01932ea0::sub_01932ea0(int a0) { p->g(a0); }

struct C_01933350 {
    char pad[0x14];
    void *m_A;
    void *m_B;
    void *sub_01933350();
};

// @baa 0x01933350
void *C_01933350::sub_01933350() {
    m_A = this;
    m_B = this;
    return this;
}

struct C_01935ff0 {
    int sub_01935ff0(undefined4, undefined4);
    int sub_01935f00(int, int, int);
};

// @baa 0x01935ff0
int C_01935ff0::sub_01935ff0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  int iVar2;
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != param_1 + 0x38) {
    do {
      iVar1 = *(int *)(iVar2 + 0x18);
      iVar2 = ((C_01935ff0 *)(this))->sub_01935f00(param_2, param_3, iVar2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = iVar1;
    } while (iVar1 != param_1 + 0x38);
  }
  return 0;
}

struct M_01936b70 { void sub_019366d0(); };

struct C_01936b70 { char pad[1836]; M_01936b70 m; void sub_01936b70(); };

// @baa 0x01936b70
void C_01936b70::sub_01936b70() { m.sub_019366d0(); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01937af0();
};

// @baa 0x01937af0
S *S::sub_01937af0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01937b00 {
    undefined4 sub_01937b00();
};

// @baa 0x01937b00
undefined4 C_01937b00::sub_01937b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_01937b30 { int a, b; C_01937b30(int, int); };

// @baa 0x01937b30
C_01937b30::C_01937b30(int x, int y) : a(x), b(y) {}

int __stdcall sub_018e3f40(int, int, int);
// @baa 0x01937b50
uint sub_01937b50(undefined4 param_1, undefined4 param_2, uint param_3)
{
  uint uVar1;
  uVar1 = sub_018e3f40(param_1,param_2,0x1505);
  return uVar1 ^ param_3 & 3;
}

struct C_01937b70 { int a; C_01937b70(int); };

// @baa 0x01937b70
C_01937b70::C_01937b70(int x) : a(x) {}

struct C_01937d50 { int a; C_01937d50(int); };

// @baa 0x01937d50
C_01937d50::C_01937d50(int x) : a(x) {}

struct C_01937db0 {
    undefined4 * sub_01937db0();
};

int sub_018d3d50(void);
extern undefined * g_023f8240;
// @baa 0x01937db0
undefined4 * C_01937db0::sub_01937db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8240);
  return param_1;
}

struct C_01937e10 { int a; C_01937e10(int); };

// @baa 0x01937e10
C_01937e10::C_01937e10(int x) : a(x) {}

struct C_01937e70 {
    int sub_01937e70(int);
};

// @baa 0x01937e70
int C_01937e70::sub_01937e70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01937e80 {
    int sub_01937e80(int);
};

// @baa 0x01937e80
int C_01937e80::sub_01937e80(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_01937e90 {
    int sub_01937e90();
};

// @baa 0x01937e90
int C_01937e90::sub_01937e90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + 0x10 + param_1[1] * 0xc;
}

struct C_01937f00 { int a, b; C_01937f00(int, int); };

// @baa 0x01937f00
C_01937f00::C_01937f00(int x, int y) : a(x), b(y) {}

struct C_01937f20 { int a, b; C_01937f20(int, int); };

// @baa 0x01937f20
C_01937f20::C_01937f20(int x, int y) : a(x), b(y) {}

struct C_01938ce0 { int a, b; C_01938ce0(int, int); };

// @baa 0x01938ce0
C_01938ce0::C_01938ce0(int x, int y) : a(x), b(y) {}

struct C_01938d60 { int a, b; C_01938d60(int, int); };

// @baa 0x01938d60
C_01938d60::C_01938d60(int x, int y) : a(x), b(y) {}

struct S_01938ee0 {
    void sub_01938b80();
    void sub_01938ee0();
};

// @baa 0x01938ee0
void S_01938ee0::sub_01938ee0()
{
    sub_01938b80();
}

struct C_01939a40 {
    int sub_01939a40();
    int sub_018e4150();
};

// @baa 0x01939a40
int C_01939a40::sub_01939a40(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  ((C_01939a40 *)(((char *)this + 8)))->sub_018e4150();
  return param_1;
}

static float f_0193a880 = 512.0f;
// @baa 0x0193a890
float sub_0193a890(void) { return f_0193a880; }

const float f_01f8eeb8 = 1024.0f;
// @baa 0x0193a8a0
float sub_0193a8a0(void)
{
    return f_01f8eeb8;
}

struct C_0193aa50 { int a; C_0193aa50(int); };

// @baa 0x0193aa50
C_0193aa50::C_0193aa50(int x) : a(x) {}

struct S_0193ab60 {
    int Unk0; // 0x00
    BYTE sub_0193ab60(S_0193ab60* Other);
};

// @baa 0x0193ab60
BYTE S_0193ab60::sub_0193ab60(S_0193ab60* Other)
{
    return (this->Unk0 == Other->Unk0) ? 1 : 0;
}

struct C_0193ab80 {
    undefined4 * sub_0193ab80();
};

extern undefined * g_023f8590;
// @baa 0x0193ab80
undefined4 * C_0193ab80::sub_0193ab80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8590);
  return param_1;
}

struct C_0193ada0 { int a; C_0193ada0(int); };

// @baa 0x0193ada0
C_0193ada0::C_0193ada0(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_0193adb0();
};

struct Object {
    void sub_01925010();
};

// @baa 0x0193adb0
void ObjectRef::sub_0193adb0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_01925010();
}

struct C_0193ae30 {
    undefined4 * sub_0193ae30();
};

extern undefined * g_023f8598;
// @baa 0x0193ae30
undefined4 * C_0193ae30::sub_0193ae30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f8598);
  return param_1;
}

struct C_0193ae50 { int a; C_0193ae50(int); };

// @baa 0x0193ae50
C_0193ae50::C_0193ae50(int x) : a(x) {}

struct C_0193aed0 { int a, b, c; C_0193aed0(); };

// @baa 0x0193aed0
C_0193aed0::C_0193aed0() : a(0), b(0), c(0) {}

struct C_0193aef0 {
    int sub_0193aef0(int);
};

// @baa 0x0193aef0
int C_0193aef0::sub_0193aef0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_0193af00 { int a, b, c; C_0193af00(); };

// @baa 0x0193af00
C_0193af00::C_0193af00() : a(0), b(0), c(0) {}

struct C_0193af20 { int a, b, c; C_0193af20(); };

// @baa 0x0193af20
C_0193af20::C_0193af20() : a(0), b(0), c(0) {}

struct C_0193af50 {
    undefined4 * sub_0193af50();
};

extern undefined * g_023f85a0;
// @baa 0x0193af50
undefined4 * C_0193af50::sub_0193af50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f85a0);
  return param_1;
}

struct C_0193af70 {
    undefined4 * sub_0193af70();
};

extern undefined * g_023f85a8;
// @baa 0x0193af70
undefined4 * C_0193af70::sub_0193af70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f85a8);
  return param_1;
}

struct C_0193af90 { int a, b, c; C_0193af90(); };

// @baa 0x0193af90
C_0193af90::C_0193af90() : a(0), b(0), c(0) {}

struct C_0193afa0 { int a, b, c; C_0193afa0(); };

// @baa 0x0193afa0
C_0193afa0::C_0193afa0() : a(0), b(0), c(0) {}

struct C_0193afc0 { int a, b, c; C_0193afc0(); };

// @baa 0x0193afc0
C_0193afc0::C_0193afc0() : a(0), b(0), c(0) {}

struct C_0193afe0 { int a, b; C_0193afe0(int, int); };

// @baa 0x0193afe0
C_0193afe0::C_0193afe0(int x, int y) : a(x), b(y) {}

struct C_0193b000 { int a, b; C_0193b000(int, int); };

// @baa 0x0193b000
C_0193b000::C_0193b000(int x, int y) : a(x), b(y) {}

struct C_0193b030 { int a, b; C_0193b030(int, int); };

// @baa 0x0193b030
C_0193b030::C_0193b030(int x, int y) : a(x), b(y) {}

struct C_0193b100 { int a, b; C_0193b100(int, int); };

// @baa 0x0193b100
C_0193b100::C_0193b100(int x, int y) : a(x), b(y) {}

struct C_0193b1e0 {
    int sub_0193b1e0(int);
};

// @baa 0x0193b1e0
int C_0193b1e0::sub_0193b1e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_0193b1f0 {
    uint sub_0193b1f0();
};

// @baa 0x0193b1f0
uint C_0193b1f0::sub_0193b1f0(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0193b240 { int a, b; C_0193b240(int, int); };

// @baa 0x0193b240
C_0193b240::C_0193b240(int x, int y) : a(x), b(y) {}

struct C_0193b360 { int a; C_0193b360(int); };

// @baa 0x0193b360
C_0193b360::C_0193b360(int x) : a(x) {}

struct C_0193b370 { int a; C_0193b370(int); };

// @baa 0x0193b370
C_0193b370::C_0193b370(int x) : a(x) {}

struct C_0193b4d0 {
    int sub_0193b4d0(int);
};

// @baa 0x0193b4d0
int C_0193b4d0::sub_0193b4d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0xc;
}

struct C_0193b520 { void sub_0193b360(int); C_0193b520 *sub_0193b520(int); };

// @baa 0x0193b520
C_0193b520 *C_0193b520::sub_0193b520(int a) { sub_0193b360(a); return this; }

struct C_0193b5e0 { void sub_0193b370(int); C_0193b5e0 *sub_0193b5e0(int); };

// @baa 0x0193b5e0
C_0193b5e0 *C_0193b5e0::sub_0193b5e0(int a) { sub_0193b370(a); return this; }

// @baa 0x0193be40
uint __stdcall sub_0193be40(word *p)
{
    return *p;
}

struct C_0193bf20 {
    UINT sub_0193bf20();
};

// @baa 0x0193bf20
UINT C_0193bf20::sub_0193bf20(void)
{
    return *(WORD*)this;
}

// @baa 0x0193c010
int sub_0193c010(const unsigned short *param_1)
{
    return *param_1;
}

struct C_0193c120 {
    void sub_0193c120();
};

int sub_018d3de0(void);
extern undefined * g_023f85d4;
// @baa 0x0193c120
void C_0193c120::sub_0193c120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f85d4);
  sub_018d3de0();
  return;
}

struct C_0193cdb0 { int a, b; C_0193cdb0(int, int); };

// @baa 0x0193cdb0
C_0193cdb0::C_0193cdb0(int x, int y) : a(x), b(y) {}

struct C_0193cf30 { int a, b; C_0193cf30(int, int); };

// @baa 0x0193cf30
C_0193cf30::C_0193cf30(int x, int y) : a(x), b(y) {}

struct C_0193d840 {
    char pad1[0x18];
    int refCount;
    void sub_0193d840();
    void sub_0193b9f0();
};

// @baa 0x0193d840
void C_0193d840::sub_0193d840()
{
    refCount--;
    this->sub_0193b9f0();
}

struct C_0193d940 {
    char pad0[0x18];
    int field_18;
    void sub_0193bc00();
    void sub_0193d940();
};

// @baa 0x0193d940
void C_0193d940::sub_0193d940()
{
    field_18--;
    sub_0193bc00();
}

struct C_0193da50 {
    unsigned sub_0193da50(void);
};

// @baa 0x0193da50
unsigned C_0193da50::sub_0193da50(void)
{
    return *(unsigned short *)(*(unsigned **)this);
}

struct C_0193dae0 {
    void sub_0193dae0(undefined4);
    int sub_0193d7c0(int);
    int sub_0193be80(int, int);
    int sub_0193b9f0();
};

// @baa 0x0193dae0
void C_0193dae0::sub_0193dae0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_0193dae0 *)(this))->sub_0193d7c0(param_2);
  iVar1 = ((C_0193dae0 *)(this))->sub_0193be80(*(undefined4 *)(param_1 + 4), param_1 + 0x18);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  ((C_0193dae0 *)(this))->sub_0193b9f0();
  return;
}

// @baa 0x0193e820
uint __stdcall sub_0193e820(word *p)
{
    return *p;
}

// @baa 0x0193e830
uint __stdcall sub_0193e830(word *p)
{
    return *p;
}

struct GFxFontDataCompactedSwf {
    BYTE sub_0193ead0(INT a, INT b);
};

// @baa 0x0193ead0
BYTE GFxFontDataCompactedSwf::sub_0193ead0(INT a, INT b) { return 0; }

// @baa 0x0193eae0
BYTE __stdcall sub_0193eae0(void*, void*) { return 0; }

struct M_0193eb40 { void sub_0193d140(); };

struct C_0193eb40 { char pad[56]; M_0193eb40 m; void sub_0193eb40(); };

// @baa 0x0193eb40
void C_0193eb40::sub_0193eb40() { m.sub_0193d140(); }

struct GFxFontDataCompactedGfx {
    char sub_0193ec60(int a1, int a2);
};

// @baa 0x0193ec60
char GFxFontDataCompactedGfx::sub_0193ec60(int a1, int a2) { return 0; }

// @baa 0x0193ec70
BYTE __stdcall sub_0193ec70(UBOOL a1, UBOOL a2) {
    return 0;
}

struct M_0193ecd0 { void sub_0193d390(); };

struct C_0193ecd0 { char pad[48]; M_0193ecd0 m; void sub_0193ecd0(); };

// @baa 0x0193ecd0
void C_0193ecd0::sub_0193ecd0() { m.sub_0193d390(); }

struct C_0193fb40 {
    int sub_0193fb40(int arg1);
};

// @baa 0x0193fb40
int C_0193fb40::sub_0193fb40(int arg1)
{
    return *(ushort *)(this + 4) & arg1;
}
