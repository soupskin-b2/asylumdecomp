// Viewports.cpp (part 1 of 3): 15 functions
// Placed here by: neighbours 13, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_0221c6c8[];
// @baa 0x0129d520
int sub_0129d520(void) { return (int)g_0221c6c8; }

extern char g_026d570c[];
// @baa 0x0129d530
int sub_0129d530(void) { return (int)g_026d570c; }

struct C { void sub_0129d560(int a0); };

// @baa 0x0129d560
void C::sub_0129d560(int a0) { *(int*)((char*)this + 416) = a0; }

extern char g_025e8d3c[];
// @baa 0x0129d650
int sub_0129d650(void) { return (int)g_025e8d3c; }

extern char g_026d5760[];
// @baa 0x0129d660
int sub_0129d660(void) { return (int)g_026d5760; }

// @baa 0x0129d670
void USoundNodeWave::sub_0129d670(int a0) { *(int*)((char*)this + 336) = a0; }

extern char g_025e8d44[];
// @baa 0x0129d830
int sub_0129d830(void) { return (int)g_025e8d44; }

extern char g_026d57a0[];
// @baa 0x0129d840
int sub_0129d840(void) { return (int)g_026d57a0; }

int sub_0053dfa0(...);
int sub_01284da0(void);
extern undefined4 g_02223630;
extern undefined * g_02223638;
// @baa 0x012a06a0
undefined4 * UUnrealEdEngine::sub_012a06a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02223638);
  param_1[0x67] = (undefined4)(&g_02223630);
  param_1[0x68] = 0;
  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxSplitterEvent;
class wxSplitterWindow;
class wxSplitterEvent {
    public:
    public: __declspec(dllimport) int GetSashPosition() const;
    friend struct C_012a08e0;
};

class wxSplitterWindow {
    public:
    public: __declspec(dllimport) void SetSashPosition(int,bool);
    friend struct C_012a08e0;
};

struct C_012a08e0 {
    void sub_012a08e0(wxSplitterEvent *);
};

extern undefined4 g_026d4e00;
// @baa 0x012a08e0
void C_012a08e0::sub_012a08e0(wxSplitterEvent * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(*(int *)(g_026d4e00 + 0x58) + 0x1e8) != 0) {
    iVar1 = ((wxSplitterEvent *)(param_2))->wxSplitterEvent::GetSashPosition();
    ((wxSplitterWindow *)(*(wxSplitterWindow **)(param_1 + 0x148)))->wxSplitterWindow::SetSashPosition(iVar1, true);
  }
  return;
}

struct C_012a11c0{
int sub_012a11c0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x012a11c0
int C_012a11c0::sub_012a11c0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

int sub_012a0830(void);
// @baa 0x012a23b0
undefined4 USoundNodeWave::sub_012a23b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012a0830();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_012a24d0 { virtual void sub_012b02d0(); char pad[332]; };

struct B_012a24d0 { virtual void sub_012b02d0(); };

struct C_012a24d0 : A_012a24d0, B_012a24d0 { virtual void sub_012b02d0(); C_012a24d0(); };

C_012a24d0::C_012a24d0() {}

// @baa 0x012a24d0
void C_012a24d0::sub_012b02d0() {}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_012a3100 { void* Data; int Num; int Max; void sub_012a3100(); };

// @baa 0x012a3100
void C_012a3100::sub_012a3100() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x012a3160
void __stdcall sub_012a3160(int a, int b)
{
}
