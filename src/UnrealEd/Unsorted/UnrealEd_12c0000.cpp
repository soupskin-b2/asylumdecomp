// UnrealEd_12c0000.cpp: 70 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x012c0050
wchar_t * sub_012c0050(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return L"DISTRIBUTIONTYPE_Constant";
  case 1:
    return L"DISTRIBUTIONTYPE_ConstantCurve";
  case 2:
    return L"DISTRIBUTIONTYPE_Uniform";
  case 3:
    return L"DISTRIBUTIONTYPE_UniformCurve";
  case 4:
    return L"DISTRIBUTIONTYPE_ParticleParam";
  default:
    return L"UNKNOWN ENUM";
  }
}

// @baa 0x012c0320
void sub_012c0320(void) {  }

struct C {
    void sub_012c0330(undefined4);
};

int __stdcall sub_00f90aa0(int);
// @baa 0x012c0330
void C::sub_012c0330(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_00f90aa0(param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x394);
  }
  return;
}

// @baa 0x012c0360
void __stdcall sub_012c0360(int a0, int a1, int a2) {  }

extern char g_025e8e00[];
// @baa 0x012c0370
int sub_012c0370(void) { return (int)g_025e8e00; }

extern char g_026d601c[];
// @baa 0x012c0380
int sub_012c0380(void) { return (int)g_026d601c; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x012c03f0
void sub_012c03f0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x012c0410
int sub_012c0410(int a0, int a1) { return a1; }

struct C_012c0420 { int sub_012c0420(void); };

// @baa 0x012c0420
int C_012c0420::sub_012c0420(void) { return *(int*)((char*)this + 968); }

// @baa 0x012c0470
void __stdcall sub_012c0470(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {  }

struct C_012c0480 {
    void sub_012c0480();
};

int sub_00f80980(void);
extern undefined * g_02230d2c;
extern undefined * g_02230d30;
// @baa 0x012c0480
void C_012c0480::sub_012c0480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02230d30);
  param_1[1] = (undefined4)(&g_02230d2c);
  sub_00f80980();
  return;
}

extern char g_025e8e08[];
// @baa 0x012c04f0
int sub_012c04f0(void) { return (int)g_025e8e08; }

extern char g_026d605c[];
// @baa 0x012c0500
int sub_012c0500(void) { return (int)g_026d605c; }

extern char g_0222df90[];
// @baa 0x012c06c0
int sub_012c06c0(void) { return (int)g_0222df90; }

extern char g_026d60a8[];
// @baa 0x012c06d0
int sub_012c06d0(void) { return (int)g_026d60a8; }

// @baa 0x012c0830
void __stdcall sub_012c0830(int a0) {  }

// @baa 0x012c0840
void __stdcall sub_012c0840(int a0, int a1) {  }

// @baa 0x012c0850
void __stdcall sub_012c0850(int a0, int a1) {  }

struct S_012c0870 {
    void sub_012efe70();
};

struct C_012c0870 {
    void sub_012c0870();
};

// @baa 0x012c0870
void C_012c0870::sub_012c0870()
{
    ((S_012c0870 *)((char *)this - 0x1A8))->sub_012efe70();
}

struct S_012c0880 {
    void sub_012df280();
};

struct C_012c0880 {
    void sub_012c0880();
};

// @baa 0x012c0880
void C_012c0880::sub_012c0880()
{
    ((S_012c0880 *)((char *)this - 0x1A8))->sub_012df280();
}

struct S_012c0890 {
    void sub_012df380();
};

struct C_012c0890 {
    void sub_012c0890();
};

// @baa 0x012c0890
void C_012c0890::sub_012c0890()
{
    ((S_012c0890 *)((char *)this - 0x1A8))->sub_012df380();
}

extern char g_0222eff0[];
// @baa 0x012c09c0
int sub_012c09c0(void) { return (int)g_0222eff0; }

// @baa 0x012c09d0
int sub_012c09d0(void) { return 1; }

struct C_012c09e0 { int sub_012c09e0(void); };

// @baa 0x012c09e0
int C_012c09e0::sub_012c09e0(void) { return *(int*)((char*)this + 4); }

struct C_012c09f0 { int sub_012c09f0(void); };

// @baa 0x012c09f0
int C_012c09f0::sub_012c09f0(void) { return *(int*)((char*)this + 4); }

struct C_012c0a00 { int sub_012c0a00(void); };

// @baa 0x012c0a00
int C_012c0a00::sub_012c0a00(void) { return *(int*)((char*)this + 4); }

// @baa 0x012c0a40
float10 sub_012c0a40(double param_1)
{
  return (float10)param_1;
}

// @baa 0x012c0b50
undefined2 sub_012c0b50(void)
{
  return 0x69;
}

// @baa 0x012c0b60
undefined2 sub_012c0b60(void)
{
  return 0x66;
}

// @baa 0x012c0b70
undefined2 sub_012c0b70(void)
{
  return 0x73;
}

struct C_012c0bd0 {
    undefined4 sub_012c0bd0(int *);
};

// @baa 0x012c0bd0
undefined4 C_012c0bd0::sub_012c0bd0(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

// @baa 0x012c0c00
void sub_012c0c00(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x012c0c20
void sub_012c0c20(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x012c0c40
int sub_012c0c40(int a0, int a1) { return a1; }

// @baa 0x012c0c50
void sub_012c0c50(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02019ce8[];
// @baa 0x012c0c70
int sub_012c0c70(void) { return (int)g_02019ce8; }

struct C_012c0c80 { C_012c0c80* sub_012c0c80(int a0); };

// @baa 0x012c0c80
C_012c0c80* C_012c0c80::sub_012c0c80(int a0) { return this; }

struct C_012c1c60 {
    undefined4 sub_012c1c60(byte);
};

int sub_0053dfa0(...);
int sub_012bfce0(void);
// @baa 0x012c1c60
undefined4 C_012c1c60::sub_012c1c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012bfce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d6a64;
extern undefined4 g_026d6a68;
extern undefined4 g_026d6a6c;
// @baa 0x012c2290
undefined * sub_012c2290(void)
{
  if ((g_026d6a6c & 1) == 0) {
    g_026d6a6c = g_026d6a6c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a64 = (undefined4)(&g_026af518);
    g_026d6a68 = (undefined4)(L"HInterpEdTrackBkg");
  }
  return (undefined *)(&g_026d6a64);
}

extern undefined4 g_026d6a70;
extern undefined4 g_026d6a74;
extern undefined4 g_026d6a78;
// @baa 0x012c22e0
undefined * sub_012c22e0(void)
{
  if ((g_026d6a78 & 1) == 0) {
    g_026d6a78 = g_026d6a78 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a70 = (undefined4)(&g_026af518);
    g_026d6a74 = (undefined4)(L"HInterpEdGroupTitle");
  }
  return (undefined *)(&g_026d6a70);
}

extern undefined4 g_026d6a7c;
extern undefined4 g_026d6a80;
extern undefined4 g_026d6a84;
// @baa 0x012c2330
undefined * sub_012c2330(void)
{
  if ((g_026d6a84 & 1) == 0) {
    g_026d6a84 = g_026d6a84 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a7c = (undefined4)(&g_026af518);
    g_026d6a80 = (undefined4)(L"HInterpEdGroupCollapseBtn");
  }
  return (undefined *)(&g_026d6a7c);
}

extern undefined4 g_026d6a88;
extern undefined4 g_026d6a8c;
extern undefined4 g_026d6a90;
// @baa 0x012c2380
undefined * sub_012c2380(void)
{
  if ((g_026d6a90 & 1) == 0) {
    g_026d6a90 = g_026d6a90 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a88 = (undefined4)(&g_026af518);
    g_026d6a8c = (undefined4)(L"HInterpEdGroupLockCamBtn");
  }
  return (undefined *)(&g_026d6a88);
}

extern undefined4 g_026d6a94;
extern undefined4 g_026d6a98;
extern undefined4 g_026d6a9c;
// @baa 0x012c23d0
undefined * sub_012c23d0(void)
{
  if ((g_026d6a9c & 1) == 0) {
    g_026d6a9c = g_026d6a9c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a94 = (undefined4)(&g_026af518);
    g_026d6a98 = (undefined4)(L"HInterpEdTrackTitle");
  }
  return (undefined *)(&g_026d6a94);
}

extern undefined4 g_026d6aa0;
extern undefined4 g_026d6aa4;
extern undefined4 g_026d6aa8;
// @baa 0x012c2420
undefined * sub_012c2420(void)
{
  if ((g_026d6aa8 & 1) == 0) {
    g_026d6aa8 = g_026d6aa8 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6aa0 = (undefined4)(&g_026af518);
    g_026d6aa4 = (undefined4)(L"HInterpEdTrackTrajectoryButton");
  }
  return (undefined *)(&g_026d6aa0);
}

extern undefined4 g_026d6aac;
extern undefined4 g_026d6ab0;
extern undefined4 g_026d6ab4;
// @baa 0x012c2470
undefined * sub_012c2470(void)
{
  if ((g_026d6ab4 & 1) == 0) {
    g_026d6ab4 = g_026d6ab4 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6aac = (undefined4)(&g_026af518);
    g_026d6ab0 = (undefined4)(L"HInterpEdTrackGraphPropBtn");
  }
  return (undefined *)(&g_026d6aac);
}

extern undefined4 g_026d6ab8;
extern undefined4 g_026d6abc;
extern undefined4 g_026d6ac0;
// @baa 0x012c24c0
undefined * sub_012c24c0(void)
{
  if ((g_026d6ac0 & 1) == 0) {
    g_026d6ac0 = g_026d6ac0 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6ab8 = (undefined4)(&g_026af518);
    g_026d6abc = (undefined4)(L"HInterpEdTrackDisableTrackBtn");
  }
  return (undefined *)(&g_026d6ab8);
}

extern undefined4 g_026d6ac4;
extern undefined4 g_026d6ac8;
extern undefined4 g_026d6acc;
// @baa 0x012c2510
undefined * sub_012c2510(void)
{
  if ((g_026d6acc & 1) == 0) {
    g_026d6acc = g_026d6acc | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6ac4 = (undefined4)(&g_026af518);
    g_026d6ac8 = (undefined4)(L"HInterpEdEventDirBtn");
  }
  return (undefined *)(&g_026d6ac4);
}

extern undefined4 g_026d6ad0;
extern undefined4 g_026d6ad4;
extern undefined4 g_026d6ad8;
// @baa 0x012c2560
undefined * sub_012c2560(void)
{
  if ((g_026d6ad8 & 1) == 0) {
    g_026d6ad8 = g_026d6ad8 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6ad0 = (undefined4)(&g_026af518);
    g_026d6ad4 = (undefined4)(L"HInterpEdTimelineBkg");
  }
  return (undefined *)(&g_026d6ad0);
}

extern undefined4 g_026d6adc;
extern undefined4 g_026d6ae0;
extern undefined4 g_026d6ae4;
// @baa 0x012c25b0
undefined * sub_012c25b0(void)
{
  if ((g_026d6ae4 & 1) == 0) {
    g_026d6ae4 = g_026d6ae4 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6adc = (undefined4)(&g_026af518);
    g_026d6ae0 = (undefined4)(L"HInterpEdNavigatorBackground");
  }
  return (undefined *)(&g_026d6adc);
}

extern undefined4 g_026d6ae8;
extern undefined4 g_026d6aec;
extern undefined4 g_026d6af0;
// @baa 0x012c2600
undefined * sub_012c2600(void)
{
  if ((g_026d6af0 & 1) == 0) {
    g_026d6af0 = g_026d6af0 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6ae8 = (undefined4)(&g_026af518);
    g_026d6aec = (undefined4)(L"HInterpEdNavigator");
  }
  return (undefined *)(&g_026d6ae8);
}

extern undefined4 g_026d6af4;
extern undefined4 g_026d6af8;
extern undefined4 g_026d6afc;
// @baa 0x012c2650
undefined * sub_012c2650(void)
{
  if ((g_026d6afc & 1) == 0) {
    g_026d6afc = g_026d6afc | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6af4 = (undefined4)(&g_026af518);
    g_026d6af8 = (undefined4)(L"HInterpEdMarker");
  }
  return (undefined *)(&g_026d6af4);
}

extern undefined4 g_026d6b00;
extern undefined4 g_026d6b04;
extern undefined4 g_026d6b08;
// @baa 0x012c26a0
undefined * sub_012c26a0(void)
{
  if ((g_026d6b08 & 1) == 0) {
    g_026d6b08 = g_026d6b08 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6b00 = (undefined4)(&g_026af518);
    g_026d6b04 = (undefined4)(L"HInterpEdTab");
  }
  return (undefined *)(&g_026d6b00);
}

// @baa 0x012c26f0
IMPLEMENT_CLASS_AT(UInterpEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditor.cpp", 16);

// @baa 0x012c2820
bool UInterpEdOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_012c42b0 {
    int sub_012c42b0(int);
};

// @baa 0x012c42b0
int C_012c42b0::sub_012c42b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_012c4bd0 {
    undefined4 sub_012c4bd0(byte);
};

int sub_012c1db0(void);
// @baa 0x012c4bd0
undefined4 C_012c4bd0::sub_012c4bd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012c1db0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012c5530 {
    undefined4 sub_012c5530(byte);
};

int sub_012c32e0(void);
// @baa 0x012c5530
undefined4 C_012c5530::sub_012c5530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012c32e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_012c3350(void);
// @baa 0x012c5550
undefined4 UUnrealEdEngine::sub_012c5550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012c3350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_02231c0c;
extern undefined * g_02231c1c;
extern undefined4 g_02231c34;
extern undefined * g_02231c3c;
extern undefined4 g_02231c54;
extern undefined * g_02231c60;
// @baa 0x012c5c00
undefined4 * UUnrealEdEngine::sub_012c5c00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02231c60);
  param_1[0x67] = (undefined4)(&g_02231c54);
  param_1[0x68] = (undefined4)(&g_02231c3c);
  param_1[0x69] = (undefined4)(&g_02231c34);
  param_1[0x6a] = (undefined4)(&g_02231c1c);
  param_1[0x6b] = (undefined4)(&g_02231c0c);
  sub_012c3350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_012c5cc0(INT Index);
};

// @baa 0x012c5cc0
FFaceFXElement* UFxRenderWidget::sub_012c5cc0(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[36]; };

struct S_012c5d10 {
    TArray<E> Items; // 0x00
    E* sub_012c5d10(INT Index);
};

// @baa 0x012c5d10
E* S_012c5d10::sub_012c5d10(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_012c5d60 {
    void sub_012c5d60(int, int);
    int sub_012c3db0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x012c5d60
void C_012c5d60::sub_012c5d60(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_012c5d60 *)(this))->sub_012c3db0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x24),0,param_3 * 0x24);
  return;
}

struct C_012c5e10 {
    int sub_012c5e10(int);
};

// @baa 0x012c5e10
int C_012c5e10::sub_012c5e10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x012c5e20
void __stdcall sub_012c5e20(int a0, int a1) {  }

struct C_012c5e30 {
    int sub_012c5e30(int);
};

// @baa 0x012c5e30
int C_012c5e30::sub_012c5e30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_012c5e40 {
    int sub_012c5e40(int);
};

// @baa 0x012c5e40
int C_012c5e40::sub_012c5e40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x012c5e50
void __stdcall sub_012c5e50(int a0, int a1) {  }

// @baa 0x012c6360
void __stdcall sub_012c6360(int a0, int a1) {  }

class wxWindow
{
public:
    __declspec(dllimport) virtual ~wxWindow();
};

extern void* g_02230a80[];
struct C_012c0390 : public wxWindow
{
    void sub_012c0390();
};

// @baa 0x012c0390
void C_012c0390::sub_012c0390()
{
    *(void**)this = g_02230a80;
    ((wxWindow*)this)->wxWindow::~wxWindow();
}

class wxEvent
{
public:
    __declspec(dllimport) void Skip(bool Skip);
};

// @baa 0x012c0700
void __stdcall sub_012c0700(wxEvent* Event)
{
    Event->Skip(true);
}
