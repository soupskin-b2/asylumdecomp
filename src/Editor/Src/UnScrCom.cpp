// UnScrCom.cpp (part 1 of 4): 537 functions
// Placed here by: neighbours 476, callers 59, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00588c40(...);
int sub_0058a1b0(void);
extern undefined4 g_02688440;
// @baa 0x00540500
int sub_00540500(void)
{
  if (g_02688440 == 0) {
    g_02688440 = sub_00588c40(L"Core");
    sub_0058a1b0();
  }
  return g_02688440;
}

int sub_00588270(...);
int sub_0058a930(void);
extern undefined4 g_0268844c;
// @baa 0x00540530
int sub_00540530(void)
{
  if (g_0268844c == 0) {
    g_0268844c = sub_00588270(L"Core");
    sub_0058a930();
  }
  return g_0268844c;
}

int sub_00588d00(...);
int sub_005892e0(void);
extern undefined4 g_02688444;
// @baa 0x00540560
int sub_00540560(void)
{
  if (g_02688444 == 0) {
    g_02688444 = sub_00588d00(L"Core");
    sub_005892e0();
  }
  return g_02688444;
}

int sub_0059c600(void);
int sub_005b3970(...);
extern undefined4 g_0268d07c;
// @baa 0x00540590
int sub_00540590(void)
{
  if (g_0268d07c == 0) {
    g_0268d07c = sub_005b3970(L"Core");
    sub_0059c600();
  }
  return g_0268d07c;
}

int sub_00588dd0(...);
int sub_00589470(void);
extern undefined4 g_02688448;
// @baa 0x005405c0
int sub_005405c0(void)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  return g_02688448;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x005405f0
void sub_005405f0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C { int sub_00540610(void); };

// @baa 0x00540610
int C::sub_00540610(void) { return *(int*)((char*)this + 48); }

struct C_00540620 {
    bool sub_00540620(uint);
};

// @baa 0x00540620
bool C_00540620::sub_00540620(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 0xd8) & param_2) != 0;
}

struct C_00540640 {
    bool sub_00540640(uint);
};

// @baa 0x00540640
bool C_00540640::sub_00540640(uint param_2)
{
    int param_1 = (int)this;

  return (*(uint *)(param_1 + 0xdc) & param_2) != 0;
}

int sub_00588340(...);
int sub_0058aa40(void);
extern undefined4 g_02688450;
// @baa 0x00540660
int sub_00540660(void)
{
  if (g_02688450 == 0) {
    g_02688450 = sub_00588340(L"Core");
    sub_0058aa40();
  }
  return g_02688450;
}

// @baa 0x00540690
int sub_00540690(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x20) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005406b0
int sub_005406b0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdf) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

int sub_0062dec0(void);
int sub_006318f0(...);
extern undefined4 g_026acbd0;
// @baa 0x005406d0
int sub_005406d0(void)
{
  if (g_026acbd0 == 0) {
    g_026acbd0 = sub_006318f0(L"Core");
    sub_0062dec0();
  }
  return g_026acbd0;
}

int sub_00631a00(...);
int sub_00633360(void);
extern undefined4 g_026acbd4;
// @baa 0x00540700
int sub_00540700(void)
{
  if (g_026acbd4 == 0) {
    g_026acbd4 = sub_00631a00(L"Core");
    sub_00633360();
  }
  return g_026acbd4;
}

int sub_00631ac0(...);
int sub_006334b0(void);
extern undefined4 g_026acbd8;
// @baa 0x00540730
int sub_00540730(void)
{
  if (g_026acbd8 == 0) {
    g_026acbd8 = sub_00631ac0(L"Core");
    sub_006334b0();
  }
  return g_026acbd8;
}

int sub_00631c40(...);
int sub_00633750(void);
extern undefined4 g_026acbe0;
// @baa 0x00540760
int sub_00540760(void)
{
  if (g_026acbe0 == 0) {
    g_026acbe0 = sub_00631c40(L"Core");
    sub_00633750();
  }
  return g_026acbe0;
}

int sub_00631d00(...);
int sub_006338a0(void);
extern undefined4 g_026acbe4;
// @baa 0x00540790
int sub_00540790(void)
{
  if (g_026acbe4 == 0) {
    g_026acbe4 = sub_00631d00(L"Core");
    sub_006338a0();
  }
  return g_026acbe4;
}

int sub_00631dc0(...);
int sub_006339f0(void);
extern undefined4 g_026acbe8;
// @baa 0x005407c0
int sub_005407c0(void)
{
  if (g_026acbe8 == 0) {
    g_026acbe8 = sub_00631dc0(L"Core");
    sub_006339f0();
  }
  return g_026acbe8;
}

int sub_006321f0(...);
int sub_00636360(void);
extern undefined4 g_026acbf0;
// @baa 0x005407f0
int sub_005407f0(void)
{
  if (g_026acbf0 == 0) {
    g_026acbf0 = sub_006321f0(L"Core");
    sub_00636360();
  }
  return g_026acbf0;
}

int sub_00631ee0(...);
int sub_00636210(void);
extern undefined4 g_026acbec;
// @baa 0x00540820
int sub_00540820(void)
{
  if (g_026acbec == 0) {
    g_026acbec = sub_00631ee0(L"Core");
    sub_00636210();
  }
  return g_026acbec;
}

int sub_005d88c0(...);
// @baa 0x005454d0
void sub_005454d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_0268d07c == 0) {
    g_0268d07c = sub_005b3970(L"Core");
    sub_0059c600();
  }
  sub_005d88c0(g_0268d07c,param_1,param_2,param_3);
  return;
}

struct C_00576f20 {
    undefined4 * sub_00576f20(undefined4);
    int sub_005729b0(int);
};

extern undefined * g_01e7d958;
// @baa 0x00576f20
undefined4 * C_00576f20::sub_00576f20(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00576f20 *)(this))->sub_005729b0(param_2);
  *param_1 = (undefined4)(&g_01e7d958);
  param_1[0x27] = 0;
  return param_1;
}

struct C_005867a0 {
    int sub_005867a0();
};

int sub_005790a0(void);
// @baa 0x005867a0
int C_005867a0::sub_005867a0(void)
{
    int param_1 = (int)this;

  sub_005790a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005e1960(...);
int sub_00632430(...);
int sub_00633de0(void);
extern undefined4 g_026667a8;
extern undefined4 g_026acbfc;
// @baa 0x005fa7f0
void sub_005fa7f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbfc == 0) {
    g_026acbfc = sub_00632430(L"Core");
    sub_00633de0();
  }
  sub_005e1960(g_026acbfc,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_0062dc20(void);
extern undefined * g_01ea6d80;
// @baa 0x005fa850
undefined4 * UStrProperty::sub_005fa850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0062dc20();
  *param_1 = (undefined4)(&g_01ea6d80);
  return param_1;
}

// @baa 0x005fa870
IMPLEMENT_CLASS_AT(UStrProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 2921);

struct C_view {
    int sub_0062dc50(int, int, int, int, int);
};

// @baa 0x005fa8d0
undefined4 * UStrProperty::sub_005fa8d0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01ea6d80);
  return param_1;
}

// @baa 0x005fa900
int UStrProperty::vf_160(void) { return 1; }

// @baa 0x005fa910
int sub_00632550(...);
int sub_00634160(void);
extern undefined4 g_026acc00;
// @baa 0x005fa930
void sub_005fa930(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acc00 == 0) {
    g_026acc00 = sub_00632550(L"Core");
    sub_00634160();
  }
  sub_005e1960(g_026acc00,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00634920
void sub_00634920(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbd8 == 0) {
    g_026acbd8 = sub_00631ac0(L"Core");
    sub_006334b0();
  }
  sub_005e1960(g_026acbd8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00634980
void sub_00634980(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbe4 == 0) {
    g_026acbe4 = sub_00631d00(L"Core");
    sub_006338a0();
  }
  sub_005e1960(g_026acbe4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00632370(...);
int sub_00633c90(void);
extern undefined4 g_026acbf8;
// @baa 0x006349e0
void sub_006349e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbf8 == 0) {
    g_026acbf8 = sub_00632370(L"Core");
    sub_00633c90();
  }
  sub_005e1960(g_026acbf8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x0079f030
void sub_0079f030(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbe0 == 0) {
    g_026acbe0 = sub_00631c40(L"Core");
    sub_00633750();
  }
  sub_005e1960(g_026acbe0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_0079f090 {
    undefined4 * sub_0079f090(undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_0062dc50(int, int, int, int, int);
};

extern undefined * g_01eaf3f8;
// @baa 0x0079f090
undefined4 * C_0079f090::sub_0079f090(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0079f090 *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eaf3f8);
  param_1[0x1c] = 1;
  return param_1;
}

// @baa 0x0079f0d0
void sub_0079f0d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbe8 == 0) {
    g_026acbe8 = sub_00631dc0(L"Core");
    sub_006339f0();
  }
  sub_005e1960(g_026acbe8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x009435f0
void sub_009435f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_02688440 == 0) {
    g_02688440 = sub_00588c40(L"Core");
    sub_0058a1b0();
  }
  sub_005e1960(g_02688440,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

extern undefined * g_01eafb78;
// @baa 0x00943650
undefined4 * UStrProperty::sub_00943650(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01eafb78);
  return param_1;
}

int sub_00634470(void);
int sub_006326d0(...);
extern undefined4 g_026acc08;
// @baa 0x00943680
void sub_00943680(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acc08 == 0) {
    g_026acc08 = sub_006326d0(L"Core");
    sub_00634470();
  }
  sub_005e1960(g_026acc08,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00dac320
void sub_00dac320(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_02688440 == 0) {
    g_02688440 = sub_00588c40(L"Core");
    sub_0058a1b0();
  }
  sub_005d88c0(g_02688440,param_1,param_2,param_3);
  return;
}

// @baa 0x00eb2380
void sub_00eb2380(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbec == 0) {
    g_026acbec = sub_00631ee0(L"Core");
    sub_00636210();
  }
  sub_005e1960(g_026acbec,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f1a430
void sub_00f1a430(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d07c == 0) {
    g_0268d07c = sub_005b3970(L"Core");
    sub_0059c600();
  }
  sub_005e1960(g_0268d07c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f1a4f0
void sub_00f1a4f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbd4 == 0) {
    g_026acbd4 = sub_00631a00(L"Core");
    sub_00633360();
  }
  sub_005e1960(g_026acbd4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f9dd60
undefined4 UTexture2D::sub_00f9dd60(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 5) && (*param_1 != 8)) {
    return 0;
  }
  return 1;
}

// @baa 0x00f9dd80
bool UTexture2D::sub_00f9dd80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == 0;
}

// @baa 0x00f9dd90
undefined4 UTexture2D::sub_00f9dd90(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 1) && (param_1[5] != 0)) {
    return 1;
  }
  return 0;
}

struct C_00f9ddb0 { void sub_00f9ddb0(int a0); };

// @baa 0x00f9ddb0
void C_00f9ddb0::sub_00f9ddb0(int a0) { *(int*)((char*)this + 396) = a0; }

struct C_00f9ddc0 {
    undefined4 sub_00f9ddc0(int *);
};

// @baa 0x00f9ddc0
undefined4 C_00f9ddc0::sub_00f9ddc0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((param_1[0x1d] == 3) && (*param_1 == 3)) {
    *param_2 = param_1[100];
    return 1;
  }
  return 0;
}

struct C_00f9de60 {
    undefined4 sub_00f9de60(int *);
};

// @baa 0x00f9de60
undefined4 C_00f9de60::sub_00f9de60(int * param_2)
{
    int * param_1 = (int *)this;

  if ((param_1[0x1d] == 3) && (*param_1 == 6)) {
    *param_2 = param_1[100];
    param_2[1] = param_1[0x65];
    return 1;
  }
  return 0;
}

struct C_00f9de90 { char* sub_00f9de90(void); };

// @baa 0x00f9de90
char* C_00f9de90::sub_00f9de90(void) { return (char*)this + 2448; }

struct C_00f9dea0 { C_00f9dea0* sub_00f9dea0(void); };

// @baa 0x00f9dea0
C_00f9dea0* C_00f9dea0::sub_00f9dea0(void) { return this; }

struct C_00f9deb0 { char* sub_00f9deb0(void); };

// @baa 0x00f9deb0
char* C_00f9deb0::sub_00f9deb0(void) { return (char*)this + 4920; }

struct C_00f9dec0 { char* sub_00f9dec0(void); };

// @baa 0x00f9dec0
char* C_00f9dec0::sub_00f9dec0(void) { return (char*)this + 4980; }

struct C_00f9ded0 {
    void sub_00f9ded0(uint);
};

// @baa 0x00f9ded0
void C_00f9ded0::sub_00f9ded0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x998) = *(uint *)(param_1 + 0x998) | param_2;
  return;
}

// @baa 0x00f9dee0
char* UTexture2D::sub_00f9dee0(void) { return (char*)this + 180; }

// @baa 0x00f9def0
int UTexture2D::sub_00f9def0(void) { return *(int*)((char*)this + 192); }

// @baa 0x00f9df20
void UTexture2D::sub_00f9df20(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return;
}

// @baa 0x00f9df40
void UTexture2D::sub_00f9df40(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = 1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return;
}

struct C_view_00f9df90 {
    int sub_005684c0(int, int, int);
};

// @baa 0x00f9df90
int UTexture2D::sub_00f9df90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;
  ((C_view_00f9df90 *)(this))->sub_005684c0(param_2, param_3, param_4);
  *(undefined4 *)(param_1 + 0xc) = param_5;
  return param_1;
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00f9dfc0
void UTexture2D::sub_00f9dfc0(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10 + param_2 * 4) != 0xffff) {
    sub_006311e0("JumpTargets[Type]==MAXWORD",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\editor\\src\\UnScrCom.h"
                 ,0xdf,&g_01e3f3dc);
    *(undefined4 *)(param_1 + 0x10 + param_2 * 4) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x10 + param_2 * 4) = param_3;
  return;
}

struct C_00f9e050 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f9e050* sub_00f9e050(INT value);
};

// @baa 0x00f9e050
C_00f9e050* C_00f9e050::sub_00f9e050(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

// @baa 0x00f9e070
void UTexture2D::sub_00f9e070(void)
{
    int * param_1 = (int *)this;

  if (param_1[1] != 0) {
    if (*(int *)(*param_1 + 0x44) != param_1[1]) {
      sub_006311e0("Nest->StructModificationByteList == ByteLocation",
                   "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\editor\\src\\UnScrCom.h"
                   ,0x139,&g_01e3f3dc);
    }
    *(undefined4 *)(*param_1 + 0x44) = *(undefined4 *)(*(int *)(*param_1 + 0x44) + 4);
  }
  return;
}

// @baa 0x00f9e120
void UTexture2D::sub_00f9e120(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x34);
  return;
}

// @baa 0x00f9e1f0
void UTexture2D::sub_00f9e1f0(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x84);
  return;
}

// @baa 0x00f9e2b0
int UTexture2D::sub_00f9e2b0(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 100) + -1;
  if (0 < iVar1) {
    piVar2 = (int *)(iVar1 * 0x9ec + 0x74 + param_1);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -0x27b;
    } while (0 < iVar1);
  }
  return -1;
}

extern char g_0217579c[128];
// @baa 0x00f9e380
char *sub_00f9e380(void)
{
    return g_0217579c;
}

extern char g_021757a0[];
// @baa 0x00f9e390
int sub_00f9e390(void) { return (int)g_021757a0; }

struct C_00f9e3a0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f9e3a0(INT Index);
};

// @baa 0x00f9e3a0
UBOOL C_00f9e3a0::sub_00f9e3a0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f9e3c0 { int sub_00f9e3c0(void); };

// @baa 0x00f9e3c0
int C_00f9e3c0::sub_00f9e3c0(void) { return *(int*)((char*)this + 0); }

struct CCtr {
    int a;
    int b;
    CCtr* sub_00f9e3d0() { b++; return this; }
};

// @baa 0x00f9e3d0
void g_use(CCtr* p, int x) { if (x) p->sub_00f9e3d0(); }

struct C_00f9e3e0 { int sub_00f9e3e0(void); };

// @baa 0x00f9e3e0
int C_00f9e3e0::sub_00f9e3e0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e3f0 { int sub_00f9e3f0(void); };

// @baa 0x00f9e3f0
int C_00f9e3f0::sub_00f9e3f0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e400 { int sub_00f9e400(void); };

// @baa 0x00f9e400
int C_00f9e400::sub_00f9e400(void) { return *(int*)((char*)this + 4); }

struct C_00f9e410 { int sub_00f9e410(void); };

// @baa 0x00f9e410
int C_00f9e410::sub_00f9e410(void) { return *(int*)((char*)this + 4); }

struct C_00f9e420 { int sub_00f9e420(void); };

// @baa 0x00f9e420
int C_00f9e420::sub_00f9e420(void) { return *(int*)((char*)this + 4); }

struct C_00f9e430 { int sub_00f9e430(void); };

// @baa 0x00f9e430
int C_00f9e430::sub_00f9e430(void) { return *(int*)((char*)this + 4); }

struct C_00f9e440 { int sub_00f9e440(void); };

// @baa 0x00f9e440
int C_00f9e440::sub_00f9e440(void) { return *(int*)((char*)this + 4); }

struct C_00f9e450 { int sub_00f9e450(void); };

// @baa 0x00f9e450
int C_00f9e450::sub_00f9e450(void) { return *(int*)((char*)this + 4); }

struct C_00f9e460 { int sub_00f9e460(void); };

// @baa 0x00f9e460
int C_00f9e460::sub_00f9e460(void) { return *(int*)((char*)this + 4); }

struct C_00f9e470 { int sub_00f9e470(void); };

// @baa 0x00f9e470
int C_00f9e470::sub_00f9e470(void) { return *(int*)((char*)this + 4); }

struct C_00f9e480 { int sub_00f9e480(void); };

// @baa 0x00f9e480
int C_00f9e480::sub_00f9e480(void) { return *(int*)((char*)this + 4); }

struct C_00f9e490 { int sub_00f9e490(void); };

// @baa 0x00f9e490
int C_00f9e490::sub_00f9e490(void) { return *(int*)((char*)this + 4); }

struct C_00f9e4c0 { void sub_00f9e4c0(int a0); };

// @baa 0x00f9e4c0
void C_00f9e4c0::sub_00f9e4c0(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_00f9e4d0 { int sub_00f9e4d0(void); };

// @baa 0x00f9e4d0
int C_00f9e4d0::sub_00f9e4d0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e4e0 { int sub_00f9e4e0(void); };

// @baa 0x00f9e4e0
int C_00f9e4e0::sub_00f9e4e0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e4f0 { int sub_00f9e4f0(void); };

// @baa 0x00f9e4f0
int C_00f9e4f0::sub_00f9e4f0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e520 { int sub_00f9e520(void); };

// @baa 0x00f9e520
int C_00f9e520::sub_00f9e520(void) { return *(int*)((char*)this + 4); }

struct C_00f9e530 {
    int Unk0;
    int Unk4;
    int sub_00f9e530();
};

// @baa 0x00f9e530
int C_00f9e530::sub_00f9e530()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00f9e540 { int sub_00f9e540(void); };

// @baa 0x00f9e540
int C_00f9e540::sub_00f9e540(void) { return *(int*)((char*)this + 4); }

struct C_00f9e550 { int sub_00f9e550(void); };

// @baa 0x00f9e550
int C_00f9e550::sub_00f9e550(void) { return *(int*)((char*)this + 4); }

struct C_00f9e560 { int sub_00f9e560(void); };

// @baa 0x00f9e560
int C_00f9e560::sub_00f9e560(void) { return *(int*)((char*)this + 4); }

struct C_00f9e5c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f9e5c0(INT Index);
};

// @baa 0x00f9e5c0
UBOOL C_00f9e5c0::sub_00f9e5c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f9e600 { int a, b; C_00f9e600(int, int); };

// @baa 0x00f9e600
C_00f9e600::C_00f9e600(int x, int y) : a(x), b(y) {}

struct C_00f9e620 { int a, b; C_00f9e620(int, int); };

// @baa 0x00f9e620
C_00f9e620::C_00f9e620(int x, int y) : a(x), b(y) {}

struct C_00f9e640 { int a, b; C_00f9e640(int, int); };

// @baa 0x00f9e640
C_00f9e640::C_00f9e640(int x, int y) : a(x), b(y) {}

struct C_00f9e660 { int a, b; C_00f9e660(int, int); };

// @baa 0x00f9e660
C_00f9e660::C_00f9e660(int x, int y) : a(x), b(y) {}

struct C_00f9e680 { int a, b; C_00f9e680(int, int); };

// @baa 0x00f9e680
C_00f9e680::C_00f9e680(int x, int y) : a(x), b(y) {}

struct C_00f9e6a0 { int a, b; C_00f9e6a0(int, int); };

// @baa 0x00f9e6a0
C_00f9e6a0::C_00f9e6a0(int x, int y) : a(x), b(y) {}

struct C_00f9e6c0 { int a, b; C_00f9e6c0(int, int); };

// @baa 0x00f9e6c0
C_00f9e6c0::C_00f9e6c0(int x, int y) : a(x), b(y) {}

struct C_00f9e6e0 { int a, b; C_00f9e6e0(int, int); };

// @baa 0x00f9e6e0
C_00f9e6e0::C_00f9e6e0(int x, int y) : a(x), b(y) {}

struct C_00f9e700 { int a, b; C_00f9e700(int, int); };

// @baa 0x00f9e700
C_00f9e700::C_00f9e700(int x, int y) : a(x), b(y) {}

// @baa 0x00f9e720
bool sub_00f9e720(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e730 { int a, b; C_00f9e730(const C_00f9e730 &); };

// @baa 0x00f9e730
C_00f9e730::C_00f9e730(const C_00f9e730 &o) : a(o.a), b(o.b) {}

// @baa 0x00f9e750
int sub_00f9e750(int a0) { return *(int*)a0; }

struct C_00f9e760 {
    void sub_00f9e760(int *);
};

// @baa 0x00f9e760
void C_00f9e760::sub_00f9e760(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x00f9e770
int sub_00f9e770(int a0) { return *(int*)a0; }

struct C_00f9e780 {
    void sub_00f9e780(int *);
};

// @baa 0x00f9e780
void C_00f9e780::sub_00f9e780(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00f9e790
int sub_00f9e790(int a0) { return *(int*)a0; }

// @baa 0x00f9e7a0
bool sub_00f9e7a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e7b0 {
    void sub_00f9e7b0(undefined4 *);
};

// @baa 0x00f9e7b0
void C_00f9e7b0::sub_00f9e7b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f9e7d0
int sub_00f9e7d0(int a0) { return *(int*)a0; }

// @baa 0x00f9e7e0
bool sub_00f9e7e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e7f0 {
    void sub_00f9e7f0(undefined4 *);
};

// @baa 0x00f9e7f0
void C_00f9e7f0::sub_00f9e7f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f9e810
int sub_00f9e810(int a0) { return *(int*)a0; }

// @baa 0x00f9e820
bool sub_00f9e820(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e830 {
    void sub_00f9e830(undefined4 *);
};

// @baa 0x00f9e830
void C_00f9e830::sub_00f9e830(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f9e850
int sub_00f9e850(int a0) { return *(int*)a0; }

// @baa 0x00f9e860
bool sub_00f9e860(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e870 {
    void sub_00f9e870(undefined4 *);
};

// @baa 0x00f9e870
void C_00f9e870::sub_00f9e870(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f9e890
int sub_00f9e890(int a0) { return *(int*)a0; }

// @baa 0x00f9e8a0
bool sub_00f9e8a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e8b0 { int a, b; C_00f9e8b0(const C_00f9e8b0 &); };

// @baa 0x00f9e8b0
C_00f9e8b0::C_00f9e8b0(const C_00f9e8b0 &o) : a(o.a), b(o.b) {}

// @baa 0x00f9e8f0
int sub_00f9e8f0(int a0) { return *(int*)a0; }

// @baa 0x00f9e900
bool sub_00f9e900(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f9e910 { int a, b; C_00f9e910(const C_00f9e910 &); };

// @baa 0x00f9e910
C_00f9e910::C_00f9e910(const C_00f9e910 &o) : a(o.a), b(o.b) {}

// @baa 0x00f9e950
int sub_00f9e950(int a0) { return *(int*)a0; }

struct C_00f9e960 { int a, b; C_00f9e960(const C_00f9e960 &); };

// @baa 0x00f9e960
C_00f9e960::C_00f9e960(const C_00f9e960 &o) : a(o.a), b(o.b) {}

struct C_00f9e980 { int sub_00f9e980(void); };

// @baa 0x00f9e980
int C_00f9e980::sub_00f9e980(void) { return *(int*)((char*)this + 4); }

struct C_00f9e9c0 { int sub_00f9e9c0(void); };

// @baa 0x00f9e9c0
int C_00f9e9c0::sub_00f9e9c0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e9d0 { int sub_00f9e9d0(void); };

// @baa 0x00f9e9d0
int C_00f9e9d0::sub_00f9e9d0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e9e0 { int sub_00f9e9e0(void); };

// @baa 0x00f9e9e0
int C_00f9e9e0::sub_00f9e9e0(void) { return *(int*)((char*)this + 4); }

struct C_00f9e9f0 { int sub_00f9e9f0(void); };

// @baa 0x00f9e9f0
int C_00f9e9f0::sub_00f9e9f0(void) { return *(int*)((char*)this + 4); }

// @baa 0x00f9ea00
bool sub_00f9ea00(int param_1, int param_2)
{
  return param_1 == param_2;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00f9ea80 {
    void sub_00f9ea80(int, int, int, int);
};

int sub_00f9e0b0(...);
// @baa 0x00f9ea80
void C_00f9ea80::sub_00f9ea80(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;
  sub_00f9e0b0(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_00f9eaa0 {
    void sub_00f9eaa0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00f9eaa0
void C_00f9eaa0::sub_00f9eaa0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;
  sub_00f9e0b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00f9ead0 {
    void sub_00f9ead0(undefined4, undefined4, undefined4);
};

// @baa 0x00f9ead0
void C_00f9ead0::sub_00f9ead0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f9e0b0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00f9eb00 {
    void sub_00f9eb00(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00f9eb00
void C_00f9eb00::sub_00f9eb00(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;
  sub_00f9e0b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00f9eb30 { int a, b; C_00f9eb30(const C_00f9eb30 &); };

// @baa 0x00f9eb30
C_00f9eb30::C_00f9eb30(const C_00f9eb30 &o) : a(o.a), b(o.b) {}

struct C_00f9eb50 { int a, b; C_00f9eb50(const C_00f9eb50 &); };

// @baa 0x00f9eb50
C_00f9eb50::C_00f9eb50(const C_00f9eb50 &o) : a(o.a), b(o.b) {}

struct C_00f9eb70 { int a, b; C_00f9eb70(const C_00f9eb70 &); };

// @baa 0x00f9eb70
C_00f9eb70::C_00f9eb70(const C_00f9eb70 &o) : a(o.a), b(o.b) {}

struct C_00f9eb90 { int a, b; C_00f9eb90(const C_00f9eb90 &); };

// @baa 0x00f9eb90
C_00f9eb90::C_00f9eb90(const C_00f9eb90 &o) : a(o.a), b(o.b) {}

// @baa 0x00f9ebb0
void sub_00f9ebb0(undefined2 * param_1, undefined2 * param_2)
{
  undefined2 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00f9ebd0
int sub_00f9ebd0(int a0) { return a0; }

// @baa 0x00f9ec10
void sub_00f9ec10(void) {  }

// @baa 0x00f9ec20
void sub_00f9ec20(void) {  }

// @baa 0x00f9ec30
float10 sub_00f9ec30(double param_1)
{
  return (float10)param_1;
}

struct C_00f9ec60 { char* sub_00f9ec60(void); };

// @baa 0x00f9ec60
char* C_00f9ec60::sub_00f9ec60(void) { return (char*)this + 148; }

// @baa 0x00f9ec70
void sub_00f9ec70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268844c == 0) {
    g_0268844c = sub_00588270(L"Core");
    sub_0058a930();
  }
  sub_005e1960(g_0268844c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f9ecd0
void sub_00f9ecd0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_02688444 == 0) {
    g_02688444 = sub_00588d00(L"Core");
    sub_005892e0();
  }
  sub_005e1960(g_02688444,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f9ed30
void sub_00f9ed30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_02688450 == 0) {
    g_02688450 = sub_00588340(L"Core");
    sub_0058aa40();
  }
  sub_005e1960(g_02688450,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_00f9ed90 { int sub_00f9ed90(void); };

// @baa 0x00f9ed90
int C_00f9ed90::sub_00f9ed90(void) { return *(int*)((char*)this + 0); }

struct C_00f9eda0 {
    int Unk0;
    int Unk4;
    int sub_00f9eda0();
};

// @baa 0x00f9eda0
int C_00f9eda0::sub_00f9eda0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00f9edb0 { int sub_00f9edb0(void); };

// @baa 0x00f9edb0
int C_00f9edb0::sub_00f9edb0(void) { return *(int*)((char*)this + 4); }

struct C_00f9edc0 { int sub_00f9edc0(void); };

// @baa 0x00f9edc0
int C_00f9edc0::sub_00f9edc0(void) { return *(int*)((char*)this + 4); }

struct C_00f9ee10 {
    int Unk0;
    int Unk4;
    int sub_00f9ee10();
};

// @baa 0x00f9ee10
int C_00f9ee10::sub_00f9ee10()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00f9ee20 { int sub_00f9ee20(void); };

// @baa 0x00f9ee20
int C_00f9ee20::sub_00f9ee20(void) { return *(int*)((char*)this + 4); }

struct C_00f9ee30 { int sub_00f9ee30(void); };

// @baa 0x00f9ee30
int C_00f9ee30::sub_00f9ee30(void) { return *(int*)((char*)this + 4); }

struct C_00f9ee40 { int sub_00f9ee40(void); };

// @baa 0x00f9ee40
int C_00f9ee40::sub_00f9ee40(void) { return *(int*)((char*)this + 0); }

struct C_00f9eeb0 { int sub_00f9eeb0(void); };

// @baa 0x00f9eeb0
int C_00f9eeb0::sub_00f9eeb0(void) { return *(int*)((char*)this + 0); }

struct C_00f9eec0 { int sub_00f9eec0(void); };

// @baa 0x00f9eec0
int C_00f9eec0::sub_00f9eec0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00f9eed0
int sub_00f9eed0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 2) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00f9eef0
int sub_00f9eef0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xdc) & 8) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00f9ef10
int sub_00f9ef10(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x40000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00f9ef30
void sub_00f9ef30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbf0 == 0) {
    g_026acbf0 = sub_006321f0(L"Core");
    sub_00636360();
  }
  sub_005e1960(g_026acbf0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_006322b0(...);
int sub_00633b40(void);
extern undefined4 g_026acbf4;
// @baa 0x00f9ef90
void sub_00f9ef90(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbf4 == 0) {
    g_026acbf4 = sub_006322b0(L"Core");
    sub_00633b40();
  }
  sub_005e1960(g_026acbf4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00632610(...);
int sub_006342b0(void);
extern undefined4 g_026acc04;
// @baa 0x00f9eff0
void sub_00f9eff0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acc04 == 0) {
    g_026acc04 = sub_00632610(L"Core");
    sub_006342b0();
  }
  sub_005e1960(g_026acc04,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00631b80(...);
int sub_00633600(void);
extern undefined4 g_026acbdc;
// @baa 0x00f9f050
void sub_00f9f050(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026acbdc == 0) {
    g_026acbdc = sub_00631b80(L"Core");
    sub_00633600();
  }
  sub_005e1960(g_026acbdc,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_00f9fec0 {
    undefined4 sub_00f9fec0(int *);
};

// @baa 0x00f9fec0
undefined4 C_00f9fec0::sub_00f9fec0(int * param_2)
{
    int param_1 = (int)this;

  if (((*(int *)(param_1 + 0x74) == 1) && (*(int *)(param_1 + 0x78) == *param_2)) &&
     (*(int *)(param_1 + 0x7c) == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00fa0040 {
    undefined4 sub_00fa0040(undefined4 *);
};

int sub_00f9fde0(void);
// @baa 0x00fa0040
undefined4 C_00fa0040::sub_00fa0040(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x74) == 3) {
    iVar1 = sub_00f9fde0();
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(param_1 + 400);
      param_2[1] = *(undefined4 *)(param_1 + 0x194);
      param_2[2] = *(undefined4 *)(param_1 + 0x198);
      return 1;
    }
  }
  return 0;
}

struct C_00fa0080 {
    undefined4 sub_00fa0080(undefined4 *);
};

int sub_00f9fe30(void);
// @baa 0x00fa0080
undefined4 C_00fa0080::sub_00fa0080(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x74) == 3) {
    iVar1 = sub_00f9fe30();
    if (iVar1 != 0) {
      *param_2 = *(undefined4 *)(param_1 + 400);
      param_2[1] = *(undefined4 *)(param_1 + 0x194);
      param_2[2] = *(undefined4 *)(param_1 + 0x198);
      return 1;
    }
  }
  return 0;
}

extern char g_01e72a60[];
struct C_00fa00c0 { void sub_00fa00c0(void); };

// @baa 0x00fa00c0
void C_00fa00c0::sub_00fa00c0(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00fa00d0 {
    void sub_00fa00d0(undefined4, undefined4);
};

// @baa 0x00fa00d0
void C_00fa00d0::sub_00fa00d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f9e0b0(param_1,param_2,param_3);
  return;
}

int __stdcall sub_00fd8be0(int, int, int);
// @baa 0x00fa03e0
undefined4 UTexture2D::sub_00fa03e0(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_00fd8be0(param_2,0,param_3);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x74) == 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x84);
  }
  return 0;
}

// @baa 0x00fa0420
void UTexture2D::sub_00fa0420(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x28);
  param_2[2] = *(undefined4 *)(param_1 + 0x2c);
  param_2[3] = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4c);
  return;
}

extern undefined4 g_0216b688;
// @baa 0x00fa0450
undefined4 UTexture2D::sub_00fa0450(int param_2)
{
    int param_1 = (int)this;

  if (param_2 == 0) {
    sub_006311e0("CheckClass",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnScrCom.cpp"
                 ,0x1699,&g_0216b688);
  }
  if (((*(int *)(*(int *)(param_1 + 0x14) + 0x1c) != *(int *)(param_2 + 0x1c)) &&
      ((*(uint *)(param_2 + 0xd8) & 0x10) == 0)) && ((*(uint *)(param_2 + 0xd8) & 0x10000000) == 0))
  {
    return 0;
  }
  return 1;
}

struct C_00fa0590 { int a, b, c; C_00fa0590(); };

// @baa 0x00fa0590
C_00fa0590::C_00fa0590() : a(0), b(0), c(0) {}

struct C_00fa05a0 { int a, b, c; C_00fa05a0(); };

// @baa 0x00fa05a0
C_00fa05a0::C_00fa05a0() : a(0), b(0), c(0) {}

struct C_00fa05b0 { int a, b, c; C_00fa05b0(); };

// @baa 0x00fa05b0
C_00fa05b0::C_00fa05b0() : a(0), b(0), c(0) {}

struct C_00fa05c0 { int a, b, c; C_00fa05c0(); };

// @baa 0x00fa05c0
C_00fa05c0::C_00fa05c0() : a(0), b(0), c(0) {}

struct C_00fa05d0 { int a, b, c; C_00fa05d0(); };

// @baa 0x00fa05d0
C_00fa05d0::C_00fa05d0() : a(0), b(0), c(0) {}

struct C_00fa05e0 { int a, b, c; C_00fa05e0(); };

// @baa 0x00fa05e0
C_00fa05e0::C_00fa05e0() : a(0), b(0), c(0) {}

struct C_00fa05f0 { int a, b, c; C_00fa05f0(); };

// @baa 0x00fa05f0
C_00fa05f0::C_00fa05f0() : a(0), b(0), c(0) {}

struct C_00fa0600 { int a, b, c; C_00fa0600(); };

// @baa 0x00fa0600
C_00fa0600::C_00fa0600() : a(0), b(0), c(0) {}

struct C_00fa0610 { int a, b, c; C_00fa0610(); };

// @baa 0x00fa0610
C_00fa0610::C_00fa0610() : a(0), b(0), c(0) {}

struct C_00fa0620 { int a, b, c; C_00fa0620(); };

// @baa 0x00fa0620
C_00fa0620::C_00fa0620() : a(0), b(0), c(0) {}

struct C_00fa0630 { int a, b, c; C_00fa0630(); };

// @baa 0x00fa0630
C_00fa0630::C_00fa0630() : a(0), b(0), c(0) {}

struct C_00fa0640 { int a, b, c; C_00fa0640(); };

// @baa 0x00fa0640
C_00fa0640::C_00fa0640() : a(0), b(0), c(0) {}

struct C_00fa07e0 { int a, b, c; C_00fa07e0(); };

// @baa 0x00fa07e0
C_00fa07e0::C_00fa07e0() : a(0), b(0), c(0) {}

struct C_00fa07f0 { int a, b, c; C_00fa07f0(); };

// @baa 0x00fa07f0
C_00fa07f0::C_00fa07f0() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_00fa0800{
void sub_00fa0800(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
// @baa 0x00fa0800
void C_00fa0800::sub_00fa0800(int param_2,int param_3)
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

struct C_00fa0920 { int a, b, c; C_00fa0920(); };

// @baa 0x00fa0920
C_00fa0920::C_00fa0920() : a(0), b(0), c(0) {}

struct C_00fa0930 { int a, b, c; C_00fa0930(); };

// @baa 0x00fa0930
C_00fa0930::C_00fa0930() : a(0), b(0), c(0) {}

struct C_00fa0940 { int a, b, c; C_00fa0940(); };

// @baa 0x00fa0940
C_00fa0940::C_00fa0940() : a(0), b(0), c(0) {}

struct C_00fa0950 { int a, b, c; C_00fa0950(); };

// @baa 0x00fa0950
C_00fa0950::C_00fa0950() : a(0), b(0), c(0) {}

struct C_00fa0960{
void sub_00fa0960(int,int);
};

// @baa 0x00fa0960
void C_00fa0960::sub_00fa0960(int param_2,int param_3)
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

struct C_00fa0a80 { int sub_00fa0a80(void); };

// @baa 0x00fa0a80
int C_00fa0a80::sub_00fa0a80(void) { return *(int*)((char*)this + 0); }

struct C_00fa0b80 {
    int sub_00fa0b80(int);
};

// @baa 0x00fa0b80
int C_00fa0b80::sub_00fa0b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_00fa0c80 { int sub_00fa0c80(void); };

// @baa 0x00fa0c80
int C_00fa0c80::sub_00fa0c80(void) { return *(int*)((char*)this + 0); }

struct C_00fa0d00 { int sub_00fa0d00(void); };

// @baa 0x00fa0d00
int C_00fa0d00::sub_00fa0d00(void) { return *(int*)((char*)this + 0); }

struct C_00fa0d80 { int sub_00fa0d80(void); };

// @baa 0x00fa0d80
int C_00fa0d80::sub_00fa0d80(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e00 { int sub_00fa0e00(void); };

// @baa 0x00fa0e00
int C_00fa0e00::sub_00fa0e00(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e10 { int sub_00fa0e10(void); };

// @baa 0x00fa0e10
int C_00fa0e10::sub_00fa0e10(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e20 { int sub_00fa0e20(void); };

// @baa 0x00fa0e20
int C_00fa0e20::sub_00fa0e20(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e30 { int sub_00fa0e30(void); };

// @baa 0x00fa0e30
int C_00fa0e30::sub_00fa0e30(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e40 { int sub_00fa0e40(void); };

// @baa 0x00fa0e40
int C_00fa0e40::sub_00fa0e40(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e50 { int sub_00fa0e50(void); };

// @baa 0x00fa0e50
int C_00fa0e50::sub_00fa0e50(void) { return *(int*)((char*)this + 0); }

struct C_00fa0e60 { int sub_00fa0e60(void); };

// @baa 0x00fa0e60
int C_00fa0e60::sub_00fa0e60(void) { return *(int*)((char*)this + 0); }

struct C_00fa0ee0 {
    int sub_00fa0ee0(int);
};

// @baa 0x00fa0ee0
int C_00fa0ee0::sub_00fa0ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00fa0f40 { int sub_00fa0f40(void); };

// @baa 0x00fa0f40
int C_00fa0f40::sub_00fa0f40(void) { return *(int*)((char*)this + 0); }

struct C_00fa0fc0 { int sub_00fa0fc0(void); };

// @baa 0x00fa0fc0
int C_00fa0fc0::sub_00fa0fc0(void) { return *(int*)((char*)this + 0); }

struct C_00fa1050 { int sub_00fa1050(void); };

// @baa 0x00fa1050
int C_00fa1050::sub_00fa1050(void) { return *(int*)((char*)this + 0); }

struct C_00fa1060 {
    int sub_00fa1060(int);
};

// @baa 0x00fa1060
int C_00fa1060::sub_00fa1060(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa1070 { int sub_00fa1070(void); };

// @baa 0x00fa1070
int C_00fa1070::sub_00fa1070(void) { return *(int*)((char*)this + 0); }

struct C_00fa10e0 { int a, b, c; C_00fa10e0(); };

// @baa 0x00fa10e0
C_00fa10e0::C_00fa10e0() : a(0), b(0), c(0) {}

struct C_00fa10f0 {
    int sub_00fa10f0();
};

// @baa 0x00fa10f0
int C_00fa10f0::sub_00fa10f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1100 {
    int sub_00fa1100();
};

// @baa 0x00fa1100
int C_00fa1100::sub_00fa1100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1110 {
    int sub_00fa1110();
};

// @baa 0x00fa1110
int C_00fa1110::sub_00fa1110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1120 {
    int sub_00fa1120();
};

// @baa 0x00fa1120
int C_00fa1120::sub_00fa1120(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1130 {
    int sub_00fa1130();
};

// @baa 0x00fa1130
int C_00fa1130::sub_00fa1130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1140 {
    int sub_00fa1140();
};

// @baa 0x00fa1140
int C_00fa1140::sub_00fa1140(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1150 {
    int sub_00fa1150();
};

// @baa 0x00fa1150
int C_00fa1150::sub_00fa1150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1160 {
    int sub_00fa1160();
};

// @baa 0x00fa1160
int C_00fa1160::sub_00fa1160(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1170 {
    int sub_00fa1170();
};

// @baa 0x00fa1170
int C_00fa1170::sub_00fa1170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa11a0 { int sub_00fa11a0(void); };

// @baa 0x00fa11a0
int C_00fa11a0::sub_00fa11a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa11b0 { int sub_00fa11b0(void); };

// @baa 0x00fa11b0
int C_00fa11b0::sub_00fa11b0(void) { return *(int*)((char*)this + 0); }

struct C_00fa1230 { int sub_00fa1230(void); };

// @baa 0x00fa1230
int C_00fa1230::sub_00fa1230(void) { return *(int*)((char*)this + 0); }

struct C_00fa1240 { int sub_00fa1240(void); };

// @baa 0x00fa1240
int C_00fa1240::sub_00fa1240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1250 { int sub_00fa1250(void); };

// @baa 0x00fa1250
int C_00fa1250::sub_00fa1250(void) { return *(int*)((char*)this + 0); }

struct C_00fa1260 { int sub_00fa1260(void); };

// @baa 0x00fa1260
int C_00fa1260::sub_00fa1260(void) { return *(int*)((char*)this + 0); }

struct C_00fa1270 { int sub_00fa1270(void); };

// @baa 0x00fa1270
int C_00fa1270::sub_00fa1270(void) { return *(int*)((char*)this + 0); }

struct C_00fa1280 { int sub_00fa1280(void); };

// @baa 0x00fa1280
int C_00fa1280::sub_00fa1280(void) { return *(int*)((char*)this + 0); }

struct C_00fa1290 { int sub_00fa1290(void); };

// @baa 0x00fa1290
int C_00fa1290::sub_00fa1290(void) { return *(int*)((char*)this + 0); }

struct C_00fa12a0 { int sub_00fa12a0(void); };

// @baa 0x00fa12a0
int C_00fa12a0::sub_00fa12a0(void) { return *(int*)((char*)this + 0); }

struct C_00fa12b0 { int sub_00fa12b0(void); };

// @baa 0x00fa12b0
int C_00fa12b0::sub_00fa12b0(void) { return *(int*)((char*)this + 0); }

struct C_00fa12c0 { int sub_00fa12c0(void); };

// @baa 0x00fa12c0
int C_00fa12c0::sub_00fa12c0(void) { return *(int*)((char*)this + 0); }

struct C_00fa12d0 { int sub_00fa12d0(void); };

// @baa 0x00fa12d0
int C_00fa12d0::sub_00fa12d0(void) { return *(int*)((char*)this + 0); }

struct C_00fa12e0 { int sub_00fa12e0(void); };

// @baa 0x00fa12e0
int C_00fa12e0::sub_00fa12e0(void) { return *(int*)((char*)this + 0); }

struct C_00fa12f0 { int sub_00fa12f0(void); };

// @baa 0x00fa12f0
int C_00fa12f0::sub_00fa12f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1300 { int sub_00fa1300(void); };

// @baa 0x00fa1300
int C_00fa1300::sub_00fa1300(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1310 { int sub_00fa1310(void); };

// @baa 0x00fa1310
int C_00fa1310::sub_00fa1310(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1320 { int sub_00fa1320(void); };

// @baa 0x00fa1320
int C_00fa1320::sub_00fa1320(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1330 { int sub_00fa1330(void); };

// @baa 0x00fa1330
int C_00fa1330::sub_00fa1330(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1360 { int sub_00fa1360(void); };

// @baa 0x00fa1360
int C_00fa1360::sub_00fa1360(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1390 { int sub_00fa1390(void); };

// @baa 0x00fa1390
int C_00fa1390::sub_00fa1390(void) { return *(int*)((char*)this + 0); }

struct C_00fa13a0 { int sub_00fa13a0(void); };

// @baa 0x00fa13a0
int C_00fa13a0::sub_00fa13a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa13d0 { int sub_00fa13d0(void); };

// @baa 0x00fa13d0
int C_00fa13d0::sub_00fa13d0(void) { return *(int*)((char*)this + 0); }

struct C_00fa13e0 { int sub_00fa13e0(void); };

// @baa 0x00fa13e0
int C_00fa13e0::sub_00fa13e0(void) { return *(int*)((char*)this + 0); }

struct C_00fa1460 {
    int sub_00fa1460();
};

// @baa 0x00fa1460
int C_00fa1460::sub_00fa1460(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00fa1470 { int sub_00fa1470(void); };

// @baa 0x00fa1470
int C_00fa1470::sub_00fa1470(void) { return *(int*)((char*)this + 20); }

struct C_00fa1480 {
    void sub_00fa1480();
};

// @baa 0x00fa1480
void C_00fa1480::sub_00fa1480(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x9a0,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00fa1530 { int sub_00fa1530(void); };

// @baa 0x00fa1530
int C_00fa1530::sub_00fa1530(void) { return *(int*)((char*)this + 20); }

struct C_00fa1640 { int sub_00fa1640(void); };

// @baa 0x00fa1640
int C_00fa1640::sub_00fa1640(void) { return *(int*)((char*)this + 0); }

struct C_00fa16d0 {
    int sub_00fa16d0(int);
};

// @baa 0x00fa16d0
int C_00fa16d0::sub_00fa16d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa16e0 {
    int sub_00fa16e0(int);
};

// @baa 0x00fa16e0
int C_00fa16e0::sub_00fa16e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa16f0 { int sub_00fa16f0(void); };

// @baa 0x00fa16f0
int C_00fa16f0::sub_00fa16f0(void) { return *(int*)((char*)this + 20); }

struct C_00fa1700 { int sub_00fa1700(void); };

// @baa 0x00fa1700
int C_00fa1700::sub_00fa1700(void) { return *(int*)((char*)this + 20); }

struct C_00fa1710 {
    int sub_00fa1710(int);
};

// @baa 0x00fa1710
int C_00fa1710::sub_00fa1710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa1720 {
    int sub_00fa1720(int);
};

// @baa 0x00fa1720
int C_00fa1720::sub_00fa1720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa1730 {
    int sub_00fa1730(int);
};

// @baa 0x00fa1730
int C_00fa1730::sub_00fa1730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00fa1740 { int sub_00fa1740(void); };

// @baa 0x00fa1740
int C_00fa1740::sub_00fa1740(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1750 { int sub_00fa1750(void); };

// @baa 0x00fa1750
int C_00fa1750::sub_00fa1750(void) { return *(int*)((char*)this + 0); }

struct C_00fa1760 { int sub_00fa1760(void); };

// @baa 0x00fa1760
int C_00fa1760::sub_00fa1760(void) { return *(int*)((char*)this + 0); }

struct C_00fa1770 { int sub_00fa1770(void); };

// @baa 0x00fa1770
int C_00fa1770::sub_00fa1770(void) { return *(int*)((char*)this + 0); }

struct C_00fa1780 { int sub_00fa1780(void); };

// @baa 0x00fa1780
int C_00fa1780::sub_00fa1780(void) { return *(int*)((char*)this + 0); }

struct C_00fa1790 { int sub_00fa1790(void); };

// @baa 0x00fa1790
int C_00fa1790::sub_00fa1790(void) { return *(int*)((char*)this + 0); }

struct C_00fa17a0 { int sub_00fa17a0(void); };

// @baa 0x00fa17a0
int C_00fa17a0::sub_00fa17a0(void) { return *(int*)((char*)this + 0); }

struct C_00fa17b0 { int sub_00fa17b0(void); };

// @baa 0x00fa17b0
int C_00fa17b0::sub_00fa17b0(void) { return *(int*)((char*)this + 0); }

struct C_00fa17c0 {
    int sub_00fa17c0(int);
};

// @baa 0x00fa17c0
int C_00fa17c0::sub_00fa17c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa17d0 {
    int sub_00fa17d0(int);
};

// @baa 0x00fa17d0
int C_00fa17d0::sub_00fa17d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00fa17e0 { int sub_00fa17e0(void); };

// @baa 0x00fa17e0
int C_00fa17e0::sub_00fa17e0(void) { return *(int*)((char*)this + 20); }

struct C_00fa17f0 { int sub_00fa17f0(void); };

// @baa 0x00fa17f0
int C_00fa17f0::sub_00fa17f0(void) { return *(int*)((char*)this + 20); }

struct C_00fa1800 { int sub_00fa1800(void); };

// @baa 0x00fa1800
int C_00fa1800::sub_00fa1800(void) { return *(int*)((char*)this + 20); }

struct C_00fa1810 { int sub_00fa1810(void); };

// @baa 0x00fa1810
int C_00fa1810::sub_00fa1810(void) { return *(int*)((char*)this + 20); }

struct C_00fa1820 { int sub_00fa1820(void); };

// @baa 0x00fa1820
int C_00fa1820::sub_00fa1820(void) { return *(int*)((char*)this + 20); }

struct C_00fa1830 { int sub_00fa1830(void); };

// @baa 0x00fa1830
int C_00fa1830::sub_00fa1830(void) { return *(int*)((char*)this + 20); }

struct C_00fa1840 { int sub_00fa1840(void); };

// @baa 0x00fa1840
int C_00fa1840::sub_00fa1840(void) { return *(int*)((char*)this + 20); }

struct C_00fa1850 { int sub_00fa1850(void); };

// @baa 0x00fa1850
int C_00fa1850::sub_00fa1850(void) { return *(int*)((char*)this + 20); }

struct C_00fa1860 { int sub_00fa1860(void); };

// @baa 0x00fa1860
int C_00fa1860::sub_00fa1860(void) { return *(int*)((char*)this + 20); }

struct C_00fa1870 { int sub_00fa1870(void); };

// @baa 0x00fa1870
int C_00fa1870::sub_00fa1870(void) { return *(int*)((char*)this + 20); }

struct C_00fa1880 { int sub_00fa1880(void); };

// @baa 0x00fa1880
int C_00fa1880::sub_00fa1880(void) { return *(int*)((char*)this + 20); }

struct C_00fa1890 { int sub_00fa1890(void); };

// @baa 0x00fa1890
int C_00fa1890::sub_00fa1890(void) { return *(int*)((char*)this + 20); }

struct C_00fa18a0 {
    int sub_00fa18a0(int);
};

// @baa 0x00fa18a0
int C_00fa18a0::sub_00fa18a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00fa18c0 { int a, b, c; C_00fa18c0(); };

// @baa 0x00fa18c0
C_00fa18c0::C_00fa18c0() : a(0), b(0), c(0) {}

struct C_00fa18d0 { int sub_00fa18d0(void); };

// @baa 0x00fa18d0
int C_00fa18d0::sub_00fa18d0(void) { return *(int*)((char*)this + 0); }

struct C_00fa18e0 { int sub_00fa18e0(void); };

// @baa 0x00fa18e0
int C_00fa18e0::sub_00fa18e0(void) { return *(int*)((char*)this + 0); }

struct C_00fa18f0 { int a, b, c; C_00fa18f0(); };

// @baa 0x00fa18f0
C_00fa18f0::C_00fa18f0() : a(0), b(0), c(0) {}

struct C_00fa1900 { int sub_00fa1900(void); };

// @baa 0x00fa1900
int C_00fa1900::sub_00fa1900(void) { return *(int*)((char*)this + 0); }

struct C_00fa1910 { int sub_00fa1910(void); };

// @baa 0x00fa1910
int C_00fa1910::sub_00fa1910(void) { return *(int*)((char*)this + 0); }

struct C_00fa1920 { int a, b, c; C_00fa1920(); };

// @baa 0x00fa1920
C_00fa1920::C_00fa1920() : a(0), b(0), c(0) {}

struct C_00fa1930 { int sub_00fa1930(void); };

// @baa 0x00fa1930
int C_00fa1930::sub_00fa1930(void) { return *(int*)((char*)this + 0); }

struct C_00fa1940 { int sub_00fa1940(void); };

// @baa 0x00fa1940
int C_00fa1940::sub_00fa1940(void) { return *(int*)((char*)this + 0); }

struct C_00fa1950 { int sub_00fa1950(void); };

// @baa 0x00fa1950
int C_00fa1950::sub_00fa1950(void) { return *(int*)((char*)this + 0); }

struct C_00fa1960 { int sub_00fa1960(void); };

// @baa 0x00fa1960
int C_00fa1960::sub_00fa1960(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00fa1970 { int sub_00fa1970(void); };

// @baa 0x00fa1970
int C_00fa1970::sub_00fa1970(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00fa19e0
void sub_00fa19e0(undefined2 * param_1, undefined2 * param_2)
{
  undefined2 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

int sub_009441d0(void);
int sub_0097fe70(...);
extern undefined4 g_026b5ef0;
// @baa 0x00fa1a00
void sub_00fa1a00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5ef0 == 0) {
    g_026b5ef0 = sub_0097fe70(L"Engine");
    sub_009441d0();
  }
  sub_005d88c0(g_026b5ef0,param_1,param_2,param_3);
  return;
}

int sub_005d8a20(...);
// @baa 0x00fa1a70
void sub_00fa1a70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_02688440 == 0) {
    g_02688440 = sub_00588c40(L"Core");
    sub_0058a1b0();
  }
  sub_005d8a20(g_02688440,param_1,param_2,param_3);
  return;
}

int sub_0062daa0(void);
int sub_00631830(...);
extern undefined4 g_026acbb4;
// @baa 0x00fa1ab0
void sub_00fa1ab0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026acbb4 == 0) {
    g_026acbb4 = sub_00631830(L"Core");
    sub_0062daa0();
  }
  sub_005d88c0(g_026acbb4,param_1,param_2,param_3);
  return;
}

struct C_00fa1af0 {
    void sub_00fa1af0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fa1af0
void C_00fa1af0::sub_00fa1af0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f9e0b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fa1b30 {
    void sub_00fa1b30(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fa1b30
void C_00fa1b30::sub_00fa1b30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00f9e0b0(param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00fa1b50
int sub_00fa1b50(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x80000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

int sub_00588b80(...);
int sub_00589090(void);
extern undefined4 g_0268843c;
// @baa 0x00fa1b70
void sub_00fa1b70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_0268843c == 0) {
    g_0268843c = sub_00588b80(L"Core");
    sub_00589090();
  }
  sub_005d88c0(g_0268843c,param_1,param_2,param_3);
  return;
}

// @baa 0x00fa1bb0
int sub_00fa1bb0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x8000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00fa1bd0
int sub_00fa1bd0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_0268844c == 0) {
      g_0268844c = sub_00588270(L"Core");
      sub_0058a930();
    }
    if (iVar1 == g_0268844c) {
      return param_1;
    }
  }
  return 0;
}

// @baa 0x00fa1c10
int sub_00fa1c10(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x40000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

struct C_00fa1c30 {
    void sub_00fa1c30(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fa1c30
void C_00fa1c30::sub_00fa1c30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f9e0b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00fa1c60 {
    void sub_00fa1c60(undefined4, undefined4, undefined4);
};

// @baa 0x00fa1c60
void C_00fa1c60::sub_00fa1c60(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f9e0b0(param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x00fa1c80
void sub_00fa1c80(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00fa1ca0
void sub_00fa1ca0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00fa1cc0
void sub_00fa1cc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00fa1ce0
void sub_00fa1ce0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct S_00fa1d70 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00fa1d70(INT Index) const;
};

// @baa 0x00fa1d70
const DWORD* S_00fa1d70::sub_00fa1d70(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[24]; };

struct S_00fa1dc0 {
    TArray<E> Items; // 0x00
    const E* sub_00fa1dc0(INT Index) const;
};

// @baa 0x00fa1dc0
const E* S_00fa1dc0::sub_00fa1dc0(INT Index) const
{
    return &Items(Index);
}

extern "C" void sub_00f9edd0();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_00fa2210();
};

// @baa 0x00fa2210
void CNode::sub_00fa2210()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00f9edd0();
}

extern "C" void sub_00f9ee50();
struct CNode_00fa2250 {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_00fa2250();
};

// @baa 0x00fa2250
void CNode_00fa2250::sub_00fa2250()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_00f9ee50();
}

struct C_00fa2260 {
    void sub_00fa2260(int *);
};

// @baa 0x00fa2260
void C_00fa2260::sub_00fa2260(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x10;
  param_2[1] = 0;
  return;
}

struct S_00fa2280 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00fa2280(INT Index) const;
};

// @baa 0x00fa2280
const DWORD* S_00fa2280::sub_00fa2280(INT Index) const
{
    return &Items(Index);
}

struct S_00fa22d0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00fa22d0(INT Index) const;
};

// @baa 0x00fa22d0
const DWORD* S_00fa22d0::sub_00fa22d0(INT Index) const
{
    return &Items(Index);
}

struct C_00fa2320 {
    int sub_00fa2320(int);
};

// @baa 0x00fa2320
int C_00fa2320::sub_00fa2320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00fa2330 {
    int sub_00fa2330(int);
};

// @baa 0x00fa2330
int C_00fa2330::sub_00fa2330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S_00fa2340 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa2340(INT Index);
};

// @baa 0x00fa2340
DWORD* S_00fa2340::sub_00fa2340(INT Index)
{
    return &Items(Index);
}

struct S_00fa2390 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa2390(INT Index);
};

// @baa 0x00fa2390
DWORD* S_00fa2390::sub_00fa2390(INT Index)
{
    return &Items(Index);
}

struct C_00fa23e0 {
    int sub_00fa23e0();
};

// @baa 0x00fa23e0
int C_00fa23e0::sub_00fa23e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fa2400 {
    int sub_00fa2400(int);
};

// @baa 0x00fa2400
int C_00fa2400::sub_00fa2400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_0053e0b0(...);
// @baa 0x00fa2740
undefined4 sub_00fa2740(undefined4 param_1, float * param_2)
{
  sub_0053e0b0(param_1,L"%+013.6f,%+013.6f,%+013.6f",(double)*param_2,(double)param_2[1],
               (double)param_2[2]);
  return param_1;
}

struct C_00fa2780 {
    undefined4 sub_00fa2780(int, int *);
    int sub_0040e830(int);
};

// @baa 0x00fa2780
undefined4 C_00fa2780::sub_00fa2780(int param_2, int * param_3)
{
    int * param_1 = (int *)this;
  int iVar1;
  if ((param_1[0x1d] != 3) || (*param_1 != 5)) {
    return 0;
  }
  if ((param_2 != 0) && (iVar1 = ((C_00fa2780 *)((*(char **)((char *)this + 0x14))))->sub_0040e830(param_2), iVar1 == 0)) {
    return 0;
  }
  *param_3 = param_1[100];
  return 1;
}

int sub_0053ec70(void);
extern undefined * g_02177358;
// @baa 0x00fa27c0
undefined4 * UTexture2D::sub_00fa27c0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x1f] = param_2;
  *param_1 = (undefined4)(&g_02177358);
  return param_1;
}

struct C_00fa2830 {
    undefined4 sub_00fa2830(undefined4 *);
    int sub_0053ea70(int, int);
};

// @baa 0x00fa2830
undefined4 C_00fa2830::sub_00fa2830(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  param_2 = (undefined4 *)*param_2;
  ((C_00fa2830 *)(this))->sub_0053ea70((int)(&param_2), 4);
  return param_1;
}

struct C_00fa2860 {
    undefined4 * sub_00fa2860(byte);
};

int sub_0053dfa0(...);
// @baa 0x00fa2860
undefined4 * C_00fa2860::sub_00fa2860(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fa35a0 {
    void sub_00fa35a0();
};

int sub_00fa0ef0(void);
extern undefined4 g_02177304;
// @baa 0x00fa35a0
void C_00fa35a0::sub_00fa35a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02177304);
  sub_00fa0ef0();
  return;
}

struct S_00fa35b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00fa35b0(INT Index);
};

// @baa 0x00fa35b0
DWORD* S_00fa35b0::sub_00fa35b0(INT Index)
{
    return &Items(Index);
}

struct E_00fa3660 { BYTE Bytes[2448]; };

struct S_00fa3660 {
    TArray<E_00fa3660> Items; // 0x00
    E_00fa3660* sub_00fa3660(INT Index);
};

// @baa 0x00fa3660
E_00fa3660* S_00fa3660::sub_00fa3660(INT Index)
{
    return &Items(Index);
}

struct C_00fa36b0 {
    int sub_00fa36b0(int);
    int sub_00fa0fd0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00fa36b0
int C_00fa36b0::sub_00fa36b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00fa36b0 *)(this))->sub_00fa0fd0(param_2);
  sub_01a37612((void *)(iVar1 * 0x990 + *param_1),0,param_2 * 0x990);
  return iVar1;
}

struct C_view_00fa8ad0 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00fa8ad0
undefined4 * UObject::sub_00fa8ad0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00fa8ad0 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = 0;
  return param_1;
}

struct C_view_00faa4e0 {
    int sub_00417dc0(int);
};

// @baa 0x00faa4e0
undefined4 * UObject::sub_00faa4e0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_00faa4e0 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

struct C_00faa570 {
    int sub_00faa570();
};

// @baa 0x00faa570
int C_00faa570::sub_00faa570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x00faa630
int UTexture2D::sub_00faa630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00faa640
int UTexture2D::sub_00faa640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

// @baa 0x00faa650
int UTexture2D::sub_00faa650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00faa6e0 {
    int sub_00faa6e0(int);
};

// @baa 0x00faa6e0
int C_00faa6e0::sub_00faa6e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

struct C_00faa6f0 {
    int sub_00faa6f0();
};

// @baa 0x00faa6f0
int C_00faa6f0::sub_00faa6f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

// @baa 0x00faa780
int UContentTagIndex::sub_00faa780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

// @baa 0x00faa810
int UContentTagIndex::sub_00faa810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

struct C_00faa8a0 {
    int sub_00faa8a0(int);
};

// @baa 0x00faa8a0
int C_00faa8a0::sub_00faa8a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd0 + *param_1;
}

// @baa 0x00faa930
int UTexture2D::sub_00faa930(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00faa9b0
int UTexture2D::sub_00faa9b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

// @baa 0x00faa9c0
int UTexture2D::sub_00faa9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

// @baa 0x00faaa50
int UTexture2D::sub_00faaa50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00faac00 {
    int sub_00faac00();
};

// @baa 0x00faac00
int C_00faac00::sub_00faac00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct M_00faac10 { void sub_0040fcc0(); };

struct C_00faac10 { char pad[8]; M_00faac10 m; void sub_00faac10(); };

// @baa 0x00faac10
void C_00faac10::sub_00faac10() { m.sub_0040fcc0(); }

struct C_00faac20 {
    int sub_00faac20(int);
};

// @baa 0x00faac20
int C_00faac20::sub_00faac20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct C_00faac30 {
    int sub_00faac30();
};

// @baa 0x00faac30
int C_00faac30::sub_00faac30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00faac40 {
    int sub_00faac40(int);
};

// @baa 0x00faac40
int C_00faac40::sub_00faac40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

// @baa 0x00faac50
void __stdcall sub_00faac50(int a0, int a1) {  }

struct C_00faac60 {
    int sub_00faac60();
};

// @baa 0x00faac60
int C_00faac60::sub_00faac60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

struct C_00faac70 {
    int sub_00faac70(int);
};

// @baa 0x00faac70
int C_00faac70::sub_00faac70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

// @baa 0x00faac80
void __stdcall sub_00faac80(int a0, int a1) {  }

struct C_00faac90 {
    int sub_00faac90(int);
};

// @baa 0x00faac90
int C_00faac90::sub_00faac90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

// @baa 0x00faaca0
void __stdcall sub_00faaca0(int a0, int a1) {  }

struct C_00faacb0 {
    int sub_00faacb0(int);
};

// @baa 0x00faacb0
int C_00faacb0::sub_00faacb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd0 + *param_1;
}

struct C_00faacc0 {
    int sub_00faacc0();
};

// @baa 0x00faacc0
int C_00faacc0::sub_00faacc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

struct C_00faacd0 {
    int sub_00faacd0();
};

// @baa 0x00faacd0
int C_00faacd0::sub_00faacd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

struct C_00faace0 {
    int sub_00faace0();
};

// @baa 0x00faace0
int C_00faace0::sub_00faace0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00faad00 {
    int sub_00faad00();
};

// @baa 0x00faad00
int C_00faad00::sub_00faad00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faad20 {
    int sub_00faad20();
};

// @baa 0x00faad20
int C_00faad20::sub_00faad20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00faad30 {
    int sub_00faad30();
};

// @baa 0x00faad30
int C_00faad30::sub_00faad30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faad50 {
    int sub_00faad50();
};

// @baa 0x00faad50
int C_00faad50::sub_00faad50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

struct C_00faad60 {
    int sub_00faad60();
};

// @baa 0x00faad60
int C_00faad60::sub_00faad60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

struct C_00faad70 {
    int sub_00faad70();
};

// @baa 0x00faad70
int C_00faad70::sub_00faad70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

struct C_00faad80 {
    int sub_00faad80();
};

// @baa 0x00faad80
int C_00faad80::sub_00faad80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xd0 + *(int *)*param_1;
}

struct C_00faad90 {
    int sub_00faad90();
};

// @baa 0x00faad90
int C_00faad90::sub_00faad90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00faada0 {
    int sub_00faada0();
};

// @baa 0x00faada0
int C_00faada0::sub_00faada0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

struct C_00faadb0 {
    int sub_00faadb0();
};

// @baa 0x00faadb0
int C_00faadb0::sub_00faadb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

struct C_00faadc0 {
    int sub_00faadc0();
};

// @baa 0x00faadc0
int C_00faadc0::sub_00faadc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_00faafa0 {
    void sub_00faafa0(int, int, int, int);
};

int sub_00fa8cc0(...);
// @baa 0x00faafa0
void C_00faafa0::sub_00faafa0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;
  sub_00fa8cc0(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_00faafc0 {
    void sub_00faafc0(undefined4, undefined4, undefined1);
};

// @baa 0x00faafc0
void C_00faafc0::sub_00faafc0(undefined4 param_2, undefined4 param_3, undefined1 param_4)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab1b0 {
    void sub_00fab1b0(undefined4, undefined4, undefined4, undefined4, undefined2);
};

// @baa 0x00fab1b0
void C_00fab1b0::sub_00fab1b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined2 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fab1e0 {
    void sub_00fab1e0(undefined4, undefined4, undefined4);
};

// @baa 0x00fab1e0
void C_00fab1e0::sub_00fab1e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab200 {
    void sub_00fab200(undefined4, undefined4, undefined4);
};

// @baa 0x00fab200
void C_00fab200::sub_00fab200(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab220 {
    void sub_00fab220(undefined4, undefined4, undefined4);
};

// @baa 0x00fab220
void C_00fab220::sub_00fab220(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab410 {
    void sub_00fab410(undefined4, undefined4, undefined4);
};

// @baa 0x00fab410
void C_00fab410::sub_00fab410(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab430 {
    void sub_00fab430(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab430
void C_00fab430::sub_00fab430(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fab460 {
    void sub_00fab460(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab460
void C_00fab460::sub_00fab460(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00fab480 {
    void sub_00fab480(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab480
void C_00fab480::sub_00fab480(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00fab4a0 {
    void sub_00fab4a0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab4a0
void C_00fab4a0::sub_00fab4a0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_00fab4d0 {
    void sub_00fab4d0(int, int, int, int);
};

// @baa 0x00fab4d0
void C_00fab4d0::sub_00fab4d0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00fa8cc0(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_00fab520 {
    void sub_00fab520(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab520
void C_00fab520::sub_00fab520(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00fab540 {
    void sub_00fab540(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab540
void C_00fab540::sub_00fab540(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fab570 {
    void sub_00fab570(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab570
void C_00fab570::sub_00fab570(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00fab590 {
    void sub_00fab590(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab590
void C_00fab590::sub_00fab590(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;
  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_00fab5c0 {
    void sub_00fab5c0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab5c0
void C_00fab5c0::sub_00fab5c0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct C_00fab990 {
    void sub_00fab990(undefined4, undefined4, undefined4, undefined4, undefined1, undefined1);
};

// @baa 0x00fab990
void C_00fab990::sub_00fab990(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined1 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_00fab9c0 {
    void sub_00fab9c0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00fab9c0
void C_00fab9c0::sub_00fab9c0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// @baa 0x00fb3020
int UTexture2D::sub_00fb3020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fb3030 { void* Data; int Num; int Max; void sub_00fb3030(); };

// @baa 0x00fb3030
void C_00fb3030::sub_00fb3030() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view_00fb6cc0 {
    int sub_0040fcc0();
};

// @baa 0x00fb6cc0
undefined4 UTexture2D::sub_00fb6cc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fb6cc0 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00fb61b0();
// @baa 0x00fb6cf0
void sub_00fb6cf0(void) { sub_00fb61b0(); }

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

struct TConstSetBitIterator_00fb6e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb6e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb6e30& operator++();
};

TConstSetBitIterator_00fb6e30::TConstSetBitIterator_00fb6e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb6e30
TConstSetBitIterator_00fb6e30& TConstSetBitIterator_00fb6e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb6e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb6e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb6e80& operator++();
};

TConstSetBitIterator_00fb6e80::TConstSetBitIterator_00fb6e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb6e80
TConstSetBitIterator_00fb6e80& TConstSetBitIterator_00fb6e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb6ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb6ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb6ed0& operator++();
};

TConstSetBitIterator_00fb6ed0::TConstSetBitIterator_00fb6ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb6ed0
TConstSetBitIterator_00fb6ed0& TConstSetBitIterator_00fb6ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb6f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb6f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb6f20& operator++();
};

TConstSetBitIterator_00fb6f20::TConstSetBitIterator_00fb6f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb6f20
TConstSetBitIterator_00fb6f20& TConstSetBitIterator_00fb6f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb6f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb6f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb6f70& operator++();
};

TConstSetBitIterator_00fb6f70::TConstSetBitIterator_00fb6f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb6f70
TConstSetBitIterator_00fb6f70& TConstSetBitIterator_00fb6f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb70a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb70a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb70a0& operator++();
};

TConstSetBitIterator_00fb70a0::TConstSetBitIterator_00fb70a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb70a0
TConstSetBitIterator_00fb70a0& TConstSetBitIterator_00fb70a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb70f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb70f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb70f0& operator++();
};

TConstSetBitIterator_00fb70f0::TConstSetBitIterator_00fb70f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb70f0
TConstSetBitIterator_00fb70f0& TConstSetBitIterator_00fb70f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7140& operator++();
};

TConstSetBitIterator_00fb7140::TConstSetBitIterator_00fb7140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7140
TConstSetBitIterator_00fb7140& TConstSetBitIterator_00fb7140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb92e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb92e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb92e0& operator++();
};

TConstSetBitIterator_00fb92e0::TConstSetBitIterator_00fb92e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb92e0
TConstSetBitIterator_00fb92e0& TConstSetBitIterator_00fb92e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb9490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9490& operator++();
};

TConstSetBitIterator_00fb9490::TConstSetBitIterator_00fb9490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9490
TConstSetBitIterator_00fb9490& TConstSetBitIterator_00fb9490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb94b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb94b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb94b0& operator++();
};

TConstSetBitIterator_00fb94b0::TConstSetBitIterator_00fb94b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb94b0
TConstSetBitIterator_00fb94b0& TConstSetBitIterator_00fb94b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fbaa20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbaa20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbaa20& operator++();
};

TConstSetBitIterator_00fbaa20::TConstSetBitIterator_00fbaa20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbaa20
TConstSetBitIterator_00fbaa20& TConstSetBitIterator_00fbaa20::operator++()
{
    It.Advance();
    return *this;
}

void sub_005b5540();
// @baa 0x00fbbc60
void sub_00fbbc60(void) { sub_005b5540(); }

struct C_00fbbd20 { void sub_00fbab60(int); C_00fbbd20 *sub_00fbbd20(int); };

// @baa 0x00fbbd20
C_00fbbd20 *C_00fbbd20::sub_00fbbd20(int a) { sub_00fbab60(a); return this; }

struct C_00fbbd40 { void sub_00fbac50(int); C_00fbbd40 *sub_00fbbd40(int); };

// @baa 0x00fbbd40
C_00fbbd40 *C_00fbbd40::sub_00fbbd40(int a) { sub_00fbac50(a); return this; }

void sub_00fb94d0();
// @baa 0x00fbbd60
void sub_00fbbd60(void) { sub_00fb94d0(); }

struct C_view_00fbbd70 {
    int sub_005b4b00(int, int);
};

// @baa 0x00fbbd70
void UTexture2D::sub_00fbbd70(void)
{
    int param_1 = (int)this;
  ((C_view_00fbbd70 *)(this))->sub_005b4b00(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00fbd960 {
    int sub_00fbc1e0(int, int);
};

// @baa 0x00fbd960
void UTexture2D::sub_00fbd960(void)
{
    int param_1 = (int)this;
  ((C_view_00fbd960 *)(this))->sub_00fbc1e0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00fbdb00 {
    int sub_00fbc470(int, int);
};

// @baa 0x00fbdb00
undefined4 UTexture2D::sub_00fbdb00(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fbdb00 *)(this))->sub_00fbc470(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_00fbdb20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbdb20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbdb20& operator++();
};

TConstSetBitIterator_00fbdb20::TConstSetBitIterator_00fbdb20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbdb20
TConstSetBitIterator_00fbdb20& TConstSetBitIterator_00fbdb20::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00fbdb70 {
    int sub_00fbc520(int, int);
};

// @baa 0x00fbdb70
void UTexture2D::sub_00fbdb70(void)
{
    int param_1 = (int)this;
  ((C_view_00fbdb70 *)(this))->sub_00fbc520(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00fbdb80 {
    int sub_00fbc5e0(int, int);
};

// @baa 0x00fbdb80
undefined4 UTexture2D::sub_00fbdb80(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fbdb80 *)(this))->sub_00fbc5e0(param_2, param_3);
  return param_1;
}

struct C_view_00fbdba0 {
    int sub_00fbc640(int, int);
};

// @baa 0x00fbdba0
void UContentTagIndex::sub_00fbdba0(void)
{
    int param_1 = (int)this;
  ((C_view_00fbdba0 *)(this))->sub_00fbc640(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00fbdbb0 {
    int sub_00fbc700(int, int);
};

// @baa 0x00fbdbb0
void UContentTagIndex::sub_00fbdbb0(void)
{
    int param_1 = (int)this;
  ((C_view_00fbdbb0 *)(this))->sub_00fbc700(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00fbdc80 {
    int sub_00fbc940(int, int);
};

// @baa 0x00fbdc80
undefined4 UTexture2D::sub_00fbdc80(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fbdc80 *)(this))->sub_00fbc940(param_2, param_3);
  return param_1;
}

struct C_view_00fbdca0 {
    int sub_00fbc9a0(int, int);
};

// @baa 0x00fbdca0
undefined4 UTexture2D::sub_00fbdca0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fbdca0 *)(this))->sub_00fbc9a0(param_2, param_3);
  return param_1;
}

struct C_view_00fbe840 {
    int sub_00fbc470(int, int);
};

// @baa 0x00fbe840
int UTexture2D::sub_00fbe840(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00fbe840 *)(this))->sub_00fbc470(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00fbc1e0(int, int);
};

struct C_00fbe870 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00fbe870(void);
};

// @baa 0x00fbe870
void C_00fbe870::sub_00fbe870(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc1e0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00fbe890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbe890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbe890& operator++();
};

TConstSetBitIterator_00fbe890::TConstSetBitIterator_00fbe890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbe890
TConstSetBitIterator_00fbe890& TConstSetBitIterator_00fbe890::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00fbe8e0 {
    int sub_00fbc5e0(int, int);
};

// @baa 0x00fbe8e0
int UTexture2D::sub_00fbe8e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00fbe8e0 *)(this))->sub_00fbc5e0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00fbe910 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00fbc520(int, int);
};

struct C_00fbe910 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00fbe910* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00fbe910(void);
};

// @baa 0x00fbe910
void C_00fbe910::sub_00fbe910(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc520(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00fbe970 {
    int sub_00fbc940(int, int);
};

// @baa 0x00fbe970
int UTexture2D::sub_00fbe970(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00fbe970 *)(this))->sub_00fbc940(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00fbe9a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00fbc640(int, int);
};

struct C_00fbe9a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00fbe9a0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00fbe9a0(void);
};

// @baa 0x00fbe9a0
void C_00fbe9a0::sub_00fbe9a0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc640(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00fbe9c0 {
    int sub_00fbc9a0(int, int);
};

// @baa 0x00fbe9c0
int UTexture2D::sub_00fbe9c0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00fbe9c0 *)(this))->sub_00fbc9a0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00fbe9f0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00fbc700(int, int);
};

struct C_00fbe9f0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00fbe9f0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00fbe9f0(void);
};

// @baa 0x00fbe9f0
void C_00fbe9f0::sub_00fbe9f0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00fbc700(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

int sub_00fb7040(void);
// @baa 0x00fbea50
int UTexture2D::sub_00fbea50(void)
{
    int param_1 = (int)this;

  sub_00fb7040();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_00fbeaf0 { void sub_005b7760(int); C_00fbeaf0 *sub_00fbeaf0(int); };

// @baa 0x00fbeaf0
C_00fbeaf0 *C_00fbeaf0::sub_00fbeaf0(int a) { sub_005b7760(a); return this; }

int sub_00fb7190(void);
// @baa 0x00fbeb10
int UTexture2D::sub_00fbeb10(void)
{
    int param_1 = (int)this;

  sub_00fb7190();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb7250(void);
// @baa 0x00fbeb30
int UTexture2D::sub_00fbeb30(void)
{
    int param_1 = (int)this;

  sub_00fb7250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00fbeb50 {
    int sub_00fb6550();
    int sub_00fbc520(int, int);
};

// @baa 0x00fbeb50
void UTexture2D::sub_00fbeb50(void)
{
    int param_1 = (int)this;
  ((C_view_00fbeb50 *)(this))->sub_00fb6550();
  ((C_view_00fbeb50 *)(this))->sub_00fbc520(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

int sub_00fb73d0(void);
// @baa 0x00fbeb70
int UTexture2D::sub_00fbeb70(void)
{
    int param_1 = (int)this;

  sub_00fb73d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb71f0(void);
// @baa 0x00fbebe0
int UTexture2D::sub_00fbebe0(void)
{
    int param_1 = (int)this;

  sub_00fb71f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00fbd370();
// @baa 0x00fbec90
void sub_00fbec90(void) { sub_00fbd370(); }

void sub_00fbd6a0();
// @baa 0x00fc8770
void sub_00fc8770(void) { sub_00fbd6a0(); }

struct C_00fc9750 { void sub_005b7760(int); C_00fc9750 *sub_00fc9750(int); };

// @baa 0x00fc9750
C_00fc9750 *C_00fc9750::sub_00fc9750(int a) { sub_005b7760(a); return this; }

// @baa 0x00fc9770
int UTexture2D::sub_00fc9770(void)
{
    int param_1 = (int)this;

  sub_00fb7190();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fc9790
int UTexture2D::sub_00fc9790(void)
{
    int param_1 = (int)this;

  sub_00fb7250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00fc97b0 {
    int sub_00fb6550();
    int sub_00fbc520(int, int);
};

// @baa 0x00fc97b0
void UTexture2D::sub_00fc97b0(void)
{
    int param_1 = (int)this;
  ((C_view_00fc97b0 *)(this))->sub_00fb6550();
  ((C_view_00fc97b0 *)(this))->sub_00fbc520(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00fc97d0
int UTexture2D::sub_00fc97d0(void)
{
    int param_1 = (int)this;

  sub_00fb73d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fc98b0
int UTexture2D::sub_00fc98b0(void)
{
    int param_1 = (int)this;

  sub_00fb71f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00fc98d0 { void sub_00fbec00(int); C_00fc98d0 *sub_00fc98d0(int); };

// @baa 0x00fc98d0
C_00fc98d0 *C_00fc98d0::sub_00fc98d0(int a) { sub_00fbec00(a); return this; }

// @baa 0x00fc98f0
void sub_00fc98f0(void) { sub_00fbd370(); }

struct C_00fca620 {
    undefined4 * sub_00fca620(undefined4 *);
    int sub_00547da0(int);
    int sub_005b7760(int);
};

// @baa 0x00fca620
undefined4 * C_00fca620::sub_00fca620(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[5] = param_2[5];
  param_1[5] = param_2[5];
  param_1[5] = param_2[5];
  param_1[5] = param_2[5];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  ((C_00fca620 *)(((char *)this + 0x28)))->sub_00547da0((int)(param_2 + 10));
  ((C_00fca620 *)(((char *)this + 0x34)))->sub_005b7760((int)(param_2 + 0xd));
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}

struct C_00fcb210 {
    int sub_00fcb210(int);
    int sub_00fcb020(int);
};

// @baa 0x00fcb210
int C_00fcb210::sub_00fcb210(int param_2)
{
    int param_1 = (int)this;
  ((C_00fcb210 *)(this))->sub_00fcb020(param_2);
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_2 + 0x990);
  *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_2 + 0x994);
  *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(param_2 + 0x998);
  *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(param_2 + 0x99c);
  *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_2 + 0x9a0);
  *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_2 + 0x9a4);
  return param_1;
}

struct M_00fcb270 { void sub_00fca5c0(); };

struct C_00fcb270 { char pad[76]; M_00fcb270 m; void sub_00fcb270(); };

// @baa 0x00fcb270
void C_00fcb270::sub_00fcb270() { m.sub_00fca5c0(); }

// @baa 0x00fcb280
void sub_00fcb280(void) { sub_00fbd6a0(); }

// @baa 0x00fcb720
int UTexture2D::sub_00fcb720(void)
{
    int param_1 = (int)this;

  sub_00fb71f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00fcb7a0 { void sub_00fbec00(int); C_00fcb7a0 *sub_00fcb7a0(int); };

// @baa 0x00fcb7a0
C_00fcb7a0 *C_00fcb7a0::sub_00fcb7a0(int a) { sub_00fbec00(a); return this; }

struct C_00fcb7c0 {
    undefined4 sub_00fcb7c0(byte);
};

int sub_00fca5c0(void);
// @baa 0x00fcb7c0
undefined4 C_00fcb7c0::sub_00fcb7c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fca5c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00fcb7e0 { void sub_00fca5c0(); };

struct C_00fcb7e0 { char pad[4]; M_00fcb7e0 m; void sub_00fcb7e0(); };

// @baa 0x00fcb7e0
void C_00fcb7e0::sub_00fcb7e0() { m.sub_00fca5c0(); }

struct M_00fcb7f0 { void sub_00fca5c0(); };

struct C_00fcb7f0 { char pad[4]; M_00fcb7f0 m; void sub_00fcb7f0(); };

// @baa 0x00fcb7f0
void C_00fcb7f0::sub_00fcb7f0() { m.sub_00fca5c0(); }

struct C_00fcb800 {
    undefined4 sub_00fcb800(byte);
    int sub_00fca5c0();
};

// @baa 0x00fcb800
undefined4 C_00fcb800::sub_00fcb800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fcb800 *)(((char *)this + 4)))->sub_00fca5c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00fbe7d0();
// @baa 0x00fcb830
void sub_00fcb830(void) { sub_00fbe7d0(); }

struct M_00fcb840 { void sub_00fbe7d0(); };

struct C_00fcb840 { char pad[8]; M_00fcb840 m; void sub_00fcb840(); };

// @baa 0x00fcb840
void C_00fcb840::sub_00fcb840() { m.sub_00fbe7d0(); }

struct A_00fcb8e0 { virtual void sub_00fcb8f0(); char pad[320]; };

struct B_00fcb8e0 { virtual void sub_00fcb8f0(); };

struct C_00fcb8e0 : A_00fcb8e0, B_00fcb8e0 { virtual void sub_00fcb8f0(); C_00fcb8e0(); };

C_00fcb8e0::C_00fcb8e0() {}

// @baa 0x00fcb8e0
void C_00fcb8e0::sub_00fcb8f0() {}

int sub_011edd70(void);
// @baa 0x00fcb8f0
undefined4 UMaterial::sub_00fcb8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011edd70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fcc3d0 {
    int sub_00fcc3d0();
    int sub_00fcbf20(int);
};

// @baa 0x00fcc3d0
int C_00fcc3d0::sub_00fcc3d0(void)
{
    int param_1 = (int)this;
  ((C_00fcc3d0 *)(this))->sub_00fcbf20(0);
  *(undefined4 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined4 *)(param_1 + 0x998) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  *(undefined4 *)(param_1 + 0x9a4) = 0;
  return param_1;
}

struct C_00fcc640 {
    int sub_00fcc640();
    int sub_00fcbf20(int);
};

extern undefined4 g_026cdbd0;
// @baa 0x00fcc640
int C_00fcc640::sub_00fcc640(void)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_00fcc640 *)(((char *)this + 0x4c)))->sub_00fcbf20(0);
  iVar1 = g_026cdbd0;
  if (g_026cdbd0 != 0) {
    *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(g_026cdbd0 + 0x20);
    *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x4c);
  }
  return param_1;
}

struct C_00fcf0f0 { void sub_00fbec00(int); C_00fcf0f0 *sub_00fcf0f0(int); };

// @baa 0x00fcf0f0
C_00fcf0f0 *C_00fcf0f0::sub_00fcf0f0(int a) { sub_00fbec00(a); return this; }

struct C_00fcf1d0 {
    undefined4 sub_00fcf1d0(byte);
    int sub_00fca5c0();
};

// @baa 0x00fcf1d0
undefined4 C_00fcf1d0::sub_00fcf1d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fcf1d0 *)(((char *)this + 4)))->sub_00fca5c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fd00a0 {
    int sub_00fd00a0(int);
    int sub_00fcf750(int);
};

// @baa 0x00fd00a0
int C_00fd00a0::sub_00fd00a0(int param_2)
{
    int param_1 = (int)this;
  ((C_00fd00a0 *)(this))->sub_00fcf750(param_2);
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_2 + 0x990);
  return param_1;
}

struct C_00fd0390 { int a, b, c; C_00fd0390(); };

// @baa 0x00fd0390
C_00fd0390::C_00fd0390() : a(0), b(0), c(0) {}

struct C_00fd03b0 {
    int sub_00fd03b0(undefined4);
    int sub_00fcf750(int);
};

// @baa 0x00fd03b0
int C_00fd03b0::sub_00fd03b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00fd03b0 *)(this))->sub_00fcf750(param_2);
  *(undefined4 *)(param_1 + 0x990) = 0;
  return param_1;
}

struct C_view_00fd8420 {
    int sub_00fcff10(int);
};

// @baa 0x00fd8420
void UTexture2D::sub_00fd8420(void)
{
    int param_1 = (int)this;
  ((C_view_00fd8420 *)((*(char **)((char *)this + 0x10))))->sub_00fcff10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00fb72b0(void);
// @baa 0x00fd84b0
int UTexture2D::sub_00fd84b0(void)
{
    int param_1 = (int)this;

  sub_00fb72b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fd85c0
void sub_00fd85c0(void) {  }

void sub_00fd8340();
// @baa 0x00fd88a0
void sub_00fd88a0(void) { sub_00fd8340(); }

// @baa 0x00fd8a90
int UTexture2D::sub_00fd8a90(void)
{
    int param_1 = (int)this;

  sub_00fb72b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00fd88b0();
// @baa 0x00fd8ba0
void sub_00fd8ba0(void) { sub_00fd88b0(); }

// @baa 0x00fda770
int UTexture2D::sub_00fda770(void)
{
    int param_1 = (int)this;

  sub_00fb72b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00fda790 { void sub_00fd8ab0(int); C_00fda790 *sub_00fda790(int); };

// @baa 0x00fda790
C_00fda790 *C_00fda790::sub_00fda790(int a) { sub_00fd8ab0(a); return this; }

struct C_00fda7b0 { void sub_00fd8b40(int); C_00fda7b0 *sub_00fda7b0(int); };

// @baa 0x00fda7b0
C_00fda7b0 *C_00fda7b0::sub_00fda7b0(int a) { sub_00fd8b40(a); return this; }

// @baa 0x00fda8c0
void sub_00fda8c0(void) { sub_00fd88b0(); }

struct C_00fe4040 { void sub_00fd8ab0(int); C_00fe4040 *sub_00fe4040(int); };

// @baa 0x00fe4040
C_00fe4040 *C_00fe4040::sub_00fe4040(int a) { sub_00fd8ab0(a); return this; }

struct C_00fe4060 { void sub_00fd8b40(int); C_00fe4060 *sub_00fe4060(int); };

// @baa 0x00fe4060
C_00fe4060 *C_00fe4060::sub_00fe4060(int a) { sub_00fd8b40(a); return this; }

// @baa 0x00fe4080
void sub_00fe4080(void) { sub_00fd88b0(); }

struct C_00fe4090 { void sub_00fd8ab0(int); C_00fe4090 *sub_00fe4090(int); };

// @baa 0x00fe4090
C_00fe4090 *C_00fe4090::sub_00fe4090(int a) { sub_00fd8ab0(a); return this; }

struct C_00fe40b0 { void sub_00fd8b40(int); C_00fe40b0 *sub_00fe40b0(int); };

// @baa 0x00fe40b0
C_00fe40b0 *C_00fe40b0::sub_00fe40b0(int a) { sub_00fd8b40(a); return this; }

// @baa 0x00fe40d0
int UTexture2D::sub_00fe40d0(void)
{
    int param_1 = (int)this;

  sub_00fb72b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fe40f0
void sub_00fe40f0(void) { sub_00fd88b0(); }

struct C_00fe4190 { void sub_00fd8ab0(int); C_00fe4190 *sub_00fe4190(int); };

// @baa 0x00fe4190
C_00fe4190 *C_00fe4190::sub_00fe4190(int a) { sub_00fd8ab0(a); return this; }

struct M_00fe4290 { void sub_00fe4230(); };

struct C_00fe4290 { char pad[4]; M_00fe4290 m; void sub_00fe4290(); };

// @baa 0x00fe4290
void C_00fe4290::sub_00fe4290() { m.sub_00fe4230(); }

struct M_00fe42a0 { void sub_00fe41b0(); };

struct C_00fe42a0 { char pad[4]; M_00fe42a0 m; void sub_00fe42a0(); };

// @baa 0x00fe42a0
void C_00fe42a0::sub_00fe42a0() { m.sub_00fe41b0(); }

struct C_00fe42b0 { void sub_00fd8b40(int); C_00fe42b0 *sub_00fe42b0(int); };

// @baa 0x00fe42b0
C_00fe42b0 *C_00fe42b0::sub_00fe42b0(int a) { sub_00fd8b40(a); return this; }

struct M_00fe42d0 { void sub_00fe4230(); };

struct C_00fe42d0 { char pad[4]; M_00fe42d0 m; void sub_00fe42d0(); };

// @baa 0x00fe42d0
void C_00fe42d0::sub_00fe42d0() { m.sub_00fe4230(); }

struct M_00fe42e0 { void sub_00fe41b0(); };

struct C_00fe42e0 { char pad[4]; M_00fe42e0 m; void sub_00fe42e0(); };

// @baa 0x00fe42e0
void C_00fe42e0::sub_00fe42e0() { m.sub_00fe41b0(); }

struct C_00fe42f0 {
    undefined4 sub_00fe42f0(byte);
    int sub_00fe4230();
};

// @baa 0x00fe42f0
undefined4 C_00fe42f0::sub_00fe42f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fe42f0 *)(((char *)this + 4)))->sub_00fe4230();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fe4320 {
    undefined4 sub_00fe4320(byte);
    int sub_00fe41b0();
};

// @baa 0x00fe4320
undefined4 C_00fe4320::sub_00fe4320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fe4320 *)(((char *)this + 4)))->sub_00fe41b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fe43c0 {
    undefined4 sub_00fe43c0(int);
    int sub_00fcb210(int);
    int sub_00fd8ab0(int);
    int sub_00fca6b0(int);
};

// @baa 0x00fe43c0
undefined4 C_00fe43c0::sub_00fe43c0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fe43c0 *)(this))->sub_00fcb210(param_2);
  ((C_00fe43c0 *)(((char *)this + 0x1338)))->sub_00fd8ab0(param_2 + 0x1338);
  ((C_00fe43c0 *)(((char *)this + 0x1374)))->sub_00fd8ab0(param_2 + 0x1374);
  ((C_00fe43c0 *)(((char *)this + 0x9a8)))->sub_00fca6b0(param_2 + 0x9a8);
  return param_1;
}

struct C_00fe4480 {
    undefined4 sub_00fe4480(byte);
    int sub_00fe4230();
};

// @baa 0x00fe4480
undefined4 C_00fe4480::sub_00fe4480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fe4480 *)(((char *)this + 4)))->sub_00fe4230();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fe44b0 {
    undefined4 sub_00fe44b0(byte);
    int sub_00fe41b0();
};

// @baa 0x00fe44b0
undefined4 C_00fe44b0::sub_00fe44b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fe44b0 *)(((char *)this + 4)))->sub_00fe41b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00fe47c0 {
    int sub_00fe4410(int);
};

// @baa 0x00fe47c0
undefined4 * UContentTagIndex::sub_00fe47c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00fe47c0 *)(((char *)this + 4)))->sub_00fe4410((int)(param_2 + 1));
  return param_1;
}

struct C_view_00fe4960 {
    int sub_00fe4410(int);
};

// @baa 0x00fe4960
undefined4 * UContentTagIndex::sub_00fe4960(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00fe4960 *)(((char *)this + 4)))->sub_00fe4410(param_2[1]);
  return param_1;
}

struct C_00fe4a90 {
    undefined4 * sub_00fe4a90(undefined4 *);
    int sub_00fe4410(int);
};

// @baa 0x00fe4a90
undefined4 * C_00fe4a90::sub_00fe4a90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00fe4a90 *)(((char *)this + 4)))->sub_00fe4410(param_2[1]);
  param_1[0x274] = 0xffffffff;
  return param_1;
}

struct C_view_00fe4b50 {
    int sub_00fe47e0(int);
};

// @baa 0x00fe4b50
undefined4 * UContentTagIndex::sub_00fe4b50(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00fe4b50 *)(((char *)this + 4)))->sub_00fe47e0(param_2[1]);
  return param_1;
}

struct C_00fe4c20 {
    undefined4 * sub_00fe4c20(undefined4 *);
    int sub_00fe47e0(int);
};

// @baa 0x00fe4c20
undefined4 * C_00fe4c20::sub_00fe4c20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00fe4c20 *)(((char *)this + 4)))->sub_00fe47e0(param_2[1]);
  param_1[0x4ed] = 0xffffffff;
  return param_1;
}

struct C_view_00fe4d80 {
    int sub_00fe47e0(int);
};

// @baa 0x00fe4d80
undefined4 * UContentTagIndex::sub_00fe4d80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00fe4d80 *)(((char *)this + 4)))->sub_00fe47e0((int)(param_2 + 1));
  return param_1;
}

struct C_view_00fe4ff0 {
    int sub_00fe48d0(int);
};

// @baa 0x00fe4ff0
void UContentTagIndex::sub_00fe4ff0(void)
{
    int param_1 = (int)this;
  ((C_view_00fe4ff0 *)((*(char **)((char *)this + 0x10))))->sub_00fe48d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00fe5010 {
    int sub_00fe4ac0(int);
};

// @baa 0x00fe5010
void UContentTagIndex::sub_00fe5010(void)
{
    int param_1 = (int)this;
  ((C_view_00fe5010 *)((*(char **)((char *)this + 0x10))))->sub_00fe4ac0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00fb7310(void);
// @baa 0x00fe5030
int UContentTagIndex::sub_00fe5030(void)
{
    int param_1 = (int)this;

  sub_00fb7310();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb7370(void);
// @baa 0x00fe5050
int UContentTagIndex::sub_00fe5050(void)
{
    int param_1 = (int)this;

  sub_00fb7370();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern unsigned int g_02604330;
inline void* operator new(unsigned int, void* p) { return p; }

void operator delete(void*, void*);
struct Huge {
    char pad[0x13b0];
    ~Huge();
    Huge(const Huge&);
};

struct Wrapper {
    unsigned int a;
    Huge h;
};

// @baa 0x00fe5100
void sub_00fe5100(Wrapper* dst, const Wrapper* src)
{
    dst->~Wrapper();
    new (dst) Wrapper(*src);
}

// @baa 0x00fe53f0
int UContentTagIndex::sub_00fe53f0(void)
{
    int param_1 = (int)this;

  sub_00fb7310();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fe5410
int UContentTagIndex::sub_00fe5410(void)
{
    int param_1 = (int)this;

  sub_00fb7370();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00fe51b0();
// @baa 0x00fe5640
void sub_00fe5640(void) { sub_00fe51b0(); }

void sub_00fe5220();
// @baa 0x00fe5650
void sub_00fe5650(void) { sub_00fe5220(); }

// @baa 0x00fe66b0
int UContentTagIndex::sub_00fe66b0(void)
{
    int param_1 = (int)this;

  sub_00fb7310();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fe66d0
int UContentTagIndex::sub_00fe66d0(void)
{
    int param_1 = (int)this;

  sub_00fb7370();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00fe66f0 { void sub_00fe5430(int); C_00fe66f0 *sub_00fe66f0(int); };

// @baa 0x00fe66f0
C_00fe66f0 *C_00fe66f0::sub_00fe66f0(int a) { sub_00fe5430(a); return this; }

// @baa 0x00fe68d0
void sub_00fe68d0(void) { sub_00fe51b0(); }

// @baa 0x00fe68e0
void sub_00fe68e0(void) { sub_00fe5220(); }

// @baa 0x00fea010
int UContentTagIndex::sub_00fea010(void)
{
    int param_1 = (int)this;

  sub_00fb7310();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fea030
int UContentTagIndex::sub_00fea030(void)
{
    int param_1 = (int)this;

  sub_00fb7370();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00fea050 { void sub_00fe5430(int); C_00fea050 *sub_00fea050(int); };

// @baa 0x00fea050
C_00fea050 *C_00fea050::sub_00fea050(int a) { sub_00fe5430(a); return this; }

struct C_00fea070 { void sub_00fe6710(int); C_00fea070 *sub_00fea070(int); };

// @baa 0x00fea070
C_00fea070 *C_00fea070::sub_00fea070(int a) { sub_00fe6710(a); return this; }

// @baa 0x00fea090
void sub_00fea090(void) { sub_00fe51b0(); }

// @baa 0x00fea0a0
void sub_00fea0a0(void) { sub_00fe5220(); }

struct M_00feb660 { void sub_00fea0b0(); };

struct C_00feb660 { char pad[4]; M_00feb660 m; void sub_00feb660(); };

// @baa 0x00feb660
void C_00feb660::sub_00feb660() { m.sub_00fea0b0(); }

struct M_00feb670 { void sub_00fea0b0(); };

struct C_00feb670 { char pad[4]; M_00feb670 m; void sub_00feb670(); };

// @baa 0x00feb670
void C_00feb670::sub_00feb670() { m.sub_00fea0b0(); }

struct C_00feb680 { void sub_00fe5430(int); C_00feb680 *sub_00feb680(int); };

// @baa 0x00feb680
C_00feb680 *C_00feb680::sub_00feb680(int a) { sub_00fe5430(a); return this; }

struct C_00feb6a0 { void sub_00fe6710(int); C_00feb6a0 *sub_00feb6a0(int); };

// @baa 0x00feb6a0
C_00feb6a0 *C_00feb6a0::sub_00feb6a0(int a) { sub_00fe6710(a); return this; }

struct C_view_00feb6c0 {
    int sub_00fea0b0();
};

// @baa 0x00feb6c0
undefined4 UContentTagIndex::sub_00feb6c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00feb6c0 *)(((char *)this + 4)))->sub_00fea0b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00feb780 {
    int sub_00fea0b0();
};

// @baa 0x00feb780
undefined4 UContentTagIndex::sub_00feb780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00feb780 *)(((char *)this + 4)))->sub_00fea0b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00feb7b0 { void sub_00fe6710(int); C_00feb7b0 *sub_00feb7b0(int); };

// @baa 0x00feb7b0
C_00feb7b0 *C_00feb7b0::sub_00feb7b0(int a) { sub_00fe6710(a); return this; }

struct C_view_00feba40 {
    int sub_00feb9a0(int);
};

// @baa 0x00feba40
undefined4 * UContentTagIndex::sub_00feba40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00feba40 *)(((char *)this + 4)))->sub_00feb9a0((int)(param_2 + 1));
  return param_1;
}

struct C_view_00feba60 {
    int sub_00feb910(int);
};

// @baa 0x00feba60
void UContentTagIndex::sub_00feba60(void)
{
    int param_1 = (int)this;
  ((C_view_00feba60 *)((*(char **)((char *)this + 0x10))))->sub_00feb910(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00feba80 {
    int sub_00feb9a0(int);
};

// @baa 0x00feba80
undefined4 * UContentTagIndex::sub_00feba80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00feba80 *)(((char *)this + 4)))->sub_00feb9a0(param_2[1]);
  return param_1;
}

struct C_00febaa0 {
    undefined4 * sub_00febaa0(undefined4 *);
    int sub_00feb9a0(int);
};

// @baa 0x00febaa0
undefined4 * C_00febaa0::sub_00febaa0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00febaa0 *)(((char *)this + 4)))->sub_00feb9a0(param_2[1]);
  param_1[0x32] = 0xffffffff;
  return param_1;
}

struct D_01e25bc0 { void sub_00fbe7d0(); };

extern D_01e25bc0 g_026cdce0;
// @baa 0x01e25bc0
void sub_01e25bc0() { g_026cdce0.sub_00fbe7d0(); }

struct Sub
{
    virtual INT vf_0();
};

extern INT sub_00fd85d0();
// @baa 0x00fd86e0
INT sub_00fd86e0()
{
    Sub* Object = (Sub*)sub_00fd85d0();
    return Object->vf_0();
}
