// GFx_1a00000.cpp (part 2 of 2): 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a068a0(undefined4);
    int sub_01a05d00(int);
    int sub_01a06580(int);
};

// @baa 0x01a068a0
void C::sub_01a068a0(undefined4 param_2)
{
    int param_1 = (int)this;
  char cVar1;
  if ((*(char *)(param_1 + 7) != '\0') && (cVar1 = ((C *)(this))->sub_01a05d00(param_2), cVar1 != '\0')) {
    return;
  }
  ((C *)(this))->sub_01a06580(param_2);
  return;
}

struct C_01a078e0 { int a, b; C_01a078e0(const C_01a078e0 &); };

// @baa 0x01a078e0
C_01a078e0::C_01a078e0(const C_01a078e0 &o) : a(o.a), b(o.b) {}

void __stdcall sub_018d7170(int Obj);
// @baa 0x01a07c50
void __cdecl sub_01a07c50(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07c60
void __cdecl sub_01a07c60(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07c70
void __cdecl sub_01a07c70(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07c80
void __cdecl sub_01a07c80(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07c90
void __cdecl sub_01a07c90(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07ca0
void __cdecl sub_01a07ca0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07cb0
void __cdecl sub_01a07cb0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07cc0
void __cdecl sub_01a07cc0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01a07cd0
void __cdecl sub_01a07cd0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

struct M_01a094f0 { void sub_019ccdb0(); };

struct C_01a094f0 { char pad[4]; M_01a094f0 m; void sub_01a094f0(); };

// @baa 0x01a094f0
void C_01a094f0::sub_01a094f0() { m.sub_019ccdb0(); }

void __stdcall sub_018d7150(int Index);
// @baa 0x01a0a100
void sub_01a0a100(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01a0a140
void sub_01a0a140(int Value)
{
    sub_018d7150(Value * 4);
}

struct C_01a0e3c0 { int a, b; C_01a0e3c0(int, int); };

// @baa 0x01a0e3c0
C_01a0e3c0::C_01a0e3c0(int x, int y) : a(x), b(y) {}

struct C_01a0e3e0 { int a, b; C_01a0e3e0(int, int); };

// @baa 0x01a0e3e0
C_01a0e3e0::C_01a0e3e0(int x, int y) : a(x), b(y) {}

struct C_01a0e400 { int a; C_01a0e400(int); };

// @baa 0x01a0e400
C_01a0e400::C_01a0e400(int x) : a(x) {}

// @baa 0x01a0e640
void sub_01a0e640(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01a0e680
void sub_01a0e680(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01a0e6c0
void sub_01a0e6c0(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01a0e700
void sub_01a0e700(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x01a0e720
void sub_01a0e720(int Value)
{
    sub_018d7150(Value * 4);
}

extern int g_02402abc[4];
// @baa 0x01a0e410
static int sub_01a0e410(int Value, int Offset)
{
    return (Value & 0xfffffffc) | g_02402abc[Offset + (Value & 3)];
}

int sub_01a0e410_probe(int Value, int Offset)
{
    return sub_01a0e410(Value, Offset);
}
