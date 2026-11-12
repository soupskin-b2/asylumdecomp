// UnSequence.cpp (part 1 of 10): 1521 functions
// Placed here by: neighbours 1279, file 134, class 87, callers 21.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int g_026c494c;
extern "C" int g_026c4950;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008a4c30();
};

// @baa 0x008a4c30
void UObjectThunk::sub_008a4c30()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c494c, g_026c4950, 0), 0, 0);
}

// @baa 0x008aa260
void USequenceObject::vf_110(int a0, int a1) {  }

// @baa 0x008aa320
void USequenceObject::vf_154(void) {  }

// @baa 0x008aa330
int sub_008aa330(int a0, int a1) { return a1; }

// @baa 0x008aa340
int sub_008aa340(int a0, int a1) { return a1; }

struct C {
    undefined4 sub_008aa350();
};

// @baa 0x008aa350
undefined4 C::sub_008aa350(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
    return 1;
  }
  return 0;
}

struct C_008aa370 {
    undefined4 sub_008aa370();
};

// @baa 0x008aa370
undefined4 C_008aa370::sub_008aa370(void)
{
    int param_1 = (int)this;

  if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
    return 1;
  }
  return 0;
}

struct C_008aa390 { C_008aa390* sub_008aa390(int a0); };

// @baa 0x008aa390
C_008aa390* C_008aa390::sub_008aa390(int a0) { return this; }

extern "C" int g_026c5510;
extern "C" int g_026c5514;
struct UObjectThunk_008aa3f0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008aa3f0();
};

// @baa 0x008aa3f0
void UObjectThunk_008aa3f0::sub_008aa3f0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5510, g_026c5514, 0), 0, 0);
}

extern "C" int g_026c492c;
extern "C" int g_026c4930;
struct UObjectThunk_008aa420 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008aa420();
};

// @baa 0x008aa420
void UObjectThunk_008aa420::sub_008aa420()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c492c, g_026c4930, 0), 0, 0);
}

// @baa 0x008aa450
int sub_008aa450(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x008aa460
void sub_008aa460(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x008aa480
void USequenceOp::vf_184(void) {  }

// @baa 0x008aa490
void USequenceOp::vf_188(void) {  }

// @baa 0x008aa4a0
int sub_008aa4a0(int a0, int a1) { return a1; }

int sub_00d1fc70(void);
int sub_00d414e0(...);
extern undefined4 g_026c57c4;
// @baa 0x008aa4b0
int sub_008aa4b0(void)
{
  if (g_026c57c4 == 0) {
    g_026c57c4 = sub_00d414e0(L"Engine");
    sub_00d1fc70();
  }
  return g_026c57c4;
}

// @baa 0x008aa4e0
int sub_008aa4e0(int a0, int a1) { return a1; }

// @baa 0x008aa4f0
int sub_008aa4f0(int a0, int a1) { return a1; }

// @baa 0x008aa500
int sub_008aa500(int a0, int a1) { return a1; }

// @baa 0x008aa510
int sub_008aa510(int a0, int a1) { return a1; }

// @baa 0x008aa520
int sub_008aa520(int a0, int a1) { return a1; }

// @baa 0x008aa530
int sub_008aa530(int a0, int a1) { return a1; }

// @baa 0x008aa540
int sub_008aa540(int a0, int a1) { return a1; }

// @baa 0x008aa550
int sub_008aa550(int a0, int a1) { return a1; }

// @baa 0x008aa560
int sub_008aa560(int a0, int a1) { return a1; }

// @baa 0x008aa570
int sub_008aa570(int a0, int a1) { return a1; }

// @baa 0x008aa580
int sub_008aa580(int a0, int a1) { return a1; }

// @baa 0x008aa590
int sub_008aa590(int a0, int a1) { return a1; }

// @baa 0x008aa5a0
int sub_008aa5a0(int a0, int a1) { return a1; }

// @baa 0x008aa5b0
int sub_008aa5b0(int a0, int a1) { return a1; }

// @baa 0x008aa5c0
int sub_008aa5c0(int a0, int a1) { return a1; }

// @baa 0x008aa5d0
int sub_008aa5d0(int a0, int a1) { return a1; }

// @baa 0x008aa5e0
int sub_008aa5e0(int a0, int a1) { return a1; }

struct C_008aa5f0 { C_008aa5f0* sub_008aa5f0(int a0); };

// @baa 0x008aa5f0
C_008aa5f0* C_008aa5f0::sub_008aa5f0(int a0) { return this; }

// @baa 0x008aa660
int sub_008aa660(int a0, int a1) { return a1; }

// @baa 0x008aa670
int sub_008aa670(int a0, int a1) { return a1; }

// @baa 0x008aa680
int sub_008aa680(int a0, int a1) { return a1; }

// @baa 0x008aa690
int sub_008aa690(int a0, int a1) { return a1; }

// @baa 0x008aa6a0
int sub_008aa6a0(int a0, int a1) { return a1; }

// @baa 0x008aa6b0
int sub_008aa6b0(int a0, int a1) { return a1; }

// @baa 0x008aa6c0
int sub_008aa6c0(int a0, int a1) { return a1; }

// @baa 0x008aa6d0
int sub_008aa6d0(int a0, int a1) { return a1; }

// @baa 0x008aa6e0
int sub_008aa6e0(int a0, int a1) { return a1; }

// @baa 0x008aa6f0
int sub_008aa6f0(int a0, int a1) { return a1; }

// @baa 0x008aa700
int sub_008aa700(int a0, int a1) { return a1; }

// @baa 0x008aa710
int sub_008aa710(int a0, int a1) { return a1; }

// @baa 0x008aa720
int sub_008aa720(int a0, int a1) { return a1; }

// @baa 0x008aa730
int sub_008aa730(int a0, int a1) { return a1; }

// @baa 0x008aa740
int sub_008aa740(int a0, int a1) { return a1; }

struct C_008aa750 { C_008aa750* sub_008aa750(int a0); };

// @baa 0x008aa750
C_008aa750* C_008aa750::sub_008aa750(int a0) { return this; }

// @baa 0x008aa7a0
int sub_008aa7a0(int a0, int a1) { return a1; }

// @baa 0x008aa7b0
int sub_008aa7b0(int a0, int a1) { return a1; }

// @baa 0x008aa7c0
int sub_008aa7c0(int a0, int a1) { return a1; }

// @baa 0x008aa7d0
int sub_008aa7d0(int a0, int a1) { return a1; }

// @baa 0x008aa7e0
int sub_008aa7e0(int a0, int a1) { return a1; }

// @baa 0x008aa7f0
int sub_008aa7f0(int a0, int a1) { return a1; }

// @baa 0x008aa800
int sub_008aa800(int a0, int a1) { return a1; }

// @baa 0x008aa810
int sub_008aa810(int a0, int a1) { return a1; }

// @baa 0x008aa820
int sub_008aa820(int a0, int a1) { return a1; }

// @baa 0x008aa830
int sub_008aa830(int a0, int a1) { return a1; }

// @baa 0x008aa840
int sub_008aa840(int a0, int a1) { return a1; }

// @baa 0x008aa850
int sub_008aa850(int a0, int a1) { return a1; }

// @baa 0x008aa860
int sub_008aa860(int a0, int a1) { return a1; }

// @baa 0x008aa870
int sub_008aa870(int a0, int a1) { return a1; }

// @baa 0x008aa880
int sub_008aa880(int a0, int a1) { return a1; }

// @baa 0x008aa890
int sub_008aa890(int a0, int a1) { return a1; }

// @baa 0x008aa8a0
int sub_008aa8a0(int a0, int a1) { return a1; }

// @baa 0x008aa8b0
int sub_008aa8b0(int a0, int a1) { return a1; }

// @baa 0x008aa8c0
int sub_008aa8c0(int a0, int a1) { return a1; }

// @baa 0x008aa8d0
int sub_008aa8d0(int a0, int a1) { return a1; }

// @baa 0x008aa8e0
int sub_008aa8e0(int a0, int a1) { return a1; }

// @baa 0x008aa8f0
int sub_008aa8f0(int a0, int a1) { return a1; }

// @baa 0x008aa900
int sub_008aa900(int a0, int a1) { return a1; }

// @baa 0x008aa910
int sub_008aa910(int a0, int a1) { return a1; }

// @baa 0x008aa920
int sub_008aa920(int a0, int a1) { return a1; }

// @baa 0x008aa930
int sub_008aa930(int a0, int a1) { return a1; }

// @baa 0x008aa940
int sub_008aa940(int a0, int a1) { return a1; }

// @baa 0x008aa950
int sub_008aa950(int a0, int a1) { return a1; }

// @baa 0x008aa960
int sub_008aa960(int a0, int a1) { return a1; }

// @baa 0x008aa970
int sub_008aa970(int a0, int a1) { return a1; }

// @baa 0x008aa980
int sub_008aa980(int a0, int a1) { return a1; }

// @baa 0x008aa990
int sub_008aa990(int a0, int a1) { return a1; }

// @baa 0x008aa9a0
int sub_008aa9a0(int a0, int a1) { return a1; }

// @baa 0x008aa9b0
int sub_008aa9b0(int a0, int a1) { return a1; }

// @baa 0x008aa9c0
int sub_008aa9c0(int a0, int a1) { return a1; }

// @baa 0x008aa9d0
int sub_008aa9d0(int a0, int a1) { return a1; }

// @baa 0x008aa9e0
int sub_008aa9e0(int a0, int a1) { return a1; }

// @baa 0x008aa9f0
int sub_008aa9f0(int a0, int a1) { return a1; }

// @baa 0x008aaa00
int sub_008aaa00(int a0, int a1) { return a1; }

// @baa 0x008aaa10
int sub_008aaa10(int a0, int a1) { return a1; }

// @baa 0x008aaa20
int sub_008aaa20(int a0, int a1) { return a1; }

// @baa 0x008aaa30
int sub_008aaa30(int a0, int a1) { return a1; }

// @baa 0x008aaa40
int sub_008aaa40(int a0, int a1) { return a1; }

// @baa 0x008aaa50
int sub_008aaa50(int a0, int a1) { return a1; }

// @baa 0x008aaa60
int sub_008aaa60(int a0, int a1) { return a1; }

// @baa 0x008aaa70
int sub_008aaa70(int a0, int a1) { return a1; }

// @baa 0x008aaa80
int sub_008aaa80(int a0, int a1) { return a1; }

// @baa 0x008aaa90
int sub_008aaa90(int a0, int a1) { return a1; }

// @baa 0x008aaaa0
int sub_008aaaa0(int a0, int a1) { return a1; }

// @baa 0x008aaab0
int sub_008aaab0(int a0, int a1) { return a1; }

// @baa 0x008aaac0
int sub_008aaac0(int a0, int a1) { return a1; }

// @baa 0x008aaad0
int sub_008aaad0(int a0, int a1) { return a1; }

// @baa 0x008aaae0
int sub_008aaae0(int a0, int a1) { return a1; }

// @baa 0x008aaaf0
int sub_008aaaf0(int a0, int a1) { return a1; }

// @baa 0x008aab00
int sub_008aab00(int a0, int a1) { return a1; }

extern "C" int g_026c5144;
extern "C" int g_026c5148;
struct UObjectThunk_008aab10 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008aab10();
};

// @baa 0x008aab10
void UObjectThunk_008aab10::sub_008aab10()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5144, g_026c5148, 0), 0, 0);
}

// @baa 0x008aab40
int sub_008aab40(int a0, int a1) { return a1; }

// @baa 0x008aab50
int sub_008aab50(int a0, int a1) { return a1; }

// @baa 0x008aab60
int sub_008aab60(int a0, int a1) { return a1; }

// @baa 0x008aab70
int sub_008aab70(int a0, int a1) { return a1; }

extern "C" int g_026c5290;
extern "C" int g_026c5294;
struct UObjectThunk_008aab80 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008aab80();
};

// @baa 0x008aab80
void UObjectThunk_008aab80::sub_008aab80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5290, g_026c5294, 0), 0, 0);
}

extern "C" int g_026c530c;
extern "C" int g_026c5310;
struct UObjectThunk_008aabb0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008aabb0();
};

// @baa 0x008aabb0
void UObjectThunk_008aabb0::sub_008aabb0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c530c, g_026c5310, 0), 0, 0);
}

// @baa 0x008aabe0
int sub_008aabe0(int a0, int a1) { return a1; }

// @baa 0x008aabf0
int sub_008aabf0(int a0, int a1) { return a1; }

// @baa 0x008aac00
int sub_008aac00(int a0, int a1) { return a1; }

// @baa 0x008aac10
int sub_008aac10(int a0, int a1) { return a1; }

// @baa 0x008aac20
int sub_008aac20(int a0, int a1) { return a1; }

// @baa 0x008aac30
int sub_008aac30(int a0, int a1) { return a1; }

// @baa 0x008aac40
int sub_008aac40(int a0, int a1) { return a1; }

// @baa 0x008aac50
int sub_008aac50(int a0, int a1) { return a1; }

// @baa 0x008aac60
int sub_008aac60(int a0, int a1) { return a1; }

// @baa 0x008aac70
int sub_008aac70(int a0, int a1) { return a1; }

// @baa 0x008aac80
int sub_008aac80(int a0, int a1) { return a1; }

// @baa 0x008aac90
int sub_008aac90(int a0, int a1) { return a1; }

// @baa 0x008aaca0
int sub_008aaca0(int a0, int a1) { return a1; }

// @baa 0x008aacb0
int sub_008aacb0(int a0, int a1) { return a1; }

// @baa 0x008aacc0
int sub_008aacc0(int a0, int a1) { return a1; }

// @baa 0x008aacd0
int sub_008aacd0(int a0, int a1) { return a1; }

// @baa 0x008aace0
int sub_008aace0(int a0, int a1) { return a1; }

// @baa 0x008aacf0
int sub_008aacf0(int a0, int a1) { return a1; }

// @baa 0x008aad00
int sub_008aad00(int a0, int a1) { return a1; }

// @baa 0x008aad10
int sub_008aad10(int a0, int a1) { return a1; }

int sub_00cea9f0(void);
int sub_00d0aa30(...);
extern undefined4 g_026c5660;
// @baa 0x008aad20
int sub_008aad20(void)
{
  if (g_026c5660 == 0) {
    g_026c5660 = sub_00d0aa30(L"Engine");
    sub_00cea9f0();
  }
  return g_026c5660;
}

// @baa 0x008aad50
int sub_008aad50(int a0, int a1) { return a1; }

// @baa 0x008aad60
int sub_008aad60(int a0, int a1) { return a1; }

// @baa 0x008aad70
int sub_008aad70(int a0, int a1) { return a1; }

// @baa 0x008aad80
int sub_008aad80(int a0, int a1) { return a1; }

// @baa 0x008aad90
int sub_008aad90(int a0, int a1) { return a1; }

// @baa 0x008aada0
int sub_008aada0(int a0, int a1) { return a1; }

// @baa 0x008aadb0
int sub_008aadb0(int a0, int a1) { return a1; }

// @baa 0x008aadc0
int sub_008aadc0(int a0, int a1) { return a1; }

// @baa 0x008aadd0
int sub_008aadd0(int a0, int a1) { return a1; }

// @baa 0x008aade0
int sub_008aade0(int a0, int a1) { return a1; }

// @baa 0x008aadf0
int sub_008aadf0(int a0, int a1) { return a1; }

// @baa 0x008aae00
int sub_008aae00(int a0, int a1) { return a1; }

// @baa 0x008aae10
int sub_008aae10(int a0, int a1) { return a1; }

// @baa 0x008aae20
int sub_008aae20(int a0, int a1) { return a1; }

// @baa 0x008aae30
int sub_008aae30(int a0, int a1) { return a1; }

// @baa 0x008aae40
int sub_008aae40(int a0, int a1) { return a1; }

// @baa 0x008aae50
int sub_008aae50(int a0, int a1) { return a1; }

// @baa 0x008aae60
int sub_008aae60(int a0, int a1) { return a1; }

int sub_00ceab50(void);
int sub_00d075e0(...);
extern undefined4 g_026c5664;
// @baa 0x008aae70
int sub_008aae70(void)
{
  if (g_026c5664 == 0) {
    g_026c5664 = sub_00d075e0(L"Engine");
    sub_00ceab50();
  }
  return g_026c5664;
}

int sub_00944490(void);
int sub_0097d7f0(...);
extern undefined4 g_026b5ef8;
// @baa 0x008aaea0
int sub_008aaea0(void)
{
  if (g_026b5ef8 == 0) {
    g_026b5ef8 = sub_0097d7f0(L"Engine");
    sub_00944490();
  }
  return g_026b5ef8;
}

// @baa 0x008aaed0
int USequence::vf_000(void) { return 1; }

// @baa 0x008aaee0
int USequenceAction::vf_000(void) { return 1; }

// @baa 0x008aaef0
int USequenceCondition::vf_000(void) { return 1; }

// @baa 0x008aaf00
int USequenceEvent::vf_000(void) { return 1; }

// @baa 0x008aaf10
int USequenceFrame::vf_000(void) { return 1; }

// @baa 0x008aaf20
int USequenceFrameWrapped::vf_000(void) { return 1; }

// @baa 0x008aaf30
IMPLEMENT_CLASS_AT(USequenceObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 39);

// @baa 0x008ab040
int USequenceObject::vf_000(void) { return 1; }

// @baa 0x008ab050
bool USequenceObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ab090
int USequenceOp::vf_000(void) { return 1; }

// @baa 0x008ab0a0
int USequenceVariable::vf_000(void) { return 1; }

// @baa 0x008ab0b0
int USeqVar_Bool::vf_000(void) { return 1; }

// @baa 0x008ab0c0
int USeqVar_External::vf_000(void) { return 1; }

// @baa 0x008ab0d0
int USeqVar_Float::vf_000(void) { return 1; }

// @baa 0x008ab0e0
int USeqVar_Group::vf_000(void) { return 1; }

// @baa 0x008ab0f0
int USeqVar_Int::vf_000(void) { return 1; }

// @baa 0x008ab100
int USeqVar_Byte::vf_000(void) { return 1; }

// @baa 0x008ab110
int USeqVar_Name::vf_000(void) { return 1; }

// @baa 0x008ab120
int USeqVar_Named::vf_000(void) { return 1; }

// @baa 0x008ab130
int USeqVar_Object::vf_000(void) { return 1; }

// @baa 0x008ab140
int USeqVar_ObjectList::vf_000(void) { return 1; }

// @baa 0x008ab150
int USeqVar_ObjectVolume::vf_000(void) { return 1; }

// @baa 0x008ab160
int USeqVar_Player::vf_000(void) { return 1; }

// @baa 0x008ab170
int USeqVar_RandomFloat::vf_000(void) { return 1; }

// @baa 0x008ab180
int USeqVar_RandomInt::vf_000(void) { return 1; }

// @baa 0x008ab190
int USeqVar_String::vf_000(void) { return 1; }

// @baa 0x008ab1a0
int USeqVar_Vector::vf_000(void) { return 1; }

// @baa 0x008ab1b0
int USeqVar_Colour::vf_000(void) { return 1; }

// @baa 0x008ab1c0
int USeqVar_Union::vf_000(void) { return 1; }

// @baa 0x008ab1d0
int USeqCond_CompareBool::vf_000(void) { return 1; }

// @baa 0x008ab1e0
int USeqCond_CompareFloat::vf_000(void) { return 1; }

// @baa 0x008ab1f0
int USeqCond_CompareInt::vf_000(void) { return 1; }

// @baa 0x008ab200
int USeqCond_CompareObject::vf_000(void) { return 1; }

// @baa 0x008ab210
int USeqCond_GetServerType::vf_000(void) { return 1; }

// @baa 0x008ab220
int USeqCond_Increment::vf_000(void) { return 1; }

// @baa 0x008ab230
int USeqCond_IncrementFloat::vf_000(void) { return 1; }

// @baa 0x008ab240
int USeqCond_IsSameTeam::vf_000(void) { return 1; }

// @baa 0x008ab250
int USeqCond_SwitchClass::vf_000(void) { return 1; }

// @baa 0x008ab260
int USeqCond_IsInCombat::vf_000(void) { return 1; }

// @baa 0x008ab270
int USeqCond_IsLoggedIn::vf_000(void) { return 1; }

// @baa 0x008ab280
int USeqCond_SwitchBase::vf_000(void) { return 1; }

// @baa 0x008ab290
int USeqCond_SwitchName::vf_000(void) { return 1; }

// @baa 0x008ab2a0
int USeqCond_SwitchObject::vf_000(void) { return 1; }

// @baa 0x008ab2b0
int USeqEvent_AISeeEnemy::vf_000(void) { return 1; }

// @baa 0x008ab2c0
int USeqEvent_Console::vf_000(void) { return 1; }

// @baa 0x008ab2d0
int USeqEvent_ConstraintBroken::vf_000(void) { return 1; }

// @baa 0x008ab2e0
int USeqEvent_Destroyed::vf_000(void) { return 1; }

// @baa 0x008ab2f0
int USeqEvent_GetInventory::vf_000(void) { return 1; }

// @baa 0x008ab300
int USeqEvent_LevelLoaded::vf_000(void) { return 1; }

// @baa 0x008ab310
int USeqEvent_LevelStartup::vf_000(void) { return 1; }

// @baa 0x008ab320
int USeqEvent_LevelBeginning::vf_000(void) { return 1; }

// @baa 0x008ab330
int USeqEvent_Mover::vf_000(void) { return 1; }

// @baa 0x008ab340
int USeqEvent_ParticleEvent::vf_000(void) { return 1; }

// @baa 0x008ab350
int USeqEvent_ProjectileLanded::vf_000(void) { return 1; }

// @baa 0x008ab360
int USeqEvent_RemoteEvent::vf_000(void) { return 1; }

// @baa 0x008ab370
int USeqEvent_RigidBodyCollision::vf_000(void) { return 1; }

// @baa 0x008ab380
int USeqEvent_SeeDeath::vf_000(void) { return 1; }

// @baa 0x008ab390
int USeqEvent_SequenceActivated::vf_000(void) { return 1; }

// @baa 0x008ab3a0
int USeqEvent_TakeDamage::vf_000(void) { return 1; }

// @baa 0x008ab3b0
int USeqEvent_Touch::vf_000(void) { return 1; }

// @baa 0x008ab3c0
int USeqEvent_Used::vf_000(void) { return 1; }

// @baa 0x008ab3d0
int USeqAct_ActivateRemoteEvent::vf_000(void) { return 1; }

// @baa 0x008ab3e0
int USeqAct_ActorFactory::vf_000(void) { return 1; }

// @baa 0x008ab3f0
int USeqAct_ActorFactoryEx::vf_000(void) { return 1; }

// @baa 0x008ab400
int USeqAct_AIMoveToActor::vf_000(void) { return 1; }

// @baa 0x008ab410
int USeqAct_ApplySoundNode::vf_000(void) { return 1; }

// @baa 0x008ab420
int USeqAct_AttachToEvent::vf_000(void) { return 1; }

// @baa 0x008ab430
int USeqAct_CauseDamage::vf_000(void) { return 1; }

// @baa 0x008ab440
int USeqAct_CauseDamageRadial::vf_000(void) { return 1; }

// @baa 0x008ab450
int USeqAct_CameraFade::vf_000(void) { return 1; }

// @baa 0x008ab460
int USeqAct_CameraLookAt::vf_000(void) { return 1; }

// @baa 0x008ab470
int USeqAct_ChangeCollision::vf_000(void) { return 1; }

// @baa 0x008ab480
int USeqAct_CommitMapChange::vf_000(void) { return 1; }

// @baa 0x008ab490
int USeqAct_Delay::vf_000(void) { return 1; }

// @baa 0x008ab4a0
int USeqAct_InterpolateColour::vf_000(void) { return 1; }

// @baa 0x008ab4b0
int USeqAct_InterpolateFloat::vf_000(void) { return 1; }

// @baa 0x008ab4c0
int USeqAct_DelaySwitch::vf_000(void) { return 1; }

// @baa 0x008ab4d0
int USeqAct_FinishSequence::vf_000(void) { return 1; }

// @baa 0x008ab4e0
int USeqAct_ForceGarbageCollection::vf_000(void) { return 1; }

// @baa 0x008ab4f0
int USeqAct_ForceMaterialMipsResident::vf_000(void) { return 1; }

// @baa 0x008ab500
int USeqAct_Gate::vf_000(void) { return 1; }

// @baa 0x008ab510
int USeqAct_GetDistance::vf_000(void) { return 1; }

// @baa 0x008ab520
int USeqAct_GetProperty::vf_000(void) { return 1; }

// @baa 0x008ab530
int USeqAct_GetVelocity::vf_000(void) { return 1; }

// @baa 0x008ab540
int USeqAct_IsInObjectList::vf_000(void) { return 1; }

// @baa 0x008ab550
int USeqAct_Latent::vf_000(void) { return 1; }

// @baa 0x008ab560
int USeqAct_LevelStreaming::vf_000(void) { return 1; }

// @baa 0x008ab570
int USeqAct_LevelStreamingBase::vf_000(void) { return 1; }

// @baa 0x008ab580
int USeqAct_LevelVisibility::vf_000(void) { return 1; }

// @baa 0x008ab590
int USeqAct_Log::vf_000(void) { return 1; }

// @baa 0x008ab5a0
int USeqAct_ModifyObjectList::vf_000(void) { return 1; }

// @baa 0x008ab5b0
int USeqAct_MultiLevelStreaming::vf_000(void) { return 1; }

// @baa 0x008ab5c0
int USeqAct_PlayCameraAnim::vf_000(void) { return 1; }

// @baa 0x008ab5d0
int USeqAct_ParticleEventGenerator::vf_000(void) { return 1; }

// @baa 0x008ab5e0
int USeqAct_PhysXSwitch::vf_000(void) { return 1; }

// @baa 0x008ab5f0
int USeqAct_PlayFaceFXAnim::vf_000(void) { return 1; }

// @baa 0x008ab600
int USeqAct_PlaySound::vf_000(void) { return 1; }

// @baa 0x008ab610
int USeqAct_Possess::vf_000(void) { return 1; }

// @baa 0x008ab620
int USeqAct_PrepareMapChange::vf_000(void) { return 1; }

// @baa 0x008ab630
int USeqAct_RandomSwitch::vf_000(void) { return 1; }

// @baa 0x008ab640
int USeqAct_RangeSwitch::vf_000(void) { return 1; }

// @baa 0x008ab650
int USeqAct_SetBlockRigidBody::vf_000(void) { return 1; }

// @baa 0x008ab660
int USeqAct_SetCameraTarget::vf_000(void) { return 1; }

// @baa 0x008ab670
int USeqAct_SetSequenceVariable::vf_000(void) { return 1; }

// @baa 0x008ab680
int USeqAct_SetBool::vf_000(void) { return 1; }

// @baa 0x008ab690
int USeqAct_SetDOFParams::vf_000(void) { return 1; }

// @baa 0x008ab6a0
int USeqAct_SetMotionBlurParams::vf_000(void) { return 1; }

// @baa 0x008ab6b0
int USeqAct_SetFloat::vf_000(void) { return 1; }

// @baa 0x008ab6c0
int USeqAct_SetInt::vf_000(void) { return 1; }

// @baa 0x008ab6d0
int USeqAct_SetMaterial::vf_000(void) { return 1; }

// @baa 0x008ab6e0
int USeqAct_SetMatInstScalarParam::vf_000(void) { return 1; }

// @baa 0x008ab6f0
int USeqAct_SetMatInstTexParam::vf_000(void) { return 1; }

// @baa 0x008ab700
int USeqAct_SetMatInstVectorParam::vf_000(void) { return 1; }

// @baa 0x008ab710
int USeqAct_GetMatInstVectorParam::vf_000(void) { return 1; }

// @baa 0x008ab720
int USeqAct_SetObject::vf_000(void) { return 1; }

// @baa 0x008ab730
int USeqAct_SetPhysics::vf_000(void) { return 1; }

// @baa 0x008ab740
int USeqAct_SetRigidBodyIgnoreVehicles::vf_000(void) { return 1; }

// @baa 0x008ab750
int USeqAct_SetString::vf_000(void) { return 1; }

// @baa 0x008ab760
int USeqAct_StreamInTextures::vf_000(void) { return 1; }

// @baa 0x008ab770
int USeqAct_Switch::vf_000(void) { return 1; }

// @baa 0x008ab780
int USeqAct_Timer::vf_000(void) { return 1; }

// @baa 0x008ab790
int USeqAct_Toggle::vf_000(void) { return 1; }

// @baa 0x008ab7a0
int USeqAct_ToggleDynamicChannel::vf_000(void) { return 1; }

// @baa 0x008ab7b0
int USeqAct_Trace::vf_000(void) { return 1; }

// @baa 0x008ab7c0
int USeqAct_WaitForLevelsVisible::vf_000(void) { return 1; }

// @baa 0x008ab7d0
int USeqAct_AddInt::vf_000(void) { return 1; }

// @baa 0x008ab7e0
int USeqAct_SubtractInt::vf_000(void) { return 1; }

// @baa 0x008ab7f0
int USeqAct_MultiplyInt::vf_000(void) { return 1; }

// @baa 0x008ab800
int USeqAct_DivideInt::vf_000(void) { return 1; }

// @baa 0x008ab810
int USeqAct_CastToInt::vf_000(void) { return 1; }

// @baa 0x008ab820
int USeqAct_AddFloat::vf_000(void) { return 1; }

// @baa 0x008ab830
int USeqAct_SubtractFloat::vf_000(void) { return 1; }

// @baa 0x008ab840
int USeqAct_MultiplyFloat::vf_000(void) { return 1; }

// @baa 0x008ab850
int USeqAct_DivideFloat::vf_000(void) { return 1; }

// @baa 0x008ab860
int USeqAct_CastToFloat::vf_000(void) { return 1; }

// @baa 0x008ab870
int USeqAct_SetClothParam::vf_000(void) { return 1; }

struct C_008ab980 {
    undefined4 sub_008ab980(int *);
};

// @baa 0x008ab980
undefined4 C_008ab980::sub_008ab980(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_008ab9a0 {
    undefined4 sub_008ab9a0(int *);
};

// @baa 0x008ab9a0
undefined4 C_008ab9a0::sub_008ab9a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  return 1;
}

// @baa 0x008aba40
void __stdcall sub_008aba40(int a0, int a1) {  }

// @baa 0x008aba70
void USequenceObject::vf_12c(void) {  }

// @baa 0x008abab0
UBOOL USequenceOp::UpdateOp(FLOAT DeltaTime) { return TRUE; }

// @baa 0x008abac0
void USequenceOp::Activated(void) {  }

// @baa 0x008abaf0
void USequence::vf_1ac() {  }

// @baa 0x008abb60
void USequence::sub_008abb60(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) ^ (*(uint *)(param_1 + 0xfc) ^ param_2) & 1;
  return;
}

// @baa 0x008abea0
char* USeqVar_Union::vf_168(void) { return (char*)this + 140; }

// @baa 0x008abeb0
char* USeqVar_Union::vf_16c(void) { return (char*)this + 144; }

// @baa 0x008abec0
char* USeqVar_Union::vf_170(void) { return (char*)this + 148; }

// @baa 0x008abed0
char* USeqVar_Union::vf_174(void) { return (char*)this + 152; }

// @baa 0x008abee0
char* USeqVar_Union::vf_180(void) { return (char*)this + 156; }

// @baa 0x008abef0
int USeqVar_Union::vf_188(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    return 0;
  }
  return param_1 + 0xa8;
}

// @baa 0x008abf10
ANSICHAR * USeqVar_Union::vf_190() { return (char*)this + 172; }

// @baa 0x008abf20
int USeqVar_Union::vf_198(int a0) { return 0; }

// @baa 0x008abf30
char* USeqVar_Byte::vf_16c(void) { return (char*)this + 128; }

// @baa 0x008abf80
void USeqVar_ObjectList::vf_12c(void) {  }

// @baa 0x008abf90
UBOOL USeqAct_SetDOFParams::UpdateOp(FLOAT DeltaTime) { return FALSE; }

// @baa 0x008abfa0
UBOOL USeqAct_SetMotionBlurParams::UpdateOp(FLOAT DeltaTime) { return FALSE; }

// @baa 0x008abfb0
void USeqAct_SetMotionBlurParams::Activated(void) {  }

// @baa 0x008abfd0
void USeqAct_ActorFactory::vf_178(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfffffffd;
  return;
}

// @baa 0x008ac010
void USeqAct_Delay::vf_178(void) {  }

// @baa 0x008ac020
void USeqAct_StreamInTextures::Activated(void) {  }

// @baa 0x008ac030
void USeqAct_StreamInTextures::vf_178(void) {  }

// @baa 0x008ac040
void USeqAct_AIMoveToActor::Activated(void) {  }

struct V_008ac5e0 {
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
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void g(int);
    void sub_008ac5e0();
};

// @baa 0x008ac5e0
void V_008ac5e0::sub_008ac5e0() { g(1); }

struct C_008ac910 { int a, b, c; C_008ac910(); };

// @baa 0x008ac910
C_008ac910::C_008ac910() : a(0), b(0), c(0) {}

struct C_008ac920 { int sub_008ac920(void); };

// @baa 0x008ac920
int C_008ac920::sub_008ac920(void) { return *(int*)((char*)this + 4); }

struct C_008ac930 { int a, b, c; C_008ac930(); };

// @baa 0x008ac930
C_008ac930::C_008ac930() : a(0), b(0), c(0) {}

struct C_008ac940 { int a, b, c; C_008ac940(); };

// @baa 0x008ac940
C_008ac940::C_008ac940() : a(0), b(0), c(0) {}

struct C_008ac950 { int sub_008ac950(void); };

// @baa 0x008ac950
int C_008ac950::sub_008ac950(void) { return *(int*)((char*)this + 4); }

struct C_008ac960 { int sub_008ac960(void); };

// @baa 0x008ac960
int C_008ac960::sub_008ac960(void) { return *(int*)((char*)this + 4); }

struct C_008ac970 { int sub_008ac970(void); };

// @baa 0x008ac970
int C_008ac970::sub_008ac970(void) { return *(int*)((char*)this + 4); }

struct C_008ac980 { int sub_008ac980(void); };

// @baa 0x008ac980
int C_008ac980::sub_008ac980(void) { return *(int*)((char*)this + 4); }

struct C_008ac990 { int a, b, c; C_008ac990(); };

// @baa 0x008ac990
C_008ac990::C_008ac990() : a(0), b(0), c(0) {}

struct C_008ac9a0 { int sub_008ac9a0(void); };

// @baa 0x008ac9a0
int C_008ac9a0::sub_008ac9a0(void) { return *(int*)((char*)this + 4); }

struct C_008aca20 { int a, b, c; C_008aca20(); };

// @baa 0x008aca20
C_008aca20::C_008aca20() : a(0), b(0), c(0) {}

struct C_008aca30 { int sub_008aca30(void); };

// @baa 0x008aca30
int C_008aca30::sub_008aca30(void) { return *(int*)((char*)this + 4); }

struct C_008aca40 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008aca40(INT Index);
};

// @baa 0x008aca40
UBOOL C_008aca40::sub_008aca40(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008aca60 { int sub_008aca60(void); };

// @baa 0x008aca60
int C_008aca60::sub_008aca60(void) { return *(int*)((char*)this + 4); }

struct C_008aca70 { int a, b, c; C_008aca70(); };

// @baa 0x008aca70
C_008aca70::C_008aca70() : a(0), b(0), c(0) {}

struct C_008aca80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008aca80(INT Index);
};

// @baa 0x008aca80
UBOOL C_008aca80::sub_008aca80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008acaa0 { int sub_008acaa0(void); };

// @baa 0x008acaa0
int C_008acaa0::sub_008acaa0(void) { return *(int*)((char*)this + 4); }

struct C_008acab0 { int sub_008acab0(void); };

// @baa 0x008acab0
int C_008acab0::sub_008acab0(void) { return *(int*)((char*)this + 4); }

struct C_008acac0 { int sub_008acac0(void); };

// @baa 0x008acac0
int C_008acac0::sub_008acac0(void) { return *(int*)((char*)this + 4); }

struct C_008acad0 { int a, b, c; C_008acad0(); };

// @baa 0x008acad0
C_008acad0::C_008acad0() : a(0), b(0), c(0) {}

struct C_008acae0 { int sub_008acae0(void); };

// @baa 0x008acae0
int C_008acae0::sub_008acae0(void) { return *(int*)((char*)this + 4); }

struct C_008acaf0 { int a, b, c; C_008acaf0(); };

// @baa 0x008acaf0
C_008acaf0::C_008acaf0() : a(0), b(0), c(0) {}

struct C_008acb00 { int sub_008acb00(void); };

// @baa 0x008acb00
int C_008acb00::sub_008acb00(void) { return *(int*)((char*)this + 4); }

struct C_008acb10 { int a, b, c; C_008acb10(); };

// @baa 0x008acb10
C_008acb10::C_008acb10() : a(0), b(0), c(0) {}

struct C_008acb20 { int sub_008acb20(void); };

// @baa 0x008acb20
int C_008acb20::sub_008acb20(void) { return *(int*)((char*)this + 4); }

struct C_008acb30 { int a, b, c; C_008acb30(); };

// @baa 0x008acb30
C_008acb30::C_008acb30() : a(0), b(0), c(0) {}

struct C_008acb40 { int sub_008acb40(void); };

// @baa 0x008acb40
int C_008acb40::sub_008acb40(void) { return *(int*)((char*)this + 4); }

struct C_008b18f0 {
    void sub_008b18f0(int, int);
};

int sub_00627f00(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x008b18f0
void C_008b18f0::sub_008b18f0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 0xc,*param_1 + param_3 * 0xc,0xc);
  }
  return;
}

struct C_008b1b20 {
    void sub_008b1b20(int, int);
};

// @baa 0x008b1b20
void C_008b1b20::sub_008b1b20(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

typedef uint size_t;

struct C_008b1ba0 {
    int sub_008b1ba0(int);
    int sub_008acf30(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x008b1ba0
int C_008b1ba0::sub_008b1ba0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b1ba0 *)(this))->sub_008acf30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct S_008b1be0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008b1be0(INT Index) const;
};

// @baa 0x008b1be0
const DWORD* S_008b1be0::sub_008b1be0(INT Index) const
{
    return &Items(Index);
}

struct C_008b1c30{
int sub_008b1c30(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x008b1c30
int C_008b1c30::sub_008b1c30(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b1d40{
int sub_008b1d40(undefined4*);
};

// @baa 0x008b1d40
int C_008b1d40::sub_008b1d40(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b1e30{
int sub_008b1e30(undefined4*);
};

// @baa 0x008b1e30
int C_008b1e30::sub_008b1e30(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b1e90{
int sub_008b1e90(undefined4*);
};

// @baa 0x008b1e90
int C_008b1e90::sub_008b1e90(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b1ef0{
int sub_008b1ef0(undefined4*);
};

// @baa 0x008b1ef0
int C_008b1ef0::sub_008b1ef0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_008b1f80{
int sub_008b1f80(undefined4*);
};

// @baa 0x008b1f80
int C_008b1f80::sub_008b1f80(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E { BYTE Bytes[80]; };

struct S_008b2030 {
    TArray<E> Items; // 0x00
    E* sub_008b2030(INT Index);
};

// @baa 0x008b2030
E* S_008b2030::sub_008b2030(INT Index)
{
    return &Items(Index);
}

struct C_008b2080 {
    int sub_008b2080(int);
    int sub_008ad280(int);
};

// @baa 0x008b2080
int C_008b2080::sub_008b2080(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b2080 *)(this))->sub_008ad280(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct S_008b20c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_008b20c0(INT Index);
};

// @baa 0x008b20c0
QWORD* S_008b20c0::sub_008b20c0(INT Index)
{
    return &Items(Index);
}

struct S_008b2110 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_008b2110(INT Index) const;
};

// @baa 0x008b2110
const QWORD* S_008b2110::sub_008b2110(INT Index) const
{
    return &Items(Index);
}

struct S_008b21c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b21c0(INT Index);
};

// @baa 0x008b21c0
DWORD* S_008b21c0::sub_008b21c0(INT Index)
{
    return &Items(Index);
}

struct S_008b2210 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008b2210(INT Index) const;
};

// @baa 0x008b2210
const DWORD* S_008b2210::sub_008b2210(INT Index) const
{
    return &Items(Index);
}

struct T_008b2990;
// @baa 0x008b2990
template INT TArray<T_008b2990*>::RemoveItem(T_008b2990* const&);

struct C_008b3260 {
    void sub_008b3260(int, int);
};

// @baa 0x008b3260
void C_008b3260::sub_008b3260(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

struct S_008b32e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b32e0(INT Index);
};

// @baa 0x008b32e0
DWORD* S_008b32e0::sub_008b32e0(INT Index)
{
    return &Items(Index);
}

struct S_008b3390 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3390(INT Index);
};

// @baa 0x008b3390
DWORD* S_008b3390::sub_008b3390(INT Index)
{
    return &Items(Index);
}

struct S_008b33e0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008b33e0(INT Index) const;
};

// @baa 0x008b33e0
const DWORD* S_008b33e0::sub_008b33e0(INT Index) const
{
    return &Items(Index);
}

struct S_008b3590 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3590(INT Index);
};

// @baa 0x008b3590
DWORD* S_008b3590::sub_008b3590(INT Index)
{
    return &Items(Index);
}

struct S_008b3640 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3640(INT Index);
};

// @baa 0x008b3640
DWORD* S_008b3640::sub_008b3640(INT Index)
{
    return &Items(Index);
}

struct S_008b3750 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3750(INT Index);
};

// @baa 0x008b3750
DWORD* S_008b3750::sub_008b3750(INT Index)
{
    return &Items(Index);
}

struct S_008b37a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b37a0(INT Index);
};

// @baa 0x008b37a0
DWORD* S_008b37a0::sub_008b37a0(INT Index)
{
    return &Items(Index);
}

struct S_008b37f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b37f0(INT Index);
};

// @baa 0x008b37f0
DWORD* S_008b37f0::sub_008b37f0(INT Index)
{
    return &Items(Index);
}

struct S_008b3840 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b3840(INT Index);
};

// @baa 0x008b3840
DWORD* S_008b3840::sub_008b3840(INT Index)
{
    return &Items(Index);
}

struct C_008b38f0 {
    int sub_008b38f0(int);
};

// @baa 0x008b38f0
int C_008b38f0::sub_008b38f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3900
void __stdcall sub_008b3900(int a0, int a1) {  }

struct C_008b3a00 {
    int sub_008b3a00(int);
};

// @baa 0x008b3a00
int C_008b3a00::sub_008b3a00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x008b3a10
void __stdcall sub_008b3a10(int a0, int a1) {  }

// @baa 0x008b3a20
void __stdcall sub_008b3a20(int a0, int a1) {  }

// @baa 0x008b3a30
void __stdcall sub_008b3a30(int a0, int a1) {  }

// @baa 0x008b3a40
void __stdcall sub_008b3a40(int a0, int a1) {  }

struct C_008b3bc0 {
    int sub_008b3bc0(int);
};

// @baa 0x008b3bc0
int C_008b3bc0::sub_008b3bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008b3bd0 {
    int sub_008b3bd0(int);
};

// @baa 0x008b3bd0
int C_008b3bd0::sub_008b3bd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008b3be0
void __stdcall sub_008b3be0(int a0, int a1) {  }

struct C_008b3bf0 {
    int sub_008b3bf0(int);
};

// @baa 0x008b3bf0
int C_008b3bf0::sub_008b3bf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3c00
void __stdcall sub_008b3c00(int a0, int a1) {  }

struct C_008b3c10 {
    int sub_008b3c10(int);
};

// @baa 0x008b3c10
int C_008b3c10::sub_008b3c10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008b3c20
void __stdcall sub_008b3c20(int a0, int a1) {  }

struct C_008b3c30 {
    int sub_008b3c30(int);
};

// @baa 0x008b3c30
int C_008b3c30::sub_008b3c30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x008b3c40
void __stdcall sub_008b3c40(int a0, int a1) {  }

struct C_008b3c50 {
    int sub_008b3c50(int);
};

// @baa 0x008b3c50
int C_008b3c50::sub_008b3c50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x008b3c60
void __stdcall sub_008b3c60(int a0, int a1) {  }

// @baa 0x008b3c70
void __stdcall sub_008b3c70(int a0, int a1) {  }

// @baa 0x008b3c80
void __stdcall sub_008b3c80(int a0, int a1) {  }

// @baa 0x008b3c90
void __stdcall sub_008b3c90(int a0, int a1) {  }

struct C_008b3ca0 {
    int sub_008b3ca0(int);
};

// @baa 0x008b3ca0
int C_008b3ca0::sub_008b3ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_008b3cb0 {
    int sub_008b3cb0(int);
};

// @baa 0x008b3cb0
int C_008b3cb0::sub_008b3cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3cc0
void __stdcall sub_008b3cc0(int a0, int a1) {  }

struct C_008b3cd0 {
    int sub_008b3cd0(int);
};

// @baa 0x008b3cd0
int C_008b3cd0::sub_008b3cd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3ce0
void __stdcall sub_008b3ce0(int a0, int a1) {  }

struct C_008b3cf0 {
    int sub_008b3cf0(int);
};

// @baa 0x008b3cf0
int C_008b3cf0::sub_008b3cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3d00
void __stdcall sub_008b3d00(int a0, int a1) {  }

struct C_008b3d70 {
    int sub_008b3d70(int);
};

// @baa 0x008b3d70
int C_008b3d70::sub_008b3d70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3d80
void __stdcall sub_008b3d80(int a0, int a1) {  }

struct C_008b3d90 {
    int sub_008b3d90(int);
};

// @baa 0x008b3d90
int C_008b3d90::sub_008b3d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3da0
void __stdcall sub_008b3da0(int a0, int a1) {  }

struct C_008b3db0 {
    int sub_008b3db0(int);
};

// @baa 0x008b3db0
int C_008b3db0::sub_008b3db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3dc0
void __stdcall sub_008b3dc0(int a0, int a1) {  }

// @baa 0x008b3dd0
void __stdcall sub_008b3dd0(int a0, int a1) {  }

struct C_008b3de0 {
    int sub_008b3de0(int);
};

// @baa 0x008b3de0
int C_008b3de0::sub_008b3de0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3df0
void __stdcall sub_008b3df0(int a0, int a1) {  }

struct C_008b3e00 {
    int sub_008b3e00(int);
};

// @baa 0x008b3e00
int C_008b3e00::sub_008b3e00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3e10
void __stdcall sub_008b3e10(int a0, int a1) {  }

struct C_008b3e20 {
    int sub_008b3e20(int);
};

// @baa 0x008b3e20
int C_008b3e20::sub_008b3e20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3e30
void __stdcall sub_008b3e30(int a0, int a1) {  }

struct C_008b3ea0 {
    int sub_008b3ea0(int);
};

// @baa 0x008b3ea0
int C_008b3ea0::sub_008b3ea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3eb0
void __stdcall sub_008b3eb0(int a0, int a1) {  }

struct C_008b3ec0 {
    int sub_008b3ec0(int);
};

// @baa 0x008b3ec0
int C_008b3ec0::sub_008b3ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3ed0
void __stdcall sub_008b3ed0(int a0, int a1) {  }

struct C_008b3ee0 {
    int sub_008b3ee0(int);
};

// @baa 0x008b3ee0
int C_008b3ee0::sub_008b3ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3ef0
void __stdcall sub_008b3ef0(int a0, int a1) {  }

struct C_008b3f00 {
    int sub_008b3f00(int);
};

// @baa 0x008b3f00
int C_008b3f00::sub_008b3f00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008b3f10
void __stdcall sub_008b3f10(int a0, int a1) {  }

int sub_005413d0(...);
// @baa 0x008b3f50
void sub_008b3f50(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_008b3f80 {
    int sub_008b3f80(int);
};

// @baa 0x008b3f80
int C_008b3f80::sub_008b3f80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008b3fc0
void sub_008b3fc0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_008b3ff0 {
    int sub_008b3ff0(int);
};

// @baa 0x008b3ff0
int C_008b3ff0::sub_008b3ff0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008b4000 {
    int sub_008b4000(int);
};

// @baa 0x008b4000
int C_008b4000::sub_008b4000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x008bbc30
// @baa 0x008bbcc0
void USequenceObject::vf_10c(void) {  }

// @baa 0x008bbcd0
void USequenceObject::vf_114(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x008bbce0
void USequenceObject::vf_118(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x008bbcf0
void USequenceObject::vf_11c(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x008bbd00
void USequenceObject::vf_124(void) {  }

// @baa 0x008bbd10
void USequenceObject::vf_128(void) {  }

// @baa 0x008bbd20
void USequenceObject::vf_130(void) {  }

// @baa 0x008bbd30
void USequenceObject::vf_144(int a0, int a1, int a2) {  }

// @baa 0x008bbd40
uint USequenceObject::vf_14c(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x6c) & 1;
}

// @baa 0x008bbd50
int USequenceObject::vf_150(void) { return 0; }

// @baa 0x008bbd60
void USequenceObject::vf_158(void) {  }

// @baa 0x008bbd70
void USequenceObject::vf_15c(void) {  }

// @baa 0x008bbd80
void USequenceObject::vf_160(int a0) {  }

// @baa 0x008bbd90
void USequenceObject::vf_164(int a0) {  }

// @baa 0x008bbda0
FString USequenceObject::vf_148()
{
    return TEXT("UnrealEd.SequenceObjectHelper");
}

// @baa 0x008bbdd0
int sub_005c7a20(void);
extern undefined * g_01f5e418;
// @baa 0x008bbdf0
undefined4 * UObject::sub_008bbdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5e418);
  return param_1;
}

// @baa 0x008bbe10
IMPLEMENT_CLASS_AT(USequenceFrame, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 37);

// @baa 0x008bbeb0
extern undefined * g_01f5e5c0;
// @baa 0x008bbee0
undefined4 * UObject::sub_008bbee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5e5c0);
  return param_1;
}

extern undefined * g_01f5e728;
// @baa 0x008bbf00
undefined4 * UObject::sub_008bbf00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5e728);
  return param_1;
}

// @baa 0x008bbf20
IMPLEMENT_CLASS_AT(USequenceFrameWrapped, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 38);

// @baa 0x008bbf80
// @baa 0x008bc1f0
IMPLEMENT_CLASS_AT(USequenceVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 41);

// @baa 0x008bc250
char * USequenceVariable::vf_168() { return 0; }

// @baa 0x008bc260
char * USequenceVariable::vf_16c() { return 0; }

// @baa 0x008bc270
char * USequenceVariable::vf_170() { return 0; }

// @baa 0x008bc280
char * USequenceVariable::vf_174() { return 0; }

// @baa 0x008bc290
ANSICHAR* USequenceVariable::vf_178() { return 0; }

// @baa 0x008bc2a0
int USequenceVariable::vf_17c(void) { return 0; }

// @baa 0x008bc2b0
char * USequenceVariable::vf_180() { return 0; }

// @baa 0x008bc2c0
ANSICHAR* USequenceVariable::vf_184() { return 0; }

// @baa 0x008bc2d0
int USequenceVariable::vf_188(int a0) { return 0; }

// @baa 0x008bc2e0
ANSICHAR* USequenceVariable::vf_18c() { return 0; }

// @baa 0x008bc2f0
ANSICHAR* USequenceVariable::vf_190() { return 0; }

// @baa 0x008bc300
int USequenceVariable::vf_198(int a0) { return 0; }

// @baa 0x008bc310
void __stdcall sub_008bc310(int a0, int a1, int a2) {  }

// @baa 0x008bc320
void USequenceVariable::vf_1a0(int a0, int a1, int a2) {  }

// @baa 0x008bc330
void USequenceVariable::vf_1a4(int a0, int a1) {  }

// @baa 0x008bc340
void USequenceVariable::vf_1a8(int a0, int a1) {  }

// @baa 0x008bc350
FString USequenceVariable::vf_194()
{
    return TEXT("Undefined");
}

// @baa 0x008bc380
extern undefined * g_01f5e890;
// @baa 0x008bc3b0
undefined4 * UObject::sub_008bc3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5e890);
  return param_1;
}

extern undefined * g_01f5ea50;
// @baa 0x008bc3d0
undefined4 * UObject::sub_008bc3d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5ea50);
  return param_1;
}

// @baa 0x008bc3f0
char* USeqVar_Bool::vf_170(void) { return (char*)this + 128; }

// @baa 0x008bc450
IMPLEMENT_CLASS_AT(USeqVar_Bool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 44);

// @baa 0x008bc4e0
extern undefined * g_01f5ec00;
// @baa 0x008bc510
undefined4 * UObject::sub_008bc510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5ec00);
  return param_1;
}

// @baa 0x008bc530
IMPLEMENT_CLASS_AT(USeqVar_Byte, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 49);

// @baa 0x008bc590
extern undefined * g_01f5edb0;
// @baa 0x008bc5c0
undefined4 * UObject::sub_008bc5c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5edb0);
  return param_1;
}

// @baa 0x008bc5e0
ANSICHAR * USeqVar_Colour::vf_18c() { return (char*)this + 128; }

// @baa 0x008bc6d0
IMPLEMENT_CLASS_AT(USeqVar_Colour, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 60);

// @baa 0x008bc730
extern undefined * g_01f5ef60;
// @baa 0x008bc760
undefined4 * UObject::sub_008bc760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5ef60);
  return param_1;
}

// @baa 0x008bc780
int USeqVar_External::vf_150(void) { return 1; }

// @baa 0x008bc790
IMPLEMENT_CLASS_AT(USeqVar_External, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 45);

// @baa 0x008bc800
// @baa 0x008bc830
IMPLEMENT_CLASS_AT(USeqVar_Float, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 46);

// @baa 0x008bc890
char* USeqVar_Float::vf_174(void) { return (char*)this + 128; }

// @baa 0x008bc980
extern undefined * g_01f5f110;
// @baa 0x008bc9b0
undefined4 * UObject::sub_008bc9b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f110);
  return param_1;
}

extern undefined * g_01f5f2c0;
// @baa 0x008bc9d0
undefined4 * UObject::sub_008bc9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f2c0);
  return param_1;
}

// @baa 0x008bca30
int USeqVar_RandomFloat::vf_198(int a0) { return 0; }

// @baa 0x008bca40
IMPLEMENT_CLASS_AT(USeqVar_RandomFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 56);

// @baa 0x008bcaa0
// @baa 0x008bcad0
IMPLEMENT_CLASS_AT(USeqVar_Int, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 48);

// @baa 0x008bcb30
char* USeqVar_Int::vf_168(void) { return (char*)this + 128; }

// @baa 0x008bcc20
extern undefined * g_01f5f470;
// @baa 0x008bcc50
undefined4 * UObject::sub_008bcc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f470);
  return param_1;
}

extern undefined * g_01f5f620;
// @baa 0x008bcc70
undefined4 * UObject::sub_008bcc70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f620);
  return param_1;
}

struct C_008bcc90 {
    int * sub_008bcc90();
};

extern "C" __declspec(dllimport) int rand(...);
// @baa 0x008bcc90
int * C_008bcc90::sub_008bcc90(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = rand();
  *(int *)(param_1 + 0x80) =
       iVar1 % ((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) + 1) +
       *(int *)(param_1 + 0x84);
  return (int *)(param_1 + 0x80);
}

// @baa 0x008bccc0
int USeqVar_RandomInt::vf_198(int a0) { return 0; }

// @baa 0x008bccd0
IMPLEMENT_CLASS_AT(USeqVar_RandomInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 57);

// @baa 0x008bcd30
extern undefined * g_01f5f7d0;
// @baa 0x008bcd60
undefined4 * UObject::sub_008bcd60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f7d0);
  return param_1;
}

// @baa 0x008bcd80
ANSICHAR * USeqVar_Name::vf_184() { return (char*)this + 128; }

// @baa 0x008bcde0
IMPLEMENT_CLASS_AT(USeqVar_Name, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 50);

// @baa 0x008bce70
extern undefined * g_01f5f980;
// @baa 0x008bcea0
undefined4 * UObject::sub_008bcea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5f980);
  return param_1;
}

// @baa 0x008bcec0
int USeqVar_Named::vf_150(void) { return 1; }

// @baa 0x008bced0
IMPLEMENT_CLASS_AT(USeqVar_Named, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 51);

// @baa 0x008bcf30
extern undefined * g_01f5fb30;
// @baa 0x008bcf60
undefined4 * UObject::sub_008bcf60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5fb30);
  return param_1;
}

// @baa 0x008bcf80
char* USeqVar_String::vf_180(void) { return (char*)this + 128; }

// @baa 0x008bcfe0
IMPLEMENT_CLASS_AT(USeqVar_String, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 58);

// @baa 0x008bd0a0
extern undefined * g_01f5fce0;
// @baa 0x008bd0d0
undefined4 * UObject::sub_008bd0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f5fce0);
  return param_1;
}

// @baa 0x008bd0f0
ANSICHAR * USeqVar_Vector::vf_178() { return (char*)this + 128; }

// @baa 0x008bd100
IMPLEMENT_CLASS_AT(USeqVar_Vector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 59);

// @baa 0x008bd2b0
struct T_008c1240;
// @baa 0x008c1240
template INT TArray<T_008c1240*>::RemoveItem(T_008c1240* const&);

struct T_008c17a0;
// @baa 0x008c17a0
template INT TArray<T_008c17a0*>::RemoveItem(T_008c17a0* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_008c1820 { void* Data; int Num; int Max; void sub_008c1820(); };

// @baa 0x008c1820
void C_008c1820::sub_008c1820() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c18c0 { void* Data; int Num; int Max; void sub_008c18c0(); };

// @baa 0x008c18c0
void C_008c18c0::sub_008c18c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c1a40 { void* Data; int Num; int Max; void sub_008c1a40(); };

// @baa 0x008c1a40
void C_008c1a40::sub_008c1a40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c1bc0 { void* Data; int Num; int Max; void sub_008c1bc0(); };

// @baa 0x008c1bc0
void C_008c1bc0::sub_008c1bc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_008c1d00;
// @baa 0x008c1d00
template INT TArray<T_008c1d00*>::RemoveItem(T_008c1d00* const&);

struct C_008c1d80 { C_008c1d80* sub_008c1d80(void); };

// @baa 0x008c1d80
C_008c1d80* C_008c1d80::sub_008c1d80(void) { return this; }

struct C_008c1d90 { void* Data; int Num; int Max; void sub_008c1d90(); };

// @baa 0x008c1d90
void C_008c1d90::sub_008c1d90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c1f40 { C_008c1f40* sub_008c1f40(void); };

// @baa 0x008c1f40
C_008c1f40* C_008c1f40::sub_008c1f40(void) { return this; }

struct C_008c1f50 { void* Data; int Num; int Max; void sub_008c1f50(); };

// @baa 0x008c1f50
void C_008c1f50::sub_008c1f50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2090 { void* Data; int Num; int Max; void sub_008c2090(); };

// @baa 0x008c2090
void C_008c2090::sub_008c2090() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c20f0 { void* Data; int Num; int Max; void sub_008c20f0(); };

// @baa 0x008c20f0
void C_008c20f0::sub_008c20f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2190 { void* Data; int Num; int Max; void sub_008c2190(); };

// @baa 0x008c2190
void C_008c2190::sub_008c2190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c21f0 { void* Data; int Num; int Max; void sub_008c21f0(); };

// @baa 0x008c21f0
void C_008c21f0::sub_008c21f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c25e0 { void* Data; int Num; int Max; void sub_008c25e0(); };

// @baa 0x008c25e0
void C_008c25e0::sub_008c25e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2640 { void* Data; int Num; int Max; void sub_008c2640(); };

// @baa 0x008c2640
void C_008c2640::sub_008c2640() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c26a0 { void* Data; int Num; int Max; void sub_008c26a0(); };

// @baa 0x008c26a0
void C_008c26a0::sub_008c26a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2740 { void sub_008c2740(void); };

// @baa 0x008c2740
void C_008c2740::sub_008c2740(void) { *(int*)((char*)this + 4) = 0; }

struct C_008c2750 { void* Data; int Num; int Max; void sub_008c2750(); };

// @baa 0x008c2750
void C_008c2750::sub_008c2750() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c27b0 { void* Data; int Num; int Max; void sub_008c27b0(); };

// @baa 0x008c27b0
void C_008c27b0::sub_008c27b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2810 { void* Data; int Num; int Max; void sub_008c2810(); };

// @baa 0x008c2810
void C_008c2810::sub_008c2810() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008c2870 { void* Data; int Num; int Max; void sub_008c2870(); };

// @baa 0x008c2870
void C_008c2870::sub_008c2870() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x008c7f70
// @baa 0x008c7f90
// @baa 0x008c7fb0
void sub_008c18c0();
// @baa 0x008c7fd0
void sub_008c7fd0(void) { sub_008c18c0(); }

void sub_008c1a40();
// @baa 0x008c7fe0
void sub_008c7fe0(void) { sub_008c1a40(); }

void sub_008c1bc0();
// @baa 0x008c7ff0
void sub_008c7ff0(void) { sub_008c1bc0(); }

void sub_008c20f0();
// @baa 0x008c8030
void sub_008c8030(void) { sub_008c20f0(); }

void sub_008c2190();
// @baa 0x008c8040
void sub_008c8040(void) { sub_008c2190(); }

void sub_008c21f0();
// @baa 0x008c8050
void sub_008c8050(void) { sub_008c21f0(); }

void sub_008c2250();
// @baa 0x008c8060
void sub_008c8060(void) { sub_008c2250(); }

void sub_008c22b0();
// @baa 0x008c8070
void sub_008c8070(void) { sub_008c22b0(); }

void sub_008c2310();
// @baa 0x008c8080
void sub_008c8080(void) { sub_008c2310(); }

// @baa 0x008c8090
// @baa 0x008c80b0
// @baa 0x008c80d0
// @baa 0x008c80f0
// @baa 0x008c8160
// @baa 0x008c8180
// @baa 0x008c81d0
// @baa 0x008c8230
// @baa 0x008c8280
// @baa 0x008c82e0
// @baa 0x008c8300
// @baa 0x008c8320
IMPLEMENT_CLASS_AT(USeqVar_Object, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 52);

// @baa 0x008c8390
int USeqVar_Object::vf_188(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    return 0;
  }
  return param_1 + 0x80;
}

// @baa 0x008c83b0
void USeqVar_Object::vf_12c(void) { *(int*)((char*)this + 128) = 0; }

// @baa 0x008c8570
extern undefined * g_01f600c8;
// @baa 0x008c85a0
undefined4 * UObject::sub_008c85a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f600c8);
  return param_1;
}

extern undefined * g_01f60280;
// @baa 0x008c85c0
undefined4 * UObject::sub_008c85c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f60280);
  return param_1;
}

// @baa 0x008c85e0
IMPLEMENT_CLASS_AT(USeqVar_Group, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 47);

// @baa 0x008c8650
extern undefined * g_01f60430;
// @baa 0x008c8680
undefined4 * UObject::sub_008c8680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f60430);
  return param_1;
}

// @baa 0x008c86a0
int USeqVar_ObjectList::vf_198(int a0) { return 0; }

// @baa 0x008c86b0
IMPLEMENT_CLASS_AT(USeqVar_ObjectList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 53);

// @baa 0x008c8720
extern undefined * g_01f605e0;
// @baa 0x008c8750
undefined4 * UObject::sub_008c8750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f605e0);
  return param_1;
}

// @baa 0x008c8770
int USeqVar_ObjectVolume::vf_198(int a0) { return 0; }

// @baa 0x008c8780
IMPLEMENT_CLASS_AT(USeqVar_ObjectVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 54);

// @baa 0x008c8800
extern undefined * g_01f60790;
// @baa 0x008c8830
undefined4 * UObject::sub_008c8830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f60790);
  return param_1;
}

// @baa 0x008c8850
int USeqVar_Player::vf_198(int a0) { return 0; }

// @baa 0x008c8860
IMPLEMENT_CLASS_AT(USeqVar_Player, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 55);

// @baa 0x008c8920
// @baa 0x008c8950
extern undefined * g_01f60968;
// @baa 0x008c8970
undefined4 * UObject::sub_008c8970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f60968);
  return param_1;
}

// @baa 0x008c8990
IMPLEMENT_CLASS_AT(USeqVar_Union, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 61);

// @baa 0x008c8a10
// @baa 0x008c8a40
// @baa 0x008c8a90
// @baa 0x008c8b50
// @baa 0x008c8c10
// @baa 0x008c8cd0
// @baa 0x008c8d90
// @baa 0x008c8e50
// @baa 0x008c8f10
// @baa 0x008c8fd0
// @baa 0x008c9090
// @baa 0x008c9150
// @baa 0x008c9210
// @baa 0x008c92d0
// @baa 0x008c9390
// @baa 0x008c9450
// @baa 0x008c9510
// @baa 0x008c95d0
struct C_008c9c70 {
    int sub_008c9c70(int, undefined4);
};

int sub_008c9690(...);
// @baa 0x008c9c70
int C_008c9c70::sub_008c9c70(int param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  int iVar1;
  
  iVar1 = sub_008c9690(&param_2,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return iVar1 + param_2;
  }
  return 0;
}

struct C_008c9ca0 {
    int sub_008c9ca0(int, undefined4);
};

// @baa 0x008c9ca0
int C_008c9ca0::sub_008c9ca0(int param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  int iVar1;
  
  iVar1 = sub_008c9690(&param_2,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return iVar1 + param_2;
  }
  return 0;
}

struct C_008c9cd0 {
    int sub_008c9cd0(int, undefined4);
};

// @baa 0x008c9cd0
int C_008c9cd0::sub_008c9cd0(int param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  int iVar1;
  
  iVar1 = sub_008c9690(&param_2,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return iVar1 + param_2;
  }
  return 0;
}

struct C_view {
    int sub_008c0480(int);
};

int sub_008cc3b0(...);
// @baa 0x008cc470
void USeqAct_LevelStreaming::Activated(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = sub_008cc3b0(param_1 + 0xe8,*(undefined4 *)(param_1 + 0xec),
                       *(undefined4 *)(param_1 + 0xf0));
  ((C_view *)(this))->sub_008c0480(uVar1);
  return;
}

// @baa 0x008cfdc0
// @baa 0x008cfde0
// @baa 0x008cfe00
// @baa 0x008cfe20
// @baa 0x008cfe40
// @baa 0x008cfe60
// @baa 0x008cfe80
// @baa 0x008cff90
bool USequenceFrame::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008cffd0
IMPLEMENT_CLASS_AT(USequenceOp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 40);

// @baa 0x008d00e0
bool USequenceOp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d0120
// @baa 0x008d0230
bool USequenceVariable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d0270
// @baa 0x008d0330
// @baa 0x008d03f0
// @baa 0x008d04b0
// @baa 0x008d0570
// @baa 0x008d0630
int sub_008d1890(void);
// @baa 0x008d1cf0
void USeqAct_Latent::Activated(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  sub_008d1890();
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  }
  return;
}

int sub_008c8cd0(...);
int sub_008d0120(void);
extern undefined4 g_026b5ae0;
// @baa 0x008d3130
int sub_008d3130(void)
{
  if (g_026b5ae0 == 0) {
    g_026b5ae0 = sub_008c8cd0(L"Engine");
    sub_008d0120();
  }
  return g_026b5ae0;
}

// @baa 0x008d3160
// @baa 0x008d3270
bool USequenceFrameWrapped::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d32b0
// @baa 0x008d33c0
bool USeqVar_Bool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3400
// @baa 0x008d3510
bool USeqVar_External::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3550
// @baa 0x008d3660
bool USeqVar_Float::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d36a0
// @baa 0x008d37b0
bool USeqVar_Int::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d37f0
// @baa 0x008d3900
bool USeqVar_Byte::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3940
// @baa 0x008d3a50
bool USeqVar_Name::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3a90
// @baa 0x008d3ba0
bool USeqVar_Named::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3be0
// @baa 0x008d3cf0
bool USeqVar_Object::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3d30
// @baa 0x008d3e40
bool USeqVar_String::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3e80
// @baa 0x008d3f90
bool USeqVar_Vector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d3fd0
// @baa 0x008d40e0
bool USeqVar_Colour::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d4120
// @baa 0x008d4230
bool USeqVar_Union::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_008d2610(...);
int sub_008d26d0(void);
extern undefined4 g_026b5a98;
// @baa 0x008d5280
int sub_008d5280(void)
{
  if (g_026b5a98 == 0) {
    g_026b5a98 = sub_008d2610(L"Engine");
    sub_008d26d0();
  }
  return g_026b5a98;
}

int sub_008d2820(...);
int sub_008d28e0(void);
extern undefined4 g_026b5a9c;
// @baa 0x008d52b0
int sub_008d52b0(void)
{
  if (g_026b5a9c == 0) {
    g_026b5a9c = sub_008d2820(L"Engine");
    sub_008d28e0();
  }
  return g_026b5a9c;
}

int sub_008d2c40(...);
int sub_008d2d00(void);
extern undefined4 g_026b5aa4;
// @baa 0x008d52e0
int sub_008d52e0(void)
{
  if (g_026b5aa4 == 0) {
    g_026b5aa4 = sub_008d2c40(L"Engine");
    sub_008d2d00();
  }
  return g_026b5aa4;
}

int sub_008d2a30(...);
int sub_008d2af0(void);
extern undefined4 g_026b5aa0;
// @baa 0x008d5310
int sub_008d5310(void)
{
  if (g_026b5aa0 == 0) {
    g_026b5aa0 = sub_008d2a30(L"Engine");
    sub_008d2af0();
  }
  return g_026b5aa0;
}

void sub_008d4a20();
// @baa 0x008d5a20
void sub_008d5a20(void) { sub_008d4a20(); }

int sub_008c8d90(...);
int sub_008d32b0(void);
extern undefined4 g_026b5ae4;
// @baa 0x008d5a30
int sub_008d5a30(void)
{
  if (g_026b5ae4 == 0) {
    g_026b5ae4 = sub_008c8d90(L"Engine");
    sub_008d32b0();
  }
  return g_026b5ae4;
}

int sub_008c9090(...);
int sub_008d37f0(void);
extern undefined4 g_026b5af8;
// @baa 0x008d5a60
int sub_008d5a60(void)
{
  if (g_026b5af8 == 0) {
    g_026b5af8 = sub_008c9090(L"Engine");
    sub_008d37f0();
  }
  return g_026b5af8;
}

int sub_008c95d0(...);
int sub_008d3fd0(void);
extern undefined4 g_026b5b24;
// @baa 0x008d5a90
int sub_008d5a90(void)
{
  if (g_026b5b24 == 0) {
    g_026b5b24 = sub_008c95d0(L"Engine");
    sub_008d3fd0();
  }
  return g_026b5b24;
}

int sub_008c8e50(...);
int sub_008d3400(void);
extern undefined4 g_026b5ae8;
// @baa 0x008d5ac0
int sub_008d5ac0(void)
{
  if (g_026b5ae8 == 0) {
    g_026b5ae8 = sub_008c8e50(L"Engine");
    sub_008d3400();
  }
  return g_026b5ae8;
}

int sub_008c8f10(...);
int sub_008d3550(void);
extern undefined4 g_026b5aec;
// @baa 0x008d5af0
int sub_008d5af0(void)
{
  if (g_026b5aec == 0) {
    g_026b5aec = sub_008c8f10(L"Engine");
    sub_008d3550();
  }
  return g_026b5aec;
}

int sub_008c8fd0(...);
int sub_008d36a0(void);
extern undefined4 g_026b5af4;
// @baa 0x008d5b20
int sub_008d5b20(void)
{
  if (g_026b5af4 == 0) {
    g_026b5af4 = sub_008c8fd0(L"Engine");
    sub_008d36a0();
  }
  return g_026b5af4;
}

int sub_008c9150(...);
int sub_008d3940(void);
extern undefined4 g_026b5afc;
// @baa 0x008d5b50
int sub_008d5b50(void)
{
  if (g_026b5afc == 0) {
    g_026b5afc = sub_008c9150(L"Engine");
    sub_008d3940();
  }
  return g_026b5afc;
}

int sub_008c9210(...);
int sub_008d3a90(void);
extern undefined4 g_026b5b00;
// @baa 0x008d5b80
int sub_008d5b80(void)
{
  if (g_026b5b00 == 0) {
    g_026b5b00 = sub_008c9210(L"Engine");
    sub_008d3a90();
  }
  return g_026b5b00;
}

int sub_008d0330(...);
int sub_008d3be0(void);
extern undefined4 g_026b5b04;
// @baa 0x008d5bb0
int sub_008d5bb0(void)
{
  if (g_026b5b04 == 0) {
    g_026b5b04 = sub_008d0330(L"Engine");
    sub_008d3be0();
  }
  return g_026b5b04;
}

int sub_008c9450(...);
int sub_008d3d30(void);
extern undefined4 g_026b5b1c;
// @baa 0x008d5be0
int sub_008d5be0(void)
{
  if (g_026b5b1c == 0) {
    g_026b5b1c = sub_008c9450(L"Engine");
    sub_008d3d30();
  }
  return g_026b5b1c;
}

int sub_008d0630(...);
int sub_008d4120(void);
extern undefined4 g_026b5b28;
// @baa 0x008d5c10
int sub_008d5c10(void)
{
  if (g_026b5b28 == 0) {
    g_026b5b28 = sub_008d0630(L"Engine");
    sub_008d4120();
  }
  return g_026b5b28;
}

int sub_008c9510(...);
int sub_008d3e80(void);
extern undefined4 g_026b5b20;
// @baa 0x008d5c40
int sub_008d5c40(void)
{
  if (g_026b5b20 == 0) {
    g_026b5b20 = sub_008c9510(L"Engine");
    sub_008d3e80();
  }
  return g_026b5b20;
}

// @baa 0x008d5c70
// @baa 0x008d5d80
bool USeqVar_Group::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d5dc0
// @baa 0x008d5ed0
bool USeqVar_ObjectList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d5f10
// @baa 0x008d6020
bool USeqVar_ObjectVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d6060
// @baa 0x008d6170
bool USeqVar_Player::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d61b0
// @baa 0x008d62c0
bool USeqVar_RandomFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008d6300
// @baa 0x008d6410
bool USeqVar_RandomInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_008dc1d0 { C_008dc1d0* sub_008dc1d0(void); };

// @baa 0x008dc1d0
C_008dc1d0* C_008dc1d0::sub_008dc1d0(void) { return this; }

// @baa 0x008e2130
// @baa 0x008e21d0
void USequenceOp::vf_17c(void) {  }

// @baa 0x008e21e0
void USequenceOp::vf_194(int a0, int a1) {  }

// @baa 0x008e21f0
extern undefined * g_01f628b8;
// @baa 0x008e2220
undefined4 * UObject::sub_008e2220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f628b8);
  return param_1;
}

extern undefined * g_01f62a50;
// @baa 0x008e2240
undefined4 * UObject::sub_008e2240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f62a50);
  return param_1;
}

// @baa 0x008e2260
void USequence::vf_140(void) {  }

// @baa 0x008e22c0
INT USequence::vf_1bc() { return 0; }

// @baa 0x008e22d0
int USequence::vf_150(void) { return 1; }

// @baa 0x008e2500
IMPLEMENT_CLASS_AT(USequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 33);

// @baa 0x008e25b0
// @baa 0x008e25e0
IMPLEMENT_CLASS_AT(USequenceAction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 34);

// @baa 0x008e2650
void USequenceAction::vf_198(int a0) {  }

// @baa 0x008e2660
extern undefined * g_01f62c18;
// @baa 0x008e2690
undefined4 * UObject::sub_008e2690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f62c18);
  return param_1;
}

extern undefined * g_01f62db8;
// @baa 0x008e26b0
undefined4 * UObject::sub_008e26b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f62db8);
  return param_1;
}

// @baa 0x008e26d0
IMPLEMENT_CLASS_AT(USeqAct_ActivateRemoteEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 100);

// @baa 0x008e2730
extern undefined * g_01f62f58;
// @baa 0x008e2760
undefined4 * UObject::sub_008e2760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f62f58);
  return param_1;
}

// @baa 0x008e2780
IMPLEMENT_CLASS_AT(USeqAct_ApplySoundNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 104);

// @baa 0x008e27e0
extern undefined * g_01f630f8;
// @baa 0x008e2810
undefined4 * UObject::sub_008e2810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f630f8);
  return param_1;
}

// @baa 0x008e2830
IMPLEMENT_CLASS_AT(USeqAct_AttachToEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 105);

// @baa 0x008e2890
extern undefined * g_01f63298;
// @baa 0x008e28c0
undefined4 * UObject::sub_008e28c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63298);
  return param_1;
}

// @baa 0x008e28e0
IMPLEMENT_CLASS_AT(USeqAct_CameraFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 108);

// @baa 0x008e2950
extern undefined * g_01f63438;
// @baa 0x008e2980
undefined4 * UObject::sub_008e2980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63438);
  return param_1;
}

// @baa 0x008e29a0
IMPLEMENT_CLASS_AT(USeqAct_CameraLookAt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 109);

// @baa 0x008e2a10
extern undefined * g_01f635d8;
// @baa 0x008e2a40
undefined4 * UObject::sub_008e2a40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f635d8);
  return param_1;
}

// @baa 0x008e2a60
IMPLEMENT_CLASS_AT(USeqAct_CauseDamage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 106);

// @baa 0x008e2ac0
extern undefined * g_01f63778;
// @baa 0x008e2af0
undefined4 * UObject::sub_008e2af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63778);
  return param_1;
}

// @baa 0x008e2b10
IMPLEMENT_CLASS_AT(USeqAct_CauseDamageRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 107);

// @baa 0x008e2b70
extern undefined * g_01f63918;
// @baa 0x008e2ba0
undefined4 * UObject::sub_008e2ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63918);
  return param_1;
}

// @baa 0x008e2bc0
IMPLEMENT_CLASS_AT(USeqAct_ChangeCollision, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 110);

// @baa 0x008e2c20
extern undefined * g_01f63ab8;
// @baa 0x008e2c50
undefined4 * UObject::sub_008e2c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63ab8);
  return param_1;
}

// @baa 0x008e2c70
IMPLEMENT_CLASS_AT(USeqAct_CommitMapChange, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 111);

// @baa 0x008e2cd0
extern undefined * g_01f63c58;
// @baa 0x008e2d00
undefined4 * UObject::sub_008e2d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63c58);
  return param_1;
}

// @baa 0x008e2d20
IMPLEMENT_CLASS_AT(USeqAct_FinishSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 116);

// @baa 0x008e2d90
extern undefined * g_01f63df8;
// @baa 0x008e2dc0
undefined4 * UObject::sub_008e2dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63df8);
  return param_1;
}

// @baa 0x008e2f90
IMPLEMENT_CLASS_AT(USeqAct_Gate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 119);

// @baa 0x008e2ff0
extern undefined * g_01f63f98;
// @baa 0x008e3020
undefined4 * UObject::sub_008e3020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f63f98);
  return param_1;
}

// @baa 0x008e3040
IMPLEMENT_CLASS_AT(USeqAct_GetDistance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 120);

// @baa 0x008e30a0
extern undefined * g_01f64138;
// @baa 0x008e30d0
undefined4 * UObject::sub_008e30d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64138);
  return param_1;
}

// @baa 0x008e30f0
IMPLEMENT_CLASS_AT(USeqAct_GetMatInstVectorParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 154);

// @baa 0x008e3150
extern undefined * g_01f642d8;
// @baa 0x008e3180
undefined4 * UObject::sub_008e3180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f642d8);
  return param_1;
}

// @baa 0x008e31a0
IMPLEMENT_CLASS_AT(USeqAct_GetProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 121);

// @baa 0x008e3200
extern undefined * g_01f64478;
// @baa 0x008e3230
undefined4 * UObject::sub_008e3230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64478);
  return param_1;
}

// @baa 0x008e3250
IMPLEMENT_CLASS_AT(USeqAct_GetVelocity, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 122);

// @baa 0x008e32b0
extern undefined * g_01f64618;
// @baa 0x008e32e0
undefined4 * UObject::sub_008e32e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64618);
  return param_1;
}

// @baa 0x008e3300
IMPLEMENT_CLASS_AT(USeqAct_IsInObjectList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 123);

// @baa 0x008e3360
// @baa 0x008e3390
IMPLEMENT_CLASS_AT(USeqAct_Latent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 124);

// @baa 0x008e3400
extern undefined * g_01f647b8;
// @baa 0x008e3430
undefined4 * UObject::sub_008e3430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f647b8);
  return param_1;
}

// @baa 0x008e3450
IMPLEMENT_CLASS_AT(USeqAct_ActorFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 101);

// @baa 0x008e34f0
extern undefined * g_01f64958;
// @baa 0x008e3520
undefined4 * UObject::sub_008e3520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64958);
  return param_1;
}

extern undefined * g_01f64b00;
// @baa 0x008e3540
undefined4 * UObject::sub_008e3540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64b00);
  return param_1;
}

// @baa 0x008e3560
IMPLEMENT_CLASS_AT(USeqAct_ActorFactoryEx, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 102);

// @baa 0x008e35c0
extern undefined * g_01f64ca8;
// @baa 0x008e35f0
undefined4 * UObject::sub_008e35f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64ca8);
  return param_1;
}

// @baa 0x008e3610
IMPLEMENT_CLASS_AT(USeqAct_AIMoveToActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 103);

// @baa 0x008e3670
extern undefined * g_01f64e48;
// @baa 0x008e36a0
undefined4 * UObject::sub_008e36a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64e48);
  return param_1;
}

// @baa 0x008e36c0
IMPLEMENT_CLASS_AT(USeqAct_Delay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 112);

// @baa 0x008e3720
extern undefined * g_01f64fe8;
// @baa 0x008e3750
undefined4 * UObject::sub_008e3750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f64fe8);
  return param_1;
}

// @baa 0x008e3770
void USeqAct_DelaySwitch::vf_178(void) {  }

// @baa 0x008e3bd0
IMPLEMENT_CLASS_AT(USeqAct_DelaySwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 115);

// @baa 0x008e3c30
extern undefined * g_01f651c0;
// @baa 0x008e3c60
undefined4 * UObject::sub_008e3c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f651c0);
  return param_1;
}

// @baa 0x008e3c80
IMPLEMENT_CLASS_AT(USeqAct_ForceGarbageCollection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 117);

// @baa 0x008e3ce0
extern undefined * g_01f65360;
// @baa 0x008e3d10
undefined4 * UObject::sub_008e3d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65360);
  return param_1;
}

// @baa 0x008e3d30
IMPLEMENT_CLASS_AT(USeqAct_ForceMaterialMipsResident, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 118);

// @baa 0x008e3da0
extern undefined * g_01f65500;
// @baa 0x008e3dd0
undefined4 * UObject::sub_008e3dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65500);
  return param_1;
}

// @baa 0x008e3df0
IMPLEMENT_CLASS_AT(USeqAct_InterpolateColour, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 113);

// @baa 0x008e3e70
extern undefined * g_01f656a0;
// @baa 0x008e3ea0
undefined4 * UObject::sub_008e3ea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f656a0);
  return param_1;
}

// @baa 0x008e3ec0
IMPLEMENT_CLASS_AT(USeqAct_InterpolateFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 114);

// @baa 0x008e3f40
// @baa 0x008e3f70
IMPLEMENT_CLASS_AT(USeqAct_LevelStreamingBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 126);

// @baa 0x008e3fd0
extern undefined * g_01f65840;
// @baa 0x008e4000
undefined4 * UObject::sub_008e4000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65840);
  return param_1;
}

extern undefined * g_01f659e0;
// @baa 0x008e4020
undefined4 * UObject::sub_008e4020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f659e0);
  return param_1;
}

// @baa 0x008e4040
IMPLEMENT_CLASS_AT(USeqAct_LevelStreaming, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 125);

// @baa 0x008e40a0
extern undefined * g_01f65b88;
// @baa 0x008e40d0
undefined4 * UObject::sub_008e40d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65b88);
  return param_1;
}

// @baa 0x008e40f0
IMPLEMENT_CLASS_AT(USeqAct_MultiLevelStreaming, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 130);

// @baa 0x008e4160
extern undefined * g_01f65d30;
// @baa 0x008e4190
undefined4 * UObject::sub_008e4190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65d30);
  return param_1;
}

// @baa 0x008e41b0
IMPLEMENT_CLASS_AT(USeqAct_LevelVisibility, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 127);

// @baa 0x008e4210
extern undefined * g_01f65ed8;
// @baa 0x008e4240
undefined4 * UObject::sub_008e4240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f65ed8);
  return param_1;
}

// @baa 0x008e4260
IMPLEMENT_CLASS_AT(USeqAct_PlayCameraAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 131);

// @baa 0x008e42c0
extern undefined * g_01f66078;
// @baa 0x008e42f0
undefined4 * UObject::sub_008e42f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66078);
  return param_1;
}

// @baa 0x008e4310
IMPLEMENT_CLASS_AT(USeqAct_PlaySound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 137);

// @baa 0x008e4390
extern undefined * g_01f66218;
// @baa 0x008e43c0
undefined4 * UObject::sub_008e43c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66218);
  return param_1;
}

// @baa 0x008e43e0
IMPLEMENT_CLASS_AT(USeqAct_PrepareMapChange, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 139);

// @baa 0x008e4450
extern undefined * g_01f663c0;
// @baa 0x008e4480
undefined4 * UObject::sub_008e4480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f663c0);
  return param_1;
}

// @baa 0x008e44a0
IMPLEMENT_CLASS_AT(USeqAct_SetDOFParams, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 146);

// @baa 0x008e4500
extern undefined * g_01f66560;
// @baa 0x008e4530
undefined4 * UObject::sub_008e4530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66560);
  return param_1;
}

// @baa 0x008e4550
IMPLEMENT_CLASS_AT(USeqAct_SetMotionBlurParams, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 147);

// @baa 0x008e45b0
extern undefined * g_01f66700;
// @baa 0x008e45e0
undefined4 * UObject::sub_008e45e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66700);
  return param_1;
}

// @baa 0x008e4600
IMPLEMENT_CLASS_AT(USeqAct_StreamInTextures, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 159);

// @baa 0x008e4660
extern undefined * g_01f668a0;
// @baa 0x008e4690
undefined4 * UObject::sub_008e4690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f668a0);
  return param_1;
}

// @baa 0x008e46b0
IMPLEMENT_CLASS_AT(USeqAct_WaitForLevelsVisible, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 165);

// @baa 0x008e4720
extern undefined * g_01f66a40;
// @baa 0x008e4750
undefined4 * UObject::sub_008e4750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66a40);
  return param_1;
}

// @baa 0x008e4770
IMPLEMENT_CLASS_AT(USeqAct_Log, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 128);

// @baa 0x008e47d0
extern undefined * g_01f66be0;
// @baa 0x008e4800
undefined4 * UObject::sub_008e4800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66be0);
  return param_1;
}

// @baa 0x008e4820
IMPLEMENT_CLASS_AT(USeqAct_ParticleEventGenerator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 132);

// @baa 0x008e4890
extern undefined * g_01f66d80;
// @baa 0x008e48c0
undefined4 * UObject::sub_008e48c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66d80);
  return param_1;
}

// @baa 0x008e49e0
IMPLEMENT_CLASS_AT(USeqAct_PhysXSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 134);

// @baa 0x008e4a40
extern undefined * g_01f66f20;
// @baa 0x008e4a70
undefined4 * UObject::sub_008e4a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f66f20);
  return param_1;
}

// @baa 0x008e4a90
IMPLEMENT_CLASS_AT(USeqAct_PlayFaceFXAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 136);

// @baa 0x008e4b10
extern undefined * g_01f670c0;
// @baa 0x008e4b40
undefined4 * UObject::sub_008e4b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f670c0);
  return param_1;
}

// @baa 0x008e4b60
IMPLEMENT_CLASS_AT(USeqAct_Possess, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 138);

// @baa 0x008e4bc0
extern undefined * g_01f67260;
// @baa 0x008e4bf0
undefined4 * UObject::sub_008e4bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67260);
  return param_1;
}

// @baa 0x008e4c10
void USeqAct_RangeSwitch::vf_178(void) {  }

// @baa 0x008e4c20
int USeqAct_RangeSwitch::sub_008e4c20(void) { return *(int*)((char*)this + 4); }

// @baa 0x008e5040
IMPLEMENT_CLASS_AT(USeqAct_RangeSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 141);

// @baa 0x008e50b0
extern undefined * g_01f67418;
// @baa 0x008e50e0
undefined4 * UObject::sub_008e50e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67418);
  return param_1;
}

// @baa 0x008e5100
IMPLEMENT_CLASS_AT(USeqAct_SetBlockRigidBody, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 142);

// @baa 0x008e5160
extern undefined * g_01f675b8;
// @baa 0x008e5190
undefined4 * UObject::sub_008e5190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f675b8);
  return param_1;
}

// @baa 0x008e51b0
IMPLEMENT_CLASS_AT(USeqAct_SetCameraTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 143);

// @baa 0x008e5210
extern undefined * g_01f67758;
// @baa 0x008e5240
undefined4 * UObject::sub_008e5240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67758);
  return param_1;
}

// @baa 0x008e5260
IMPLEMENT_CLASS_AT(USeqAct_SetClothParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 178);

// @baa 0x008e52c0
extern undefined * g_01f678f8;
// @baa 0x008e52f0
undefined4 * UObject::sub_008e52f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f678f8);
  return param_1;
}

// @baa 0x008e5310
IMPLEMENT_CLASS_AT(USeqAct_SetMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 150);

// @baa 0x008e5370
extern undefined * g_01f67a98;
// @baa 0x008e53a0
undefined4 * UObject::sub_008e53a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67a98);
  return param_1;
}

// @baa 0x008e53c0
IMPLEMENT_CLASS_AT(USeqAct_SetMatInstScalarParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 151);

// @baa 0x008e5420
extern undefined * g_01f67c38;
// @baa 0x008e5450
undefined4 * UObject::sub_008e5450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67c38);
  return param_1;
}

// @baa 0x008e5470
IMPLEMENT_CLASS_AT(USeqAct_SetMatInstTexParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 152);

// @baa 0x008e54d0
extern undefined * g_01f67dd8;
// @baa 0x008e5500
undefined4 * UObject::sub_008e5500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67dd8);
  return param_1;
}

// @baa 0x008e5520
IMPLEMENT_CLASS_AT(USeqAct_SetMatInstVectorParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 153);

// @baa 0x008e5580
extern undefined * g_01f67f78;
// @baa 0x008e55b0
undefined4 * UObject::sub_008e55b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f67f78);
  return param_1;
}

// @baa 0x008e55d0
IMPLEMENT_CLASS_AT(USeqAct_SetPhysics, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 156);

// @baa 0x008e5630
extern undefined * g_01f68118;
// @baa 0x008e5660
undefined4 * UObject::sub_008e5660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68118);
  return param_1;
}

// @baa 0x008e5680
IMPLEMENT_CLASS_AT(USeqAct_SetRigidBodyIgnoreVehicles, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 157);

// @baa 0x008e56e0
// @baa 0x008e5710
IMPLEMENT_CLASS_AT(USeqAct_SetSequenceVariable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 144);

extern undefined * g_01f682b8;
// @baa 0x008e5770
undefined4 * UObject::sub_008e5770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f682b8);
  return param_1;
}

// @baa 0x008e5790
extern undefined * g_01f68458;
// @baa 0x008e57c0
undefined4 * UObject::sub_008e57c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68458);
  return param_1;
}

// @baa 0x008e5850
IMPLEMENT_CLASS_AT(USeqAct_AddFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 171);

// @baa 0x008e58b0
extern undefined * g_01f685f8;
// @baa 0x008e58e0
undefined4 * UObject::sub_008e58e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f685f8);
  return param_1;
}

// @baa 0x008e5970
IMPLEMENT_CLASS_AT(USeqAct_AddInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 166);

// @baa 0x008e59d0
extern undefined * g_01f68798;
// @baa 0x008e5a00
undefined4 * UObject::sub_008e5a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68798);
  return param_1;
}

// @baa 0x008e5a70
IMPLEMENT_CLASS_AT(USeqAct_CastToFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 175);

// @baa 0x008e5ad0
extern undefined * g_01f68938;
// @baa 0x008e5b00
undefined4 * UObject::sub_008e5b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68938);
  return param_1;
}

// @baa 0x008e5b90
IMPLEMENT_CLASS_AT(USeqAct_CastToInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 170);

// @baa 0x008e5bf0
extern undefined * g_01f68ad8;
// @baa 0x008e5c20
undefined4 * UObject::sub_008e5c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68ad8);
  return param_1;
}

// @baa 0x008e5cd0
IMPLEMENT_CLASS_AT(USeqAct_DivideFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 174);

// @baa 0x008e5d30
extern undefined * g_01f68c78;
// @baa 0x008e5d60
undefined4 * UObject::sub_008e5d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68c78);
  return param_1;
}

// @baa 0x008e5e10
IMPLEMENT_CLASS_AT(USeqAct_DivideInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 169);

// @baa 0x008e5e70
extern undefined * g_01f68e18;
// @baa 0x008e5ea0
undefined4 * UObject::sub_008e5ea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68e18);
  return param_1;
}

// @baa 0x008e5ec0
IMPLEMENT_CLASS_AT(USeqAct_ModifyObjectList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 129);

// @baa 0x008e5f20
extern undefined * g_01f68fb8;
// @baa 0x008e5f50
undefined4 * UObject::sub_008e5f50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f68fb8);
  return param_1;
}

// @baa 0x008e5fe0
IMPLEMENT_CLASS_AT(USeqAct_MultiplyFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 173);

// @baa 0x008e6040
extern undefined * g_01f69158;
// @baa 0x008e6070
undefined4 * UObject::sub_008e6070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69158);
  return param_1;
}

// @baa 0x008e6100
IMPLEMENT_CLASS_AT(USeqAct_MultiplyInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 168);

// @baa 0x008e6160
extern undefined * g_01f692f8;
// @baa 0x008e6190
undefined4 * UObject::sub_008e6190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f692f8);
  return param_1;
}

// @baa 0x008e61b0
IMPLEMENT_CLASS_AT(USeqAct_SetBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 145);

// @baa 0x008e6210
extern undefined * g_01f69498;
// @baa 0x008e6240
undefined4 * UObject::sub_008e6240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69498);
  return param_1;
}

// @baa 0x008e6270
IMPLEMENT_CLASS_AT(USeqAct_SetFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 148);

// @baa 0x008e62d0
extern undefined * g_01f69638;
// @baa 0x008e6300
undefined4 * UObject::sub_008e6300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69638);
  return param_1;
}

// @baa 0x008e6320
void USeqAct_SetInt::Activated(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd8);
  return;
}

// @baa 0x008e6330
IMPLEMENT_CLASS_AT(USeqAct_SetInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 149);

// @baa 0x008e6390
extern undefined * g_01f697d8;
// @baa 0x008e63c0
undefined4 * UObject::sub_008e63c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f697d8);
  return param_1;
}

// @baa 0x008e63e0
IMPLEMENT_CLASS_AT(USeqAct_SetObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 155);

// @baa 0x008e6440
extern undefined * g_01f69978;
// @baa 0x008e6470
undefined4 * UObject::sub_008e6470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69978);
  return param_1;
}

// @baa 0x008e64b0
IMPLEMENT_CLASS_AT(USeqAct_SetString, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 158);

// @baa 0x008e6530
extern undefined * g_01f69b18;
// @baa 0x008e6560
undefined4 * UObject::sub_008e6560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69b18);
  return param_1;
}

// @baa 0x008e65f0
IMPLEMENT_CLASS_AT(USeqAct_SubtractFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 172);

// @baa 0x008e6650
extern undefined * g_01f69cb8;
// @baa 0x008e6680
undefined4 * UObject::sub_008e6680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69cb8);
  return param_1;
}

// @baa 0x008e6710
IMPLEMENT_CLASS_AT(USeqAct_SubtractInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 167);

// @baa 0x008e6770
// @baa 0x008e67a0
IMPLEMENT_CLASS_AT(USeqAct_Switch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 160);

// @baa 0x008e6810
void USeqAct_Switch::vf_178(void) {  }

// @baa 0x008e6c50
extern undefined * g_01f69e58;
// @baa 0x008e6c80
undefined4 * UObject::sub_008e6c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69e58);
  return param_1;
}

extern undefined * g_01f69ff8;
// @baa 0x008e6ca0
undefined4 * UObject::sub_008e6ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f69ff8);
  return param_1;
}

// @baa 0x008e6cc0
IMPLEMENT_CLASS_AT(USeqAct_RandomSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 140);

// @baa 0x008e6d30
extern undefined * g_01f6a198;
// @baa 0x008e6d60
undefined4 * UObject::sub_008e6d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a198);
  return param_1;
}

// @baa 0x008e6e60
IMPLEMENT_CLASS_AT(USeqAct_Timer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 161);

// @baa 0x008e6ec0
extern undefined * g_01f6a338;
// @baa 0x008e6ef0
undefined4 * UObject::sub_008e6ef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a338);
  return param_1;
}

// @baa 0x008e6f10
IMPLEMENT_CLASS_AT(USeqAct_Toggle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 162);

// @baa 0x008e6f70
extern undefined * g_01f6a4d8;
// @baa 0x008e6fa0
undefined4 * UObject::sub_008e6fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a4d8);
  return param_1;
}

// @baa 0x008e6fc0
IMPLEMENT_CLASS_AT(USeqAct_ToggleDynamicChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 163);

// @baa 0x008e7020
extern undefined * g_01f6a678;
// @baa 0x008e7050
undefined4 * UObject::sub_008e7050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a678);
  return param_1;
}

// @baa 0x008e7070
void USeqAct_Trace::vf_178(void) {  }

// @baa 0x008e7080
IMPLEMENT_CLASS_AT(USeqAct_Trace, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 164);

// @baa 0x008e70e0
// @baa 0x008e7110
IMPLEMENT_CLASS_AT(USequenceCondition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 35);

extern undefined * g_01f6a818;
// @baa 0x008e7170
undefined4 * UObject::sub_008e7170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a818);
  return param_1;
}

// @baa 0x008e7190
extern undefined * g_01f6a9b0;
// @baa 0x008e71c0
undefined4 * UObject::sub_008e71c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6a9b0);
  return param_1;
}

// @baa 0x008e71e0
IMPLEMENT_CLASS_AT(USeqCond_CompareBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 64);

// @baa 0x008e7240
extern undefined * g_01f6ab48;
// @baa 0x008e7270
undefined4 * UObject::sub_008e7270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6ab48);
  return param_1;
}

// @baa 0x008e73f0
IMPLEMENT_CLASS_AT(USeqCond_CompareFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 65);

// @baa 0x008e7450
extern undefined * g_01f6ace0;
// @baa 0x008e7480
undefined4 * UObject::sub_008e7480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6ace0);
  return param_1;
}

// @baa 0x008e75e0
IMPLEMENT_CLASS_AT(USeqCond_CompareInt, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 66);

// @baa 0x008e7640
extern undefined * g_01f6ae78;
// @baa 0x008e7670
undefined4 * UObject::sub_008e7670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6ae78);
  return param_1;
}

// @baa 0x008e7690
IMPLEMENT_CLASS_AT(USeqCond_CompareObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 67);

// @baa 0x008e76f0
extern undefined * g_01f6b010;
// @baa 0x008e7720
undefined4 * UObject::sub_008e7720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b010);
  return param_1;
}

// @baa 0x008e7740
IMPLEMENT_CLASS_AT(USeqCond_GetServerType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 68);

// @baa 0x008e77a0
extern undefined * g_01f6b1a8;
// @baa 0x008e77d0
undefined4 * UObject::sub_008e77d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b1a8);
  return param_1;
}

// @baa 0x008e7940
IMPLEMENT_CLASS_AT(USeqCond_Increment, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 69);

// @baa 0x008e79a0
extern undefined * g_01f6b340;
// @baa 0x008e79d0
undefined4 * UObject::sub_008e79d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b340);
  return param_1;
}

// @baa 0x008e7b60
IMPLEMENT_CLASS_AT(USeqCond_IncrementFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 70);

// @baa 0x008e7bc0
extern undefined * g_01f6b4d8;
// @baa 0x008e7bf0
undefined4 * UObject::sub_008e7bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b4d8);
  return param_1;
}

// @baa 0x008e7c10
IMPLEMENT_CLASS_AT(USeqCond_IsInCombat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 73);

// @baa 0x008e7c70
extern undefined * g_01f6b670;
// @baa 0x008e7ca0
undefined4 * UObject::sub_008e7ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b670);
  return param_1;
}

struct C_008e7cc0 { C_008e7cc0* sub_008e7cc0(int a0); };

// @baa 0x008e7cc0
C_008e7cc0* C_008e7cc0::sub_008e7cc0(int a0) { return this; }

// @baa 0x008e7dc0
IMPLEMENT_CLASS_AT(USeqCond_IsLoggedIn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 74);

// @baa 0x008e7e20
extern undefined * g_01f6b808;
// @baa 0x008e7e50
undefined4 * UObject::sub_008e7e50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b808);
  return param_1;
}

// @baa 0x008e7e70
IMPLEMENT_CLASS_AT(USeqCond_IsSameTeam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 71);

// @baa 0x008e7ed0
// @baa 0x008e7f00
IMPLEMENT_CLASS_AT(USeqCond_SwitchBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 75);

// @baa 0x008e8000
extern undefined * g_01f6b9a0;
// @baa 0x008e8030
undefined4 * UObject::sub_008e8030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6b9a0);
  return param_1;
}

extern undefined * g_01f6bcc0;
// @baa 0x008e8050
undefined4 * UObject::sub_008e8050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6bcc0);
  return param_1;
}

// @baa 0x008e80e0
IMPLEMENT_CLASS_AT(USeqCond_SwitchClass, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 72);

extern undefined * g_01f6be68;
// @baa 0x008e8110
undefined4 * UObject::sub_008e8110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6be68);
  return param_1;
}

// @baa 0x008e81a0
IMPLEMENT_CLASS_AT(USeqCond_SwitchName, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 76);

extern undefined * g_01f6c010;
// @baa 0x008e81d0
undefined4 * UObject::sub_008e81d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c010);
  return param_1;
}

// @baa 0x008e8260
IMPLEMENT_CLASS_AT(USeqCond_SwitchObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 77);

// @baa 0x008e8290
IMPLEMENT_CLASS_AT(USequenceEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 36);

// @baa 0x008e8310
int USequenceEvent::vf_150(void) { return 1; }

// @baa 0x008e8320
void USequenceEvent::vf_12c(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}

// @baa 0x008e8330
extern undefined * g_01f6c1b8;
// @baa 0x008e8360
undefined4 * UObject::sub_008e8360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c1b8);
  return param_1;
}

extern undefined * g_01f6c360;
// @baa 0x008e8380
undefined4 * UObject::sub_008e8380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c360);
  return param_1;
}

// @baa 0x008e8420
IMPLEMENT_CLASS_AT(USeqEvent_AISeeEnemy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 80);

// @baa 0x008e8480
extern undefined * g_01f6c508;
// @baa 0x008e84b0
undefined4 * UObject::sub_008e84b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c508);
  return param_1;
}

// @baa 0x008e84d0
IMPLEMENT_CLASS_AT(USeqEvent_Console, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 81);

// @baa 0x008e8540
extern undefined * g_01f6c6b0;
// @baa 0x008e8570
undefined4 * UObject::sub_008e8570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c6b0);
  return param_1;
}

// @baa 0x008e8590
IMPLEMENT_CLASS_AT(USeqEvent_ConstraintBroken, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 82);

// @baa 0x008e85f0
extern undefined * g_01f6c858;
// @baa 0x008e8620
undefined4 * UObject::sub_008e8620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6c858);
  return param_1;
}

// @baa 0x008e8640
IMPLEMENT_CLASS_AT(USeqEvent_Destroyed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 83);

// @baa 0x008e86a0
extern undefined * g_01f6ca00;
// @baa 0x008e86d0
undefined4 * UObject::sub_008e86d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6ca00);
  return param_1;
}

// @baa 0x008e86f0
IMPLEMENT_CLASS_AT(USeqEvent_GetInventory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 84);

// @baa 0x008e8750
extern undefined * g_01f6cba8;
// @baa 0x008e8780
undefined4 * UObject::sub_008e8780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6cba8);
  return param_1;
}

// @baa 0x008e87a0
IMPLEMENT_CLASS_AT(USeqEvent_LevelBeginning, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 87);

// @baa 0x008e8800
extern undefined * g_01f6cd50;
// @baa 0x008e8830
undefined4 * UObject::sub_008e8830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6cd50);
  return param_1;
}

// @baa 0x008e8850
IMPLEMENT_CLASS_AT(USeqEvent_LevelLoaded, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 85);

// @baa 0x008e88b0
extern undefined * g_01f6cef8;
// @baa 0x008e88e0
undefined4 * UObject::sub_008e88e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6cef8);
  return param_1;
}

// @baa 0x008e8900
IMPLEMENT_CLASS_AT(USeqEvent_LevelStartup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 86);

// @baa 0x008e8960
extern undefined * g_01f6d0a0;
// @baa 0x008e8990
undefined4 * UObject::sub_008e8990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d0a0);
  return param_1;
}

// @baa 0x008e89b0
IMPLEMENT_CLASS_AT(USeqEvent_Mover, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 88);

// @baa 0x008e8a10
extern undefined * g_01f6d248;
// @baa 0x008e8a40
undefined4 * UObject::sub_008e8a40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d248);
  return param_1;
}

// @baa 0x008e8a60
IMPLEMENT_CLASS_AT(USeqEvent_ParticleEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 89);

// @baa 0x008e8ac0
extern undefined * g_01f6d3f8;
// @baa 0x008e8af0
undefined4 * UObject::sub_008e8af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d3f8);
  return param_1;
}

// @baa 0x008e8b10
IMPLEMENT_CLASS_AT(USeqEvent_ProjectileLanded, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 90);

// @baa 0x008e8b70
extern undefined * g_01f6d5a0;
// @baa 0x008e8ba0
undefined4 * UObject::sub_008e8ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d5a0);
  return param_1;
}

// @baa 0x008e8bc0
IMPLEMENT_CLASS_AT(USeqEvent_RemoteEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 91);

// @baa 0x008e8c20
extern undefined * g_01f6d750;
// @baa 0x008e8c50
undefined4 * UObject::sub_008e8c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d750);
  return param_1;
}

// @baa 0x008e8c70
IMPLEMENT_CLASS_AT(USeqEvent_RigidBodyCollision, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 92);

// @baa 0x008e8cd0
extern undefined * g_01f6d8f8;
// @baa 0x008e8d00
undefined4 * UObject::sub_008e8d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6d8f8);
  return param_1;
}

// @baa 0x008e8d20
IMPLEMENT_CLASS_AT(USeqEvent_SeeDeath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 93);

// @baa 0x008e8d80
extern undefined * g_01f6daa0;
// @baa 0x008e8db0
undefined4 * UObject::sub_008e8db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6daa0);
  return param_1;
}

// @baa 0x008e8dd0
IMPLEMENT_CLASS_AT(USeqEvent_SequenceActivated, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 94);

// @baa 0x008e8e40
extern undefined * g_01f6dc48;
// @baa 0x008e8e70
undefined4 * UObject::sub_008e8e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6dc48);
  return param_1;
}

// @baa 0x008e8e90
IMPLEMENT_CLASS_AT(USeqEvent_TakeDamage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 95);

// @baa 0x008e8f10
extern undefined * g_01f6ddf0;
// @baa 0x008e8f40
undefined4 * UObject::sub_008e8f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6ddf0);
  return param_1;
}

// @baa 0x008e8f60
IMPLEMENT_CLASS_AT(USeqEvent_Touch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 96);

// @baa 0x008e8ff0
extern undefined * g_01f6dfa8;
// @baa 0x008e9020
undefined4 * UObject::sub_008e9020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f6dfa8);
  return param_1;
}

// @baa 0x008e9040
IMPLEMENT_CLASS_AT(USeqEvent_Used, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp", 97);

// @baa 0x008e90d0
// @baa 0x008ef300
// @baa 0x008ef320
// @baa 0x008ef340
// @baa 0x008ef360
// @baa 0x008ef380
// @baa 0x008ef3a0
// @baa 0x008ef3c0
// @baa 0x008ef3e0
// @baa 0x008ef400
// @baa 0x008ef420
// @baa 0x008ef440
// @baa 0x008ef460
// @baa 0x008ef480
// @baa 0x008ef4a0
// @baa 0x008ef4c0
// @baa 0x008ef4e0
// @baa 0x008ef500
// @baa 0x008ef520
// @baa 0x008ef540
// @baa 0x008ef560
// @baa 0x008ef580
// @baa 0x008ef5a0
// @baa 0x008ef5c0
// @baa 0x008ef5e0
// @baa 0x008ef600
// @baa 0x008ef620
// @baa 0x008ef640
// @baa 0x008ef660
// @baa 0x008ef680
// @baa 0x008ef6a0
// @baa 0x008ef6c0
// @baa 0x008ef6e0
// @baa 0x008ef700
// @baa 0x008ef720
// @baa 0x008ef740
// @baa 0x008ef760
// @baa 0x008ef780
// @baa 0x008ef7a0
// @baa 0x008ef7c0
// @baa 0x008ef7e0
// @baa 0x008ef800
// @baa 0x008ef820
// @baa 0x008ef840
// @baa 0x008ef860
// @baa 0x008ef880
// @baa 0x008ef8a0
// @baa 0x008ef8c0
// @baa 0x008ef8e0
// @baa 0x008ef900
// @baa 0x008ef920
// @baa 0x008ef940
// @baa 0x008ef960
// @baa 0x008ef980
// @baa 0x008ef9a0
// @baa 0x008ef9c0
// @baa 0x008ef9e0
// @baa 0x008efa00
// @baa 0x008efa20
// @baa 0x008efa40
// @baa 0x008efa60
// @baa 0x008efa80
// @baa 0x008efaa0
// @baa 0x008efac0
// @baa 0x008efae0
// @baa 0x008efb00
// @baa 0x008efb20
// @baa 0x008efb40
// @baa 0x008efb60
// @baa 0x008efb80
// @baa 0x008efba0
// @baa 0x008efbc0
// @baa 0x008efbe0
// @baa 0x008efc00
// @baa 0x008efc20
// @baa 0x008efc40
// @baa 0x008efc60
// @baa 0x008efc80
// @baa 0x008efca0
// @baa 0x008efcc0
// @baa 0x008efce0
// @baa 0x008efd00
// @baa 0x008efd20
// @baa 0x008efd40
// @baa 0x008efd60
// @baa 0x008efd80
// @baa 0x008efda0
// @baa 0x008efdc0
// @baa 0x008efde0
// @baa 0x008efe00
// @baa 0x008efe20
// @baa 0x008efe40
// @baa 0x008efe60
// @baa 0x008efe80
// @baa 0x008efea0
// @baa 0x008efec0
// @baa 0x008efee0
// @baa 0x008eff00
// @baa 0x008eff20
// @baa 0x008eff40
// @baa 0x008eff60
// @baa 0x008eff80
// @baa 0x008effa0
// @baa 0x008effc0
// @baa 0x008effe0
// @baa 0x008f0000
// @baa 0x008f0020
// @baa 0x008f0040
// @baa 0x008f0060
// @baa 0x008f0080
// @baa 0x008f00a0
// @baa 0x008f00c0
// @baa 0x008f00e0
// @baa 0x008f0100
// @baa 0x008f01c0
// @baa 0x008f0280
// @baa 0x008f0340
// @baa 0x008f0400
// @baa 0x008f04c0
// @baa 0x008f0580
// @baa 0x008f0640
// @baa 0x008f0700
// @baa 0x008f07c0
// @baa 0x008f0880
// @baa 0x008f0940
// @baa 0x008f0a00
// @baa 0x008f0ac0
// @baa 0x008f0b80
// @baa 0x008f0c40
// @baa 0x008f0d00
// @baa 0x008f0dc0
// @baa 0x008f0e80
// @baa 0x008f0f40
// @baa 0x008f1000
// @baa 0x008f10c0
// @baa 0x008f1180
// @baa 0x008f1240
// @baa 0x008f1300
// @baa 0x008f13c0
// @baa 0x008f1480
// @baa 0x008f1540
// @baa 0x008f1600
// @baa 0x008f16c0
// @baa 0x008f1780
// @baa 0x008f1840
// @baa 0x008f1900
// @baa 0x008f19c0
// @baa 0x008f1a80
// @baa 0x008f1b40
// @baa 0x008f1c00
// @baa 0x008f1cc0
// @baa 0x008f1d80
// @baa 0x008f1e40
// @baa 0x008f1f00
// @baa 0x008f1fc0
// @baa 0x008f2080
// @baa 0x008f2140
// @baa 0x008f2200
// @baa 0x008f22c0
// @baa 0x008f2380
// @baa 0x008f2440
// @baa 0x008f2500
// @baa 0x008f25c0
// @baa 0x008f2680
// @baa 0x008f2740
// @baa 0x008f2800
// @baa 0x008f28c0
// @baa 0x008f2980
// @baa 0x008f2a40
// @baa 0x008f2b00
// @baa 0x008f2bc0
// @baa 0x008f2c80
// @baa 0x008f2d40
// @baa 0x008f2e00
// @baa 0x008f2ec0
// @baa 0x008f2f80
// @baa 0x008f3040
// @baa 0x008f3100
// @baa 0x008f31c0
// @baa 0x008f3280
// @baa 0x008f3340
// @baa 0x008f3400
// @baa 0x008f34c0
// @baa 0x008f3580
// @baa 0x008f3640
// @baa 0x008f3700
// @baa 0x008f37c0
// @baa 0x008f3880
// @baa 0x008f3940
// @baa 0x008f3a00
// @baa 0x008f3ac0
// @baa 0x008f3b80
// @baa 0x008f3c40
// @baa 0x008f3d00
// @baa 0x008f3dc0
// @baa 0x008f3e80
// @baa 0x008f3f40
// @baa 0x008f4000
// @baa 0x008f40c0
// @baa 0x008f4180
// @baa 0x008f4240
// @baa 0x008f4300
// @baa 0x008f43c0
// @baa 0x008f4480
// @baa 0x008f4540
// @baa 0x008f4600
// @baa 0x008f46c0
// @baa 0x008f4780
// @baa 0x008f4840
// @baa 0x008f4900
// @baa 0x008f49c0
// @baa 0x008f4a80
// @baa 0x008f4b40
// @baa 0x008f4c00
// @baa 0x008f4cc0
// @baa 0x008f4d80
// @baa 0x008f4e40
// @baa 0x008f4f00
// @baa 0x008f4fc0
// @baa 0x008f5080
// @baa 0x008f5140
// @baa 0x008f5200
// @baa 0x008f52c0
// @baa 0x008f5380
// @baa 0x008f5440
int sub_008e07d0(...);
int sub_008ef080(void);
extern undefined4 g_026b5ab4;
// @baa 0x008f7420
int sub_008f7420(void)
{
  if (g_026b5ab4 == 0) {
    g_026b5ab4 = sub_008e07d0(L"Engine");
    sub_008ef080();
  }
  return g_026b5ab4;
}

// @baa 0x008f7450
IMPLEMENT_CLASS_AT(ASceneCapturePortalActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 19);

// @baa 0x008f7560
bool ASceneCapturePortalActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_008cffd0(void);
int sub_008f0400(...);
extern undefined4 g_026b5adc;
// @baa 0x008f7890
int sub_008f7890(void)
{
  if (g_026b5adc == 0) {
    g_026b5adc = sub_008f0400(L"Engine");
    sub_008cffd0();
  }
  return g_026b5adc;
}

// @baa 0x008f78c0
// @baa 0x008f79d0
bool USequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f7a10
// @baa 0x008f7b20
bool USequenceAction::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f7b60
// @baa 0x008f7c70
bool USequenceCondition::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f7cb0
// @baa 0x008f7dc0
bool USequenceEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_008f7ecf(...);
// @baa 0x008f7e80
undefined4 USequenceOp::sub_008f7e80(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b5adc == 0) {
      g_026b5adc = sub_008f0400(L"Engine");
      sub_008cffd0();
      if (g_026b5adc == 0) {
sub_008f7ecf:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b5adc) goto sub_008f7ecf;
    }
  }
  return 0;
}

int sub_008e0890(...);
int sub_008f7450(void);
extern undefined4 g_026b5ab8;
// @baa 0x008f7fe0
int sub_008f7fe0(void)
{
  if (g_026b5ab8 == 0) {
    g_026b5ab8 = sub_008e0890(L"Engine");
    sub_008f7450();
  }
  return g_026b5ab8;
}

// @baa 0x008f8010
IMPLEMENT_CLASS_AT(APortalTeleporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSceneCapture.cpp", 20);

// @baa 0x008f8120
bool APortalTeleporter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_008f0100(...);
int sub_008f78c0(void);
extern undefined4 g_026b5ac0;
// @baa 0x008f8160
int sub_008f8160(void)
{
  if (g_026b5ac0 == 0) {
    g_026b5ac0 = sub_008f0100(L"Engine");
    sub_008f78c0();
  }
  return g_026b5ac0;
}

int sub_008f01c0(...);
int sub_008f7a10(void);
extern undefined4 g_026b5ac4;
// @baa 0x008f8190
int sub_008f8190(void)
{
  if (g_026b5ac4 == 0) {
    g_026b5ac4 = sub_008f01c0(L"Engine");
    sub_008f7a10();
  }
  return g_026b5ac4;
}

int sub_008f0280(...);
int sub_008f7b60(void);
extern undefined4 g_026b5ac8;
// @baa 0x008f81c0
int sub_008f81c0(void)
{
  if (g_026b5ac8 == 0) {
    g_026b5ac8 = sub_008f0280(L"Engine");
    sub_008f7b60();
  }
  return g_026b5ac8;
}

int sub_008f0340(...);
int sub_008f7cb0(void);
extern undefined4 g_026b5acc;
// @baa 0x008f81f0
int sub_008f81f0(void)
{
  if (g_026b5acc == 0) {
    g_026b5acc = sub_008f0340(L"Engine");
    sub_008f7cb0();
  }
  return g_026b5acc;
}

// @baa 0x008f8220
// @baa 0x008f8330
bool USeqCond_CompareBool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8370
// @baa 0x008f8480
bool USeqCond_CompareFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f84c0
// @baa 0x008f85d0
bool USeqCond_CompareInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8610
// @baa 0x008f8720
bool USeqCond_CompareObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8760
// @baa 0x008f8870
bool USeqCond_GetServerType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f88b0
// @baa 0x008f89c0
bool USeqCond_Increment::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8a00
// @baa 0x008f8b10
bool USeqCond_IncrementFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8b50
// @baa 0x008f8c60
bool USeqCond_IsSameTeam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8ca0
// @baa 0x008f8db0
bool USeqCond_IsInCombat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8df0
// @baa 0x008f8f00
bool USeqCond_IsLoggedIn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f8f40
// @baa 0x008f9090
// @baa 0x008f91a0
bool USeqEvent_AISeeEnemy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f91e0
// @baa 0x008f92f0
bool USeqEvent_Console::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9330
// @baa 0x008f9440
bool USeqEvent_ConstraintBroken::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9480
// @baa 0x008f9590
bool USeqEvent_Destroyed::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f95d0
// @baa 0x008f96e0
bool USeqEvent_GetInventory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9720
// @baa 0x008f9830
bool USeqEvent_LevelLoaded::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9980
bool USeqEvent_LevelStartup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f99c0
// @baa 0x008f9ad0
bool USeqEvent_LevelBeginning::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9b10
// @baa 0x008f9c20
bool USeqEvent_Mover::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9c60
// @baa 0x008f9d70
bool USeqEvent_ParticleEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9db0
// @baa 0x008f9ec0
bool USeqEvent_ProjectileLanded::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008f9f00
// @baa 0x008fa010
bool USeqEvent_RemoteEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa050
// @baa 0x008fa160
bool USeqEvent_RigidBodyCollision::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa1a0
// @baa 0x008fa2b0
bool USeqEvent_SeeDeath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa2f0
// @baa 0x008fa400
bool USeqEvent_SequenceActivated::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa440
// @baa 0x008fa550
bool USeqEvent_TakeDamage::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa590
// @baa 0x008fa6a0
bool USeqEvent_Touch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa6e0
// @baa 0x008fa7f0
bool USeqEvent_Used::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa830
// @baa 0x008fa940
bool USeqAct_ActivateRemoteEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fa980
// @baa 0x008faa90
bool USeqAct_ApplySoundNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008faad0
// @baa 0x008fabe0
bool USeqAct_AttachToEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fac20
// @baa 0x008fad30
bool USeqAct_CauseDamage::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fad70
// @baa 0x008fae80
bool USeqAct_CauseDamageRadial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008faec0
// @baa 0x008fafd0
bool USeqAct_CameraFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb010
// @baa 0x008fb120
bool USeqAct_CameraLookAt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb160
// @baa 0x008fb270
bool USeqAct_ChangeCollision::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb2b0
// @baa 0x008fb3c0
bool USeqAct_CommitMapChange::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb400
// @baa 0x008fb510
bool USeqAct_FinishSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb550
// @baa 0x008fb660
bool USeqAct_Gate::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb6a0
// @baa 0x008fb7b0
bool USeqAct_GetDistance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb7f0
// @baa 0x008fb900
bool USeqAct_GetProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fb940
// @baa 0x008fba50
bool USeqAct_GetVelocity::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fba90
// @baa 0x008fbba0
bool USeqAct_IsInObjectList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fbbe0
// @baa 0x008fbcf0
bool USeqAct_Latent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fbe40
bool USeqAct_Log::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fbe80
// @baa 0x008fbf90
bool USeqAct_ParticleEventGenerator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fbfd0
// @baa 0x008fc0e0
bool USeqAct_PhysXSwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc120
// @baa 0x008fc230
bool USeqAct_PlayFaceFXAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc270
// @baa 0x008fc380
bool USeqAct_Possess::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc3c0
// @baa 0x008fc4d0
bool USeqAct_RangeSwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc510
// @baa 0x008fc620
bool USeqAct_SetBlockRigidBody::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc660
// @baa 0x008fc770
bool USeqAct_SetCameraTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc7b0
// @baa 0x008fc8c0
bool USeqAct_SetSequenceVariable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fc900
// @baa 0x008fca10
bool USeqAct_SetMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fca50
// @baa 0x008fcb60
bool USeqAct_SetMatInstScalarParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fcba0
// @baa 0x008fccb0
bool USeqAct_SetMatInstTexParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fccf0
// @baa 0x008fce00
bool USeqAct_SetMatInstVectorParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fce40
// @baa 0x008fcf50
bool USeqAct_GetMatInstVectorParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fcf90
// @baa 0x008fd0a0
bool USeqAct_SetPhysics::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd0e0
// @baa 0x008fd1f0
bool USeqAct_SetRigidBodyIgnoreVehicles::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd230
// @baa 0x008fd340
bool USeqAct_Switch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd380
// @baa 0x008fd490
bool USeqAct_Timer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd4d0
// @baa 0x008fd5e0
bool USeqAct_Toggle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd620
// @baa 0x008fd730
bool USeqAct_ToggleDynamicChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd770
// @baa 0x008fd880
bool USeqAct_Trace::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fd8c0
// @baa 0x008fd9d0
bool USeqAct_SetClothParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_008feb90 {
    undefined4 sub_008feb90();
};

int sub_008febdf(...);
// @baa 0x008feb90
undefined4 C_008feb90::sub_008feb90(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b5acc == 0) {
      g_026b5acc = sub_008f0340(L"Engine");
      sub_008f7cb0();
      if (g_026b5acc == 0) {
sub_008febdf:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b5acc) goto sub_008febdf;
    }
  }
  return 0;
}

int sub_008f28c0(...);
int sub_008fb400(void);
extern undefined4 g_026b5bec;
// @baa 0x008fef10
int sub_008fef10(void)
{
  if (g_026b5bec == 0) {
    g_026b5bec = sub_008f28c0(L"Engine");
    sub_008fb400();
  }
  return g_026b5bec;
}

int sub_008f2ec0(...);
int sub_008fbbe0(void);
extern undefined4 g_026b5c0c;
// @baa 0x008fef40
int sub_008fef40(void)
{
  if (g_026b5c0c == 0) {
    g_026b5c0c = sub_008f2ec0(L"Engine");
    sub_008fbbe0();
  }
  return g_026b5c0c;
}

int sub_008f3c40(...);
int sub_008fc7b0(void);
extern undefined4 g_026b5c54;
// @baa 0x008fef70
int sub_008fef70(void)
{
  if (g_026b5c54 == 0) {
    g_026b5c54 = sub_008f3c40(L"Engine");
    sub_008fc7b0();
  }
  return g_026b5c54;
}

int sub_008f4840(...);
int sub_008fd230(void);
extern undefined4 g_026b5c94;
// @baa 0x008fefa0
int sub_008fefa0(void)
{
  if (g_026b5c94 == 0) {
    g_026b5c94 = sub_008f4840(L"Engine");
    sub_008fd230();
  }
  return g_026b5c94;
}

int sub_008f0d00(...);
int sub_008f8f40(void);
extern undefined4 g_026b5b58;
// @baa 0x008fefd0
int sub_008fefd0(void)
{
  if (g_026b5b58 == 0) {
    g_026b5b58 = sub_008f0d00(L"Engine");
    sub_008f8f40();
  }
  return g_026b5b58;
}

int sub_008f1480(...);
int sub_008f99c0(void);
extern undefined4 g_026b5b80;
// @baa 0x008ff000
int sub_008ff000(void)
{
  if (g_026b5b80 == 0) {
    g_026b5b80 = sub_008f1480(L"Engine");
    sub_008f99c0();
  }
  return g_026b5b80;
}

int sub_008f1300(...);
int sub_008f9720(void);
extern undefined4 g_026b5b78;
// @baa 0x008ff030
int sub_008ff030(void)
{
  if (g_026b5b78 == 0) {
    g_026b5b78 = sub_008f1300(L"Engine");
    sub_008f9720();
  }
  return g_026b5b78;
}

int sub_008f13c0(...);
int sub_008f9870(void);
extern undefined4 g_026b5b7c;
// @baa 0x008ff060
int sub_008ff060(void)
{
  if (g_026b5b7c == 0) {
    g_026b5b7c = sub_008f13c0(L"Engine");
    sub_008f9870();
  }
  return g_026b5b7c;
}

int sub_008f19c0(...);
int sub_008fa2f0(void);
extern undefined4 g_026b5b9c;
// @baa 0x008ff0c0
int sub_008ff0c0(void)
{
  if (g_026b5b9c == 0) {
    g_026b5b9c = sub_008f19c0(L"Engine");
    sub_008fa2f0();
  }
  return g_026b5b9c;
}

// @baa 0x008ff0f0
// @baa 0x008ff240
// @baa 0x008ff390
// @baa 0x008ff4a0
bool USeqCond_SwitchObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff4e0
// @baa 0x008ff5f0
bool USeqAct_ActorFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff630
// @baa 0x008ff740
bool USeqAct_AIMoveToActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff780
// @baa 0x008ff890
bool USeqAct_Delay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ff8d0
// @baa 0x008ff9e0
bool USeqAct_InterpolateColour::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ffa20
// @baa 0x008ffb30
bool USeqAct_InterpolateFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ffb70
// @baa 0x008ffc80
bool USeqAct_DelaySwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ffcc0
// @baa 0x008ffdd0
bool USeqAct_ForceGarbageCollection::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008ffe10
// @baa 0x008fff20
bool USeqAct_ForceMaterialMipsResident::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008fff60
// @baa 0x00900070
bool USeqAct_LevelStreamingBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009000b0
// @baa 0x009001c0
bool USeqAct_LevelVisibility::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900200
// @baa 0x00900310
bool USeqAct_ModifyObjectList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900350
// @baa 0x00900460
bool USeqAct_PlayCameraAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009004a0
// @baa 0x009005b0
bool USeqAct_PlaySound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009005f0
// @baa 0x00900700
bool USeqAct_PrepareMapChange::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900740
// @baa 0x00900850
bool USeqAct_RandomSwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900890
// @baa 0x009009a0
bool USeqAct_SetBool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009009e0
// @baa 0x00900af0
bool USeqAct_SetDOFParams::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900b30
// @baa 0x00900c40
bool USeqAct_SetMotionBlurParams::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900c80
// @baa 0x00900d90
bool USeqAct_SetFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900dd0
// @baa 0x00900ee0
bool USeqAct_SetInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00900f20
// @baa 0x00901030
bool USeqAct_SetObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901070
// @baa 0x00901180
bool USeqAct_SetString::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009011c0
// @baa 0x009012d0
bool USeqAct_StreamInTextures::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901310
// @baa 0x00901420
bool USeqAct_WaitForLevelsVisible::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901460
// @baa 0x00901570
bool USeqAct_AddInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009015b0
// @baa 0x009016c0
bool USeqAct_SubtractInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901700
// @baa 0x00901810
bool USeqAct_MultiplyInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901850
// @baa 0x00901960
bool USeqAct_DivideInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009019a0
// @baa 0x00901ab0
bool USeqAct_CastToInt::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901af0
// @baa 0x00901c00
bool USeqAct_AddFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901c40
// @baa 0x00901d50
bool USeqAct_SubtractFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901d90
// @baa 0x00901ea0
bool USeqAct_MultiplyFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00901ee0
// @baa 0x00901ff0
bool USeqAct_DivideFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00902030
// @baa 0x00902140
bool USeqAct_CastToFloat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00902260(void);
// @baa 0x009076e0
void USeqAct_CameraLookAt::vf_140(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    uVar1 = *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xd4) = (~(uVar1 * 2) ^ uVar1) & 8 ^ uVar1;
  }
  sub_00902260();
  return;
}

int sub_008f1d80(...);
int sub_008ff4e0(void);
extern undefined4 g_026b5bb0;
// @baa 0x00907cd0
int sub_00907cd0(void)
{
  if (g_026b5bb0 == 0) {
    g_026b5bb0 = sub_008f1d80(L"Engine");
    sub_008ff4e0();
  }
  return g_026b5bb0;
}

int sub_008f25c0(...);
int sub_008ff780(void);
extern undefined4 g_026b5bdc;
// @baa 0x00907d00
int sub_00907d00(void)
{
  if (g_026b5bdc == 0) {
    g_026b5bdc = sub_008f25c0(L"Engine");
    sub_008ff780();
  }
  return g_026b5bdc;
}

int sub_008f3040(...);
int sub_008fff60(void);
extern undefined4 g_026b5c14;
// @baa 0x00907d30
int sub_00907d30(void)
{
  if (g_026b5c14 == 0) {
    g_026b5c14 = sub_008f3040(L"Engine");
    sub_008fff60();
  }
  return g_026b5c14;
}

int sub_008f3100(...);
int sub_009000b0(void);
extern undefined4 g_026b5c18;
// @baa 0x00907d60
int sub_00907d60(void)
{
  if (g_026b5c18 == 0) {
    g_026b5c18 = sub_008f3100(L"Engine");
    sub_009000b0();
  }
  return g_026b5c18;
}

// @baa 0x00907e10
// @baa 0x00907f20
bool USeqAct_ActorFactoryEx::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00907f60
// @baa 0x00908070
bool USeqAct_LevelStreaming::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009080b0
// @baa 0x009081c0
bool USeqAct_MultiLevelStreaming::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00909b6f(...);
// @baa 0x00909b20
undefined4 USeqAct_Delay::sub_00909b20(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b5bdc == 0) {
      g_026b5bdc = sub_008f25c0(L"Engine");
      sub_008ff780();
      if (g_026b5bdc == 0) {
sub_00909b6f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b5bdc) goto sub_00909b6f;
    }
  }
  return 0;
}

int sub_008f2f80(...);
int sub_00907f60(void);
extern undefined4 g_026b5c10;
// @baa 0x00909b80
int sub_00909b80(void)
{
  if (g_026b5c10 == 0) {
    g_026b5c10 = sub_008f2f80(L"Engine");
    sub_00907f60();
  }
  return g_026b5c10;
}

int sub_008f3340(...);
int sub_009080b0(void);
extern undefined4 g_026b5c24;
// @baa 0x00909bb0
int sub_00909bb0(void)
{
  if (g_026b5c24 == 0) {
    g_026b5c24 = sub_008f3340(L"Engine");
    sub_009080b0();
  }
  return g_026b5c24;
}

struct C_view_00909be0 {
    int sub_009086f0();
    int sub_00909b20();
};

// @baa 0x00909be0
void USeqAct_Delay::PostLoad(void)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view_00909be0 *)(this))->sub_009086f0();
  iVar1 = ((C_view_00909be0 *)(this))->sub_00909b20();
  if ((*(float *)(param_1 + 0xe8) != *(float *)(iVar1 + 0xe8)) &&
     (*(float *)(param_1 + 0xec) == *(float *)(iVar1 + 0xec))) {
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xe8);
  }
  return;
}

int sub_008c8b50(...);
int sub_008d3160(void);
extern undefined4 g_026b5ad4;
// @baa 0x00c980e0
int sub_00c980e0(void)
{
  if (g_026b5ad4 == 0) {
    g_026b5ad4 = sub_008c8b50(L"Engine");
    sub_008d3160();
  }
  return g_026b5ad4;
}

int sub_00d1fdd0(void);
int sub_00d415a0(...);
extern undefined4 g_026c57c8;
// @baa 0x00c983f0
int sub_00c983f0(void)
{
  if (g_026c57c8 == 0) {
    g_026c57c8 = sub_00d415a0(L"Engine");
    sub_00d1fdd0();
  }
  return g_026c57c8;
}

int sub_00bed940(void);
int sub_00bf79c0(...);
extern undefined4 g_026c05a0;
// @baa 0x00c98420
int sub_00c98420(void)
{
  if (g_026c05a0 == 0) {
    g_026c05a0 = sub_00bf79c0(L"Engine");
    sub_00bed940();
  }
  return g_026c05a0;
}

int sub_008f1fc0(...);
int sub_008fa980(void);
extern undefined4 g_026b5bbc;
// @baa 0x00c98450
int sub_00c98450(void)
{
  if (g_026b5bbc == 0) {
    g_026b5bbc = sub_008f1fc0(L"Engine");
    sub_008fa980();
  }
  return g_026b5bbc;
}

int sub_008f2080(...);
int sub_008faad0(void);
extern undefined4 g_026b5bc0;
// @baa 0x00c98480
int sub_00c98480(void)
{
  if (g_026b5bc0 == 0) {
    g_026b5bc0 = sub_008f2080(L"Engine");
    sub_008faad0();
  }
  return g_026b5bc0;
}

int sub_008f22c0(...);
int sub_008faec0(void);
extern undefined4 g_026b5bcc;
// @baa 0x00c984b0
int sub_00c984b0(void)
{
  if (g_026b5bcc == 0) {
    g_026b5bcc = sub_008f22c0(L"Engine");
    sub_008faec0();
  }
  return g_026b5bcc;
}

int sub_008f2380(...);
int sub_008fb010(void);
extern undefined4 g_026b5bd0;
// @baa 0x00c984e0
int sub_00c984e0(void)
{
  if (g_026b5bd0 == 0) {
    g_026b5bd0 = sub_008f2380(L"Engine");
    sub_008fb010();
  }
  return g_026b5bd0;
}

int sub_008f2140(...);
int sub_008fac20(void);
extern undefined4 g_026b5bc4;
// @baa 0x00c98510
int sub_00c98510(void)
{
  if (g_026b5bc4 == 0) {
    g_026b5bc4 = sub_008f2140(L"Engine");
    sub_008fac20();
  }
  return g_026b5bc4;
}

int sub_008f2200(...);
int sub_008fad70(void);
extern undefined4 g_026b5bc8;
// @baa 0x00c98540
int sub_00c98540(void)
{
  if (g_026b5bc8 == 0) {
    g_026b5bc8 = sub_008f2200(L"Engine");
    sub_008fad70();
  }
  return g_026b5bc8;
}

int sub_008f2440(...);
int sub_008fb160(void);
extern undefined4 g_026b5bd4;
// @baa 0x00c98570
int sub_00c98570(void)
{
  if (g_026b5bd4 == 0) {
    g_026b5bd4 = sub_008f2440(L"Engine");
    sub_008fb160();
  }
  return g_026b5bd4;
}

int sub_008f2500(...);
int sub_008fb2b0(void);
extern undefined4 g_026b5bd8;
// @baa 0x00c985a0
int sub_00c985a0(void)
{
  if (g_026b5bd8 == 0) {
    g_026b5bd8 = sub_008f2500(L"Engine");
    sub_008fb2b0();
  }
  return g_026b5bd8;
}

int sub_008f2b00(...);
int sub_008fb550(void);
extern undefined4 g_026b5bf8;
// @baa 0x00c985d0
int sub_00c985d0(void)
{
  if (g_026b5bf8 == 0) {
    g_026b5bf8 = sub_008f2b00(L"Engine");
    sub_008fb550();
  }
  return g_026b5bf8;
}

int sub_008f2bc0(...);
int sub_008fb6a0(void);
extern undefined4 g_026b5bfc;
// @baa 0x00c98600
int sub_00c98600(void)
{
  if (g_026b5bfc == 0) {
    g_026b5bfc = sub_008f2bc0(L"Engine");
    sub_008fb6a0();
  }
  return g_026b5bfc;
}

int sub_008f43c0(...);
int sub_008fce40(void);
extern undefined4 g_026b5c7c;
// @baa 0x00c986b0
int sub_00c986b0(void)
{
  if (g_026b5c7c == 0) {
    g_026b5c7c = sub_008f43c0(L"Engine");
    sub_008fce40();
  }
  return g_026b5c7c;
}

int sub_008f2c80(...);
int sub_008fb7f0(void);
extern undefined4 g_026b5c00;
// @baa 0x00c986e0
int sub_00c986e0(void)
{
  if (g_026b5c00 == 0) {
    g_026b5c00 = sub_008f2c80(L"Engine");
    sub_008fb7f0();
  }
  return g_026b5c00;
}

int sub_008f2d40(...);
int sub_008fb940(void);
extern undefined4 g_026b5c04;
// @baa 0x00c98710
int sub_00c98710(void)
{
  if (g_026b5c04 == 0) {
    g_026b5c04 = sub_008f2d40(L"Engine");
    sub_008fb940();
  }
  return g_026b5c04;
}

int sub_008f2e00(...);
int sub_008fba90(void);
extern undefined4 g_026b5c08;
// @baa 0x00c98740
int sub_00c98740(void)
{
  if (g_026b5c08 == 0) {
    g_026b5c08 = sub_008f2e00(L"Engine");
    sub_008fba90();
  }
  return g_026b5c08;
}

struct D_01e23c40 { void sub_008c26a0(); };

extern D_01e23c40 g_026b5d54;
// @baa 0x01e23c40
void sub_01e23c40() { g_026b5d54.sub_008c26a0(); }
