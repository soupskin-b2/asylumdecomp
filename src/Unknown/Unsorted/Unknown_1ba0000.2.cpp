// Unknown_1ba0000.cpp (part 2 of 3): 16 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    char pad[0x2c];
    float f2c;
    void sub_01ba1440(float f);
};

// @baa 0x01ba1440
void C::sub_01ba1440(float f)
{
    f2c = f;
}

struct C_01ba1460 {
    char pad[0x30];
    float f30;
    void sub_01ba1460(float f);
};

// @baa 0x01ba1460
void C_01ba1460::sub_01ba1460(float f)
{
    f30 = f;
}

struct C_01ba1480 {
    void sub_01ba1480(float param_2);
};

// @baa 0x01ba1480
void C_01ba1480::sub_01ba1480(float param_2)
{
    *(float *)(this + 0x34) = param_2;
}

struct C_01ba14a0 {
    void sub_01ba14a0(float arg1);
};

// @baa 0x01ba14a0
void C_01ba14a0::sub_01ba14a0(float arg1)
{
    *(float *)(this + 0x38) = arg1;
}

struct C_01ba14c0 {
    char pad[0x3c];
    float f3c;
    void sub_01ba14c0(float param_1);
};

// @baa 0x01ba14c0
void C_01ba14c0::sub_01ba14c0(float param_1)
{
    this->f3c = param_1;
}

struct C_01ba14e0 {
    void sub_01ba14e0(float param1);
};

// @baa 0x01ba14e0
void C_01ba14e0::sub_01ba14e0(float param1)
{
    *(float *)(this + 0x40) = param1;
}

struct C_01ba1500 {
    char pad[0x44];
    FLOAT f44;
    void sub_01ba1500(FLOAT param);
};

// @baa 0x01ba1500
void C_01ba1500::sub_01ba1500(FLOAT param) { f44 = param; }

struct GFxConstShapeWithStyles {
    char pad[0x48];
    float f_0x48;
    void sub_01ba1520(float param);
};

// @baa 0x01ba1520
void GFxConstShapeWithStyles::sub_01ba1520(float param) { f_0x48 = param; }

// @baa 0x01ba1730
void sub_01ba1730(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ba1790(volatile FFaceData *Other);
};

// @baa 0x01ba1790
void FFaceData::sub_01ba1790(volatile FFaceData *Other)
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

struct FFaceData_01ba17c0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ba17c0(volatile FFaceData_01ba17c0 *Other);
};

// @baa 0x01ba17c0
void FFaceData_01ba17c0::sub_01ba17c0(volatile FFaceData_01ba17c0 *Other)
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

struct S_01ba2920 { void sub_01ba1900(); };

// @baa 0x01ba2920
void sub_01ba2920(S_01ba2920 *p) { if (p) p->sub_01ba1900(); }

int sub_01bb51e0(...);
int sub_01bb5f20(...);
// @baa 0x01ba46d0
int sub_01ba46d0(undefined4 param_1,int param_2,undefined4*param_3)
{
int iVar1;
int iStack_4;

iStack_4=0;
iVar1=0;
if((param_2!=0)&&(*(DWORD*)(param_2+0x1c)!=0)){
iVar1=sub_01bb5f20(*(int*)(param_2+0x1c),param_1,&iStack_4);
if(iVar1!=0){
if(iStack_4!=0){
sub_01bb51e0(iVar1);
return 0;
}
*param_3=*(undefined4*)(param_2+0x2070);
}
}
return iVar1;
}

struct C_01baeef0 {
    int sub_01baeef0(int);
};

// @baa 0x01baeef0
int C_01baeef0::sub_01baeef0(int param_2)
{
    int param_1 = (int)this;
  return *(int *)(param_2 + 0xc) + *(int *)(param_1 + 0xc);
}

struct C_01baf2b0 {
    undefined4 * sub_01baf2b0(int, int);
    int sub_01baefe0();
    int sub_01baf0f0(int);
};

// @baa 0x01baf2b0
undefined4 * C_01baf2b0::sub_01baf2b0(int param_2, int param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int iVar1;
  *param_1 = 0xc;
  param_1[1] = 0x1f;
  param_1[2] = param_3 + -1;
  iVar1 = ((C_01baf2b0 *)(this))->sub_01baefe0();
  param_1[3] = iVar1;
  ((C_01baf2b0 *)(this))->sub_01baf0f0(iVar1 + param_2);
  return param_1;
}

struct C_01baf300 {
    int * sub_01baf300(int);
    int sub_01baefe0();
};

// @baa 0x01baf300
int * C_01baf300::sub_01baf300(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  *param_1 = *(int *)(param_2 + 0x10) + 1;
  param_1[1] = *(int *)(param_2 + 0xc);
  param_1[2] = *(int *)(param_2 + 0x14) + 0x76c;
  iVar1 = ((C_01baf300 *)(this))->sub_01baefe0();
  param_1[3] = iVar1;
  return param_1;
}
