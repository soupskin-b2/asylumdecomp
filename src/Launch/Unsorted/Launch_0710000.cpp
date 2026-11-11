// Launch_0710000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
void sub_0071f3d0();
};

extern uint*g_026b0d94;
// @baa 0x0071f3d0
void C::sub_0071f3d0(void)
{
int param_1=(int)this;

int iVar1;

if(*(int*)(param_1+0x20)==0){
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar1));
}
*(undefined4*)(param_1+0x24)=1;
}
return;
}

struct C_0071f4d0{
void sub_0071f4d0();
};

// @baa 0x0071f4d0
void C_0071f4d0::sub_0071f4d0(void)
{
int param_1=(int)this;

int iVar1;

if(*(int*)(param_1+0x20)!=0){
iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar1));
}
*(undefined4*)(param_1+0x24)=1;
}
return;
}
