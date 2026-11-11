// FMOD_17e0000.cpp (part 1 of 2): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_017e0ad0(int);
};

// @baa 0x017e0ad0
int C::sub_017e0ad0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x4) + param_2 * 8;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_017e0af0();
};

// @baa 0x017e0af0
S *S::sub_017e0af0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_017e0b00 {
    int sub_017e0b00();
};

// @baa 0x017e0b00
int C_017e0b00::sub_017e0b00(void)
{
    int param_1 = (int)this;
  return param_1 + 0x20;
}

struct C_017e3af0 { int a, b, c; C_017e3af0(); };

// @baa 0x017e3af0
C_017e3af0::C_017e3af0() : a(0), b(0), c(0) {}

struct S140 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int sub_84(void* a);
};

struct S1c {
    char pad0[0x140];
    S140* p140;
};

struct T017e1a80 {
    int sub_017e1a80(void* a);
};

int __stdcall sub_017630f6(int a);
int __stdcall sub_0176316b(int a, float b);
int __stdcall sub_01763a9e(int a, char* b);
int __stdcall sub_01763c00(int a, int b);
int __stdcall sub_01763c24(int a, int* b);
int __stdcall sub_0177bdca(int a, unsigned int* b);
unsigned int __cdecl sub_01782922(unsigned long* p);
struct C_017e5a90 {
    char pad0[0x1c];
    void* m1c;          // 0x1c
    unsigned int m20;   // 0x20
    void* m24;          // 0x24
    unsigned char m28;  // 0x28
    char pad29[7];
    void* m30;          // 0x30
    char pad34[0x8c - 0x34];
    int m8c;            // 0x8c
    int sub_017e5a90(unsigned int b);
};

// @baa 0x017e5a90
int C_017e5a90::sub_017e5a90(unsigned int b)
{
    int r;
    unsigned int local;

    if (m30 != 0) {
        if ((unsigned char)b != 0) {
            r = sub_017630f6((int)m30);
            if (r != 0x24 && r != 0xb && r != 0)
                return r;
        } else {
            if (m20 & 0x10) {
                *(unsigned char*)&b = 0;
                sub_01763a9e((int)m30, (char*)&b);
                if ((unsigned char)b != 0) {
                    r = sub_01763c24((int)m30, (int*)&local);
                    if (r != 0x24 && r != 0xb && r != 0)
                        return r;
                    if (local & 1)
                        return 0;
                    r = sub_01763c00((int)m30, 1);
                    if (r != 0x24 && r != 0xb && r != 0)
                        return r;
                    goto Zero;
                }
            } else {
                if (m8c == -1) {
                    r = sub_0176316b((int)m30, 0.0f);
                    if (r != 0x24 && r != 0xb && r != 0)
                        return r;
                    sub_01782922((unsigned long*)&m8c);
                } else if (m8c != 0) {
                    sub_01782922((unsigned long*)&b);
                    if (b - m8c >= 0x14)
                        m8c = 0;
                }
                if (m8c != 0)
                    return 0;
                r = sub_017630f6((int)m30);
                if (r != 0x24 && r != 0xb && r != 0)
                    return r;
            }
        }
        m30 = 0;
        if (m20 & 8) {
            m20 = m20 & 0xfffffff7;
            r = ((S140*)((S1c*)m1c)->p140)->sub_84(this);
            if (r != 0)
                return r;
        }
    }
    if (m24 != 0) {
        r = sub_0177bdca((int)m24, &b);
        if (r != 0)
            return r;
        if (b != 0 && b > 1) {
            r = ((T017e1a80*)b)->sub_017e1a80(m24);
            if (r != 0)
                return r;
        }
    }
    m24 = 0;
    m28 = 0;
Zero:
    return 0;
}

struct C_017e8a90 {
    void sub_017e8a90();
};

extern undefined4 g_023dff84;
// @baa 0x017e8a90
void C_017e8a90::sub_017e8a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dff84));
  return;
}

struct C_017e8ae0 {
    BYTE *sub_017e8ae0();
};

// @baa 0x017e8ae0
BYTE *C_017e8ae0::sub_017e8ae0(void)
{
    BYTE *p = (BYTE *)this;
    p[0] = 0;
    p[1] = 0;
    return p;
}

struct S_017e8b70 {
    INT Unk00;
    INT Unk04;
    S_017e8b70 *sub_017e8b70();
};

// @baa 0x017e8b70
S_017e8b70 *S_017e8b70::sub_017e8b70()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_017e8b80 { int a, b; C_017e8b80(int, int); };

// @baa 0x017e8b80
C_017e8b80::C_017e8b80(int x, int y) : a(x), b(y) {}
