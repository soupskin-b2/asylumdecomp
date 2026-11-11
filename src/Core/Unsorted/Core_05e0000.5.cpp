// Core_05e0000.cpp (part 5 of 5): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_005ef310(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005ef310
int C::sub_005ef310(undefined4*param_2)
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

extern "C" __declspec(dllimport) void __stdcall OutputDebugStringW(const wchar_t* Text);
// @baa 0x005ec6f0
void sub_005ec6f0(const wchar_t* Text)
{
    OutputDebugStringW(Text);
}

typedef void* HANDLE;

extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(HANDLE Handle, unsigned long Milliseconds);
struct C_005ec380
{
    INT pad_00;
    HANDLE Handle;

    void sub_005ec380();
};

// @baa 0x005ec380
void C_005ec380::sub_005ec380()
{
    WaitForSingleObject(Handle, 0xFFFFFFFF);
}

struct C_005ef9b0
{
    void sub_005ef1c0(INT* Arg);

    void sub_005ef9b0(INT Value);
};

// @baa 0x005ef9b0
void C_005ef9b0::sub_005ef9b0(INT Value)
{
    sub_005ef1c0(&Value);
}

struct C_005ef9c0
{
    void sub_005ef1c0(INT* Arg);

    void sub_005ef9c0(INT Value);
};

// @baa 0x005ef9c0
void C_005ef9c0::sub_005ef9c0(INT Value)
{
    sub_005ef1c0(&Value);
}
