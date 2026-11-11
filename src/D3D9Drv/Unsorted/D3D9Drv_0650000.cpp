// D3D9Drv_0650000.cpp: 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_00650a80(void); };

// @baa 0x00650a80
int C::sub_00650a80(void) { return *(int*)((char*)this + 0); }

struct C_00650a90 { int sub_00650a90(void); };

// @baa 0x00650a90
int C_00650a90::sub_00650a90(void) { return *(int*)((char*)this + 0); }

struct C_00650aa0 { C_00650aa0* sub_00650aa0(void); };

// @baa 0x00650aa0
C_00650aa0* C_00650aa0::sub_00650aa0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650ab0 { C_00650ab0* sub_00650ab0(void); };

// @baa 0x00650ab0
C_00650ab0* C_00650ab0::sub_00650ab0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650ac0 { int sub_00650ac0(void); };

// @baa 0x00650ac0
int C_00650ac0::sub_00650ac0(void) { return *(int*)((char*)this + 0); }

struct C_00650ad0 { int sub_00650ad0(void); };

// @baa 0x00650ad0
int C_00650ad0::sub_00650ad0(void) { return *(int*)((char*)this + 0); }

struct C_00650ae0 {
    int pad;
    int a;
    int b;
    C_00650ae0 *sub_00650ae0();
};

// @baa 0x00650ae0
C_00650ae0 *C_00650ae0::sub_00650ae0()
{
    a = 0;
    b = 0;
    return this;
}

struct C_00650af0 { C_00650af0* sub_00650af0(void); };

// @baa 0x00650af0
C_00650af0* C_00650af0::sub_00650af0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650b00{
void sub_00650b00();
};

extern undefined4*g_026b0d94;
// @baa 0x00650b00
void C_00650b00::sub_00650b00(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x22c))((int)(*param_1));
}
return;
}

struct C_00650b60 { int sub_00650b60(void); };

// @baa 0x00650b60
int C_00650b60::sub_00650b60(void) { return *(int*)((char*)this + 0); }

struct C_00650b70 { C_00650b70* sub_00650b70(void); };

// @baa 0x00650b70
C_00650b70* C_00650b70::sub_00650b70(void) { *(int*)((char*)this + 192) = 0; return this; }

struct C_00650ba0 {
    void sub_00650ba0(int *);
};

// @baa 0x00650ba0
void C_00650ba0::sub_00650ba0(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_00650bc0 { int a, b, c; C_00650bc0(); };

// @baa 0x00650bc0
C_00650bc0::C_00650bc0() : a(0), b(0), c(0) {}

struct C_00650bd0 { int a, b, c; C_00650bd0(); };

// @baa 0x00650bd0
C_00650bd0::C_00650bd0() : a(0), b(0), c(0) {}

struct C_00650c30 { void sub_00650c30(void); };

// @baa 0x00650c30
void C_00650c30::sub_00650c30(void) { *(int*)((char*)this + 48) = 0; }

struct C_00650c40 { int sub_00650c40(void); };

// @baa 0x00650c40
int C_00650c40::sub_00650c40(void) { return *(int*)((char*)this + 196); }

struct C_00650c50 { int sub_00650c50(void); };

// @baa 0x00650c50
int C_00650c50::sub_00650c50(void) { return *(int*)((char*)this + 12); }

struct C_00650c60 { int sub_00650c60(void); };

// @baa 0x00650c60
int C_00650c60::sub_00650c60(void) { return *(int*)((char*)this + 4); }

struct C_00650c70 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00650c70(INT Index);
};

// @baa 0x00650c70
UBOOL C_00650c70::sub_00650c70(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00650c90 { int sub_00650c90(void); };

// @baa 0x00650c90
int C_00650c90::sub_00650c90(void) { return *(int*)((char*)this + 4); }

struct C_00650ca0 { int a, b, c; C_00650ca0(); };

// @baa 0x00650ca0
C_00650ca0::C_00650ca0() : a(0), b(0), c(0) {}

struct C_00650cb0 { int sub_00650cb0(void); };

// @baa 0x00650cb0
int C_00650cb0::sub_00650cb0(void) { return *(int*)((char*)this + 4); }

struct C_00650cc0 { int sub_00650cc0(void); };

// @baa 0x00650cc0
int C_00650cc0::sub_00650cc0(void) { return *(int*)((char*)this + 4); }

struct C_00650cd0 { int sub_00650cd0(void); };

// @baa 0x00650cd0
int C_00650cd0::sub_00650cd0(void) { return *(int*)((char*)this + 4); }

struct C_00650ce0 { int sub_00650ce0(void); };

// @baa 0x00650ce0
int C_00650ce0::sub_00650ce0(void) { return *(int*)((char*)this + 4); }

struct C_00650cf0 { int sub_00650cf0(void); };

// @baa 0x00650cf0
int C_00650cf0::sub_00650cf0(void) { return *(int*)((char*)this + 4); }

struct C_00650d00 { int sub_00650d00(void); };

// @baa 0x00650d00
int C_00650d00::sub_00650d00(void) { return *(int*)((char*)this + 4); }

struct C_00650d10 { int sub_00650d10(void); };

// @baa 0x00650d10
int C_00650d10::sub_00650d10(void) { return *(int*)((char*)this + 4); }

struct C_00650d20 { int sub_00650d20(void); };

// @baa 0x00650d20
int C_00650d20::sub_00650d20(void) { return *(int*)((char*)this + 4); }

struct C_00650d30 { int sub_00650d30(void); };

// @baa 0x00650d30
int C_00650d30::sub_00650d30(void) { return *(int*)((char*)this + 4); }

struct C_00650d40 { int a, b, c; C_00650d40(); };

// @baa 0x00650d40
C_00650d40::C_00650d40() : a(0), b(0), c(0) {}

struct C_00650d50 { int sub_00650d50(void); };

// @baa 0x00650d50
int C_00650d50::sub_00650d50(void) { return *(int*)((char*)this + 4); }

struct C_00650d60 { int a, b, c; C_00650d60(); };

// @baa 0x00650d60
C_00650d60::C_00650d60() : a(0), b(0), c(0) {}

struct C_00650d70 { int sub_00650d70(void); };

// @baa 0x00650d70
int C_00650d70::sub_00650d70(void) { return *(int*)((char*)this + 4); }

struct C_00650d80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00650d80(INT Index);
};

// @baa 0x00650d80
UBOOL C_00650d80::sub_00650d80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00650da0 { int sub_00650da0(void); };

// @baa 0x00650da0
int C_00650da0::sub_00650da0(void) { return *(int*)((char*)this + 4); }

struct C_00650db0 { int sub_00650db0(void); };

// @baa 0x00650db0
int C_00650db0::sub_00650db0(void) { return *(int*)((char*)this + 4); }
