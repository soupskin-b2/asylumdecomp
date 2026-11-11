// ShaderManager.cpp: 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4*g_026b0d94;
// @baa 0x0071d550
int*UTexture2D::sub_0071d550(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar2=*param_1;
iVar1=*param_2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+500))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x240))((int)(iVar2));
}
return param_1;
}

// @baa 0x0071d5a0
void UTexture2D::sub_0071d5a0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x240))((int)(iVar1));
}
return;
}

// @baa 0x0071d5c0
int*UTexture2D::sub_0071d5c0(int*param_2)
{
int*param_1=(int*)this;

int iVar2;
int iVar1;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1f8))((int)(iVar1));
}
*param_1=iVar1;
if(0!=iVar2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x244))((int)(iVar2));
}
return param_1;
}
