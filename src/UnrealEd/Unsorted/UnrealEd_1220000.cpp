// UnrealEd_1220000.cpp (part 1 of 5): 127 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_021f9f4c[];
// @baa 0x01220120
int sub_01220120(void) { return (int)g_021f9f4c; }

extern char g_026d352c[];
// @baa 0x01220130
int sub_01220130(void) { return (int)g_026d352c; }

// @baa 0x012201b0
void __stdcall sub_012201b0(int a0) {  }

extern char g_025e8bb4[];
// @baa 0x012201c0
int sub_012201c0(void) { return (int)g_025e8bb4; }

extern char g_026d35b4[];
// @baa 0x012201d0
int sub_012201d0(void) { return (int)g_026d35b4; }

extern char g_025e8bbc[];
// @baa 0x01220240
int sub_01220240(void) { return (int)g_025e8bbc; }

extern char g_026d36bc[];
// @baa 0x01220250
int sub_01220250(void) { return (int)g_026d36bc; }

// @baa 0x01220290
int sub_01220290(void) { return 1; }

// @baa 0x012202f0
void UUnrealEdEngine::sub_012202f0(void) { *(int*)((char*)this + 24) = 1; }

// @baa 0x01220300
void sub_01220300(void) {  }

// @baa 0x01220310
int UUnrealEdEngine::sub_01220310(void) { return *(int*)((char*)this + 432); }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02200df8;
// @baa 0x01220320
undefined4 * UUnrealEdEngine::sub_01220320(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(0);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02200df8);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x01220340
void sub_01220340(void) { sub_00c38ac0(); }

extern char g_026d36d4[];
// @baa 0x01220350
int sub_01220350(void) { return (int)g_026d36d4; }

extern char g_021fc054[];
// @baa 0x01220360
int sub_01220360(void) { return (int)g_021fc054; }

extern char g_026d36ec[];
// @baa 0x01220370
int sub_01220370(void) { return (int)g_026d36ec; }

extern char g_02200e08[];
struct C { C* sub_01220380(void); };

// @baa 0x01220380
C* C::sub_01220380(void) { *(int*)((char*)this + 0) = (int)g_02200e08; return this; }

// @baa 0x012203f0
int sub_012203f0(void) { return 1; }

struct C_01220400 {
    void sub_01220400();
    int sub_011ede20(int, int, int, int, int);
};

// @baa 0x01220400
void C_01220400::sub_01220400(void)
{
    int param_1 = (int)this;
  ((C_01220400 *)((*(char **)((char *)this + 0x310))))->sub_011ede20(*(undefined4 *)(param_1 + 0x2f4), 1, 1, 0, 0);
  return;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_012204b0;
};

struct C_012204b0 {
    void sub_012204b0(wxUpdateUIEvent *);
};

// @baa 0x012204b0
void C_012204b0::sub_012204b0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x2f8) == 1);
  return;
}

struct C_01220830 { void sub_0057cb40(int); C_01220830 *sub_01220830(int); };

// @baa 0x01220830
C_01220830 *C_01220830::sub_01220830(int a) { sub_0057cb40(a); return this; }

extern char g_025e8bc4[];
// @baa 0x01220880
int sub_01220880(void) { return (int)g_025e8bc4; }

extern char g_026d3b00[];
// @baa 0x01220890
int sub_01220890(void) { return (int)g_026d3b00; }

// @baa 0x01220c20
void __stdcall sub_01220c20(int a0) {  }

struct C_01220ce0 {
    void sub_01220ce0(undefined4, undefined4, undefined4);
};

// @baa 0x01220ce0
void C_01220ce0::sub_01220ce0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1b4) = param_2;
  *(undefined4 *)(param_1 + 0x1b8) = param_3;
  *(undefined4 *)(param_1 + 0x1bc) = param_4;
  return;
}

extern char g_025e8bcc[];
// @baa 0x01220d20
int sub_01220d20(void) { return (int)g_025e8bcc; }

extern char g_026d3dd4[];
// @baa 0x01220d30
int sub_01220d30(void) { return (int)g_026d3dd4; }

extern char g_025e8bd4[];
// @baa 0x01220d40
int sub_01220d40(void) { return (int)g_025e8bd4; }

extern char g_026d3dec[];
// @baa 0x01220d50
int sub_01220d50(void) { return (int)g_026d3dec; }

extern char g_021ff5ac[];
// @baa 0x01221420
int sub_01221420(void) { return (int)g_021ff5ac; }

extern char g_026d3f0c[];
// @baa 0x01221430
int sub_01221430(void) { return (int)g_026d3f0c; }

extern char g_021ff8bc[];
// @baa 0x01221480
int sub_01221480(void) { return (int)g_021ff8bc; }

struct C_01221530 { int sub_01221530(void); };

// @baa 0x01221530
int C_01221530::sub_01221530(void) { return *(int*)((char*)this + 4); }

struct C_01221540 { int sub_01221540(void); };

// @baa 0x01221540
int C_01221540::sub_01221540(void) { return *(int*)((char*)this + 4); }

struct C_01221550 { int sub_01221550(void); };

// @baa 0x01221550
int C_01221550::sub_01221550(void) { return *(int*)((char*)this + 4); }

struct C_012215b0 { int a, b; C_012215b0(int, int); };

// @baa 0x012215b0
C_012215b0::C_012215b0(int x, int y) : a(x), b(y) {}

// @baa 0x012215d0
int sub_012215d0(int a0) { return *(int*)a0; }

struct C_012215e0 {
    void sub_012215e0(int *);
};

// @baa 0x012215e0
void C_012215e0::sub_012215e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x012215f0
void sub_012215f0(void) {  }

// @baa 0x01221600
void sub_01221600(void) {  }

// @baa 0x01221610
float10 sub_01221610(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01221630
undefined2 sub_01221630(void)
{
  return 0x75;
}

// @baa 0x01221640
undefined2 sub_01221640(void)
{
  return 0x69;
}

// @baa 0x01221650
undefined2 sub_01221650(void)
{
  return 0x66;
}

// @baa 0x01221660
undefined2 sub_01221660(void)
{
  return 0x73;
}

// @baa 0x01221670
void __stdcall sub_01221670(int a0) {  }

// @baa 0x01221680
int sub_01221680(int a0, int a1) { return a1; }

// @baa 0x01221690
int sub_01221690(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_022011a8;
// @baa 0x012216a0
undefined4 * UObject::sub_012216a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022011a8);
  return param_1;
}

// @baa 0x012216c0
IMPLEMENT_CLASS_AT(USoundNodeHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\SoundCueEditor.cpp", 13);

// @baa 0x01221720
void USoundNodeHelper::vf_10c(int a0, int a1) {  }

// @baa 0x01221730
struct C_01221750 { C_01221750* sub_01221750(void); };

// @baa 0x01221750
C_01221750* C_01221750::sub_01221750(void) { *(int*)((char*)this + 0) = 0; return this; }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d40a4;
extern undefined4 g_026d40a8;
extern undefined4 g_026d40ac;
// @baa 0x01221760
undefined * sub_01221760(void)
{
  if ((g_026d40ac & 1) == 0) {
    g_026d40ac = g_026d40ac | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d40a4 = (undefined4)(&g_026af518);
    g_026d40a8 = (undefined4)(L"HWidgetUtilProxy");
  }
  return (undefined *)(&g_026d40a4);
}

// @baa 0x012217b0
void __stdcall sub_012217b0(int a0, int a1, int a2) {  }

// @baa 0x012217c0
void sub_012217c0(void) {  }

// @baa 0x012217d0
void sub_012217d0(void) {  }

// @baa 0x01221920
// @baa 0x01221a30
int USoundNodeHelper::vf_000(void) { return 1; }

// @baa 0x01221a40
bool USoundNodeHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01221a80 { int sub_01221a80(void); };

// @baa 0x01221a80
int C_01221a80::sub_01221a80(void) { return *(int*)((char*)this + 392); }

extern char g_01eee2b0[];
struct C_01221d50 { void sub_01221d50(void); };

// @baa 0x01221d50
void C_01221d50::sub_01221d50(void) { *(int*)((char*)this + 0) = (int)g_01eee2b0; }

// @baa 0x01221d60
IMPLEMENT_CLASS_AT(UStaticMeshEditorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp", 22);

// @baa 0x01221e70
int UStaticMeshEditorComponent::vf_000(void) { return 1; }

// @baa 0x01221e80
bool UStaticMeshEditorComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026d40b0;
extern undefined4 g_026d40b4;
extern undefined4 g_026d40b8;
// @baa 0x01221ec0
undefined * sub_01221ec0(void)
{
  if ((g_026d40b8 & 1) == 0) {
    g_026d40b8 = g_026d40b8 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d40b0 = (undefined4)(&g_026af518);
    g_026d40b4 = (undefined4)(L"HSMEChunkProxy");
  }
  return (undefined *)(&g_026d40b0);
}

struct C_01222ab0 { int sub_01222ab0(void); };

// @baa 0x01222ab0
int C_01222ab0::sub_01222ab0(void) { return *(int*)((char*)this + 0); }

struct C_01222bb0 { int sub_01222bb0(void); };

// @baa 0x01222bb0
int C_01222bb0::sub_01222bb0(void) { return *(int*)((char*)this + 0); }

struct C_01222bc0 { int sub_01222bc0(void); };

// @baa 0x01222bc0
int C_01222bc0::sub_01222bc0(void) { return *(int*)((char*)this + 0); }

struct C_01222c40 {
    int sub_01222c40();
};

// @baa 0x01222c40
int C_01222c40::sub_01222c40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01222c80 { int sub_01222c80(void); };

// @baa 0x01222c80
int C_01222c80::sub_01222c80(void) { return *(int*)((char*)this + 0); }

struct C_01222c90 { int sub_01222c90(void); };

// @baa 0x01222c90
int C_01222c90::sub_01222c90(void) { return *(int*)((char*)this + 0); }

struct C_01222ca0 { int sub_01222ca0(void); };

// @baa 0x01222ca0
int C_01222ca0::sub_01222ca0(void) { return *(int*)((char*)this + 0); }

struct C_01222cb0 { int sub_01222cb0(void); };

// @baa 0x01222cb0
int C_01222cb0::sub_01222cb0(void) { return *(int*)((char*)this + 0); }

struct C_01222cc0 { int sub_01222cc0(void); };

// @baa 0x01222cc0
int C_01222cc0::sub_01222cc0(void) { return *(int*)((char*)this + 0); }

struct C_01222cd0 { int sub_01222cd0(void); };

// @baa 0x01222cd0
int C_01222cd0::sub_01222cd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01222ce0 {
    int sub_01222ce0(int);
};

// @baa 0x01222ce0
int C_01222ce0::sub_01222ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01222cf0 { int sub_01222cf0(void); };

// @baa 0x01222cf0
int C_01222cf0::sub_01222cf0(void) { return *(int*)((char*)this + 20); }

struct C_01222d00 { int sub_01222d00(void); };

// @baa 0x01222d00
int C_01222d00::sub_01222d00(void) { return *(int*)((char*)this + 0); }

struct C_01222d10 {
    int sub_01222d10(int);
};

// @baa 0x01222d10
int C_01222d10::sub_01222d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01222d20 { int sub_01222d20(void); };

// @baa 0x01222d20
int C_01222d20::sub_01222d20(void) { return *(int*)((char*)this + 20); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01222f60(INT Index) const;
};

// @baa 0x01222f60
const DWORD* S::sub_01222f60(INT Index) const
{
    return &Items(Index);
}

struct C_012235a0 {
    undefined4 sub_012235a0(byte);
};

int sub_0053dfa0(...);
int sub_01221c00(void);
// @baa 0x012235a0
undefined4 C_012235a0::sub_012235a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01221c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012235c0 {
    undefined4 * sub_012235c0(byte);
};

// @baa 0x012235c0
undefined4 * C_012235c0::sub_012235c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee2b0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E { BYTE Bytes[12]; };

struct S_012252d0 {
    TArray<E> Items; // 0x00
    E* sub_012252d0(INT Index);
};

// @baa 0x012252d0
E* S_012252d0::sub_012252d0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_01225320 {
    int sub_01225320(int);
    int sub_01222a40(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01225320
int C_01225320::sub_01225320(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01225320 *)(this))->sub_01222a40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E_01225360 { BYTE Bytes[80]; };

struct S_01225360 {
    TArray<E_01225360> Items; // 0x00
    E_01225360* sub_01225360(INT Index);
};

// @baa 0x01225360
E_01225360* S_01225360::sub_01225360(INT Index)
{
    return &Items(Index);
}

struct C_012253b0 {
    int sub_012253b0(int);
    int sub_01222ac0(int);
};

// @baa 0x012253b0
int C_012253b0::sub_012253b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_012253b0 *)(this))->sub_01222ac0(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct E_012253f0 { BYTE Bytes[16]; };

struct S_012253f0 {
    TArray<E_012253f0> Items; // 0x00
    E_012253f0* sub_012253f0(INT Index);
};

// @baa 0x012253f0
E_012253f0* S_012253f0::sub_012253f0(INT Index)
{
    return &Items(Index);
}

struct C_01225440 {
    int sub_01225440(int);
    int sub_01222bd0(int);
};

// @baa 0x01225440
int C_01225440::sub_01225440(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01225440 *)(this))->sub_01222bd0(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct C_012254b0{
void sub_012254b0(int*);
};

int sub_0053df70(...);
void*sub_01a375f0(void*,void*,size_t);
// @baa 0x012254b0
void C_012254b0::sub_012254b0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,iVar1*0x10,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(param_1[1]*0x10+*param_1),(void*)*param_2,param_2[1]<<4);
param_1[1]=param_1[1]+param_2[1];
}
return;
}

struct C_01225520 { int sub_01225520(void); };

// @baa 0x01225520
int C_01225520::sub_01225520(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01225530 {
    int sub_01225530(int);
};

// @baa 0x01225530
int C_01225530::sub_01225530(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x7c + *param_1;
}

struct C_01225540 {
    int sub_01225540(int);
};

// @baa 0x01225540
int C_01225540::sub_01225540(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x01225550
void __stdcall sub_01225550(int a0, int a1) {  }

struct C_01225560 {
    int sub_01225560(int);
};

// @baa 0x01225560
int C_01225560::sub_01225560(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01225570 {
    int sub_01225570(int);
};

// @baa 0x01225570
int C_01225570::sub_01225570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01225580 {
    int sub_01225580(int);
};

// @baa 0x01225580
int C_01225580::sub_01225580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xac + *param_1;
}

struct C_01225590 {
    int sub_01225590(int);
};

// @baa 0x01225590
int C_01225590::sub_01225590(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct E_012255a0 { BYTE Bytes[24]; };

struct S_012255a0 {
    TArray<E_012255a0> Items; // 0x00
    E_012255a0* sub_012255a0(INT Index);
};

// @baa 0x012255a0
E_012255a0* S_012255a0::sub_012255a0(INT Index)
{
    return &Items(Index);
}

struct S_012255f0 { int sub_00544d40(int); };

// @baa 0x012255f0
int sub_012255f0(S_012255f0 *s, int a) { return s->sub_00544d40(a); }

struct C_01225600 {
    int sub_01225600(int);
};

// @baa 0x01225600
int C_01225600::sub_01225600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01225610 {
    int sub_01225610();
};

// @baa 0x01225610
int C_01225610::sub_01225610(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01225630 {
    int sub_01225630();
};

// @baa 0x01225630
int C_01225630::sub_01225630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01225640 {
    int sub_01225640(int);
};

// @baa 0x01225640
int C_01225640::sub_01225640(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_012256d0 {
    int sub_012256d0(int);
};

// @baa 0x012256d0
int C_012256d0::sub_012256d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_012256e0 {
    int sub_012256e0();
};

// @baa 0x012256e0
int C_012256e0::sub_012256e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_012256f0 {
    int sub_012256f0();
};

// @baa 0x012256f0
int C_012256f0::sub_012256f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01225710 {
    int sub_01225710();
};

// @baa 0x01225710
int C_01225710::sub_01225710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01226430 {
    undefined4 sub_01226430(byte);
};

int sub_01226390(void);
// @baa 0x01226430
undefined4 C_01226430::sub_01226430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01226390();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0122e980 {
    void sub_0122e980(int);
};

// @baa 0x0122e980
void C_0122e980::sub_0122e980(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0122e9c0 { void* Data; int Num; int Max; void sub_0122e9c0(); };

// @baa 0x0122e9c0
void C_0122e9c0::sub_0122e9c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0122ea20 {
    void sub_0122ea20(int);
};

// @baa 0x0122ea20
void C_0122ea20::sub_0122ea20(int param_2)
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

struct C_0122ea60 {
    void sub_0122ea60(int);
};

// @baa 0x0122ea60
void C_0122ea60::sub_0122ea60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x170,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0122eaa0 { int a, b, c; C_0122eaa0(); };

// @baa 0x0122eaa0
C_0122eaa0::C_0122eaa0() : a(0), b(0), c(0) {}

// @baa 0x0122eab0
void __stdcall sub_0122eab0(int a0, int a1) {  }

struct C_0122eac0 {
    int sub_0122eac0(int);
};

// @baa 0x0122eac0
int C_0122eac0::sub_0122eac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0122ead0 {
    int sub_0122ead0();
};

// @baa 0x0122ead0
int C_0122ead0::sub_0122ead0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0122eaf0 {
    int sub_0122eaf0();
};

// @baa 0x0122eaf0
int C_0122eaf0::sub_0122eaf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0122eb00 {
    int sub_0122eb00();
};

// @baa 0x0122eb00
int C_0122eb00::sub_0122eb00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_0040fcc0();
// @baa 0x0122eb30
void sub_0122eb30(void) { sub_0040fcc0(); }

// @baa 0x0122ebc0
int UUnrealEdEngine::sub_0122ebc0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_view_0122ec70 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x0122ec70
undefined4 * UObject::sub_0122ec70(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_0122ec70 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

struct C_0122ed00 {
    int sub_0122ed00();
};

// @baa 0x0122ed00
int C_0122ed00::sub_0122ed00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x0122ed10
void sub_0122ed10(void) { sub_0040fcc0(); }

struct C_view_0122f540 {
    int sub_00417dc0(int);
};

// @baa 0x0122f540
undefined4 * UObject::sub_0122f540(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_0122f540 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_0122f760 {
    void sub_0122f760();
};

// @baa 0x0122f760
void C_0122f760::sub_0122f760(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
    if (*(int *)(param_1 + 0x184) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x184),0,8);
      *(undefined4 *)(param_1 + 0x184) = uVar1;
    }
  }
  return;
}
