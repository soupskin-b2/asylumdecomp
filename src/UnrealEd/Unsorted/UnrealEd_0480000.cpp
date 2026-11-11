// UnrealEd_0480000.cpp (part 1 of 2): 166 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00483d70(byte);
};

int sub_004833d0(void);
int sub_0053dfa0(...);
// @baa 0x00483d70
undefined4 C::sub_00483d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004833d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00484470(void);
extern undefined1 g_02618832;
// @baa 0x004844f0
void sub_004844f0(void)
{
  g_02618832 = 0;
  sub_00484470();
  return;
}

// @baa 0x00484560
undefined4 sub_00484560(void)
{
  int iVar1;
  
  if (g_02618832 == '\0') {
    iVar1 = sub_00484470();
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

// @baa 0x00484850
int sub_00484850(float param_1, int * param_2, int param_3)
{
  float fVar1;
  int *piVar2;
  int iVar3;
  if (g_02618832 == '\0') {
    piVar2 = (int *)sub_00484470();
    iVar3 = param_3 * 0x10 + *piVar2;
    fVar1 = *(float *)(iVar3 + 8);
    return (int)(((param_1 - fVar1) / (*(float *)(iVar3 + 0xc) - fVar1)) * (float)param_2[2] +
                (float)*param_2);
  }
  return 0;
}

struct S_00484f30 { void sub_004833d0(); };

// @baa 0x00484f30
void sub_00484f30(S_00484f30 *p) { if (p) p->sub_004833d0(); }

extern int g_0261883c;
int sub_004843e0();
// @baa 0x00484f40
int sub_00484f40() { if (!g_0261883c) g_0261883c = sub_004843e0(); return g_0261883c; }

void sub_004850c0();
// @baa 0x00485470
void sub_00485470(void) { sub_004850c0(); }

extern char g_0266396c[];
// @baa 0x00486da0
int sub_00486da0(void) { return (int)g_0266396c; }

extern "C" __declspec(dllimport) int tolower(...);
// @baa 0x004884b0
void sub_004884b0(char param_1)
{
                    
                    
  tolower((int)param_1);
  return;
}

// @baa 0x004884c0
int sub_004884c0(void) { return 0; }

struct C_004884d0 { int sub_004884d0(void); };

// @baa 0x004884d0
int C_004884d0::sub_004884d0(void) { return *(int*)((char*)this + 28); }

struct C_004884e0 { char* sub_004884e0(void); };

// @baa 0x004884e0
char* C_004884e0::sub_004884e0(void) { return (char*)this + 8; }

struct C_004884f0 { int sub_004884f0(void); };

// @baa 0x004884f0
int C_004884f0::sub_004884f0(void) { return *(int*)((char*)this + 8); }

struct C_004885e0 { int sub_004885e0(void); };

// @baa 0x004885e0
int C_004885e0::sub_004885e0(void) { return *(int*)((char*)this + 24); }

struct C_004885f0 { char* sub_004885f0(void); };

// @baa 0x004885f0
char* C_004885f0::sub_004885f0(void) { return (char*)this + 8; }

struct C_00488600 { char* sub_00488600(void); };

// @baa 0x00488600
char* C_00488600::sub_00488600(void) { return (char*)this + 36; }

struct C_00488610 { float sub_00488610(void); };

// @baa 0x00488610
float C_00488610::sub_00488610(void) { return *(float*)((char*)this + 32); }

struct C_00488620 { float sub_00488620(void); };

// @baa 0x00488620
float C_00488620::sub_00488620(void) { return *(float*)((char*)this + 36); }

// @baa 0x00488700
int sub_00488700(void) { return 1; }

// @baa 0x00488710
int sub_00488710(void) { return 1; }

struct C_00488720 {
    undefined1 sub_00488720();
};

// @baa 0x00488720
undefined1 C_00488720::sub_00488720(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 4);
}

struct C_00488730 {
    undefined1 sub_00488730();
};

// @baa 0x00488730
undefined1 C_00488730::sub_00488730(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 5);
}

struct C_00488740 {
    undefined1 sub_00488740();
};

// @baa 0x00488740
undefined1 C_00488740::sub_00488740(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 6);
}

struct S {
    int Unk00;
};

extern void __cdecl sub_0041b760(struct S const &Ref, int Value);
// @baa 0x00488750
void __stdcall sub_00488750(struct S const &Ref)
{
    sub_0041b760(Ref, 0);
}

void sub_0041b9d0(int);
struct S_00488770 {
    void sub_00488770(int A);
};

// @baa 0x00488770
void S_00488770::sub_00488770(int A)
{
    sub_0041b9d0(A);
}

void sub_0041bc30(int);
struct S_00488780 {
    void sub_00488780(int A);
};

// @baa 0x00488780
void S_00488780::sub_00488780(int A)
{
    sub_0041bc30(A);
}

struct C_00488790 { char* sub_00488790(void); };

// @baa 0x00488790
char* C_00488790::sub_00488790(void) { return (char*)this + 8; }

struct C_004887a0 {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    virtual int f6();
    int sub_004887a0();
};

// @baa 0x004887a0
int C_004887a0::sub_004887a0()
{
    return this->f6();
}

extern int g_027ca558;
int sub_01ad7030();
// @baa 0x00488810
int sub_00488810() { if (!g_027ca558) g_027ca558 = sub_01ad7030(); return g_027ca558; }

struct C_00488850 {
    undefined4 sub_00488850(byte);
};

int sub_01ab3290(...);
int sub_01ad6ef0(void);
// @baa 0x00488850
undefined4 C_00488850::sub_00488850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad6ef0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x30);
  }
  return param_1;
}

extern int g_02663860;
int sub_00464ee0();
// @baa 0x00488880
int sub_00488880() { if (!g_02663860) g_02663860 = sub_00464ee0(); return g_02663860; }

struct C_004888f0 {
    void sub_004888f0(undefined4 *);
};

// @baa 0x004888f0
void C_004888f0::sub_004888f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

extern undefined4 g_02663d88;
// @baa 0x00488920
void sub_00488920(void)
{
  if (g_02663d88 != 0) {
    *(bool *)(g_02663d88 + 0x18) = *(char *)(g_02663d88 + 0x18) == '\0';
  }
  return;
}

extern undefined1 g_02663d90;
// @baa 0x00488c50
undefined1 sub_00488c50(undefined1 param_1)
{
  if (g_02663d88 != 0) {
    g_02663d90 = param_1;
    return 1;
  }
  return 0;
}

extern undefined1 g_02663d92;
// @baa 0x00488f20
void sub_00488f20(void)
{
  g_02663d92 = 1;
  return;
}

// @baa 0x00488f60
void sub_00488f60(void)
{
  g_02663d92 = 0;
  return;
}

extern undefined1 g_02663d91;
// @baa 0x00489130
void sub_00489130(undefined1 param_1)
{
  g_02663d91 = param_1;
  return;
}

// @baa 0x00489160
void sub_00489160(undefined4 param_1)
{
  g_02663d88 = param_1;
  return;
}

extern undefined4 g_02663d8c;
// @baa 0x00489180
void sub_00489180(int param_1)
{
  if (param_1 != 0) {
    g_02663d8c = param_1;
  }
  return;
}

struct C_004891a0 { int sub_004891a0(void); };

// @baa 0x004891a0
int C_004891a0::sub_004891a0(void) { return *(int*)((char*)this + 8); }

struct C_004891b0 {
    int sub_004891b0(int);
};

// @baa 0x004891b0
int C_004891b0::sub_004891b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_004891c0 { int sub_004891c0(void); };

// @baa 0x004891c0
int C_004891c0::sub_004891c0(void) { return *(int*)((char*)this + 8); }

struct C_004891d0 {
    int sub_004891d0(int);
};

// @baa 0x004891d0
int C_004891d0::sub_004891d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_004891f0 {
    int sub_004891f0(int);
};

// @baa 0x004891f0
int C_004891f0::sub_004891f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00489200 { int sub_00489200(void); };

// @baa 0x00489200
int C_00489200::sub_00489200(void) { return *(int*)((char*)this + 8); }

struct C_00489210 {
    int sub_00489210(int);
};

// @baa 0x00489210
int C_00489210::sub_00489210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00489220 {
    int sub_00489220(int);
};

// @baa 0x00489220
int C_00489220::sub_00489220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00489230 {
    int sub_00489230(int);
};

// @baa 0x00489230
int C_00489230::sub_00489230(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00489240 {
    int sub_00489240(int);
};

// @baa 0x00489240
int C_00489240::sub_00489240(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_004892a0 { int sub_004892a0(void); };

// @baa 0x004892a0
int C_004892a0::sub_004892a0(void) { return *(int*)((char*)this + 8); }

struct C_004892b0 {
    int sub_004892b0(int);
};

// @baa 0x004892b0
int C_004892b0::sub_004892b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00489310 {
    int sub_00489310(int);
};

// @baa 0x00489310
int C_00489310::sub_00489310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00489320 {
    int sub_00489320(int);
};

// @baa 0x00489320
int C_00489320::sub_00489320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00489330 {
    int sub_00489330(int);
};

// @baa 0x00489330
int C_00489330::sub_00489330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x70 + *param_1;
}

struct C_00489340 {
    int sub_00489340(int);
};

// @baa 0x00489340
int C_00489340::sub_00489340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00489350 {
    int sub_00489350(int);
};

// @baa 0x00489350
int C_00489350::sub_00489350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

struct C_00489610 {
    bool sub_00489610();
};

// @baa 0x00489610
bool C_00489610::sub_00489610(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

// @baa 0x00489620
void sub_00489620(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00489680
void sub_00489680(void) {  }

// @baa 0x00489690
void sub_00489690(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004896b0
void sub_004896b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004896d0
void sub_004896d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004896f0
void sub_004896f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00489710
void sub_00489710(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00489770
int sub_00489770(void) { return 4096; }

struct C_00489780 { int sub_00489780(void); };

// @baa 0x00489780
int C_00489780::sub_00489780(void) { return *(int*)((char*)this + 0); }

struct C_00489790 {
    int sub_00489790();
};

// @baa 0x00489790
int C_00489790::sub_00489790(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x004897a0
void sub_004897a0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004897c0
void sub_004897c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_004897e0 { int sub_004897e0(void); };

// @baa 0x004897e0
int C_004897e0::sub_004897e0(void) { return *(int*)((char*)this + 48); }

struct C_004897f0 {
    undefined4 sub_004897f0(int);
};

// @baa 0x004897f0
undefined4 C_004897f0::sub_004897f0(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x28) + param_2 * 4);
}

struct C_00489820 {
    undefined4 sub_00489820();
};

// @baa 0x00489820
undefined4 C_00489820::sub_00489820(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct C_00489830 {
    int sub_00489830(int);
};

// @baa 0x00489830
int C_00489830::sub_00489830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00489840 { int sub_00489840(void); };

// @baa 0x00489840
int C_00489840::sub_00489840(void) { return *(int*)((char*)this + 8); }

struct C_00489850 {
    int sub_00489850(int);
};

// @baa 0x00489850
int C_00489850::sub_00489850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00489920 {
    undefined4 sub_00489920();
};

// @baa 0x00489920
undefined4 C_00489920::sub_00489920(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 1;
}

// @baa 0x0048a220
void sub_0048a220(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a230(volatile FFaceData *Other);
};

// @baa 0x0048a230
void FFaceData::sub_0048a230(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a260 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a260(volatile FFaceData_0048a260 *Other);
};

// @baa 0x0048a260
void FFaceData_0048a260::sub_0048a260(volatile FFaceData_0048a260 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a290 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a290(volatile FFaceData_0048a290 *Other);
};

// @baa 0x0048a290
void FFaceData_0048a290::sub_0048a290(volatile FFaceData_0048a290 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a2c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a2c0(volatile FFaceData_0048a2c0 *Other);
};

// @baa 0x0048a2c0
void FFaceData_0048a2c0::sub_0048a2c0(volatile FFaceData_0048a2c0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a2f0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a2f0(volatile FFaceData_0048a2f0 *Other);
};

// @baa 0x0048a2f0
void FFaceData_0048a2f0::sub_0048a2f0(volatile FFaceData_0048a2f0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a320 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a320(volatile FFaceData_0048a320 *Other);
};

// @baa 0x0048a320
void FFaceData_0048a320::sub_0048a320(volatile FFaceData_0048a320 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a350 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a350(volatile FFaceData_0048a350 *Other);
};

// @baa 0x0048a350
void FFaceData_0048a350::sub_0048a350(volatile FFaceData_0048a350 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a380 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a380(volatile FFaceData_0048a380 *Other);
};

// @baa 0x0048a380
void FFaceData_0048a380::sub_0048a380(volatile FFaceData_0048a380 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a3b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a3b0(volatile FFaceData_0048a3b0 *Other);
};

// @baa 0x0048a3b0
void FFaceData_0048a3b0::sub_0048a3b0(volatile FFaceData_0048a3b0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a3e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a3e0(volatile FFaceData_0048a3e0 *Other);
};

// @baa 0x0048a3e0
void FFaceData_0048a3e0::sub_0048a3e0(volatile FFaceData_0048a3e0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a410 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a410(volatile FFaceData_0048a410 *Other);
};

// @baa 0x0048a410
void FFaceData_0048a410::sub_0048a410(volatile FFaceData_0048a410 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a440 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a440(volatile FFaceData_0048a440 *Other);
};

// @baa 0x0048a440
void FFaceData_0048a440::sub_0048a440(volatile FFaceData_0048a440 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0048a470 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048a470(volatile FFaceData_0048a470 *Other);
};

// @baa 0x0048a470
void FFaceData_0048a470::sub_0048a470(volatile FFaceData_0048a470 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct C_0048a720 {
    void sub_0048a720();
};

// @baa 0x0048a720
void C_0048a720::sub_0048a720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct FFaceData_0048ada0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0048ada0(volatile FFaceData_0048ada0 *Other);
};

// @baa 0x0048ada0
void FFaceData_0048ada0::sub_0048ada0(volatile FFaceData_0048ada0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

extern int g_02663d00;
int sub_00488670();
// @baa 0x0048afd0
int sub_0048afd0() { if (!g_02663d00) g_02663d00 = sub_00488670(); return g_02663d00; }

struct C_0048b080 {
    undefined4 * sub_0048b080();
};

int sub_0048af70(void);
extern undefined * g_01e59e88;
// @baa 0x0048b080
undefined4 * C_0048b080::sub_0048b080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59e88);
  return param_1;
}

struct C_0048b0a0 {
    void sub_0048b0a0();
};

int sub_0048b010(void);
// @baa 0x0048b0a0
void C_0048b0a0::sub_0048b0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59e88);
  sub_0048b010();
  return;
}

struct C_0048b630 {
    void sub_0048b630();
};

extern undefined * g_01e59ed8;
// @baa 0x0048b630
void C_0048b630::sub_0048b630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59ed8);
  sub_0048b010();
  return;
}

struct C_0048b640 {
    undefined4 * sub_0048b640();
};

extern undefined * g_01e59f00;
// @baa 0x0048b640
undefined4 * C_0048b640::sub_0048b640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59f00);
  return param_1;
}

struct C_0048b660 {
    void sub_0048b660();
};

// @baa 0x0048b660
void C_0048b660::sub_0048b660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f00);
  sub_0048b010();
  return;
}

struct C_0048b670 {
    undefined4 * sub_0048b670();
};

extern undefined * g_01e59f28;
// @baa 0x0048b670
undefined4 * C_0048b670::sub_0048b670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[5] = 1;
  *param_1 = (undefined4)(&g_01e59f28);
  param_1[6] = 0;
  return param_1;
}

struct C_0048b6a0 {
    void sub_0048b6a0();
};

// @baa 0x0048b6a0
void C_0048b6a0::sub_0048b6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f28);
  sub_0048b010();
  return;
}

struct C_0048b6b0 {
    undefined4 * sub_0048b6b0();
};

extern undefined * g_01e59f50;
// @baa 0x0048b6b0
undefined4 * C_0048b6b0::sub_0048b6b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59f50);
  return param_1;
}

struct C_0048b6d0 {
    void sub_0048b6d0();
};

// @baa 0x0048b6d0
void C_0048b6d0::sub_0048b6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f50);
  sub_0048b010();
  return;
}

struct C_0048b6e0 {
    undefined4 * sub_0048b6e0();
};

extern undefined * g_01e59f78;
// @baa 0x0048b6e0
undefined4 * C_0048b6e0::sub_0048b6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59f78);
  return param_1;
}

struct C_0048b700 {
    void sub_0048b700();
};

// @baa 0x0048b700
void C_0048b700::sub_0048b700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f78);
  sub_0048b010();
  return;
}

struct C_0048b710 {
    undefined4 * sub_0048b710();
};

extern undefined * g_01e59fa0;
// @baa 0x0048b710
undefined4 * C_0048b710::sub_0048b710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59fa0);
  return param_1;
}

struct C_0048b730 {
    void sub_0048b730();
};

// @baa 0x0048b730
void C_0048b730::sub_0048b730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59fa0);
  sub_0048b010();
  return;
}

struct C_0048b740 {
    undefined4 * sub_0048b740();
};

extern undefined * g_01e59fc8;
// @baa 0x0048b740
undefined4 * C_0048b740::sub_0048b740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59fc8);
  return param_1;
}

struct C_0048b760 {
    void sub_0048b760();
};

// @baa 0x0048b760
void C_0048b760::sub_0048b760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59fc8);
  sub_0048b010();
  return;
}

struct C_0048b770 {
    undefined4 * sub_0048b770();
};

extern undefined * g_01e59ff0;
// @baa 0x0048b770
undefined4 * C_0048b770::sub_0048b770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e59ff0);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048b790 {
    void sub_0048b790();
};

// @baa 0x0048b790
void C_0048b790::sub_0048b790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59ff0);
  sub_0048b010();
  return;
}

struct C_0048b8a0 {
    undefined4 * sub_0048b8a0();
};

extern undefined * g_01e5a018;
// @baa 0x0048b8a0
undefined4 * C_0048b8a0::sub_0048b8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a018);
  return param_1;
}

struct C_0048b8c0 {
    void sub_0048b8c0();
};

// @baa 0x0048b8c0
void C_0048b8c0::sub_0048b8c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a018);
  sub_0048b010();
  return;
}

struct C_0048c170 {
    void sub_0048c170();
};

// @baa 0x0048c170
void C_0048c170::sub_0048c170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0048c300 {
    undefined4 * sub_0048c300();
};

extern undefined * g_01e5a068;
// @baa 0x0048c300
undefined4 * C_0048c300::sub_0048c300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a068);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048c320 {
    void sub_0048c320();
};

// @baa 0x0048c320
void C_0048c320::sub_0048c320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a068);
  sub_0048b010();
  return;
}

struct C_0048c330 {
    undefined4 * sub_0048c330();
};

extern undefined * g_01e5a090;
// @baa 0x0048c330
undefined4 * C_0048c330::sub_0048c330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a090);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048c350 {
    void sub_0048c350();
};

// @baa 0x0048c350
void C_0048c350::sub_0048c350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a090);
  sub_0048b010();
  return;
}

struct C_0048c440 {
    undefined4 * sub_0048c440();
};

extern undefined * g_01e5a0e0;
// @baa 0x0048c440
undefined4 * C_0048c440::sub_0048c440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a0e0);
  return param_1;
}

struct C_0048c460 {
    void sub_0048c460();
};

// @baa 0x0048c460
void C_0048c460::sub_0048c460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a0e0);
  sub_0048b010();
  return;
}

struct C_0048c470 {
    undefined4 * sub_0048c470();
};

extern undefined * g_01e5a108;
// @baa 0x0048c470
undefined4 * C_0048c470::sub_0048c470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a108);
  return param_1;
}

struct C_0048c490 {
    void sub_0048c490();
};

// @baa 0x0048c490
void C_0048c490::sub_0048c490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a108);
  sub_0048b010();
  return;
}

struct C_0048c4a0 {
    undefined4 * sub_0048c4a0();
};

extern undefined * g_01e5a130;
// @baa 0x0048c4a0
undefined4 * C_0048c4a0::sub_0048c4a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a130);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c4c0 {
    void sub_0048c4c0();
};

// @baa 0x0048c4c0
void C_0048c4c0::sub_0048c4c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a130);
  sub_0048b010();
  return;
}

struct C_0048c4d0 {
    undefined4 * sub_0048c4d0();
};

extern undefined * g_01e5a158;
// @baa 0x0048c4d0
undefined4 * C_0048c4d0::sub_0048c4d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a158);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c4f0 {
    void sub_0048c4f0();
};

// @baa 0x0048c4f0
void C_0048c4f0::sub_0048c4f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a158);
  sub_0048b010();
  return;
}

struct C_0048c500 {
    undefined4 * sub_0048c500();
};

extern undefined * g_01e5a180;
// @baa 0x0048c500
undefined4 * C_0048c500::sub_0048c500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a180);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c520 {
    void sub_0048c520();
};

// @baa 0x0048c520
void C_0048c520::sub_0048c520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a180);
  sub_0048b010();
  return;
}

struct C_0048c530 {
    undefined4 * sub_0048c530();
};

extern undefined * g_01e5a1a8;
// @baa 0x0048c530
undefined4 * C_0048c530::sub_0048c530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a1a8);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c550 {
    void sub_0048c550();
};

// @baa 0x0048c550
void C_0048c550::sub_0048c550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a1a8);
  sub_0048b010();
  return;
}

struct C_0048c650 {
    undefined4 * sub_0048c650();
};

extern undefined * g_01e5a1f8;
// @baa 0x0048c650
undefined4 * C_0048c650::sub_0048c650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a1f8);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048c670 {
    void sub_0048c670();
};

// @baa 0x0048c670
void C_0048c670::sub_0048c670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a1f8);
  sub_0048b010();
  return;
}

struct C_0048c680 {
    undefined4 * sub_0048c680();
};

extern undefined * g_01e5a220;
// @baa 0x0048c680
undefined4 * C_0048c680::sub_0048c680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a220);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048c6a0 {
    void sub_0048c6a0();
};

// @baa 0x0048c6a0
void C_0048c6a0::sub_0048c6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a220);
  sub_0048b010();
  return;
}

struct C_0048c6b0 {
    undefined4 * sub_0048c6b0();
};

extern undefined * g_01e5a248;
// @baa 0x0048c6b0
undefined4 * C_0048c6b0::sub_0048c6b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a248);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c6d0 {
    void sub_0048c6d0();
};

// @baa 0x0048c6d0
void C_0048c6d0::sub_0048c6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a248);
  sub_0048b010();
  return;
}

struct C_0048c6e0 {
    undefined4 * sub_0048c6e0();
};

extern undefined * g_01e5a270;
// @baa 0x0048c6e0
undefined4 * C_0048c6e0::sub_0048c6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a270);
  return param_1;
}

struct C_0048c700 {
    void sub_0048c700();
};

// @baa 0x0048c700
void C_0048c700::sub_0048c700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a270);
  sub_0048b010();
  return;
}

struct C_0048c710 {
    undefined4 * sub_0048c710();
};

extern undefined * g_01e5a298;
// @baa 0x0048c710
undefined4 * C_0048c710::sub_0048c710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a298);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048c730 {
    void sub_0048c730();
};

// @baa 0x0048c730
void C_0048c730::sub_0048c730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a298);
  sub_0048b010();
  return;
}

struct C_0048d630 {
    void sub_0048d630();
};

// @baa 0x0048d630
void C_0048d630::sub_0048d630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0048d650 {
    int sub_0048d650(undefined4, undefined4 *);
    int sub_00414220(int);
};

// @baa 0x0048d650
int C_0048d650::sub_0048d650(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;
  ((C_0048d650 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  return param_1;
}

struct C_0048d6c0 {
    undefined4 sub_0048d6c0(byte);
};

int sub_0048b800(void);
// @baa 0x0048d6c0
undefined4 C_0048d6c0::sub_0048d6c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0048b800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0048d6e0 {
    undefined4 * sub_0048d6e0(byte);
};

// @baa 0x0048d6e0
undefined4 * C_0048d6e0::sub_0048d6e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0048d720 {
    int sub_0048d720(int);
    int sub_00414220(int);
};

// @baa 0x0048d720
int C_0048d720::sub_0048d720(int param_2)
{
    int param_1 = (int)this;
  ((C_0048d720 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_0048d810 {
    undefined4 * sub_0048d810();
};

extern undefined * g_01e5a2e8;
// @baa 0x0048d810
undefined4 * C_0048d810::sub_0048d810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a2e8);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048d830 {
    void sub_0048d830();
};

// @baa 0x0048d830
void C_0048d830::sub_0048d830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a2e8);
  sub_0048b010();
  return;
}

struct C_0048d840 {
    undefined4 * sub_0048d840();
};

extern undefined * g_01e5a310;
// @baa 0x0048d840
undefined4 * C_0048d840::sub_0048d840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a310);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048d860 {
    void sub_0048d860();
};

// @baa 0x0048d860
void C_0048d860::sub_0048d860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a310);
  sub_0048b010();
  return;
}

struct C_0048d870 {
    undefined4 * sub_0048d870();
};

extern undefined * g_01e5a338;
// @baa 0x0048d870
undefined4 * C_0048d870::sub_0048d870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a338);
  *(undefined1 *)((int)param_1 + 6) = 0;
  return param_1;
}

struct C_0048d890 {
    void sub_0048d890();
};

// @baa 0x0048d890
void C_0048d890::sub_0048d890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a338);
  sub_0048b010();
  return;
}

struct C_0048d8a0 {
    undefined4 * sub_0048d8a0();
};

extern undefined * g_01e5a360;
// @baa 0x0048d8a0
undefined4 * C_0048d8a0::sub_0048d8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a360);
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}

struct C_0048d8c0 {
    void sub_0048d8c0();
};

// @baa 0x0048d8c0
void C_0048d8c0::sub_0048d8c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a360);
  sub_0048b010();
  return;
}

struct C_0048d8d0 {
    undefined4 * sub_0048d8d0();
};

extern undefined * g_01e5a388;
// @baa 0x0048d8d0
undefined4 * C_0048d8d0::sub_0048d8d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0048af70();
  *param_1 = (undefined4)(&g_01e5a388);
  return param_1;
}

struct C_0048d8f0 {
    void sub_0048d8f0();
};

// @baa 0x0048d8f0
void C_0048d8f0::sub_0048d8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e5a388);
  sub_0048b010();
  return;
}

struct C_0048d960 {
    undefined4 sub_0048d960(byte);
};

// @baa 0x0048d960
undefined4 C_0048d960::sub_0048d960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048da70 {
    undefined4 * sub_0048da70(byte);
};

// @baa 0x0048da70
undefined4 * C_0048da70::sub_0048da70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59e88);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048dba0 {
    undefined4 sub_0048dba0(byte);
};

int sub_0048b110(void);
// @baa 0x0048dba0
undefined4 C_0048dba0::sub_0048dba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0048b110();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

void sub_0048dbc0();
// @baa 0x0048e010
void sub_0048e010(void) { sub_0048dbc0(); }

struct C_0048e140 {
    undefined4 * sub_0048e140(byte);
};

// @baa 0x0048e140
undefined4 * C_0048e140::sub_0048e140(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59ed8);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x24);
  }
  return param_1;
}

struct C_0048e2f0 {
    undefined4 * sub_0048e2f0(byte);
};

// @baa 0x0048e2f0
undefined4 * C_0048e2f0::sub_0048e2f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f00);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048e3b0 {
    undefined4 * sub_0048e3b0(byte);
};

// @baa 0x0048e3b0
undefined4 * C_0048e3b0::sub_0048e3b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f28);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x1c);
  }
  return param_1;
}

struct C_0048e590 {
    undefined4 * sub_0048e590(byte);
};

// @baa 0x0048e590
undefined4 * C_0048e590::sub_0048e590(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f50);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048e6b0 {
    undefined4 * sub_0048e6b0(byte);
};

// @baa 0x0048e6b0
undefined4 * C_0048e6b0::sub_0048e6b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59f78);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048e7d0 {
    undefined4 * sub_0048e7d0(byte);
};

// @baa 0x0048e7d0
undefined4 * C_0048e7d0::sub_0048e7d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59fa0);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048e8f0 {
    undefined4 * sub_0048e8f0(byte);
};

// @baa 0x0048e8f0
undefined4 * C_0048e8f0::sub_0048e8f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59fc8);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}

struct C_0048ea30 {
    undefined4 * sub_0048ea30(byte);
};

// @baa 0x0048ea30
undefined4 * C_0048ea30::sub_0048ea30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e59ff0);
  sub_0048b010();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x14);
  }
  return param_1;
}
