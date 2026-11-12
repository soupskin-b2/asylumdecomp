// Core_0560000.cpp (part 3 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_00567290();
// @baa 0x0056a660
void sub_0056a660(void) { sub_00567290(); }

struct C{
int sub_0056e7b0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0056e7b0
int C::sub_0056e7b0(undefined4*param_2)
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

struct C_00568780
{
    INT Value;

    INT sub_00568780();
};

// @baa 0x00568780
INT C_00568780::sub_00568780()
{
    return Value == 0 ? -1 : 0;
}

extern INT g_026a1c50;
struct C_0056a540
{
    char pad_00[0x4];
    INT Value;

    bool sub_0056a540();
};

// @baa 0x0056a540
bool C_0056a540::sub_0056a540()
{
    return Value < g_026a1c50;
}

struct TData12 {
    DWORD Field0;
    DWORD Field1;
    DWORD Field2;
    TData12& sub_00566ac0(const TData12* Src);
};

// @baa 0x00566ac0
TData12& TData12::sub_00566ac0(const TData12* Src)
{
    Field0 = Src->Field0;
    Field1 = Src->Field1;
    Field2 = Src->Field2;
    return *this;
}

struct C_00567cd0
{
    int sub_0053ea70(int a, int b);
};

// @baa 0x00567cd0
void __stdcall sub_00567cd0(C_00567cd0 *obj, int a, int b)
{
    obj->sub_0053ea70(a + b * 4, 4);
}
