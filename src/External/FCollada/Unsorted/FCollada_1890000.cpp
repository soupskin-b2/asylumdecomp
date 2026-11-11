// FCollada_1890000.cpp: 127 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01899770();
};

// @baa 0x01899770
void C::sub_01899770(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40;
  return;
}

struct C_01899780 { char* sub_01899780(void); };

// @baa 0x01899780
char* C_01899780::sub_01899780(void) { return (char*)this + 56; }

struct C_01899790 { char* sub_01899790(void); };

// @baa 0x01899790
char* C_01899790::sub_01899790(void) { return (char*)this + 80; }

struct C_018997a0 { char* sub_018997a0(void); };

// @baa 0x018997a0
char* C_018997a0::sub_018997a0(void) { return (char*)this + 184; }

struct C_018997b0 { float sub_018997b0(void); };

// @baa 0x018997b0
float C_018997b0::sub_018997b0(void) { return *(float*)((char*)this + 196); }

// @baa 0x018997e0
undefined1 sub_018997e0(void)
{
  return 1;
}

struct C_0189ad70 {
    uint sub_0189ad70();
};

// @baa 0x0189ad70
uint C_0189ad70::sub_0189ad70(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 5 & 1;
}

struct C_0189ad80 {
    uint sub_0189ad80();
};

// @baa 0x0189ad80
uint C_0189ad80::sub_0189ad80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 6 & 1;
}

struct C_0189ae90 { int sub_0189ae90(void); };

// @baa 0x0189ae90
int C_0189ae90::sub_0189ae90(void) { return *(int*)((char*)this + 44); }

struct C_0189aea0 { char* sub_0189aea0(void); };

// @baa 0x0189aea0
char* C_0189aea0::sub_0189aea0(void) { return (char*)this + 108; }

struct C_0189aeb0 { char* sub_0189aeb0(void); };

// @baa 0x0189aeb0
char* C_0189aeb0::sub_0189aeb0(void) { return (char*)this + 124; }

struct C_0189aec0 { char* sub_0189aec0(void); };

// @baa 0x0189aec0
char* C_0189aec0::sub_0189aec0(void) { return (char*)this + 140; }

struct C_0189aed0 { char* sub_0189aed0(void); };

// @baa 0x0189aed0
char* C_0189aed0::sub_0189aed0(void) { return (char*)this + 156; }

struct C_0189aee0 { char* sub_0189aee0(void); };

// @baa 0x0189aee0
char* C_0189aee0::sub_0189aee0(void) { return (char*)this + 40; }

struct C_0189aef0 { char* sub_0189aef0(void); };

// @baa 0x0189aef0
char* C_0189aef0::sub_0189aef0(void) { return (char*)this + 56; }

struct C_0189af00 { char* sub_0189af00(void); };

// @baa 0x0189af00
char* C_0189af00::sub_0189af00(void) { return (char*)this + 72; }

struct C_0189af10 { char* sub_0189af10(void); };

// @baa 0x0189af10
char* C_0189af10::sub_0189af10(void) { return (char*)this + 88; }

struct C_0189af20 { char* sub_0189af20(void); };

// @baa 0x0189af20
char* C_0189af20::sub_0189af20(void) { return (char*)this + 104; }

struct C_0189af30 { int sub_0189af30(void); };

// @baa 0x0189af30
int C_0189af30::sub_0189af30(void) { return *(int*)((char*)this + 100); }

int sub_0189b750(...);
int sub_018c31a0(...);
extern undefined1 g_026ccbc8;
// @baa 0x0189b880
undefined4 sub_0189b880(int param_1, undefined4 param_2)
{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = &g_026ccbc8;
  if (*(int *)(param_1 + 0x8c) != 0) {
    puVar1 = *(undefined1 **)(param_1 + 0x90);
  }
  uVar2 = sub_018c31a0(param_2,puVar1);
  sub_0189b750(param_1,uVar2);
  return uVar2;
}

struct C_0189b920 { char* sub_0189b920(void); };

// @baa 0x0189b920
char* C_0189b920::sub_0189b920(void) { return (char*)this + 108; }

struct C_0189b930 { char* sub_0189b930(void); };

// @baa 0x0189b930
char* C_0189b930::sub_0189b930(void) { return (char*)this + 168; }

struct C_0189b940 { char* sub_0189b940(void); };

// @baa 0x0189b940
char* C_0189b940::sub_0189b940(void) { return (char*)this + 208; }

struct C_0189b950 { char* sub_0189b950(void); };

// @baa 0x0189b950
char* C_0189b950::sub_0189b950(void) { return (char*)this + 228; }

struct C_0189b960 { char* sub_0189b960(void); };

// @baa 0x0189b960
char* C_0189b960::sub_0189b960(void) { return (char*)this + 248; }

struct C_0189b970 { char* sub_0189b970(void); };

// @baa 0x0189b970
char* C_0189b970::sub_0189b970(void) { return (char*)this + 268; }

struct C_0189ba20 {
    bool sub_0189ba20(int);
};

// @baa 0x0189ba20
bool C_0189ba20::sub_0189ba20(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_0189ba30 { int sub_0189ba30(void); };

// @baa 0x0189ba30
int C_0189ba30::sub_0189ba30(void) { return *(int*)((char*)this + 4); }

struct C_0189ba40 { int sub_0189ba40(void); };

// @baa 0x0189ba40
int C_0189ba40::sub_0189ba40(void) { return *(int*)((char*)this + 4); }

struct C_0189ba90 {
    undefined4 sub_0189ba90(byte);
};

int sub_00402660(...);
int sub_0189b980(void);
// @baa 0x0189ba90
undefined4 C_0189ba90::sub_0189ba90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0189b980();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0189bb20 { int sub_0189bb20(void); };

// @baa 0x0189bb20
int C_0189bb20::sub_0189bb20(void) { return *(int*)((char*)this + 164); }

struct C_0189c320 { char* sub_0189c320(void); };

// @baa 0x0189c320
char* C_0189c320::sub_0189c320(void) { return (char*)this + 80; }

struct C_0189c330 {
    undefined1 sub_0189c330();
};

// @baa 0x0189c330
undefined1 C_0189c330::sub_0189c330(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x24);
}

struct C_0189c340 { float sub_0189c340(void); };

// @baa 0x0189c340
float C_0189c340::sub_0189c340(void) { return *(float*)((char*)this + 100); }

struct C_0189c350 { float sub_0189c350(void); };

// @baa 0x0189c350
float C_0189c350::sub_0189c350(void) { return *(float*)((char*)this + 104); }

struct C_0189c360 { float sub_0189c360(void); };

// @baa 0x0189c360
float C_0189c360::sub_0189c360(void) { return *(float*)((char*)this + 108); }

void sub_01835610();
// @baa 0x0189c370
void sub_0189c370(void) { sub_01835610(); }

struct C_0189c380 { char* sub_0189c380(void); };

// @baa 0x0189c380
char* C_0189c380::sub_0189c380(void) { return (char*)this + 316; }

struct C_0189c390 { char* sub_0189c390(void); };

// @baa 0x0189c390
char* C_0189c390::sub_0189c390(void) { return (char*)this + 336; }

struct C_0189c3a0 { char* sub_0189c3a0(void); };

// @baa 0x0189c3a0
char* C_0189c3a0::sub_0189c3a0(void) { return (char*)this + 116; }

struct C_0189c3b0 { char* sub_0189c3b0(void); };

// @baa 0x0189c3b0
char* C_0189c3b0::sub_0189c3b0(void) { return (char*)this + 136; }

struct C_0189c3c0 { char* sub_0189c3c0(void); };

// @baa 0x0189c3c0
char* C_0189c3c0::sub_0189c3c0(void) { return (char*)this + 188; }

struct C_0189c3d0 { char* sub_0189c3d0(void); };

// @baa 0x0189c3d0
char* C_0189c3d0::sub_0189c3d0(void) { return (char*)this + 208; }

struct C_0189c3e0 { char* sub_0189c3e0(void); };

// @baa 0x0189c3e0
char* C_0189c3e0::sub_0189c3e0(void) { return (char*)this + 228; }

struct C_0189c3f0 { char* sub_0189c3f0(void); };

// @baa 0x0189c3f0
char* C_0189c3f0::sub_0189c3f0(void) { return (char*)this + 248; }

struct C_0189c400 { char* sub_0189c400(void); };

// @baa 0x0189c400
char* C_0189c400::sub_0189c400(void) { return (char*)this + 268; }

struct C_0189c410 { char* sub_0189c410(void); };

// @baa 0x0189c410
char* C_0189c410::sub_0189c410(void) { return (char*)this + 276; }

struct C_0189c420 { char* sub_0189c420(void); };

// @baa 0x0189c420
char* C_0189c420::sub_0189c420(void) { return (char*)this + 284; }

struct C_0189c430 { char* sub_0189c430(void); };

// @baa 0x0189c430
char* C_0189c430::sub_0189c430(void) { return (char*)this + 292; }

struct C_0189c440 { char* sub_0189c440(void); };

// @baa 0x0189c440
char* C_0189c440::sub_0189c440(void) { return (char*)this + 300; }

struct C_0189c450 { char* sub_0189c450(void); };

// @baa 0x0189c450
char* C_0189c450::sub_0189c450(void) { return (char*)this + 308; }

struct C_0189c460 { char* sub_0189c460(void); };

// @baa 0x0189c460
char* C_0189c460::sub_0189c460(void) { return (char*)this + 100; }

struct C_0189c470 { char* sub_0189c470(void); };

// @baa 0x0189c470
char* C_0189c470::sub_0189c470(void) { return (char*)this + 116; }

struct C_0189c480 {
    undefined1 sub_0189c480();
};

// @baa 0x0189c480
undefined1 C_0189c480::sub_0189c480(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 100);
}

struct C_0189c490 {
    undefined1 sub_0189c490();
};

// @baa 0x0189c490
undefined1 C_0189c490::sub_0189c490(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x24);
}

struct C_0189c4a0 { char* sub_0189c4a0(void); };

// @baa 0x0189c4a0
char* C_0189c4a0::sub_0189c4a0(void) { return (char*)this + 76; }

struct C_0189c4b0 { int sub_0189c4b0(void); };

// @baa 0x0189c4b0
int C_0189c4b0::sub_0189c4b0(void) { return *(int*)((char*)this + 96); }

struct C_0189c4c0 {
    undefined1 sub_0189c4c0();
};

// @baa 0x0189c4c0
undefined1 C_0189c4c0::sub_0189c4c0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x30);
}

struct C_0189c4f0 { int sub_0189c4f0(void); };

// @baa 0x0189c4f0
int C_0189c4f0::sub_0189c4f0(void) { return *(int*)((char*)this + 4); }

struct C_0189c500 { char* sub_0189c500(void); };

// @baa 0x0189c500
char* C_0189c500::sub_0189c500(void) { return (char*)this + 4; }

struct C_0189c660 { int sub_0189c660(void); };

// @baa 0x0189c660
int C_0189c660::sub_0189c660(void) { return *(int*)((char*)this + 44); }

struct C_0189c670 { int sub_0189c670(void); };

// @baa 0x0189c670
int C_0189c670::sub_0189c670(void) { return *(int*)((char*)this + 52); }

struct C_0189c680 { int sub_0189c680(void); };

// @baa 0x0189c680
int C_0189c680::sub_0189c680(void) { return *(int*)((char*)this + 108); }

struct C_0189c690 { int sub_0189c690(void); };

// @baa 0x0189c690
int C_0189c690::sub_0189c690(void) { return *(int*)((char*)this + 128); }

struct C_0189c6a0 { int sub_0189c6a0(void); };

// @baa 0x0189c6a0
int C_0189c6a0::sub_0189c6a0(void) { return *(int*)((char*)this + 148); }

struct C_0189c6b0 { int sub_0189c6b0(void); };

// @baa 0x0189c6b0
int C_0189c6b0::sub_0189c6b0(void) { return *(int*)((char*)this + 160); }

struct C_0189c6c0 { int sub_0189c6c0(void); };

// @baa 0x0189c6c0
int C_0189c6c0::sub_0189c6c0(void) { return *(int*)((char*)this + 176); }

struct C_0189c6d0 { int sub_0189c6d0(void); };

// @baa 0x0189c6d0
int C_0189c6d0::sub_0189c6d0(void) { return *(int*)((char*)this + 168); }

struct C_0189c6e0 { int sub_0189c6e0(void); };

// @baa 0x0189c6e0
int C_0189c6e0::sub_0189c6e0(void) { return *(int*)((char*)this + 184); }

struct C_0189c6f0 { int sub_0189c6f0(void); };

// @baa 0x0189c6f0
int C_0189c6f0::sub_0189c6f0(void) { return *(int*)((char*)this + 128); }

struct C_0189c700 { int sub_0189c700(void); };

// @baa 0x0189c700
int C_0189c700::sub_0189c700(void) { return *(int*)((char*)this + 148); }

struct C_0189c710 { int sub_0189c710(void); };

// @baa 0x0189c710
int C_0189c710::sub_0189c710(void) { return *(int*)((char*)this + 64); }

struct C_0189c720 { int sub_0189c720(void); };

// @baa 0x0189c720
int C_0189c720::sub_0189c720(void) { return *(int*)((char*)this + 56); }

struct C_0189c730 { int sub_0189c730(void); };

// @baa 0x0189c730
int C_0189c730::sub_0189c730(void) { return *(int*)((char*)this + 44); }

int sub_0189c980(...);
int sub_01bfce40(...);
// @baa 0x0189d490
undefined4 sub_0189d490(int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bfce40(param_2,"sphere");
  sub_0189c980(uVar1,"radius",param_1 + 100);
  return uVar1;
}

void sub_0185a8f0();
// @baa 0x0189e2f0
void sub_0189e2f0(void) { sub_0185a8f0(); }

int sub_018aa210(...);
int sub_018aa2b0(...);
// @baa 0x0189e350
undefined4 sub_0189e350(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_018aa210(param_1,param_2,"emitter",1);
  sub_018aa2b0(param_1,uVar1);
  return uVar1;
}

struct C_0189e380 { int sub_0189e380(void); };

// @baa 0x0189e380
int C_0189e380::sub_0189e380(void) { return *(int*)((char*)this + 36); }

struct C_0189e390 { char* sub_0189e390(void); };

// @baa 0x0189e390
char* C_0189e390::sub_0189e390(void) { return (char*)this + 52; }

struct C_0189e3a0 { char* sub_0189e3a0(void); };

// @baa 0x0189e3a0
char* C_0189e3a0::sub_0189e3a0(void) { return (char*)this + 64; }

struct C_0189e3f0 { char* sub_0189e3f0(void); };

// @baa 0x0189e3f0
char* C_0189e3f0::sub_0189e3f0(void) { return (char*)this + 132; }

struct C_0189e400 { char* sub_0189e400(void); };

// @baa 0x0189e400
char* C_0189e400::sub_0189e400(void) { return (char*)this + 172; }

struct C_0189e410 { int sub_0189e410(void); };

// @baa 0x0189e410
int C_0189e410::sub_0189e410(void) { return *(int*)((char*)this + 144); }

struct C_0189e420 { int sub_0189e420(void); };

// @baa 0x0189e420
int C_0189e420::sub_0189e420(void) { return *(int*)((char*)this + 44); }

struct C_0189e430 { char* sub_0189e430(void); };

// @baa 0x0189e430
char* C_0189e430::sub_0189e430(void) { return (char*)this + 132; }

struct C_0189e4f0 { char* sub_0189e4f0(void); };

// @baa 0x0189e4f0
char* C_0189e4f0::sub_0189e4f0(void) { return (char*)this + 4; }

struct C_0189e500 { int sub_0189e500(void); };

// @baa 0x0189e500
int C_0189e500::sub_0189e500(void) { return *(int*)((char*)this + 8); }

struct C_0189e510 {
    int sub_0189e510();
};

// @baa 0x0189e510
int C_0189e510::sub_0189e510(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x18;
}

struct C_0189e780 { int sub_0189e780(void); };

// @baa 0x0189e780
int C_0189e780::sub_0189e780(void) { return *(int*)((char*)this + 64); }

struct C_0189e790 {
    bool sub_0189e790();
};

// @baa 0x0189e790
bool C_0189e790::sub_0189e790(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 0;
}

struct C_0189e7a0 {
    bool sub_0189e7a0();
};

// @baa 0x0189e7a0
bool C_0189e7a0::sub_0189e7a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 1;
}

struct C_0189e7b0 {
    bool sub_0189e7b0();
};

// @baa 0x0189e7b0
bool C_0189e7b0::sub_0189e7b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 2;
}

struct C_0189e7c0 {
    bool sub_0189e7c0();
};

// @baa 0x0189e7c0
bool C_0189e7c0::sub_0189e7c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) == 4;
}

struct C_0189e7d0 { int sub_0189e7d0(void); };

// @baa 0x0189e7d0
int C_0189e7d0::sub_0189e7d0(void) { return *(int*)((char*)this + 84); }

struct C_0189e7e0 { int sub_0189e7e0(void); };

// @baa 0x0189e7e0
int C_0189e7e0::sub_0189e7e0(void) { return *(int*)((char*)this + 72); }

struct C_0189e7f0 { int sub_0189e7f0(void); };

// @baa 0x0189e7f0
int C_0189e7f0::sub_0189e7f0(void) { return *(int*)((char*)this + 240); }

struct C_0189e800 {
    undefined1 sub_0189e800();
};

// @baa 0x0189e800
undefined1 C_0189e800::sub_0189e800(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x74);
}

struct C_0189e810 {
    int sub_0189e810();
};

// @baa 0x0189e810
int C_0189e810::sub_0189e810(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x160) + 0x74;
}

struct C_0189e820 {
    undefined1 sub_0189e820();
};

// @baa 0x0189e820
undefined1 C_0189e820::sub_0189e820(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xa0);
}

struct C_0189e830 {
    undefined1 sub_0189e830();
};

// @baa 0x0189e830
undefined1 C_0189e830::sub_0189e830(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc4);
}

struct C_0189e840 { int sub_0189e840(void); };

// @baa 0x0189e840
int C_0189e840::sub_0189e840(void) { return *(int*)((char*)this + 116); }

struct C_0189e850 { int sub_0189e850(void); };

// @baa 0x0189e850
int C_0189e850::sub_0189e850(void) { return *(int*)((char*)this + 124); }

struct C_0189e860 { int sub_0189e860(void); };

// @baa 0x0189e860
int C_0189e860::sub_0189e860(void) { return *(int*)((char*)this + 132); }

struct C_0189e870 { int sub_0189e870(void); };

// @baa 0x0189e870
int C_0189e870::sub_0189e870(void) { return *(int*)((char*)this + 140); }

struct C_0189e880 { int sub_0189e880(void); };

// @baa 0x0189e880
int C_0189e880::sub_0189e880(void) { return *(int*)((char*)this + 148); }

struct C_0189e890 { int sub_0189e890(void); };

// @baa 0x0189e890
int C_0189e890::sub_0189e890(void) { return *(int*)((char*)this + 156); }

struct C_0189e8a0 { char* sub_0189e8a0(void); };

// @baa 0x0189e8a0
char* C_0189e8a0::sub_0189e8a0(void) { return (char*)this + 44; }

struct C_0189e8b0 { int sub_0189e8b0(void); };

// @baa 0x0189e8b0
int C_0189e8b0::sub_0189e8b0(void) { return *(int*)((char*)this + 64); }

struct C_0189e8c0 { int sub_0189e8c0(void); };

// @baa 0x0189e8c0
int C_0189e8c0::sub_0189e8c0(void) { return *(int*)((char*)this + 84); }

struct C_0189e8d0 { int sub_0189e8d0(void); };

// @baa 0x0189e8d0
int C_0189e8d0::sub_0189e8d0(void) { return *(int*)((char*)this + 96); }

struct C_0189e8e0 { char* sub_0189e8e0(void); };

// @baa 0x0189e8e0
char* C_0189e8e0::sub_0189e8e0(void) { return (char*)this + 60; }

struct C_0189e8f0 { char* sub_0189e8f0(void); };

// @baa 0x0189e8f0
char* C_0189e8f0::sub_0189e8f0(void) { return (char*)this + 76; }

struct C_0189e900 { char* sub_0189e900(void); };

// @baa 0x0189e900
char* C_0189e900::sub_0189e900(void) { return (char*)this + 44; }

struct C_0189e910 { int sub_0189e910(void); };

// @baa 0x0189e910
int C_0189e910::sub_0189e910(void) { return *(int*)((char*)this + 112); }

struct C_0189e920 { int sub_0189e920(void); };

// @baa 0x0189e920
int C_0189e920::sub_0189e920(void) { return *(int*)((char*)this + 100); }

struct C_0189e930 { char* sub_0189e930(void); };

// @baa 0x0189e930
char* C_0189e930::sub_0189e930(void) { return (char*)this + 44; }

struct C_0189e940 { int sub_0189e940(void); };

// @baa 0x0189e940
int C_0189e940::sub_0189e940(void) { return *(int*)((char*)this + 84); }

struct C_0189e950 { int sub_0189e950(void); };

// @baa 0x0189e950
int C_0189e950::sub_0189e950(void) { return *(int*)((char*)this + 64); }

struct C_0189e960 { char* sub_0189e960(void); };

// @baa 0x0189e960
char* C_0189e960::sub_0189e960(void) { return (char*)this + 104; }

struct C_0189e970 { char* sub_0189e970(void); };

// @baa 0x0189e970
char* C_0189e970::sub_0189e970(void) { return (char*)this + 120; }

struct C_0189e980 { char* sub_0189e980(void); };

// @baa 0x0189e980
char* C_0189e980::sub_0189e980(void) { return (char*)this + 128; }

struct C_0189e990 { char* sub_0189e990(void); };

// @baa 0x0189e990
char* C_0189e990::sub_0189e990(void) { return (char*)this + 136; }

struct C_0189e9a0 { int sub_0189e9a0(void); };

// @baa 0x0189e9a0
int C_0189e9a0::sub_0189e9a0(void) { return *(int*)((char*)this + 108); }

struct C_0189e9b0 { int sub_0189e9b0(void); };

// @baa 0x0189e9b0
int C_0189e9b0::sub_0189e9b0(void) { return *(int*)((char*)this + 60); }

int sub_0189ecb0(...);
int sub_0189f2c0(...);
extern undefined1 g_023f01ec;
// @baa 0x0189f4b0
undefined4 sub_0189f4b0(int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_0189f2c0(param_1,param_2);
  sub_0189ecb0(uVar1,&g_023f01ec,param_1 + 100);
  return uVar1;
}

int sub_0189bb90(...);
int sub_018a68d0(...);
int sub_01bfcfc0(...);
extern undefined4 g_023ef8a4;
extern undefined4 g_023f0208;
// @baa 0x0189f4e0
undefined4 sub_0189f4e0(int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar1 = sub_0189f2c0(param_1,param_2);
    if (*(int *)(param_1 + 0x34) == 0) {
      puVar3 = &g_026ccbc8;
    }
    else {
      puVar3 = *(undefined1 **)(param_1 + 0x38);
    }
    sub_01bfcfc0(uVar1,&g_023f0208,puVar3);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar1 = sub_0189f2c0(param_1,param_2);
    if (*(int *)(param_1 + 0x44) == 0) {
      puVar3 = &g_026ccbc8;
    }
    else {
      puVar3 = *(undefined1 **)(param_1 + 0x48);
    }
    sub_01bfcfc0(uVar1,"semantic",puVar3);
    sub_01bfcfc0(uVar1,&g_023ef8a4,"float");
    return uVar1;
  }
  uVar1 = sub_0189f2c0(param_1,param_2);
  pcVar2 = "float";
  if (*(int *)(param_1 + 0x60) != 0) {
    pcVar2 = "half";
  }
  sub_0189bb90(uVar1,pcVar2,param_1 + 100);
  pcVar2 = (char *)(&g_026ccbc8);
  if (*(int *)(param_1 + 0x34) != 0) {
    pcVar2 = *(char **)(param_1 + 0x38);
  }
  if (*pcVar2 == '\0') {
    pcVar2 = (char *)(&g_026ccbc8);
    if (*(int *)(param_1 + 0x44) != 0) {
      pcVar2 = *(char **)(param_1 + 0x48);
    }
    if (*pcVar2 == '\0') {
      pcVar2 = "flt";
    }
  }
  sub_018a68d0(param_1 + 100,uVar1,pcVar2,0xffffffff);
  return uVar1;
}

int sub_0189ed50(...);
extern undefined1 g_023f01e0;
// @baa 0x0189f7a0
undefined4 sub_0189f7a0(int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_0189f2c0(param_1,param_2);
  sub_0189ed50(uVar1,&g_023f01e0,param_1 + 100);
  return uVar1;
}
