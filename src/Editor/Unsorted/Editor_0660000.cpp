// Editor_0660000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct E { BYTE Bytes[32]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00662e50(INT Index);
};

// @baa 0x00662e50
E* S::sub_00662e50(INT Index)
{
    return &Items(Index);
}

struct E_00662ea0 { BYTE Bytes[48]; };

struct S_00662ea0 {
    TArray<E_00662ea0> Items; // 0x00
    E_00662ea0* sub_00662ea0(INT Index);
};

// @baa 0x00662ea0
E_00662ea0* S_00662ea0::sub_00662ea0(INT Index)
{
    return &Items(Index);
}

struct C {
    int sub_00662ef0(int);
};

// @baa 0x00662ef0
int C::sub_00662ef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00662f30 {
    void sub_00662f30(undefined4 *);
};

// @baa 0x00662f30
void C_00662f30::sub_00662f30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00663170
FString ULensFlare::sub_00663170()
{
    return TEXT("undefined");
}

extern undefined4*g_026b0d94;
// @baa 0x006631a0
void ULensFlare::sub_006631a0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(DWORD*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x22c))((int)(iVar1));
}
iVar1=*(int*)(param_1+0x18);
*(undefined4*)(param_1+0x18)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
return;
}

struct C_006631f0 {
    FString sub_006631f0();
};

// @baa 0x006631f0
FString C_006631f0::sub_006631f0()
{
    return TEXT("FTexture");
}

// @baa 0x00663220
void ULensFlare::sub_00663220(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00663240 {
    FString sub_00663240();
};

// @baa 0x00663240
FString C_00663240::sub_00663240()
{
    return TEXT("FVertexBuffer");
}

// @baa 0x00663270
void ULensFlare::sub_00663270(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar1));
}
return;
}

struct C_00663290 {
    FString sub_00663290();
};

// @baa 0x00663290
FString C_00663290::sub_00663290()
{
    return TEXT("FIndexBuffer");
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_006632c0();
};

// @baa 0x006632c0
S16* S16::sub_006632c0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}
