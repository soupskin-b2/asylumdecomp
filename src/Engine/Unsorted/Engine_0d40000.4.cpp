// Engine_0d40000.cpp (part 4 of 4): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00d48700(int);
};

int sub_0053df70(...);
// @baa 0x00d48700
void C::sub_00d48700(int param_2)
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

struct C_00d48740{
int sub_00d48740(undefined4*);
};

int sub_0053d240(...);
// @baa 0x00d48740
int C_00d48740::sub_00d48740(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00d48a00 {
    void sub_00d48a00(int);
};

// @baa 0x00d48a00
void C_00d48a00::sub_00d48a00(int param_2)
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

struct C_00d48a40{
int sub_00d48a40(undefined4*);
};

// @baa 0x00d48a40
int C_00d48a40::sub_00d48a40(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00d4ba70 {
    void sub_00d4ba70(int);
};

// @baa 0x00d4ba70
void C_00d4ba70::sub_00d4ba70(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00d4c600 {
    void sub_00d4c600(int);
};

// @baa 0x00d4c600
void C_00d4c600::sub_00d4c600(int param_2)
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

struct C_00d49190
{
    INT field_00;
    INT field_04;
    INT field_08;
    INT field_0c;
    INT field_10;
    INT Value;

    INT* sub_00d49190(INT* Out);
};

// @baa 0x00d49190
INT* C_00d49190::sub_00d49190(INT* Out)
{
    *Out = Value;
    return Out;
}

struct C_00d45600
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_00d45600* sub_00d45600();
};

// @baa 0x00d45600
C_00d45600* C_00d45600::sub_00d45600()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}

struct Vec3Like {
    int A;
    int B;
    int C;

    Vec3Like* sub_00d47020(const Vec3Like& Src)
    {
        A = Src.A;
        B = Src.B;
        C = Src.C;
        return this;
    }
};

// @baa 0x00d47020
int ForceSub(Vec3Like& Dst, const Vec3Like& Src)
{
    Dst.sub_00d47020(Src);
    return Dst.A;
}

// 00d46000: member of a 12-byte struct; stores its three arguments
// into the struct's three 32-bit fields and returns this.
struct V3
{
    INT X;
    INT Y;
    INT Z;

    V3* sub_00d46000(INT A, INT B, INT C)
    {
        X = A;
        Y = B;
        Z = C;
        return this;
    }
};

// @baa 0x00d46000
// keeps sub_00d46000 in the object
V3* sub_00d46100(V3* V, INT A, INT B, INT C)
{
    return V->sub_00d46000(A, B, C);
}

// FVtObject_00d477a0: its class's vtable is installed and the trailing word set.
extern const unsigned char g_020afaf8;
struct FVtObject_00d477a0
{
	const void* ClassVTable; /* 0x0 */
	void* Owner; /* 0x4 */

	FVtObject_00d477a0* Init();
};

// @baa 0x00d477a0
FVtObject_00d477a0* FVtObject_00d477a0::Init()
{
	ClassVTable = &g_020afaf8;
	Owner = (void*)1;
	return this;
}
