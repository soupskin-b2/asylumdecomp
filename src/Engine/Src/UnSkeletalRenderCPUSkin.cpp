// UnSkeletalRenderCPUSkin.cpp (part 1 of 2): 7 functions
// Placed here by: neighbours 6, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_009458c0(int a0); };

// @baa 0x009458c0
void C::sub_009458c0(int a0) { *(int*)((char*)this + 40) = a0; }

extern char g_01f7cea8[];
// @baa 0x009458f0
int sub_009458f0(void) { return (int)g_01f7cea8; }

// @baa 0x00945900
void __stdcall sub_00945900(int a0) {  }

struct C_00952e10{
void sub_00952e10();
};

extern undefined4*g_026b0d94;
// @baa 0x00952e10
void C_00952e10::sub_00952e10(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
return;
}

struct C_00952e30{
void sub_00952e30();
};

// @baa 0x00952e30
void C_00952e30::sub_00952e30(void)
{
undefined4 param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(uint*)(0x14+param_1)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar1));
}
return;
}

struct C_009580d0 {
    void sub_009580d0(int);
};

int sub_0053df70(...);
// @baa 0x009580d0
void C_009580d0::sub_009580d0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0096f060 {
    undefined4 sub_0096f060(byte);
};

int sub_0053dfa0(...);
int sub_0095f8c0(void);
// @baa 0x0096f060
undefined4 C_0096f060::sub_0096f060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0095f8c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
