// UnrealEd_1190000.cpp (part 1 of 5): 70 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

extern char g_025e8690[];
// @baa 0x01190600
int sub_01190600(void) { return (int)g_025e8690; }

extern char g_026d194c[];
// @baa 0x01190610
int sub_01190610(void) { return (int)g_026d194c; }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01190620(wxCommandEvent *);
    int sub_00f78160(int, int);
};

// @baa 0x01190620
void C::sub_01190620(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x278) + 0x54) = (uint)bVar1;
  ((C *)((*(char **)((char *)this + 0x278))))->sub_00f78160(0, 1);
  return;
}

// @baa 0x01191980
int sub_01191980(void) { return 28; }

struct C_01191990 { int sub_01191990(void); };

// @baa 0x01191990
int C_01191990::sub_01191990(void) { return *(int*)((char*)this + 4); }

struct C_011919a0 { int sub_011919a0(void); };

// @baa 0x011919a0
int C_011919a0::sub_011919a0(void) { return *(int*)((char*)this + 4); }

struct C_011919b0 { int sub_011919b0(void); };

// @baa 0x011919b0
int C_011919b0::sub_011919b0(void) { return *(int*)((char*)this + 4); }

struct C_011919c0 { int sub_011919c0(void); };

// @baa 0x011919c0
int C_011919c0::sub_011919c0(void) { return *(int*)((char*)this + 4); }

struct C_011919d0 { int sub_011919d0(void); };

// @baa 0x011919d0
int C_011919d0::sub_011919d0(void) { return *(int*)((char*)this + 4); }

struct C_011919e0 { int sub_011919e0(void); };

// @baa 0x011919e0
int C_011919e0::sub_011919e0(void) { return *(int*)((char*)this + 4); }

struct C_011919f0 { int sub_011919f0(void); };

// @baa 0x011919f0
int C_011919f0::sub_011919f0(void) { return *(int*)((char*)this + 4); }

struct C_01191a90 { int a, b; C_01191a90(int, int); };

// @baa 0x01191a90
C_01191a90::C_01191a90(int x, int y) : a(x), b(y) {}

struct C_01191ab0 { int a, b; C_01191ab0(int, int); };

// @baa 0x01191ab0
C_01191ab0::C_01191ab0(int x, int y) : a(x), b(y) {}

struct C_01191ad0 { int a, b; C_01191ad0(int, int); };

// @baa 0x01191ad0
C_01191ad0::C_01191ad0(int x, int y) : a(x), b(y) {}

struct C_01191af0 { int a, b; C_01191af0(int, int); };

// @baa 0x01191af0
C_01191af0::C_01191af0(int x, int y) : a(x), b(y) {}

struct C_01191b10 { int a, b; C_01191b10(int, int); };

// @baa 0x01191b10
C_01191b10::C_01191b10(int x, int y) : a(x), b(y) {}

// @baa 0x01191b30
int sub_01191b30(int a0) { return *(int*)a0; }

// @baa 0x01191b40
bool sub_01191b40(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01191b70 {
    void sub_01191b70(undefined4 *);
};

// @baa 0x01191b70
void C_01191b70::sub_01191b70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01191b90
int sub_01191b90(int a0) { return *(int*)a0; }

// @baa 0x01191ba0
bool sub_01191ba0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01191be0 {
    void sub_01191be0(undefined4 *);
};

// @baa 0x01191be0
void C_01191be0::sub_01191be0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01191c00
int sub_01191c00(int a0) { return *(int*)a0; }

// @baa 0x01191c10
bool sub_01191c10(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01191c20 { int a, b; C_01191c20(const C_01191c20 &); };

// @baa 0x01191c20
C_01191c20::C_01191c20(const C_01191c20 &o) : a(o.a), b(o.b) {}

// @baa 0x01191c60
int sub_01191c60(int a0) { return *(int*)a0; }

struct C_01191c70 {
    void sub_01191c70(int *);
};

// @baa 0x01191c70
void C_01191c70::sub_01191c70(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x01191c80
int sub_01191c80(int a0) { return *(int*)a0; }

// @baa 0x01191c90
bool sub_01191c90(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01191ca0 { int a, b; C_01191ca0(const C_01191ca0 &); };

// @baa 0x01191ca0
C_01191ca0::C_01191ca0(const C_01191ca0 &o) : a(o.a), b(o.b) {}

class wxTreeItemId;
class wxTreeItemId {
    public:
    public: __declspec(dllimport) wxTreeItemId();
    friend struct C_01191ce0;
};

struct C_01191ce0 {
    int sub_01191ce0();
};

// @baa 0x01191ce0
int C_01191ce0::sub_01191ce0(void)
{
    int param_1 = (int)this;
  ((wxTreeItemId *)((wxTreeItemId *)(param_1 + 4)))->wxTreeItemId::wxTreeItemId();
  return param_1;
}

struct C_01191d80 { int a, b; C_01191d80(const C_01191d80 &); };

// @baa 0x01191d80
C_01191d80::C_01191d80(const C_01191d80 &o) : a(o.a), b(o.b) {}

struct C_01191dd0 { int a, b; C_01191dd0(const C_01191dd0 &); };

// @baa 0x01191dd0
C_01191dd0::C_01191dd0(const C_01191dd0 &o) : a(o.a), b(o.b) {}

struct C_01191df0 { int a, b; C_01191df0(const C_01191df0 &); };

// @baa 0x01191df0
C_01191df0::C_01191df0(const C_01191df0 &o) : a(o.a), b(o.b) {}

struct C_01192ae0 {
    undefined4 sub_01192ae0(byte);
};

int sub_0053dfa0(...);
int sub_011901c0(void);
// @baa 0x01192ae0
undefined4 C_01192ae0::sub_01192ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011901c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01193690 { int a, b, c; C_01193690(); };

// @baa 0x01193690
C_01193690::C_01193690() : a(0), b(0), c(0) {}

struct C_01193710 { int a, b, c; C_01193710(); };

// @baa 0x01193710
C_01193710::C_01193710() : a(0), b(0), c(0) {}

struct C_01193720 { int a, b, c; C_01193720(); };

// @baa 0x01193720
C_01193720::C_01193720() : a(0), b(0), c(0) {}

struct C_01193730 { int a, b, c; C_01193730(); };

// @baa 0x01193730
C_01193730::C_01193730() : a(0), b(0), c(0) {}

struct C_01193740 { int a, b, c; C_01193740(); };

// @baa 0x01193740
C_01193740::C_01193740() : a(0), b(0), c(0) {}

struct C_011937c0 { int a, b, c; C_011937c0(); };

// @baa 0x011937c0
C_011937c0::C_011937c0() : a(0), b(0), c(0) {}

struct C_011937d0 { int sub_011937d0(void); };

// @baa 0x011937d0
int C_011937d0::sub_011937d0(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_011937e0(INT Index);
};

// @baa 0x011937e0
E* S::sub_011937e0(INT Index)
{
    return &Items(Index);
}

struct C_01193830 { int sub_01193830(void); };

// @baa 0x01193830
int C_01193830::sub_01193830(void) { return *(int*)((char*)this + 0); }

struct C_01193840 { int sub_01193840(void); };

// @baa 0x01193840
int C_01193840::sub_01193840(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_01193850{
void sub_01193850(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01193850
void C_01193850::sub_01193850(int param_2,int param_3)
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

struct C_01193970 {
    void sub_01193970(int, int);
};

int sub_00627f00(...);
// @baa 0x01193970
void C_01193970::sub_01193970(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_01193990 { int sub_01193990(void); };

// @baa 0x01193990
int C_01193990::sub_01193990(void) { return *(int*)((char*)this + 0); }

struct C_011939a0 { int sub_011939a0(void); };

// @baa 0x011939a0
int C_011939a0::sub_011939a0(void) { return *(int*)((char*)this + 0); }

struct C_01193a20 { int sub_01193a20(void); };

// @baa 0x01193a20
int C_01193a20::sub_01193a20(void) { return *(int*)((char*)this + 0); }

struct C_01193ab0 { int sub_01193ab0(void); };

// @baa 0x01193ab0
int C_01193ab0::sub_01193ab0(void) { return *(int*)((char*)this + 0); }

struct C_01193b40 { int sub_01193b40(void); };

// @baa 0x01193b40
int C_01193b40::sub_01193b40(void) { return *(int*)((char*)this + 0); }

struct C_01193bd0 {
    int sub_01193bd0();
};

// @baa 0x01193bd0
int C_01193bd0::sub_01193bd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01193be0 {
    int sub_01193be0();
};

// @baa 0x01193be0
int C_01193be0::sub_01193be0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01193bf0 {
    int sub_01193bf0();
};

// @baa 0x01193bf0
int C_01193bf0::sub_01193bf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01193c00 {
    int sub_01193c00();
};

// @baa 0x01193c00
int C_01193c00::sub_01193c00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01193c10 {
    int sub_01193c10();
};

// @baa 0x01193c10
int C_01193c10::sub_01193c10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01193c20 { int sub_01193c20(void); };

// @baa 0x01193c20
int C_01193c20::sub_01193c20(void) { return *(int*)((char*)this + 0); }

struct C_01193c30 { int sub_01193c30(void); };

// @baa 0x01193c30
int C_01193c30::sub_01193c30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01193c60 { int sub_01193c60(void); };

// @baa 0x01193c60
int C_01193c60::sub_01193c60(void) { return *(int*)((char*)this + 0); }

struct C_01193c70 { int sub_01193c70(void); };

// @baa 0x01193c70
int C_01193c70::sub_01193c70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01193cb0 { int sub_01193cb0(void); };

// @baa 0x01193cb0
int C_01193cb0::sub_01193cb0(void) { return *(int*)((char*)this + 0); }

struct C_01193cc0 { int sub_01193cc0(void); };

// @baa 0x01193cc0
int C_01193cc0::sub_01193cc0(void) { return *(int*)((char*)this + 0); }

struct C_01193cd0 { int sub_01193cd0(void); };

// @baa 0x01193cd0
int C_01193cd0::sub_01193cd0(void) { return *(int*)((char*)this + 0); }

struct C_01193ce0 { int sub_01193ce0(void); };

// @baa 0x01193ce0
int C_01193ce0::sub_01193ce0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01193d10 { int sub_01193d10(void); };

// @baa 0x01193d10
int C_01193d10::sub_01193d10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01193d20 { int sub_01193d20(void); };

// @baa 0x01193d20
int C_01193d20::sub_01193d20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01193d50 { int sub_01193d50(void); };

// @baa 0x01193d50
int C_01193d50::sub_01193d50(void) { return *(int*)((char*)this + 0); }

struct C_01193dc0 {
    int sub_01193dc0(int);
};

// @baa 0x01193dc0
int C_01193dc0::sub_01193dc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01193df0
int sub_01193df0(int a0) { return a0; }
