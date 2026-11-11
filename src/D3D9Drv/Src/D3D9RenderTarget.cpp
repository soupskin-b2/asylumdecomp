// D3D9RenderTarget.cpp: 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int*sub_00c20d50(int);
};

extern undefined4*g_026b0d94;
// @baa 0x00c20d50
int*C::sub_00c20d50(int param_2)
{
int*param_1=(int*)this;

*param_1=param_2;
if(param_2){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1e4))((int)(param_2));
}
return param_1;
}

struct C_00ea0780{
int*sub_00ea0780();
};

// @baa 0x00ea0780
int*C_00ea0780::sub_00ea0780(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((undefined4)(piVar1));
}
return param_1;
}

// @baa 0x00ea0ab0
int*ULensFlare::sub_00ea0ab0(void)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=0;
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}
