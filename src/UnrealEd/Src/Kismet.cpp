// Kismet.cpp (part 1 of 4): 254 functions
// Placed here by: neighbours 218, class 19, callers 15, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0062c100
void __stdcall sub_0062c100(int a0, int a1, int a2) {  }

int sub_008c8a90(...);
int sub_008cfe80(void);
extern undefined4 g_026b5ad0;
// @baa 0x008d3100
int sub_008d3100(void)
{
  if (g_026b5ad0 == 0) {
    g_026b5ad0 = sub_008c8a90(L"Engine");
    sub_008cfe80();
  }
  return g_026b5ad0;
}

int sub_008f1cc0(...);
int sub_008fa830(void);
extern undefined4 g_026b5bac;
// @baa 0x008feee0
int sub_008feee0(void)
{
  if (g_026b5bac == 0) {
    g_026b5bac = sub_008f1cc0(L"Engine");
    sub_008fa830();
  }
  return g_026b5bac;
}

int sub_008f1780(...);
int sub_008f9f00(void);
extern undefined4 g_026b5b90;
// @baa 0x008ff090
int sub_008ff090(void)
{
  if (g_026b5b90 == 0) {
    g_026b5b90 = sub_008f1780(L"Engine");
    sub_008f9f00();
  }
  return g_026b5b90;
}

int sub_008f1000(...);
int sub_008f91e0(void);
extern undefined4 g_026b5b68;
// @baa 0x00c996b0
int sub_00c996b0(void)
{
  if (g_026b5b68 == 0) {
    g_026b5b68 = sub_008f1000(L"Engine");
    sub_008f91e0();
  }
  return g_026b5b68;
}

// @baa 0x011167b0
int __stdcall sub_011167b0(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x011167c0
int UKismetBindings::sub_011167c0(void) { return *(int*)((char*)this + 376); }

// @baa 0x011192d0
void sub_011192d0(void) {  }

int sub_0153d3d0(void);
int sub_01549870(...);
extern undefined4 g_026e1090;
// @baa 0x0118ff30
int sub_0118ff30(void)
{
  if (g_026e1090 == 0) {
    g_026e1090 = sub_01549870(L"CommonGame");
    sub_0153d3d0();
  }
  return g_026e1090;
}

int sub_0153d690(void);
int sub_015425d0(...);
extern undefined4 g_026e1098;
// @baa 0x0118ff60
int sub_0118ff60(void)
{
  if (g_026e1098 == 0) {
    g_026e1098 = sub_015425d0(L"CommonGame");
    sub_0153d690();
  }
  return g_026e1098;
}

int sub_0153d530(void);
int sub_01542510(...);
extern undefined4 g_026e1094;
// @baa 0x0118ff90
int sub_0118ff90(void)
{
  if (g_026e1094 == 0) {
    g_026e1094 = sub_01542510(L"CommonGame");
    sub_0153d530();
  }
  return g_026e1094;
}

struct C { char* sub_0118ffc0(void); };

// @baa 0x0118ffc0
char* C::sub_0118ffc0(void) { return (char*)this + 432; }

// @baa 0x0118fff0
int UKismetBindings::sub_0118fff0(void) { return *(int*)((char*)this + 424); }

struct FOO {
  int __thiscall sub_00f71ab0(void);
};

extern undefined4 g_026cce28;
// @baa 0x01190000
void sub_01190000(void)
{
  ((FOO *)g_026cce28)->sub_00f71ab0();
}

extern char g_021d5f98[];
// @baa 0x01190010
int sub_01190010(void) { return (int)g_021d5f98; }

extern char g_026d12e0[];
// @baa 0x01190020
int sub_01190020(void) { return (int)g_026d12e0; }

// @baa 0x01190050
void sub_01190050(void) {  }

// @baa 0x01190160
void __stdcall sub_01190160(int a0) {  }

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_01190170;
};

struct C_01190170 {
    void sub_01190170(wxCommandEvent *);
    int sub_01277c80();
};

// @baa 0x01190170
void C_01190170::sub_01190170(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x31c) = (uint)bVar1;
  ((C_01190170 *)(this))->sub_01277c80();
  return;
}

extern char g_025e8678[];
// @baa 0x011901a0
int sub_011901a0(void) { return (int)g_025e8678; }

extern char g_026d184c[];
// @baa 0x011901b0
int sub_011901b0(void) { return (int)g_026d184c; }

extern char g_025e8680[];
// @baa 0x011902d0
int sub_011902d0(void) { return (int)g_025e8680; }

extern char g_026d1878[];
// @baa 0x011902e0
int sub_011902e0(void) { return (int)g_026d1878; }

struct C_01191ea0 {
    void sub_01191ea0(int *, int *);
};

// @baa 0x01191ea0
void C_01191ea0::sub_01191ea0(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  *param_3 = (param_1[2] - *param_1) / 2;
  param_3[1] = (param_1[3] - param_1[1]) / 2;
  *param_2 = *param_3 + *param_1;
  param_2[1] = param_1[1] + param_3[1];
  return;
}

struct C_01191ee0 {
    int Unk0;
    int Unk4;
    int sub_01191ee0();
};

// @baa 0x01191ee0
int C_01191ee0::sub_01191ee0()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_01191ef0 { int sub_01191ef0(void); };

// @baa 0x01191ef0
int C_01191ef0::sub_01191ef0(void) { return *(int*)((char*)this + 4); }

struct C_01191f00 { int sub_01191f00(void); };

// @baa 0x01191f00
int C_01191f00::sub_01191f00(void) { return *(int*)((char*)this + 4); }

// @baa 0x01191f60
undefined2 sub_01191f60(void)
{
  return 0x73;
}

struct C_01191f70 { C_01191f70* sub_01191f70(int a0); };

// @baa 0x01191f70
C_01191f70* C_01191f70::sub_01191f70(int a0) { return this; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01191fc0
void sub_01191fc0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01191fe0 { C_01191fe0* sub_01191fe0(int a0); };

// @baa 0x01191fe0
C_01191fe0* C_01191fe0::sub_01191fe0(int a0) { return this; }

struct C_01191ff0 { C_01191ff0* sub_01191ff0(int a0); };

// @baa 0x01191ff0
C_01191ff0* C_01191ff0::sub_01191ff0(int a0) { return this; }

struct C_01192080 { void sub_01192080(int a0); };

// @baa 0x01192080
void C_01192080::sub_01192080(int a0) { *(int*)((char*)this + 776) = a0; }

struct C_01192090 { int sub_01192090(void); };

// @baa 0x01192090
int C_01192090::sub_01192090(void) { return *(int*)((char*)this + 780); }

struct C_011920a0 { int sub_011920a0(void); };

// @baa 0x011920a0
int C_011920a0::sub_011920a0(void) { return *(int*)((char*)this + 784); }

struct C_011920b0 { void sub_011920b0(int a0); };

// @baa 0x011920b0
void C_011920b0::sub_011920b0(int a0) { *(int*)((char*)this + 784) = a0; }

// @baa 0x011920c0
int sub_011920c0(int a0, int a1) { return a1; }

extern char g_02019ce8[];
// @baa 0x011920d0
int sub_011920d0(void) { return (int)g_02019ce8; }

// @baa 0x011920e0
int sub_011920e0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_021dd600;
// @baa 0x011920f0
undefined4 * UObject::sub_011920f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021dd600);
  return param_1;
}

// @baa 0x01192110
IMPLEMENT_CLASS_AT(USequenceObjectHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Kismet.cpp", 49);

// @baa 0x01192170
void USequenceObjectHelper::vf_10c(int a0, int a1) {  }

// @baa 0x01192180
void USequenceObjectHelper::vf_110(int a0) {  }

// @baa 0x011921b0
int sub_0127c3b0(void);
int sub_01297af0(...);
extern undefined4 g_026d4e0c;
// @baa 0x011921d0
int sub_011921d0(void)
{
  if (g_026d4e0c == 0) {
    g_026d4e0c = sub_01297af0(L"UnrealEd");
    sub_0127c3b0();
  }
  return g_026d4e0c;
}

struct C_01192200 { char* sub_01192200(void); };

// @baa 0x01192200
char* C_01192200::sub_01192200(void) { return (char*)this + 416; }

struct C_01192210 { C_01192210* sub_01192210(int a0); };

// @baa 0x01192210
C_01192210* C_01192210::sub_01192210(int a0) { return this; }

struct C_01192220 { C_01192220* sub_01192220(int a0); };

// @baa 0x01192220
C_01192220* C_01192220::sub_01192220(int a0) { return this; }

struct C_01192230 { int sub_01192230(void); };

// @baa 0x01192230
int C_01192230::sub_01192230(void) { return *(int*)((char*)this + 0); }

struct C_01192240 { int sub_01192240(void); };

// @baa 0x01192240
int C_01192240::sub_01192240(void) { return *(int*)((char*)this + 0); }

struct C_01192250 { int sub_01192250(void); };

// @baa 0x01192250
int C_01192250::sub_01192250(void) { return *(int*)((char*)this + 0); }

struct C_01192260 { int sub_01192260(void); };

// @baa 0x01192260
int C_01192260::sub_01192260(void) { return *(int*)((char*)this + 0); }

// @baa 0x01192270
IMPLEMENT_CLASS_AT(UKismetBindings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Kismet.cpp", 48);

// @baa 0x011923a0
bool UKismetBindings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011923e0
// @baa 0x011924f0
int USequenceObjectHelper::vf_000(void) { return 1; }

// @baa 0x01192500
bool USequenceObjectHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01192540
void sub_01192540(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x011925c0
int UKismetBindings::sub_011925c0(void) { return *(int*)((char*)this + 412); }

struct C_01193e70 {
    int sub_01193e70(int);
};

// @baa 0x01193e70
int C_01193e70::sub_01193e70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01193eb0 {
    int sub_01193eb0(int);
};

// @baa 0x01193eb0
int C_01193eb0::sub_01193eb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01193ec0 {
    int sub_01193ec0(int);
};

// @baa 0x01193ec0
int C_01193ec0::sub_01193ec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01193ed0 {
    int sub_01193ed0(int);
};

// @baa 0x01193ed0
int C_01193ed0::sub_01193ed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x01193ee0
int sub_01193ee0(int a0) { return a0; }

struct C_01193ef0 {
    int sub_01193ef0(int);
};

// @baa 0x01193ef0
int C_01193ef0::sub_01193ef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01193f00 {
    int sub_01193f00(int);
};

// @baa 0x01193f00
int C_01193f00::sub_01193f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01193f10 { int sub_01193f10(void); };

// @baa 0x01193f10
int C_01193f10::sub_01193f10(void) { return *(int*)((char*)this + 20); }

// @baa 0x01193f20
void sub_01193f20(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01193f40 {
    int sub_01193f40(int);
};

// @baa 0x01193f40
int C_01193f40::sub_01193f40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01193f80 {
    int sub_01193f80(int);
};

// @baa 0x01193f80
int C_01193f80::sub_01193f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01193fa0 {
    int sub_01193fa0(int);
};

// @baa 0x01193fa0
int C_01193fa0::sub_01193fa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01193fb0 { int sub_01193fb0(void); };

// @baa 0x01193fb0
int C_01193fb0::sub_01193fb0(void) { return *(int*)((char*)this + 20); }

struct C_01193fc0 { int sub_01193fc0(void); };

// @baa 0x01193fc0
int C_01193fc0::sub_01193fc0(void) { return *(int*)((char*)this + 20); }

struct C_01193fd0 { int sub_01193fd0(void); };

// @baa 0x01193fd0
int C_01193fd0::sub_01193fd0(void) { return *(int*)((char*)this + 20); }

struct C_01193fe0 { int sub_01193fe0(void); };

// @baa 0x01193fe0
int C_01193fe0::sub_01193fe0(void) { return *(int*)((char*)this + 20); }

struct C_01193ff0 { int sub_01193ff0(void); };

// @baa 0x01193ff0
int C_01193ff0::sub_01193ff0(void) { return *(int*)((char*)this + 20); }

struct C_01194000 { int sub_01194000(void); };

// @baa 0x01194000
int C_01194000::sub_01194000(void) { return *(int*)((char*)this + 20); }

struct C_01194010 { int sub_01194010(void); };

// @baa 0x01194010
int C_01194010::sub_01194010(void) { return *(int*)((char*)this + 20); }

struct C_01194020 { int sub_01194020(void); };

// @baa 0x01194020
int C_01194020::sub_01194020(void) { return *(int*)((char*)this + 20); }

struct C_01194030 { int sub_01194030(void); };

// @baa 0x01194030
int C_01194030::sub_01194030(void) { return *(int*)((char*)this + 20); }

int sub_005d88c0(...);
int sub_008f0100(...);
int sub_008f78c0(void);
extern undefined4 g_026b5ac0;
// @baa 0x01194430
void sub_01194430(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5ac0 == 0) {
    g_026b5ac0 = sub_008f0100(L"Engine");
    sub_008f78c0();
  }
  sub_005d88c0(g_026b5ac0,param_1,param_2,param_3);
  return;
}

int sub_008cffd0(void);
int sub_008f0400(...);
extern undefined4 g_026b5adc;
// @baa 0x01194470
void sub_01194470(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b5adc == 0) {
    g_026b5adc = sub_008f0400(L"Engine");
    sub_008cffd0();
  }
  sub_005d88c0(g_026b5adc,param_1,param_2,param_3);
  return;
}

// @baa 0x01194510
void sub_01194510(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01194560
void sub_01194560(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01194580
void sub_01194580(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

extern "C" void sub_01191f10();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_011945d0();
};

// @baa 0x011945d0
void CNode::sub_011945d0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_01191f10();
}

struct D {
    char pad0[4];
    D *ViewParent;
    int RefCount;
};

struct C_011945e0 {
    char pad0[4];
    D *ViewParent;
    void sub_011945e0(D *in);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x011945e0
void C_011945e0::sub_011945e0(D *in)
{
    if (ViewParent != 0) {
        if (ViewParent->ViewParent != 0) {
            sub_006311e0("!ViewParent->HasViewParent()",
                         "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h",
                         0xad, &g_01e3f3dc);
        }
        ViewParent->RefCount = ViewParent->RefCount - 1;
    }
    if (in != 0 && (void *)in != (void *)this) {
        if (in->ViewParent != 0) {
            sub_006311e0("!InViewParent->HasViewParent()",
                         "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Scene.h",
                         0xb5, &g_01e3f3dc);
        }
        ViewParent = in;
        in->RefCount = in->RefCount + 1;
        return;
    }
    ViewParent = 0;
}

// @baa 0x01194660
// @baa 0x01194680
int USequenceObjectHelper::sub_01194680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x01194690
int USequenceObjectHelper::sub_01194690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
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
	FFaceFXElement* sub_011946a0(INT Index);
};

// @baa 0x011946a0
FFaceFXElement* UFxRenderWidget::sub_011946a0(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[24]; };

struct S_011946f0 {
    TArray<E> Items; // 0x00
    E* sub_011946f0(INT Index);
};

// @baa 0x011946f0
E* S_011946f0::sub_011946f0(INT Index)
{
    return &Items(Index);
}

// @baa 0x01194740
struct C_view {
    int sub_011941c0(int, int, int, int, int);
};

// @baa 0x01194d40
void UKismetBindings::sub_01194d40(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x154))))->sub_011941c0(param_1 + 0x198, 1, 1, 0, 0);
  return;
}

struct C_01196500{
void sub_01196500(int*);
};

int sub_0053df70(...);
void*sub_01a375f0(void*,void*,size_t);
// @baa 0x01196500
void C_01196500::sub_01196500(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1!=0)||(iVar1!=0)){
iVar1=sub_0053df70(*param_1,4*iVar1,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_1[1]+param_2[1];
}
return;
}

struct C_01196570 {
    int sub_01196570(undefined4 *, int);
    int sub_01193850(int, int);
};

// @baa 0x01196570
int C_01196570::sub_01196570(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_01196570 *)(this))->sub_01193850(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_011965a0 {
    void sub_011965a0(int);
};

// @baa 0x011965a0
void C_011965a0::sub_011965a0(int param_2)
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

struct C_011965e0 {
    void sub_011965e0(int, int);
};

int sub_00627f00(...);
// @baa 0x011965e0
void C_011965e0::sub_011965e0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

struct S_01196660 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_01196660(INT Index);
};

// @baa 0x01196660
DWORD* S_01196660::sub_01196660(INT Index)
{
    return &Items(Index);
}

struct S_01196710 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_01196710(INT Index);
};

// @baa 0x01196710
QWORD* S_01196710::sub_01196710(INT Index)
{
    return &Items(Index);
}

struct S_011967c0 {
    TArray<E> Items; // 0x00
    E* sub_011967c0(INT Index);
};

// @baa 0x011967c0
E* S_011967c0::sub_011967c0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_01196810 {
    int sub_01196810(int);
    int sub_01193a30(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01196810
int C_01196810::sub_01196810(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01196810 *)(this))->sub_01193a30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct S_01196850 {
    TArray<E> Items; // 0x00
    E* sub_01196850(INT Index);
};

// @baa 0x01196850
E* S_01196850::sub_01196850(INT Index)
{
    return &Items(Index);
}

struct C_011968a0 {
    int sub_011968a0(int);
    int sub_01193ac0(int);
};

// @baa 0x011968a0
int C_011968a0::sub_011968a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_011968a0 *)(this))->sub_01193ac0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct S_011968e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_011968e0(INT Index);
};

// @baa 0x011968e0
DWORD* S_011968e0::sub_011968e0(INT Index)
{
    return &Items(Index);
}

struct C_01196960 {
    int sub_01196960(int);
};

// @baa 0x01196960
int C_01196960::sub_01196960(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x01196970
void __stdcall sub_01196970(int a0, int a1) {  }

struct C_01196980 {
    int sub_01196980(int);
};

// @baa 0x01196980
int C_01196980::sub_01196980(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x01196990
void __stdcall sub_01196990(int a0, int a1) {  }

struct C_011969a0 {
    int sub_011969a0(int);
};

// @baa 0x011969a0
int C_011969a0::sub_011969a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011969b0 {
    int sub_011969b0(int);
};

// @baa 0x011969b0
int C_011969b0::sub_011969b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011969c0 {
    int sub_011969c0(int);
};

// @baa 0x011969c0
int C_011969c0::sub_011969c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x011969d0
void __stdcall sub_011969d0(int a0, int a1) {  }

struct C_011969e0 { int sub_011969e0(void); };

// @baa 0x011969e0
int C_011969e0::sub_011969e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_011969f0 {
    int sub_011969f0(int);
};

// @baa 0x011969f0
int C_011969f0::sub_011969f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01196a30 {
    int sub_01196a30(int);
};

// @baa 0x01196a30
int C_01196a30::sub_01196a30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01196ad0 {
    int sub_01196ad0(int);
};

// @baa 0x01196ad0
int C_01196ad0::sub_01196ad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01196af0 {
    int sub_01196af0(int);
};

// @baa 0x01196af0
int C_01196af0::sub_01196af0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_01196b00 { int sub_00544d40(int); };

// @baa 0x01196b00
int sub_01196b00(S_01196b00 *s, int a) { return s->sub_00544d40(a); }

struct C_01196b10 {
    int sub_01196b10(int);
};

// @baa 0x01196b10
int C_01196b10::sub_01196b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01196b20 {
    int sub_01196b20(int);
};

// @baa 0x01196b20
int C_01196b20::sub_01196b20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01196b30 {
    int sub_01196b30(int);
};

// @baa 0x01196b30
int C_01196b30::sub_01196b30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01196b40 {
    int sub_01196b40(int);
};

// @baa 0x01196b40
int C_01196b40::sub_01196b40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01196b50 {
    int sub_01196b50();
};

// @baa 0x01196b50
int C_01196b50::sub_01196b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196b70 {
    int sub_01196b70();
};

// @baa 0x01196b70
int C_01196b70::sub_01196b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_005413d0(...);
// @baa 0x01196b80
void sub_01196b80(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01196b90 {
    int sub_01196b90(int);
};

// @baa 0x01196b90
int C_01196b90::sub_01196b90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x01196ba0
void sub_01196ba0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01196bc0 {
    int sub_01196bc0(int);
};

// @baa 0x01196bc0
int C_01196bc0::sub_01196bc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x01196c40
void sub_01196c40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_01196c50 {
    int sub_01196c50(int);
};

// @baa 0x01196c50
int C_01196c50::sub_01196c50(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_01196d10 {
    int sub_01196d10();
};

// @baa 0x01196d10
int C_01196d10::sub_01196d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01196d20 {
    int sub_01196d20();
};

// @baa 0x01196d20
int C_01196d20::sub_01196d20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196d40 {
    int sub_01196d40();
};

// @baa 0x01196d40
int C_01196d40::sub_01196d40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01196d50 {
    int sub_01196d50();
};

// @baa 0x01196d50
int C_01196d50::sub_01196d50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196d70 {
    int sub_01196d70();
};

// @baa 0x01196d70
int C_01196d70::sub_01196d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01196d90 {
    int sub_01196d90();
};

// @baa 0x01196d90
int C_01196d90::sub_01196d90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196db0 {
    int sub_01196db0();
};

// @baa 0x01196db0
int C_01196db0::sub_01196db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01196dc0 {
    int sub_01196dc0();
};

// @baa 0x01196dc0
int C_01196dc0::sub_01196dc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196de0 {
    int sub_01196de0();
};

// @baa 0x01196de0
int C_01196de0::sub_01196de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01196df0 {
    int sub_01196df0();
};

// @baa 0x01196df0
int C_01196df0::sub_01196df0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196e10 {
    int sub_01196e10();
};

// @baa 0x01196e10
int C_01196e10::sub_01196e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01196e20 {
    int sub_01196e20();
};

// @baa 0x01196e20
int C_01196e20::sub_01196e20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196e40 {
    int sub_01196e40();
};

// @baa 0x01196e40
int C_01196e40::sub_01196e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01196e60 {
    int sub_01196e60();
};

// @baa 0x01196e60
int C_01196e60::sub_01196e60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196e80 {
    int sub_01196e80();
};

// @baa 0x01196e80
int C_01196e80::sub_01196e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01196e90 {
    int sub_01196e90();
};

// @baa 0x01196e90
int C_01196e90::sub_01196e90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196eb0 {
    int sub_01196eb0();
};

// @baa 0x01196eb0
int C_01196eb0::sub_01196eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01196ec0 {
    int sub_01196ec0();
};

// @baa 0x01196ec0
int C_01196ec0::sub_01196ec0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01196ee0 {
    int sub_01196ee0();
};

// @baa 0x01196ee0
int C_01196ee0::sub_01196ee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_011923e0(void);
int sub_01194740(...);
extern undefined4 g_026d12dc;
// @baa 0x01197810
int sub_01197810(void)
{
  if (g_026d12dc == 0) {
    g_026d12dc = sub_01194740(L"UnrealEd");
    sub_011923e0();
  }
  return g_026d12dc;
}

// @baa 0x01197840
void __stdcall sub_01197840(int a0, int a1) {  }

// @baa 0x01197850
void __stdcall sub_01197850(int a0, int a1) {  }

void sub_004025d0(void*);
struct D_011a0a40 { void* p; ~D_011a0a40(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_011a0a40 { void* Data; int Num; int Max; void sub_011a0a40(); };

// @baa 0x011a0a40
void C_011a0a40::sub_011a0a40() {
    void* t = Data;
    {
    D_011a0a40 d;
    Max = 0; Num = 0;
    d.~D_011a0a40();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_011a0af0;
// @baa 0x011a0af0
template INT TArray<T_011a0af0*>::RemoveItem(T_011a0af0* const&);

struct D_011a0b70 { void* p; ~D_011a0b70(){ if(0) sub_004025d0(p);} };

struct C_011a0b70 { void* Data; int Num; int Max; void sub_011a0b70(); };

// @baa 0x011a0b70
void C_011a0b70::sub_011a0b70() {
    void* t = Data;
    {
    D_011a0b70 d;
    Max = 0; Num = 0;
    d.~D_011a0b70();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_011a0c10 { void* p; ~D_011a0c10(){ if(0) sub_004025d0(p);} };

struct C_011a0c10 { void* Data; int Num; int Max; void sub_011a0c10(); };

// @baa 0x011a0c10
void C_011a0c10::sub_011a0c10() {
    void* t = Data;
    {
    D_011a0c10 d;
    Max = 0; Num = 0;
    d.~D_011a0c10();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_011a0c70 {
    int sub_011a0c70();
};

// @baa 0x011a0c70
int C_011a0c70::sub_011a0c70(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_011a0cd0 {
    int sub_011a0cd0(int);
};

// @baa 0x011a0cd0
int C_011a0cd0::sub_011a0cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011a0ce0 {
    int sub_011a0ce0(int);
};

// @baa 0x011a0ce0
int C_011a0ce0::sub_011a0ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_011a0d00 {
    int sub_011a0d00(int);
};

// @baa 0x011a0d00
int C_011a0d00::sub_011a0d00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011a0d10 {
    int sub_011a0d10(int);
};

// @baa 0x011a0d10
int C_011a0d10::sub_011a0d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_011a0d20 {
    int sub_011a0d20(int);
};

// @baa 0x011a0d20
int C_011a0d20::sub_011a0d20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_011a0d30 {
    int sub_011a0d30();
};

// @baa 0x011a0d30
int C_011a0d30::sub_011a0d30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_011a0d50 {
    int sub_011a0d50();
};

// @baa 0x011a0d50
int C_011a0d50::sub_011a0d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_011a0d70 {
    undefined4 sub_011a0d70(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x011a0d70
undefined4 C_011a0d70::sub_011a0d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_011a0d70 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_011a0da0 { void sub_011a0b70(); };

struct C_011a0da0 { char pad[12]; M_011a0da0 m; void sub_011a0da0(); };

// @baa 0x011a0da0
void C_011a0da0::sub_011a0da0() { m.sub_011a0b70(); }

struct M_011a0db0 { void sub_011a0b70(); };

struct C_011a0db0 { char pad[12]; M_011a0db0 m; void sub_011a0db0(); };

// @baa 0x011a0db0
void C_011a0db0::sub_011a0db0() { m.sub_011a0b70(); }

// @baa 0x011a0e40
int UTexture2D::sub_011a0e40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x011a0f30
int UTexture2D::sub_011a0f30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x011a0fd0
int UTexture2D::sub_011a0fd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x011a10d0
int UTexture2D::sub_011a10d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_view_011a1180 {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x011a1180
undefined4 * UObject::sub_011a1180(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view_011a1180 *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

// @baa 0x011a1270
int UObject::sub_011a1270(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

void sub_0040fcc0();
// @baa 0x011a12e0
void sub_011a12e0(void) { sub_0040fcc0(); }

struct C_view_011a16b0 {
    int sub_00417dc0(int);
};

// @baa 0x011a16b0
undefined4 * UObject::sub_011a16b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_011a16b0 *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_011a16f0 {
    undefined4 * sub_011a16f0(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x011a16f0
undefined4 * C_011a16f0::sub_011a16f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_011a16f0 *)(((char *)this + 4)))->sub_00547da0((int)(param_2 + 1));
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}

struct D_011a1a10 { void* p; ~D_011a1a10(){ if(0) sub_004025d0(p);} };

struct C_011a1a10 { void* Data; int Num; int Max; void sub_011a1a10(); };

// @baa 0x011a1a10
void C_011a1a10::sub_011a1a10() {
    void* t = Data;
    {
    D_011a1a10 d;
    Max = 0; Num = 0;
    d.~D_011a1a10();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_011a1a70 { void* p; ~D_011a1a70(){ if(0) sub_004025d0(p);} };

struct C_011a1a70 { void* Data; int Num; int Max; void sub_011a1a70(); };

// @baa 0x011a1a70
void C_011a1a70::sub_011a1a70() {
    void* t = Data;
    {
    D_011a1a70 d;
    Max = 0; Num = 0;
    d.~D_011a1a70();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view_011ad0b0 {
    int sub_011a0ec0(int, int);
};

// @baa 0x011ad0b0
int UTexture2D::sub_011ad0b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_011ad0b0 *)(this))->sub_011a0ec0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_011ad1a0 {
    int sub_011a1050(int, int);
};

// @baa 0x011ad1a0
undefined4 UTexture2D::sub_011ad1a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_011ad1a0 *)(this))->sub_011a1050((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
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

struct TConstSetBitIterator_011ad3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011ad3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011ad3b0& operator++();
};

TConstSetBitIterator_011ad3b0::TConstSetBitIterator_011ad3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011ad3b0
TConstSetBitIterator_011ad3b0& TConstSetBitIterator_011ad3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adaf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adaf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adaf0& operator++();
};

TConstSetBitIterator_011adaf0::TConstSetBitIterator_011adaf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adaf0
TConstSetBitIterator_011adaf0& TConstSetBitIterator_011adaf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adb40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adb40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adb40& operator++();
};

TConstSetBitIterator_011adb40::TConstSetBitIterator_011adb40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adb40
TConstSetBitIterator_011adb40& TConstSetBitIterator_011adb40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adb90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adb90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adb90& operator++();
};

TConstSetBitIterator_011adb90::TConstSetBitIterator_011adb90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adb90
TConstSetBitIterator_011adb90& TConstSetBitIterator_011adb90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adbe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adbe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adbe0& operator++();
};

TConstSetBitIterator_011adbe0::TConstSetBitIterator_011adbe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adbe0
TConstSetBitIterator_011adbe0& TConstSetBitIterator_011adbe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adc30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adc30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adc30& operator++();
};

TConstSetBitIterator_011adc30::TConstSetBitIterator_011adc30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adc30
TConstSetBitIterator_011adc30& TConstSetBitIterator_011adc30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011ade60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011ade60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011ade60& operator++();
};

TConstSetBitIterator_011ade60::TConstSetBitIterator_011ade60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011ade60
TConstSetBitIterator_011ade60& TConstSetBitIterator_011ade60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adeb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adeb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adeb0& operator++();
};

TConstSetBitIterator_011adeb0::TConstSetBitIterator_011adeb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adeb0
TConstSetBitIterator_011adeb0& TConstSetBitIterator_011adeb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adf00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adf00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adf00& operator++();
};

TConstSetBitIterator_011adf00::TConstSetBitIterator_011adf00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adf00
TConstSetBitIterator_011adf00& TConstSetBitIterator_011adf00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adf50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adf50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adf50& operator++();
};

TConstSetBitIterator_011adf50::TConstSetBitIterator_011adf50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adf50
TConstSetBitIterator_011adf50& TConstSetBitIterator_011adf50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_011adfa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011adfa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011adfa0& operator++();
};

TConstSetBitIterator_011adfa0::TConstSetBitIterator_011adfa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011adfa0
TConstSetBitIterator_011adfa0& TConstSetBitIterator_011adfa0::operator++()
{
    It.Advance();
    return *this;
}

void sub_011aaf80();
// @baa 0x011adff0
void sub_011adff0(void) { sub_011aaf80(); }

extern undefined * g_021ddf88;
// @baa 0x011ae000
undefined4 * UObject::sub_011ae000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021ddf88);
  return param_1;
}

// @baa 0x011ae020
// @baa 0x011ae0a0
struct TConstSetBitIterator_011af940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011af940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011af940& operator++();
};

TConstSetBitIterator_011af940::TConstSetBitIterator_011af940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011af940
TConstSetBitIterator_011af940& TConstSetBitIterator_011af940::operator++()
{
    It.Advance();
    return *this;
}

struct C_011af960 {
    void sub_011af960();
    int sub_011ad3d0(int);
};

// @baa 0x011af960
void C_011af960::sub_011af960(void)
{
    int param_1 = (int)this;
  ((C_011af960 *)((*(char **)((char *)this + 0x10))))->sub_011ad3d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_011af980 {
    void sub_011af980();
    int sub_011ad530(int);
};

// @baa 0x011af980
void C_011af980::sub_011af980(void)
{
    int param_1 = (int)this;
  ((C_011af980 *)((*(char **)((char *)this + 0x10))))->sub_011ad530(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_011af9a0 {
    void sub_011af9a0();
    int sub_011ad6c0(int);
};

// @baa 0x011af9a0
void C_011af9a0::sub_011af9a0(void)
{
    int param_1 = (int)this;
  ((C_011af9a0 *)((*(char **)((char *)this + 0x10))))->sub_011ad6c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_011af9c0 {
    void sub_011af9c0();
    int sub_011ad820(int);
};

// @baa 0x011af9c0
void C_011af9c0::sub_011af9c0(void)
{
    int param_1 = (int)this;
  ((C_011af9c0 *)((*(char **)((char *)this + 0x10))))->sub_011ad820(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_011af9e0 {
    void sub_011af9e0();
    int sub_011ad990(int);
};

// @baa 0x011af9e0
void C_011af9e0::sub_011af9e0(void)
{
    int param_1 = (int)this;
  ((C_011af9e0 *)((*(char **)((char *)this + 0x10))))->sub_011ad990(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_011b05a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_011b05a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_011b05a0& operator++();
};

TConstSetBitIterator_011b05a0::TConstSetBitIterator_011b05a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x011b05a0
TConstSetBitIterator_011b05a0& TConstSetBitIterator_011b05a0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x011b07c0
// @baa 0x011b07e0
int sub_011adc80(void);
// @baa 0x011b50d0
int UTexture2D::sub_011b50d0(void)
{
    int param_1 = (int)this;

  sub_011adc80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011adce0(void);
// @baa 0x011b50f0
int UTexture2D::sub_011b50f0(void)
{
    int param_1 = (int)this;

  sub_011adce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011add40(void);
// @baa 0x011b5110
int UTexture2D::sub_011b5110(void)
{
    int param_1 = (int)this;

  sub_011add40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011adda0(void);
// @baa 0x011b5130
int UTexture2D::sub_011b5130(void)
{
    int param_1 = (int)this;

  sub_011adda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011ade00(void);
// @baa 0x011b5150
int UTexture2D::sub_011b5150(void)
{
    int param_1 = (int)this;

  sub_011ade00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01192270(void);
int sub_011b07e0(...);
extern undefined4 g_026d12d8;
// @baa 0x011b5170
int sub_011b5170(void)
{
  if (g_026d12d8 == 0) {
    g_026d12d8 = sub_011b07e0(L"UnrealEd");
    sub_01192270();
  }
  return g_026d12d8;
}

struct C_view_011b5b80 {
    int sub_011b4bd0(int, int);
};

// @baa 0x011b5b80
void UTexture2D::sub_011b5b80(void)
{
    int param_1 = (int)this;
  ((C_view_011b5b80 *)(this))->sub_011b4bd0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_011b5e40 {
    int sub_011b4e10(int, int);
};

// @baa 0x011b5e40
undefined4 UTexture2D::sub_011b5e40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_011b5e40 *)(this))->sub_011b4e10(param_2, param_3);
  return param_1;
}

struct C_view_011b5e60 {
    int sub_011b4e70(int, int);
};

// @baa 0x011b5e60
int UTexture2D::sub_011b5e60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_011b5e60 *)(this))->sub_011b4e70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_011b5e80 {
    int sub_011b4ef0(int, int);
};

// @baa 0x011b5e80
int UTexture2D::sub_011b5e80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_011b5e80 *)(this))->sub_011b4ef0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_011b5ea0 {
    int sub_011b4f60(int, int);
};

// @baa 0x011b5ea0
int UTexture2D::sub_011b5ea0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_011b5ea0 *)(this))->sub_011b4f60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_011b5ec0 {
    int sub_011b4fe0(int, int);
};

// @baa 0x011b5ec0
int UTexture2D::sub_011b5ec0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_011b5ec0 *)(this))->sub_011b4fe0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_011b5ee0 {
    int sub_011b5060(int, int);
};

// @baa 0x011b5ee0
int UTexture2D::sub_011b5ee0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_011b5ee0 *)(this))->sub_011b5060(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x011b5f00
int UTexture2D::sub_011b5f00(void)
{
    int param_1 = (int)this;

  sub_011adc80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b5f20
int UTexture2D::sub_011b5f20(void)
{
    int param_1 = (int)this;

  sub_011adce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b5f40
int UTexture2D::sub_011b5f40(void)
{
    int param_1 = (int)this;

  sub_011add40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b5f60
int UTexture2D::sub_011b5f60(void)
{
    int param_1 = (int)this;

  sub_011adda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b5f80
int UTexture2D::sub_011b5f80(void)
{
    int param_1 = (int)this;

  sub_011ade00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_011b55f0();
// @baa 0x011b5fa0
void sub_011b5fa0(void) { sub_011b55f0(); }

void sub_011b5660();
// @baa 0x011b5fb0
void sub_011b5fb0(void) { sub_011b5660(); }

void sub_011b56d0();
// @baa 0x011b5fc0
void sub_011b5fc0(void) { sub_011b56d0(); }

void sub_011b5740();
// @baa 0x011b5fd0
void sub_011b5fd0(void) { sub_011b5740(); }

void sub_011b57b0();
// @baa 0x011b5fe0
void sub_011b5fe0(void) { sub_011b57b0(); }

void sub_011b5820();
// @baa 0x011b5ff0
void sub_011b5ff0(void) { sub_011b5820(); }

void sub_011b5940();
// @baa 0x011b6040
void sub_011b6040(void) { sub_011b5940(); }

void sub_011b59b0();
// @baa 0x011b6050
void sub_011b6050(void) { sub_011b59b0(); }

void sub_011b5b10();
// @baa 0x011b60b0
void sub_011b60b0(void) { sub_011b5b10(); }

struct C_view_011b6180 {
    int sub_011b4e10(int, int);
};

// @baa 0x011b6180
int UTexture2D::sub_011b6180(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_011b6180 *)(this))->sub_011b4e10(param_2, param_4);
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
    void sub_011b4bd0(int, int);
};

struct C_011b61b0 {
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
    void sub_011b61b0(void);
};

// @baa 0x011b61b0
void C_011b61b0::sub_011b61b0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_011b4bd0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x011b61d0
int UTexture2D::sub_011b61d0(void)
{
    int param_1 = (int)this;

  sub_011adc80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b61f0
int UTexture2D::sub_011b61f0(void)
{
    int param_1 = (int)this;

  sub_011adce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b6210
int UTexture2D::sub_011b6210(void)
{
    int param_1 = (int)this;

  sub_011add40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b6230
int UTexture2D::sub_011b6230(void)
{
    int param_1 = (int)this;

  sub_011adda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b6250
int UTexture2D::sub_011b6250(void)
{
    int param_1 = (int)this;

  sub_011ade00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011b6270
void sub_011b6270(void) { sub_011b55f0(); }

// @baa 0x011ba1a0
void sub_011ba1a0(void) { sub_011b5660(); }

struct A_011ba390 { virtual void sub_011ba770(); char pad[420]; };

struct B_011ba390 { virtual void sub_011ba770(); };

struct C_011ba390 : A_011ba390, B_011ba390 { virtual void sub_011ba770(); C_011ba390(); };

C_011ba390::C_011ba390() {}

// @baa 0x011ba390
void C_011ba390::sub_011ba770() {}

struct A_011ba3a0 { virtual void sub_011ba770(); char pad[796]; };

struct B_011ba3a0 { virtual void sub_011ba770(); };

struct C_011ba3a0 : A_011ba3a0, B_011ba3a0 { virtual void sub_011ba770(); C_011ba3a0(); };

C_011ba3a0::C_011ba3a0() {}

// @baa 0x011ba3a0
void C_011ba3a0::sub_011ba770() {}

struct A_011ba3b0 { virtual void sub_011ba770(); char pad[424]; };

struct B_011ba3b0 { virtual void sub_011ba770(); };

struct C_011ba3b0 : A_011ba3b0, B_011ba3b0 { virtual void sub_011ba770(); C_011ba3b0(); };

C_011ba3b0::C_011ba3b0() {}

// @baa 0x011ba3b0
void C_011ba3b0::sub_011ba770() {}

struct A_011ba3c0 { virtual void sub_011ba770(); char pad[408]; };

struct B_011ba3c0 { virtual void sub_011ba770(); };

struct C_011ba3c0 : A_011ba3c0, B_011ba3c0 { virtual void sub_011ba770(); C_011ba3c0(); };

C_011ba3c0::C_011ba3c0() {}

// @baa 0x011ba3c0
void C_011ba3c0::sub_011ba770() {}

// @baa 0x011ba500
void sub_011ba500(void) { sub_011b56d0(); }

// @baa 0x011ba510
void sub_011ba510(void) { sub_011b5740(); }

// @baa 0x011ba520
void sub_011ba520(void) { sub_011b57b0(); }

struct A_011ba5c0 { virtual void sub_011ba5d0(); char pad[532]; };

struct B_011ba5c0 { virtual void sub_011ba5d0(); };

struct C_011ba5c0 : A_011ba5c0, B_011ba5c0 { virtual void sub_011ba5d0(); C_011ba5c0(); };

C_011ba5c0::C_011ba5c0() {}

// @baa 0x011ba5c0
void C_011ba5c0::sub_011ba5d0() {}

struct C_011ba5d0 {
    undefined4 sub_011ba5d0(byte);
};

int sub_011ba530(void);
// @baa 0x011ba5d0
undefined4 C_011ba5d0::sub_011ba5d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ba530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_011ba1b0(void);
// @baa 0x011ba770
undefined4 UUnrealEdEngine::sub_011ba770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ba1b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01277c90
void __stdcall sub_01277c90(int a0) {  }

// @baa 0x01277d00
int sub_01277d00(void) { return 0; }

struct C_01745640 {
    undefined4 sub_01745640(byte);
};

int sub_017455c0(void);
// @baa 0x01745640
undefined4 C_01745640::sub_01745640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_017455c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
