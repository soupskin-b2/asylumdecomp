// Engine_0a50000.cpp (part 1 of 2): 353 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_00a4f1b0();
// @baa 0x00a50be0
void sub_00a50be0(void) { sub_00a4f1b0(); }

void sub_00a4f460();
// @baa 0x00a50cb0
void sub_00a50cb0(void) { sub_00a4f460(); }

void sub_00a4f7d0();
// @baa 0x00a51290
void sub_00a51290(void) { sub_00a4f7d0(); }

struct C {
    int sub_00a51320(undefined4, undefined4, undefined4);
    int sub_00a4ded0(int, int);
};

// @baa 0x00a51320
int C::sub_00a51320(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00a4ded0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00a4de10(int, int);
};

struct C_00a51350 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00a51350(void);
};

// @baa 0x00a51350
void C_00a51350::sub_00a51350(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00a4de10(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00a4f220();
// @baa 0x00a514e0
void sub_00a514e0(void) { sub_00a4f220(); }

void sub_00a4f3f0();
// @baa 0x00a514f0
void sub_00a514f0(void) { sub_00a4f3f0(); }

int sub_00a34d60(void);
int sub_00a508e0(...);
extern undefined4 g_026b6864;
// @baa 0x00a51bb0
int sub_00a51bb0(void)
{
  if (g_026b6864 == 0) {
    g_026b6864 = sub_00a508e0(L"Engine");
    sub_00a34d60();
  }
  return g_026b6864;
}

int sub_00a34f60(void);
int sub_00a50a60(...);
extern undefined4 g_026b686c;
// @baa 0x00a51be0
int sub_00a51be0(void)
{
  if (g_026b686c == 0) {
    g_026b686c = sub_00a50a60(L"Engine");
    sub_00a34f60();
  }
  return g_026b686c;
}

// @baa 0x00a52060
void sub_00a52060(void) { sub_00a4f1b0(); }

struct C_00a52160 {
    void sub_00a52160(undefined4);
};

int sub_006d3030(...);
// @baa 0x00a52160
void C_00a52160::sub_00a52160(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d3030(param_2,param_1);
  return;
}

// @baa 0x00a526b0
void sub_00a526b0(void) { sub_00a4f220(); }

// @baa 0x00a52860
void sub_00a52860(void) { sub_00a4f3f0(); }

struct C_00a53a60 {
    undefined4 * sub_00a53a60(byte);
    int sub_00a4f3f0();
};

int sub_0053dfa0(...);
extern undefined4 g_01fc385c;
// @baa 0x00a53a60
undefined4 * C_00a53a60::sub_00a53a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01fc385c);
  ((C_00a53a60 *)(((char *)this + 8)))->sub_00a4f3f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a53260(void);
// @baa 0x00a54aa0
undefined4 UTexture2D::sub_00a54aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a53260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a56690
void sub_00a56690(void)
{
  return;
}

// @baa 0x00a566a0
void sub_00a566a0(void) {  }

struct C_00a568e0 {
    uint sub_00a568e0();
};

// @baa 0x00a568e0
uint C_00a568e0::sub_00a568e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 2 & 1;
}

struct C_00a568f0 {
    void sub_00a568f0(undefined4, undefined4);
};

// @baa 0x00a568f0
void C_00a568f0::sub_00a568f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0x24))(param_2,param_3);
  return;
}

struct C_00a56910 { char* sub_00a56910(void); };

// @baa 0x00a56910
char* C_00a56910::sub_00a56910(void) { return (char*)this + 416; }

struct C_00a56920 {
    int sub_00a56920(int);
};

// @baa 0x00a56920
int C_00a56920::sub_00a56920(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = param_1 + 0x1a8;
  if (param_2 == 0) {
    iVar1 = param_1 + 0x1ac;
  }
  return iVar1;
}

extern char g_01ecdfdc[];
struct C_00a569f0 { void sub_00a569f0(void); };

// @baa 0x00a569f0
void C_00a569f0::sub_00a569f0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; }

struct C_00a56a40 {
    char pad[0x4e];
    BYTE field_4e;
    UINT sub_00a56a40();
};

// @baa 0x00a56a40
UINT C_00a56a40::sub_00a56a40()
{
    return field_4e;
}

struct C_00a56a50 {
    undefined4 sub_00a56a50(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00a56a50
undefined4 C_00a56a50::sub_00a56a50(int param_2)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x4e) != '\x02') {
    sub_006311e0("Type == LMIT_Texture",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x1a3,&g_01e3f3dc);
    return *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
  }
  return *(undefined4 *)(param_1 + 0x30 + param_2 * 4);
}

struct C_00a56a90 { C_00a56a90* sub_00a56a90(void); };

// @baa 0x00a56a90
C_00a56a90* C_00a56a90::sub_00a56a90(void) { return this; }

struct C_00a56aa0 {
    int sub_00a56aa0();
};

// @baa 0x00a56aa0
int C_00a56aa0::sub_00a56aa0(void)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x4e) != '\x02') {
    sub_006311e0("Type == LMIT_Texture",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x1b1,&g_01e3f3dc);
  }
  return param_1 + 0x3c;
}

struct C_00a56ad0 {
    int sub_00a56ad0();
};

// @baa 0x00a56ad0
int C_00a56ad0::sub_00a56ad0(void)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x4e) != '\x02') {
    sub_006311e0("Type == LMIT_Texture",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x1b6,&g_01e3f3dc);
  }
  return param_1 + 0x44;
}

struct C_00a56b00 {
    char pad[0x4d];
    unsigned char b4d;
    UINT sub_00a56b00();
};

// @baa 0x00a56b00
UINT C_00a56b00::sub_00a56b00()
{
    return b4d;
}

struct C_00a56b10 {
    char pad[0x4c];
    BYTE b4c;
    int sub_00a56b10();
};

// @baa 0x00a56b10
int C_00a56b10::sub_00a56b10()
{
    return b4c;
}

struct C_00a56bc0 { int sub_00a56bc0(void); };

// @baa 0x00a56bc0
int C_00a56bc0::sub_00a56bc0(void) { return *(int*)((char*)this + 48); }

struct C_00a56bd0 { C_00a56bd0* sub_00a56bd0(void); };

// @baa 0x00a56bd0
C_00a56bd0* C_00a56bd0::sub_00a56bd0(void) { return this; }

struct C_00a56be0 {
    char pad[0x34];
    BYTE field_34;
    UINT sub_00a56be0();
};

// @baa 0x00a56be0
UINT C_00a56be0::sub_00a56be0()
{
    return (UINT)this->field_34;
}

// @baa 0x00a56c20
int sub_00a56c20(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01fceb08;
// @baa 0x00a56c30
undefined4 * UObject::sub_00a56c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fceb08);
  return param_1;
}

// @baa 0x00a56c50
IMPLEMENT_CLASS_AT(UAmbientOcclusionEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AmbientOcclusionRendering.cpp", 2046);

// @baa 0x00a56cb0
struct C_00a56ce0 { void sub_00a56ce0(int a0); };

// @baa 0x00a56ce0
void C_00a56ce0::sub_00a56ce0(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_00a56cf0 {
    bool sub_00a56cf0();
};

// @baa 0x00a56cf0
bool C_00a56cf0::sub_00a56cf0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) != 0;
}

struct C_00a56d00 { int sub_00a56d00(void); };

// @baa 0x00a56d00
int C_00a56d00::sub_00a56d00(void) { return *(int*)((char*)this + 48); }

struct C_00a56d70 { C_00a56d70* sub_00a56d70(void); };

// @baa 0x00a56d70
C_00a56d70* C_00a56d70::sub_00a56d70(void) { return this; }

struct C_00a56d80 { int sub_00a56d80(void); };

// @baa 0x00a56d80
int C_00a56d80::sub_00a56d80(void) { return *(int*)((char*)this + 64); }

struct C_00a56ea0 { C_00a56ea0* sub_00a56ea0(int a0); };

// @baa 0x00a56ea0
C_00a56ea0* C_00a56ea0::sub_00a56ea0(int a0) { return this; }

// @baa 0x00a56eb0
int sub_00a56eb0(int a0, int a1) { return a1; }

extern undefined * g_01fcec20;
// @baa 0x00a56ec0
undefined4 * UObject::sub_00a56ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fcec20);
  return param_1;
}

struct C_00a57150 {
    int sub_00a57150();
};

// @baa 0x00a57150
int C_00a57150::sub_00a57150(void)
{
    int param_1 = (int)this;
  return param_1 + 0xe0;
}

struct C_00a57160 { char* sub_00a57160(void); };

// @baa 0x00a57160
char* C_00a57160::sub_00a57160(void) { return (char*)this + 236; }

struct C_00a57170 { char* sub_00a57170(void); };

// @baa 0x00a57170
char* C_00a57170::sub_00a57170(void) { return (char*)this + 308; }

struct C_00a57180 {
    uint sub_00a57180();
};

// @baa 0x00a57180
uint C_00a57180::sub_00a57180(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c8) >> 1 & 1;
}

struct C_00a57190 { char* sub_00a57190(void); };

// @baa 0x00a57190
char* C_00a57190::sub_00a57190(void) { return (char*)this + 108; }

struct C_00a571a0 { int sub_00a571a0(void); };

// @baa 0x00a571a0
int C_00a571a0::sub_00a571a0(void) { return *(int*)((char*)this + 36); }

struct C_00a571b0 { int sub_00a571b0(void); };

// @baa 0x00a571b0
int C_00a571b0::sub_00a571b0(void) { return *(int*)((char*)this + 76); }

struct C_00a571c0 { int sub_00a571c0(void); };

// @baa 0x00a571c0
int C_00a571c0::sub_00a571c0(void) { return *(int*)((char*)this + 80); }

struct C_00a571d0 { int sub_00a571d0(void); };

// @baa 0x00a571d0
int C_00a571d0::sub_00a571d0(void) { return *(int*)((char*)this + 84); }

// @baa 0x00a57310
void __stdcall sub_00a57310(int a0) {  }

// @baa 0x00a57320
void __stdcall sub_00a57320(int a0, int a1, int a2, int a3) {  }

// @baa 0x00a57330
int sub_00a57330(void) { return 1; }

// @baa 0x00a57400
int sub_00a57400(void) { return 0; }

// @baa 0x00a57410
void __stdcall sub_00a57410(int a0) {  }

// @baa 0x00a57420
int sub_00a57420(void) { return 1; }

// @baa 0x00a57460
void __stdcall sub_00a57460(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {  }

// @baa 0x00a57470
int sub_00a57470(void) { return 1; }

// @baa 0x00a57480
int sub_00a57480(void) { return 0; }

// @baa 0x00a57510
void __stdcall sub_00a57510(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00a57560
int sub_00a57560(void) { return 1; }

// @baa 0x00a57570
int sub_00a57570(void) { return 0; }

int sub_00a574b0(...);
// @baa 0x00a57580
undefined4 sub_00a57580(int param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = sub_00a574b0(param_1,param_2,param_3);
  if ((iVar1 != 0) && (((param_1 == 4 || (param_1 == 0)) || (param_1 == 3)))) {
    return 1;
  }
  return 0;
}

// @baa 0x00a575c0
int sub_00a575c0(void) { return 1; }

// @baa 0x00a575d0
int sub_00a575d0(void) { return 0; }

struct C_00a576f0 {
    int sub_00a576f0(int);
};

// @baa 0x00a576f0
int C_00a576f0::sub_00a576f0(int param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)(param_2 + 0x30);
  do {
    if (*(char *)(param_2 + 0x4e) != '\x02') {
      sub_006311e0("Type == LMIT_Texture",
                   "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                   ,0x1a3,&g_01e3f3dc);
    }
    *(undefined4 *)(param_1 + uVar1 * 4) = *puVar2;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 3);
  return param_1;
}

struct C_00a57800 {
    undefined4 * sub_00a57800(int);
};

// @baa 0x00a57800
undefined4 * C_00a57800::sub_00a57800(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (*(char *)(param_2 + 0x4e) != '\x02') {
    sub_006311e0("Type == LMIT_Texture",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h"
                 ,0x1a3,&g_01e3f3dc);
  }
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}

// @baa 0x00a57860
uint sub_00a57860(uint * param_1, uint * param_2)
{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}

// @baa 0x00a57940
undefined4 sub_00a57940(void)
{
  return 1;
}

// @baa 0x00a57950
int sub_00a57950(void) { return 0; }

// @baa 0x00a57a00
void __stdcall sub_00a57a00(int a0) {  }

// @baa 0x00a57b50
undefined4 sub_00a57b50(void)
{
  return 1;
}

// @baa 0x00a57b60
int sub_00a57b60(void) { return 0; }

struct C_00a57b70 { C_00a57b70* sub_00a57b70(void); };

// @baa 0x00a57b70
C_00a57b70* C_00a57b70::sub_00a57b70(void) { return this; }

struct C_00a59010 { C_00a59010* sub_00a59010(void); };

// @baa 0x00a59010
C_00a59010* C_00a59010::sub_00a59010(void) { return this; }

int sub_00716170(...);
int sub_007161b0(...);
// @baa 0x00a59170
undefined4 sub_00a59170(undefined4 param_1, int param_2)
{
  sub_007161b0(param_1,param_2 + 0x10);
  sub_007161b0(param_1,param_2 + 0x16);
  sub_00716170(param_1,param_2 + 0x1c);
  sub_00716170(param_1,param_2 + 0x22);
  return param_1;
}

// @baa 0x00a591b0
bool sub_00a591b0(int param_1)
{
  return param_1 != 3;
}

struct C_view {
    int sub_0073f030(int);
};

// @baa 0x00a59240
undefined4 UMorphWeightSequence::sub_00a59240(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

void sub_007249d0();
// @baa 0x00a59270
void sub_00a59270(void) { sub_007249d0(); }

// @baa 0x00a59280
bool sub_00a59280(int param_1)
{
  return param_1 != 3;
}

int sub_00afa590(...);
// @baa 0x00a59330
undefined4 UMorphWeightSequence::sub_00a59330(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00a59360
void sub_00a59360(void) { sub_007249d0(); }

// @baa 0x00a59370
bool sub_00a59370(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a59400
undefined4 UMorphWeightSequence::sub_00a59400(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00a59430
void sub_00a59430(void) { sub_007249d0(); }

// @baa 0x00a59440
int sub_00a59440(void) { return 1; }

// @baa 0x00a59450
bool sub_00a59450(int param_1)
{
  return param_1 != 3;
}

struct C_view_00a59460 {
    int sub_00739650(int);
};

extern undefined4 g_01fcefb4;
extern undefined * g_01fcefbc;
// @baa 0x00a59460
undefined4 * UMorphWeightSequence::sub_00a59460(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00a59460 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01fcefbc);
  param_1[5] = (undefined4)(&g_01fcefb4);
  return param_1;
}

// @baa 0x00a59490
void sub_00a59490(void) { sub_007249d0(); }

// @baa 0x00a594a0
bool sub_00a594a0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a59530
undefined4 UMorphWeightSequence::sub_00a59530(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00a59560
void sub_00a59560(void) { sub_007249d0(); }

// @baa 0x00a59570
void sub_00a59570(void) {  }

// @baa 0x00a59580
bool sub_00a59580(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a59780
int __stdcall sub_00a59780(int a0) { return 0; }

// @baa 0x00a59790
int __stdcall sub_00a59790(int a0) { return 0; }

extern char g_01ebbe1c[];
struct C_00a597a0 { void sub_00a597a0(void); };

// @baa 0x00a597a0
void C_00a597a0::sub_00a597a0(void) { *(int*)((char*)this + 0) = (int)g_01ebbe1c; }

// @baa 0x00a597b0
// @baa 0x00a598c0
int UAmbientOcclusionEffect::vf_000(void) { return 1; }

// @baa 0x00a598d0
bool UAmbientOcclusionEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00a59a10 { int a, b; C_00a59a10(int, int); };

// @baa 0x00a59a10
C_00a59a10::C_00a59a10(int x, int y) : a(x), b(y) {}

// @baa 0x00a59a90
int sub_00a59a90(void) { return 1; }

struct C_00a59b30 {
    undefined4 sub_00a59b30(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a59b30
undefined4 C_00a59b30::sub_00a59b30(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a59b30 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  return uVar1;
}

// @baa 0x00a59b70
int sub_00a59b70(void) { return 1; }

struct C_00a59c00 {
    undefined4 sub_00a59c00(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a59c00
undefined4 C_00a59c00::sub_00a59c00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a59c00 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  return uVar1;
}

// @baa 0x00a59c50
int sub_00a59c50(void) { return 1; }

struct C_00a59ce0 {
    undefined4 sub_00a59ce0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a59ce0
undefined4 C_00a59ce0::sub_00a59ce0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a59ce0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x60);
  return uVar1;
}

// @baa 0x00a59d30
void sub_00a59d30(void) { sub_007249d0(); }

// @baa 0x00a59d40
undefined4 sub_00a59d40(int param_1)
{
  if (((param_1 != 4) && (param_1 != 0)) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

// @baa 0x00a59de0
undefined4 UMorphWeightSequence::sub_00a59de0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00a59e10
void sub_00a59e10(void) { sub_007249d0(); }

// @baa 0x00a59e20
int sub_00a59e20(void) { return 1; }

// @baa 0x00a59eb0
undefined4 UMorphWeightSequence::sub_00a59eb0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x00a59ee0
void sub_00a59ee0(void) { sub_007249d0(); }

struct C_00a59ef0 { C_00a59ef0* sub_00a59ef0(void); };

// @baa 0x00a59ef0
C_00a59ef0* C_00a59ef0::sub_00a59ef0(void) { *(int*)((char*)this + 20) = -1; return this; }

struct C_00a59f00 { C_00a59f00* sub_00a59f00(void); };

// @baa 0x00a59f00
C_00a59f00* C_00a59f00::sub_00a59f00(void) { *(int*)((char*)this + 28) = -1; return this; }

extern char g_01fcf194[];
struct C_00a5a3c0 { C_00a5a3c0* sub_00a5a3c0(void); };

// @baa 0x00a5a3c0
C_00a5a3c0* C_00a5a3c0::sub_00a5a3c0(void) { *(int*)((char*)this + 0) = (int)g_01fcf194; return this; }

extern char g_01fca688[];
// @baa 0x00a5a3f0
int sub_00a5a3f0(void) { return (int)g_01fca688; }

extern char g_01ebb554[];
struct C_00a5a400 { void sub_00a5a400(void); };

// @baa 0x00a5a400
void C_00a5a400::sub_00a5a400(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a5a410 {
    undefined4 * sub_00a5a410(byte);
};

// @baa 0x00a5a410
undefined4 * C_00a5a410::sub_00a5a410(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a5a4a0
undefined4 sub_00a5a4a0(undefined4 param_1, int param_2)
{
  sub_00716170(param_1,param_2);
  sub_00716170(param_1,param_2 + 6);
  sub_00716170(param_1,param_2 + 0xc);
  sub_00716170(param_1,param_2 + 0x12);
  sub_00716170(param_1,param_2 + 0x18);
  sub_00716170(param_1,param_2 + 0x1e);
  return param_1;
}

// @baa 0x00a5a4f0
int sub_00a5a4f0(void) { return 0; }

// @baa 0x00a5a530
bool sub_00a5a530(int * param_1)
{
  return *param_1 != 0;
}

struct C_00a5a570 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00a5a570(INT Index);
};

// @baa 0x00a5a570
UBOOL C_00a5a570::sub_00a5a570(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00a5a590 { C_00a5a590* sub_00a5a590(void); };

// @baa 0x00a5a590
C_00a5a590* C_00a5a590::sub_00a5a590(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00a5a5d0 { int sub_00a5a5d0(void); };

// @baa 0x00a5a5d0
int C_00a5a5d0::sub_00a5a5d0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a5e0 { int sub_00a5a5e0(void); };

// @baa 0x00a5a5e0
int C_00a5a5e0::sub_00a5a5e0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a5f0 { int a, b, c; C_00a5a5f0(); };

// @baa 0x00a5a5f0
C_00a5a5f0::C_00a5a5f0() : a(0), b(0), c(0) {}

struct C_00a5a600 { int sub_00a5a600(void); };

// @baa 0x00a5a600
int C_00a5a600::sub_00a5a600(void) { return *(int*)((char*)this + 4); }

struct C_00a5a610 { int a, b, c; C_00a5a610(); };

// @baa 0x00a5a610
C_00a5a610::C_00a5a610() : a(0), b(0), c(0) {}

struct C_00a5a620 { int sub_00a5a620(void); };

// @baa 0x00a5a620
int C_00a5a620::sub_00a5a620(void) { return *(int*)((char*)this + 4); }

struct C_00a5a630 { int a, b, c; C_00a5a630(); };

// @baa 0x00a5a630
C_00a5a630::C_00a5a630() : a(0), b(0), c(0) {}

struct C_00a5a640 { int sub_00a5a640(void); };

// @baa 0x00a5a640
int C_00a5a640::sub_00a5a640(void) { return *(int*)((char*)this + 4); }

struct C_00a5a650 { int a, b, c; C_00a5a650(); };

// @baa 0x00a5a650
C_00a5a650::C_00a5a650() : a(0), b(0), c(0) {}

struct C_00a5a660 { int sub_00a5a660(void); };

// @baa 0x00a5a660
int C_00a5a660::sub_00a5a660(void) { return *(int*)((char*)this + 4); }

struct C_00a5a670 { int sub_00a5a670(void); };

// @baa 0x00a5a670
int C_00a5a670::sub_00a5a670(void) { return *(int*)((char*)this + 4); }

struct C_00a5a680 { int sub_00a5a680(void); };

// @baa 0x00a5a680
int C_00a5a680::sub_00a5a680(void) { return *(int*)((char*)this + 4); }

struct C_00a5a690 { int sub_00a5a690(void); };

// @baa 0x00a5a690
int C_00a5a690::sub_00a5a690(void) { return *(int*)((char*)this + 4); }

struct C_00a5a6a0 { int sub_00a5a6a0(void); };

// @baa 0x00a5a6a0
int C_00a5a6a0::sub_00a5a6a0(void) { return *(int*)((char*)this + 28); }

struct C_00a5a6b0 { int sub_00a5a6b0(void); };

// @baa 0x00a5a6b0
int C_00a5a6b0::sub_00a5a6b0(void) { return *(int*)((char*)this + 56); }

struct C_00a5a6c0 { int sub_00a5a6c0(void); };

// @baa 0x00a5a6c0
int C_00a5a6c0::sub_00a5a6c0(void) { return *(int*)((char*)this + 208); }

struct C_00a5a6d0 { int sub_00a5a6d0(void); };

// @baa 0x00a5a6d0
int C_00a5a6d0::sub_00a5a6d0(void) { return *(int*)((char*)this + 4); }

struct C_00a5a6e0 { int sub_00a5a6e0(void); };

// @baa 0x00a5a6e0
int C_00a5a6e0::sub_00a5a6e0(void) { return *(int*)((char*)this + 4); }

struct C_00a5a6f0 { int sub_00a5a6f0(void); };

// @baa 0x00a5a6f0
int C_00a5a6f0::sub_00a5a6f0(void) { return *(int*)((char*)this + 4); }

struct C_00a5a700 { int a, b, c; C_00a5a700(); };

// @baa 0x00a5a700
C_00a5a700::C_00a5a700() : a(0), b(0), c(0) {}

struct C_00a5a710 { int sub_00a5a710(void); };

// @baa 0x00a5a710
int C_00a5a710::sub_00a5a710(void) { return *(int*)((char*)this + 4); }

struct C_00a5a720 { int a, b, c; C_00a5a720(); };

// @baa 0x00a5a720
C_00a5a720::C_00a5a720() : a(0), b(0), c(0) {}

struct C_00a5a730 { int sub_00a5a730(void); };

// @baa 0x00a5a730
int C_00a5a730::sub_00a5a730(void) { return *(int*)((char*)this + 0); }

struct C_00a5a740 { int sub_00a5a740(void); };

// @baa 0x00a5a740
int C_00a5a740::sub_00a5a740(void) { return *(int*)((char*)this + 0); }

struct C_00a5a750 { int sub_00a5a750(void); };

// @baa 0x00a5a750
int C_00a5a750::sub_00a5a750(void) { return *(int*)((char*)this + 0); }

struct C_00a5a760 { int sub_00a5a760(void); };

// @baa 0x00a5a760
int C_00a5a760::sub_00a5a760(void) { return *(int*)((char*)this + 0); }

struct C_00a5a770 { int sub_00a5a770(void); };

// @baa 0x00a5a770
int C_00a5a770::sub_00a5a770(void) { return *(int*)((char*)this + 0); }

struct C_00a5a780 { int sub_00a5a780(void); };

// @baa 0x00a5a780
int C_00a5a780::sub_00a5a780(void) { return *(int*)((char*)this + 0); }

struct C_00a5a790 { int sub_00a5a790(void); };

// @baa 0x00a5a790
int C_00a5a790::sub_00a5a790(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a5a7a0
bool sub_00a5a7a0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a7b0
bool sub_00a5a7b0(int param_1)
{
  return param_1 != 3;
}

struct C_00a5a7c0 { int sub_00a5a7c0(void); };

// @baa 0x00a5a7c0
int C_00a5a7c0::sub_00a5a7c0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a7d0 { int sub_00a5a7d0(void); };

// @baa 0x00a5a7d0
int C_00a5a7d0::sub_00a5a7d0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a7e0 { int sub_00a5a7e0(void); };

// @baa 0x00a5a7e0
int C_00a5a7e0::sub_00a5a7e0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a7f0 { int sub_00a5a7f0(void); };

// @baa 0x00a5a7f0
int C_00a5a7f0::sub_00a5a7f0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a800 { int sub_00a5a800(void); };

// @baa 0x00a5a800
int C_00a5a800::sub_00a5a800(void) { return *(int*)((char*)this + 0); }

struct C_00a5a810 { int sub_00a5a810(void); };

// @baa 0x00a5a810
int C_00a5a810::sub_00a5a810(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a5a820
bool sub_00a5a820(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a830
bool sub_00a5a830(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a840
bool sub_00a5a840(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a850
bool sub_00a5a850(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a860
bool sub_00a5a860(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a870
bool sub_00a5a870(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a880
bool sub_00a5a880(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a890
bool sub_00a5a890(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8a0
bool sub_00a5a8a0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8b0
bool sub_00a5a8b0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8c0
bool sub_00a5a8c0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8d0
bool sub_00a5a8d0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8e0
bool sub_00a5a8e0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a8f0
bool sub_00a5a8f0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5a900
bool sub_00a5a900(int param_1)
{
  return param_1 != 3;
}

struct C_00a5a910 { int sub_00a5a910(void); };

// @baa 0x00a5a910
int C_00a5a910::sub_00a5a910(void) { return *(int*)((char*)this + 0); }

struct C_00a5a920 { int sub_00a5a920(void); };

// @baa 0x00a5a920
int C_00a5a920::sub_00a5a920(void) { return *(int*)((char*)this + 0); }

struct C_00a5a930 { int sub_00a5a930(void); };

// @baa 0x00a5a930
int C_00a5a930::sub_00a5a930(void) { return *(int*)((char*)this + 0); }

struct C_00a5a940 { int sub_00a5a940(void); };

// @baa 0x00a5a940
int C_00a5a940::sub_00a5a940(void) { return *(int*)((char*)this + 0); }

struct C_00a5a950 { int sub_00a5a950(void); };

// @baa 0x00a5a950
int C_00a5a950::sub_00a5a950(void) { return *(int*)((char*)this + 0); }

struct C_00a5a960 { int sub_00a5a960(void); };

// @baa 0x00a5a960
int C_00a5a960::sub_00a5a960(void) { return *(int*)((char*)this + 0); }

struct C_00a5a970 { int sub_00a5a970(void); };

// @baa 0x00a5a970
int C_00a5a970::sub_00a5a970(void) { return *(int*)((char*)this + 0); }

struct C_00a5a980 { int sub_00a5a980(void); };

// @baa 0x00a5a980
int C_00a5a980::sub_00a5a980(void) { return *(int*)((char*)this + 0); }

struct C_00a5a990 { int sub_00a5a990(void); };

// @baa 0x00a5a990
int C_00a5a990::sub_00a5a990(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9a0 { int sub_00a5a9a0(void); };

// @baa 0x00a5a9a0
int C_00a5a9a0::sub_00a5a9a0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9b0 { int sub_00a5a9b0(void); };

// @baa 0x00a5a9b0
int C_00a5a9b0::sub_00a5a9b0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9c0 { int sub_00a5a9c0(void); };

// @baa 0x00a5a9c0
int C_00a5a9c0::sub_00a5a9c0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9d0 { int sub_00a5a9d0(void); };

// @baa 0x00a5a9d0
int C_00a5a9d0::sub_00a5a9d0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9e0 { int sub_00a5a9e0(void); };

// @baa 0x00a5a9e0
int C_00a5a9e0::sub_00a5a9e0(void) { return *(int*)((char*)this + 0); }

struct C_00a5a9f0 { int sub_00a5a9f0(void); };

// @baa 0x00a5a9f0
int C_00a5a9f0::sub_00a5a9f0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa00 { int sub_00a5aa00(void); };

// @baa 0x00a5aa00
int C_00a5aa00::sub_00a5aa00(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa10 { int sub_00a5aa10(void); };

// @baa 0x00a5aa10
int C_00a5aa10::sub_00a5aa10(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa20 { int sub_00a5aa20(void); };

// @baa 0x00a5aa20
int C_00a5aa20::sub_00a5aa20(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa30 { int sub_00a5aa30(void); };

// @baa 0x00a5aa30
int C_00a5aa30::sub_00a5aa30(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa40 { int sub_00a5aa40(void); };

// @baa 0x00a5aa40
int C_00a5aa40::sub_00a5aa40(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa50 { int sub_00a5aa50(void); };

// @baa 0x00a5aa50
int C_00a5aa50::sub_00a5aa50(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa60 { int sub_00a5aa60(void); };

// @baa 0x00a5aa60
int C_00a5aa60::sub_00a5aa60(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa70 { int sub_00a5aa70(void); };

// @baa 0x00a5aa70
int C_00a5aa70::sub_00a5aa70(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa80 { int sub_00a5aa80(void); };

// @baa 0x00a5aa80
int C_00a5aa80::sub_00a5aa80(void) { return *(int*)((char*)this + 0); }

struct C_00a5aa90 { int sub_00a5aa90(void); };

// @baa 0x00a5aa90
int C_00a5aa90::sub_00a5aa90(void) { return *(int*)((char*)this + 0); }

struct C_00a5aaa0 { int sub_00a5aaa0(void); };

// @baa 0x00a5aaa0
int C_00a5aaa0::sub_00a5aaa0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aab0 { int sub_00a5aab0(void); };

// @baa 0x00a5aab0
int C_00a5aab0::sub_00a5aab0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aac0 { int sub_00a5aac0(void); };

// @baa 0x00a5aac0
int C_00a5aac0::sub_00a5aac0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aad0 { int sub_00a5aad0(void); };

// @baa 0x00a5aad0
int C_00a5aad0::sub_00a5aad0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aae0 { int sub_00a5aae0(void); };

// @baa 0x00a5aae0
int C_00a5aae0::sub_00a5aae0(void) { return *(int*)((char*)this + 0); }

struct C_00a5aaf0 { int sub_00a5aaf0(void); };

// @baa 0x00a5aaf0
int C_00a5aaf0::sub_00a5aaf0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a5ab00
undefined4 sub_00a5ab00(int param_1, int * param_2, int param_3)
{
  int iVar1;
  
  if ((*(byte *)(param_3 + 0x18) & 4) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x34))();
    if ((iVar1 != 0) && (param_1 != 3)) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x00a5ab50
bool sub_00a5ab50(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5ab60
bool sub_00a5ab60(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5ab70
bool sub_00a5ab70(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5ab80
bool sub_00a5ab80(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5ab90
bool sub_00a5ab90(int param_1)
{
  return param_1 != 3;
}

struct C_00a5aba0 { int sub_00a5aba0(void); };

// @baa 0x00a5aba0
int C_00a5aba0::sub_00a5aba0(void) { return *(int*)((char*)this + 0); }

struct C_00a5abb0 { int sub_00a5abb0(void); };

// @baa 0x00a5abb0
int C_00a5abb0::sub_00a5abb0(void) { return *(int*)((char*)this + 0); }

struct C_00a5abc0 { int sub_00a5abc0(void); };

// @baa 0x00a5abc0
int C_00a5abc0::sub_00a5abc0(void) { return *(int*)((char*)this + 0); }

struct C_00a5abd0 { int sub_00a5abd0(void); };

// @baa 0x00a5abd0
int C_00a5abd0::sub_00a5abd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a5abe0
bool sub_00a5abe0(int param_1)
{
  return param_1 != 3;
}

// @baa 0x00a5abf0
bool sub_00a5abf0(int param_1)
{
  return param_1 != 3;
}

struct C_00a5ac60 { int sub_00a5ac60(void); };

// @baa 0x00a5ac60
int C_00a5ac60::sub_00a5ac60(void) { return *(int*)((char*)this + 0); }

struct C_00a5ac70 { int sub_00a5ac70(void); };

// @baa 0x00a5ac70
int C_00a5ac70::sub_00a5ac70(void) { return *(int*)((char*)this + 0); }

struct C_00a5ac80 { int sub_00a5ac80(void); };

// @baa 0x00a5ac80
int C_00a5ac80::sub_00a5ac80(void) { return *(int*)((char*)this + 0); }

struct C_00a5ac90 { int sub_00a5ac90(void); };

// @baa 0x00a5ac90
int C_00a5ac90::sub_00a5ac90(void) { return *(int*)((char*)this + 0); }

struct C_00a5aca0 { int sub_00a5aca0(void); };

// @baa 0x00a5aca0
int C_00a5aca0::sub_00a5aca0(void) { return *(int*)((char*)this + 0); }

struct C_00a5acb0 { int sub_00a5acb0(void); };

// @baa 0x00a5acb0
int C_00a5acb0::sub_00a5acb0(void) { return *(int*)((char*)this + 0); }

struct C_00a5acc0 { int sub_00a5acc0(void); };

// @baa 0x00a5acc0
int C_00a5acc0::sub_00a5acc0(void) { return *(int*)((char*)this + 0); }

struct C_00a5acd0 { int sub_00a5acd0(void); };

// @baa 0x00a5acd0
int C_00a5acd0::sub_00a5acd0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bb50 { int sub_00a5bb50(void); };

// @baa 0x00a5bb50
int C_00a5bb50::sub_00a5bb50(void) { return *(int*)((char*)this + 0); }

struct C_00a5bb60 { int sub_00a5bb60(void); };

// @baa 0x00a5bb60
int C_00a5bb60::sub_00a5bb60(void) { return *(int*)((char*)this + 0); }

struct C_00a5bb70 { int sub_00a5bb70(void); };

// @baa 0x00a5bb70
int C_00a5bb70::sub_00a5bb70(void) { return *(int*)((char*)this + 0); }

struct C_00a5bb80 { int sub_00a5bb80(void); };

// @baa 0x00a5bb80
int C_00a5bb80::sub_00a5bb80(void) { return *(int*)((char*)this + 0); }

struct C_00a5bb90 { int sub_00a5bb90(void); };

// @baa 0x00a5bb90
int C_00a5bb90::sub_00a5bb90(void) { return *(int*)((char*)this + 0); }

struct C_00a5bba0 { int sub_00a5bba0(void); };

// @baa 0x00a5bba0
int C_00a5bba0::sub_00a5bba0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bbb0 { int sub_00a5bbb0(void); };

// @baa 0x00a5bbb0
int C_00a5bbb0::sub_00a5bbb0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bbc0 { int sub_00a5bbc0(void); };

// @baa 0x00a5bbc0
int C_00a5bbc0::sub_00a5bbc0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bbd0 { int sub_00a5bbd0(void); };

// @baa 0x00a5bbd0
int C_00a5bbd0::sub_00a5bbd0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bbe0 { int sub_00a5bbe0(void); };

// @baa 0x00a5bbe0
int C_00a5bbe0::sub_00a5bbe0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bbf0 {
    uint sub_00a5bbf0();
};

// @baa 0x00a5bbf0
uint C_00a5bbf0::sub_00a5bbf0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_00a5bc00 {
    uint sub_00a5bc00();
};

// @baa 0x00a5bc00
uint C_00a5bc00::sub_00a5bc00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

// @baa 0x00a5bcf0
undefined4 sub_00a5bcf0(void)
{
  return 1;
}

// @baa 0x00a5bd00
int sub_00a5bd00(void) { return 1; }

// @baa 0x00a5bd10
int sub_00a5bd10(void) { return 1; }

// @baa 0x00a5bd20
bool sub_00a5bd20(int param_1)
{
  return param_1 == 2;
}

// @baa 0x00a5bd30
int sub_00a5bd30(void) { return 1; }

struct C_00a5bd40 { int sub_00a5bd40(void); };

// @baa 0x00a5bd40
int C_00a5bd40::sub_00a5bd40(void) { return *(int*)((char*)this + 0); }

struct C_00a5bd50 { int sub_00a5bd50(void); };

// @baa 0x00a5bd50
int C_00a5bd50::sub_00a5bd50(void) { return *(int*)((char*)this + 0); }

struct C_00a5bd60 { int sub_00a5bd60(void); };

// @baa 0x00a5bd60
int C_00a5bd60::sub_00a5bd60(void) { return *(int*)((char*)this + 0); }

struct C_00a5bd70 { int sub_00a5bd70(void); };

// @baa 0x00a5bd70
int C_00a5bd70::sub_00a5bd70(void) { return *(int*)((char*)this + 0); }

struct C_00a5bd80 { int sub_00a5bd80(void); };

// @baa 0x00a5bd80
int C_00a5bd80::sub_00a5bd80(void) { return *(int*)((char*)this + 0); }

struct C_00a5bd90 { int sub_00a5bd90(void); };

// @baa 0x00a5bd90
int C_00a5bd90::sub_00a5bd90(void) { return *(int*)((char*)this + 0); }

struct C_00a5bda0 { int sub_00a5bda0(void); };

// @baa 0x00a5bda0
int C_00a5bda0::sub_00a5bda0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bdb0 { int sub_00a5bdb0(void); };

// @baa 0x00a5bdb0
int C_00a5bdb0::sub_00a5bdb0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bdc0 { int sub_00a5bdc0(void); };

// @baa 0x00a5bdc0
int C_00a5bdc0::sub_00a5bdc0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bdd0 { int sub_00a5bdd0(void); };

// @baa 0x00a5bdd0
int C_00a5bdd0::sub_00a5bdd0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bde0 { int sub_00a5bde0(void); };

// @baa 0x00a5bde0
int C_00a5bde0::sub_00a5bde0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bec0 {
    int sub_00a5bec0(int);
};

// @baa 0x00a5bec0
int C_00a5bec0::sub_00a5bec0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00a5bed0 { int sub_00a5bed0(void); };

// @baa 0x00a5bed0
int C_00a5bed0::sub_00a5bed0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bee0 { int sub_00a5bee0(void); };

// @baa 0x00a5bee0
int C_00a5bee0::sub_00a5bee0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bef0 {
    int sub_00a5bef0(int);
};

// @baa 0x00a5bef0
int C_00a5bef0::sub_00a5bef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00a5bf00 { int sub_00a5bf00(void); };

// @baa 0x00a5bf00
int C_00a5bf00::sub_00a5bf00(void) { return *(int*)((char*)this + 0); }

struct C_00a5bf10 { int sub_00a5bf10(void); };

// @baa 0x00a5bf10
int C_00a5bf10::sub_00a5bf10(void) { return *(int*)((char*)this + 0); }

struct C_00a5bf90 {
    int sub_00a5bf90(int);
};

// @baa 0x00a5bf90
int C_00a5bf90::sub_00a5bf90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00a5bfa0 { int sub_00a5bfa0(void); };

// @baa 0x00a5bfa0
int C_00a5bfa0::sub_00a5bfa0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bfb0 { int sub_00a5bfb0(void); };

// @baa 0x00a5bfb0
int C_00a5bfb0::sub_00a5bfb0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bfc0 {
    int sub_00a5bfc0(int);
};

// @baa 0x00a5bfc0
int C_00a5bfc0::sub_00a5bfc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00a5bfd0 { int sub_00a5bfd0(void); };

// @baa 0x00a5bfd0
int C_00a5bfd0::sub_00a5bfd0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bfe0 { int sub_00a5bfe0(void); };

// @baa 0x00a5bfe0
int C_00a5bfe0::sub_00a5bfe0(void) { return *(int*)((char*)this + 0); }

struct C_00a5bff0 { int sub_00a5bff0(void); };

// @baa 0x00a5bff0
int C_00a5bff0::sub_00a5bff0(void) { return *(int*)((char*)this + 0); }

struct C_00a5c070 { int sub_00a5c070(void); };

// @baa 0x00a5c070
int C_00a5c070::sub_00a5c070(void) { return *(int*)((char*)this + 0); }

struct C_00a5c270 {
    undefined4 sub_00a5c270(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5c270
undefined4 C_00a5c270::sub_00a5c270(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5c270 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  sub_00716170(param_2,param_1 + 100);
  sub_007161b0(param_2,param_1 + 0x80);
  sub_007161b0(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_00716170(param_2,param_1 + 0xa0);
  sub_00716170(param_2,param_1 + 0xa6);
  sub_00716170(param_2,param_1 + 0xac);
  sub_00716170(param_2,param_1 + 0xb2);
  sub_00716170(param_2,param_1 + 0xb8);
  return uVar1;
}

struct C_00a5c530 {
    undefined4 sub_00a5c530(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5c530
undefined4 C_00a5c530::sub_00a5c530(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5c530 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  sub_00716170(param_2,param_1 + 100);
  sub_007161b0(param_2,param_1 + 0x80);
  sub_007161b0(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_00716170(param_2,param_1 + 0xa0);
  sub_00716170(param_2,param_1 + 0xa6);
  sub_00716170(param_2,param_1 + 0xac);
  sub_00716170(param_2,param_1 + 0xb2);
  sub_00716170(param_2,param_1 + 0xb8);
  return uVar1;
}

struct C_00a5c710 {
    undefined4 sub_00a5c710(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5c710
undefined4 C_00a5c710::sub_00a5c710(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5c710 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5c880 {
    undefined4 sub_00a5c880(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5c880
undefined4 C_00a5c880::sub_00a5c880(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5c880 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5c9f0 {
    undefined4 sub_00a5c9f0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5c9f0
undefined4 C_00a5c9f0::sub_00a5c9f0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5c9f0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5cb60 {
    undefined4 sub_00a5cb60(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5cb60
undefined4 C_00a5cb60::sub_00a5cb60(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5cb60 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5ccd0 {
    undefined4 sub_00a5ccd0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5ccd0
undefined4 C_00a5ccd0::sub_00a5ccd0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5ccd0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5ce40 {
    undefined4 sub_00a5ce40(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5ce40
undefined4 C_00a5ce40::sub_00a5ce40(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5ce40 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5cfb0 {
    undefined4 sub_00a5cfb0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5cfb0
undefined4 C_00a5cfb0::sub_00a5cfb0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5cfb0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d120 {
    undefined4 sub_00a5d120(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d120
undefined4 C_00a5d120::sub_00a5d120(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d120 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d290 {
    undefined4 sub_00a5d290(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d290
undefined4 C_00a5d290::sub_00a5d290(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d290 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d400 {
    undefined4 sub_00a5d400(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d400
undefined4 C_00a5d400::sub_00a5d400(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d400 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d570 {
    undefined4 sub_00a5d570(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d570
undefined4 C_00a5d570::sub_00a5d570(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d570 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d6e0 {
    undefined4 sub_00a5d6e0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d6e0
undefined4 C_00a5d6e0::sub_00a5d6e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d6e0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d850 {
    undefined4 sub_00a5d850(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d850
undefined4 C_00a5d850::sub_00a5d850(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d850 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5d9c0 {
    undefined4 sub_00a5d9c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5d9c0
undefined4 C_00a5d9c0::sub_00a5d9c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5d9c0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5db30 {
    undefined4 sub_00a5db30(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5db30
undefined4 C_00a5db30::sub_00a5db30(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5db30 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct C_00a5de80 {
    undefined4 sub_00a5de80(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5de80
undefined4 C_00a5de80::sub_00a5de80(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5de80 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  return uVar1;
}

struct C_00a5dfd0 {
    undefined4 sub_00a5dfd0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5dfd0
undefined4 C_00a5dfd0::sub_00a5dfd0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5dfd0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  return uVar1;
}

struct C_00a5e120 {
    undefined4 sub_00a5e120(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e120
undefined4 C_00a5e120::sub_00a5e120(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e120 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  return uVar1;
}

struct C_00a5e270 {
    undefined4 sub_00a5e270(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e270
undefined4 C_00a5e270::sub_00a5e270(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e270 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  return uVar1;
}

struct C_00a5e3c0 {
    undefined4 sub_00a5e3c0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e3c0
undefined4 C_00a5e3c0::sub_00a5e3c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e3c0 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  return uVar1;
}

struct C_00a5e590 {
    undefined4 sub_00a5e590(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e590
undefined4 C_00a5e590::sub_00a5e590(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e590 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_007161b0(param_2,param_1 + 0x98);
  return uVar1;
}

struct C_00a5e790 {
    undefined4 sub_00a5e790(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e790
undefined4 C_00a5e790::sub_00a5e790(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e790 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_007161b0(param_2,param_1 + 0x98);
  return uVar1;
}

struct C_00a5e990 {
    undefined4 sub_00a5e990(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5e990
undefined4 C_00a5e990::sub_00a5e990(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5e990 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_007161b0(param_2,param_1 + 0x98);
  return uVar1;
}

struct C_00a5eb90 {
    undefined4 sub_00a5eb90(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5eb90
undefined4 C_00a5eb90::sub_00a5eb90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5eb90 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  sub_00716170(param_2,param_1 + 0x8c);
  sub_00716170(param_2,param_1 + 0x92);
  sub_007161b0(param_2,param_1 + 0x98);
  return uVar1;
}

// @baa 0x00a5ec20
int sub_00a5ec20(void) { return 1; }

// @baa 0x00a5ec70
undefined4 sub_00a5ec70(int param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = sub_00a574b0(param_1,param_2,param_3);
  if ((iVar1 != 0) && (((param_1 == 4 || (param_1 == 0)) || (param_1 == 3)))) {
    return 1;
  }
  return 0;
}

void sub_00a57680();
// @baa 0x00a5ecb0
void sub_00a5ecb0(void) { sub_00a57680(); }

void sub_00a577a0();
// @baa 0x00a5ecc0
void sub_00a5ecc0(void) { sub_00a577a0(); }

void sub_00a57ab0();
// @baa 0x00a5ed80
void sub_00a5ed80(void) { sub_00a57ab0(); }

int sub_009e0e10(...);
// @baa 0x00a5ee20
uint UMorphWeightSequence::sub_00a5ee20(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}

// @baa 0x00a5eee0
uint UMorphWeightSequence::sub_00a5eee0(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}

struct C_00a5efd0 {
    undefined4 sub_00a5efd0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5efd0
undefined4 C_00a5efd0::sub_00a5efd0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5efd0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  return uVar1;
}

struct C_00a5f0e0 {
    undefined4 sub_00a5f0e0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5f0e0
undefined4 C_00a5f0e0::sub_00a5f0e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5f0e0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x52);
  sub_00716170(param_2,param_1 + 0x58);
  sub_00716170(param_2,param_1 + 0x5e);
  return uVar1;
}

struct C_00a5f250 {
    undefined4 sub_00a5f250(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5f250
undefined4 C_00a5f250::sub_00a5f250(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5f250 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x6a);
  sub_00716170(param_2,param_1 + 0x70);
  sub_00716170(param_2,param_1 + 0x76);
  sub_00716170(param_2,param_1 + 0x7c);
  sub_00716170(param_2,param_1 + 0x82);
  sub_00716170(param_2,param_1 + 0x88);
  return uVar1;
}

struct C_00a5f570 {
    undefined4 sub_00a5f570(undefined4);
    int sub_0073f030(int);
};

// @baa 0x00a5f570
undefined4 C_00a5f570::sub_00a5f570(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a5f570 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x6a);
  sub_00716170(param_2,param_1 + 0x70);
  sub_00716170(param_2,param_1 + 0x76);
  sub_00716170(param_2,param_1 + 0x7c);
  sub_00716170(param_2,param_1 + 0x82);
  sub_00716170(param_2,param_1 + 0x88);
  return uVar1;
}

// @baa 0x00a5fae0
undefined4 ULensFlare::sub_00a5fae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a5fb00
undefined4 ULensFlare::sub_00a5fb00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a5fb60 {
    DWORD d;
    DWORD sub_00a5fb60();
};

// @baa 0x00a5fb60
DWORD C_00a5fb60::sub_00a5fb60()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_00a5fb70 {
    DWORD d;
    DWORD sub_00a5fb70();
};

// @baa 0x00a5fb70
DWORD C_00a5fb70::sub_00a5fb70()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_00a5fb80 {
    DWORD d;
    DWORD sub_00a5fb80();
};

// @baa 0x00a5fb80
DWORD C_00a5fb80::sub_00a5fb80()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

int sub_00a5f5e0(void);
// @baa 0x00a5fb90
undefined4 ULensFlare::sub_00a5fb90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f5e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f660(void);
// @baa 0x00a5fbb0
undefined4 ULensFlare::sub_00a5fbb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f660();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f6e0(void);
// @baa 0x00a5fbd0
undefined4 ULensFlare::sub_00a5fbd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f6e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f760(void);
// @baa 0x00a5fbf0
undefined4 ULensFlare::sub_00a5fbf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f760();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f7e0(void);
// @baa 0x00a5fc10
undefined4 ULensFlare::sub_00a5fc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f7e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f860(void);
// @baa 0x00a5fc30
undefined4 ULensFlare::sub_00a5fc30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f8e0(void);
// @baa 0x00a5fc50
undefined4 ULensFlare::sub_00a5fc50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f8e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f960(void);
// @baa 0x00a5fc70
undefined4 ULensFlare::sub_00a5fc70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5f9e0(void);
// @baa 0x00a5fc90
undefined4 ULensFlare::sub_00a5fc90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5f9e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00a5fa60(void);
// @baa 0x00a5fcb0
undefined4 ULensFlare::sub_00a5fcb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a5fa60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a5fcd0
void sub_00a5fcd0(void) { sub_007249d0(); }

// @baa 0x00a5fce0
void sub_00a5fce0(void) { sub_007249d0(); }

// @baa 0x00a5fcf0
void sub_00a5fcf0(void) { sub_007249d0(); }

// @baa 0x00a5fd00
void sub_00a5fd00(void) { sub_007249d0(); }

// @baa 0x00a5fd10
void sub_00a5fd10(void) { sub_007249d0(); }

// @baa 0x00a5fd20
void sub_00a5fd20(void) { sub_007249d0(); }

// @baa 0x00a5fd30
void sub_00a5fd30(void) { sub_007249d0(); }

// @baa 0x00a5fd40
void sub_00a5fd40(void) { sub_007249d0(); }

// @baa 0x00a5fd50
void sub_00a5fd50(void) { sub_007249d0(); }

// @baa 0x00a5fd60
void sub_00a5fd60(void) { sub_007249d0(); }

// @baa 0x00a5fd70
void sub_00a5fd70(void) { sub_007249d0(); }

// @baa 0x00a5fd80
void sub_00a5fd80(void) { sub_007249d0(); }

// @baa 0x00a5fd90
void sub_00a5fd90(void) { sub_007249d0(); }

// @baa 0x00a5fda0
void sub_00a5fda0(void) { sub_007249d0(); }

// @baa 0x00a5fdb0
void sub_00a5fdb0(void) { sub_007249d0(); }

// @baa 0x00a5fdc0
void sub_00a5fdc0(void) { sub_007249d0(); }

// @baa 0x00a5fdd0
void sub_00a5fdd0(void) { sub_007249d0(); }

// @baa 0x00a5fea0
void sub_00a5fea0(void) { sub_007249d0(); }

// @baa 0x00a5feb0
void sub_00a5feb0(void) { sub_007249d0(); }

// @baa 0x00a5fec0
void sub_00a5fec0(void) { sub_007249d0(); }

// @baa 0x00a5fed0
void sub_00a5fed0(void) { sub_007249d0(); }

// @baa 0x00a5fee0
void sub_00a5fee0(void) { sub_007249d0(); }

// @baa 0x00a5fef0
void sub_00a5fef0(void) { sub_007249d0(); }

// @baa 0x00a5ff00
void sub_00a5ff00(void) { sub_007249d0(); }

// @baa 0x00a5ff10
void sub_00a5ff10(void) { sub_007249d0(); }

// @baa 0x00a5ff20
void sub_00a5ff20(void) { sub_007249d0(); }

// @baa 0x00a5fff0
void sub_00a5fff0(void) { sub_007249d0(); }

struct C_00a59a50 {
    int f0;
    int f1;
    int f2;
    int f3;
    C_00a59a50* sub_00a59a50(int a, int b, int c);
};

// @baa 0x00a59a50
C_00a59a50* C_00a59a50::sub_00a59a50(int a, int b, int c)
{
    f0 = a;
    f1 = b;
    f3 = c;
    return this;
}
