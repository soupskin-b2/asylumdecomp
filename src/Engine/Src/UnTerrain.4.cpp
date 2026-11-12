// UnTerrain.cpp (part 4 of 4): 7 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00549310(void);
// @baa 0x009927e0
undefined4 UObject::sub_009927e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct ATerrain_ : public ATerrain
{
    UINT sub_00982810(UINT A, UINT B, UINT Flags);
};

// @baa 0x00982810
UINT ATerrain_::sub_00982810(UINT, UINT, UINT Flags)
{
    return Flags & 0x2000;
}

// Engine_0980000.cpp (part 6 of 6): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct C {
    void sub_00989bc0(int);
};

int sub_0053df70(...);
// @baa 0x00989bc0
void C::sub_00989bc0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x54,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00989c00 {
    void sub_00989c00(int);
};

// @baa 0x00989c00
void C_00989c00::sub_00989c00(int param_2)
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

struct C_00989c40 {
    void sub_00989c40(int);
};

// @baa 0x00989c40
void C_00989c40::sub_00989c40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00989b00
void sub_00989b00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
struct Item { char pad[24]; unsigned value, count, start; char pad2[24]; };

struct Arr { Item* data; int num; };

struct Obj { char pad[0xe0]; Arr a; };

struct List { Obj** data; int num; };

struct Holder { char pad[0x30]; List list; };

struct C_00989d80 { char pad[0x48]; int index; Holder* holder; int sub_00989d80(unsigned); };

// @baa 0x00989d80
int C_00989d80::sub_00989d80(unsigned x) {
 List* list=&holder->list; int idx=index;
 if (idx<0 || idx>=list->num) sub_006311e0("i>=0 && i<this->ArrayNum", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h",0x6af,&g_01e3f3dc);
 Obj* obj=list->data[idx]; int i=0;
 if (i<obj->a.num) do {
 int nitems;
 if(i<0 || (i>=(nitems=*(volatile int*)&obj->a.num) && (i!=0 || nitems!=0))) sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h",0x236,&g_01e3f3dc);
 Item* p=&obj->a.data[i]; unsigned n=p->count/3;
 if(x>=n && x<n+p->start) return p->value;
 ++i;
 } while (i<obj->a.num);
 return 1;
}
