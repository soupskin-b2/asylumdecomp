// FogVolumeRendering.cpp: 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
void sub_0040d050();
};

extern undefined4*g_026b0d94;
// @baa 0x0040d050
void C::sub_0040d050(void)
{
int*param_1=(int*)this;

if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(*param_1));
}
return;
}

struct D { void sub_00ab8150(); };

extern D g_026bbc78;
// @baa 0x01e24a60
void sub_01e24a60() { g_026bbc78.sub_00ab8150(); }
