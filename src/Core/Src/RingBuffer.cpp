// RingBuffer.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
void sub_00542ad0();
};

int sub_006311e0(...);
extern undefined4*g_026a3690;
// @baa 0x00542ad0
void C::sub_00542ad0(void)
{
int*param_1=(int*)this;
undefined4 uVar1;
if(param_1[1]!=0){
*(int*)(*param_1+8)=param_1[2];
*(undefined4*)(*param_1+0xc)=0;
param_1[1]=0;
if(*(int*)(*param_1+0x18)==0){
uVar1=(*(int(__stdcall**)(int,int))(*g_026a3690+4))((int)(0),(int)(0));
*(undefined4*)(*param_1+0x18)=uVar1;
if(*(int*)(*param_1+0x18)==0){
sub_006311e0("RingBuffer.DataWrittenEvent",
"e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\RingBuffer.cpp"
,0x5f,L"Failed to create data-write event for FRingBuffer");
}
}
(**(code**)(**(int**)(*param_1+0x18)+8))();
return;
}
return;
}
