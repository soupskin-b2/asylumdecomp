// OnlineGameInterfaceImpl.cpp (part 3 of 5): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
undefined4*sub_00e2a270(undefined4,undefined4);
};

int sub_0053df40(...);
extern undefined4*g_026a3690;
// @baa 0x00e2a270
undefined4*C::sub_00e2a270(undefined4 param_2,undefined4 param_3)
{
undefined4*param_1=(undefined4*)this;

undefined4 uVar1;

*param_1=param_3;
param_1[1]=0;
param_1[3]=param_2;
param_1[4]=0;
param_1[5]=0;
uVar1=sub_0053df40(param_2,8);
param_1[2]=uVar1;
uVar1=(*(int(__stdcall**)(int,int))(*g_026a3690+4))((int)(0),(int)(0));
param_1[6]=uVar1;
uVar1=(**(code**)*g_026a3690)();
param_1[7]=uVar1;
return param_1;
}
