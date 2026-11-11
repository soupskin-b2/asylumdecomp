// UnChan.cpp (part 1 of 2): 82 functions
// Placed here by: neighbours 42, class 27, callers 7, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00567860
int UTexture2D::sub_00567860(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x88) + 7 >> 3;
}

struct C { char pad[124]; TArray<int> A; int* sub_0056bf50(); };

// @baa 0x0056bf50
int* C::sub_0056bf50() { return &A(0); }

// @baa 0x00df2fa0
undefined4 sub_00df2fa0(int param_1)
{
  if ((param_1 != 4) && (param_1 != 8)) {
    return 0;
  }
  return 1;
}

// @baa 0x00df2fc0
int sub_00df2fc0(int a0, int a1) { return a1; }

// @baa 0x00df2fd0
int sub_00df2fd0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00df2fe0
void sub_00df2fe0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00df3000
int sub_00df3000(int a0, int a1) { return a1; }

// @baa 0x00df3010
int sub_00df3010(int a0, int a1) { return a1; }

// @baa 0x00df3020
void sub_00df3020(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00df3040
IMPLEMENT_CLASS_AT(UChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 495);

// @baa 0x00df30a0
// @baa 0x00df30c0
undefined4 sub_00df30c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_00df30d0 {
    void sub_00df30d0();
};

extern undefined4 g_026c5e8c;
// @baa 0x00df30d0
void C_00df30d0::sub_00df30d0(void)
{
    int param_1 = (int)this;
  g_026c5e8c = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}

struct C_00df30e0 { int a, b; C_00df30e0(int, int); };

// @baa 0x00df30e0
C_00df30e0::C_00df30e0(int x, int y) : a(x), b(y) {}

// @baa 0x00df3100
int sub_00df3100(int a0, int a1) { return a1; }

struct C_00df3110 {
    void sub_00df3110();
};

extern undefined4 g_026c5e90;
// @baa 0x00df3110
void C_00df3110::sub_00df3110(void)
{
    int param_1 = (int)this;

  g_026c5e90 = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x20;
  *(undefined4 *)(param_1 + 0x44) = 2;
  return;
}

struct C_00df3130 { int sub_00df3130(void); };

// @baa 0x00df3130
int C_00df3130::sub_00df3130(void) { return *(int*)((char*)this + 96); }

// @baa 0x00df3140
int sub_00df3140(int a0, int a1) { return a1; }

// @baa 0x00df3150
void sub_00df3150(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00df3170 {
    void sub_00df3170();
};

extern undefined4 g_026c5e94;
// @baa 0x00df3170
void C_00df3170::sub_00df3170(void)
{
    int param_1 = (int)this;
  g_026c5e94 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x44) = 3;
  return;
}

// @baa 0x00df3180
undefined4 sub_00df3180(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_00df3190 {
    void sub_00df3190();
};

extern undefined4 g_026c5e98;
// @baa 0x00df3190
void C_00df3190::sub_00df3190(void)
{
    int param_1 = (int)this;

  g_026c5e98 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x44) = 4;
  return;
}

int sub_005c7a20(void);
extern undefined * g_020e2d80;
// @baa 0x00df32a0
undefined4 * UObject::sub_00df32a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020e2d80);
  return param_1;
}

// @baa 0x00df3310
void UChannel::vf_110(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  return;
}

// @baa 0x00df3320
void UChannel::vf_124(void) {  }

// @baa 0x00df3490
// @baa 0x00df35a0
int UChannel::vf_000(void) { return 1; }

// @baa 0x00df35b0
bool UChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct FControlChannelData_ {
    BYTE Pad0[0x30];
    UNetConnection* Connection;   /* 0x30 */
    INT Pad34;
    INT ChIndex;                   /* 0x38 */
    UBOOL OpenedLocally;           /* 0x3c */
    INT OpenPacketId;              /* 0x40 */
    BYTE Pad44[0xc];
    INT NegotiatedVer;             /* 0x50 */
    BYTE Pad54[0x18];
    UBOOL bNeedsEndianInspection;  /* 0x6c */
};

struct UControlChannel_ : public UControlChannel {
    void sub_00df35f0(UNetConnection* InConnection, INT InChIndex, UBOOL InOpenedLocally);
};

// @baa 0x00df35f0
void UControlChannel_::sub_00df35f0(UNetConnection* InConnection, INT InChIndex, UBOOL InOpenedLocally)
{
    FControlChannelData_* Data = (FControlChannelData_*)this;
    if (InConnection->vf_110())
    {
        Data->Connection = *(UNetConnection**)((BYTE*)InConnection + 0x4fb8); /* UChildConnection::Parent */
    }
    else
    {
        Data->Connection = InConnection;
    }
    Data->ChIndex = InChIndex;
    Data->OpenedLocally = InOpenedLocally;
    Data->OpenPacketId = -1;
    Data->NegotiatedVer = *(INT*)((BYTE*)InConnection + 0xe8);
    if (!InOpenedLocally)
    {
        Data->bNeedsEndianInspection = 1;
    }
}

// @baa 0x00df36f0
int UControlChannel::vf_000(void) { return 1; }

// @baa 0x00df3770
void sub_00df3770(void) {  }

// @baa 0x00df3780
void sub_00df3780(void) {  }

// @baa 0x00df3790
int UActorChannel::vf_000(void) { return 1; }

struct C_00df37a0 {
    undefined4 * sub_00df37a0();
};

extern undefined * g_020e2eb0;
// @baa 0x00df37a0
undefined4 * C_00df37a0::sub_00df37a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020e2eb0);
  param_1[0x17] = 0;
  return param_1;
}

// @baa 0x00df37c0
IMPLEMENT_CLASS_AT(UFileChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 1864);

// @baa 0x00df3820
// @baa 0x00df38a0
int UFileChannel::vf_000(void) { return 1; }

// @baa 0x00df96a0
// @baa 0x00df96c0
// @baa 0x00df98d0
// @baa 0x00df9990
// @baa 0x00dfd090
IMPLEMENT_CLASS_AT(UControlChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 749);

// @baa 0x00dfd1a0
bool UControlChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dfd290
IMPLEMENT_CLASS_AT(UActorChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 1677);

// @baa 0x00dfd3a0
bool UActorChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00dfd3e0
// @baa 0x00dfd4f0
bool UFileChannel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00dff480 { void* Data; int Num; int Max; void sub_00dff480(); };

// @baa 0x00dff480
void C_00dff480::sub_00dff480() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dff4e0 { void* Data; int Num; int Max; void sub_00dff4e0(); };

// @baa 0x00dff4e0
void C_00dff4e0::sub_00dff4e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dff540 { void* Data; int Num; int Max; void sub_00dff540(); };

// @baa 0x00dff540
void C_00dff540::sub_00dff540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00dff5a0 {
    void sub_00dff5a0(int);
};

int sub_0053df70(...);
// @baa 0x00dff5a0
void C_00dff5a0::sub_00dff5a0(int param_2)
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

// @baa 0x00dff5e0
void __stdcall sub_00dff5e0(int a0, int a1) {  }

struct C_00dff740 {
    int sub_00dff740(int);
};

// @baa 0x00dff740
int C_00dff740::sub_00dff740(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dff7c0 {
    int sub_00dff7c0();
};

// @baa 0x00dff7c0
int C_00dff7c0::sub_00dff7c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00dff7d0 {
    int sub_00dff7d0();
};

// @baa 0x00dff7d0
int C_00dff7d0::sub_00dff7d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00dff7f0 {
    int sub_00dff7f0();
};

// @baa 0x00dff7f0
int C_00dff7f0::sub_00dff7f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dff800 {
    int sub_00dff800(int);
};

// @baa 0x00dff800
int C_00dff800::sub_00dff800(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00dff810 {
    int sub_00dff810();
};

// @baa 0x00dff810
int C_00dff810::sub_00dff810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dff820 {
    int sub_00dff820();
};

// @baa 0x00dff820
int C_00dff820::sub_00dff820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00dff830 {
    int sub_00dff830();
};

// @baa 0x00dff830
int C_00dff830::sub_00dff830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e04dc0 { void* Data; int Num; int Max; void sub_00e04dc0(); };

// @baa 0x00e04dc0
void C_00e04dc0::sub_00e04dc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00e06d30
IMPLEMENT_CLASS_AT(UVoiceChannel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp", 1867);

struct C_view {
    int sub_00e02d10(int, int);
};

int sub_006311e0(...);
extern undefined4 g_020dca58;
// @baa 0x00e07000
void UChannel::vf_120(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x90)) {
    if ((*(int *)(iVar1 + 0xb0) == param_2) && (*(int *)(iVar1 + 0xa0) == 0)) {
      if (*(char *)(iVar1 + 0xb6) == '\0') {
        sub_006311e0("Out->bReliable",
                     "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnChan.cpp"
                     ,0x1e5,&g_020dca58);
      }
      ((C_view *)((*(char **)((char *)this + 0x30))))->sub_00e02d10(iVar1, 0);
    }
  }
  return;
}

// @baa 0x00e07070
UActorChannel::UActorChannel()
{
    *(DWORD*)((BYTE*)this + 0xb4) = 0;
    *(DWORD*)((BYTE*)this + 0xb8) = 0;
    *(DWORD*)((BYTE*)this + 0xbc) = 0;
}

// @baa 0x00e070e0
int sub_005c7a70(...);
int sub_00e070e0(void);
// @baa 0x00e07190
undefined4 UActorChannel::sub_00e07190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e070e0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xc0);
  }
  return param_1;
}

// @baa 0x00e071c0
// @baa 0x00e0b850
struct C_00e0b860 {
    undefined4 * sub_00e0b860(int);
    int sub_00e06f00(int);
};

extern undefined * g_020e3670;
// @baa 0x00e0b860
undefined4 * C_00e0b860::sub_00e0b860(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00e0b860 *)(this))->sub_00e06f00(param_2);
  *param_1 = (undefined4)(&g_020e3670);
  param_1[0x24] = *(undefined4 *)(param_2 + 0x90);
  param_1[0x25] = *(undefined4 *)(param_2 + 0x94);
  param_1[0x26] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)((int)param_1 + 0xa9) = *(undefined1 *)(param_2 + 0xa9);
  *(undefined1 *)((int)param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  return param_1;
}

struct A_00e0b9d0 { virtual void sub_00e0ba60(); char pad[88]; };

struct B_00e0b9d0 { virtual void sub_00e0ba60(); };

struct C_00e0b9d0 : A_00e0b9d0, B_00e0b9d0 { virtual void sub_00e0ba60(); C_00e0b9d0(); };

C_00e0b9d0::C_00e0b9d0() {}

// @baa 0x00e0b9d0
void C_00e0b9d0::sub_00e0ba60() {}

// @baa 0x00e0b9e0
// @baa 0x00e0ba60
// @baa 0x00e0ba80
// @baa 0x00e0d820
struct C_00e12100 {
    int sub_00e12100(undefined4, undefined4, undefined4);
    int sub_00e0fb40(int, int);
};

// @baa 0x00e12100
int C_00e12100::sub_00e12100(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00e12100 *)(this))->sub_00e0fb40(param_2, param_4);
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
    void sub_00e0fa80(int, int);
};

struct C_00e12130 {
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
    void sub_00e12130(void);
};

// @baa 0x00e12130
void C_00e12130::sub_00e12130(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00e0fa80(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00e12150 {
    int sub_00e12150(undefined4, undefined4, undefined4);
    int sub_00e0fba0(int, int);
};

// @baa 0x00e12150
int C_00e12150::sub_00e12150(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00e12150 *)(this))->sub_00e0fba0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00e12180 {
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
    void sub_00e0f9c0(int, int);
};

struct C_00e12180 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00e12180* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00e12180(void);
};

// @baa 0x00e12180
void C_00e12180::sub_00e12180(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00e0f9c0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00e121a0 {
    int sub_00e121a0();
};

int sub_00e08f60(void);
// @baa 0x00e121a0
int C_00e121a0::sub_00e121a0(void)
{
    int param_1 = (int)this;

  sub_00e08f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e121c0 {
    int sub_00e121c0();
};

int sub_00e08fc0(void);
// @baa 0x00e121c0
int C_00e121c0::sub_00e121c0(void)
{
    int param_1 = (int)this;

  sub_00e08fc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00e08f00(void);
// @baa 0x00e121e0
int UGuidCache::sub_00e121e0(void)
{
    int param_1 = (int)this;

  sub_00e08f00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e11a60();
// @baa 0x00e12340
void sub_00e12340(void) { sub_00e11a60(); }
