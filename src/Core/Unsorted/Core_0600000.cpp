// Core_0600000.cpp (part 1 of 6): 289 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00600200
void sub_00600200(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00600220
void sub_00600220(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00600240
void sub_00600240(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C {
    int sub_00600260(byte);
};

int sub_0053dfa0(...);
// @baa 0x00600260
int C::sub_00600260(byte param_2)
{
    int param_1 = (int)this;

  sub_0053dfa0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00600330 { int sub_00600330(void); };

// @baa 0x00600330
int C_00600330::sub_00600330(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00600370 { int sub_00544d40(int); };

// @baa 0x00600370
int sub_00600370(S_00600370 *s, int a) { return s->sub_00544d40(a); }

struct C_006003d0 {
    int sub_006003d0();
};

// @baa 0x006003d0
int C_006003d0::sub_006003d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x006003e0
void sub_006003e0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00600440
void sub_00600440(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00600460 { int a, b, c; C_00600460(); };

// @baa 0x00600460
C_00600460::C_00600460() : a(0), b(0), c(0) {}

struct M_00600650 { void sub_0040fcc0(); };

struct C_00600650 { char pad[44]; M_00600650 m; void sub_00600650(); };

// @baa 0x00600650
void C_00600650::sub_00600650() { m.sub_0040fcc0(); }

struct C_00600660 {
    int sub_00600660();
};

// @baa 0x00600660
int C_00600660::sub_00600660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00602140 { void* Data; int Num; int Max; void sub_00602140(); };

// @baa 0x00602140
void C_00602140::sub_00602140() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053df70(...);
// @baa 0x006021a0
void UPackageMap::sub_006021a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x006021e0
int UPackageMap::sub_006021e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x006021f0
int UPackageMap::sub_006021f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00602200
int UPackageMap::sub_00602200(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00602210 { void* Data; int Num; int Max; void sub_00602210(); };

// @baa 0x00602210
void C_00602210::sub_00602210() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00602540
void __stdcall sub_00602540(int a0, int a1) {  }

struct C_view {
    int sub_00602550(int, int);
};

// @baa 0x006025d0
int UPackageMap::sub_006025d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00602550((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00602600
int UPackageMap::sub_00602600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00602640
int UPackageMap::sub_00602640(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00602650
void __stdcall sub_00602650(int a0, int a1) {  }

// @baa 0x00602660
void UPackageMap::sub_00602660(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x006026a0
int UPackageMap::sub_006026a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006026c0
int UPackageMap::sub_006026c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006026e0
int UPackageMap::sub_006026e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602700
int UPackageMap::sub_00602700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602720
int UPackageMap::sub_00602720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602740
int UPackageMap::sub_00602740(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602760
int UPackageMap::sub_00602760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00602770
int UPackageMap::sub_00602770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00602790
int UPackageMap::sub_00602790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x006027a0
int UPackageMap::sub_006027a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x006027c0
int UPackageMap::sub_006027c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006027e0
int UPackageMap::sub_006027e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x006027f0
int UPackageMap::sub_006027f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602810
int UPackageMap::sub_00602810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00602830
int UPackageMap::sub_00602830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00602840
int UPackageMap::sub_00602840(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00602850
int UPackageMap::sub_00602850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00602860
int UPackageMap::sub_00602860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006028b0 {
    int sub_006028b0();
};

// @baa 0x006028b0
int C_006028b0::sub_006028b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x20 + *(int *)*param_1;
}

int sub_0040fcc0(void);
// @baa 0x006028c0
undefined4 UObject::sub_006028c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00602910 {
    undefined4 sub_00602910(byte);
    int sub_0040fcc0();
};

// @baa 0x00602910
undefined4 C_00602910::sub_00602910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00602910 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00602a60 {
    int sub_00602a60(int);
};

// @baa 0x00602a60
int C_00602a60::sub_00602a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00602a70 {
    int sub_00602a70(int);
};

// @baa 0x00602a70
int C_00602a70::sub_00602a70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00602b20
int UPackageMap::sub_00602b20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00602bd0 {
    int sub_00602bd0(int);
};

// @baa 0x00602bd0
int C_00602bd0::sub_00602bd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_00602cc0 {
    int sub_00602cc0();
};

// @baa 0x00602cc0
int C_00602cc0::sub_00602cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00602cd0 {
    int sub_00602cd0();
};

// @baa 0x00602cd0
int C_00602cd0::sub_00602cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00602ce0 {
    int sub_00602ce0();
};

// @baa 0x00602ce0
int C_00602ce0::sub_00602ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_00602d80 {
    int sub_00602d80(int);
};

// @baa 0x00602d80
int C_00602d80::sub_00602d80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00602e10
int UPackageMap::sub_00602e10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00602f50
int UPackageMap::sub_00602f50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

typedef uint size_t;

struct C_view_00603130 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00603130
undefined4 * UObject::sub_00603130(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_00603130 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

// @baa 0x00603170
int UObject::sub_00603170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x006031d0
int UObject::sub_006031d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x006031f0
int UObject::sub_006031f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view_006032a0 {
    int sub_00417dc0(int);
};

// @baa 0x006032a0
undefined4 * UObject::sub_006032a0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_006032a0 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  return param_1;
}

struct C_view_006032f0 {
    int sub_00417dc0(int);
};

// @baa 0x006032f0
undefined4 * UObject::sub_006032f0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_006032f0 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = 0xffffffff;
  return param_1;
}

// @baa 0x006033a0
int UObject::sub_006033a0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x00603430
int UObject::sub_00603430(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00603520
int UObject::sub_00603520(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00603530
int UObject::sub_00603530(byte param_2)
{
    int param_1 = (int)this;

  sub_0053dfa0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00603560 {
    int sub_00417dc0(int);
};

// @baa 0x00603560
undefined4 * UObject::sub_00603560(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00603560 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_00603740 {
    int sub_00603740(int);
};

// @baa 0x00603740
int C_00603740::sub_00603740(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00603750
void __stdcall sub_00603750(int a0, int a1) {  }

struct C_00603760 {
    int sub_00603760(int);
};

// @baa 0x00603760
int C_00603760::sub_00603760(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

// @baa 0x00603770
void __stdcall sub_00603770(int a0, int a1) {  }

// @baa 0x00603780
void __stdcall sub_00603780(int a0, int a1) {  }

struct C_00603790 {
    int sub_00603790();
};

// @baa 0x00603790
int C_00603790::sub_00603790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_006037a0 {
    int sub_006037a0();
};

// @baa 0x006037a0
int C_006037a0::sub_006037a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_006037b0 {
    int sub_006037b0(int);
};

// @baa 0x006037b0
int C_006037b0::sub_006037b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006037c0 {
    int sub_006037c0(int);
};

// @baa 0x006037c0
int C_006037c0::sub_006037c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006037d0 {
    int sub_006037d0(int);
};

// @baa 0x006037d0
int C_006037d0::sub_006037d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_006037e0 {
    int sub_006037e0();
};

// @baa 0x006037e0
int C_006037e0::sub_006037e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006037f0 {
    int sub_006037f0();
};

// @baa 0x006037f0
int C_006037f0::sub_006037f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00603800 {
    int sub_00603800();
};

// @baa 0x00603800
int C_00603800::sub_00603800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00603810 {
    int sub_00603810();
};

// @baa 0x00603810
int C_00603810::sub_00603810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00603820 {
    int sub_00603820();
};

// @baa 0x00603820
int C_00603820::sub_00603820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00603830 {
    int sub_00603830();
};

// @baa 0x00603830
int C_00603830::sub_00603830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00603840 {
    int sub_00603840();
};

// @baa 0x00603840
int C_00603840::sub_00603840(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00603860 {
    int sub_00603860();
};

// @baa 0x00603860
int C_00603860::sub_00603860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00603870 {
    int sub_00603870();
};

// @baa 0x00603870
int C_00603870::sub_00603870(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00603890 {
    int sub_00603890();
};

// @baa 0x00603890
int C_00603890::sub_00603890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_006038a0 {
    int sub_006038a0();
};

// @baa 0x006038a0
int C_006038a0::sub_006038a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_006038b0 {
    int sub_006038b0();
};

// @baa 0x006038b0
int C_006038b0::sub_006038b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_006038c0 {
    int sub_006038c0();
};

// @baa 0x006038c0
int C_006038c0::sub_006038c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_view_006041a0 {
    int sub_00417dc0(int);
};

// @baa 0x006041a0
undefined4 * UObject::sub_006041a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_006041a0 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_view_00604240 {
    int sub_0040fcc0();
};

extern undefined * g_01e729c0;
// @baa 0x00604240
int UObject::sub_00604240(byte param_2)
{
    int param_1 = (int)this;
  *(undefined ***)(param_1 + 4) = &g_01e729c0;
  ((C_view_00604240 *)(((char *)this + 0x14)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00604270
void UObject::sub_00604270(int param_2)
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

// @baa 0x006042b0
void UObject::sub_006042b0(int param_2)
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

// @baa 0x006042f0
int UObject::sub_006042f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_006049a0 {
    FString sub_006049a0();
};

// @baa 0x006049a0
FString C_006049a0::sub_006049a0()
{
    return TEXT("FBufferArchive");
}

struct C_00604a30 {
    undefined4 sub_00604a30(byte);
    int sub_0040fcc0();
};

// @baa 0x00604a30
undefined4 C_00604a30::sub_00604a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00604a30 *)(((char *)this + 0x2c)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00604b40 {
    undefined4 sub_00604b40(byte);
};

int sub_00600f90(void);
// @baa 0x00604b40
undefined4 C_00604b40::sub_00604b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00600f90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00604b60 {
    undefined4 sub_00604b60(byte);
};

int sub_006010c0(void);
// @baa 0x00604b60
undefined4 C_00604b60::sub_00604b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006010c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00604b80 {
    undefined4 sub_00604b80(byte);
};

int sub_00601160(void);
// @baa 0x00604b80
undefined4 C_00604b80::sub_00604b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00601160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00604dc0 {
    undefined4 sub_00604dc0(byte);
};

int sub_006011f0(void);
// @baa 0x00604dc0
undefined4 C_00604dc0::sub_00604dc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006011f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00601780(void);
// @baa 0x00605000
undefined4 UPackageMap::sub_00605000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00601780();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00602210(void);
// @baa 0x00605580
undefined4 UPackageMap::sub_00605580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00602210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006074c0 { void* Data; int Num; int Max; void sub_006074c0(); };

// @baa 0x006074c0
void C_006074c0::sub_006074c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00607610
int UPackageMap::sub_00607610(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00607620
int UPackageMap::sub_00607620(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00607660 { void* Data; int Num; int Max; void sub_00607660(); };

// @baa 0x00607660
void C_00607660::sub_00607660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x006077b0
int UFracturedStaticMeshComponent::sub_006077b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006077d0
int UFracturedStaticMeshComponent::sub_006077d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006077f0
int UFracturedStaticMeshComponent::sub_006077f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00607810
int UFracturedStaticMeshComponent::sub_00607810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00607830
int UFracturedStaticMeshComponent::sub_00607830(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00607850
int UFracturedStaticMeshComponent::sub_00607850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00607870
int UFracturedStaticMeshComponent::sub_00607870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00607880
int UFracturedStaticMeshComponent::sub_00607880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

// @baa 0x00607890
int UFracturedStaticMeshComponent::sub_00607890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x006078b0
int UFracturedStaticMeshComponent::sub_006078b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006078d0 { int a, b, c; C_006078d0(); };

// @baa 0x006078d0
C_006078d0::C_006078d0() : a(0), b(0), c(0) {}

// @baa 0x006078e0
int UFracturedStaticMeshComponent::sub_006078e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00607900
int UFracturedStaticMeshComponent::sub_00607900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00607910
int UFracturedStaticMeshComponent::sub_00607910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_006079f0 : Inner {
    int num;
    int max;
    void sub_00604080(int* p);
    Outer_006079f0(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x006079f0
Outer_006079f0::Outer_006079f0(int* p)
{
    num = 0;
    max = 0;
    sub_00604080(p);
}

// @baa 0x00607a50
int UFracturedStaticMeshComponent::sub_00607a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00607a60
int UFracturedStaticMeshComponent::sub_00607a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_view_00607a70 {
    int sub_005a9820(int, int);
};

// @baa 0x00607a70
int UFracturedStaticMeshComponent::sub_00607a70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607a70 *)(this))->sub_005a9820((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00607aa0 {
    int sub_006029e0(int, int);
};

// @baa 0x00607aa0
int UFracturedStaticMeshComponent::sub_00607aa0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607aa0 *)(this))->sub_006029e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00607ad0 {
    int sub_006029e0(int, int);
};

// @baa 0x00607ad0
int UFracturedStaticMeshComponent::sub_00607ad0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607ad0 *)(this))->sub_006029e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

// @baa 0x00607b00
int UFracturedStaticMeshComponent::sub_00607b00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00607b10
int UFracturedStaticMeshComponent::sub_00607b10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

// @baa 0x00607bb0
int UFracturedStaticMeshComponent::sub_00607bb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x54 + *(int *)*param_1;
}

// @baa 0x00607bc0
int UFracturedStaticMeshComponent::sub_00607bc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00607bd0
int UFracturedStaticMeshComponent::sub_00607bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct C_view_00607c40 {
    int sub_00602cf0(int, int);
};

// @baa 0x00607c40
int UFracturedStaticMeshComponent::sub_00607c40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607c40 *)(this))->sub_00602cf0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

// @baa 0x00607c80
int UFracturedStaticMeshComponent::sub_00607c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00607c90 {
    int sub_00603010(int, int);
};

// @baa 0x00607c90
int UFracturedStaticMeshComponent::sub_00607c90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607c90 *)(this))->sub_00603010((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

// @baa 0x00607cc0
int UFracturedStaticMeshComponent::sub_00607cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_view_00607d90 {
    int sub_00603340(int, int);
};

// @baa 0x00607d90
int UPackageMap::sub_00607d90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607d90 *)(this))->sub_00603340((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00607e20 {
    int sub_006033b0(int, int);
};

// @baa 0x00607e20
int UPackageMap::sub_00607e20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00607e20 *)(this))->sub_006033b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00607e50
int UPackageMap::sub_00607e50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct M_00608100 { void sub_0054eec0(); };

struct C_00608100 { char pad[8]; M_00608100 m; void sub_00608100(); };

// @baa 0x00608100
void C_00608100::sub_00608100() { m.sub_0054eec0(); }

// @baa 0x006082d0
int UObject::sub_006082d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_006082e0 { void* Data; int Num; int Max; void sub_006082e0(); };

// @baa 0x006082e0
void C_006082e0::sub_006082e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x006083c0
int UObject::sub_006083c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_006083d0 { void* Data; int Num; int Max; void sub_006083d0(); };

// @baa 0x006083d0
void C_006083d0::sub_006083d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00608430 { void* Data; int Num; int Max; void sub_00608430(); };

// @baa 0x00608430
void C_00608430::sub_00608430() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00608490 {
    int sub_00608490();
};

// @baa 0x00608490
int C_00608490::sub_00608490(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_006084a0 {
    int sub_006084a0();
};

// @baa 0x006084a0
int C_006084a0::sub_006084a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_view_00608530 {
    int sub_00417dc0(int);
};

// @baa 0x00608530
undefined4 * UObject::sub_00608530(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_00608530 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = puVar1[3];
  param_1[4] = param_2[1];
  return param_1;
}

// @baa 0x006085d0
int UObject::sub_006085d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00608660
int UObject::sub_00608660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x006086e0
int UObject::sub_006086e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

struct C_view_006086f0 {
    int sub_006035a0(int);
};

// @baa 0x006086f0
undefined4 * UObject::sub_006086f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_006086f0 *)(((char *)this + 4)))->sub_006035a0(param_2[1]);
  return param_1;
}

struct C_view_00608710 {
    int sub_006035a0(int);
};

// @baa 0x00608710
undefined4 * UObject::sub_00608710(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00608710 *)(((char *)this + 4)))->sub_006035a0(param_2[1]);
  param_1[8] = 0xffffffff;
  return param_1;
}

struct C_006087a0 {
    int sub_006087a0(byte);
    int sub_0040fcc0();
};

// @baa 0x006087a0
int C_006087a0::sub_006087a0(byte param_2)
{
    int param_1 = (int)this;
  *(undefined ***)(param_1 + 4) = &g_01e729c0;
  ((C_006087a0 *)(((char *)this + 0x14)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00608a10
void UPackageMap::sub_00608a10(int param_2)
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

// @baa 0x00608b30
void UPackageMap::sub_00608b30(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x5c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00608b70
void UPackageMap::sub_00608b70(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct M_006092c0 { void sub_0054eec0(); };

struct C_006092c0 { char pad[8]; M_006092c0 m; void sub_006092c0(); };

// @baa 0x006092c0
void C_006092c0::sub_006092c0() { m.sub_0054eec0(); }

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

struct TConstSetBitIterator_006092d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006092d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006092d0& operator++();
};

TConstSetBitIterator_006092d0::TConstSetBitIterator_006092d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006092d0
TConstSetBitIterator_006092d0& TConstSetBitIterator_006092d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609320& operator++();
};

TConstSetBitIterator_00609320::TConstSetBitIterator_00609320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609320
TConstSetBitIterator_00609320& TConstSetBitIterator_00609320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609370& operator++();
};

TConstSetBitIterator_00609370::TConstSetBitIterator_00609370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609370
TConstSetBitIterator_00609370& TConstSetBitIterator_00609370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006093c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006093c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006093c0& operator++();
};

TConstSetBitIterator_006093c0::TConstSetBitIterator_006093c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006093c0
TConstSetBitIterator_006093c0& TConstSetBitIterator_006093c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609410& operator++();
};

TConstSetBitIterator_00609410::TConstSetBitIterator_00609410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609410
TConstSetBitIterator_00609410& TConstSetBitIterator_00609410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609460& operator++();
};

TConstSetBitIterator_00609460::TConstSetBitIterator_00609460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609460
TConstSetBitIterator_00609460& TConstSetBitIterator_00609460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006094b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006094b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006094b0& operator++();
};

TConstSetBitIterator_006094b0::TConstSetBitIterator_006094b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006094b0
TConstSetBitIterator_006094b0& TConstSetBitIterator_006094b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609500 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609500(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609500& operator++();
};

TConstSetBitIterator_00609500::TConstSetBitIterator_00609500(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609500
TConstSetBitIterator_00609500& TConstSetBitIterator_00609500::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609550& operator++();
};

TConstSetBitIterator_00609550::TConstSetBitIterator_00609550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609550
TConstSetBitIterator_00609550& TConstSetBitIterator_00609550::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006095a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006095a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006095a0& operator++();
};

TConstSetBitIterator_006095a0::TConstSetBitIterator_006095a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006095a0
TConstSetBitIterator_006095a0& TConstSetBitIterator_006095a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006095f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006095f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006095f0& operator++();
};

TConstSetBitIterator_006095f0::TConstSetBitIterator_006095f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006095f0
TConstSetBitIterator_006095f0& TConstSetBitIterator_006095f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609640& operator++();
};

TConstSetBitIterator_00609640::TConstSetBitIterator_00609640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609640
TConstSetBitIterator_00609640& TConstSetBitIterator_00609640::operator++()
{
    It.Advance();
    return *this;
}

struct C_00609690 {
    int sub_00609690();
};

// @baa 0x00609690
int C_00609690::sub_00609690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct TConstSetBitIterator_006096a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006096a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006096a0& operator++();
};

TConstSetBitIterator_006096a0::TConstSetBitIterator_006096a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006096a0
TConstSetBitIterator_006096a0& TConstSetBitIterator_006096a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006096f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006096f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006096f0& operator++();
};

TConstSetBitIterator_006096f0::TConstSetBitIterator_006096f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006096f0
TConstSetBitIterator_006096f0& TConstSetBitIterator_006096f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609740& operator++();
};

TConstSetBitIterator_00609740::TConstSetBitIterator_00609740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609740
TConstSetBitIterator_00609740& TConstSetBitIterator_00609740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609790& operator++();
};

TConstSetBitIterator_00609790::TConstSetBitIterator_00609790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609790
TConstSetBitIterator_00609790& TConstSetBitIterator_00609790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006097e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006097e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006097e0& operator++();
};

TConstSetBitIterator_006097e0::TConstSetBitIterator_006097e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006097e0
TConstSetBitIterator_006097e0& TConstSetBitIterator_006097e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609830& operator++();
};

TConstSetBitIterator_00609830::TConstSetBitIterator_00609830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609830
TConstSetBitIterator_00609830& TConstSetBitIterator_00609830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609880& operator++();
};

TConstSetBitIterator_00609880::TConstSetBitIterator_00609880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609880
TConstSetBitIterator_00609880& TConstSetBitIterator_00609880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006098d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006098d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006098d0& operator++();
};

TConstSetBitIterator_006098d0::TConstSetBitIterator_006098d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006098d0
TConstSetBitIterator_006098d0& TConstSetBitIterator_006098d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609920& operator++();
};

TConstSetBitIterator_00609920::TConstSetBitIterator_00609920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609920
TConstSetBitIterator_00609920& TConstSetBitIterator_00609920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609970& operator++();
};

TConstSetBitIterator_00609970::TConstSetBitIterator_00609970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609970
TConstSetBitIterator_00609970& TConstSetBitIterator_00609970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006099c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006099c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006099c0& operator++();
};

TConstSetBitIterator_006099c0::TConstSetBitIterator_006099c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006099c0
TConstSetBitIterator_006099c0& TConstSetBitIterator_006099c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609a10& operator++();
};

TConstSetBitIterator_00609a10::TConstSetBitIterator_00609a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609a10
TConstSetBitIterator_00609a10& TConstSetBitIterator_00609a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00609a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00609a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00609a60& operator++();
};

TConstSetBitIterator_00609a60::TConstSetBitIterator_00609a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00609a60
TConstSetBitIterator_00609a60& TConstSetBitIterator_00609a60::operator++()
{
    It.Advance();
    return *this;
}

struct C_00609ad0 {
    int sub_00609ad0();
};

// @baa 0x00609ad0
int C_00609ad0::sub_00609ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00609ae0 {
    int sub_00609ae0();
};

// @baa 0x00609ae0
int C_00609ae0::sub_00609ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00609e50 {
    undefined4 sub_00609e50(byte);
    int sub_0054eec0();
};

// @baa 0x00609e50
undefined4 C_00609e50::sub_00609e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00609e50 *)(((char *)this + 8)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00609e80 {
    int sub_00609e80(int);
    int sub_006043f0(int, int);
};

// @baa 0x00609e80
int C_00609e80::sub_00609e80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00609e80 *)(this))->sub_006043f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0060a0c0 {
    undefined4 sub_0060a0c0(byte);
};

int sub_006049d0(void);
// @baa 0x0060a0c0
undefined4 C_0060a0c0::sub_0060a0c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006049d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_0060a290 {
    int sub_0054f280(int, int);
};

// @baa 0x0060a290
int UPackageMap::sub_0060a290(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060a290 *)(this))->sub_0054f280((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct TConstSetBitIterator_0060a2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060a2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060a2c0& operator++();
};

TConstSetBitIterator_0060a2c0::TConstSetBitIterator_0060a2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060a2c0
TConstSetBitIterator_0060a2c0& TConstSetBitIterator_0060a2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060a340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060a340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060a340& operator++();
};

TConstSetBitIterator_0060a340::TConstSetBitIterator_0060a340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060a340
TConstSetBitIterator_0060a340& TConstSetBitIterator_0060a340::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x0060b320
UExporter::UExporter()
{
    *(DWORD*)((BYTE*)this + 0x54) &= 0xfffffffd;
}

IMPLEMENT_CLASS_AT(UExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UExporter.cpp", 36);
// @baa 0x0060b340
int UExporter::vf_10c(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x0060b350
void UExporter::vf_110(int a0) {  }

// @baa 0x0060b360
void UExporter::vf_114(int a0) {  }

// @baa 0x0060b370
int UExporter::vf_118(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x0060b380
int UExporter::vf_11c(void) { return 1; }

struct C_0060b900 { void sub_00609af0(int); C_0060b900 *sub_0060b900(int); };

// @baa 0x0060b900
C_0060b900 *C_0060b900::sub_0060b900(int a) { sub_00609af0(a); return this; }

struct C_0060baf0 {
    int sub_0060baf0(int);
    int sub_005a9820(int, int);
};

// @baa 0x0060baf0
int C_0060baf0::sub_0060baf0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0060baf0 *)(this))->sub_005a9820((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct Outer_0060bb30 : Inner {
    int num;
    int max;
    void sub_00609bb0(int* p);
    Outer_0060bb30(int* p);
};

// @baa 0x0060bb30
Outer_0060bb30::Outer_0060bb30(int* p)
{
    num = 0;
    max = 0;
    sub_00609bb0(p);
}

struct C_view_0060bbd0 {
    int sub_006029e0(int, int);
};

// @baa 0x0060bbd0
int UFracturedStaticMeshComponent::sub_0060bbd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0060bbd0 *)(this))->sub_006029e0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

void sub_00607b20();
// @baa 0x0060bc10
void sub_0060bc10(void) { sub_00607b20(); }

// @baa 0x0060bc20
int UFracturedStaticMeshComponent::sub_0060bc20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

// @baa 0x0060bc30
int UFracturedStaticMeshComponent::sub_0060bc30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + 0xc + *(int *)*param_1;
}

// @baa 0x0060bc40
int UFracturedStaticMeshComponent::sub_0060bc40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x0060bc50
int UFracturedStaticMeshComponent::sub_0060bc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

// @baa 0x0060bc60
int UFracturedStaticMeshComponent::sub_0060bc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + 0xc + *(int *)*param_1;
}

struct C_view_0060c160 {
    int sub_00608250(int, int);
};

// @baa 0x0060c160
int UPackageMap::sub_0060c160(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060c160 *)(this))->sub_00608250((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x54 + *param_1;
  }
  return 0;
}

struct C_view_0060c190 {
    int sub_00608340(int, int);
};

// @baa 0x0060c190
int UPackageMap::sub_0060c190(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060c190 *)(this))->sub_00608340((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x5c + *param_1;
  }
  return 0;
}

// @baa 0x0060c220
int UPackageMap::sub_0060c220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x0060c230
int UPackageMap::sub_0060c230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_view_0060c240 {
    int sub_006084b0(int, int);
};

// @baa 0x0060c240
int UPackageMap::sub_0060c240(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060c240 *)(this))->sub_006084b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_view_0060c2d0 {
    int sub_006085e0(int, int);
};

// @baa 0x0060c2d0
int UPackageMap::sub_0060c2d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060c2d0 *)(this))->sub_006085e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

// @baa 0x0060c300
int UPackageMap::sub_0060c300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_view_0060c310 {
    int sub_00608670(int, int);
};

// @baa 0x0060c310
int UPackageMap::sub_0060c310(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0060c310 *)(this))->sub_00608670((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct TConstSetBitIterator_0060c340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060c340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060c340& operator++();
};

TConstSetBitIterator_0060c340::TConstSetBitIterator_0060c340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060c340
TConstSetBitIterator_0060c340& TConstSetBitIterator_0060c340::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0060c360 {
    int sub_0060c0e0(int);
};

// @baa 0x0060c360
void UPackageMap::sub_0060c360(void)
{
    int param_1 = (int)this;
  ((C_view_0060c360 *)((*(char **)((char *)this + 0x10))))->sub_0060c0e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0060cbf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060cbf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060cbf0& operator++();
};

TConstSetBitIterator_0060cbf0::TConstSetBitIterator_0060cbf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060cbf0
TConstSetBitIterator_0060cbf0& TConstSetBitIterator_0060cbf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060cc10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060cc10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060cc10& operator++();
};

TConstSetBitIterator_0060cc10::TConstSetBitIterator_0060cc10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060cc10
TConstSetBitIterator_0060cc10& TConstSetBitIterator_0060cc10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060cc30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060cc30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060cc30& operator++();
};

TConstSetBitIterator_0060cc30::TConstSetBitIterator_0060cc30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060cc30
TConstSetBitIterator_0060cc30& TConstSetBitIterator_0060cc30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060cc50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060cc50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060cc50& operator++();
};

TConstSetBitIterator_0060cc50::TConstSetBitIterator_0060cc50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060cc50
TConstSetBitIterator_0060cc50& TConstSetBitIterator_0060cc50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060cc70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060cc70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060cc70& operator++();
};

TConstSetBitIterator_0060cc70::TConstSetBitIterator_0060cc70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060cc70
TConstSetBitIterator_0060cc70& TConstSetBitIterator_0060cc70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d170& operator++();
};

TConstSetBitIterator_0060d170::TConstSetBitIterator_0060d170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d170
TConstSetBitIterator_0060d170& TConstSetBitIterator_0060d170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d2f0& operator++();
};

TConstSetBitIterator_0060d2f0::TConstSetBitIterator_0060d2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d2f0
TConstSetBitIterator_0060d2f0& TConstSetBitIterator_0060d2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d310& operator++();
};

TConstSetBitIterator_0060d310::TConstSetBitIterator_0060d310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d310
TConstSetBitIterator_0060d310& TConstSetBitIterator_0060d310::operator++()
{
    It.Advance();
    return *this;
}

struct Outer_0060d780 : Inner {
    int num;
    int max;
    void sub_00553180(int* p);
    Outer_0060d780(int* p);
};

// @baa 0x0060d780
Outer_0060d780::Outer_0060d780(int* p)
{
    num = 0;
    max = 0;
    sub_00553180(p);
}

struct TConstSetBitIterator_0060d7e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d7e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d7e0& operator++();
};

TConstSetBitIterator_0060d7e0::TConstSetBitIterator_0060d7e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d7e0
TConstSetBitIterator_0060d7e0& TConstSetBitIterator_0060d7e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d890& operator++();
};

TConstSetBitIterator_0060d890::TConstSetBitIterator_0060d890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d890
TConstSetBitIterator_0060d890& TConstSetBitIterator_0060d890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d8e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d8e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d8e0& operator++();
};

TConstSetBitIterator_0060d8e0::TConstSetBitIterator_0060d8e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d8e0
TConstSetBitIterator_0060d8e0& TConstSetBitIterator_0060d8e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d980& operator++();
};

TConstSetBitIterator_0060d980::TConstSetBitIterator_0060d980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d980
TConstSetBitIterator_0060d980& TConstSetBitIterator_0060d980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d9d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d9d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d9d0& operator++();
};

TConstSetBitIterator_0060d9d0::TConstSetBitIterator_0060d9d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d9d0
TConstSetBitIterator_0060d9d0& TConstSetBitIterator_0060d9d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060d9f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060d9f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060d9f0& operator++();
};

TConstSetBitIterator_0060d9f0::TConstSetBitIterator_0060d9f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060d9f0
TConstSetBitIterator_0060d9f0& TConstSetBitIterator_0060d9f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060da40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060da40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060da40& operator++();
};

TConstSetBitIterator_0060da40::TConstSetBitIterator_0060da40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060da40
TConstSetBitIterator_0060da40& TConstSetBitIterator_0060da40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060da60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060da60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060da60& operator++();
};

TConstSetBitIterator_0060da60::TConstSetBitIterator_0060da60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060da60
TConstSetBitIterator_0060da60& TConstSetBitIterator_0060da60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dab0& operator++();
};

TConstSetBitIterator_0060dab0::TConstSetBitIterator_0060dab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dab0
TConstSetBitIterator_0060dab0& TConstSetBitIterator_0060dab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dad0& operator++();
};

TConstSetBitIterator_0060dad0::TConstSetBitIterator_0060dad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dad0
TConstSetBitIterator_0060dad0& TConstSetBitIterator_0060dad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060db20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060db20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060db20& operator++();
};

TConstSetBitIterator_0060db20::TConstSetBitIterator_0060db20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060db20
TConstSetBitIterator_0060db20& TConstSetBitIterator_0060db20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060db40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060db40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060db40& operator++();
};

TConstSetBitIterator_0060db40::TConstSetBitIterator_0060db40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060db40
TConstSetBitIterator_0060db40& TConstSetBitIterator_0060db40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060db90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060db90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060db90& operator++();
};

TConstSetBitIterator_0060db90::TConstSetBitIterator_0060db90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060db90
TConstSetBitIterator_0060db90& TConstSetBitIterator_0060db90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dbb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dbb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dbb0& operator++();
};

TConstSetBitIterator_0060dbb0::TConstSetBitIterator_0060dbb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dbb0
TConstSetBitIterator_0060dbb0& TConstSetBitIterator_0060dbb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dc00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dc00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dc00& operator++();
};

TConstSetBitIterator_0060dc00::TConstSetBitIterator_0060dc00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dc00
TConstSetBitIterator_0060dc00& TConstSetBitIterator_0060dc00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dc20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dc20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dc20& operator++();
};

TConstSetBitIterator_0060dc20::TConstSetBitIterator_0060dc20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dc20
TConstSetBitIterator_0060dc20& TConstSetBitIterator_0060dc20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dc70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dc70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dc70& operator++();
};

TConstSetBitIterator_0060dc70::TConstSetBitIterator_0060dc70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dc70
TConstSetBitIterator_0060dc70& TConstSetBitIterator_0060dc70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dc90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dc90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dc90& operator++();
};

TConstSetBitIterator_0060dc90::TConstSetBitIterator_0060dc90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dc90
TConstSetBitIterator_0060dc90& TConstSetBitIterator_0060dc90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060dce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dce0& operator++();
};

TConstSetBitIterator_0060dce0::TConstSetBitIterator_0060dce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dce0
TConstSetBitIterator_0060dce0& TConstSetBitIterator_0060dce0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0060dd00 {
    int sub_0054eec0();
};

// @baa 0x0060dd00
undefined4 UPackageMap::sub_0060dd00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0060dd00 *)(((char *)this + 8)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0060c4b0();
// @baa 0x0060dd30
void sub_0060dd30(void) { sub_0060c4b0(); }

struct TConstSetBitIterator_0060dec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060dec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060dec0& operator++();
};

TConstSetBitIterator_0060dec0::TConstSetBitIterator_0060dec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060dec0
TConstSetBitIterator_0060dec0& TConstSetBitIterator_0060dec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060df10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060df10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060df10& operator++();
};

TConstSetBitIterator_0060df10::TConstSetBitIterator_0060df10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060df10
TConstSetBitIterator_0060df10& TConstSetBitIterator_0060df10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e020& operator++();
};

TConstSetBitIterator_0060e020::TConstSetBitIterator_0060e020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e020
TConstSetBitIterator_0060e020& TConstSetBitIterator_0060e020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e0d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e0d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e0d0& operator++();
};

TConstSetBitIterator_0060e0d0::TConstSetBitIterator_0060e0d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e0d0
TConstSetBitIterator_0060e0d0& TConstSetBitIterator_0060e0d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e1e0& operator++();
};

TConstSetBitIterator_0060e1e0::TConstSetBitIterator_0060e1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e1e0
TConstSetBitIterator_0060e1e0& TConstSetBitIterator_0060e1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e230& operator++();
};

TConstSetBitIterator_0060e230::TConstSetBitIterator_0060e230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e230
TConstSetBitIterator_0060e230& TConstSetBitIterator_0060e230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e250& operator++();
};

TConstSetBitIterator_0060e250::TConstSetBitIterator_0060e250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e250
TConstSetBitIterator_0060e250& TConstSetBitIterator_0060e250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e2a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e2a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e2a0& operator++();
};

TConstSetBitIterator_0060e2a0::TConstSetBitIterator_0060e2a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e2a0
TConstSetBitIterator_0060e2a0& TConstSetBitIterator_0060e2a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e2c0& operator++();
};

TConstSetBitIterator_0060e2c0::TConstSetBitIterator_0060e2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e2c0
TConstSetBitIterator_0060e2c0& TConstSetBitIterator_0060e2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e310& operator++();
};

TConstSetBitIterator_0060e310::TConstSetBitIterator_0060e310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e310
TConstSetBitIterator_0060e310& TConstSetBitIterator_0060e310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e330& operator++();
};

TConstSetBitIterator_0060e330::TConstSetBitIterator_0060e330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e330
TConstSetBitIterator_0060e330& TConstSetBitIterator_0060e330::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e380& operator++();
};

TConstSetBitIterator_0060e380::TConstSetBitIterator_0060e380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e380
TConstSetBitIterator_0060e380& TConstSetBitIterator_0060e380::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e3a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e3a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e3a0& operator++();
};

TConstSetBitIterator_0060e3a0::TConstSetBitIterator_0060e3a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e3a0
TConstSetBitIterator_0060e3a0& TConstSetBitIterator_0060e3a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e3f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e3f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e3f0& operator++();
};

TConstSetBitIterator_0060e3f0::TConstSetBitIterator_0060e3f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e3f0
TConstSetBitIterator_0060e3f0& TConstSetBitIterator_0060e3f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e410& operator++();
};

TConstSetBitIterator_0060e410::TConstSetBitIterator_0060e410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e410
TConstSetBitIterator_0060e410& TConstSetBitIterator_0060e410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e460& operator++();
};

TConstSetBitIterator_0060e460::TConstSetBitIterator_0060e460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e460
TConstSetBitIterator_0060e460& TConstSetBitIterator_0060e460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e480& operator++();
};

TConstSetBitIterator_0060e480::TConstSetBitIterator_0060e480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e480
TConstSetBitIterator_0060e480& TConstSetBitIterator_0060e480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e4d0& operator++();
};

TConstSetBitIterator_0060e4d0::TConstSetBitIterator_0060e4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e4d0
TConstSetBitIterator_0060e4d0& TConstSetBitIterator_0060e4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e4f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e4f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e4f0& operator++();
};

TConstSetBitIterator_0060e4f0::TConstSetBitIterator_0060e4f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e4f0
TConstSetBitIterator_0060e4f0& TConstSetBitIterator_0060e4f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e540& operator++();
};

TConstSetBitIterator_0060e540::TConstSetBitIterator_0060e540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e540
TConstSetBitIterator_0060e540& TConstSetBitIterator_0060e540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e560& operator++();
};

TConstSetBitIterator_0060e560::TConstSetBitIterator_0060e560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e560
TConstSetBitIterator_0060e560& TConstSetBitIterator_0060e560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e5b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e5b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e5b0& operator++();
};

TConstSetBitIterator_0060e5b0::TConstSetBitIterator_0060e5b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e5b0
TConstSetBitIterator_0060e5b0& TConstSetBitIterator_0060e5b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e5d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e5d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e5d0& operator++();
};

TConstSetBitIterator_0060e5d0::TConstSetBitIterator_0060e5d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e5d0
TConstSetBitIterator_0060e5d0& TConstSetBitIterator_0060e5d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060e620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060e620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060e620& operator++();
};

TConstSetBitIterator_0060e620::TConstSetBitIterator_0060e620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060e620
TConstSetBitIterator_0060e620& TConstSetBitIterator_0060e620::operator++()
{
    It.Advance();
    return *this;
}

void sub_00609f40(void* a, int b);
// @baa 0x0060eba0
void sub_0060eba0(void* a, int b)
{
    sub_00609f40(a, b);
}

void sub_0060a000();
// @baa 0x0060ebb0
void sub_0060ebb0(void) { sub_0060a000(); }

// @baa 0x0060ec00
// @baa 0x0060eca0
struct C_view_0060ed90 {
    int sub_0054f280(int, int);
};

// @baa 0x0060ed90
int UPackageMap::sub_0060ed90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0060ed90 *)(this))->sub_0054f280((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_0060edd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060edd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060edd0& operator++();
};

TConstSetBitIterator_0060edd0::TConstSetBitIterator_0060edd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060edd0
TConstSetBitIterator_0060edd0& TConstSetBitIterator_0060edd0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0060acb0(void);
// @baa 0x0060ee20
undefined4 UPackageMap::sub_0060ee20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0060acb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0060fda0
int UPackageMap::sub_0060fda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_view_0060fe10 {
    int sub_00608670(int, int);
};

// @baa 0x0060fe10
int UPackageMap::sub_0060fe10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0060fe10 *)(this))->sub_00608670((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_0060fe50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060fe50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060fe50& operator++();
};

TConstSetBitIterator_0060fe50::TConstSetBitIterator_0060fe50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060fe50
TConstSetBitIterator_0060fe50& TConstSetBitIterator_0060fe50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ff00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ff00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ff00& operator++();
};

TConstSetBitIterator_0060ff00::TConstSetBitIterator_0060ff00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ff00
TConstSetBitIterator_0060ff00& TConstSetBitIterator_0060ff00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ff20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ff20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ff20& operator++();
};

TConstSetBitIterator_0060ff20::TConstSetBitIterator_0060ff20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ff20
TConstSetBitIterator_0060ff20& TConstSetBitIterator_0060ff20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ff40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ff40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ff40& operator++();
};

TConstSetBitIterator_0060ff40::TConstSetBitIterator_0060ff40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ff40
TConstSetBitIterator_0060ff40& TConstSetBitIterator_0060ff40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ff60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ff60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ff60& operator++();
};

TConstSetBitIterator_0060ff60::TConstSetBitIterator_0060ff60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ff60
TConstSetBitIterator_0060ff60& TConstSetBitIterator_0060ff60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ff80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ff80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ff80& operator++();
};

TConstSetBitIterator_0060ff80::TConstSetBitIterator_0060ff80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ff80
TConstSetBitIterator_0060ff80& TConstSetBitIterator_0060ff80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ffa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ffa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ffa0& operator++();
};

TConstSetBitIterator_0060ffa0::TConstSetBitIterator_0060ffa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ffa0
TConstSetBitIterator_0060ffa0& TConstSetBitIterator_0060ffa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ffc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ffc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ffc0& operator++();
};

TConstSetBitIterator_0060ffc0::TConstSetBitIterator_0060ffc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ffc0
TConstSetBitIterator_0060ffc0& TConstSetBitIterator_0060ffc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0060ffe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0060ffe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0060ffe0& operator++();
};

TConstSetBitIterator_0060ffe0::TConstSetBitIterator_0060ffe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0060ffe0
TConstSetBitIterator_0060ffe0& TConstSetBitIterator_0060ffe0::operator++()
{
    It.Advance();
    return *this;
}
