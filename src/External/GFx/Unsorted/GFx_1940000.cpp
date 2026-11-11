// GFx_1940000.cpp (part 1 of 3): 277 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_0193f180();
// @baa 0x01940110
void sub_01940110(void) { sub_0193f180(); }

void sub_0193f250();
// @baa 0x01940120
void sub_01940120(void) { sub_0193f250(); }

struct C { C* sub_01940130(void); };

// @baa 0x01940130
C* C::sub_01940130(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0193cef0();
// @baa 0x01940140
void sub_01940140(void) { sub_0193cef0(); }

void sub_0193f3a0();
// @baa 0x019401b0
void sub_019401b0(void) { sub_0193f3a0(); }

void sub_0193f410();
// @baa 0x019401c0
void sub_019401c0(void) { sub_0193f410(); }

struct C_019401e0 { C_019401e0* sub_019401e0(void); };

// @baa 0x019401e0
C_019401e0* C_019401e0::sub_019401e0(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0193d100();
// @baa 0x019401f0
void sub_019401f0(void) { sub_0193d100(); }

struct C_01941070 { C_01941070* sub_01941070(void); };

// @baa 0x01941070
C_01941070* C_01941070::sub_01941070(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01941080
void sub_01941080(void) { sub_0193d100(); }

struct C_01941790 { C_01941790* sub_01941790(void); };

// @baa 0x01941790
C_01941790* C_01941790::sub_01941790(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x019417a0
void sub_019417a0(void) { sub_0193d100(); }

void sub_01941090();
// @baa 0x01941810
void sub_01941810(void) { sub_01941090(); }

void sub_019410f0();
// @baa 0x01941830
void sub_01941830(void) { sub_019410f0(); }

void sub_01941150();
// @baa 0x01941850
void sub_01941850(void) { sub_01941150(); }

struct C_01941860 {
    void sub_01941860(int);
};

int sub_019411b0(void);
extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x01941860
void C_01941860::sub_01941860(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  if (param_1[1] == 1) {
    sub_019411b0();
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[1] - param_2) * 4 - 4);
  param_1[1] = param_1[1] + -1;
  return;
}

// @baa 0x01941ff0
int __stdcall sub_01941ff0(int a0, int a1) { return 0; }

struct C_01942000 { int sub_01942000(void); };

// @baa 0x01942000
int C_01942000::sub_01942000(void) { return *(int*)((char*)this + 32); }

struct C_01942010 {
    undefined4 sub_01942010();
};

// @baa 0x01942010
undefined4 C_01942010::sub_01942010(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01942020 { int sub_01942020(void); };

// @baa 0x01942020
int C_01942020::sub_01942020(void) { return *(int*)((char*)this + 36); }

struct C_01942030 { int sub_01942030(void); };

// @baa 0x01942030
int C_01942030::sub_01942030(void) { return *(int*)((char*)this + 44); }

struct C_01942070 {
    undefined4 sub_01942070();
};

// @baa 0x01942070
undefined4 C_01942070::sub_01942070(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

void sub_019418a0();
// @baa 0x01943010
void sub_01943010(void) { sub_019418a0(); }

struct C_019448d0 { void sub_019448d0(void); };

// @baa 0x019448d0
void C_019448d0::sub_019448d0(void) { *(int*)((char*)this + 0) = 0; }

struct C_01944900 { void sub_01944900(void); };

// @baa 0x01944900
void C_01944900::sub_01944900(void) { *(int*)((char*)this + 0) = 0; }

// @baa 0x019449c0
void sub_019449c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01945870
void sub_01945870(int param_1)
{
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x20) = 1;
  return;
}

// @baa 0x01945880
void sub_01945880(void) {  }

// @baa 0x01945890
void sub_01945890(int param_1)
{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  *piVar1 = (int)(piVar1 + 6);
  piVar1[1] = 0x1000;
  return;
}

void sub_018d3de0();
// @baa 0x01945950
void sub_01945950(void) { sub_018d3de0(); }

extern char g_023f8ae4[];
struct C_01945d00 { C_01945d00* sub_01945d00(void); };

// @baa 0x01945d00
C_01945d00* C_01945d00::sub_01945d00(void) { *(int*)((char*)this + 0) = (int)g_023f8ae4; return this; }

extern char g_023f8b14[];
struct C_01945d30 { C_01945d30* sub_01945d30(void); };

// @baa 0x01945d30
C_01945d30* C_01945d30::sub_01945d30(void) { *(int*)((char*)this + 0) = (int)g_023f8b14; return this; }

struct C_01945ec0 {
    void sub_01945ec0();
};

// @baa 0x01945ec0
void C_01945ec0::sub_01945ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = 0;
  *param_1 = 0;
  return;
}

struct C_01945ed0 {
    undefined1 sub_01945ed0();
};

// @baa 0x01945ed0
undefined1 C_01945ed0::sub_01945ed0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x309);
}

struct C_01945ee0 {
    void sub_01945ee0();
};

// @baa 0x01945ee0
void C_01945ee0::sub_01945ee0(void)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

struct C_01945ff0 { int sub_01945ff0(void); };

// @baa 0x01945ff0
int C_01945ff0::sub_01945ff0(void) { return *(int*)((char*)this + 104); }

struct C_01946000 { int sub_01946000(void); };

// @baa 0x01946000
int C_01946000::sub_01946000(void) { return *(int*)((char*)this + 100); }

struct C_019460f0 { char* sub_019460f0(void); };

// @baa 0x019460f0
char* C_019460f0::sub_019460f0(void) { return (char*)this + 8; }

struct C_01946480 {
    undefined4 * sub_01946480(undefined4, undefined4, undefined4, undefined4);
};

int sub_01946450(...);
int sub_01a143a0(...);
int sub_01a14980(...);
int sub_01a14df0(...);
int sub_01a15540(...);
int sub_01a15640(...);
extern undefined4 g_023f8b5c;
// @baa 0x01946480
undefined4 * C_01946480::sub_01946480(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 uVar2;
  *param_1 = (undefined4)((&g_023f8b5c));
  puVar1 = param_1 + 2;
  uVar2 = sub_01a143a0(param_1 + 0x5c);
  *puVar1 = uVar2;
  sub_01a15640(puVar1,0x3e,0x168);
  sub_01946450(puVar1,param_2);
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = 3;
  param_1[0xc] = 2;
  sub_01a15540(puVar1);
  sub_01a14df0(puVar1,param_5,1);
  sub_01a14980(puVar1,1);
  return param_1;
}

struct C_01946550 {
    void sub_01946550(undefined4);
};

int sub_01a16060(...);
// @baa 0x01946550
void C_01946550::sub_01946550(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_01a16060(param_1 + 8,param_2);
  return;
}

struct C_01946570 {
    void sub_01946570(undefined4);
};

int sub_01a15a30(...);
// @baa 0x01946570
void C_01946570::sub_01946570(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_01a15a30(param_2,param_1 + 8);
  return;
}

struct C_01946590 { char* sub_01946590(void); };

// @baa 0x01946590
char* C_01946590::sub_01946590(void) { return (char*)this + 8; }

struct C_019465e0 {
    undefined4 * sub_019465e0(undefined4);
};

// @baa 0x019465e0
undefined4 * C_019465e0::sub_019465e0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  undefined4 uVar2;
  *param_1 = (undefined4)((&g_023f8b5c));
  puVar1 = param_1 + 2;
  uVar2 = sub_01a143a0(param_1 + 0x5c);
  *puVar1 = uVar2;
  sub_01a15640(puVar1,0x3e,0x168);
  sub_01946450(puVar1,param_2);
  return param_1;
}

#pragma pack(push, 1)
struct GColor { char _pad0[1]; };

#pragma pack(pop)
struct C_01946760 {
    void sub_01946760(char *);
};

int sub_018da9a0(...);
// @baa 0x01946760
void C_01946760::sub_01946760(char * param_1)
{
    GColor * this_ = (GColor *)this;

                    
  sub_018da9a0(param_1,0x200,"RGBA: %d %d %d %d\n",this_[2],this_[1],*this_,this_[3]);
  return;
}

struct C_01947520 {
    undefined4 sub_01947520();
};

// @baa 0x01947520
undefined4 C_01947520::sub_01947520(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x14);
}

struct C_01947570 { int sub_01947570(void); };

// @baa 0x01947570
int C_01947570::sub_01947570(void) { return *(int*)((char*)this + 20); }

struct C_01947580 {
    byte sub_01947580();
};

// @baa 0x01947580
byte C_01947580::sub_01947580(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 & 1;
}

struct C_01947590 {
    byte sub_01947590();
};

// @baa 0x01947590
byte C_01947590::sub_01947590(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 3 & 1;
}

struct C_019475a0 {
    byte sub_019475a0();
};

// @baa 0x019475a0
byte C_019475a0::sub_019475a0(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 4 & 1;
}

struct C_019475b0 {
    byte sub_019475b0();
};

// @baa 0x019475b0
byte C_019475b0::sub_019475b0(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 5 & 1;
}

struct C_019475c0 {
    bool sub_019475c0();
};

// @baa 0x019475c0
bool C_019475c0::sub_019475c0(void)
{
    char * param_1 = (char *)this;

  return *param_1 != '\0';
}

struct C_01947630 { char* sub_01947630(void); };

// @baa 0x01947630
char* C_01947630::sub_01947630(void) { return (char*)this + 556; }

struct C_01947690 {
    undefined4 sub_01947690(uint *);
};

// @baa 0x01947690
undefined4 C_01947690::sub_01947690(uint * param_2)
{
    uint * param_1 = (uint *)this;

  if ((*param_1 == *param_2) &&
     (((*param_1 & 0x20000) == 0 || ((short)param_1[2] == (short)param_2[2])))) {
    return 1;
  }
  return 0;
}

// @baa 0x019476f0
void sub_019476f0(void) { sub_018d3de0(); }

// @baa 0x01947700
void sub_01947700(void) { sub_018d3de0(); }

struct C_01947730 {
    undefined4 sub_01947730();
};

// @baa 0x01947730
undefined4 C_01947730::sub_01947730(void)
{
    char * param_1 = (char *)this;

  if ((*param_1 != '\b') && (*param_1 != '\v')) {
    return 0;
  }
  return 1;
}

extern char g_023f8bac[];
struct C_01947750 { C_01947750* sub_01947750(void); };

// @baa 0x01947750
C_01947750* C_01947750::sub_01947750(void) { *(int*)((char*)this + 0) = (int)g_023f8bac; return this; }

struct C_01947760 { void sub_01947760(void); };

// @baa 0x01947760
void C_01947760::sub_01947760(void) { *(int*)((char*)this + 636) = 0; }

struct C_01947770 {
    undefined1 sub_01947770();
};

int sub_018f4040(void);
// @baa 0x01947770
undefined1 C_01947770::sub_01947770(void)
{
    int param_1 = (int)this;

  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) < 1) {
    sub_018f4040();
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return uVar1;
}

// @baa 0x019477a0
void sub_019477a0(void) { sub_018d3de0(); }

struct C_019477b0 { int sub_019477b0(void); };

// @baa 0x019477b0
int C_019477b0::sub_019477b0(void) { return *(int*)((char*)this + 148); }

struct C_019477c0 { void sub_019477c0(int a0); };

// @baa 0x019477c0
void C_019477c0::sub_019477c0(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_019477d0 { int sub_019477d0(void); };

// @baa 0x019477d0
int C_019477d0::sub_019477d0(void) { return *(int*)((char*)this + 28); }

struct C_019477e0 { void sub_019477e0(int a0); };

// @baa 0x019477e0
void C_019477e0::sub_019477e0(int a0) { *(int*)((char*)this + 28) = a0; }

int sub_0196b160(void);
// @baa 0x019477f0
bool sub_019477f0(void)
{
  uint uVar1;
  
  uVar1 = sub_0196b160();
  return 6 < uVar1;
}

struct C_01947810 { char* sub_01947810(void); };

// @baa 0x01947810
char* C_01947810::sub_01947810(void) { return (char*)this + 12; }

struct C_01947820 {
    void sub_01947820(char);
};

// @baa 0x01947820
void C_01947820::sub_01947820(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 4;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffb;
  return;
}

struct C_01947840 {
    void sub_01947840();
};

// @baa 0x01947840
void C_01947840::sub_01947840(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xfffb;
  return;
}

struct C_01947850 {
    ushort sub_01947850();
};

// @baa 0x01947850
ushort C_01947850::sub_01947850(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xe & 1;
}

struct C_01947860 {
    ushort sub_01947860();
};

// @baa 0x01947860
ushort C_01947860::sub_01947860(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xe & 1;
}

struct C_01947870 { int sub_01947870(void); };

// @baa 0x01947870
int C_01947870::sub_01947870(void) { return *(int*)((char*)this + 128); }

// @baa 0x019478c0
void sub_019478c0(void) { sub_018d3de0(); }

// @baa 0x019478d0
void sub_019478d0(void) { sub_018d3de0(); }

struct C_01947990 {
    bool sub_01947990();
};

// @baa 0x01947990
bool C_01947990::sub_01947990(void)
{
    int param_1 = (int)this;

  return *(short *)(param_1 + 8) != 0;
}

struct C_019479a0 {
    undefined4 sub_019479a0();
};

// @baa 0x019479a0
undefined4 C_019479a0::sub_019479a0(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0xb) & 0xc0) == 0) && (*(short *)(param_1 + 8) != 0)) {
    return 1;
  }
  return 0;
}

struct C_019479e0 {
    byte sub_019479e0();
};

// @baa 0x019479e0
byte C_019479e0::sub_019479e0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 8) & 1;
}

struct C_019479f0 {
    byte sub_019479f0();
};

// @baa 0x019479f0
byte C_019479f0::sub_019479f0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xb) >> 5 & 1;
}

struct C_01947a00 {
    bool sub_01947a00();
};

// @baa 0x01947a00
bool C_01947a00::sub_01947a00(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0;
}

struct C_01947a10 {
    bool sub_01947a10();
};

// @baa 0x01947a10
bool C_01947a10::sub_01947a10(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 1;
}

struct C_01947a20 { char* sub_01947a20(void); };

// @baa 0x01947a20
char* C_01947a20::sub_01947a20(void) { return (char*)this + 4; }

struct C_01947a30 { char* sub_01947a30(void); };

// @baa 0x01947a30
char* C_01947a30::sub_01947a30(void) { return (char*)this + 4; }

struct C_01947a40 { char* sub_01947a40(void); };

// @baa 0x01947a40
char* C_01947a40::sub_01947a40(void) { return (char*)this + 4; }

struct C_01947a50 { char* sub_01947a50(void); };

// @baa 0x01947a50
char* C_01947a50::sub_01947a50(void) { return (char*)this + 4; }

struct C_01947a60 {
    undefined4 sub_01947a60();
};

// @baa 0x01947a60
undefined4 C_01947a60::sub_01947a60(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x7d4) == 0) && (*(int *)(param_1 + 0x7f8) == 0)) {
    return 1;
  }
  return 0;
}

struct C_01947a90 { void sub_01947a90(int a0); };

// @baa 0x01947a90
void C_01947a90::sub_01947a90(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_01947aa0 { int sub_01947aa0(void); };

// @baa 0x01947aa0
int C_01947aa0::sub_01947aa0(void) { return *(int*)((char*)this + 40); }

struct C_01947ac0 {
    void sub_01947ac0();
};

// @baa 0x01947ac0
void C_01947ac0::sub_01947ac0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  return;
}

struct C_01947ad0 {
    void sub_01947ad0(int);
};

// @baa 0x01947ad0
void C_01947ad0::sub_01947ad0(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x10) == param_2)) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  return;
}

struct C_01947be0 { void sub_01947be0(void); };

// @baa 0x01947be0
void C_01947be0::sub_01947be0(void) { *(int*)((char*)this + 2548) = 0; }

struct C_01947bf0 { float sub_01947bf0(void); };

// @baa 0x01947bf0
float C_01947bf0::sub_01947bf0(void) { return *(float*)((char*)this + 108); }

struct C_01947c00 {
    undefined1 sub_01947c00();
};

// @baa 0x01947c00
undefined1 C_01947c00::sub_01947c00(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xae8);
}

struct C_01947c10 {
    void sub_01947c10();
};

// @baa 0x01947c10
void C_01947c10::sub_01947c10(void)
{
    int param_1 = (int)this;

  *(undefined2 *)(param_1 + 0xad0) = 0;
  return;
}

struct C_01947c70 {
    undefined1 sub_01947c70();
};

// @baa 0x01947c70
undefined1 C_01947c70::sub_01947c70(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x3c);
}

struct C_01947c80 { float sub_01947c80(void); };

// @baa 0x01947c80
float C_01947c80::sub_01947c80(void) { return *(float*)((char*)this + 48); }

struct C_01947c90 { void sub_01947c90(int a0); };

// @baa 0x01947c90
void C_01947c90::sub_01947c90(int a0) { *(int*)((char*)this + 52) = a0; }

struct C_01947ca0 { int sub_01947ca0(void); };

// @baa 0x01947ca0
int C_01947ca0::sub_01947ca0(void) { return *(int*)((char*)this + 52); }

struct C_01947cb0 { int sub_01947cb0(void); };

// @baa 0x01947cb0
int C_01947cb0::sub_01947cb0(void) { return *(int*)((char*)this + 424); }

struct C_01947cd0 { int sub_01947cd0(void); };

// @baa 0x01947cd0
int C_01947cd0::sub_01947cd0(void) { return *(int*)((char*)this + 176); }

// @baa 0x01947d20
undefined1 sub_01947d20(void)
{
  return 1;
}

// @baa 0x01947d30
void sub_01947d30(void) { sub_018d3de0(); }

struct C_01947e50 {
    void sub_01947e50(int);
};

// @baa 0x01947e50
void C_01947e50::sub_01947e50(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xb14);
  if (piVar1 == (int *)0x0) {
    *(int *)(param_1 + 0xb14) = param_2;
    return;
  }
  iVar2 = *piVar1;
  while (iVar2 != 0) {
    piVar1 = (int *)*piVar1;
    iVar2 = *piVar1;
  }
  *piVar1 = param_2;
  return;
}

struct C_01947f20 {
    void sub_01947f20(undefined4 *);
};

// @baa 0x01947f20
void C_01947f20::sub_01947f20(undefined4 * param_2)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 100);
  return;
}

struct C_01948110 {
    undefined4 sub_01948110();
};

// @baa 0x01948110
undefined4 C_01948110::sub_01948110(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xb0);
}

struct C_019482b0 {
    undefined1 sub_019482b0(char);
};

// @baa 0x019482b0
undefined1 C_019482b0::sub_019482b0(char param_2)
{
    int param_1 = (int)this;

  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x9ca);
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x9ca) = 0;
  }
  return uVar1;
}

struct C_019482d0 { C_019482d0* sub_019482d0(void); };

// @baa 0x019482d0
C_019482d0* C_019482d0::sub_019482d0(void) { return this; }

struct C_01948440 {
    void sub_01948440(undefined4 *);
};

// @baa 0x01948440
void C_01948440::sub_01948440(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = 0x40000;
  return;
}

struct C_019487f0 { C_019487f0* sub_019487f0(void); };

// @baa 0x019487f0
C_019487f0* C_019487f0::sub_019487f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948830 { int sub_01948830(void); };

// @baa 0x01948830
int C_01948830::sub_01948830(void) { return *(int*)((char*)this + 0); }

struct C_01948840 { C_01948840* sub_01948840(void); };

// @baa 0x01948840
C_01948840* C_01948840::sub_01948840(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019488a0 { int sub_019488a0(void); };

// @baa 0x019488a0
int C_019488a0::sub_019488a0(void) { return *(int*)((char*)this + 0); }

struct C_019488b0 { int sub_019488b0(void); };

// @baa 0x019488b0
int C_019488b0::sub_019488b0(void) { return *(int*)((char*)this + 0); }

struct C_019488c0 { C_019488c0* sub_019488c0(void); };

// @baa 0x019488c0
C_019488c0* C_019488c0::sub_019488c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948920 { int sub_01948920(void); };

// @baa 0x01948920
int C_01948920::sub_01948920(void) { return *(int*)((char*)this + 0); }

struct C_01948930 { int sub_01948930(void); };

// @baa 0x01948930
int C_01948930::sub_01948930(void) { return *(int*)((char*)this + 0); }

struct C_01948940 { C_01948940* sub_01948940(void); };

// @baa 0x01948940
C_01948940* C_01948940::sub_01948940(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019489d0 { int sub_019489d0(void); };

// @baa 0x019489d0
int C_019489d0::sub_019489d0(void) { return *(int*)((char*)this + 0); }

struct C_019489f0 { C_019489f0* sub_019489f0(void); };

// @baa 0x019489f0
C_019489f0* C_019489f0::sub_019489f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948a20 { C_01948a20* sub_01948a20(void); };

// @baa 0x01948a20
C_01948a20* C_01948a20::sub_01948a20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948a80 { C_01948a80* sub_01948a80(void); };

// @baa 0x01948a80
C_01948a80* C_01948a80::sub_01948a80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948af0 { C_01948af0* sub_01948af0(void); };

// @baa 0x01948af0
C_01948af0* C_01948af0::sub_01948af0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948b70 { int sub_01948b70(void); };

// @baa 0x01948b70
int C_01948b70::sub_01948b70(void) { return *(int*)((char*)this + 0); }

struct C_01948b80 { int sub_01948b80(void); };

// @baa 0x01948b80
int C_01948b80::sub_01948b80(void) { return *(int*)((char*)this + 0); }

struct C_01948b90 {
    int sub_01948b90(int);
};

// @baa 0x01948b90
int C_01948b90::sub_01948b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01948ba0 { int sub_01948ba0(void); };

// @baa 0x01948ba0
int C_01948ba0::sub_01948ba0(void) { return *(int*)((char*)this + 4); }

struct C_01948bb0 { void sub_01948bb0(void); };

// @baa 0x01948bb0
void C_01948bb0::sub_01948bb0(void) { *(int*)((char*)this + 0) = (int)g_023f8bac; }

// @baa 0x01948bc0
undefined1 sub_01948bc0(void)
{
  return 1;
}

struct C_01948bd0 { C_01948bd0* sub_01948bd0(void); };

// @baa 0x01948bd0
C_01948bd0* C_01948bd0::sub_01948bd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948be0 { C_01948be0* sub_01948be0(void); };

// @baa 0x01948be0
C_01948be0* C_01948be0::sub_01948be0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948c20 { int sub_01948c20(void); };

// @baa 0x01948c20
int C_01948c20::sub_01948c20(void) { return *(int*)((char*)this + 0); }

struct C_01948c30 { C_01948c30* sub_01948c30(void); };

// @baa 0x01948c30
C_01948c30* C_01948c30::sub_01948c30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948ca0 { int sub_01948ca0(void); };

// @baa 0x01948ca0
int C_01948ca0::sub_01948ca0(void) { return *(int*)((char*)this + 0); }

struct C_01948cb0 { int sub_01948cb0(void); };

// @baa 0x01948cb0
int C_01948cb0::sub_01948cb0(void) { return *(int*)((char*)this + 0); }

struct C_01948cc0 {
    int sub_01948cc0(int);
};

// @baa 0x01948cc0
int C_01948cc0::sub_01948cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01948cd0 { int sub_01948cd0(void); };

// @baa 0x01948cd0
int C_01948cd0::sub_01948cd0(void) { return *(int*)((char*)this + 4); }

struct C_01948d60 { int sub_01948d60(void); };

// @baa 0x01948d60
int C_01948d60::sub_01948d60(void) { return *(int*)((char*)this + 0); }

struct C_01948d70 { int sub_01948d70(void); };

// @baa 0x01948d70
int C_01948d70::sub_01948d70(void) { return *(int*)((char*)this + 0); }

struct C_01948d80 { C_01948d80* sub_01948d80(void); };

// @baa 0x01948d80
C_01948d80* C_01948d80::sub_01948d80(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948e30 { int sub_01948e30(void); };

// @baa 0x01948e30
int C_01948e30::sub_01948e30(void) { return *(int*)((char*)this + 0); }

struct C_01948e60 {
    bool sub_01948e60(int);
};

// @baa 0x01948e60
bool C_01948e60::sub_01948e60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_01948e70 { int sub_01948e70(void); };

// @baa 0x01948e70
int C_01948e70::sub_01948e70(void) { return *(int*)((char*)this + 0); }

struct C_01948e80 { int sub_01948e80(void); };

// @baa 0x01948e80
int C_01948e80::sub_01948e80(void) { return *(int*)((char*)this + 0); }

struct C_01948ec0 { int sub_01948ec0(void); };

// @baa 0x01948ec0
int C_01948ec0::sub_01948ec0(void) { return *(int*)((char*)this + 0); }

struct C_01948ed0 { int sub_01948ed0(void); };

// @baa 0x01948ed0
int C_01948ed0::sub_01948ed0(void) { return *(int*)((char*)this + 0); }

struct C_01948f20 { C_01948f20* sub_01948f20(void); };

// @baa 0x01948f20
C_01948f20* C_01948f20::sub_01948f20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948f30 { C_01948f30* sub_01948f30(void); };

// @baa 0x01948f30
C_01948f30* C_01948f30::sub_01948f30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948f40 { C_01948f40* sub_01948f40(void); };

// @baa 0x01948f40
C_01948f40* C_01948f40::sub_01948f40(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01948fc0 { int sub_01948fc0(void); };

// @baa 0x01948fc0
int C_01948fc0::sub_01948fc0(void) { return *(int*)((char*)this + 0); }

struct C_01948fd0 { C_01948fd0* sub_01948fd0(void); };

// @baa 0x01948fd0
C_01948fd0* C_01948fd0::sub_01948fd0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949050 { int sub_01949050(void); };

// @baa 0x01949050
int C_01949050::sub_01949050(void) { return *(int*)((char*)this + 0); }

struct C_01949060 { C_01949060* sub_01949060(void); };

// @baa 0x01949060
C_01949060* C_01949060::sub_01949060(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019490c0 { int sub_019490c0(void); };

// @baa 0x019490c0
int C_019490c0::sub_019490c0(void) { return *(int*)((char*)this + 0); }

struct C_019490d0 { int sub_019490d0(void); };

// @baa 0x019490d0
int C_019490d0::sub_019490d0(void) { return *(int*)((char*)this + 0); }

struct C_019490e0 { C_019490e0* sub_019490e0(void); };

// @baa 0x019490e0
C_019490e0* C_019490e0::sub_019490e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949170 { int sub_01949170(void); };

// @baa 0x01949170
int C_01949170::sub_01949170(void) { return *(int*)((char*)this + 0); }

struct C_01949180 { C_01949180* sub_01949180(void); };

// @baa 0x01949180
C_01949180* C_01949180::sub_01949180(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019491e0 { int sub_019491e0(void); };

// @baa 0x019491e0
int C_019491e0::sub_019491e0(void) { return *(int*)((char*)this + 0); }

struct C_019491f0 { int sub_019491f0(void); };

// @baa 0x019491f0
int C_019491f0::sub_019491f0(void) { return *(int*)((char*)this + 0); }

struct C_01949200 { C_01949200* sub_01949200(void); };

// @baa 0x01949200
C_01949200* C_01949200::sub_01949200(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949260 { int sub_01949260(void); };

// @baa 0x01949260
int C_01949260::sub_01949260(void) { return *(int*)((char*)this + 0); }

struct C_01949270 { int sub_01949270(void); };

// @baa 0x01949270
int C_01949270::sub_01949270(void) { return *(int*)((char*)this + 0); }

struct C_01949280 { C_01949280* sub_01949280(void); };

// @baa 0x01949280
C_01949280* C_01949280::sub_01949280(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019492e0 { int sub_019492e0(void); };

// @baa 0x019492e0
int C_019492e0::sub_019492e0(void) { return *(int*)((char*)this + 0); }

struct C_019492f0 { int sub_019492f0(void); };

// @baa 0x019492f0
int C_019492f0::sub_019492f0(void) { return *(int*)((char*)this + 0); }

struct C_01949300 { int sub_01949300(void); };

// @baa 0x01949300
int C_01949300::sub_01949300(void) { return *(int*)((char*)this + 0); }

struct C_01949310 {
    int sub_01949310(int);
};

// @baa 0x01949310
int C_01949310::sub_01949310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01949320 {
    int sub_01949320(int);
};

// @baa 0x01949320
int C_01949320::sub_01949320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_01949330 { int sub_01949330(void); };

// @baa 0x01949330
int C_01949330::sub_01949330(void) { return *(int*)((char*)this + 4); }

struct C_01949350 { int sub_01949350(void); };

// @baa 0x01949350
int C_01949350::sub_01949350(void) { return *(int*)((char*)this + 4); }

struct C_01949360 {
    bool sub_01949360(int);
};

// @baa 0x01949360
bool C_01949360::sub_01949360(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

struct C_01949370 { C_01949370* sub_01949370(void); };

// @baa 0x01949370
C_01949370* C_01949370::sub_01949370(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949400 { int sub_01949400(void); };

// @baa 0x01949400
int C_01949400::sub_01949400(void) { return *(int*)((char*)this + 0); }

struct C_01949410 { C_01949410* sub_01949410(void); };

// @baa 0x01949410
C_01949410* C_01949410::sub_01949410(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949450 { C_01949450* sub_01949450(void); };

// @baa 0x01949450
C_01949450* C_01949450::sub_01949450(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019494b0 { int sub_019494b0(void); };

// @baa 0x019494b0
int C_019494b0::sub_019494b0(void) { return *(int*)((char*)this + 0); }

struct C_019494c0 { int sub_019494c0(void); };

// @baa 0x019494c0
int C_019494c0::sub_019494c0(void) { return *(int*)((char*)this + 0); }

struct C_019494d0 { C_019494d0* sub_019494d0(void); };

// @baa 0x019494d0
C_019494d0* C_019494d0::sub_019494d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949530 { int sub_01949530(void); };

// @baa 0x01949530
int C_01949530::sub_01949530(void) { return *(int*)((char*)this + 0); }

struct C_01949540 { int sub_01949540(void); };

// @baa 0x01949540
int C_01949540::sub_01949540(void) { return *(int*)((char*)this + 0); }

struct C_01949550 { int sub_01949550(void); };

// @baa 0x01949550
int C_01949550::sub_01949550(void) { return *(int*)((char*)this + 0); }

struct C_01949590 { int sub_01949590(void); };

// @baa 0x01949590
int C_01949590::sub_01949590(void) { return *(int*)((char*)this + 0); }

struct C_019495a0 {
    int sub_019495a0(int);
};

// @baa 0x019495a0
int C_019495a0::sub_019495a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019495b0 {
    int sub_019495b0(int);
};

// @baa 0x019495b0
int C_019495b0::sub_019495b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019495c0 { int sub_019495c0(void); };

// @baa 0x019495c0
int C_019495c0::sub_019495c0(void) { return *(int*)((char*)this + 4); }

struct C_019495d0 {
    int sub_019495d0(int);
};

// @baa 0x019495d0
int C_019495d0::sub_019495d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_019495e0 { int sub_019495e0(void); };

// @baa 0x019495e0
int C_019495e0::sub_019495e0(void) { return *(int*)((char*)this + 4); }

struct C_019495f0 {
    int sub_019495f0(int);
};

// @baa 0x019495f0
int C_019495f0::sub_019495f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01949600 { int sub_01949600(void); };

// @baa 0x01949600
int C_01949600::sub_01949600(void) { return *(int*)((char*)this + 4); }

struct C_01949630 { C_01949630* sub_01949630(void); };

// @baa 0x01949630
C_01949630* C_01949630::sub_01949630(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_019496c0 { int sub_019496c0(void); };

// @baa 0x019496c0
int C_019496c0::sub_019496c0(void) { return *(int*)((char*)this + 0); }

struct C_019496d0 { int sub_019496d0(void); };

// @baa 0x019496d0
int C_019496d0::sub_019496d0(void) { return *(int*)((char*)this + 0); }

struct C_01949800 { int sub_01949800(void); };

// @baa 0x01949800
int C_01949800::sub_01949800(void) { return *(int*)((char*)this + 0); }

struct C_01949900 {
    bool sub_01949900();
};

// @baa 0x01949900
bool C_01949900::sub_01949900(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01949990 {
    uint sub_01949990();
};

// @baa 0x01949990
uint C_01949990::sub_01949990(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019499a0 {
    uint sub_019499a0();
};

// @baa 0x019499a0
uint C_019499a0::sub_019499a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949a00 {
    uint sub_01949a00();
};

// @baa 0x01949a00
uint C_01949a00::sub_01949a00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949a10 {
    bool sub_01949a10();
};

// @baa 0x01949a10
bool C_01949a10::sub_01949a10(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01949a20 {
    bool sub_01949a20();
};

// @baa 0x01949a20
bool C_01949a20::sub_01949a20(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01949a40 { unsigned sub_01949a40(void); };

// @baa 0x01949a40
unsigned C_01949a40::sub_01949a40(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949a50 { unsigned sub_01949a50(void); };

// @baa 0x01949a50
unsigned C_01949a50::sub_01949a50(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949a60 {
    uint sub_01949a60();
};

// @baa 0x01949a60
uint C_01949a60::sub_01949a60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949a70 {
    void sub_01949a70(uint);
};

// @baa 0x01949a70
void C_01949a70::sub_01949a70(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949a90 { unsigned sub_01949a90(void); };

// @baa 0x01949a90
unsigned C_01949a90::sub_01949a90(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949aa0 { unsigned sub_01949aa0(void); };

// @baa 0x01949aa0
unsigned C_01949aa0::sub_01949aa0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949ab0 {
    uint sub_01949ab0();
};

// @baa 0x01949ab0
uint C_01949ab0::sub_01949ab0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949ac0 {
    void sub_01949ac0(uint);
};

// @baa 0x01949ac0
void C_01949ac0::sub_01949ac0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949b00 {
    uint sub_01949b00();
};

// @baa 0x01949b00
uint C_01949b00::sub_01949b00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949b10 { C_01949b10* sub_01949b10(void); };

// @baa 0x01949b10
C_01949b10* C_01949b10::sub_01949b10(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949b40 {
    uint sub_01949b40();
};

// @baa 0x01949b40
uint C_01949b40::sub_01949b40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949b50 {
    uint sub_01949b50();
};

// @baa 0x01949b50
uint C_01949b50::sub_01949b50(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949b60 { unsigned sub_01949b60(void); };

// @baa 0x01949b60
unsigned C_01949b60::sub_01949b60(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949b70 { unsigned sub_01949b70(void); };

// @baa 0x01949b70
unsigned C_01949b70::sub_01949b70(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949b80 {
    uint sub_01949b80();
};

// @baa 0x01949b80
uint C_01949b80::sub_01949b80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949b90 {
    void sub_01949b90(uint);
};

// @baa 0x01949b90
void C_01949b90::sub_01949b90(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949bb0 { C_01949bb0* sub_01949bb0(void); };

// @baa 0x01949bb0
C_01949bb0* C_01949bb0::sub_01949bb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01949bc0 { unsigned sub_01949bc0(void); };

// @baa 0x01949bc0
unsigned C_01949bc0::sub_01949bc0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949bd0 { unsigned sub_01949bd0(void); };

// @baa 0x01949bd0
unsigned C_01949bd0::sub_01949bd0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949be0 {
    uint sub_01949be0();
};

// @baa 0x01949be0
uint C_01949be0::sub_01949be0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949bf0 {
    void sub_01949bf0(uint);
};

// @baa 0x01949bf0
void C_01949bf0::sub_01949bf0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949c10 { unsigned sub_01949c10(void); };

// @baa 0x01949c10
unsigned C_01949c10::sub_01949c10(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949c20 { unsigned sub_01949c20(void); };

// @baa 0x01949c20
unsigned C_01949c20::sub_01949c20(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949c30 {
    uint sub_01949c30();
};

// @baa 0x01949c30
uint C_01949c30::sub_01949c30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949c40 {
    void sub_01949c40(uint);
};

// @baa 0x01949c40
void C_01949c40::sub_01949c40(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949c60 { unsigned sub_01949c60(void); };

// @baa 0x01949c60
unsigned C_01949c60::sub_01949c60(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949c70 { unsigned sub_01949c70(void); };

// @baa 0x01949c70
unsigned C_01949c70::sub_01949c70(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949c80 {
    uint sub_01949c80();
};

// @baa 0x01949c80
uint C_01949c80::sub_01949c80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949c90 {
    void sub_01949c90(uint);
};

// @baa 0x01949c90
void C_01949c90::sub_01949c90(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949d00 {
    uint sub_01949d00();
};

// @baa 0x01949d00
uint C_01949d00::sub_01949d00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949d10 {
    uint sub_01949d10();
};

// @baa 0x01949d10
uint C_01949d10::sub_01949d10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01949d20 {
    int sub_01949d20(int);
};

// @baa 0x01949d20
int C_01949d20::sub_01949d20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 0x1c;
}

struct C_01949d40 {
    bool sub_01949d40();
};

// @baa 0x01949d40
bool C_01949d40::sub_01949d40(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01949d50 { unsigned sub_01949d50(void); };

// @baa 0x01949d50
unsigned C_01949d50::sub_01949d50(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949d60 { unsigned sub_01949d60(void); };

// @baa 0x01949d60
unsigned C_01949d60::sub_01949d60(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949d70 {
    uint sub_01949d70();
};

// @baa 0x01949d70
uint C_01949d70::sub_01949d70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949d80 {
    void sub_01949d80(uint);
};

// @baa 0x01949d80
void C_01949d80::sub_01949d80(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01949da0 { unsigned sub_01949da0(void); };

// @baa 0x01949da0
unsigned C_01949da0::sub_01949da0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01949db0 { unsigned sub_01949db0(void); };

// @baa 0x01949db0
unsigned C_01949db0::sub_01949db0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01949dc0 {
    uint sub_01949dc0();
};

// @baa 0x01949dc0
uint C_01949dc0::sub_01949dc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01949dd0 {
    void sub_01949dd0(uint);
};

// @baa 0x01949dd0
void C_01949dd0::sub_01949dd0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01949ea0
int sub_01949ea0(int a0) { return a0; }

// @baa 0x01949eb0
undefined4 * sub_01949eb0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x01949ed0
undefined4 * sub_01949ed0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x01949ef0
int sub_01949ef0(int a0) { return a0; }

// @baa 0x01949f00
undefined4 * sub_01949f00(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

void sub_018f3d60();
// @baa 0x01949f20
void sub_01949f20(void) { sub_018f3d60(); }

struct C_01949f30 { int sub_01949f30(void); };

// @baa 0x01949f30
int C_01949f30::sub_01949f30(void) { return *(int*)((char*)this + 0); }

struct C_01949f40 { int sub_01949f40(void); };

// @baa 0x01949f40
int C_01949f40::sub_01949f40(void) { return *(int*)((char*)this + 0); }

struct C_01949f50 {
    bool sub_01949f50();
};

// @baa 0x01949f50
bool C_01949f50::sub_01949f50(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -1;
}

struct C_01949fc0 {
    undefined4 sub_01949fc0();
};

// @baa 0x01949fc0
undefined4 C_01949fc0::sub_01949fc0(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_01949fd0 {
    undefined4 sub_01949fd0();
};

// @baa 0x01949fd0
undefined4 C_01949fd0::sub_01949fd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x0194a000
void __stdcall sub_0194a000(int a0) {  }

struct C_0194a010 {
    undefined4 sub_0194a010();
};

// @baa 0x0194a010
undefined4 C_0194a010::sub_0194a010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)(*(int *)*param_1 + 0x10);
}

// @baa 0x0194a020
void __stdcall sub_0194a020(int a0) {  }

// @baa 0x0194a070
undefined1 * sub_0194a070(undefined1 * param_1, undefined1 * param_2)
{
  undefined1 uVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    *param_1 = 2;
    param_1[4] = uVar1;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x0194a090
undefined1 * sub_0194a090(undefined1 * param_1, undefined1 * param_2)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x0194a0b0
undefined1 * sub_0194a0b0(undefined1 * param_1, int * param_2)
{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 5;
    iVar2 = *param_2;
    *(int *)(param_1 + 4) = iVar2;
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + 1;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x0194a0d0
undefined4 sub_0194a0d0(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_0194a0e0 {
    undefined4 sub_0194a0e0();
};

// @baa 0x0194a0e0
undefined4 C_0194a0e0::sub_0194a0e0(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_0194a0f0 {
    int sub_0194a0f0(int);
};

// @baa 0x0194a0f0
int C_0194a0f0::sub_0194a0f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + 8 + param_2 * 0x1c;
}

struct C_0194a110 { int sub_0194a110(void); };

// @baa 0x0194a110
int C_0194a110::sub_0194a110(void) { return *(int*)((char*)this + 0); }

// @baa 0x0194a120
undefined4 sub_0194a120(int * param_1)
{
  return *(undefined4 *)(*param_1 + 0x10);
}

struct C_0194a1f0 { int sub_0194a1f0(void); };

// @baa 0x0194a1f0
int C_0194a1f0::sub_0194a1f0(void) { return *(int*)((char*)this + 20); }

struct C_0194a2d0 {
    undefined4 * sub_0194a2d0(byte);
};

int sub_00402660(...);
// @baa 0x0194a2d0
undefined4 * C_0194a2d0::sub_0194a2d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f8bac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0194a320 { int sub_0194a320(void); };

// @baa 0x0194a320
int C_0194a320::sub_0194a320(void) { return *(int*)((char*)this + 28); }

struct C_0194a380 {
    int sub_0194a380();
};

// @baa 0x0194a380
int C_0194a380::sub_0194a380(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1c) + 0x2c;
}

struct C_0194a390 {
    undefined4 sub_0194a390();
};

// @baa 0x0194a390
undefined4 C_0194a390::sub_0194a390(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c) + 0x24);
}

struct C_0194a3b0 {
    undefined4 sub_0194a3b0();
};

// @baa 0x0194a3b0
undefined4 C_0194a3b0::sub_0194a3b0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x1c) + 0x70);
}

struct C_0194a4a0 { int sub_0194a4a0(void); };

// @baa 0x0194a4a0
int C_0194a4a0::sub_0194a4a0(void) { return *(int*)((char*)this + 20); }

struct C_0194a5d0 {
    void sub_0194a5d0(int *);
};

// @baa 0x0194a5d0
void C_0194a5d0::sub_0194a5d0(int * param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 0xc) == *param_2)) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  return;
}

struct C_0194a730 {
    undefined4 sub_0194a730();
};

// @baa 0x0194a730
undefined4 C_0194a730::sub_0194a730(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
}

struct C_0194a7a0 { int sub_0194a7a0(void); };

// @baa 0x0194a7a0
int C_0194a7a0::sub_0194a7a0(void) { return *(int*)((char*)this + 44); }

// @baa 0x0194a960
void sub_0194a960(void) { sub_018d3de0(); }

struct C_0194aa30 { C_0194aa30* sub_0194aa30(void); };

// @baa 0x0194aa30
C_0194aa30* C_0194aa30::sub_0194aa30(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_0194b160 { int sub_0194b160(void); };

// @baa 0x0194b160
int C_0194b160::sub_0194b160(void) { return *(int*)((char*)this + 40); }

struct C_0194bd20 {
    int sub_0194bd20();
};

// @baa 0x0194bd20
int C_0194bd20::sub_0194bd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}

// @baa 0x0194c3d0
undefined4 * sub_0194c3d0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x0194c750
void sub_0194c750(void) { sub_018d3de0(); }

struct C_0194f0f0 {
    int sub_0194f0f0();
};

// @baa 0x0194f0f0
int C_0194f0f0::sub_0194f0f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + (param_1[1] + 1) * 0xc;
}
