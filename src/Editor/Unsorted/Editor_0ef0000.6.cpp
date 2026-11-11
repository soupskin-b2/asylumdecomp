// Editor_0ef0000.cpp (part 6 of 11): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray-like container: count + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Unk04;   // 0x04
    INT Count;   // 0x08
    INT* Data;   // 0x0c
    INT sub_00ef0e60(UINT Index);
};

// @baa 0x00ef0e60
INT FMArray::sub_00ef0e60(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 507);
    return Data[Index];
}

struct C {
    void sub_00efa530(int);
};

int sub_0053df70(...);
// @baa 0x00efa530
void C::sub_00efa530(int param_2)
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

struct C_00efa5d0 {
    void sub_00efa5d0(int);
};

// @baa 0x00efa5d0
void C_00efa5d0::sub_00efa5d0(int param_2)
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

struct C_00efa670 {
    void sub_00efa670(int);
};

// @baa 0x00efa670
void C_00efa670::sub_00efa670(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00efa710 {
    void sub_00efa710(int);
};

// @baa 0x00efa710
void C_00efa710::sub_00efa710(int param_2)
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

struct C_00efb080 {
    void sub_00efb080(int);
};

// @baa 0x00efb080
void C_00efb080::sub_00efb080(int param_2)
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
