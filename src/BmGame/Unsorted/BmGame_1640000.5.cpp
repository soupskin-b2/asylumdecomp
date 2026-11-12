// BmGame_1640000.cpp (part 5 of 5): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0164a4f0(int);
};

int sub_0053df70(...);
// @baa 0x0164a4f0
void C::sub_0164a4f0(int param_2)
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

struct C_0164a620{
void sub_0164a620(int*);
};

void*sub_01a375f0(void*,void*,size_t);
// @baa 0x0164a620
void C_0164a620::sub_0164a620(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,4*iVar1,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return;
}

struct C_0164a800 {
    void sub_0164a800(int);
};

// @baa 0x0164a800
void C_0164a800::sub_0164a800(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0164a980 {
    void sub_0164a980(int);
};

// @baa 0x0164a980
void C_0164a980::sub_0164a980(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x34,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0164fe10 {
    void sub_0164fe10(int);
};

// @baa 0x0164fe10
void C_0164fe10::sub_0164fe10(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01647940
{
    INT field_00;
    INT field_04;
    INT field_08;

    C_01647940* sub_01647940();
};

// @baa 0x01647940
C_01647940* C_01647940::sub_01647940()
{
    return field_08 ? 0 : this;
}

struct C_01647970
{
    INT field_00;
    INT field_04;
    INT field_08;

    C_01647970* sub_01647970();
};

// @baa 0x01647970
C_01647970* C_01647970::sub_01647970()
{
    return field_04 ? 0 : this;
}

struct C_01647950
{
    INT pad_00[2];
    INT Value;

    C_01647950* sub_01647950();
};

// @baa 0x01647950
C_01647950* C_01647950::sub_01647950()
{
    return Value ? 0 : this;
}

struct C_01647960
{
    char pad_00[0x4];
    INT Value;

    INT sub_01647960();
};

// @baa 0x01647960
INT C_01647960::sub_01647960()
{
    return Value == 1 ? (INT)this : 0;
}
