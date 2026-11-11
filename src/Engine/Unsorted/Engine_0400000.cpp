// Engine_0400000.cpp (part 1 of 3): 206 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

extern int g_02617620;
int sub_0043f7e0();
// @baa 0x00404cd0
int sub_00404cd0() { if (!g_02617620) g_02617620 = sub_0043f7e0(); return g_02617620; }

extern int g_02618844;
int sub_00479480();
// @baa 0x00404cf0
int sub_00404cf0() { if (!g_02618844) g_02618844 = sub_00479480(); return g_02618844; }

extern int g_02618840;
int sub_00463ad0();
// @baa 0x00404d10
int sub_00404d10() { if (!g_02618840) g_02618840 = sub_00463ad0(); return g_02618840; }

extern int g_02618834;
int sub_00478d40();
// @baa 0x00404d30
int sub_00404d30() { if (!g_02618834) g_02618834 = sub_00478d40(); return g_02618834; }

extern int g_02618838;
int sub_00475df0();
// @baa 0x00404d50
int sub_00404d50() { if (!g_02618838) g_02618838 = sub_00475df0(); return g_02618838; }

// @baa 0x00404e20
void sub_00404e20(void) {  }

// @baa 0x00404e50
void __stdcall sub_00404e50(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00404e60
void __stdcall sub_00404e60(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00404e70
void __stdcall sub_00404e70(int a0, int a1) {  }

// @baa 0x00404e80
int __stdcall sub_00404e80(int a0) { return 0; }

// @baa 0x00404e90
int sub_00404e90(void) { return 0; }

// @baa 0x00404ea0
void __stdcall sub_00404ea0(int a0) {  }

// @baa 0x00404eb0
void __stdcall sub_00404eb0(int a0) {  }

// @baa 0x00404ec0
void __stdcall sub_00404ec0(int a0) {  }

// @baa 0x00404ed0
void __stdcall sub_00404ed0(int a0) {  }

// @baa 0x00404ee0
void __stdcall sub_00404ee0(int a0) {  }

// @baa 0x00404ef0
int __stdcall sub_00404ef0(int a0) { return 1; }

// @baa 0x00404f00
void __stdcall sub_00404f00(int a0) {  }

// @baa 0x00404f10
int sub_00404f10(void) { return 1; }

// @baa 0x00404f20
int sub_00404f20(void) { return 0; }

// @baa 0x00404f30
int sub_00404f30(void) { return 1; }

// @baa 0x00404f40
int sub_00404f40(void) { return 0; }

struct C { int sub_00404f50(void); };

// @baa 0x00404f50
int C::sub_00404f50(void) { return *(int*)((char*)this + 24); }

struct C_00404f60 { int sub_00404f60(void); };

// @baa 0x00404f60
int C_00404f60::sub_00404f60(void) { return *(int*)((char*)this + 836); }

struct Inner {
    char pad[0x14];
    Inner *field_0x14;
};

struct S {
    Inner *p;
    S *sub_0040cdc0();
};

// @baa 0x0040cdc0
S *S::sub_0040cdc0()
{
    p = p->field_0x14;
    return this;
}

struct C_0040cdd0 { int sub_0040cdd0(void); };

// @baa 0x0040cdd0
int C_0040cdd0::sub_0040cdd0(void) { return *(int*)((char*)this + 0); }

struct C_0040ce00 { int sub_0040ce00(void); };

// @baa 0x0040ce00
int C_0040ce00::sub_0040ce00(void) { return *(int*)((char*)this + 0); }

struct C_0040ce30 { int sub_0040ce30(void); };

// @baa 0x0040ce30
int C_0040ce30::sub_0040ce30(void) { return *(int*)((char*)this + 4); }

// @baa 0x0040ce40
int sub_0040ce40(void) { return 1; }

// @baa 0x0040ce50
int sub_0040ce50(void) { return 16; }

// @baa 0x0040ce60
int sub_0040ce60(void) { return 16000; }

struct C_0040ce90 { int sub_0040ce90(void); };

// @baa 0x0040ce90
int C_0040ce90::sub_0040ce90(void) { return *(int*)((char*)this + 0); }

struct C_0040cea0 { int sub_0040cea0(void); };

// @baa 0x0040cea0
int C_0040cea0::sub_0040cea0(void) { return *(int*)((char*)this + 4); }

struct C_0040ceb0 { int sub_0040ceb0(void); };

// @baa 0x0040ceb0
int C_0040ceb0::sub_0040ceb0(void) { return *(int*)((char*)this + 0); }

struct C_0040cec0 { int sub_0040cec0(void); };

// @baa 0x0040cec0
int C_0040cec0::sub_0040cec0(void) { return *(int*)((char*)this + 0); }

struct S_0040ced0 {
    TArray<WORD> Words; // 0x00
    WORD* sub_0040ced0(INT Index);
};

// @baa 0x0040ced0
WORD* S_0040ced0::sub_0040ced0(INT Index)
{
    return &Words(Index);
}

struct C_0040cf20 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0040cf20(INT Index);
};

// @baa 0x0040cf20
UBOOL C_0040cf20::sub_0040cf20(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0040cf40 { int sub_0040cf40(void); };

// @baa 0x0040cf40
int C_0040cf40::sub_0040cf40(void) { return *(int*)((char*)this + 4); }

struct C_0040cf50 { int sub_0040cf50(void); };

// @baa 0x0040cf50
int C_0040cf50::sub_0040cf50(void) { return *(int*)((char*)this + 0); }

struct C_0040cf60 { int sub_0040cf60(void); };

// @baa 0x0040cf60
int C_0040cf60::sub_0040cf60(void) { return *(int*)((char*)this + 4); }

struct C_0040cfe0 { int a, b, c; C_0040cfe0(); };

// @baa 0x0040cfe0
C_0040cfe0::C_0040cfe0() : a(0), b(0), c(0) {}

struct C_0040cff0{
void sub_0040cff0();
};

extern undefined4*g_026b0d94;
// @baa 0x0040cff0
void C_0040cff0::sub_0040cff0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(*param_1));
}
return;
}

struct C_0040d030{
void sub_0040d030();
};

// @baa 0x0040d030
void C_0040d030::sub_0040d030(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(*param_1));
}
return;
}

struct C_0040d070{
void sub_0040d070();
};

// @baa 0x0040d070
void C_0040d070::sub_0040d070(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(*param_1));
}
return;
}

struct C_0040d090{
void sub_0040d090();
};

// @baa 0x0040d090
void C_0040d090::sub_0040d090(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(*param_1));
}
return;
}

struct C_0040d0b0{
void sub_0040d0b0();
};

// @baa 0x0040d0b0
void C_0040d0b0::sub_0040d0b0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x240))((int)(*param_1));
}
return;
}

struct C_0040d0d0{
void sub_0040d0d0();
};

// @baa 0x0040d0d0
void C_0040d0d0::sub_0040d0d0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x244))((int)(*param_1));
}
return;
}

struct C_0040d0f0{
void sub_0040d0f0();
};

// @baa 0x0040d0f0
void C_0040d0f0::sub_0040d0f0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(*param_1));
}
return;
}

struct C_0040d110{
void sub_0040d110();
};

// @baa 0x0040d110
void C_0040d110::sub_0040d110(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(*param_1));
}
return;
}

struct C_0040d130{
void sub_0040d130();
};

// @baa 0x0040d130
void C_0040d130::sub_0040d130(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(*param_1));
}
return;
}

struct C_0040d150{
void sub_0040d150();
};

// @baa 0x0040d150
void C_0040d150::sub_0040d150(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(*param_1));
}
return;
}

struct C_0040d170{
void sub_0040d170();
};

// @baa 0x0040d170
void C_0040d170::sub_0040d170(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x21c))((int)(*param_1));
}
return;
}

struct C_0040d190{
void sub_0040d190();
};

// @baa 0x0040d190
void C_0040d190::sub_0040d190(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x220))((int)(*param_1));
}
return;
}

struct C_0040d1b0{
void sub_0040d1b0();
};

// @baa 0x0040d1b0
void C_0040d1b0::sub_0040d1b0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x224))((int)(*param_1));
}
return;
}

struct C_0040d1d0{
void sub_0040d1d0();
};

// @baa 0x0040d1d0
void C_0040d1d0::sub_0040d1d0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(*param_1));
}
return;
}

struct C_0040d1f0{
void sub_0040d1f0();
};

// @baa 0x0040d1f0
void C_0040d1f0::sub_0040d1f0(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*param_1));
}
return;
}

struct C_0040d210{
void sub_0040d210();
};

// @baa 0x0040d210
void C_0040d210::sub_0040d210(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x214))((int)(*param_1));
}
return;
}

struct C_0040d230 { int sub_0040d230(void); };

// @baa 0x0040d230
int C_0040d230::sub_0040d230(void) { return *(int*)((char*)this + 4); }

struct C_0040d240 { int a, b, c; C_0040d240(); };

// @baa 0x0040d240
C_0040d240::C_0040d240() : a(0), b(0), c(0) {}

struct C_0040d250 { int sub_0040d250(void); };

// @baa 0x0040d250
int C_0040d250::sub_0040d250(void) { return *(int*)((char*)this + 4); }

struct N_0040d260 { char pad[48]; N_0040d260* next; };

struct It_0040d260 { N_0040d260* p; It_0040d260& sub_0040d260(); };

// @baa 0x0040d260
It_0040d260& It_0040d260::sub_0040d260() { p = p->next; return *this; }

struct C_0040d270 { int sub_0040d270(void); };

// @baa 0x0040d270
int C_0040d270::sub_0040d270(void) { return *(int*)((char*)this + 0); }

extern char g_01e4037c[];
struct C_0040d2c0 { void sub_0040d2c0(void); };

// @baa 0x0040d2c0
void C_0040d2c0::sub_0040d2c0(void) { *(int*)((char*)this + 0) = (int)g_01e4037c; }

struct C_0040d2d0 {
    int sub_0040d2d0(int);
};

// @baa 0x0040d2d0
int C_0040d2d0::sub_0040d2d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 2;
}

// @baa 0x0040d2e0
void __stdcall sub_0040d2e0(int a0, int a1) {  }

struct C_0040d2f0 { int sub_0040d2f0(void); };

// @baa 0x0040d2f0
int C_0040d2f0::sub_0040d2f0(void) { return *(int*)((char*)this + 0); }

struct C_0040d300 { int sub_0040d300(void); };

// @baa 0x0040d300
int C_0040d300::sub_0040d300(void) { return *(int*)((char*)this + 0); }

struct C_0040d310 { int sub_0040d310(void); };

// @baa 0x0040d310
int C_0040d310::sub_0040d310(void) { return *(int*)((char*)this + 0); }

struct C_0040d320 { int sub_0040d320(void); };

// @baa 0x0040d320
int C_0040d320::sub_0040d320(void) { return *(int*)((char*)this + 0); }

struct C_0040d330 { C_0040d330* sub_0040d330(void); };

// @baa 0x0040d330
C_0040d330* C_0040d330::sub_0040d330(void) { *(int*)((char*)this + 0) = (int)g_01e4037c; return this; }

struct C_0040d340 { int sub_0040d340(void); };

// @baa 0x0040d340
int C_0040d340::sub_0040d340(void) { return *(int*)((char*)this + 0); }

struct C_0040d350 { int sub_0040d350(void); };

// @baa 0x0040d350
int C_0040d350::sub_0040d350(void) { return *(int*)((char*)this + 0); }

struct C_0040d360 { int sub_0040d360(void); };

// @baa 0x0040d360
int C_0040d360::sub_0040d360(void) { return *(int*)((char*)this + 0); }

struct C_0040d370 { int sub_0040d370(void); };

// @baa 0x0040d370
int C_0040d370::sub_0040d370(void) { return *(int*)((char*)this + 0); }

struct C_0040d380 { int sub_0040d380(void); };

// @baa 0x0040d380
int C_0040d380::sub_0040d380(void) { return *(int*)((char*)this + 0); }

struct C_0040d390 { int sub_0040d390(void); };

// @baa 0x0040d390
int C_0040d390::sub_0040d390(void) { return *(int*)((char*)this + 0); }

struct C_0040d3a0 { int sub_0040d3a0(void); };

// @baa 0x0040d3a0
int C_0040d3a0::sub_0040d3a0(void) { return *(int*)((char*)this + 0); }

struct C_0040d3b0 { int sub_0040d3b0(void); };

// @baa 0x0040d3b0
int C_0040d3b0::sub_0040d3b0(void) { return *(int*)((char*)this + 0); }

struct C_0040d3c0 { int sub_0040d3c0(void); };

// @baa 0x0040d3c0
int C_0040d3c0::sub_0040d3c0(void) { return *(int*)((char*)this + 0); }

struct C_0040d3d0 { int sub_0040d3d0(void); };

// @baa 0x0040d3d0
int C_0040d3d0::sub_0040d3d0(void) { return *(int*)((char*)this + 0); }

struct C_0040d3e0 { int sub_0040d3e0(void); };

// @baa 0x0040d3e0
int C_0040d3e0::sub_0040d3e0(void) { return *(int*)((char*)this + 0); }

struct C_0040d3f0 { int sub_0040d3f0(void); };

// @baa 0x0040d3f0
int C_0040d3f0::sub_0040d3f0(void) { return *(int*)((char*)this + 0); }

struct C_0040d400 { int sub_0040d400(void); };

// @baa 0x0040d400
int C_0040d400::sub_0040d400(void) { return *(int*)((char*)this + 0); }

struct C_0040d410 { int sub_0040d410(void); };

// @baa 0x0040d410
int C_0040d410::sub_0040d410(void) { return *(int*)((char*)this + 0); }

struct C_0040d420 { int sub_0040d420(void); };

// @baa 0x0040d420
int C_0040d420::sub_0040d420(void) { return *(int*)((char*)this + 0); }

struct C_0040d430 { int sub_0040d430(void); };

// @baa 0x0040d430
int C_0040d430::sub_0040d430(void) { return *(int*)((char*)this + 0); }

struct C_0040d440 { void sub_0040d440(void); };

// @baa 0x0040d440
void C_0040d440::sub_0040d440(void) { *(int*)((char*)this + 8) = 0; }

struct C_0040d450 { int sub_0040d450(void); };

// @baa 0x0040d450
int C_0040d450::sub_0040d450(void) { return *(int*)((char*)this + 8); }

struct C_0040d460 {
    bool sub_0040d460();
};

// @baa 0x0040d460
bool C_0040d460::sub_0040d460(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_0040d470 {
    int sub_0040d470(int);
};

// @baa 0x0040d470
int C_0040d470::sub_0040d470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_0040d480 {
    int sub_0040d480(int);
};

// @baa 0x0040d480
int C_0040d480::sub_0040d480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_0040d490 { int sub_0040d490(void); };

// @baa 0x0040d490
int C_0040d490::sub_0040d490(void) { return *(int*)((char*)this + 8); }

struct C_0040d4a0 {
    int sub_0040d4a0(int);
};

// @baa 0x0040d4a0
int C_0040d4a0::sub_0040d4a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0040d4b0 {
    int sub_0040d4b0(int);
};

// @baa 0x0040d4b0
int C_0040d4b0::sub_0040d4b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0040d4c0 { int sub_0040d4c0(void); };

// @baa 0x0040d4c0
int C_0040d4c0::sub_0040d4c0(void) { return *(int*)((char*)this + 8); }

struct C_0040d4d0 {
    int sub_0040d4d0(int);
};

// @baa 0x0040d4d0
int C_0040d4d0::sub_0040d4d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_0040d4f0 {
    INT Unk00;
    INT Unk04;
    S_0040d4f0 *sub_0040d4f0();
};

// @baa 0x0040d4f0
S_0040d4f0 *S_0040d4f0::sub_0040d4f0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0040d500 {
    undefined4 sub_0040d500();
};

// @baa 0x0040d500
undefined4 C_0040d500::sub_0040d500(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_0040d510 { int sub_0040d510(void); };

// @baa 0x0040d510
int C_0040d510::sub_0040d510(void) { return *(int*)((char*)this + 8); }

struct C_0040d520 {
    int sub_0040d520(int);
};

// @baa 0x0040d520
int C_0040d520::sub_0040d520(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0040d530 { int sub_0040d530(void); };

// @baa 0x0040d530
int C_0040d530::sub_0040d530(void) { return *(int*)((char*)this + 8); }

struct C_0040d540 { int sub_0040d540(void); };

// @baa 0x0040d540
int C_0040d540::sub_0040d540(void) { return *(int*)((char*)this + 0); }

struct C_0040d550 {
    int sub_0040d550();
};

// @baa 0x0040d550
int C_0040d550::sub_0040d550(void)
{
    int * param_1 = (int *)this;

  return *param_1 + param_1[2] * 4;
}

struct C_0040d560 { int sub_0040d560(void); };

// @baa 0x0040d560
int C_0040d560::sub_0040d560(void) { return *(int*)((char*)this + 8); }

struct C_0040d570 {
    int sub_0040d570(int);
};

// @baa 0x0040d570
int C_0040d570::sub_0040d570(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_0040d580 {
    int sub_0040d580(int);
};

// @baa 0x0040d580
int C_0040d580::sub_0040d580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0040d590 { int sub_0040d590(void); };

// @baa 0x0040d590
int C_0040d590::sub_0040d590(void) { return *(int*)((char*)this + 8); }

struct C_0040d5a0 { int sub_0040d5a0(void); };

// @baa 0x0040d5a0
int C_0040d5a0::sub_0040d5a0(void) { return *(int*)((char*)this + 8); }

struct C_0040d5b0 {
    int sub_0040d5b0(int);
};

// @baa 0x0040d5b0
int C_0040d5b0::sub_0040d5b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_0040d5c0 {
    int sub_0040d5c0(int);
};

// @baa 0x0040d5c0
int C_0040d5c0::sub_0040d5c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_0040d5d0 { int sub_0040d5d0(void); };

// @baa 0x0040d5d0
int C_0040d5d0::sub_0040d5d0(void) { return *(int*)((char*)this + 8); }

struct C_0040d5e0 {
    int sub_0040d5e0(int);
};

// @baa 0x0040d5e0
int C_0040d5e0::sub_0040d5e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0040d5f0 { int sub_0040d5f0(void); };

// @baa 0x0040d5f0
int C_0040d5f0::sub_0040d5f0(void) { return *(int*)((char*)this + 8); }

struct C_0040d600 {
    int sub_0040d600(int);
};

// @baa 0x0040d600
int C_0040d600::sub_0040d600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0040d610 {
    int sub_0040d610(int);
};

// @baa 0x0040d610
int C_0040d610::sub_0040d610(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0040d620 { int sub_0040d620(void); };

// @baa 0x0040d620
int C_0040d620::sub_0040d620(void) { return *(int*)((char*)this + 8); }

struct C_0040d630 {
    int sub_0040d630(int);
};

// @baa 0x0040d630
int C_0040d630::sub_0040d630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_0040d640 {
    int sub_0040d640(int);
};

// @baa 0x0040d640
int C_0040d640::sub_0040d640(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_0040d650 { int sub_0040d650(void); };

// @baa 0x0040d650
int C_0040d650::sub_0040d650(void) { return *(int*)((char*)this + 8); }

struct C_0040d660 {
    int sub_0040d660(int);
};

// @baa 0x0040d660
int C_0040d660::sub_0040d660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d670 {
    int sub_0040d670(int);
};

// @baa 0x0040d670
int C_0040d670::sub_0040d670(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d680 { int sub_0040d680(void); };

// @baa 0x0040d680
int C_0040d680::sub_0040d680(void) { return *(int*)((char*)this + 8); }

struct C_0040d690 {
    int sub_0040d690(int);
};

// @baa 0x0040d690
int C_0040d690::sub_0040d690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0040d6a0 {
    int sub_0040d6a0(int);
};

// @baa 0x0040d6a0
int C_0040d6a0::sub_0040d6a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0040d6b0 { int sub_0040d6b0(void); };

// @baa 0x0040d6b0
int C_0040d6b0::sub_0040d6b0(void) { return *(int*)((char*)this + 4); }

struct S_0040d6c0 {
    INT Unk00;
    INT Unk04;
    S_0040d6c0 *sub_0040d6c0();
};

// @baa 0x0040d6c0
S_0040d6c0 *S_0040d6c0::sub_0040d6c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0040d6d0 { int a, b; C_0040d6d0(int, int); };

// @baa 0x0040d6d0
C_0040d6d0::C_0040d6d0(int x, int y) : a(x), b(y) {}

struct C_0040d6f0 { int sub_0040d6f0(void); };

// @baa 0x0040d6f0
int C_0040d6f0::sub_0040d6f0(void) { return *(int*)((char*)this + 8); }

struct C_0040d700 {
    int sub_0040d700(int);
};

// @baa 0x0040d700
int C_0040d700::sub_0040d700(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d710 { int sub_0040d710(void); };

// @baa 0x0040d710
int C_0040d710::sub_0040d710(void) { return *(int*)((char*)this + 8); }

struct C_0040d720 {
    int sub_0040d720(int);
};

// @baa 0x0040d720
int C_0040d720::sub_0040d720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d730 { int sub_0040d730(void); };

// @baa 0x0040d730
int C_0040d730::sub_0040d730(void) { return *(int*)((char*)this + 8); }

struct C_0040d740 {
    int sub_0040d740(int);
};

// @baa 0x0040d740
int C_0040d740::sub_0040d740(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d750 {
    int sub_0040d750();
};

// @baa 0x0040d750
int C_0040d750::sub_0040d750(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[2] * 4;
}

struct C_0040d760 { int sub_0040d760(void); };

// @baa 0x0040d760
int C_0040d760::sub_0040d760(void) { return *(int*)((char*)this + 8); }

struct C_0040d770 {
    int sub_0040d770(int);
};

// @baa 0x0040d770
int C_0040d770::sub_0040d770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0040d780 {
    void sub_0040d780();
};

int sub_01ab3290(...);
// @baa 0x0040d780
void C_0040d780::sub_0040d780(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

struct C_0040d7b0 { int sub_0040d7b0(void); };

// @baa 0x0040d7b0
int C_0040d7b0::sub_0040d7b0(void) { return *(int*)((char*)this + 8); }

struct C_0040d7c0 {
    int sub_0040d7c0(int);
};

// @baa 0x0040d7c0
int C_0040d7c0::sub_0040d7c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0040d9c0 { int a; C_0040d9c0(int); };

// @baa 0x0040d9c0
C_0040d9c0::C_0040d9c0(int x) : a(x) {}

struct C_0040d9d0 { int a; C_0040d9d0(int); };

// @baa 0x0040d9d0
C_0040d9d0::C_0040d9d0(int x) : a(x) {}

struct S_0040d9e0 {
    Inner *p;
    S_0040d9e0 *sub_0040d9e0();
};

// @baa 0x0040d9e0
S_0040d9e0 *S_0040d9e0::sub_0040d9e0()
{
    p = p->field_0x14;
    return this;
}

// @baa 0x0040da30
undefined4 sub_0040da30(void)
{
  return 0x10;
}

struct C_0040db00 {
    undefined4 sub_0040db00();
};

// @baa 0x0040db00
undefined4 C_0040db00::sub_0040db00(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct S_0040db10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0040db10(INT Index) const;
};

// @baa 0x0040db10
const DWORD* S_0040db10::sub_0040db10(INT Index) const
{
    return &Items(Index);
}

struct C_0040dbe0 { int a; C_0040dbe0(int); };

// @baa 0x0040dbe0
C_0040dbe0::C_0040dbe0(int x) : a(x) {}

struct C_0040dbf0 { int sub_0040dbf0(void); };

// @baa 0x0040dbf0
int C_0040dbf0::sub_0040dbf0(void) { return *(int*)((char*)this + 8); }

// @baa 0x0040dca0
int sub_0040dca0(int param_1)
{
  return *(int *)(param_1 + 4) * 8;
}

// @baa 0x0040dcb0
void sub_0040dcb0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x0040dcd0
void sub_0040dcd0(void) {  }

// @baa 0x0040dce0
void sub_0040dce0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x0040dd00
void sub_0040dd00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x0040dd20
void sub_0040dd20(void) {  }

// @baa 0x0040dd30
void __stdcall sub_0040dd30(int a0, int a1) {  }

// @baa 0x0040dd80
void sub_0040dd80(void) {  }

// @baa 0x0040dd90
void sub_0040dd90(void) {  }

// @baa 0x0040dda0
void sub_0040dda0(void) {  }

// @baa 0x0040ddb0
void sub_0040ddb0(void) {  }

// @baa 0x0040ddc0
void sub_0040ddc0(void) {  }

// @baa 0x0040ddd0
void sub_0040ddd0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040ddf0
void sub_0040ddf0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040de10
void sub_0040de10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040de30
void sub_0040de30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040de50
void sub_0040de50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040de70
void sub_0040de70(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040de90
void sub_0040de90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040deb0
void sub_0040deb0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040df20
void sub_0040df20(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040df40
void sub_0040df40(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return;
}

// @baa 0x0040df50
void sub_0040df50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040df70
void sub_0040df70(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040df90
void sub_0040df90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0040dfb0
void sub_0040dfb0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_0040e000 {
    undefined4 sub_0040e000(byte);
};

int sub_0053dfa0(...);
int sub_01ab58f0(void);
// @baa 0x0040e000
undefined4 C_0040e000::sub_0040e000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0040e020 {
    undefined4 sub_0040e020(byte);
};

// @baa 0x0040e020
undefined4 C_0040e020::sub_0040e020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab58f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0040e110 {
    undefined4 sub_0040e110();
};

// @baa 0x0040e110
undefined4 C_0040e110::sub_0040e110(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_0040e120 {
    int sub_0040e120();
};

int sub_01abea20(void);
// @baa 0x0040e120
int C_0040e120::sub_0040e120(void)
{
    int param_1 = (int)this;

  sub_01abea20();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}

struct C_0040e140 {
    int sub_0040e140();
};

int sub_0046c110(void);
// @baa 0x0040e140
int C_0040e140::sub_0040e140(void)
{
    int param_1 = (int)this;

  sub_0046c110();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return param_1;
}

struct C_0040e160 {
    undefined4 sub_0040e160();
};

// @baa 0x0040e160
undefined4 C_0040e160::sub_0040e160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}

// @baa 0x0040e170
void __stdcall sub_0040e170(int a0, int a1) {  }

// @baa 0x0040e2c0
void sub_0040e2c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_0040e2e0 {
    undefined4 sub_0040e2e0(byte);
};

int sub_0046c170(void);
// @baa 0x0040e2e0
undefined4 C_0040e2e0::sub_0040e2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046c170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_0040e330 { void sub_01ab58f0(); };

struct C_0040e330 { char pad[4]; M_0040e330 m; void sub_0040e330(); };

// @baa 0x0040e330
void C_0040e330::sub_0040e330() { m.sub_01ab58f0(); }

struct A_0040e340 { virtual void sub_0040f0f0(); char pad[336]; };

struct B_0040e340 { virtual void sub_0040f0f0(); };

struct C_0040e340 : A_0040e340, B_0040e340 { virtual void sub_0040f0f0(); C_0040e340(); };

C_0040e340::C_0040e340() {}

// @baa 0x0040e340
void C_0040e340::sub_0040f0f0() {}

struct A_0040e350 { virtual void sub_00408f50(); char pad[4]; };

struct B_0040e350 { virtual void sub_00408f50(); };

struct C_0040e350 : A_0040e350, B_0040e350 { virtual void sub_00408f50(); C_0040e350(); };

C_0040e350::C_0040e350() {}

// @baa 0x0040e350
void C_0040e350::sub_00408f50() {}

struct A_0040e360 { virtual void sub_0040f0f0(); char pad[320]; };

struct B_0040e360 { virtual void sub_0040f0f0(); };

struct C_0040e360 : A_0040e360, B_0040e360 { virtual void sub_0040f0f0(); C_0040e360(); };

C_0040e360::C_0040e360() {}

// @baa 0x0040e360
void C_0040e360::sub_0040f0f0() {}

struct C_0040e420 { int sub_0040e420(void); };

// @baa 0x0040e420
int C_0040e420::sub_0040e420(void) { return *(int*)((char*)this + 36); }

struct C_0040e430 {
    int sub_0040e430(int);
};

// @baa 0x0040e430
int C_0040e430::sub_0040e430(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0x1c) + param_2 * 0x24;
}

struct C_0040e440 {
    undefined4 sub_0040e440();
};

// @baa 0x0040e440
undefined4 C_0040e440::sub_0040e440(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x4c);
}

struct C_0040e450 {
    int sub_0040e450(int);
};

// @baa 0x0040e450
int C_0040e450::sub_0040e450(int param_2)
{
    int param_1 = (int)this;
  return param_2 * 0x30 + *(int *)(param_1 + 0x44);
}

struct C_0040e460 {
    undefined4 sub_0040e460();
};

// @baa 0x0040e460
undefined4 C_0040e460::sub_0040e460(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0xc);
}

struct C_0040e470 { int sub_0040e470(void); };

// @baa 0x0040e470
int C_0040e470::sub_0040e470(void) { return *(int*)((char*)this + 4); }

struct C_0040e480 {
    int sub_0040e480();
};

// @baa 0x0040e480
int C_0040e480::sub_0040e480(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4;
}

struct C_0040e550 { int sub_0040e550(void); };

// @baa 0x0040e550
int C_0040e550::sub_0040e550(void) { return *(int*)((char*)this + 12); }

struct C_0040e560 {
    int sub_0040e560(int);
};

// @baa 0x0040e560
int C_0040e560::sub_0040e560(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x58 + *(int *)(param_1 + 4);
}

struct C_0040e670 { int sub_0040e670(void); };

// @baa 0x0040e670
int C_0040e670::sub_0040e670(void) { return *(int*)((char*)this + 20); }

struct C_0040e680 {
    int sub_0040e680(int);
};

// @baa 0x0040e680
int C_0040e680::sub_0040e680(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x20 + *(int *)(param_1 + 0xc);
}

struct C_0040e690 { int sub_0040e690(void); };

// @baa 0x0040e690
int C_0040e690::sub_0040e690(void) { return *(int*)((char*)this + 48); }

struct C_0040e6a0 {
    int sub_0040e6a0(int);
};

// @baa 0x0040e6a0
int C_0040e6a0::sub_0040e6a0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) + param_2 * 8;
}

struct C_0040e6b0 { int sub_0040e6b0(void); };

// @baa 0x0040e6b0
int C_0040e6b0::sub_0040e6b0(void) { return *(int*)((char*)this + 16); }

struct C_0040e6c0 {
    int sub_0040e6c0(int);
};

// @baa 0x0040e6c0
int C_0040e6c0::sub_0040e6c0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x54 + *(int *)(param_1 + 8);
}

struct C_0040e730 {
    int sub_0040e730();
};

// @baa 0x0040e730
int C_0040e730::sub_0040e730(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x607c) + 1 + *(int *)(param_1 + 0x6074);
}

extern int g_02616f14;
int sub_0040ccd0();
// @baa 0x0040e750
int sub_0040e750() { if (!g_02616f14) g_02616f14 = sub_0040ccd0(); return g_02616f14; }

// @baa 0x0040e770
int sub_0040e770() { if (!g_02616f14) g_02616f14 = sub_0040ccd0(); return g_02616f14; }

struct C_0040e7b0 {
    void sub_0040e7b0(undefined4, undefined4);
    int sub_004024c0(int);
};

extern undefined4 g_027be4bc;
// @baa 0x0040e7b0
void C_0040e7b0::sub_0040e7b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x144) = param_2;
  *(undefined4 *)(param_1 + 0x148) = param_3;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  ((C_0040e7b0 *)(this))->sub_004024c0((int)(&g_027be4bc));
  return;
}

struct C_0040e830 {
    undefined4 sub_0040e830(int);
};

// @baa 0x0040e830
undefined4 C_0040e830::sub_0040e830(int param_2)
{
    int param_1 = (int)this;

  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(int *)(param_1 + 0x30);
  }
  return 1;
}
