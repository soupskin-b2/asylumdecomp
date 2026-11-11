// Engine_0a70000.cpp: 177 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
void sub_00a70850(int);
};

int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00a70850
void C::sub_00a70850(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((0>iVar2)||((iVar2>=param_1[1]&&((iVar2!=0||(param_1[1]!=0)))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1!=0)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

struct C_00a709c0 {
    undefined4 * sub_00a709c0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01fcfec8;
// @baa 0x00a709c0
undefined4 * C_00a709c0::sub_00a709c0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a709c0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01fcfec8);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}

struct C_00a709f0 {
    undefined4 * sub_00a709f0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01fcfec4;
// @baa 0x00a709f0
undefined4 * C_00a709f0::sub_00a709f0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00a709f0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01fcfec4);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_00a70a50 { int sub_00a70a50(void); };

// @baa 0x00a70a50
int C_00a70a50::sub_00a70a50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a70a90 { int sub_00a70a90(void); };

// @baa 0x00a70a90
int C_00a70a90::sub_00a70a90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a70c50 { int sub_00a70c50(void); };

// @baa 0x00a70c50
int C_00a70c50::sub_00a70c50(void) { return *(int*)((char*)this + 0); }

struct C_00a70c60 {
    void sub_00a70c60();
};

extern undefined4 g_01ec1274;
// @baa 0x00a70c60
void C_00a70c60::sub_00a70c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00a70cc0 { int sub_00a70cc0(void); };

// @baa 0x00a70cc0
int C_00a70cc0::sub_00a70cc0(void) { return *(int*)((char*)this + 0); }

struct C_00a70cd0 {
    void sub_00a70cd0();
};

// @baa 0x00a70cd0
void C_00a70cd0::sub_00a70cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00a70d00 {
    undefined4 * sub_00a70d00(byte);
};

int sub_0053dfa0(...);
// @baa 0x00a70d00
undefined4 * C_00a70d00::sub_00a70d00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a70d40 {
    undefined4 * sub_00a70d40(byte);
};

// @baa 0x00a70d40
undefined4 * C_00a70d40::sub_00a70d40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0069c170(...);
// @baa 0x00a70d80
void sub_00a70d80(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

// @baa 0x00a70da0
void sub_00a70da0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00a70dc0 {
    int sub_00a70dc0(int);
};

// @baa 0x00a70dc0
int C_00a70dc0::sub_00a70dc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a70dd0 {
    int sub_00a70dd0(int);
};

// @baa 0x00a70dd0
int C_00a70dd0::sub_00a70dd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a70de0 {
    int sub_00a70de0(int);
};

// @baa 0x00a70de0
int C_00a70de0::sub_00a70de0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a70df0 {
    int sub_00a70df0(int);
};

// @baa 0x00a70df0
int C_00a70df0::sub_00a70df0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_00a70e00 {
    int sub_00a70e00(int);
};

// @baa 0x00a70e00
int C_00a70e00::sub_00a70e00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a70e10 {
    int sub_00a70e10(int);
};

// @baa 0x00a70e10
int C_00a70e10::sub_00a70e10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00a70e30 {
    int sub_00a70e30(int);
};

// @baa 0x00a70e30
int C_00a70e30::sub_00a70e30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00a70e40 {
    int sub_00a70e40();
};

// @baa 0x00a70e40
int C_00a70e40::sub_00a70e40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a70e60 {
    int sub_00a70e60();
};

// @baa 0x00a70e60
int C_00a70e60::sub_00a70e60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

extern undefined4*g_026b0d94;
// @baa 0x00a71a40
void ULensFlare::sub_00a71a40(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a71ac0{
void sub_00a71ac0();
};

// @baa 0x00a71ac0
void C_00a71ac0::sub_00a71ac0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a727a0 { int sub_00a727a0(void); };

// @baa 0x00a727a0
int C_00a727a0::sub_00a727a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a727b0 { int sub_00a727b0(void); };

// @baa 0x00a727b0
int C_00a727b0::sub_00a727b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a727c0 { int sub_00a727c0(void); };

// @baa 0x00a727c0
int C_00a727c0::sub_00a727c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a727d0 { int sub_00a727d0(void); };

// @baa 0x00a727d0
int C_00a727d0::sub_00a727d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a727e0 { int sub_00a727e0(void); };

// @baa 0x00a727e0
int C_00a727e0::sub_00a727e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a727f0 { int sub_00a727f0(void); };

// @baa 0x00a727f0
int C_00a727f0::sub_00a727f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a72800 { int sub_00a72800(void); };

// @baa 0x00a72800
int C_00a72800::sub_00a72800(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a72810 { int sub_00a72810(void); };

// @baa 0x00a72810
int C_00a72810::sub_00a72810(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a728e0 {
    undefined4 * sub_00a728e0(byte);
};

// @baa 0x00a728e0
undefined4 * C_00a728e0::sub_00a728e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a72920 {
    undefined4 * sub_00a72920(byte);
};

// @baa 0x00a72920
undefined4 * C_00a72920::sub_00a72920(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a72960 {
    undefined4 * sub_00a72960(byte);
};

// @baa 0x00a72960
undefined4 * C_00a72960::sub_00a72960(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a729a0 {
    undefined4 * sub_00a729a0(byte);
};

// @baa 0x00a729a0
undefined4 * C_00a729a0::sub_00a729a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a729e0 {
    undefined4 * sub_00a729e0(byte);
};

// @baa 0x00a729e0
undefined4 * C_00a729e0::sub_00a729e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a72a20 {
    undefined4 * sub_00a72a20(byte);
};

// @baa 0x00a72a20
undefined4 * C_00a72a20::sub_00a72a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a72a60 {
    undefined4 * sub_00a72a60(byte);
};

// @baa 0x00a72a60
undefined4 * C_00a72a60::sub_00a72a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a72aa0 {
    undefined4 * sub_00a72aa0(byte);
};

// @baa 0x00a72aa0
undefined4 * C_00a72aa0::sub_00a72aa0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00a72ae0 { int sub_00a63820(int); };

// @baa 0x00a72ae0
int sub_00a72ae0(S_00a72ae0 *s, int a) { return s->sub_00a63820(a); }

// @baa 0x00a72af0
void sub_00a72af0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct S_00a72b10 { int sub_00a63870(int); };

// @baa 0x00a72b10
int sub_00a72b10(S_00a72b10 *s, int a) { return s->sub_00a63870(a); }

// @baa 0x00a72b20
void sub_00a72b20(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct S_00a72b40 { int sub_00a638c0(int); };

// @baa 0x00a72b40
int sub_00a72b40(S_00a72b40 *s, int a) { return s->sub_00a638c0(a); }

// @baa 0x00a72b50
void sub_00a72b50(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct S_00a72b70 { int sub_00a63910(int); };

// @baa 0x00a72b70
int sub_00a72b70(S_00a72b70 *s, int a) { return s->sub_00a63910(a); }

// @baa 0x00a72b80
void sub_00a72b80(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct S_00a72ba0 { int sub_00a639a0(int); };

// @baa 0x00a72ba0
int sub_00a72ba0(S_00a72ba0 *s, int a) { return s->sub_00a639a0(a); }

// @baa 0x00a72bb0
void sub_00a72bb0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct S_00a72bd0 { int sub_00a63a10(int); };

// @baa 0x00a72bd0
int sub_00a72bd0(S_00a72bd0 *s, int a) { return s->sub_00a63a10(a); }

// @baa 0x00a72be0
void sub_00a72be0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00a72c00 {
    int sub_00a72c00(int);
};

// @baa 0x00a72c00
int C_00a72c00::sub_00a72c00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct S_00a72c10 { int sub_00a63a70(int); };

// @baa 0x00a72c10
int sub_00a72c10(S_00a72c10 *s, int a) { return s->sub_00a63a70(a); }

// @baa 0x00a72c20
void sub_00a72c20(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00a72c40 {
    int sub_00a72c40(int);
};

// @baa 0x00a72c40
int C_00a72c40::sub_00a72c40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct S_00a72c50 { int sub_00a63ad0(int); };

// @baa 0x00a72c50
int sub_00a72c50(S_00a72c50 *s, int a) { return s->sub_00a63ad0(a); }

// @baa 0x00a72c60
void sub_00a72c60(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00a72c80 {
    int sub_00a72c80(int);
};

// @baa 0x00a72c80
int C_00a72c80::sub_00a72c80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a72c90 {
    int sub_00a72c90();
};

// @baa 0x00a72c90
int C_00a72c90::sub_00a72c90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72cb0 {
    int sub_00a72cb0();
};

// @baa 0x00a72cb0
int C_00a72cb0::sub_00a72cb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72cd0 {
    int sub_00a72cd0();
};

// @baa 0x00a72cd0
int C_00a72cd0::sub_00a72cd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72cf0 {
    int sub_00a72cf0();
};

// @baa 0x00a72cf0
int C_00a72cf0::sub_00a72cf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72d10 {
    int sub_00a72d10();
};

// @baa 0x00a72d10
int C_00a72d10::sub_00a72d10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72d30 {
    int sub_00a72d30();
};

// @baa 0x00a72d30
int C_00a72d30::sub_00a72d30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72d50 {
    int sub_00a72d50();
};

// @baa 0x00a72d50
int C_00a72d50::sub_00a72d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a72d60 {
    int sub_00a72d60();
};

// @baa 0x00a72d60
int C_00a72d60::sub_00a72d60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72d80 {
    int sub_00a72d80();
};

// @baa 0x00a72d80
int C_00a72d80::sub_00a72d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a72d90 {
    int sub_00a72d90();
};

// @baa 0x00a72d90
int C_00a72d90::sub_00a72d90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a72db0 {
    int sub_00a72db0();
};

// @baa 0x00a72db0
int C_00a72db0::sub_00a72db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a73c10{
void sub_00a73c10();
};

// @baa 0x00a73c10
void C_00a73c10::sub_00a73c10(void)
{
DWORD param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

// @baa 0x00a74aa0
void sub_00a74aa0(void) {  }

struct Base0 {
    virtual int f0();
};

struct B {
    virtual int g0();
    virtual int g1();
    virtual int g2();
    virtual int g3();
    virtual int g4();
    virtual void g5();
};

struct C_00a74ab0 : Base0, B {
    void sub_00a74ab0();
};

// @baa 0x00a74ab0
void C_00a74ab0::sub_00a74ab0() { return g5(); }

struct A_00a74ae0 { virtual void sub_00a74b10(); };

struct B_00a74ae0 { virtual void sub_00a74b10(); };

struct C_00a74ae0 : A_00a74ae0, B_00a74ae0 { virtual void sub_00a74b10(); C_00a74ae0(); };

C_00a74ae0::C_00a74ae0() {}

// @baa 0x00a74ae0
void C_00a74ae0::sub_00a74b10() {}

struct C_00a74e30 : Base0, B {
    void sub_00a74e30();
};

// @baa 0x00a74e30
void C_00a74e30::sub_00a74e30() { return g5(); }

struct A_00a74e60 { virtual void sub_00a74e90(); };

struct B_00a74e60 { virtual void sub_00a74e90(); };

struct C_00a74e60 : A_00a74e60, B_00a74e60 { virtual void sub_00a74e90(); C_00a74e60(); };

C_00a74e60::C_00a74e60() {}

// @baa 0x00a74e60
void C_00a74e60::sub_00a74e90() {}

struct C_00a75660 {
    void sub_00a75660(int);
};

// @baa 0x00a75660
void C_00a75660::sub_00a75660(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_00a69930();
// @baa 0x00a75920
void sub_00a75920(void) { sub_00a69930(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00a75930 { void* Data; int Num; int Max; void sub_00a75930(); };

// @baa 0x00a75930
void C_00a75930::sub_00a75930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a75990 {
    void sub_00a75990(int);
};

// @baa 0x00a75990
void C_00a75990::sub_00a75990(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00a75ac0(INT Index) const;
};

// @baa 0x00a75ac0
const DWORD* S::sub_00a75ac0(INT Index) const
{
    return &Items(Index);
}

struct C_00a75b10 { void* Data; int Num; int Max; void sub_00a75b10(); };

// @baa 0x00a75b10
void C_00a75b10::sub_00a75b10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00662920(...);
// @baa 0x00a77400
void sub_00a77400(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x00a77440
void sub_00a77440(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x00a77480
void sub_00a77480(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

struct C_00a778d0{
void sub_00a778d0();
};

// @baa 0x00a778d0
void C_00a778d0::sub_00a778d0(void)
{
DWORD param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00a779a0{
void sub_00a779a0();
};

// @baa 0x00a779a0
void C_00a779a0::sub_00a779a0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77a70{
void sub_00a77a70();
};

// @baa 0x00a77a70
void C_00a77a70::sub_00a77a70(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77b40{
void sub_00a77b40();
};

// @baa 0x00a77b40
void C_00a77b40::sub_00a77b40(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(int*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77c10{
void sub_00a77c10();
};

// @baa 0x00a77c10
void C_00a77c10::sub_00a77c10(void)
{
DWORD param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(uint*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77ce0{
void sub_00a77ce0();
};

// @baa 0x00a77ce0
void C_00a77ce0::sub_00a77ce0(void)
{
uint param_1=(int)this;

int iVar1;

iVar1=*(undefined4*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77db0{
void sub_00a77db0();
};

// @baa 0x00a77db0
void C_00a77db0::sub_00a77db0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a77e80{
void sub_00a77e80();
};

// @baa 0x00a77e80
void C_00a77e80::sub_00a77e80(void)
{
undefined4 param_1=(int)this;

int iVar1;

iVar1=*(undefined4*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((iVar1));
}
return;
}

struct C_00a77f50{
void sub_00a77f50();
};

// @baa 0x00a77f50
void C_00a77f50::sub_00a77f50(void)
{
int param_1=(undefined4)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00a78020{
void sub_00a78020();
};

// @baa 0x00a78020
void C_00a78020::sub_00a78020(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(iVar1));
}
return;
}

struct M_00a78040 { void sub_00a75930(); };

struct C_00a78040 { char pad[4]; M_00a78040 m; void sub_00a78040(); };

// @baa 0x00a78040
void C_00a78040::sub_00a78040() { m.sub_00a75930(); }

// @baa 0x00a78050
void __stdcall sub_00a78050(int a0, int a1) {  }

struct C_00a78060 {
    int sub_00a78060(int);
};

// @baa 0x00a78060
int C_00a78060::sub_00a78060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

// @baa 0x00a78080
void __stdcall sub_00a78080(int a0, int a1) {  }

struct C_00a78090 {
    int sub_00a78090(int);
};

// @baa 0x00a78090
int C_00a78090::sub_00a78090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

// @baa 0x00a780a0
void __stdcall sub_00a780a0(int a0, int a1) {  }

struct C_00a780b0 {
    int sub_00a780b0(int);
};

// @baa 0x00a780b0
int C_00a780b0::sub_00a780b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a780c0
void __stdcall sub_00a780c0(int a0, int a1) {  }

struct C_00a780d0 {
    int sub_00a780d0(int);
};

// @baa 0x00a780d0
int C_00a780d0::sub_00a780d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a780e0
void __stdcall sub_00a780e0(int a0, int a1) {  }

struct C_00a780f0 {
    int sub_00a780f0(int);
};

// @baa 0x00a780f0
int C_00a780f0::sub_00a780f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a78100
void __stdcall sub_00a78100(int a0, int a1) {  }

struct C_00a78110 {
    int sub_00a78110(int);
};

// @baa 0x00a78110
int C_00a78110::sub_00a78110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

// @baa 0x00a78120
void __stdcall sub_00a78120(int a0, int a1) {  }

struct C_00a78130 {
    int sub_00a78130(int);
};

// @baa 0x00a78130
int C_00a78130::sub_00a78130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a78140
void __stdcall sub_00a78140(int a0, int a1) {  }

struct C_00a78150 {
    int sub_00a78150(int);
};

// @baa 0x00a78150
int C_00a78150::sub_00a78150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a78160
void __stdcall sub_00a78160(int a0, int a1) {  }

struct C_00a78170 {
    int sub_00a78170(int);
};

// @baa 0x00a78170
int C_00a78170::sub_00a78170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00a78180
void __stdcall sub_00a78180(int a0, int a1) {  }

struct C_00a78190 {
    int sub_00a78190(int);
};

// @baa 0x00a78190
int C_00a78190::sub_00a78190(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a781a0 {
    undefined4 sub_00a781a0(byte);
};

int sub_00a6fea0(void);
// @baa 0x00a781a0
undefined4 C_00a781a0::sub_00a781a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a6fea0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a781c0 {
    undefined4 sub_00a781c0(byte);
};

int sub_00a6ff10(void);
// @baa 0x00a781c0
undefined4 C_00a781c0::sub_00a781c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a6ff10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a781e0 {
    undefined4 sub_00a781e0(byte);
};

int sub_00a6ff80(void);
// @baa 0x00a781e0
undefined4 C_00a781e0::sub_00a781e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a6ff80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78200 {
    undefined4 sub_00a78200(byte);
};

int sub_00a6fff0(void);
// @baa 0x00a78200
undefined4 C_00a78200::sub_00a78200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a6fff0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78220 {
    undefined4 sub_00a78220(byte);
};

int sub_00a70060(void);
// @baa 0x00a78220
undefined4 C_00a78220::sub_00a78220(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a70060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78240 {
    undefined4 sub_00a78240(byte);
};

int sub_00a700d0(void);
// @baa 0x00a78240
undefined4 C_00a78240::sub_00a78240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a700d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78260 {
    undefined4 sub_00a78260(byte);
};

int sub_00a70140(void);
// @baa 0x00a78260
undefined4 C_00a78260::sub_00a78260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a70140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78280 {
    undefined4 sub_00a78280(byte);
};

int sub_00a701b0(void);
// @baa 0x00a78280
undefined4 C_00a78280::sub_00a78280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a701b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a782a0 {
    undefined4 sub_00a782a0(byte);
};

int sub_00a70220(void);
// @baa 0x00a782a0
undefined4 C_00a782a0::sub_00a782a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a70220();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a782c0 {
    undefined4 sub_00a782c0(byte);
};

int sub_00a70290(void);
// @baa 0x00a782c0
undefined4 C_00a782c0::sub_00a782c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a70290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a78490 {
    int sub_00a78490(int);
};

// @baa 0x00a78490
int C_00a78490::sub_00a78490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00a785a0 {
    int sub_00a785a0(int);
};

// @baa 0x00a785a0
int C_00a785a0::sub_00a785a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00a786a0 {
    int sub_00a786a0(int);
};

// @baa 0x00a786a0
int C_00a786a0::sub_00a786a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a787a0 {
    int sub_00a787a0(int);
};

// @baa 0x00a787a0
int C_00a787a0::sub_00a787a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a788a0 {
    int sub_00a788a0(int);
};

// @baa 0x00a788a0
int C_00a788a0::sub_00a788a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a789a0 {
    int sub_00a789a0(int);
};

// @baa 0x00a789a0
int C_00a789a0::sub_00a789a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_00a78aa0 {
    int sub_00a78aa0(int);
};

// @baa 0x00a78aa0
int C_00a78aa0::sub_00a78aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a78ba0 {
    int sub_00a78ba0(int);
};

// @baa 0x00a78ba0
int C_00a78ba0::sub_00a78ba0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a78ca0 {
    int sub_00a78ca0(int);
};

// @baa 0x00a78ca0
int C_00a78ca0::sub_00a78ca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a78da0 {
    int sub_00a78da0(int);
};

// @baa 0x00a78da0
int C_00a78da0::sub_00a78da0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a79020 {
    int sub_00a79020(int);
};

// @baa 0x00a79020
int C_00a79020::sub_00a79020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a79030 {
    int sub_00a79030(int);
};

// @baa 0x00a79030
int C_00a79030::sub_00a79030(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a79040 {
    int sub_00a79040(int);
};

// @baa 0x00a79040
int C_00a79040::sub_00a79040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a79050 {
    int sub_00a79050(int);
};

// @baa 0x00a79050
int C_00a79050::sub_00a79050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_00a79060 {
    int sub_00a79060(int);
};

// @baa 0x00a79060
int C_00a79060::sub_00a79060(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a79070 {
    int sub_00a79070(int);
};

// @baa 0x00a79070
int C_00a79070::sub_00a79070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_00a79090 {
    int sub_00a79090(int);
};

// @baa 0x00a79090
int C_00a79090::sub_00a79090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00a790a0 {
    int sub_00a790a0();
};

// @baa 0x00a790a0
int C_00a790a0::sub_00a790a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_00a790c0 {
    int sub_00a790c0();
};

// @baa 0x00a790c0
int C_00a790c0::sub_00a790c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct C_00a790d0 {
    void sub_00a790d0(int);
};

// @baa 0x00a790d0
void C_00a790d0::sub_00a790d0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79110 {
    void sub_00a79110(int);
};

// @baa 0x00a79110
void C_00a79110::sub_00a79110(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79db0 {
    int sub_00a79db0();
};

// @baa 0x00a79db0
int C_00a79db0::sub_00a79db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a79dc0 {
    int sub_00a79dc0();
};

// @baa 0x00a79dc0
int C_00a79dc0::sub_00a79dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a79dd0 {
    int sub_00a79dd0();
};

// @baa 0x00a79dd0
int C_00a79dd0::sub_00a79dd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a79de0 {
    int sub_00a79de0();
};

// @baa 0x00a79de0
int C_00a79de0::sub_00a79de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_00a79df0 {
    int sub_00a79df0();
};

// @baa 0x00a79df0
int C_00a79df0::sub_00a79df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00a79e00 {
    void sub_00a79e00(int);
};

// @baa 0x00a79e00
void C_00a79e00::sub_00a79e00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79e40 {
    void sub_00a79e40(int);
};

// @baa 0x00a79e40
void C_00a79e40::sub_00a79e40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79e80 {
    void sub_00a79e80(int);
};

// @baa 0x00a79e80
void C_00a79e80::sub_00a79e80(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79ec0 {
    void sub_00a79ec0(int);
};

// @baa 0x00a79ec0
void C_00a79ec0::sub_00a79ec0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79f00 {
    void sub_00a79f00(int);
};

// @baa 0x00a79f00
void C_00a79f00::sub_00a79f00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79f40 {
    void sub_00a79f40(int);
};

// @baa 0x00a79f40
void C_00a79f40::sub_00a79f40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79f80 {
    void sub_00a79f80(int);
};

// @baa 0x00a79f80
void C_00a79f80::sub_00a79f80(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00a79fc0 {
    void sub_00a79fc0(int);
};

// @baa 0x00a79fc0
void C_00a79fc0::sub_00a79fc0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct M_00a7a380 { void sub_00a75b10(); };

struct C_00a7a380 { char pad[96]; M_00a7a380 m; void sub_00a7a380(); };

// @baa 0x00a7a380
void C_00a7a380::sub_00a7a380() { m.sub_00a75b10(); }

struct C_00a7e980 {
    undefined4 sub_00a7e980(byte);
    int sub_00a75930();
};

// @baa 0x00a7e980
undefined4 C_00a7e980::sub_00a7e980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00a7e980 *)(((char *)this + 4)))->sub_00a75930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a7e9b0 { void* Data; int Num; int Max; void sub_00a7e9b0(); };

// @baa 0x00a7e9b0
void C_00a7e9b0::sub_00a7e9b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ea10 { void* Data; int Num; int Max; void sub_00a7ea10(); };

// @baa 0x00a7ea10
void C_00a7ea10::sub_00a7ea10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ea70 { void* Data; int Num; int Max; void sub_00a7ea70(); };

// @baa 0x00a7ea70
void C_00a7ea70::sub_00a7ea70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ead0 { void* Data; int Num; int Max; void sub_00a7ead0(); };

// @baa 0x00a7ead0
void C_00a7ead0::sub_00a7ead0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7eb30 { void* Data; int Num; int Max; void sub_00a7eb30(); };

// @baa 0x00a7eb30
void C_00a7eb30::sub_00a7eb30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7eb90 { void* Data; int Num; int Max; void sub_00a7eb90(); };

// @baa 0x00a7eb90
void C_00a7eb90::sub_00a7eb90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ebf0 { void* Data; int Num; int Max; void sub_00a7ebf0(); };

// @baa 0x00a7ebf0
void C_00a7ebf0::sub_00a7ebf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ec50 { void* Data; int Num; int Max; void sub_00a7ec50(); };

// @baa 0x00a7ec50
void C_00a7ec50::sub_00a7ec50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ecb0 { void* Data; int Num; int Max; void sub_00a7ecb0(); };

// @baa 0x00a7ecb0
void C_00a7ecb0::sub_00a7ecb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7ed10 { void* Data; int Num; int Max; void sub_00a7ed10(); };

// @baa 0x00a7ed10
void C_00a7ed10::sub_00a7ed10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a7f460 {
    int sub_00a7f460(int);
};

// @baa 0x00a7f460
int C_00a7f460::sub_00a7f460(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a7f5b0 {
    int sub_00a7f5b0(int);
};

// @baa 0x00a7f5b0
int C_00a7f5b0::sub_00a7f5b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a7f700 {
    int sub_00a7f700(int);
};

// @baa 0x00a7f700
int C_00a7f700::sub_00a7f700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00a7f850 {
    int sub_00a7f850(int);
};

// @baa 0x00a7f850
int C_00a7f850::sub_00a7f850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_00a7f9a0 {
    int sub_00a7f9a0(int);
};

// @baa 0x00a7f9a0
int C_00a7f9a0::sub_00a7f9a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}
