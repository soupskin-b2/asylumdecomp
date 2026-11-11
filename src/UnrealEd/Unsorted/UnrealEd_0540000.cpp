// UnrealEd_0540000.cpp: 27 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00541c60
undefined4 __stdcall sub_00541c60(undefined4 a, undefined4 b, undefined4 c, undefined4 d)
{
    return 0xffffffff;
}

// @baa 0x00541c70
int __stdcall sub_00541c70(int a, int b, int c, int d)
{
    return -1;
}

// @baa 0x00541c80
DWORD __stdcall sub_00541c80(DWORD a, DWORD b)
{
    return 0xffffffff;
}

// @baa 0x00541c90
int __stdcall sub_00541c90(int) { return -1; }

// @baa 0x00541ca0
int __stdcall sub_00541ca0(int a0, int a1, int a2) { return 0; }

// @baa 0x00541cb0
void __stdcall sub_00541cb0(int a0, int a1) {  }

// @baa 0x00541cc0
int sub_00541cc0(void) { return 0; }

// @baa 0x00541cd0
DWORD __stdcall sub_00541cd0(DWORD a1)
{
    return 0xffffffff;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00541ce0();
};

// @baa 0x00541ce0
S *S::sub_00541ce0()
{
    Unk00 = 4294967295;
    Unk04 = 4294967295;
    return this;
}

// @baa 0x00541e00
void __stdcall sub_00541e00(int a0, int a1) {  }

extern char g_01e729c0[];
struct C { void sub_00541e10(void); };

// @baa 0x00541e10
void C::sub_00541e10(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

extern char g_01e72a60[];
struct C_00541e60 { void sub_00541e60(void); };

// @baa 0x00541e60
void C_00541e60::sub_00541e60(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00541e70 { void sub_00541e70(void); };

// @baa 0x00541e70
void C_00541e70::sub_00541e70(void) { *(int*)((char*)this + 0) = (int)g_01e729c0; }

extern char g_01e73070[];
struct C_00541e80 { C_00541e80* sub_00541e80(void); };

// @baa 0x00541e80
C_00541e80* C_00541e80::sub_00541e80(void) { *(int*)((char*)this + 0) = (int)g_01e73070; return this; }

// @baa 0x00541e90
int sub_00541e90(void) { return 1; }

// @baa 0x00541ea0
void sub_00541ea0(void) {  }

// @baa 0x00541eb0
void __stdcall sub_00541eb0(int a0, int a1, int a2) {  }

// @baa 0x00541ec0
void __stdcall sub_00541ec0(int a0, int a1) {  }

// @baa 0x00541ed0
void __stdcall sub_00541ed0(int a0) {  }

// @baa 0x00541ee0
void __stdcall sub_00541ee0(int a0) {  }

// @baa 0x00541ef0
void __stdcall sub_00541ef0(int a0) {  }

// @baa 0x00541f00
int __stdcall sub_00541f00(int a0, int a1) { return 0; }

// @baa 0x00541f10
void __stdcall sub_00541f10(int a0) {  }

// @baa 0x00541f20
void __stdcall sub_00541f20(int a0, int a1, int a2) {  }

// @baa 0x00541f30
void __stdcall sub_00541f30(int a0) {  }

// @baa 0x00541f40
void sub_00541f40(void) {  }

// @baa 0x00541f50
void __stdcall sub_00541f50(int a0) {  }
