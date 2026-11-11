// ApexRender.cpp (part 1 of 2): 128 functions
// Placed here by: neighbours 126, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x009d5500
undefined1 sub_009d5500(void)
{
  return 1;
}

// @baa 0x009d5510
undefined1 sub_009d5510(void)
{
  return 1;
}

extern char g_01fa3eb4[];
struct C { void sub_009d5520(void); };

// @baa 0x009d5520
void C::sub_009d5520(void) { *(int*)((char*)this + 0) = (int)g_01fa3eb4; }

struct C_009d5530 {
    undefined4 * sub_009d5530(byte);
};

int sub_0053dfa0(...);
// @baa 0x009d5530
undefined4 * C_009d5530::sub_009d5530(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3eb4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fa3ee0[];
struct C_009d5550 { void sub_009d5550(void); };

// @baa 0x009d5550
void C_009d5550::sub_009d5550(void) { *(int*)((char*)this + 0) = (int)g_01fa3ee0; }

struct C_009d5560 {
    undefined4 * sub_009d5560(byte);
};

// @baa 0x009d5560
undefined4 * C_009d5560::sub_009d5560(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3ee0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fa3eec[];
struct C_009d5580 { void sub_009d5580(void); };

// @baa 0x009d5580
void C_009d5580::sub_009d5580(void) { *(int*)((char*)this + 0) = (int)g_01fa3eec; }

struct C_009d5590 {
    undefined4 * sub_009d5590(byte);
};

// @baa 0x009d5590
undefined4 * C_009d5590::sub_009d5590(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3eec);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fa3ef4[];
struct C_009d55b0 { void sub_009d55b0(void); };

// @baa 0x009d55b0
void C_009d55b0::sub_009d55b0(void) { *(int*)((char*)this + 0) = (int)g_01fa3ef4; }

struct C_009d55c0 {
    undefined4 * sub_009d55c0(byte);
};

// @baa 0x009d55c0
undefined4 * C_009d55c0::sub_009d55c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3ef4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fa3efc[];
struct C_009d55e0 { void sub_009d55e0(void); };

// @baa 0x009d55e0
void C_009d55e0::sub_009d55e0(void) { *(int*)((char*)this + 0) = (int)g_01fa3efc; }

struct C_009d55f0 {
    undefined4 * sub_009d55f0(byte);
};

// @baa 0x009d55f0
undefined4 * C_009d55f0::sub_009d55f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3efc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009d56d0 { void sub_009d56d0(void); };

// @baa 0x009d56d0
void C_009d56d0::sub_009d56d0(void) { *(int*)((char*)this + 0) = 0; }

struct C_009d56e0 {
    uint sub_009d56e0();
};

// @baa 0x009d56e0
uint C_009d56e0::sub_009d56e0(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 & 1;
}

struct C_009d56f0 {
    uint sub_009d56f0();
};

// @baa 0x009d56f0
uint C_009d56f0::sub_009d56f0(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 1 & 1;
}

struct C_009d5700 {
    uint sub_009d5700();
};

// @baa 0x009d5700
uint C_009d5700::sub_009d5700(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 2 & 1;
}

struct C_009d5710 {
    uint sub_009d5710();
};

// @baa 0x009d5710
uint C_009d5710::sub_009d5710(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 3 & 1;
}

typedef uint size_t;

struct C_009d5950 {
    void sub_009d5950(void *, size_t);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x009d5950
void C_009d5950::sub_009d5950(void * param_2, size_t param_3)
{
    int param_1 = (int)this;

  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(int *)(param_1 + 0xc) + param_3;
    if (uVar1 <= *(uint *)(param_1 + 8)) {
      sub_01a375f0(param_2,(void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)),param_3);
      *(uint *)(param_1 + 0xc) = uVar1;
    }
  }
  return;
}

struct C_009d5990 { C_009d5990* sub_009d5990(int a0); };

// @baa 0x009d5990
C_009d5990* C_009d5990::sub_009d5990(int a0) { return this; }

struct C_009d59a0 { C_009d59a0* sub_009d59a0(int a0); };

// @baa 0x009d59a0
C_009d59a0* C_009d59a0::sub_009d59a0(int a0) { return this; }

struct C_009d59b0 { C_009d59b0* sub_009d59b0(int a0); };

// @baa 0x009d59b0
C_009d59b0* C_009d59b0::sub_009d59b0(int a0) { return this; }

struct C_009d59c0 { C_009d59c0* sub_009d59c0(int a0); };

// @baa 0x009d59c0
C_009d59c0* C_009d59c0::sub_009d59c0(int a0) { return this; }

struct C_009d59d0 { C_009d59d0* sub_009d59d0(int a0, int a1); };

// @baa 0x009d59d0
C_009d59d0* C_009d59d0::sub_009d59d0(int a0, int a1) { return this; }

struct C_009d59e0 { C_009d59e0* sub_009d59e0(int a0, int a1); };

// @baa 0x009d59e0
C_009d59e0* C_009d59e0::sub_009d59e0(int a0, int a1) { return this; }

extern char g_01fa3e7c[];
struct C_009d59f0 { void sub_009d59f0(void); };

// @baa 0x009d59f0
void C_009d59f0::sub_009d59f0(void) { *(int*)((char*)this + 0) = (int)g_01fa3e7c; }

// @baa 0x009d5a20
uint sub_009d5a20(uint param_1, uint param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// @baa 0x009d5a30
undefined1 sub_009d5a30(void)
{
  return 0;
}

// @baa 0x009d5a40
undefined2 sub_009d5a40(void)
{
  return 0;
}

// @baa 0x009d5a50
int sub_009d5a50(void) { return 0; }

// @baa 0x009d5a60
float10 sub_009d5a60(void)
{
  return (float10)0;
}

// @baa 0x009d5a70
float10 sub_009d5a70(void)
{
  return (float10)0;
}

// @baa 0x009d5a80
void __stdcall sub_009d5a80(int a0, int a1) {  }

struct C_009d5a90 { void sub_009d5a90(void); };

// @baa 0x009d5a90
void C_009d5a90::sub_009d5a90(void) { *(int*)((char*)this + 0) = (int)g_01fa3e7c; }

struct C_009d5af0 {
    void sub_009d5af0();
};

int sub_006efb40(void);
extern undefined * g_01fa3f70;
// @baa 0x009d5af0
void C_009d5af0::sub_009d5af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  return;
}

// @baa 0x009d5b00
int sub_009d5b00(void) { return 1690; }

// @baa 0x009d5b10
undefined4 * ULensFlare::sub_009d5b10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009d5b40
int sub_009d5b40(void) { return 0; }

struct C_009d5d80 { char* sub_009d5d80(void); };

// @baa 0x009d5d80
char* C_009d5d80::sub_009d5d80(void) { return (char*)this + 4; }

struct C_009d5d90 { char* sub_009d5d90(void); };

// @baa 0x009d5d90
char* C_009d5d90::sub_009d5d90(void) { return (char*)this + 40; }

struct C_009d5da0 { int sub_009d5da0(void); };

// @baa 0x009d5da0
int C_009d5da0::sub_009d5da0(void) { return *(int*)((char*)this + 36); }

struct C_009d5db0 { C_009d5db0* sub_009d5db0(void); };

// @baa 0x009d5db0
C_009d5db0* C_009d5db0::sub_009d5db0(void) { *(int*)((char*)this + 0) = (int)g_01fa3ee0; return this; }

// @baa 0x009d5dc0
int sub_009d5dc0(void) { return 0; }

struct C_009d5e10 { C_009d5e10* sub_009d5e10(void); };

// @baa 0x009d5e10
C_009d5e10* C_009d5e10::sub_009d5e10(void) { *(int*)((char*)this + 0) = (int)g_01fa3ef4; return this; }

struct C_009d5e20 { C_009d5e20* sub_009d5e20(void); };

// @baa 0x009d5e20
C_009d5e20* C_009d5e20::sub_009d5e20(void) { *(int*)((char*)this + 0) = (int)g_01fa3efc; return this; }

// @baa 0x009d5e70
int sub_009d5e70(void) { return 0; }

struct C_009d5fe0 { void sub_009d5fe0(int a0); };

// @baa 0x009d5fe0
void C_009d5fe0::sub_009d5fe0(int a0) { *(int*)((char*)this + 460) = a0; }

struct C_009d5ff0 { void sub_009d5ff0(int a0); };

// @baa 0x009d5ff0
void C_009d5ff0::sub_009d5ff0(int a0) { *(int*)((char*)this + 464) = a0; }

// @baa 0x009d6000
int sub_009d6000(void) { return 1; }

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x009d6130
undefined4 sub_009d6130(int param_1)
{
  if (param_1 != 1) {
    sub_006311e0("Primitive == NxRenderPrimitiveType::TRIANGLES",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexRender.cpp"
                 ,0x37b,&g_01e3f3dc);
  }
  return 0;
}

struct C_009d6160 {
    void sub_009d6160(undefined4, undefined4);
};

// @baa 0x009d6160
void C_009d6160::sub_009d6160(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1cc) = param_3;
  }
  return;
}

struct C_009d6180 {
    void sub_009d6180(undefined4, undefined4);
};

// @baa 0x009d6180
void C_009d6180::sub_009d6180(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

struct C_009d61a0 {
    void sub_009d61a0(undefined4, undefined4);
};

// @baa 0x009d61a0
void C_009d61a0::sub_009d61a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}

struct C_009d61c0 {
    void sub_009d61c0(undefined4, undefined4);
};

// @baa 0x009d61c0
void C_009d61c0::sub_009d61c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1d0) = param_3;
  }
  return;
}

struct C_009d61e0 { void sub_009d61e0(int a0); };

// @baa 0x009d61e0
void C_009d61e0::sub_009d61e0(int a0) { *(int*)((char*)this + 60) = a0; }

struct C_009d61f0 { C_009d61f0* sub_009d61f0(void); };

// @baa 0x009d61f0
C_009d61f0* C_009d61f0::sub_009d61f0(void) { *(int*)((char*)this + 0) = (int)g_01fa3eb4; return this; }

extern char g_01fa4098[];
struct C_009d6200 { C_009d6200* sub_009d6200(void); };

// @baa 0x009d6200
C_009d6200* C_009d6200::sub_009d6200(void) { *(int*)((char*)this + 0) = (int)g_01fa4098; return this; }

struct C_009d6270 {
    void sub_009d6270(undefined4);
};

int sub_00716170(...);
// @baa 0x009d6270
void C_009d6270::sub_009d6270(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  return;
}

// @baa 0x009d62a0
void __stdcall sub_009d62a0(int a0, int a1, int a2) {  }

extern char g_01ecdfc8[];
struct C_009d62b0 { void sub_009d62b0(void); };

// @baa 0x009d62b0
void C_009d62b0::sub_009d62b0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_009d62f0 { int sub_009d62f0(void); };

// @baa 0x009d62f0
int C_009d62f0::sub_009d62f0(void) { return *(int*)((char*)this + 4); }

struct C_009d6300 { int sub_009d6300(void); };

// @baa 0x009d6300
int C_009d6300::sub_009d6300(void) { return *(int*)((char*)this + 8); }

struct C_009d6310 { int sub_009d6310(void); };

// @baa 0x009d6310
int C_009d6310::sub_009d6310(void) { return *(int*)((char*)this + 448); }

struct C_009d6320 { int sub_009d6320(void); };

// @baa 0x009d6320
int C_009d6320::sub_009d6320(void) { return *(int*)((char*)this + 36); }

struct C_009d6330 { int sub_009d6330(void); };

// @baa 0x009d6330
int C_009d6330::sub_009d6330(void) { return *(int*)((char*)this + 40); }

struct C_009d6450 { void sub_009d6450(void); };

// @baa 0x009d6450
void C_009d6450::sub_009d6450(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

int sub_0053df40(...);
extern undefined * g_01fa40f4;
// @baa 0x009d6460
undefined4 * sub_009d6460(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x28,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *puVar1 = (undefined4)(&g_01fa40f4);
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined2 *)((int)puVar1 + 0x22) = 0;
    puVar1[9] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern char g_01fa4138[];
struct C_009d64a0 { C_009d64a0* sub_009d64a0(void); };

// @baa 0x009d64a0
C_009d64a0* C_009d64a0::sub_009d64a0(void) { *(int*)((char*)this + 0) = (int)g_01fa4138; return this; }

struct C_009d64e0 { char* sub_009d64e0(void); };

// @baa 0x009d64e0
char* C_009d64e0::sub_009d64e0(void) { return (char*)this + 4; }

struct C_009d64f0 {
    uint sub_009d64f0();
};

// @baa 0x009d64f0
uint C_009d64f0::sub_009d64f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) / 3;
}

extern int g_01fa4140;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_009d6500(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009d6500
FDecalValue* FDecalValue::sub_009d6500(int* Src)
{
    Value = (int)&g_01fa4140;
    Unk04 = *Src;
    return this;
}

extern char g_01f9b99c[];
// @baa 0x009d6540
int sub_009d6540(void) { return (int)g_01f9b99c; }

extern char g_01ebb554[];
struct C_009d6550 { void sub_009d6550(void); };

// @baa 0x009d6550
void C_009d6550::sub_009d6550(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009d6560 {
    undefined4 * sub_009d6560(byte);
};

// @baa 0x009d6560
undefined4 * C_009d6560::sub_009d6560(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fa414c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_009d6580
{
    FDecalValue_009d6580* sub_009d6580(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009d6580
FDecalValue_009d6580* FDecalValue_009d6580::sub_009d6580(int* Src)
{
    Value = (int)&g_01fa414c;
    Unk04 = *Src;
    return this;
}

extern char g_01f9bbdc[];
// @baa 0x009d65c0
int sub_009d65c0(void) { return (int)g_01f9bbdc; }

struct C_009d65d0 { void sub_009d65d0(void); };

// @baa 0x009d65d0
void C_009d65d0::sub_009d65d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009d65e0 {
    undefined4 * sub_009d65e0(byte);
};

// @baa 0x009d65e0
undefined4 * C_009d65e0::sub_009d65e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fa4158;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_009d6600
{
    FDecalValue_009d6600* sub_009d6600(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009d6600
FDecalValue_009d6600* FDecalValue_009d6600::sub_009d6600(int* Src)
{
    Value = (int)&g_01fa4158;
    Unk04 = *Src;
    return this;
}

extern char g_01f9bddc[];
// @baa 0x009d6640
int sub_009d6640(void) { return (int)g_01f9bddc; }

struct C_009d6650 { void sub_009d6650(void); };

// @baa 0x009d6650
void C_009d6650::sub_009d6650(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009d6660 {
    undefined4 * sub_009d6660(byte);
};

// @baa 0x009d6660
undefined4 * C_009d6660::sub_009d6660(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fa4164;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_009d6680
{
    FDecalValue_009d6680* sub_009d6680(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009d6680
FDecalValue_009d6680* FDecalValue_009d6680::sub_009d6680(int* Src)
{
    Value = (int)&g_01fa4164;
    Unk04 = *Src;
    return this;
}

extern char g_01f9c01c[];
// @baa 0x009d66c0
int sub_009d66c0(void) { return (int)g_01f9c01c; }

struct C_009d66d0 { void sub_009d66d0(void); };

// @baa 0x009d66d0
void C_009d66d0::sub_009d66d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009d66e0 {
    undefined4 * sub_009d66e0(byte);
};

// @baa 0x009d66e0
undefined4 * C_009d66e0::sub_009d66e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fa4170;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_009d6700
{
    FDecalValue_009d6700* sub_009d6700(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009d6700
FDecalValue_009d6700* FDecalValue_009d6700::sub_009d6700(int* Src)
{
    Value = (int)&g_01fa4170;
    Unk04 = *Src;
    return this;
}

extern char g_01f9c2ac[];
// @baa 0x009d6740
int sub_009d6740(void) { return (int)g_01f9c2ac; }

struct C_009d6750 { void sub_009d6750(void); };

// @baa 0x009d6750
void C_009d6750::sub_009d6750(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009d6760 {
    undefined4 * sub_009d6760(byte);
};

// @baa 0x009d6760
undefined4 * C_009d6760::sub_009d6760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009d6780
int __stdcall sub_009d6780(int a0) { return 75; }

// @baa 0x009d6920
void __stdcall sub_009d6920(int a0) {  }

// @baa 0x009d6b60
void __stdcall sub_009d6b60(int a0) {  }

// @baa 0x009d6c40
void __stdcall sub_009d6c40(int a0) {  }

// @baa 0x009d6c50
void __stdcall sub_009d6c50(int a0, int a1, int a2, int a3) {  }

struct C_view {
    int sub_009d6790(int);
};

extern undefined * g_01fa4180;
// @baa 0x009d6d40
undefined4 * ULensFlare::sub_009d6d40(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_009d6790(param_2);
  *param_1 = (undefined4)(&g_01fa4180);
  param_1[0x2f] = *(undefined4 *)(param_2 + 0x1c4);
  return param_1;
}

// @baa 0x009d6d70
void ULensFlare::sub_009d6d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  return;
}

// @baa 0x009d6d80
void __stdcall sub_009d6d80(int a0, int a1, int a2, int a3) {  }

extern undefined * g_01fa41e0;
// @baa 0x009d6d90
undefined4 * ULensFlare::sub_009d6d90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_009d6790(param_2);
  param_1[0x2f] = param_2;
  *param_1 = (undefined4)(&g_01fa41e0);
  return param_1;
}

struct C_009d6dc0 {
    void sub_009d6dc0();
};

// @baa 0x009d6dc0
void C_009d6dc0::sub_009d6dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3f70);
  sub_006efb40();
  return;
}

struct C_009dc000 {
    void sub_009dc000();
};

extern undefined4 g_01fa425c;
// @baa 0x009dc000
void C_009dc000::sub_009dc000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa425c);
  if (param_1[1] != 0) {
    sub_0053dfa0(param_1[1]);
  }
  *param_1 = (undefined4)(&g_01fa3efc);
  return;
}

struct C_view_009dc290 {
    int sub_006566e0();
    int sub_009d6010();
};

extern undefined * g_01fa42bc;
// @baa 0x009dc290
undefined4 * ULensFlare::sub_009dc290(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_009dc290 *)(this))->sub_006566e0();
  *param_1 = (undefined4)(&g_01fa42bc);
  param_1[0x70] = param_2;
  ((C_view_009dc290 *)(((char *)this + 0x1c4)))->sub_009d6010();
  return param_1;
}

extern char g_025dc910[];
// @baa 0x009dc2c0
int sub_009dc2c0(void) { return (int)g_025dc910; }

void sub_00656790();
// @baa 0x009dc2d0
void sub_009dc2d0(void) { sub_00656790(); }

struct C_view_009dc2e0 {
    int sub_006566e0();
    int sub_009d6010();
};

extern undefined * g_01fa42e8;
// @baa 0x009dc2e0
undefined4 * ULensFlare::sub_009dc2e0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_009dc2e0 *)(this))->sub_006566e0();
  param_1[0x70] = param_2;
  ((C_view_009dc2e0 *)(((char *)this + 0x1c4)))->sub_009d6010();
  *param_1 = (undefined4)(&g_01fa42e8);
  return param_1;
}

extern char g_026b6438[];
// @baa 0x009dc310
int sub_009dc310(void) { return (int)g_026b6438; }

// @baa 0x009dc320
int sub_009dc320(void) { return 1; }

// @baa 0x009dc330
void sub_009dc330(void) { sub_00656790(); }

struct C_view_009dc340 {
    int sub_006566e0();
    int sub_009d6010();
};

extern undefined * g_01fa4314;
// @baa 0x009dc340
undefined4 * ULensFlare::sub_009dc340(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_009dc340 *)(this))->sub_006566e0();
  param_1[0x70] = param_2;
  ((C_view_009dc340 *)(((char *)this + 0x1c4)))->sub_009d6010();
  *param_1 = (undefined4)(&g_01fa4314);
  return param_1;
}

extern char g_026b65bc[];
// @baa 0x009dc370
int sub_009dc370(void) { return (int)g_026b65bc; }

// @baa 0x009dc380
void sub_009dc380(void) { sub_00656790(); }

struct C_009dc3f0 { int sub_009dc3f0(void); };

// @baa 0x009dc3f0
int C_009dc3f0::sub_009dc3f0(void) { return *(int*)((char*)this + 440); }

struct C_009dc440 {
    void sub_009dc440(undefined4);
};

// @baa 0x009dc440
void C_009dc440::sub_009dc440(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  return;
}

// @baa 0x009dc470
void __stdcall sub_009dc470(int a0, int a1, int a2) {  }

struct C_009dc480 { void sub_009dc480(void); };

// @baa 0x009dc480
void C_009dc480::sub_009dc480(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_009dc530 {
    undefined4 * sub_009dc530(byte);
};

// @baa 0x009dc530
undefined4 * C_009dc530::sub_009dc530(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01fa40a0;
// @baa 0x009dc680
undefined4 * sub_009dc680(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x18,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01fa40a0);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_009dc6b0 {
    undefined4 * sub_009dc6b0(byte);
};

// @baa 0x009dc6b0
undefined4 * C_009dc6b0::sub_009dc6b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009dc7d0 {
    undefined4 * sub_009dc7d0(byte);
};

// @baa 0x009dc7d0
undefined4 * C_009dc7d0::sub_009dc7d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009e1400 {
    undefined4 sub_009e1400(byte);
};

int sub_009e13a0(void);
// @baa 0x009e1400
undefined4 C_009e1400::sub_009e1400(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009e13a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009e1b00 {
    undefined4 sub_009e1b00(byte);
};

int sub_009e1960(void);
// @baa 0x009e1b00
undefined4 C_009e1b00::sub_009e1b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009e1960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009e21a0 {
    undefined4 sub_009e21a0(byte);
};

int sub_009e1e40(void);
// @baa 0x009e21a0
undefined4 C_009e21a0::sub_009e21a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009e1e40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009e2890 { int sub_009e2890(void); };

// @baa 0x009e2890
int C_009e2890::sub_009e2890(void) { return *(int*)((char*)this + 8); }

struct C_009e28e0 { int sub_009e28e0(void); };

// @baa 0x009e28e0
int C_009e28e0::sub_009e28e0(void) { return *(int*)((char*)this + 20); }

struct C_009e28f0 { int sub_009e28f0(void); };

// @baa 0x009e28f0
int C_009e28f0::sub_009e28f0(void) { return *(int*)((char*)this + 32); }

struct C_009e2900 { int sub_009e2900(void); };

// @baa 0x009e2900
int C_009e2900::sub_009e2900(void) { return *(int*)((char*)this + 44); }

struct C_009e2910 {
    undefined4 sub_009e2910(byte);
};

int sub_009e2810(void);
// @baa 0x009e2910
undefined4 C_009e2910::sub_009e2910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009e2810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01fa4340;
// @baa 0x009e2ad0
undefined4 * sub_009e2ad0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x18,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01fa4340);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct A1 { virtual void v0(); virtual void v1(); virtual void v2(int); virtual void v3(void*, float); };

struct Ctx { void* vt; void* pdi; unsigned b1; unsigned b0; unsigned fl; };

#pragma pack(push,4)
struct Rr { char pad[0x14]; unsigned long long flags; };

#pragma pack(pop)
struct Hold { Rr* r; };

struct Cmp { char pad[0x1c4]; A1* v; };

Cmp* sub_009f4dc0(void*);
extern char g_01fa413c[];
extern char g_01f9c500[];
extern char* g_026b6408;
extern "C" __declspec(dllimport) int __stdcall TryEnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);
struct Host { char pad[0xa4]; unsigned flags; char pad2[0xbc-0xa8]; void* o;
 void sub_009d6930(void*, Hold*, int, int);
 void sub_009f4e80(void*, Hold*, int, int); };

// @baa 0x009f4e80
void Host::sub_009f4e80(void* pdi, Hold* h, int m, int e)
{
    char* cs = g_026b6408 + 4;
    if (!TryEnterCriticalSection(cs)) EnterCriticalSection(cs);
    A1* a = ((A1*(__thiscall*)(void*))(*(void***)o)[0x260/4])(o);
    if (!pdi) {
        sub_006311e0("PDI", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ApexRender.cpp", 0x733, g_01f9c500);
    } else if (a && m != 3) {
        A1* b = 0;
        Cmp* c = sub_009f4dc0(o);
        if (c) { A1* v = c->v; if (v) b = (A1*)((void*(__thiscall*)(void*))(*(void***)v)[0x44/4])(v); }
        Ctx x;
        bool f = h && h->r && (h->r->flags & 0x800);
        unsigned fl = flags;
        x.b1 = (fl >> 1) & 1;
        x.vt = g_01fa413c;
        x.pdi = pdi;
        x.b0 = fl & 1;
        x.fl = f;
        if ((fl & 0x80) != 0) {
            a->v0(); a->v2(0); a->v1();
            if (b) { b->v0(); b->v2(0); b->v1(); }
            flags &= 0xffffff7f;
        }
        a->v3(&x, 1.0f);
        if (b) b->v3(&x, 1.0f);
    }
    LeaveCriticalSection(g_026b6408 + 4);
    sub_009d6930(pdi, h, m, e);
}
