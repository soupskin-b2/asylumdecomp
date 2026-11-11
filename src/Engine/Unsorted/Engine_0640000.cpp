// Engine_0640000.cpp (part 1 of 2): 199 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_0064a7d0(void); };

// @baa 0x0064a7d0
C* C::sub_0064a7d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0064a800 { C_0064a800* sub_0064a800(void); };

// @baa 0x0064a800
C_0064a800* C_0064a800::sub_0064a800(void) { *(int*)((char*)this + 0) = -1; return this; }

// @baa 0x0064a890
undefined4 sub_0064a890(undefined4 param_1, int param_2)
{
  return *(undefined4 *)(param_2 + 4);
}

extern char g_01ebb554[];
struct C_0064a8a0 { void sub_0064a8a0(void); };

// @baa 0x0064a8a0
void C_0064a8a0::sub_0064a8a0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0064a8b0 {
    undefined4 * sub_0064a8b0(byte);
};

int sub_0053dfa0(...);
// @baa 0x0064a8b0
undefined4 * C_0064a8b0::sub_0064a8b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0064a8d0 { C_0064a8d0* sub_0064a8d0(void); };

// @baa 0x0064a8d0
C_0064a8d0* C_0064a8d0::sub_0064a8d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; return this; }

struct C_0064a8e0 { C_0064a8e0* sub_0064a8e0(void); };

// @baa 0x0064a8e0
C_0064a8e0* C_0064a8e0::sub_0064a8e0(void) { *(int*)((char*)this + 0) = 0; return this; }

extern char g_01ebb560[];
struct C_0064a8f0 { void sub_0064a8f0(void); };

// @baa 0x0064a8f0
void C_0064a8f0::sub_0064a8f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb560; }

struct C_0064a900 {
    undefined4 * sub_0064a900(byte);
};

// @baa 0x0064a900
undefined4 * C_0064a900::sub_0064a900(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb560);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0064a970 {
    void sub_0064a970();
};

// @baa 0x0064a970
void C_0064a970::sub_0064a970(void)
{
    int param_1 = (int)this;

                    
                    
  (**(code **)(param_1 + 0x1c))();
  return;
}

struct C_0064a980 {
    uint sub_0064a980();
};

// @baa 0x0064a980
uint C_0064a980::sub_0064a980(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 1 & 1;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_0064a990();
};

// @baa 0x0064a990
S *S::sub_0064a990()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0064aa30 {
    void sub_0064aa30();
};

int sub_00702e60(void);
extern undefined * g_01ebb568;
// @baa 0x0064aa30
void C_0064aa30::sub_0064aa30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb568);
  sub_00702e60();
  return;
}

// @baa 0x0064aa40
void __stdcall sub_0064aa40(int a0) {  }

// @baa 0x0064aa50
int __stdcall sub_0064aa50(int a0) { return 0; }

struct C_0064aa60 {
    undefined4 * sub_0064aa60(byte);
};

// @baa 0x0064aa60
undefined4 * C_0064aa60::sub_0064aa60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb568);
  sub_00702e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0064aa90 {
    DWORD d;
    DWORD sub_0064aa90();
};

// @baa 0x0064aa90
DWORD C_0064aa90::sub_0064aa90()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_0064aaa0 {
    uint sub_0064aaa0();
};

// @baa 0x0064aaa0
uint C_0064aaa0::sub_0064aaa0(void)
{
    return *(WORD *)this;
}

struct C_0064aab0 {
    char pad[2];
    ushort field2;
    uint sub_0064aab0();
};

// @baa 0x0064aab0
uint C_0064aab0::sub_0064aab0()
{
    return field2;
}

struct C_0064aac0 {
    char _0[4];
    ushort f;
    uint sub_0064aac0();
};

// @baa 0x0064aac0
uint C_0064aac0::sub_0064aac0(void)
{
    return f;
}

struct C_0064aad0 {
    BYTE b0[2];
    WORD w;
    C_0064aad0 *sub_0064aad0();
};

// @baa 0x0064aad0
C_0064aad0 *C_0064aad0::sub_0064aad0()
{
    w = 0;
    return this;
}

struct C_0064aaf0 {
    unsigned int sub_0064aaf0();
};

// @baa 0x0064aaf0
unsigned int C_0064aaf0::sub_0064aaf0()
{
    return ((unsigned short *)this)[0];
}

struct C_0064ab00 {
    DWORD sub_0064ab00();
};

// @baa 0x0064ab00
DWORD C_0064ab00::sub_0064ab00(void)
{
    return *(WORD *)((char *)this + 2);
}

struct C_0064ab10 {
    int sub_0064ab10();
};

// @baa 0x0064ab10
int C_0064ab10::sub_0064ab10(void)
{
    return *(WORD *)(this + 4);
}

// @baa 0x0064abc0
void sub_0064abc0(void) {  }

struct C_0064abd0 { int sub_0064abd0(void); };

// @baa 0x0064abd0
int C_0064abd0::sub_0064abd0(void) { return *(int*)((char*)this + 68); }

struct C_0064abe0 { C_0064abe0* sub_0064abe0(void); };

// @baa 0x0064abe0
C_0064abe0* C_0064abe0::sub_0064abe0(void) { *(int*)((char*)this + 0) = (int)g_01ebb560; return this; }

struct C_0064abf0 { int sub_0064abf0(void); };

// @baa 0x0064abf0
int C_0064abf0::sub_0064abf0(void) { return *(int*)((char*)this + 8); }

struct C_0064ac00 {
    undefined4 * sub_0064ac00(undefined4);
    int sub_00739650(int);
};

extern undefined * g_01ebb690;
extern undefined * g_01ebb698;
// @baa 0x0064ac00
undefined4 * C_0064ac00::sub_0064ac00(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0064ac00 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01ebb698);
  param_1[5] = (undefined4)(&g_01ebb690);
  return param_1;
}

// @baa 0x0064ac20
void sub_0064ac20(void) {  }

// @baa 0x0064ac30
void sub_0064ac30(void) {  }

// @baa 0x0064ac40
int sub_0064ac40(void) { return 3; }

extern char g_01ebb6c0[];
struct C_0064ad20 { void sub_0064ad20(void); };

// @baa 0x0064ad20
void C_0064ad20::sub_0064ad20(void) { *(int*)((char*)this + 0) = (int)g_01ebb6c0; }

struct C_0064ad50 {
    void sub_0064ad50(undefined4 *);
};

// @baa 0x0064ad50
void C_0064ad50::sub_0064ad50(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_2[2];
  return;
}

struct C_0064ad70 {
    void sub_0064ad70(undefined4 *);
};

// @baa 0x0064ad70
void C_0064ad70::sub_0064ad70(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = param_2[1];
  return;
}

struct C_0064b180 {
    void sub_0064b180(undefined4 *);
};

// @baa 0x0064b180
void C_0064b180::sub_0064b180(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x88) = *param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_2[1];
  return;
}

struct C_0064b1a0 {
    undefined4 * sub_0064b1a0(byte);
};

// @baa 0x0064b1a0
undefined4 * C_0064b1a0::sub_0064b1a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb6c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0064b1e0
void sub_0064b1e0(uint * param_1, uint * param_2)
{
  *param_1 = *param_1 | *param_2;
  param_1[1] = param_1[1] | param_2[1];
  return;
}

struct C_0064b200 { int a, b; C_0064b200(int, int); };

// @baa 0x0064b200
C_0064b200::C_0064b200(int x, int y) : a(x), b(y) {}

int sub_00ce8f10(void);
int sub_00d18d80(...);
extern undefined4 g_026c564c;
// @baa 0x0064b220
int sub_0064b220(void)
{
  if (g_026c564c == 0) {
    g_026c564c = sub_00d18d80(L"Engine");
    sub_00ce8f10();
  }
  return g_026c564c;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x0064b250
void sub_0064b250(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c564c == 0) {
    g_026c564c = sub_00d18d80(L"Engine");
    sub_00ce8f10();
  }
  sub_005e1960(g_026c564c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_0064b2b0 { C_0064b2b0* sub_0064b2b0(void); };

// @baa 0x0064b2b0
C_0064b2b0* C_0064b2b0::sub_0064b2b0(void) { return this; }

struct C_0064b2c0 { C_0064b2c0* sub_0064b2c0(void); };

// @baa 0x0064b2c0
C_0064b2c0* C_0064b2c0::sub_0064b2c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0064b2d0 {
    void sub_0064b2d0();
};

int sub_00e9c890(void);
// @baa 0x0064b2d0
void C_0064b2d0::sub_0064b2d0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_00e9c890();
    return;
  }
  return;
}

struct C_0064b410 {
    uint sub_0064b410();
};

// @baa 0x0064b410
uint C_0064b410::sub_0064b410(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xdc) >> 0xe & 1;
}

struct C_0064b420 {
    undefined4 sub_0064b420();
};

// @baa 0x0064b420
undefined4 C_0064b420::sub_0064b420(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0xdc) & 1) != 0) && (*(int *)(param_1 + 8) != 0)) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0;
}

// @baa 0x0064b460
int __stdcall sub_0064b460(int a0) { return 0; }

struct C_0064b470 {
    uint sub_0064b470();
};

// @baa 0x0064b470
uint C_0064b470::sub_0064b470(void)
{
    uint * param_1 = (uint *)this;

  return (*param_1 >> 1 | *param_1) >> 3 & 1;
}

struct C_0064b480 {
    DWORD x;
    DWORD& sub_0064b480();
};

// @baa 0x0064b480
DWORD& C_0064b480::sub_0064b480()
{
    x &= 0xffffff80;
    return x;
}

extern char g_01ebb778[];
struct C_0064b490 { void sub_0064b490(void); };

// @baa 0x0064b490
void C_0064b490::sub_0064b490(void) { *(int*)((char*)this + 0) = (int)g_01ebb778; }

// @baa 0x0064b4a0
int sub_0064b4a0(void) { return 0; }

// @baa 0x0064b4b0
void __stdcall sub_0064b4b0(int a0, int a1) {  }

// @baa 0x0064b4c0
void __stdcall sub_0064b4c0(int a0) {  }

// @baa 0x0064b4d0
int sub_0064b4d0(void) { return 0; }

struct C_0064b4e0 {
    undefined4 * sub_0064b4e0(byte);
};

// @baa 0x0064b4e0
undefined4 * C_0064b4e0::sub_0064b4e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb778);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_01ebb7f8;
// @baa 0x0064b670
undefined4 * UObject::sub_0064b670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebb7f8);
  return param_1;
}

int sub_006accf0(void);
int sub_006d6380(...);
extern undefined4 g_026b0dd4;
// @baa 0x0064b690
int sub_0064b690(void)
{
  if (g_026b0dd4 == 0) {
    g_026b0dd4 = sub_006d6380(L"Engine");
    sub_006accf0();
  }
  return g_026b0dd4;
}

int sub_006dac50(void);
int sub_006fa4e0(...);
extern undefined4 g_026b12a8;
// @baa 0x0064b730
int sub_0064b730(void)
{
  if (g_026b12a8 == 0) {
    g_026b12a8 = sub_006fa4e0(L"Engine");
    sub_006dac50();
  }
  return g_026b12a8;
}

struct S_0064b760 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0064b760
void sub_0064b760(S_0064b760* p, INT Value)
{
    p->vf_18(Value);
}

struct C_0064b7b0 { int sub_0064b7b0(void); };

// @baa 0x0064b7b0
int C_0064b7b0::sub_0064b7b0(void) { return *(int*)((char*)this + 0); }

int sub_007566d0(void);
int sub_00779070(...);
extern undefined4 g_026b3b58;
// @baa 0x0064b7c0
int sub_0064b7c0(void)
{
  if (g_026b3b58 == 0) {
    g_026b3b58 = sub_00779070(L"Engine");
    sub_007566d0();
  }
  return g_026b3b58;
}

extern undefined * g_01ebb9c0;
// @baa 0x0064b880
undefined4 * UObject::sub_0064b880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebb9c0);
  return param_1;
}

int sub_007a4850(void);
int sub_007b0e80(...);
extern undefined4 g_026b5310;
// @baa 0x0064b8a0
int sub_0064b8a0(void)
{
  if (g_026b5310 == 0) {
    g_026b5310 = sub_007b0e80(L"Engine");
    sub_007a4850();
  }
  return g_026b5310;
}

// @baa 0x0064b8d0
IMPLEMENT_CLASS_AT(UDOFEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDOFEffect.cpp", 11);

// @baa 0x0064b930
extern undefined * g_01ebbad8;
// @baa 0x0064b960
undefined4 * UObject::sub_0064b960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebbad8);
  return param_1;
}

// @baa 0x0064b980
int sub_0064b980(int a0, int a1) { return a1; }

extern undefined * g_01ebbbf0;
// @baa 0x0064b990
undefined4 * UObject::sub_0064b990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebbbf0);
  return param_1;
}

// @baa 0x0064b9b0
IMPLEMENT_CLASS_AT(UDOFAndBloomEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DOFAndBloomEffect.cpp", 11);

// @baa 0x0064ba10
int sub_0077a570(...);
int sub_0077da30(void);
extern undefined4 g_026b3c00;
// @baa 0x0064ba40
int sub_0064ba40(void)
{
  if (g_026b3c00 == 0) {
    g_026b3c00 = sub_0077a570(L"Engine");
    sub_0077da30();
  }
  return g_026b3c00;
}

int sub_00779d30(...);
int sub_0077d100(void);
extern undefined4 g_026b3bd0;
// @baa 0x0064ba70
int sub_0064ba70(void)
{
  if (g_026b3bd0 == 0) {
    g_026b3bd0 = sub_00779d30(L"Engine");
    sub_0077d100();
  }
  return g_026b3bd0;
}

int sub_00835e90(void);
int sub_0085d040(...);
extern undefined4 g_026b55e8;
// @baa 0x0064baa0
int sub_0064baa0(void)
{
  if (g_026b55e8 == 0) {
    g_026b55e8 = sub_0085d040(L"Engine");
    sub_00835e90();
  }
  return g_026b55e8;
}

int sub_00836150(void);
int sub_00859330(...);
extern undefined4 g_026b55f0;
// @baa 0x0064bad0
int sub_0064bad0(void)
{
  if (g_026b55f0 == 0) {
    g_026b55f0 = sub_00859330(L"Engine");
    sub_00836150();
  }
  return g_026b55f0;
}

// @baa 0x0064bb00
int sub_0064bb00(int a0, int a1) { return a1; }

// @baa 0x0064bb10
int sub_0064bb10(int a0, int a1) { return a1; }

// @baa 0x0064bb20
int sub_0064bb20(int a0, int a1) { return a1; }

// @baa 0x0064bb30
IMPLEMENT_CLASS_AT(USurface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Surface.cpp", 8);

// @baa 0x0064bb90
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x0064bbb0
int sub_0064bbb0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  return g_026b0de0;
}

// @baa 0x0064bbe0
void USurface::sub_0064bbe0(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

int sub_00804730(void);
int sub_00830fb0(...);
extern undefined4 g_026b5488;
// @baa 0x0064bc80
int sub_0064bc80(void)
{
  if (g_026b5488 == 0) {
    g_026b5488 = sub_00830fb0(L"Engine");
    sub_00804730();
  }
  return g_026b5488;
}

// @baa 0x0064bcb0
void sub_0064bcb0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b5488 == 0) {
    g_026b5488 = sub_00830fb0(L"Engine");
    sub_00804730();
  }
  sub_005e1960(g_026b5488,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00804e70(void);
int sub_00825770(...);
extern undefined4 g_026b548c;
// @baa 0x0064bd10
int sub_0064bd10(void)
{
  if (g_026b548c == 0) {
    g_026b548c = sub_00825770(L"Engine");
    sub_00804e70();
  }
  return g_026b548c;
}

int sub_007f5440(void);
int sub_007f9820(...);
extern undefined4 g_026b53d0;
// @baa 0x0064bd40
int sub_0064bd40(void)
{
  if (g_026b53d0 == 0) {
    g_026b53d0 = sub_007f9820(L"Engine");
    sub_007f5440();
  }
  return g_026b53d0;
}

int sub_006dadc0(...);
int sub_006fef60(void);
extern undefined4 g_026b12b0;
// @baa 0x0064bdb0
int sub_0064bdb0(void)
{
  if (g_026b12b0 == 0) {
    g_026b12b0 = sub_006dadc0(L"Engine");
    sub_006fef60();
  }
  return g_026b12b0;
}

extern char g_01ebbe1c[];
// @baa 0x0064bde0
void USurface::sub_0064bde0(void) { *(int*)((char*)this + 0) = (int)g_01ebbe1c; }

// @baa 0x0064bdf0
int __stdcall sub_0064bdf0(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x0064be00
int sub_0064be00(void) { return 0; }

// @baa 0x0064be10
int sub_0064be10(void) { return 0; }

// @baa 0x0064be20
int __stdcall sub_0064be20(int a0) { return 0; }

// @baa 0x0064be30
int __stdcall sub_0064be30(int a0) { return 0; }

// @baa 0x0064be40
undefined4 * USurface::sub_0064be40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebbe1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0064be60
IMPLEMENT_CLASS_AT(AFileWriter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AFileLog.cpp", 12);

// @baa 0x0064bf70
int AFileWriter::vf_000(void) { return 1; }

// @baa 0x0064bf80
bool AFileWriter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0064bfc0
int AFileLog::vf_000(void) { return 1; }

// @baa 0x0064bfd0
int __stdcall sub_0064bfd0(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x0064bfe0
void sub_0064bfe0(void) {  }

// @baa 0x0064bff0
void __stdcall sub_0064bff0(int a0) {  }

// @baa 0x0064c080
float10 sub_0064c080(float param_1)
{
  return (float10)param_1;
}

int sub_0053de70(...);
// @baa 0x0064ca80
undefined4 sub_0064ca80(int * param_1, int * param_2)
{
  int iVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    iVar1 = sub_0053de70(param_1 + 3,param_2 + 3,0x10);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

struct C_0064cb20 { char* sub_0064cb20(void); };

// @baa 0x0064cb20
char* C_0064cb20::sub_0064cb20(void) { return (char*)this + 92; }

struct C_0064cb30 { char* sub_0064cb30(void); };

// @baa 0x0064cb30
char* C_0064cb30::sub_0064cb30(void) { return (char*)this + 116; }

struct C_0064cb40 { char* sub_0064cb40(void); };

// @baa 0x0064cb40
char* C_0064cb40::sub_0064cb40(void) { return (char*)this + 212; }

struct C_0064cb50 { int sub_0064cb50(void); };

// @baa 0x0064cb50
int C_0064cb50::sub_0064cb50(void) { return *(int*)((char*)this + 28); }

struct C_0064cb60 { int sub_0064cb60(void); };

// @baa 0x0064cb60
int C_0064cb60::sub_0064cb60(void) { return *(int*)((char*)this + 32); }

struct C_0064cb70 { int sub_0064cb70(void); };

// @baa 0x0064cb70
int C_0064cb70::sub_0064cb70(void) { return *(int*)((char*)this + 40); }

struct C_0064cb80 { int sub_0064cb80(void); };

// @baa 0x0064cb80
int C_0064cb80::sub_0064cb80(void) { return *(int*)((char*)this + 44); }

struct C_0064cb90 { int sub_0064cb90(void); };

// @baa 0x0064cb90
int C_0064cb90::sub_0064cb90(void) { return *(int*)((char*)this + 48); }

// @baa 0x0064cba0
void sub_0064cba0(void) {  }

struct C_0064cbb0 {
    uint sub_0064cbb0();
};

// @baa 0x0064cbb0
uint C_0064cbb0::sub_0064cbb0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) & 1;
}

struct C_0064cbc0 {
    uint sub_0064cbc0();
};

// @baa 0x0064cbc0
uint C_0064cbc0::sub_0064cbc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc) >> 1 & 1;
}

// @baa 0x0064cbf0
bool sub_0064cbf0(int param_1)
{
  return param_1 != 2;
}

// @baa 0x0064cc00
int sub_0064cc00(void) { return 1; }

// @baa 0x0064cc10
undefined4 sub_0064cc10(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cc30
bool sub_0064cc30(int param_1)
{
  return param_1 == 0;
}

// @baa 0x0064cc40
bool sub_0064cc40(int param_1)
{
  return param_1 != 3;
}

struct C_0064cc50 {
    undefined4 * sub_0064cc50(undefined4);
    int sub_00739650(int);
};

extern undefined * g_01ebc108;
extern undefined * g_01ebc110;
// @baa 0x0064cc50
undefined4 * C_0064cc50::sub_0064cc50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0064cc50 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01ebc110);
  param_1[5] = (undefined4)(&g_01ebc108);
  return param_1;
}

// @baa 0x0064cc70
void __stdcall sub_0064cc70(int a0, int a1) {  }

struct C_0064cca0 { C_0064cca0* sub_0064cca0(void); };

// @baa 0x0064cca0
C_0064cca0* C_0064cca0::sub_0064cca0(void) { return this; }

// @baa 0x0064ccb0
void sub_0064ccb0(void) {  }

struct C_0064ccc0 {
    undefined4 * sub_0064ccc0(undefined4);
    int sub_00739650(int);
};

extern undefined * g_01ebc13c;
extern undefined * g_01ebc144;
// @baa 0x0064ccc0
undefined4 * C_0064ccc0::sub_0064ccc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0064ccc0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01ebc144);
  param_1[5] = (undefined4)(&g_01ebc13c);
  return param_1;
}

// @baa 0x0064cce0
int sub_0064cce0(void) { return 4; }

// @baa 0x0064ccf0
void __stdcall sub_0064ccf0(int a0, int a1) {  }

// @baa 0x0064cd10
undefined4 sub_0064cd10(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cd30
undefined4 sub_0064cd30(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cd50
bool sub_0064cd50(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0064cd60
undefined4 sub_0064cd60(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cd80
undefined4 sub_0064cd80(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cda0
bool sub_0064cda0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0064cdb0
undefined4 sub_0064cdb0(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cdd0
undefined4 sub_0064cdd0(int param_1)
{
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x0064cdf0
bool sub_0064cdf0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0064ce00
int sub_0064ce00(void) { return 1; }

struct C_view {
    int sub_0073f030(int);
};

int sub_00716170(...);
// @baa 0x0064ce90
undefined4 UMorphWeightSequence::sub_0064ce90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

void sub_007249d0();
// @baa 0x0064cec0
void sub_0064cec0(void) { sub_007249d0(); }

// @baa 0x0064ced0
int sub_0064ced0(void) { return 1; }

struct C_0064cf80 {
    undefined4 sub_0064cf80(undefined4);
    int sub_0073f030(int);
};

int sub_007161b0(...);
// @baa 0x0064cf80
undefined4 C_0064cf80::sub_0064cf80(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_0064cf80 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  return uVar1;
}

// @baa 0x0064cfc0
void sub_0064cfc0(void) { sub_007249d0(); }

struct C_0064d010 {
    char pad[12];
    int f1;
    int f2;
    C_0064d010* sub_0064d010();
};

// @baa 0x0064d010
C_0064d010* C_0064d010::sub_0064d010()
{
    f1 = 0;
    f2 = 0;
    return this;
}

struct C_0064d020 { int sub_0064d020(void); };

// @baa 0x0064d020
int C_0064d020::sub_0064d020(void) { return *(int*)((char*)this + 4); }

struct C_0064d030 { C_0064d030* sub_0064d030(void); };

// @baa 0x0064d030
C_0064d030* C_0064d030::sub_0064d030(void) { *(int*)((char*)this + 0) = (int)g_01ebb778; return this; }

struct C_0064d1c0 {
    void sub_0064d1c0(undefined4 *);
};

// @baa 0x0064d1c0
void C_0064d1c0::sub_0064d1c0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = param_2[2];
  return;
}

struct V_0064d2f0 {
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
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void g(int a0);
};

struct O_0064d2f0 { char pad[4]; V_0064d2f0* p; void sub_0064d2f0(int a0); };

// @baa 0x0064d2f0
void O_0064d2f0::sub_0064d2f0(int a0) { p->g(a0); }

struct B {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
};

struct C_0064d300 {
    int pad;
    B* p;
    void sub_0064d300();
};

// @baa 0x0064d300
void C_0064d300::sub_0064d300() {
    p->f23();
}

struct Target {
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
};

struct S_0064d310 {
    char pad0[4];
    Target *p4;
    void sub_0064d310();
};

// @baa 0x0064d310
void S_0064d310::sub_0064d310()
{
    p4->f24();
}

struct Inner {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void target(); // vtable slot 25, offset 0x64
};

struct Outer {
    undefined4 f0;      // offset 0
    Inner* p;           // offset 4
    void sub_0064d320();
};

// @baa 0x0064d320
void Outer::sub_0064d320()
{
    p->target();
}

// @baa 0x0064d850
int sub_0064d850(int a0, int a1) { return a1; }

// @baa 0x0064d9a0
IMPLEMENT_CLASS_AT(UCoverMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\CoverMeshComponent.cpp", 10);

// @baa 0x0064dab0
int UCoverMeshComponent::vf_000(void) { return 1; }

// @baa 0x0064dac0
bool UCoverMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0064db40
int UCoverMeshComponent::vf_200(void) { return 1; }

// @baa 0x0064db50
int sub_0064db50(int a0, int a1) { return a1; }

// @baa 0x0064db60
int sub_0064db60(int a0, int a1) { return a1; }

// @baa 0x0064db70
int sub_0064db70(int a0, int a1) { return a1; }

struct C_0064db80 { C_0064db80* sub_0064db80(int a0); };

// @baa 0x0064db80
C_0064db80* C_0064db80::sub_0064db80(int a0) { return this; }

// @baa 0x0064dbd0
int sub_0064dbd0(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x0064dbe0
int sub_0064dbe0(void) { return (int)g_01ebc268; }

struct C_0064dbf0 { C_0064dbf0* sub_0064dbf0(void); };

// @baa 0x0064dbf0
C_0064dbf0* C_0064dbf0::sub_0064dbf0(void) { return this; }

// @baa 0x0064dc00
int sub_0064dc00(int a0, int a1) { return a1; }

// @baa 0x0064dc10
int sub_0064dc10(int a0, int a1) { return a1; }

// @baa 0x0064dc20
IMPLEMENT_CLASS_AT(ADecalActorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalActor.cpp", 8);

// @baa 0x0064dd30
int ADecalActorBase::vf_000(void) { return 1; }

// @baa 0x0064dd40
bool ADecalActorBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0064dd80
int ADecalActor::vf_000(void) { return 1; }

// @baa 0x0064dd90
int ADecalActorMovable::vf_000(void) { return 1; }

// @baa 0x0064dda0
void ADecalActorBase::vf_09c(void) {  }

int sub_009822a0(void);
int sub_0099b3c0(...);
extern undefined4 g_026b6014;
// @baa 0x0064de00
int sub_0064de00(void)
{
  if (g_026b6014 == 0) {
    g_026b6014 = sub_0099b3c0(L"Engine");
    sub_009822a0();
  }
  return g_026b6014;
}

struct C_0064e8c0 { C_0064e8c0* sub_0064e8c0(void); };

// @baa 0x0064e8c0
C_0064e8c0* C_0064e8c0::sub_0064e8c0(void) { return this; }

// @baa 0x0064e8d0
IMPLEMENT_CLASS_AT(ADecalManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalManager.cpp", 8);

// @baa 0x0064ea00
bool ADecalManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026c0b4c;
// @baa 0x0064ea40
undefined4 sub_0064ea40(void)
{
  return g_026c0b4c;
}

// @baa 0x0064ea50
IMPLEMENT_CLASS_AT(UDecalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalRenderData.cpp", 11);

// @baa 0x0064eb60
int UDecalMaterial::vf_000(void) { return 1; }

// @baa 0x0064eb70
bool UDecalMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0064f0b0
void sub_0064f0b0(void) {  }

extern char g_01eb5cf4[];
// @baa 0x0064f1a0
int sub_0064f1a0(void) { return (int)g_01eb5cf4; }

extern int g_01ebc28c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_0064f1b0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x0064f1b0
FDecalValue* FDecalValue::sub_0064f1b0(int* Src)
{
    Value = (int)&g_01ebc28c;
    Unk04 = *Src;
    return this;
}

extern char g_01eb5d18[];
// @baa 0x0064f1d0
int sub_0064f1d0(void) { return (int)g_01eb5d18; }

struct C_0064f1e0 { void sub_0064f1e0(void); };

// @baa 0x0064f1e0
void C_0064f1e0::sub_0064f1e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0064f1f0 { void sub_0064f1f0(void); };

// @baa 0x0064f1f0
void C_0064f1f0::sub_0064f1f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0064f200 {
    undefined4 * sub_0064f200(byte);
};

// @baa 0x0064f200
undefined4 * C_0064f200::sub_0064f200(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0064f220 {
    undefined4 * sub_0064f220(byte);
};

// @baa 0x0064f220
undefined4 * C_0064f220::sub_0064f220(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0064f240 {
    int sub_006d6c40(int);
};

extern undefined * g_01ebc298;
// @baa 0x0064f240
undefined4 * UMaterial::sub_0064f240(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0064f240 *)(this))->sub_006d6c40(param_2);
  *param_1 = (undefined4)(&g_01ebc298);
  return param_1;
}

// @baa 0x0064f260
int sub_0064f260(void) { return 1; }

// @baa 0x0064f270
int sub_0064f270(void) { return 1; }

// @baa 0x0064f280
int __stdcall sub_0064f280(int a0, int a1, int a2) { return 1; }

struct C_0064f590 {
    void sub_0064f590();
};

// @baa 0x0064f590
void C_0064f590::sub_0064f590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb568);
  sub_00702e60();
  return;
}

struct C_view_0064f650 {
    int sub_006bbaa0(int);
};

// @baa 0x0064f650
void UDecalMaterial::Serialize(FArchive& Ar) {
    UINT param_2 = (UINT)&Ar;
    int param_1 = (int)this;
  ((C_view_0064f650 *)(this))->sub_006bbaa0(param_2);
  if ((*(int *)(param_2 + 4) < 0x21e) || (*(int *)(param_2 + 0xc) < 0)) {
    if (*(int *)(param_1 + 0x214) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x214) + 0xac) = 0;
    }
    if (*(int *)(param_1 + 0x218) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x218) + 0xac) = 0;
    }
  }
  return;
}

struct C_0064fd80 {
    undefined4 sub_0064fd80(byte);
};

int sub_00ad3010(void);
// @baa 0x0064fd80
undefined4 C_0064fd80::sub_0064fd80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ad3010();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0064fda0
void __stdcall sub_0064fda0(int a0) {  }

extern char g_01ebc33c[];
struct C_0064fdb0 { C_0064fdb0* sub_0064fdb0(void); };

// @baa 0x0064fdb0
C_0064fdb0* C_0064fdb0::sub_0064fdb0(void) { *(int*)((char*)this + 0) = (int)g_01ebc33c; return this; }

// @baa 0x0064fdc0
void __stdcall sub_0064fdc0(int a0) {  }

// @baa 0x0064fdd0
int sub_0064fdd0(void) { return 1; }

// @baa 0x0064fde0
void sub_0064fde0(void) {  }

// @baa 0x0064fec0
IMPLEMENT_CLASS_AT(UDirectionalLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DirectionalLightComponent.cpp", 10);

// @baa 0x0064ffd0
int UDirectionalLightComponent::vf_000(void) { return 1; }

// @baa 0x0064ffe0
bool UDirectionalLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
