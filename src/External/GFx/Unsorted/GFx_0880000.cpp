// GFx_0880000.cpp (part 1 of 2): 38 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008890c0
IMPLEMENT_CLASS_AT(UPlayerManagerInteraction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 98);

int sub_00de3fc0(void);
int sub_00dee670(...);
extern undefined4 g_026c5de8;
// @baa 0x008890e0
int sub_008890e0(void)
{
  if (g_026c5de8 == 0) {
    g_026c5de8 = sub_00dee670(L"Engine");
    sub_00de3fc0();
  }
  return g_026c5de8;
}

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x00889110
int sub_00889110(void)
{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = g_025d6818;
  iStack_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&iStack_4);
  sub_0062d5a0(uVar2);
  if (iStack_4 == 0) {
    iStack_4 = iVar1;
  }
  return iStack_4;
}

int sub_00e43ad0(void);
int sub_00e6ab50(...);
extern undefined4 g_026caeec;
// @baa 0x00889150
int sub_00889150(void)
{
  if (g_026caeec == 0) {
    g_026caeec = sub_00e6ab50(L"GFxUI");
    sub_00e43ad0();
  }
  return g_026caeec;
}

struct C { C* sub_00889180(void); };

// @baa 0x00889180
C* C::sub_00889180(void) { return this; }

extern char g_023f4bfc[];
struct C_008891a0 { void sub_008891a0(void); };

// @baa 0x008891a0
void C_008891a0::sub_008891a0(void) { *(int*)((char*)this + 0) = (int)g_023f4bfc; }

struct C_00889210 { void sub_00889210(void); };

// @baa 0x00889210
void C_00889210::sub_00889210(void) { *(int*)((char*)this + 0) = (int)g_023f4bfc; }

void __stdcall sub_018d5b80(int a, int b);
// @baa 0x00889220
void sub_00889220(void)
{
	sub_018d5b80(1, 0);
}

struct GEvent {
    GEvent * __thiscall sub_018d4fa0(bool a, bool b);
    GEvent * sub_00889230();
};

// @baa 0x00889230
GEvent * GEvent::sub_00889230()
{
    return sub_018d4fa0(false, false);
}

void __stdcall sub_018d5090(int a, int b);
// @baa 0x00889240
void sub_00889240(void)
{
	sub_018d5090(1, 0);
}

// @baa 0x00889260
IMPLEMENT_CLASS_AT(UPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPlayer.cpp", 39);

struct C_0088d9a0 { int sub_0088d9a0(void); };

// @baa 0x0088d9a0
int C_0088d9a0::sub_0088d9a0(void) { return *(int*)((char*)this + 4); }

struct C_0088d9b0 { int sub_0088d9b0(void); };

// @baa 0x0088d9b0
int C_0088d9b0::sub_0088d9b0(void) { return *(int*)((char*)this + 4); }

struct C_0088d9c0 { int sub_0088d9c0(void); };

// @baa 0x0088d9c0
int C_0088d9c0::sub_0088d9c0(void) { return *(int*)((char*)this + 4); }

struct C_0088d9d0 { int sub_0088d9d0(void); };

// @baa 0x0088d9d0
int C_0088d9d0::sub_0088d9d0(void) { return *(int*)((char*)this + 4); }

struct C_0088d9e0 {
    undefined4 * sub_0088d9e0();
};

int sub_018d3d50(void);
extern undefined * g_023f4da4;
// @baa 0x0088d9e0
undefined4 * C_0088d9e0::sub_0088d9e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4da4);
  return param_1;
}

int __stdcall sub_018d7170(int);
// @baa 0x0088da00
void sub_0088da00(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_0088da10 { int a, b, c; C_0088da10(); };

// @baa 0x0088da10
C_0088da10::C_0088da10() : a(0), b(0), c(0) {}

struct C_0088da20 { int sub_0088da20(void); };

// @baa 0x0088da20
int C_0088da20::sub_0088da20(void) { return *(int*)((char*)this + 4); }

struct C_0088da30 { int a, b, c; C_0088da30(); };

// @baa 0x0088da30
C_0088da30::C_0088da30() : a(0), b(0), c(0) {}

struct C_0088da40 { int sub_0088da40(void); };

// @baa 0x0088da40
int C_0088da40::sub_0088da40(void) { return *(int*)((char*)this + 4); }

struct C_0088da70 { C_0088da70* sub_0088da70(int a0); };

// @baa 0x0088da70
C_0088da70* C_0088da70::sub_0088da70(int a0) { return this; }

struct C_0088da80 { C_0088da80* sub_0088da80(int a0); };

// @baa 0x0088da80
C_0088da80* C_0088da80::sub_0088da80(int a0) { return this; }

struct C_0088da90 { C_0088da90* sub_0088da90(int a0); };

// @baa 0x0088da90
C_0088da90* C_0088da90::sub_0088da90(int a0) { return this; }

struct C_0088daa0 { int sub_0088daa0(void); };

// @baa 0x0088daa0
int C_0088daa0::sub_0088daa0(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_0088dab0{
void sub_0088dab0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0088dab0
void C_0088dab0::sub_0088dab0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_0088dbd0 { C_0088dbd0* sub_0088dbd0(int a0); };

// @baa 0x0088dbd0
C_0088dbd0* C_0088dbd0::sub_0088dbd0(int a0) { return this; }

struct C_0088dbe0 { int sub_0088dbe0(void); };

// @baa 0x0088dbe0
int C_0088dbe0::sub_0088dbe0(void) { return *(int*)((char*)this + 0); }

struct C_0088dcd0 { int sub_0088dcd0(void); };

// @baa 0x0088dcd0
int C_0088dcd0::sub_0088dcd0(void) { return *(int*)((char*)this + 0); }

struct C_0088dce0 { int sub_0088dce0(void); };

// @baa 0x0088dce0
int C_0088dce0::sub_0088dce0(void) { return *(int*)((char*)this + 0); }

struct C_0088dcf0 { int sub_0088dcf0(void); };

// @baa 0x0088dcf0
int C_0088dcf0::sub_0088dcf0(void) { return *(int*)((char*)this + 0); }

struct C_0088dd00 { int sub_0088dd00(void); };

// @baa 0x0088dd00
int C_0088dd00::sub_0088dd00(void) { return *(int*)((char*)this + 0); }

struct C_0088dd10 {
    int sub_0088dd10();
};

// @baa 0x0088dd10
int C_0088dd10::sub_0088dd10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0088dd20 { int a, b; C_0088dd20(int, int); };

// @baa 0x0088dd20
C_0088dd20::C_0088dd20(int x, int y) : a(x), b(y) {}

struct C_0088dd40 {
    int sub_0088dd40();
};

// @baa 0x0088dd40
int C_0088dd40::sub_0088dd40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0088dd50 { int a, b; C_0088dd50(int, int); };

// @baa 0x0088dd50
C_0088dd50::C_0088dd50(int x, int y) : a(x), b(y) {}

struct C_0088dd70 { int sub_0088dd70(void); };

// @baa 0x0088dd70
int C_0088dd70::sub_0088dd70(void) { return *(int*)((char*)this + 0); }

void __stdcall sub_018d6b40(INT A, INT B);
// @baa 0x00889250
void sub_00889250()
{
    sub_018d6b40(0x20000, -1);
}
