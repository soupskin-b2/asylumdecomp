// UnrealEd_1270000.cpp (part 8 of 8): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0127ee50(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0127ee50
int C::sub_0127ee50(undefined4*param_2)
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

struct C_01278180
{
    char pad_00[0x644];
    float Source;
    float Target;

    void sub_01278180();
};

// @baa 0x01278180
void C_01278180::sub_01278180()
{
    Target = Source;
}

struct C_01278190
{
    char pad_00[0x644];
    float Target;
    float Source;

    void sub_01278190();
};

// @baa 0x01278190
void C_01278190::sub_01278190()
{
    Target = Source;
}

struct Sub
{
    void sub_012ffa60();
};

struct C_01277850
{
    char pad_00[0x40];
    Sub* Object;

    void sub_01277850();
};

// @baa 0x01277850
void C_01277850::sub_01277850()
{
    if (Object)
        Object->sub_012ffa60();
}

struct Sub_01277860
{
    void sub_01308c80();
};

struct C_01277860
{
    char pad_00[0x40];
    Sub_01277860* Object;

    void sub_01277860();
};

// @baa 0x01277860
void C_01277860::sub_01277860()
{
    if (Object)
        Object->sub_01308c80();
}

struct C_01277870
{
    char pad_00[0x40];
    Sub* Object;

    void sub_01277870();
};

// @baa 0x01277870
void C_01277870::sub_01277870()
{
    if (Object)
        Object->sub_012ffa60();
}

struct Sub_01278130
{
    void sub_00f76cd0(INT Value);
};

extern Sub_01278130* g_026d4dfc;
// @baa 0x01278130
void sub_01278130()
{
    g_026d4dfc->sub_00f76cd0(1);
}
