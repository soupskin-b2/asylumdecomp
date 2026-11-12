// GenericBrowser.cpp (part 1 of 3): 117 functions
// Placed here by: neighbours 112, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_0225b244[];
// @baa 0x01367dd0
int sub_01367dd0(void) { return (int)g_0225b244; }

extern char g_026d8480[];
// @baa 0x01367de0
int sub_01367de0(void) { return (int)g_026d8480; }

// @baa 0x01367ff0
void __stdcall sub_01367ff0(int a0) {  }

// @baa 0x01368000
void __stdcall sub_01368000(int a0) {  }

// @baa 0x01368010
void __stdcall sub_01368010(int a0) {  }

// @baa 0x01368020
void __stdcall sub_01368020(int a0, int a1) {  }

// @baa 0x01368030
void __stdcall sub_01368030(int a0) {  }

extern undefined4 g_026d8d94;
// @baa 0x01368040
undefined4 sub_01368040(void)
{
  return g_026d8d94;
}

// @baa 0x01368090
void sub_01368090(void)
{
  g_026d8d94 = 0;
  return;
}

extern char g_025e8f24[];
// @baa 0x013680a0
int sub_013680a0(void) { return (int)g_025e8f24; }

extern char g_026d8974[];
// @baa 0x013680b0
int sub_013680b0(void) { return (int)g_026d8974; }

struct C { void sub_013680c0(void); };

// @baa 0x013680c0
void C::sub_013680c0(void) { *(int*)((char*)this + 520) = 1; }

struct C_01368170 { void sub_01368170(int a0); };

// @baa 0x01368170
void C_01368170::sub_01368170(int a0) { *(int*)((char*)this + 516) = 1; }

extern char g_025e8f2c[];
// @baa 0x01368320
int sub_01368320(void) { return (int)g_025e8f2c; }

extern char g_026d8ae4[];
// @baa 0x01368330
int sub_01368330(void) { return (int)g_026d8ae4; }

class wxListCtrl;
class wxListCtrl {
    public:
    public: __declspec(dllimport) bool DeleteAllItems();
    friend struct C_01368340;
};

struct C_01368340 {
    void sub_01368340();
};

// @baa 0x01368340
void C_01368340::sub_01368340(void)
{
    int param_1 = (int)this;

  if (*(wxListCtrl **)(param_1 + 0x178) != (wxListCtrl *)0x0) {
                    
                    
    ((wxListCtrl *)(*(wxListCtrl **)(param_1 + 0x178)))->wxListCtrl::DeleteAllItems();
    return;
  }
  return;
}

class wxCommandEvent;
class wxEvent;
class wxSplitterWindow;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_01368460;
};

class wxEvent {
    public:
    public: __declspec(dllimport) void Skip(bool);
    friend struct C_01368460;
};

class wxSplitterWindow {
    public:
    public: __declspec(dllimport) int GetSashPosition() const;
    friend struct C_01368460;
};

struct C_01368460 {
    void sub_01368460(wxCommandEvent *);
};

// @baa 0x01368460
void C_01368460::sub_01368460(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  int iVar2;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  if (!bVar1) {
    iVar2 = ((wxSplitterWindow *)(*(wxSplitterWindow **)(param_1 + 0x16c)))->wxSplitterWindow::GetSashPosition();
    *(int *)(param_1 + 0x194) = iVar2;
  }
  ((wxEvent *)((wxEvent *)param_2))->wxEvent::Skip(true);
  return;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_013686f0;
};

struct C_013686f0 {
    void sub_013686f0(wxUpdateUIEvent *);
};

// @baa 0x013686f0
void C_013686f0::sub_013686f0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x154) + 0x218) == 1);
  return;
}

extern char g_01e72a60[];
struct C_01369950 { void sub_01369950(void); };

// @baa 0x01369950
void C_01369950::sub_01369950(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_01369960 {
    void sub_01369960();
};

// @baa 0x01369960
void C_01369960::sub_01369960(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x208) = 1;
  return;
}

struct C_01369980 { void sub_01369980(void); };

// @baa 0x01369980
void C_01369980::sub_01369980(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

class wxNotifyEvent;
class wxNotifyEvent {
    public:
    public: __declspec(dllimport) void Veto();
    friend struct C_01369990;
};

struct C_01369990 {
    void sub_01369990(wxNotifyEvent *);
};

// @baa 0x01369990
void C_01369990::sub_01369990(wxNotifyEvent * param_2)
{
    int param_1 = (int)this;

  if (*(int *)(*(int *)(param_1 + 0x1e0) + 0x198) == 1) {
    ((wxNotifyEvent *)(param_2))->wxNotifyEvent::Veto();
  }
  return;
}

struct C_01369d60 { int a, b, c; C_01369d60(); };

// @baa 0x01369d60
C_01369d60::C_01369d60() : a(0), b(0), c(0) {}

struct C_01369d70 { int a, b, c; C_01369d70(); };

// @baa 0x01369d70
C_01369d70::C_01369d70() : a(0), b(0), c(0) {}

struct C_01369d80 { int a, b, c; C_01369d80(); };

// @baa 0x01369d80
C_01369d80::C_01369d80() : a(0), b(0), c(0) {}

struct C_01369d90 { int a, b, c; C_01369d90(); };

// @baa 0x01369d90
C_01369d90::C_01369d90() : a(0), b(0), c(0) {}

struct C_01369da0 { int a, b, c; C_01369da0(); };

// @baa 0x01369da0
C_01369da0::C_01369da0() : a(0), b(0), c(0) {}

struct C_01369db0 { int a, b, c; C_01369db0(); };

// @baa 0x01369db0
C_01369db0::C_01369db0() : a(0), b(0), c(0) {}

struct C_01369e40 { int sub_01369e40(void); };

// @baa 0x01369e40
int C_01369e40::sub_01369e40(void) { return *(int*)((char*)this + 0); }

struct C_01369ec0 { int sub_01369ec0(void); };

// @baa 0x01369ec0
int C_01369ec0::sub_01369ec0(void) { return *(int*)((char*)this + 0); }

struct C_01369ed0 { int sub_01369ed0(void); };

// @baa 0x01369ed0
int C_01369ed0::sub_01369ed0(void) { return *(int*)((char*)this + 0); }

struct C_01369f50 { int sub_01369f50(void); };

// @baa 0x01369f50
int C_01369f50::sub_01369f50(void) { return *(int*)((char*)this + 0); }

struct C_01369fd0 { int sub_01369fd0(void); };

// @baa 0x01369fd0
int C_01369fd0::sub_01369fd0(void) { return *(int*)((char*)this + 0); }

struct C_01369fe0 { int sub_01369fe0(void); };

// @baa 0x01369fe0
int C_01369fe0::sub_01369fe0(void) { return *(int*)((char*)this + 0); }

struct C_0136a060 { int sub_0136a060(void); };

// @baa 0x0136a060
int C_0136a060::sub_0136a060(void) { return *(int*)((char*)this + 0); }

struct C_0136a0e0 {
    int sub_0136a0e0();
};

// @baa 0x0136a0e0
int C_0136a0e0::sub_0136a0e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a0f0 {
    int sub_0136a0f0();
};

// @baa 0x0136a0f0
int C_0136a0f0::sub_0136a0f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a100 {
    int sub_0136a100();
};

// @baa 0x0136a100
int C_0136a100::sub_0136a100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a110 {
    int sub_0136a110();
};

// @baa 0x0136a110
int C_0136a110::sub_0136a110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a120 {
    int sub_0136a120();
};

// @baa 0x0136a120
int C_0136a120::sub_0136a120(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0136a130 { int sub_0136a130(void); };

// @baa 0x0136a130
int C_0136a130::sub_0136a130(void) { return *(int*)((char*)this + 0); }

struct C_0136a140 { int sub_0136a140(void); };

// @baa 0x0136a140
int C_0136a140::sub_0136a140(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a170 { int sub_0136a170(void); };

// @baa 0x0136a170
int C_0136a170::sub_0136a170(void) { return *(int*)((char*)this + 0); }

struct C_0136a180 { int sub_0136a180(void); };

// @baa 0x0136a180
int C_0136a180::sub_0136a180(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a1b0 { int sub_0136a1b0(void); };

// @baa 0x0136a1b0
int C_0136a1b0::sub_0136a1b0(void) { return *(int*)((char*)this + 0); }

struct C_0136a1c0 { int sub_0136a1c0(void); };

// @baa 0x0136a1c0
int C_0136a1c0::sub_0136a1c0(void) { return *(int*)((char*)this + 0); }

struct C_0136a1d0 { int sub_0136a1d0(void); };

// @baa 0x0136a1d0
int C_0136a1d0::sub_0136a1d0(void) { return *(int*)((char*)this + 0); }

struct C_0136a1e0 { int sub_0136a1e0(void); };

// @baa 0x0136a1e0
int C_0136a1e0::sub_0136a1e0(void) { return *(int*)((char*)this + 0); }

struct C_0136a1f0 { int sub_0136a1f0(void); };

// @baa 0x0136a1f0
int C_0136a1f0::sub_0136a1f0(void) { return *(int*)((char*)this + 0); }

struct C_0136a270 { int sub_0136a270(void); };

// @baa 0x0136a270
int C_0136a270::sub_0136a270(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a2a0 { int sub_0136a2a0(void); };

// @baa 0x0136a2a0
int C_0136a2a0::sub_0136a2a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a2d0 { int sub_0136a2d0(void); };

// @baa 0x0136a2d0
int C_0136a2d0::sub_0136a2d0(void) { return *(int*)((char*)this + 0); }

struct C_0136a2e0 { int sub_0136a2e0(void); };

// @baa 0x0136a2e0
int C_0136a2e0::sub_0136a2e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a2f0 {
    int sub_0136a2f0(int);
};

// @baa 0x0136a2f0
int C_0136a2f0::sub_0136a2f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a300 {
    int sub_0136a300(int);
};

// @baa 0x0136a300
int C_0136a300::sub_0136a300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a310 { int sub_0136a310(void); };

// @baa 0x0136a310
int C_0136a310::sub_0136a310(void) { return *(int*)((char*)this + 20); }

struct C_0136a320 {
    int sub_0136a320(int);
};

// @baa 0x0136a320
int C_0136a320::sub_0136a320(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a330 {
    int sub_0136a330(int);
};

// @baa 0x0136a330
int C_0136a330::sub_0136a330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a340 { int sub_0136a340(void); };

// @baa 0x0136a340
int C_0136a340::sub_0136a340(void) { return *(int*)((char*)this + 20); }

struct C_0136a350 {
    int sub_0136a350(int);
};

// @baa 0x0136a350
int C_0136a350::sub_0136a350(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a360 {
    int sub_0136a360(int);
};

// @baa 0x0136a360
int C_0136a360::sub_0136a360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a370 { int sub_0136a370(void); };

// @baa 0x0136a370
int C_0136a370::sub_0136a370(void) { return *(int*)((char*)this + 20); }

struct C_0136a380 { int sub_0136a380(void); };

// @baa 0x0136a380
int C_0136a380::sub_0136a380(void) { return *(int*)((char*)this + 20); }

struct C_0136a390 {
    int sub_0136a390(int);
};

// @baa 0x0136a390
int C_0136a390::sub_0136a390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136a3a0 { int sub_0136a3a0(void); };

// @baa 0x0136a3a0
int C_0136a3a0::sub_0136a3a0(void) { return *(int*)((char*)this + 20); }

struct C_0136a3b0 { int sub_0136a3b0(void); };

// @baa 0x0136a3b0
int C_0136a3b0::sub_0136a3b0(void) { return *(int*)((char*)this + 20); }

struct C_0136a3c0 {
    int sub_0136a3c0(int);
};

// @baa 0x0136a3c0
int C_0136a3c0::sub_0136a3c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a3d0 {
    int sub_0136a3d0(int);
};

// @baa 0x0136a3d0
int C_0136a3d0::sub_0136a3d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136a3e0 {
    int sub_0136a3e0(int);
};

// @baa 0x0136a3e0
int C_0136a3e0::sub_0136a3e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136a3f0 {
    int sub_0136a3f0(int);
};

// @baa 0x0136a3f0
int C_0136a3f0::sub_0136a3f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136a400 { int sub_0136a400(void); };

// @baa 0x0136a400
int C_0136a400::sub_0136a400(void) { return *(int*)((char*)this + 20); }

struct C_0136a410 { int sub_0136a410(void); };

// @baa 0x0136a410
int C_0136a410::sub_0136a410(void) { return *(int*)((char*)this + 20); }

struct C_0136a420 { int sub_0136a420(void); };

// @baa 0x0136a420
int C_0136a420::sub_0136a420(void) { return *(int*)((char*)this + 20); }

struct C_0136a430 { int sub_0136a430(void); };

// @baa 0x0136a430
int C_0136a430::sub_0136a430(void) { return *(int*)((char*)this + 20); }

struct C_0136a440 { int sub_0136a440(void); };

// @baa 0x0136a440
int C_0136a440::sub_0136a440(void) { return *(int*)((char*)this + 20); }

struct C_0136a450 { int sub_0136a450(void); };

// @baa 0x0136a450
int C_0136a450::sub_0136a450(void) { return *(int*)((char*)this + 20); }

struct C_0136a460 { int sub_0136a460(void); };

// @baa 0x0136a460
int C_0136a460::sub_0136a460(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0136a470 {
    int sub_0136a470(int);
};

// @baa 0x0136a470
int C_0136a470::sub_0136a470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136a480 {
    int sub_0136a480();
};

// @baa 0x0136a480
int C_0136a480::sub_0136a480(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 == 0) || ((*(byte *)(*(int *)(iVar1 + 0x28) + 0xdc) & 0x20) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

struct C_0136b580{
int sub_0136b580(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0136b580
int C_0136b580::sub_0136b580(undefined4*param_2)
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

struct C_0136b830{
int sub_0136b830(undefined4*);
};

// @baa 0x0136b830
int C_0136b830::sub_0136b830(undefined4*param_2)
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

struct C_0136e650 {
    undefined4 sub_0136e650(byte);
};

int sub_0053dfa0(...);
int sub_0136e550(void);
// @baa 0x0136e650
undefined4 C_0136e650::sub_0136e650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0136e550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0136fd70 { void sub_0136fbe0(); void sub_0136fd70(int); };

// @baa 0x0136fd70
void C_0136fd70::sub_0136fd70(int) { sub_0136fbe0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01373f40 { void* Data; int Num; int Max; void sub_01373f40(); };

// @baa 0x01373f40
void C_01373f40::sub_01373f40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_011365d0(void);
int sub_01379210(void);
// @baa 0x01379810
void sub_01379810(void)
{
  sub_011365d0();
  sub_01379210();
  return;
}

struct C_0137f680 {
    undefined4 sub_0137f680(byte);
};

int sub_0137f620(void);
// @baa 0x0137f680
undefined4 C_0137f680::sub_0137f680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0137f620();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01380c60 { void sub_0137f6a0(); void sub_01380c60(int); };

// @baa 0x01380c60
void C_01380c60::sub_01380c60(int) { sub_0137f6a0(); }

struct C_01381e10 {
    undefined4 sub_01381e10(byte);
};

int sub_01379fc0(void);
// @baa 0x01381e10
undefined4 C_01381e10::sub_01381e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01379fc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_01389150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01389150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01389150& operator++();
};

TConstSetBitIterator_01389150::TConstSetBitIterator_01389150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01389150
TConstSetBitIterator_01389150& TConstSetBitIterator_01389150::operator++()
{
    It.Advance();
    return *this;
}

void sub_0138c910();
// @baa 0x0138eb10
void sub_0138eb10(void) { sub_0138c910(); }

void sub_0138c9f0();
// @baa 0x0138eb20
void sub_0138eb20(void) { sub_0138c9f0(); }

struct Target {
    void sub_0138ca60();
};

struct Thunk {
    void sub_0138ed30();
};

// @baa 0x0138ed30
void Thunk::sub_0138ed30()
{
    ((Target *)this)->sub_0138ca60();
}

void sub_0138cad0();
// @baa 0x0138f1b0
void sub_0138f1b0(void) { sub_0138cad0(); }

void sub_0138cb40();
// @baa 0x0138f1c0
void sub_0138f1c0(void) { sub_0138cb40(); }

struct C_0138fc50 {
    int sub_0138fc50();
};

int sub_01385c80(void);
// @baa 0x0138fc50
int C_0138fc50::sub_0138fc50(void)
{
    int param_1 = (int)this;

  sub_01385c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fc70 {
    int sub_0138fc70();
};

int sub_01385ce0(void);
// @baa 0x0138fc70
int C_0138fc70::sub_0138fc70(void)
{
    int param_1 = (int)this;

  sub_01385ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fc90 {
    int sub_0138fc90();
};

int sub_01385d90(void);
// @baa 0x0138fc90
int C_0138fc90::sub_0138fc90(void)
{
    int param_1 = (int)this;

  sub_01385d90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fcb0 {
    int sub_0138fcb0();
};

int sub_01385e40(void);
// @baa 0x0138fcb0
int C_0138fcb0::sub_0138fcb0(void)
{
    int param_1 = (int)this;

  sub_01385e40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fcd0 {
    int sub_0138fcd0();
};

int sub_01385ef0(void);
// @baa 0x0138fcd0
int C_0138fcd0::sub_0138fcd0(void)
{
    int param_1 = (int)this;

  sub_01385ef0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fcf0 {
    int sub_0138fcf0();
};

int sub_01385fa0(void);
// @baa 0x0138fcf0
int C_0138fcf0::sub_0138fcf0(void)
{
    int param_1 = (int)this;

  sub_01385fa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0138fd10 { void sub_0138d9d0(int); C_0138fd10 *sub_0138fd10(int); };

// @baa 0x0138fd10
C_0138fd10 *C_0138fd10::sub_0138fd10(int a) { sub_0138d9d0(a); return this; }

void sub_0138c980();
// @baa 0x0138fd30
void sub_0138fd30(void) { sub_0138c980(); }

extern char g_022635ac[];
// @baa 0x0138ff90
int sub_0138ff90(void) { return (int)g_022635ac; }

struct A_0138ffa0 { virtual void sub_01396610(); char pad[320]; };

struct B_0138ffa0 { virtual void sub_01396610(); };

struct C_0138ffa0 : A_0138ffa0, B_0138ffa0 { virtual void sub_01396610(); C_0138ffa0(); };

C_0138ffa0::C_0138ffa0() {}

// @baa 0x0138ffa0
void C_0138ffa0::sub_01396610() {}

struct A_0138ffb0 { virtual void sub_01396610(); char pad[384]; };

struct B_0138ffb0 { virtual void sub_01396610(); };

struct C_0138ffb0 : A_0138ffb0, B_0138ffb0 { virtual void sub_01396610(); C_0138ffb0(); };

C_0138ffb0::C_0138ffb0() {}

// @baa 0x0138ffb0
void C_0138ffb0::sub_01396610() {}

struct A_0138ffc0 { virtual void sub_01396610(); char pad[324]; };

struct B_0138ffc0 { virtual void sub_01396610(); };

struct C_0138ffc0 : A_0138ffc0, B_0138ffc0 { virtual void sub_01396610(); C_0138ffc0(); };

C_0138ffc0::C_0138ffc0() {}

// @baa 0x0138ffc0
void C_0138ffc0::sub_01396610() {}

// @baa 0x01395280
void sub_01395280(void) { sub_0138c910(); }

struct A_01395350 { virtual void sub_0139af70(); char pad[332]; };

struct B_01395350 { virtual void sub_0139af70(); };

struct C_01395350 : A_01395350, B_01395350 { virtual void sub_0139af70(); C_01395350(); };

C_01395350::C_01395350() {}

// @baa 0x01395350
void C_01395350::sub_0139af70() {}

// @baa 0x01395360
void sub_01395360(void) { sub_0138c9f0(); }

void sub_0138ca60();
// @baa 0x01395370
void sub_01395370(void) { sub_0138ca60(); }

// @baa 0x01395380
void sub_01395380(void) { sub_0138cad0(); }

// @baa 0x01395390
void sub_01395390(void) { sub_0138cb40(); }

struct C_01396220 { void sub_0138d9d0(int); C_01396220 *sub_01396220(int); };

// @baa 0x01396220
C_01396220 *C_01396220::sub_01396220(int a) { sub_0138d9d0(a); return this; }

int sub_0138fd40(void);
// @baa 0x01396610
undefined4 UUnrealEdEngine::sub_01396610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0138fd40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013979b0 { void sub_013978f0(); void sub_013979b0(int); };

// @baa 0x013979b0
void C_013979b0::sub_013979b0(int) { sub_013978f0(); }

// The original takes one argument and discards it, forwarding a fixed value.
INT sub_0139b470(INT bShow);
// @baa 0x013a1e60
INT sub_013a1e60(INT bShow)
{
    return sub_0139b470(FALSE);
}

// @baa 0x013a1e70
INT sub_013a1e70(INT bShow)
{
    return sub_0139b470(TRUE);
}
