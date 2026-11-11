// OnlineSubsystemSteamworks_0d20000.cpp (part 1 of 2): 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_00d20c30(void); };

// @baa 0x00d20c30
int C::sub_00d20c30(void) { return *(int*)((char*)this + 0); }

struct C_00d20c40 { int sub_00d20c40(void); };

// @baa 0x00d20c40
int C_00d20c40::sub_00d20c40(void) { return *(int*)((char*)this + 0); }

struct C_00d20c50 { C_00d20c50* sub_00d20c50(int a0); };

// @baa 0x00d20c50
C_00d20c50* C_00d20c50::sub_00d20c50(int a0) { return this; }

struct C_00d20c60 { int sub_00d20c60(void); };

// @baa 0x00d20c60
int C_00d20c60::sub_00d20c60(void) { return *(int*)((char*)this + 0); }

struct C_00d20c70 { C_00d20c70* sub_00d20c70(int a0); };

// @baa 0x00d20c70
C_00d20c70* C_00d20c70::sub_00d20c70(int a0) { return this; }

struct C_00d20c80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d20c80(INT Index);
};

// @baa 0x00d20c80
UBOOL C_00d20c80::sub_00d20c80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d20d10 { int sub_00d20d10(void); };

// @baa 0x00d20d10
int C_00d20d10::sub_00d20d10(void) { return *(int*)((char*)this + 0); }

struct C_00d20e20 { C_00d20e20* sub_00d20e20(int a0); };

// @baa 0x00d20e20
C_00d20e20* C_00d20e20::sub_00d20e20(int a0) { return this; }

struct C_00d20f10 { int sub_00d20f10(void); };

// @baa 0x00d20f10
int C_00d20f10::sub_00d20f10(void) { return *(int*)((char*)this + 0); }

struct C_00d20f20 { int sub_00d20f20(void); };

// @baa 0x00d20f20
int C_00d20f20::sub_00d20f20(void) { return *(int*)((char*)this + 0); }

struct C_00d20fa0 { int sub_00d20fa0(void); };

// @baa 0x00d20fa0
int C_00d20fa0::sub_00d20fa0(void) { return *(int*)((char*)this + 0); }

struct C_00d21020 { int sub_00d21020(void); };

// @baa 0x00d21020
int C_00d21020::sub_00d21020(void) { return *(int*)((char*)this + 0); }

struct M_00d210a0 { void sub_00d67c50(); };

struct C_00d210a0 { char pad[4]; M_00d210a0 m; void sub_00d210a0(); };

// @baa 0x00d210a0
void C_00d210a0::sub_00d210a0() { m.sub_00d67c50(); }

struct C_00d210b0 { int sub_00d210b0(void); };

// @baa 0x00d210b0
int C_00d210b0::sub_00d210b0(void) { return *(int*)((char*)this + 0); }

struct C_00d210c0 { int sub_00d210c0(void); };

// @baa 0x00d210c0
int C_00d210c0::sub_00d210c0(void) { return *(int*)((char*)this + 0); }

struct C_00d210d0 { int sub_00d210d0(void); };

// @baa 0x00d210d0
int C_00d210d0::sub_00d210d0(void) { return *(int*)((char*)this + 0); }

struct C_00d210e0 { int sub_00d210e0(void); };

// @baa 0x00d210e0
int C_00d210e0::sub_00d210e0(void) { return *(int*)((char*)this + 0); }

struct C_00d210f0 { int sub_00d210f0(void); };

// @baa 0x00d210f0
int C_00d210f0::sub_00d210f0(void) { return *(int*)((char*)this + 0); }

struct C_00d21100 { int sub_00d21100(void); };

// @baa 0x00d21100
int C_00d21100::sub_00d21100(void) { return *(int*)((char*)this + 0); }

struct C_00d21110 { int sub_00d21110(void); };

// @baa 0x00d21110
int C_00d21110::sub_00d21110(void) { return *(int*)((char*)this + 0); }

struct C_00d21120 { int sub_00d21120(void); };

// @baa 0x00d21120
int C_00d21120::sub_00d21120(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d21130
int* sub_00d21130(int* a, int b)
{
  *a = b;
  return a;
}

struct C_00d21140 { int sub_00d21140(void); };

// @baa 0x00d21140
int C_00d21140::sub_00d21140(void) { return *(int*)((char*)this + 0); }

struct C_00d21150 { C_00d21150* sub_00d21150(void); };

// @baa 0x00d21150
C_00d21150* C_00d21150::sub_00d21150(void) { return this; }

struct C_00d21180 {
    undefined4 sub_00d21180();
};

// @baa 0x00d21180
undefined4 C_00d21180::sub_00d21180(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x00d211c0
int __stdcall sub_00d211c0(int a0) { return 0; }

// @baa 0x00d211d0
int sub_00d211d0(void) { return 12; }
