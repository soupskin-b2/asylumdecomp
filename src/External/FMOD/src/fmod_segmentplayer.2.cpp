// fmod_segmentplayer.cpp (part 2 of 2): 7 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S2 {
    int sub_017fa7c0();
};

struct S1 {
    char pad[0x14];
    S2 s;
    int sub_017faba0();
};

// @baa 0x017faba0
int S1::sub_017faba0()
{
    s.sub_017fa7c0();
    return 0;
}

struct C{
int sub_017fabf0(undefined4,undefined4,undefined4);
};

// @baa 0x017fabf0
int C::sub_017fabf0(undefined4 param_2,undefined4 param_3,uint param_4)
{
int param_1=(int)this;

int iVar1;

if((*(code**)(param_1+0x9c)!=(code*)0x0)&&
(iVar1=(*(int(__stdcall**)(int,int,int,int))(param_1+0x9c))((int)(param_2),(int)(param_3),(int)(param_4),(int)(*(undefined4*)(param_1+0xa0)))
,iVar1!=0)){
return iVar1;
}
return 0;
}

struct C_017fae90 {
    undefined4 * sub_017fae90(undefined4);
    int sub_017fa6f0(int);
};

extern undefined4 g_023e0a14;
// @baa 0x017fae90
undefined4 * C_017fae90::sub_017fae90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (undefined4)((&g_023e0a14));
  ((C_017fae90 *)(this))->sub_017fa6f0(param_2);
  return param_1;
}

struct C_017fb1c0 {
    int sub_017fb1c0();
    int sub_017fab40(int);
};

// @baa 0x017fb1c0
int C_017fb1c0::sub_017fb1c0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017fb1c0 *)(this))->sub_017fab40(*(int *)(param_1 + 0xc) + -1);
  return param_1 + iVar1 * 4;
}

struct C_017fb1e0 {
    int sub_017fb1e0();
    int sub_017fab40(int);
};

// @baa 0x017fb1e0
int C_017fb1e0::sub_017fb1e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017fb1e0 *)(this))->sub_017fab40(*(int *)(param_1 + 0xc) + -1);
  return param_1 + iVar1 * 4;
}

struct C_017fb220 {
    int sub_017fb220(undefined4);
    int sub_017fab40(int);
};

// @baa 0x017fb220
int C_017fb220::sub_017fb220(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017fb220 *)(this))->sub_017fab40(param_2);
  return param_1 + iVar1 * 4;
}

struct ObjB {
    int sub_017fb8e0();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_017fb9c0();
};

// @baa 0x017fb9c0
int ObjA::sub_017fb9c0() { return p4->sub_017fb8e0(); }
