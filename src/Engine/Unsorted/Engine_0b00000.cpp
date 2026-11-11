// Engine_0b00000.cpp: 69 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_00b01940(byte);
};

int sub_0053dfa0(...);
int sub_00afa840(void);
// @baa 0x00b01940
undefined4 C::sub_00b01940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00afa840();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b01a40 {
    undefined4 sub_00b01a40(byte);
};

int sub_007249d0(void);
// @baa 0x00b01a40
undefined4 C_00b01a40::sub_00b01a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b01ad0 {
    undefined4 sub_00b01ad0(byte);
};

// @baa 0x00b01ad0
undefined4 C_00b01ad0::sub_00b01ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b01b60 {
    undefined4 sub_00b01b60(byte);
};

// @baa 0x00b01b60
undefined4 C_00b01b60::sub_00b01b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b03d40 {
    undefined4 sub_00b03d40(byte);
};

// @baa 0x00b03d40
undefined4 C_00b03d40::sub_00b03d40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00afa840();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b03d60 {
    undefined4 sub_00b03d60(byte);
};

// @baa 0x00b03d60
undefined4 C_00b03d60::sub_00b03d60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00afa840();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b03d80 {
    undefined4 sub_00b03d80(byte);
};

// @baa 0x00b03d80
undefined4 C_00b03d80::sub_00b03d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b040f0 {
    uint sub_00b040f0();
};

// @baa 0x00b040f0
uint C_00b040f0::sub_00b040f0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

struct C_00b04110 {
    uint sub_00b04110();
};

// @baa 0x00b04110
uint C_00b04110::sub_00b04110(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x30) | -(uint)(*(uint *)(param_1 + 0x30) == 0) & param_1;
}

struct C_00b04200{
int*sub_00b04200(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x00b04200
int*C_00b04200::sub_00b04200(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1ec))((int)(iVar1));
}
param_1[1]=param_2[1];
return param_1;
}

struct C_00b04230 {
    int sub_00b04230(int);
};

// @baa 0x00b04230
int C_00b04230::sub_00b04230(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00b04240 {
    int sub_00b04240();
};

// @baa 0x00b04240
int C_00b04240::sub_00b04240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b04260{
int sub_00b04260(byte);
};

// @baa 0x00b04260
int C_00b04260::sub_00b04260(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(*(int*)(param_1+4)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00b042a0{
uint*sub_00b042a0(undefined4*);
};

// @baa 0x00b042a0
undefined4*C_00b042a0::sub_00b042a0(undefined4*param_2)
{
undefined4*param_1=(undefined4*)this;

int iVar1;

*param_1=*param_2;
iVar1=param_2[1];
param_1[1]=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1ec))((int)(iVar1));
}
param_1[2]=param_2[2];
return param_1;
}

struct C_00b043c0 {
    undefined4 * sub_00b043c0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01fe2d30;
// @baa 0x00b043c0
undefined4 * C_00b043c0::sub_00b043c0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00b043c0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01fe2d30);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_00b04420 { int sub_00b04420(void); };

// @baa 0x00b04420
int C_00b04420::sub_00b04420(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00b04460 { int sub_00b04460(void); };

// @baa 0x00b04460
int C_00b04460::sub_00b04460(void) { return *(int*)((char*)this + 0); }

struct C_00b04470 {
    void sub_00b04470();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00b04470
void C_00b04470::sub_00b04470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00b044a0 {
    undefined4 * sub_00b044a0(byte);
};

// @baa 0x00b044a0
undefined4 * C_00b044a0::sub_00b044a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0069c170(...);
// @baa 0x00b044e0
void sub_00b044e0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00b04500 {
    int sub_00b04500(int);
};

// @baa 0x00b04500
int C_00b04500::sub_00b04500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00b04510 {
    int sub_00b04510();
};

// @baa 0x00b04510
int C_00b04510::sub_00b04510(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00b04680
void sub_00b04680(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct XG {
    void sub_00abba30(int, int, int, int);
    void sub_00a3e1e0(int, int, int, int);
    void sub_00a61b00(unsigned int, unsigned int);
    int  sub_00716290();
    void sub_00a64b00(int, int, int, int, int, int, int);
    int  sub_00a5a150(int, int, int, int, int, int);
};

struct XV {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int, int, int);
};

extern int g_025d575c;
extern int g_025d5760;
extern int g_025d5764;
extern int g_025d5768;
void sub_00654890(int, int, int, int);
struct XC {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b04850(int, int, int, int, int);
};

// @baa 0x00b04850
void XC::sub_00b04850(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG*)((char*)this + 0x1c))->sub_00a64b00(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG*)f18)->sub_00a61b00((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XC_00b04aa0 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b04aa0(int, int, int, int, int);
};

// @baa 0x00b04aa0
void XC_00b04aa0::sub_00b04aa0(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG*)((char*)this + 0x1c))->sub_00a64b00(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG*)f18)->sub_00a61b00((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XC_00b04cf0 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b04cf0(int, int, int, int, int);
};

// @baa 0x00b04cf0
void XC_00b04cf0::sub_00b04cf0(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG*)((char*)this + 0x1c))->sub_00a64b00(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG*)f18)->sub_00a61b00((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XC_00b04f40 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b04f40(int, int, int, int, int);
};

// @baa 0x00b04f40
void XC_00b04f40::sub_00b04f40(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG*)((char*)this + 0x1c))->sub_00a64b00(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG*)f18)->sub_00a61b00((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b05190 {
    void sub_00abba30(int, int, int, int);
    void sub_00a3e1e0(int, int, int, int);
    void sub_00a61ce0(unsigned int, unsigned int);
    int  sub_00716290();
    void sub_00a64bb0(int, int, int, int, int, int, int);
    int  sub_00a5a150(int, int, int, int, int, int);
};

struct XC_00b05190 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b05190(int, int, int, int, int);
};

// @baa 0x00b05190
void XC_00b05190::sub_00b05190(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG_00b05190*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG_00b05190*)((char*)this + 0x1c))->sub_00a64bb0(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG_00b05190*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG_00b05190*)f18)->sub_00a61ce0((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG_00b05190*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG_00b05190*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b053e0 {
    void sub_00abba30(int, int, int, int);
    void sub_00a3e1e0(int, int, int, int);
    void sub_00a61ce0(unsigned int, unsigned int);
    int  sub_00716290();
    void sub_00a64bb0(int, int, int, int, int, int, int);
    int  sub_00a5a150(int, int, int, int, int, int);
};

struct XC_00b053e0 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b053e0(int, int, int, int, int);
};

// @baa 0x00b053e0
void XC_00b053e0::sub_00b053e0(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG_00b053e0*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG_00b053e0*)((char*)this + 0x1c))->sub_00a64bb0(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG_00b053e0*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG_00b053e0*)f18)->sub_00a61ce0((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG_00b053e0*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG_00b053e0*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b05630 {
    void sub_00abba30(int, int, int, int);
    void sub_00a3e1e0(int, int, int, int);
    void sub_00a61ce0(unsigned int, unsigned int);
    int  sub_00716290();
    void sub_00a64bb0(int, int, int, int, int, int, int);
    int  sub_00a5a150(int, int, int, int, int, int);
};

struct XC_00b05630 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b05630(int, int, int, int, int);
};

// @baa 0x00b05630
void XC_00b05630::sub_00b05630(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG_00b05630*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG_00b05630*)((char*)this + 0x1c))->sub_00a64bb0(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG_00b05630*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG_00b05630*)f18)->sub_00a61ce0((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG_00b05630*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG_00b05630*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b05880 {
    void sub_00abba30(int, int, int, int);
    void sub_00a3e1e0(int, int, int, int);
    void sub_00a61ce0(unsigned int, unsigned int);
    int  sub_00716290();
    void sub_00a64bb0(int, int, int, int, int, int, int);
    int  sub_00a5a150(int, int, int, int, int, int);
};

struct XC_00b05880 {
    int vtbl;              // 0
    int f4;                // 4
    int f8;                // 8
    unsigned char flags_c; // 0xc
    char pad_d[7];
    int f14;               // 0x14
    int f18;               // 0x18
    int f1c;               // 0x1c
    int pad20;
    unsigned char flag24;  // 0x24
    char pad25[3];
    void sub_00b05880(int, int, int, int, int);
};

// @baa 0x00b05880
void XC_00b05880::sub_00b05880(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    ((XG_00b05880*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x40));

    int vo = *(int*)(f14 + 0x54);
    if (vo) {
        ((XV*)vo)->v4(f14, arg3, arg1);
    }

    ((XG_00b05880*)((char*)this + 0x1c))->sub_00a64bb0(
        f14 ? f14 + 0x4c : 0,
        (!(flags_c & 8) && f18) ? f18 + 0x4c : 0,
        f14, f18, f4, f8, arg5);

    union { float f; char b; } u;
    if (!(flags_c & 8)) {
        ((XG_00b05880*)(f18 + 0x4c))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (flag24 & 1) {
            int loc20[4];
            int loc10[4];
            loc20[0] = g_025d575c; loc20[1] = g_025d5760;
            loc20[2] = g_025d5764; loc20[3] = g_025d5768;
            loc10[0] = g_025d575c; loc10[1] = g_025d5760;
            loc10[2] = g_025d5764; loc10[3] = g_025d5768;
            if (arg2) {
                loc20[0] = *(int*)(arg2 + 0x7c);
                loc20[1] = *(int*)(arg2 + 0x80);
                loc20[2] = *(int*)(arg2 + 0x84);
                loc20[3] = *(int*)(arg2 + 0x88);
            }
            ((XG_00b05880*)f18)->sub_00a61ce0((unsigned int)loc20, (unsigned int)loc10);
        }

        int c;
        if (arg2 && (*(int*)(arg2 + 0x2c) & 0x200000))
            c = 1;
        else
            c = 0;

        int pf = f18;
        u.f = c ? 1.0f : 0.0f;
        int *pt = (int*)((XG_00b05880*)pf)->sub_00716290();
        sub_00654890(*pt, pf + 0xca, (int)&u.f, 0);
    }

    u.b = 0;
    ((XG_00b05880*)this)->sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void f(int,int,int); };

struct XG_00b05af0 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct D { int sub_00716290(); void sub_00a61ec0(unsigned*,unsigned*); };

struct E { void sub_00a64de0(int,int,int,int,int,int,int); };

struct C_00b05af0 {
    int pad4; int f4; int f8; int fc; int f10; char* f14; char* f18; E e1c; char pad2[0x2c-0x1c-1]; int f2c;
    int sub_00a5a150(int,int,int,int,int,int);
    void sub_00b05af0(int a1, char* a2, int a3, int a4, char* a5);
};

void sub_00654890(int,int,int,int);
// @baa 0x00b05af0
void C_00b05af0::sub_00b05af0(int a1, char* a2, int a3, int a4, char* a5)
{
    float v;
    ((XG_00b05af0*)(f14 + 0x80))->sub_00abba30(a1, f8, (int)f14, *(int*)(a5 + 0x50));
    V* p = *(V**)(f14 + 0x54);
    if (p) p->f((int)f14, a3, a1);
    int x = (!(fc & 8) && f18) ? (int)f18 + 0x4c : 0;
    int y = f14 ? (int)f14 + 0x4c : 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(y, x, (int)f14, (int)f18, f4, f8, (int)a5);
    if (!(fc & 8)) {
        ((XG_00b05af0*)(f18 + 0x58))->sub_00a3e1e0((int)f18, a3, a1, a4);
        if (f2c & 1) {
            unsigned l[8];
            l[0]=g_025d575c; l[1]=g_025d5760; l[2]=g_025d5764; l[3]=g_025d5768;
            l[4]=l[0]; l[5]=l[1]; l[6]=l[2]; l[7]=l[3];
            if (a2) { l[0]=*(unsigned*)(a2+0x7c); l[1]=*(unsigned*)(a2+0x80); l[2]=*(unsigned*)(a2+0x84); l[3]=*(unsigned*)(a2+0x88); }
            ((D*)f18)->sub_00a61ec0(l, l+4);
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char* q = f18;
        v = b ? 1.0f : 0.0f;
        int* r = (int*)((D*)q)->sub_00716290();
        sub_00654890(*r, (int)(q + 0xd6), (int)&v, 0);
    }
    *(char*)&v = 0;
    sub_00a5a150(a1, (int)a2, a3, a4, (int)&v, 0);
}

struct XG_00b05d60 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct C_00b05d60 {
    int pad4; int f4; int f8; int fc; int f10; char* f14; char* f18; E e1c; char pad2[0x2c-0x1c-1]; int f2c;
    int sub_00a5a150(int,int,int,int,int,int);
    void sub_00b05d60(int a1, char* a2, int a3, int a4, char* a5);
};

// @baa 0x00b05d60
void C_00b05d60::sub_00b05d60(int a1, char* a2, int a3, int a4, char* a5)
{
    float v;
    ((XG_00b05d60*)(f14 + 0x80))->sub_00abba30(a1, f8, (int)f14, *(int*)(a5 + 0x50));
    V* p = *(V**)(f14 + 0x54);
    if (p) p->f((int)f14, a3, a1);
    int x = (!(fc & 8) && f18) ? (int)f18 + 0x4c : 0;
    int y = f14 ? (int)f14 + 0x4c : 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(y, x, (int)f14, (int)f18, f4, f8, (int)a5);
    if (!(fc & 8)) {
        ((XG_00b05d60*)(f18 + 0x58))->sub_00a3e1e0((int)f18, a3, a1, a4);
        if (f2c & 1) {
            unsigned l[8];
            l[0]=g_025d575c; l[1]=g_025d5760; l[2]=g_025d5764; l[3]=g_025d5768;
            l[4]=l[0]; l[5]=l[1]; l[6]=l[2]; l[7]=l[3];
            if (a2) { l[0]=*(unsigned*)(a2+0x7c); l[1]=*(unsigned*)(a2+0x80); l[2]=*(unsigned*)(a2+0x84); l[3]=*(unsigned*)(a2+0x88); }
            ((D*)f18)->sub_00a61ec0(l, l+4);
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char* q = f18;
        v = b ? 1.0f : 0.0f;
        int* r = (int*)((D*)q)->sub_00716290();
        sub_00654890(*r, (int)(q + 0xd6), (int)&v, 0);
    }
    *(char*)&v = 0;
    sub_00a5a150(a1, (int)a2, a3, a4, (int)&v, 0);
}

struct XG_00b05fd0 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct C_00b05fd0 {
    int pad4; int f4; int f8; int fc; int f10; char* f14; char* f18; E e1c; char pad2[0x2c-0x1c-1]; int f2c;
    int sub_00a5a150(int,int,int,int,int,int);
    void sub_00b05fd0(int a1, char* a2, int a3, int a4, char* a5);
};

// @baa 0x00b05fd0
void C_00b05fd0::sub_00b05fd0(int a1, char* a2, int a3, int a4, char* a5)
{
    float v;
    ((XG_00b05fd0*)(f14 + 0x80))->sub_00abba30(a1, f8, (int)f14, *(int*)(a5 + 0x50));
    V* p = *(V**)(f14 + 0x54);
    if (p) p->f((int)f14, a3, a1);
    int x = (!(fc & 8) && f18) ? (int)f18 + 0x4c : 0;
    int y = f14 ? (int)f14 + 0x4c : 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(y, x, (int)f14, (int)f18, f4, f8, (int)a5);
    if (!(fc & 8)) {
        ((XG_00b05fd0*)(f18 + 0x58))->sub_00a3e1e0((int)f18, a3, a1, a4);
        if (f2c & 1) {
            unsigned l[8];
            l[0]=g_025d575c; l[1]=g_025d5760; l[2]=g_025d5764; l[3]=g_025d5768;
            l[4]=l[0]; l[5]=l[1]; l[6]=l[2]; l[7]=l[3];
            if (a2) { l[0]=*(unsigned*)(a2+0x7c); l[1]=*(unsigned*)(a2+0x80); l[2]=*(unsigned*)(a2+0x84); l[3]=*(unsigned*)(a2+0x88); }
            ((D*)f18)->sub_00a61ec0(l, l+4);
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char* q = f18;
        v = b ? 1.0f : 0.0f;
        int* r = (int*)((D*)q)->sub_00716290();
        sub_00654890(*r, (int)(q + 0xd6), (int)&v, 0);
    }
    *(char*)&v = 0;
    sub_00a5a150(a1, (int)a2, a3, a4, (int)&v, 0);
}

struct XG_00b06240 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct C_00b06240 {
    int pad4; int f4; int f8; int fc; int f10; char* f14; char* f18; E e1c; char pad2[0x2c-0x1c-1]; int f2c;
    int sub_00a5a150(int,int,int,int,int,int);
    void sub_00b06240(int a1, char* a2, int a3, int a4, char* a5);
};

// @baa 0x00b06240
void C_00b06240::sub_00b06240(int a1, char* a2, int a3, int a4, char* a5)
{
    float v;
    ((XG_00b06240*)(f14 + 0x80))->sub_00abba30(a1, f8, (int)f14, *(int*)(a5 + 0x50));
    V* p = *(V**)(f14 + 0x54);
    if (p) p->f((int)f14, a3, a1);
    int x = (!(fc & 8) && f18) ? (int)f18 + 0x4c : 0;
    int y = f14 ? (int)f14 + 0x4c : 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(y, x, (int)f14, (int)f18, f4, f8, (int)a5);
    if (!(fc & 8)) {
        ((XG_00b06240*)(f18 + 0x58))->sub_00a3e1e0((int)f18, a3, a1, a4);
        if (f2c & 1) {
            unsigned l[8];
            l[0]=g_025d575c; l[1]=g_025d5760; l[2]=g_025d5764; l[3]=g_025d5768;
            l[4]=l[0]; l[5]=l[1]; l[6]=l[2]; l[7]=l[3];
            if (a2) { l[0]=*(unsigned*)(a2+0x7c); l[1]=*(unsigned*)(a2+0x80); l[2]=*(unsigned*)(a2+0x84); l[3]=*(unsigned*)(a2+0x88); }
            ((D*)f18)->sub_00a61ec0(l, l+4);
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char* q = f18;
        v = b ? 1.0f : 0.0f;
        int* r = (int*)((D*)q)->sub_00716290();
        sub_00654890(*r, (int)(q + 0xd6), (int)&v, 0);
    }
    *(char*)&v = 0;
    sub_00a5a150(a1, (int)a2, a3, a4, (int)&v, 0);
}

struct V4 { int a, b, c, d; };

struct XG_00b064a0 {
    void sub_00abba30(int,int,int,int);
    void sub_00a3e1e0(int,int,int,int);
};

struct C_00b064a0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    void sub_00b064a0(int arg1, int arg2, int arg3, int arg4, int arg5);
    void sub_00a620a0(unsigned, unsigned);
    int sub_00716290();
    int sub_00a5a150(int,int,int,int,int,int);
};

struct VF {
    virtual void a();
    virtual void b();
    virtual void c();
    virtual void d();
    virtual void e(int,int,int);
};

union FB { float f; char b; };

// @baa 0x00b064a0
void C_00b064a0::sub_00b064a0(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    FB u;
    ((XG_00b064a0*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x50));

    int q = *(int*)(f14 + 0x54);
    if (q)
        ((VF*)q)->e(f14, arg3, arg1);

    int d_;
    if (!(fC & 8) && f18 != 0)
        d_ = f18 + 0x4c;
    else
        d_ = 0;
    int c_;
    if (f14 != 0)
        c_ = f14 + 0x4c;
    else
        c_ = 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(c_, d_, f14, f18, f4, f8, arg5);

    if (!(fC & 8)) {
        ((XG_00b064a0*)(f18 + 0x58))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (f24 & 1) {
            V4 gv;
            gv.a = g_025d575c; gv.b = g_025d5760; gv.c = g_025d5764; gv.d = g_025d5768;
            V4 v = gv, w = gv;
            if (arg2)
                v = *(V4*)(arg2 + 0x7c);
            ((C_00b064a0*)f18)->sub_00a620a0((unsigned)&v, (unsigned)&w);
        }

        int flag = arg2 != 0 && (*(int*)(arg2 + 0x2c) & 0x200000) != 0;
        int obj = f18;
        u.f = flag ? 1.0f : 0.0f;
        int r = ((C_00b064a0*)obj)->sub_00716290();
        sub_00654890(*(int*)r, obj + 0xd6, (int)&u.f, 0);
    }
    u.b = 0;
    sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b06700 {
    void sub_00abba30(int,int,int,int);
    void sub_00a3e1e0(int,int,int,int);
};

struct C_00b06700 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    void sub_00b06700(int arg1, int arg2, int arg3, int arg4, int arg5);
    void sub_00a620a0(unsigned, unsigned);
    int sub_00716290();
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b06700
void C_00b06700::sub_00b06700(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    FB u;
    ((XG_00b06700*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x50));

    int q = *(int*)(f14 + 0x54);
    if (q)
        ((VF*)q)->e(f14, arg3, arg1);

    int d_;
    if (!(fC & 8) && f18 != 0)
        d_ = f18 + 0x4c;
    else
        d_ = 0;
    int c_;
    if (f14 != 0)
        c_ = f14 + 0x4c;
    else
        c_ = 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(c_, d_, f14, f18, f4, f8, arg5);

    if (!(fC & 8)) {
        ((XG_00b06700*)(f18 + 0x58))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (f24 & 1) {
            V4 gv;
            gv.a = g_025d575c; gv.b = g_025d5760; gv.c = g_025d5764; gv.d = g_025d5768;
            V4 v = gv, w = gv;
            if (arg2)
                v = *(V4*)(arg2 + 0x7c);
            ((C_00b06700*)f18)->sub_00a620a0((unsigned)&v, (unsigned)&w);
        }

        int flag = arg2 != 0 && (*(int*)(arg2 + 0x2c) & 0x200000) != 0;
        int obj = f18;
        u.f = flag ? 1.0f : 0.0f;
        int r = ((C_00b06700*)obj)->sub_00716290();
        sub_00654890(*(int*)r, obj + 0xd6, (int)&u.f, 0);
    }
    u.b = 0;
    sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b06960 {
    void sub_00abba30(int,int,int,int);
    void sub_00a3e1e0(int,int,int,int);
};

struct C_00b06960 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    void sub_00b06960(int arg1, int arg2, int arg3, int arg4, int arg5);
    void sub_00a620a0(unsigned, unsigned);
    int sub_00716290();
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b06960
void C_00b06960::sub_00b06960(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    FB u;
    ((XG_00b06960*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x50));

    int q = *(int*)(f14 + 0x54);
    if (q)
        ((VF*)q)->e(f14, arg3, arg1);

    int d_;
    if (!(fC & 8) && f18 != 0)
        d_ = f18 + 0x4c;
    else
        d_ = 0;
    int c_;
    if (f14 != 0)
        c_ = f14 + 0x4c;
    else
        c_ = 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(c_, d_, f14, f18, f4, f8, arg5);

    if (!(fC & 8)) {
        ((XG_00b06960*)(f18 + 0x58))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (f24 & 1) {
            V4 gv;
            gv.a = g_025d575c; gv.b = g_025d5760; gv.c = g_025d5764; gv.d = g_025d5768;
            V4 v = gv, w = gv;
            if (arg2)
                v = *(V4*)(arg2 + 0x7c);
            ((C_00b06960*)f18)->sub_00a620a0((unsigned)&v, (unsigned)&w);
        }

        int flag = arg2 != 0 && (*(int*)(arg2 + 0x2c) & 0x200000) != 0;
        int obj = f18;
        u.f = flag ? 1.0f : 0.0f;
        int r = ((C_00b06960*)obj)->sub_00716290();
        sub_00654890(*(int*)r, obj + 0xd6, (int)&u.f, 0);
    }
    u.b = 0;
    sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b06bc0 {
    void sub_00abba30(int,int,int,int);
    void sub_00a3e1e0(int,int,int,int);
};

struct C_00b06bc0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    void sub_00b06bc0(int arg1, int arg2, int arg3, int arg4, int arg5);
    void sub_00a620a0(unsigned, unsigned);
    int sub_00716290();
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b06bc0
void C_00b06bc0::sub_00b06bc0(int arg1, int arg2, int arg3, int arg4, int arg5)
{
    FB u;
    ((XG_00b06bc0*)(f14 + 0x80))->sub_00abba30(arg1, f8, f14, *(int*)(arg5 + 0x50));

    int q = *(int*)(f14 + 0x54);
    if (q)
        ((VF*)q)->e(f14, arg3, arg1);

    int d_;
    if (!(fC & 8) && f18 != 0)
        d_ = f18 + 0x4c;
    else
        d_ = 0;
    int c_;
    if (f14 != 0)
        c_ = f14 + 0x4c;
    else
        c_ = 0;
    ((E*)((char*)this + 0x1c))->sub_00a64de0(c_, d_, f14, f18, f4, f8, arg5);

    if (!(fC & 8)) {
        ((XG_00b06bc0*)(f18 + 0x58))->sub_00a3e1e0(f18, arg3, arg1, arg4);

        if (f24 & 1) {
            V4 gv;
            gv.a = g_025d575c; gv.b = g_025d5760; gv.c = g_025d5764; gv.d = g_025d5768;
            V4 v = gv, w = gv;
            if (arg2)
                v = *(V4*)(arg2 + 0x7c);
            ((C_00b06bc0*)f18)->sub_00a620a0((unsigned)&v, (unsigned)&w);
        }

        int flag = arg2 != 0 && (*(int*)(arg2 + 0x2c) & 0x200000) != 0;
        int obj = f18;
        u.f = flag ? 1.0f : 0.0f;
        int r = ((C_00b06bc0*)obj)->sub_00716290();
        sub_00654890(*(int*)r, obj + 0xd6, (int)&u.f, 0);
    }
    u.b = 0;
    sub_00a5a150(arg1, arg2, arg3, arg4, (int)&u.b, 0);
}

struct XG_00b06e10 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct V_00b06e10 { int a,b,c,d; };

struct P { void sub_00a63120(V_00b06e10*,V_00b06e10*); int* sub_00716290(); };

struct Q { void sub_0072f710(int,int,int,int,int,int,int*); };

struct Hook { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int,int,int); };

void sub_00654890(int,int,void*,int);
static inline int chk(int a2) { if (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) return 1; return 0; }

union U { float f; char c; };

struct C_00b06e10 {
 int pad4; int f4; int f8; unsigned fc; int f10; int f14; int f18;
 char f1c[8]; int f24;
 int sub_00a5a150(int,int,int,int,void*,int);
 void sub_00b06e10(int a1, int a2, int a3, int a4, int* a5);
};

// @baa 0x00b06e10
void C_00b06e10::sub_00b06e10(int a1, int a2, int a3, int a4, int* a5)
{
 ((XG_00b06e10*)(f14+0x80))->sub_00abba30(a1, f8, f14, a5[1]);
 Hook* o = *(Hook**)(f14+0x54);
 if (o) o->v4(f14, a3, a1);
 int e = (!(fc & 8) && f18) ? f18+0x4c : 0;
 int d = f14 ? f14+0x4c : 0;
 ((Q*)((char*)this+0x1c))->sub_0072f710(d, e, f14, f18, f4, f8, a5);
 U u;
 if (!(fc & 8)) {
  ((XG_00b06e10*)(f18+0x60))->sub_00a3e1e0(f18, a3, a1, a4);
  if (f24 & 1) {
   V_00b06e10 x = {g_025d575c, g_025d5760, g_025d5764, g_025d5768};
   V_00b06e10 y = x;
   if (a2) x = *(V_00b06e10*)(a2+0x7c);
   ((P*)f18)->sub_00a63120(&x, &y);
  }
  int b = chk(a2);
  int p = f18;
  u.f = b ? 1.0f : 0.0f;
  int* q = ((P*)p)->sub_00716290();
  sub_00654890(*q, p+0xde, &u, 0);
 }
 u.c = 0;
 sub_00a5a150(a1, a2, a3, a4, &u, 0);
}

struct XG_00b07060 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct V_00b07060 { int a,b,c,d; };

struct P_00b07060 { void sub_00a63120(V_00b07060*,V_00b07060*); int* sub_00716290(); };

struct C_00b07060 {
 int pad4; int f4; int f8; unsigned fc; int f10; int f14; int f18;
 char f1c[8]; int f24;
 int sub_00a5a150(int,int,int,int,void*,int);
 void sub_00b07060(int a1, int a2, int a3, int a4, int* a5);
};

// @baa 0x00b07060
void C_00b07060::sub_00b07060(int a1, int a2, int a3, int a4, int* a5)
{
 ((XG_00b07060*)(f14+0x80))->sub_00abba30(a1, f8, f14, a5[1]);
 Hook* o = *(Hook**)(f14+0x54);
 if (o) o->v4(f14, a3, a1);
 int e = (!(fc & 8) && f18) ? f18+0x4c : 0;
 int d = f14 ? f14+0x4c : 0;
 ((Q*)((char*)this+0x1c))->sub_0072f710(d, e, f14, f18, f4, f8, a5);
 U u;
 if (!(fc & 8)) {
  ((XG_00b07060*)(f18+0x60))->sub_00a3e1e0(f18, a3, a1, a4);
  if (f24 & 1) {
   V_00b07060 x = {g_025d575c, g_025d5760, g_025d5764, g_025d5768};
   V_00b07060 y = x;
   if (a2) x = *(V_00b07060*)(a2+0x7c);
   ((P_00b07060*)f18)->sub_00a63120(&x, &y);
  }
  int b = chk(a2);
  int p = f18;
  u.f = b ? 1.0f : 0.0f;
  int* q = ((P_00b07060*)p)->sub_00716290();
  sub_00654890(*q, p+0xde, &u, 0);
 }
 u.c = 0;
 sub_00a5a150(a1, a2, a3, a4, &u, 0);
}

struct XG_00b072b0 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct V_00b072b0 { int a,b,c,d; };

struct P_00b072b0 { void sub_00a63120(V_00b072b0*,V_00b072b0*); int* sub_00716290(); };

struct C_00b072b0 {
 int pad4; int f4; int f8; unsigned fc; int f10; int f14; int f18;
 char f1c[8]; int f24;
 int sub_00a5a150(int,int,int,int,void*,int);
 void sub_00b072b0(int a1, int a2, int a3, int a4, int* a5);
};

// @baa 0x00b072b0
void C_00b072b0::sub_00b072b0(int a1, int a2, int a3, int a4, int* a5)
{
 ((XG_00b072b0*)(f14+0x80))->sub_00abba30(a1, f8, f14, a5[1]);
 Hook* o = *(Hook**)(f14+0x54);
 if (o) o->v4(f14, a3, a1);
 int e = (!(fc & 8) && f18) ? f18+0x4c : 0;
 int d = f14 ? f14+0x4c : 0;
 ((Q*)((char*)this+0x1c))->sub_0072f710(d, e, f14, f18, f4, f8, a5);
 U u;
 if (!(fc & 8)) {
  ((XG_00b072b0*)(f18+0x60))->sub_00a3e1e0(f18, a3, a1, a4);
  if (f24 & 1) {
   V_00b072b0 x = {g_025d575c, g_025d5760, g_025d5764, g_025d5768};
   V_00b072b0 y = x;
   if (a2) x = *(V_00b072b0*)(a2+0x7c);
   ((P_00b072b0*)f18)->sub_00a63120(&x, &y);
  }
  int b = chk(a2);
  int p = f18;
  u.f = b ? 1.0f : 0.0f;
  int* q = ((P_00b072b0*)p)->sub_00716290();
  sub_00654890(*q, p+0xde, &u, 0);
 }
 u.c = 0;
 sub_00a5a150(a1, a2, a3, a4, &u, 0);
}

struct XG_00b07500 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); };

struct V_00b07500 { int a,b,c,d; };

struct P_00b07500 { void sub_00a63120(V_00b07500*,V_00b07500*); int* sub_00716290(); };

struct C_00b07500 {
 int pad4; int f4; int f8; unsigned fc; int f10; int f14; int f18;
 char f1c[8]; int f24;
 int sub_00a5a150(int,int,int,int,void*,int);
 void sub_00b07500(int a1, int a2, int a3, int a4, int* a5);
};

// @baa 0x00b07500
void C_00b07500::sub_00b07500(int a1, int a2, int a3, int a4, int* a5)
{
 ((XG_00b07500*)(f14+0x80))->sub_00abba30(a1, f8, f14, a5[1]);
 Hook* o = *(Hook**)(f14+0x54);
 if (o) o->v4(f14, a3, a1);
 int e = (!(fc & 8) && f18) ? f18+0x4c : 0;
 int d = f14 ? f14+0x4c : 0;
 ((Q*)((char*)this+0x1c))->sub_0072f710(d, e, f14, f18, f4, f8, a5);
 U u;
 if (!(fc & 8)) {
  ((XG_00b07500*)(f18+0x60))->sub_00a3e1e0(f18, a3, a1, a4);
  if (f24 & 1) {
   V_00b07500 x = {g_025d575c, g_025d5760, g_025d5764, g_025d5768};
   V_00b07500 y = x;
   if (a2) x = *(V_00b07500*)(a2+0x7c);
   ((P_00b07500*)f18)->sub_00a63120(&x, &y);
  }
  int b = chk(a2);
  int p = f18;
  u.f = b ? 1.0f : 0.0f;
  int* q = ((P_00b07500*)p)->sub_00716290();
  sub_00654890(*q, p+0xde, &u, 0);
 }
 u.c = 0;
 sub_00a5a150(a1, a2, a3, a4, &u, 0);
}

struct B { void sub_00abba30(int,int,int,int); };

struct D_00b07750 { void sub_00a3e1e0(int,int,int,int); };

struct X;
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(X*,int,int); };

struct X { char p[0x4c]; char r[8]; VO* o; char q[0x28]; B b; };

struct Y { char p[0x4c]; char r[8]; D_00b07750 d; char q[0x7a]; char s[1]; void sub_00a62f40(void*,void*); int* sub_00716290(); };

struct Z { char p[0x2c]; unsigned fl; char q[0x4c]; int v[4]; };

struct W { int a; int b; };

struct E_00b07750 { void sub_00719b20(char*,char*,X*,Y*,int,int,W*); };

struct C_00b07750 {
 int f0; int f4; int f8; unsigned f12; int f10; X* x; Y* y; E_00b07750 e; char pad[0x24-0x1d]; unsigned char f24;
 void sub_00b07750(int,Z*,int,int,W*);
 int sub_00a5a150(int,Z*,int,int,void*,int);
};

void sub_00654890(int,void*,void*,int);
// @baa 0x00b07750
void C_00b07750::sub_00b07750(int a1,Z* a2,int a3,int a4,W* a5){
 x->b.sub_00abba30(a1,f8,(int)x,a5->b);
 VO* o = x->o;
 if(o) { int t=a3; o->v4(x,t,a1); }
 char* py = (!(f12&8) && y) ? y->p+0x4c : 0;
 char* px = x ? x->p+0x4c : 0;
 e.sub_00719b20(px,py,x,y,f4,f8,a5);
 int xx;
 if(!(f12&8)){
  y->d.sub_00a3e1e0((int)y,a3,a1,a4);
  if(f24&1){
   int l[8];
   int g0=g_025d575c,g1=g_025d5760,g2=g_025d5764,g3=g_025d5768;
   l[0]=g0;l[1]=g1;l[2]=g2;l[3]=g3;l[4]=g0;l[5]=g1;l[6]=g2;l[7]=g3;
   if(a2){l[0]=a2->v[0];l[1]=a2->v[1];l[2]=a2->v[2];l[3]=a2->v[3];}
   y->sub_00a62f40(l,l+4);
  }
  int b = a2 && (a2->fl&0x200000);
  Y* yy=y;
  float v = b ? 1.0f : 0.0f;
  *(float*)&xx = v;
  sub_00654890(*yy->sub_00716290(), yy->p+0xd2, &xx, 0);
 }
 *(char*)&xx=0;
 sub_00a5a150(a1,a2,a3,a4,&xx,0);
}

struct D_00b079a0 { void sub_00a3e1e0(int,int,int,int); };

struct Y_00b079a0 { char p[0x4c]; char r[8]; D_00b079a0 d; char q[0x7a]; char s[1]; void sub_00a62f40(void*,void*); int* sub_00716290(); };

struct E_00b079a0 { void sub_00719b20(char*,char*,X*,Y_00b079a0*,int,int,W*); };

struct C_00b079a0 {
 int f0; int f4; int f8; unsigned f12; int f10; X* x; Y_00b079a0* y; E_00b079a0 e; char pad[0x24-0x1d]; unsigned char f24;
 void sub_00b079a0(int,Z*,int,int,W*);
 int sub_00a5a150(int,Z*,int,int,void*,int);
};

// @baa 0x00b079a0
void C_00b079a0::sub_00b079a0(int a1,Z* a2,int a3,int a4,W* a5){
 x->b.sub_00abba30(a1,f8,(int)x,a5->b);
 VO* o = x->o;
 if(o) { int t=a3; o->v4(x,t,a1); }
 char* py = (!(f12&8) && y) ? y->p+0x4c : 0;
 char* px = x ? x->p+0x4c : 0;
 e.sub_00719b20(px,py,x,y,f4,f8,a5);
 int xx;
 if(!(f12&8)){
  y->d.sub_00a3e1e0((int)y,a3,a1,a4);
  if(f24&1){
   int l[8];
   int g0=g_025d575c,g1=g_025d5760,g2=g_025d5764,g3=g_025d5768;
   l[0]=g0;l[1]=g1;l[2]=g2;l[3]=g3;l[4]=g0;l[5]=g1;l[6]=g2;l[7]=g3;
   if(a2){l[0]=a2->v[0];l[1]=a2->v[1];l[2]=a2->v[2];l[3]=a2->v[3];}
   y->sub_00a62f40(l,l+4);
  }
  int b = a2 && (a2->fl&0x200000);
  Y_00b079a0* yy=y;
  float v = b ? 1.0f : 0.0f;
  *(float*)&xx = v;
  sub_00654890(*yy->sub_00716290(), yy->p+0xd2, &xx, 0);
 }
 *(char*)&xx=0;
 sub_00a5a150(a1,a2,a3,a4,&xx,0);
}

struct D_00b07bf0 { void sub_00a3e1e0(int,int,int,int); };

struct Y_00b07bf0 { char p[0x4c]; char r[8]; D_00b07bf0 d; char q[0x7a]; char s[1]; void sub_00a62f40(void*,void*); int* sub_00716290(); };

struct E_00b07bf0 { void sub_00719b20(char*,char*,X*,Y_00b07bf0*,int,int,W*); };

struct C_00b07bf0 {
 int f0; int f4; int f8; unsigned f12; int f10; X* x; Y_00b07bf0* y; E_00b07bf0 e; char pad[0x24-0x1d]; unsigned char f24;
 void sub_00b07bf0(int,Z*,int,int,W*);
 int sub_00a5a150(int,Z*,int,int,void*,int);
};

// @baa 0x00b07bf0
void C_00b07bf0::sub_00b07bf0(int a1,Z* a2,int a3,int a4,W* a5){
 x->b.sub_00abba30(a1,f8,(int)x,a5->b);
 VO* o = x->o;
 if(o) { int t=a3; o->v4(x,t,a1); }
 char* py = (!(f12&8) && y) ? y->p+0x4c : 0;
 char* px = x ? x->p+0x4c : 0;
 e.sub_00719b20(px,py,x,y,f4,f8,a5);
 int xx;
 if(!(f12&8)){
  y->d.sub_00a3e1e0((int)y,a3,a1,a4);
  if(f24&1){
   int l[8];
   int g0=g_025d575c,g1=g_025d5760,g2=g_025d5764,g3=g_025d5768;
   l[0]=g0;l[1]=g1;l[2]=g2;l[3]=g3;l[4]=g0;l[5]=g1;l[6]=g2;l[7]=g3;
   if(a2){l[0]=a2->v[0];l[1]=a2->v[1];l[2]=a2->v[2];l[3]=a2->v[3];}
   y->sub_00a62f40(l,l+4);
  }
  int b = a2 && (a2->fl&0x200000);
  Y_00b07bf0* yy=y;
  float v = b ? 1.0f : 0.0f;
  *(float*)&xx = v;
  sub_00654890(*yy->sub_00716290(), yy->p+0xd2, &xx, 0);
 }
 *(char*)&xx=0;
 sub_00a5a150(a1,a2,a3,a4,&xx,0);
}

struct D_00b07e40 { void sub_00a3e1e0(int,int,int,int); };

struct Y_00b07e40 { char p[0x4c]; char r[8]; D_00b07e40 d; char q[0x7a]; char s[1]; void sub_00a62f40(void*,void*); int* sub_00716290(); };

struct E_00b07e40 { void sub_00719b20(char*,char*,X*,Y_00b07e40*,int,int,W*); };

struct C_00b07e40 {
 int f0; int f4; int f8; unsigned f12; int f10; X* x; Y_00b07e40* y; E_00b07e40 e; char pad[0x24-0x1d]; unsigned char f24;
 void sub_00b07e40(int,Z*,int,int,W*);
 int sub_00a5a150(int,Z*,int,int,void*,int);
};

// @baa 0x00b07e40
void C_00b07e40::sub_00b07e40(int a1,Z* a2,int a3,int a4,W* a5){
 x->b.sub_00abba30(a1,f8,(int)x,a5->b);
 VO* o = x->o;
 if(o) { int t=a3; o->v4(x,t,a1); }
 char* py = (!(f12&8) && y) ? y->p+0x4c : 0;
 char* px = x ? x->p+0x4c : 0;
 e.sub_00719b20(px,py,x,y,f4,f8,a5);
 int xx;
 if(!(f12&8)){
  y->d.sub_00a3e1e0((int)y,a3,a1,a4);
  if(f24&1){
   int l[8];
   int g0=g_025d575c,g1=g_025d5760,g2=g_025d5764,g3=g_025d5768;
   l[0]=g0;l[1]=g1;l[2]=g2;l[3]=g3;l[4]=g0;l[5]=g1;l[6]=g2;l[7]=g3;
   if(a2){l[0]=a2->v[0];l[1]=a2->v[1];l[2]=a2->v[2];l[3]=a2->v[3];}
   y->sub_00a62f40(l,l+4);
  }
  int b = a2 && (a2->fl&0x200000);
  Y_00b07e40* yy=y;
  float v = b ? 1.0f : 0.0f;
  *(float*)&xx = v;
  sub_00654890(*yy->sub_00716290(), yy->p+0xd2, &xx, 0);
 }
 *(char*)&xx=0;
 sub_00a5a150(a1,a2,a3,a4,&xx,0);
}

int sub_00b08ae0(void);
// @baa 0x00b08c50
undefined4 ULensFlare::sub_00b08c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b08ae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b08d60
void ULensFlare::sub_00b08d60(void)
{
int param_1=(uint)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

// @baa 0x00b0a400
void ULensFlare::sub_00b0a400(void)
{
int param_1=(int)this;

undefined4 iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((iVar1));
}
return;
}

struct C_00b0c0c0 {
    int sub_00b0c0c0(int);
};

// @baa 0x00b0c0c0
int C_00b0c0c0::sub_00b0c0c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00b0c280 {
    int sub_00b0c280(int);
};

// @baa 0x00b0c280
int C_00b0c280::sub_00b0c280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00b0c290 {
    int sub_00b0c290();
};

// @baa 0x00b0c290
int C_00b0c290::sub_00b0c290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct C_00b0c3a0 {
    void sub_00b0c3a0(int);
};

int sub_0053df70(...);
// @baa 0x00b0c3a0
void C_00b0c3a0::sub_00b0c3a0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00b0ecf0 {
    int sub_00b0ecf0();
};

// @baa 0x00b0ecf0
int C_00b0ecf0::sub_00b0ecf0(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b0ed10 {
    int sub_00b0ed10(int);
};

// @baa 0x00b0ed10
int C_00b0ed10::sub_00b0ed10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00b0ed80
void __stdcall sub_00b0ed80(int a0, int a1) {  }

// @baa 0x00b0ed90
void __stdcall sub_00b0ed90(int a0, int a1) {  }

struct C_00b0eda0 {
    int sub_00b0eda0();
};

// @baa 0x00b0eda0
int C_00b0eda0::sub_00b0eda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00b0ee20
int UTexture2D::sub_00b0ee20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00b0ef80 {
    int sub_00b0ef80(int);
};

// @baa 0x00b0ef80
int C_00b0ef80::sub_00b0ef80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct XG_00b0f330 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); void sub_00a63310(unsigned,unsigned); };

struct YG { void sub_00a7a030(int,int,int,int,int,int,int); };

struct ZG { int sub_00716290(); };

struct VG { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int,int,int); };

struct P_00b0f330 { char pad[0x4c]; VG *vg; char pad2[0x28]; XG_00b0f330 x78; };

struct R { int a,b; int c; };

struct C_00b0f330 {
    int pad0; int f4; int f8; unsigned char fc; char padd[3]; int pad10; P_00b0f330 *f14; P_00b0f330 *f18; char pad1c[8]; int f24;
    void sub_00b0f330(int,int,int,int,R*);
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b0f330
void C_00b0f330::sub_00b0f330(int a1,int a2,int a3,int a4,R* a5)
{
    unsigned buf;
    f14->x78.sub_00abba30(a1,f8,(int)f14,a5->c);
    VG *vg = f14->vg;
    if (vg) vg->v4((int)f14,a3,a1);
    char *x = (!(fc & 8) && f18) ? (char*)f18+0x4c : 0;
    char *y = f14 ? (char*)f14+0x4c : 0;
    ((YG*)((char*)this+0x1c))->sub_00a7a030((int)y,(int)x,(int)f14,(int)f18,f4,f8,(int)a5);
    if (!(fc & 8)) {
        ((XG_00b0f330*)((char*)f18+0x84))->sub_00a3e1e0((int)f18,a3,a1,a4);
        if (f24 & 1) {
            int l[8];
            int t0=g_025d575c,t1=g_025d5760,t2=g_025d5764,t3=g_025d5768;
            l[0]=t0;l[1]=t1;l[2]=t2;l[3]=t3;l[4]=t0;l[5]=t1;l[6]=t2;l[7]=t3;
            if (a2) { l[0]=*(int*)(a2+0x7c); l[1]=*(int*)(a2+0x80); l[2]=*(int*)(a2+0x84); l[3]=*(int*)(a2+0x88); }
            ((XG_00b0f330*)f18)->sub_00a63310((unsigned)l,(unsigned)(l+4));
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char *e = (char*)f18;
        *(float*)&buf = b ? 1.0f : 0.0f;
        int *q = (int*)((ZG*)e)->sub_00716290();
        sub_00654890(*q,(int)(e+0x102),(int)&buf,0);
    }
    *(char*)&buf = 0;
    sub_00a5a150(a1,a2,a3,a4,(int)&buf,0);
}

struct XG_00b0f4d0 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); void sub_00a63310(unsigned,unsigned); };

struct P_00b0f4d0 { char pad[0x4c]; VG *vg; char pad2[0x28]; XG_00b0f4d0 x78; };

struct C_00b0f4d0 {
    int pad0; int f4; int f8; unsigned char fc; char padd[3]; int pad10; P_00b0f4d0 *f14; P_00b0f4d0 *f18; char pad1c[8]; int f24;
    void sub_00b0f4d0(int,int,int,int,R*);
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b0f4d0
void C_00b0f4d0::sub_00b0f4d0(int a1,int a2,int a3,int a4,R* a5)
{
    unsigned buf;
    f14->x78.sub_00abba30(a1,f8,(int)f14,a5->c);
    VG *vg = f14->vg;
    if (vg) vg->v4((int)f14,a3,a1);
    char *x = (!(fc & 8) && f18) ? (char*)f18+0x4c : 0;
    char *y = f14 ? (char*)f14+0x4c : 0;
    ((YG*)((char*)this+0x1c))->sub_00a7a030((int)y,(int)x,(int)f14,(int)f18,f4,f8,(int)a5);
    if (!(fc & 8)) {
        ((XG_00b0f4d0*)((char*)f18+0x84))->sub_00a3e1e0((int)f18,a3,a1,a4);
        if (f24 & 1) {
            int l[8];
            int t0=g_025d575c,t1=g_025d5760,t2=g_025d5764,t3=g_025d5768;
            l[0]=t0;l[1]=t1;l[2]=t2;l[3]=t3;l[4]=t0;l[5]=t1;l[6]=t2;l[7]=t3;
            if (a2) { l[0]=*(int*)(a2+0x7c); l[1]=*(int*)(a2+0x80); l[2]=*(int*)(a2+0x84); l[3]=*(int*)(a2+0x88); }
            ((XG_00b0f4d0*)f18)->sub_00a63310((unsigned)l,(unsigned)(l+4));
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char *e = (char*)f18;
        *(float*)&buf = b ? 1.0f : 0.0f;
        int *q = (int*)((ZG*)e)->sub_00716290();
        sub_00654890(*q,(int)(e+0x102),(int)&buf,0);
    }
    *(char*)&buf = 0;
    sub_00a5a150(a1,a2,a3,a4,(int)&buf,0);
}

typedef unsigned char BYTE;

struct Quat { int x, y, z, w; };

struct VObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int,int,int);
};

struct XG_00b0f670 {
    void sub_00abba30(int,int,int,int);
    void sub_00a3e1e0(int,int,int,int);
};

struct C_00b0f670 {
    char pad0[4];
    int f4;
    int f8;
    unsigned char fC;
    char pad1[7];
    int* f14;
    int* f18;
    char pad2[8];
    unsigned char f24;

    int* sub_00716290();
    void sub_00a63310(unsigned int, unsigned int);
    void sub_00a7a030(int,int,int,int,int,int,int);
    int sub_00a5a150(int,int,int,int,int,int);
    void sub_00b0f670(int,int,int,int,int*);
};

// @baa 0x00b0f670
void C_00b0f670::sub_00b0f670(int a1, int a2, int a3, int a4, int* a5)
{
    float f;
    Quat qa, qb;

    ((XG_00b0f670*)((char*)this->f14 + 0x78))->sub_00abba30(a1, this->f8, (int)this->f14, *(int*)((char*)a5 + 8));

    {
        VObj* vt = *(VObj**)((char*)this->f14 + 0x4c);
        if (vt)
            vt->v4((int)this->f14, a3, a1);
    }

    int i7 = (((this->fC & 8) == 0) && this->f18) ? ((int)this->f18 + 0x4c) : 0;
    int i6 = this->f14 ? ((int)this->f14 + 0x4c) : 0;
    ((C_00b0f670*)((char*)this + 0x1c))->sub_00a7a030(i6, i7, (int)this->f14, (int)this->f18, this->f4, this->f8, (int)a5);

    if ((this->fC & 8) == 0) {
        ((XG_00b0f670*)((char*)this->f18 + 0x84))->sub_00a3e1e0((int)this->f18, a3, a1, a4);

        if (this->f24 & 1) {
            Quat id;
            id.x = g_025d575c; id.y = g_025d5760; id.z = g_025d5764; id.w = g_025d5768;
            qa = id;
            qb = id;
            if (a2) {
                qa.x = *(int*)((char*)a2 + 0x7c);
                qa.y = *(int*)((char*)a2 + 0x80);
                qa.z = *(int*)((char*)a2 + 0x84);
                qa.w = *(int*)((char*)a2 + 0x88);
            }
            ((C_00b0f670*)this->f18)->sub_00a63310((unsigned int)&qa, (unsigned int)&qb);
        }

        int b;
        if (a2 != 0 && ((*(int*)((char*)a2 + 0x2c) & 0x200000) != 0))
            b = 1;
        else
            b = 0;
        int* p18 = this->f18;
        if (b)
            f = 1.0f;
        else
            f = 0.0f;
        int* r = ((C_00b0f670*)p18)->sub_00716290();
        sub_00654890(*r, (int)p18 + 0x102, (int)&f, 0);
    }

    *(BYTE*)&f = 0;
    this->sub_00a5a150(a1, a2, a3, a4, (int)&f, 0);
}

struct XG_00b0f810 { void sub_00abba30(int,int,int,int); void sub_00a3e1e0(int,int,int,int); void sub_00a63310(unsigned,unsigned); };

struct P_00b0f810 { char pad[0x4c]; VG *vg; char pad2[0x28]; XG_00b0f810 x78; };

struct C_00b0f810 {
    int pad0; int f4; int f8; unsigned char fc; char padd[3]; int pad10; P_00b0f810 *f14; P_00b0f810 *f18; char pad1c[8]; int f24;
    void sub_00b0f810(int,int,int,int,R*);
    int sub_00a5a150(int,int,int,int,int,int);
};

// @baa 0x00b0f810
void C_00b0f810::sub_00b0f810(int a1,int a2,int a3,int a4,R* a5)
{
    unsigned buf;
    f14->x78.sub_00abba30(a1,f8,(int)f14,a5->c);
    VG *vg = f14->vg;
    if (vg) vg->v4((int)f14,a3,a1);
    char *x = (!(fc & 8) && f18) ? (char*)f18+0x4c : 0;
    char *y = f14 ? (char*)f14+0x4c : 0;
    ((YG*)((char*)this+0x1c))->sub_00a7a030((int)y,(int)x,(int)f14,(int)f18,f4,f8,(int)a5);
    if (!(fc & 8)) {
        ((XG_00b0f810*)((char*)f18+0x84))->sub_00a3e1e0((int)f18,a3,a1,a4);
        if (f24 & 1) {
            int l[8];
            int t0=g_025d575c,t1=g_025d5760,t2=g_025d5764,t3=g_025d5768;
            l[0]=t0;l[1]=t1;l[2]=t2;l[3]=t3;l[4]=t0;l[5]=t1;l[6]=t2;l[7]=t3;
            if (a2) { l[0]=*(int*)(a2+0x7c); l[1]=*(int*)(a2+0x80); l[2]=*(int*)(a2+0x84); l[3]=*(int*)(a2+0x88); }
            ((XG_00b0f810*)f18)->sub_00a63310((unsigned)l,(unsigned)(l+4));
        }
        int b = (a2 && (*(unsigned*)(a2+0x2c) & 0x200000)) ? 1 : 0;
        char *e = (char*)f18;
        *(float*)&buf = b ? 1.0f : 0.0f;
        int *q = (int*)((ZG*)e)->sub_00716290();
        sub_00654890(*q,(int)(e+0x102),(int)&buf,0);
    }
    *(char*)&buf = 0;
    sub_00a5a150(a1,a2,a3,a4,(int)&buf,0);
}

struct C_00b0fb90 {
    undefined4 sub_00b0fb90(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_00a49bb0(...);
// @baa 0x00b0fb90
undefined4 C_00b0fb90::sub_00b0fb90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00b0fb90 *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0xb8);
  return uVar1;
}

struct A_00b0fbd0 { virtual void sub_00b12150(); char pad[16]; };

struct B_00b0fbd0 { virtual void sub_00b12150(); };

struct C_00b0fbd0 : A_00b0fbd0, B_00b0fbd0 { virtual void sub_00b12150(); C_00b0fbd0(); };

C_00b0fbd0::C_00b0fbd0() {}

// @baa 0x00b0fbd0
void C_00b0fbd0::sub_00b12150() {}

struct C_view {
    int sub_0073f030(int);
};

// @baa 0x00b0ffb0
undefined4 UMorphWeightSequence::sub_00b0ffb0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00a49bb0(param_2,param_1 + 0x4c);
  return uVar1;
}

struct A_00b0ffe0 { virtual void sub_00b12460(); char pad[16]; };

struct B_00b0ffe0 { virtual void sub_00b12460(); };

struct C_00b0ffe0 : A_00b0ffe0, B_00b0ffe0 { virtual void sub_00b12460(); C_00b0ffe0(); };

C_00b0ffe0::C_00b0ffe0() {}

// @baa 0x00b0ffe0
void C_00b0ffe0::sub_00b12460() {}
