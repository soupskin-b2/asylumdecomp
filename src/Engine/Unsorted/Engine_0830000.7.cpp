// Engine_0830000.cpp (part 7 of 7): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0083cc20(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0083cc20
int C::sub_0083cc20(undefined4*param_2)
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

struct C_00838940
{
    INT Value;

    INT sub_00838940();
};

// @baa 0x00838940
INT C_00838940::sub_00838940()
{
    return Value == 0 ? -1 : 0;
}

struct Vec3 {
    float x;
    float y;
    float z;
    Vec3& sub_00837a90(const Vec3& v);
};

// @baa 0x00837a90
Vec3& Vec3::sub_00837a90(const Vec3& v)
{
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

struct S_0083b3a0 {
    int X0;
    int X1;
    int X2;
    int X3;
    int X4;
    int X5;
    int X6;

    __declspec(noinline) S_0083b3a0* sub_0083b3a0();
};

// @baa 0x0083b3a0
S_0083b3a0* S_0083b3a0::sub_0083b3a0()
{
    int Z0 = 0;
    int Z1 = 0;
    int Z2 = 0;
    int Z3 = 0;
    int Z4 = 0;
    int Z5 = 0;
    int Z6 = 0;
    X0 = Z0;
    X1 = Z1;
    X2 = Z2;
    X3 = Z3;
    X4 = Z4;
    X5 = Z5;
    X6 = Z6;
    return this;
}

static void probe_0083b3a0()
{
    S_0083b3a0 S;
    S.sub_0083b3a0();
}

struct C_008359d0
{
    char pad_00[0x30];
    INT Flags;

    INT sub_008359d0();
};

// @baa 0x008359d0
INT C_008359d0::sub_008359d0()
{
    return (Flags & 0x800) ? (INT)this : 0;
}

struct FFloatPair
{
    float x;
    float y;

    FFloatPair* sub_008336b0(int A, int B);
};

// @baa 0x008336b0
FFloatPair* FFloatPair::sub_008336b0(int A, int B)
{
    x = (float)A;
    y = (float)B;
    return this;
}
