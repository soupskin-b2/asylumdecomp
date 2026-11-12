// UnUIEditor.cpp (part 1 of 5): 234 functions
// Placed here by: neighbours 186, class 14, callers 12, file 11.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_02158c10[];
// @baa 0x0149ac00
int sub_0149ac00(void) { return (int)g_02158c10; }

// @baa 0x0149ac40
int sub_0149ac40(int a0, int a1) { return a1; }

// @baa 0x0149ac50
int sub_0149ac50(int a0, int a1) { return a1; }

// @baa 0x0149ac60
int sub_0149ac60(int a0, int a1) { return a1; }

class wxMenuBar;
class wxMenuBar {
    public:
    public: __declspec(dllimport) wxMenuBar();
    friend struct C;
};

struct C {
    wxMenuBar * sub_0149ac70();
};

extern undefined * g_022b0c08;
// @baa 0x0149ac70
wxMenuBar * C::sub_0149ac70(void)
{
    wxMenuBar * param_1 = (wxMenuBar *)this;

  ((wxMenuBar *)(param_1))->wxMenuBar::wxMenuBar();
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined ***)param_1 = &g_022b0c08;
  return param_1;
}

class wxToolBar;
class wxToolBar {
    public:
    public: __declspec(dllimport) wxToolBar();
    friend struct C_0149ae00;
};

struct C_0149ae00 {
    wxToolBar * sub_0149ae00();
};

extern undefined * g_022b0ee8;
// @baa 0x0149ae00
wxToolBar * C_0149ae00::sub_0149ae00(void)
{
    wxToolBar * param_1 = (wxToolBar *)this;

  ((wxToolBar *)(param_1))->wxToolBar::wxToolBar();
  *(undefined ***)param_1 = &g_022b0ee8;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  return param_1;
}

// @baa 0x0149ae20
void __stdcall sub_0149ae20(int a0) {  }

// @baa 0x0149ae30
void __stdcall sub_0149ae30(int a0) {  }

extern char g_022743f4[];
struct C_0149ae40 { void sub_0149ae40(void); };

// @baa 0x0149ae40
void C_0149ae40::sub_0149ae40(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

int sub_006311e0(...);
extern undefined4 g_022a9fb4;
// @baa 0x0149af10
undefined4 UEditorUISceneClient::vf_12c(undefined4 param_2, float * param_3)
{
    int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  iVar1 = *(int *)(param_1 + 0xf4);
  uVar2 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x448) != 0)) {
    if (*(int *)(iVar1 + 0x314) == 0) {
      sub_006311e0("SceneWindow->EditorOptions",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp"
                   ,0x381,&g_022a9fb4);
    }
    fVar3 = (float)*(int *)(*(int *)(*(int *)(param_1 + 0xf4) + 0x314) + 0x44);
    param_3[1] = fVar3;
    *param_3 = fVar3;
    uVar2 = 1;
  }
  return uVar2;
}

struct V_0149aff0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void g(int);
    void sub_0149aff0();
};

// @baa 0x0149aff0
void V_0149aff0::sub_0149aff0() { g(8); }

// @baa 0x0149b000
int UEditorUISceneClient::vf_194(void) { return *(int*)((char*)this + 248); }

// @baa 0x0149b040
undefined4 UEditorUISceneClient::vf_19c(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 0xfc) & 1) != 0) && (*(int *)(param_1 + 0xf8) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0149b060 {
    void sub_0149b060(int);
};

// @baa 0x0149b060
void C_0149b060::sub_0149b060(int)
{
    *(DWORD*)(this + 0xfc) &= 0xfffffffe;
}

// @baa 0x0149b1e0
undefined4 UEditorUISceneClient::IsSceneInitialized(int param_2)
{
    int param_1 = (int)this;

  if ((((*(int *)(param_1 + 0xf4) != 0) && (*(int *)(*(int *)(param_1 + 0xf4) + 0x448) != 0)) &&
      (param_2 != 0)) && ((*(byte *)(param_2 + 0x50) & 2) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x0149b210
INT UEditorUISceneClient::InputKey(INT ControllerId, FName Key, EInputEvent Event, FLOAT AmountDepressed, UBOOL bGamepad) { return FALSE; }

// @baa 0x0149b220
INT UEditorUISceneClient::InputAxis(INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad) { return FALSE; }

// @baa 0x0149b230
INT UEditorUISceneClient::InputChar(INT ControllerId, TCHAR Character) { return FALSE; }

// @baa 0x0149cea0
IMPLEMENT_CLASS_AT(UEditorUISceneClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 28);

// @baa 0x0149cfb0
int UEditorUISceneClient::vf_000(void) { return 1; }

// @baa 0x0149cfc0
bool UEditorUISceneClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d000
IMPLEMENT_CLASS_AT(UUIEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 29);

// @baa 0x0149d130
bool UUIEditorOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d170
IMPLEMENT_CLASS_AT(UUIPreviewString, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 30);

// @baa 0x0149d280
int UUIPreviewString::vf_000(void) { return 1; }

// @baa 0x0149d290
bool UUIPreviewString::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d2d0
IMPLEMENT_CLASS_AT(UUISceneFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 32);

// @baa 0x0149d3e0
int UUISceneFactory::vf_000(void) { return 1; }

// @baa 0x0149d3f0
bool UUISceneFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d430
int UUISceneFactoryNew::vf_000(void) { return 1; }

// @baa 0x0149d440
int UUISceneFactoryText::vf_000(void) { return 1; }

// @baa 0x0149d450
IMPLEMENT_CLASS_AT(UUISceneExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 36);

// @baa 0x0149d560
int UUISceneExporter::vf_000(void) { return 1; }

// @baa 0x0149d570
bool UUISceneExporter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d5b0
IMPLEMENT_CLASS_AT(UUILayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 37);

// @baa 0x0149d6c0
int UUILayer::vf_000(void) { return 1; }

// @baa 0x0149d6d0
bool UUILayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0149d710
int UUILayerRoot::vf_000(void) { return 1; }

// @baa 0x0149d840
// @baa 0x0149d8c0
struct A_0149d8f0 { virtual void sub_0149d8c0(); char pad[228]; };

struct B_0149d8f0 { virtual void sub_0149d8c0(); };

struct C_0149d8f0 : A_0149d8f0, B_0149d8f0 { virtual void sub_0149d8c0(); C_0149d8f0(); };

C_0149d8f0::C_0149d8f0() {}

// @baa 0x0149d8f0
void C_0149d8f0::sub_0149d8c0() {}

struct C_0149e530 {
    undefined4 sub_0149e530(byte);
};

int sub_0053dfa0(...);
int sub_01406600(void);
// @baa 0x0149e530
undefined4 C_0149e530::sub_0149e530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01406600();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0149e900 {
    undefined4 * sub_0149e900(byte);
};

int sub_011ba530(void);
extern undefined4 g_022b1284;
extern undefined * g_022b1290;
// @baa 0x0149e900
undefined4 * C_0149e900::sub_0149e900(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022b1290);
  param_1[0x86] = (undefined4)(&g_022b1284);
  sub_011ba530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0149ecc0(INT Index) const;
};

// @baa 0x0149ecc0
const DWORD* S::sub_0149ecc0(INT Index) const
{
    return &Items(Index);
}

struct C_0149ed10 { int a, b, c; C_0149ed10(); };

// @baa 0x0149ed10
C_0149ed10::C_0149ed10() : a(0), b(0), c(0) {}

struct C_0149ed20 { int a, b, c; C_0149ed20(); };

// @baa 0x0149ed20
C_0149ed20::C_0149ed20() : a(0), b(0), c(0) {}

struct C_0149ed30 { int a, b, c; C_0149ed30(); };

// @baa 0x0149ed30
C_0149ed30::C_0149ed30() : a(0), b(0), c(0) {}

struct C_0149ed40 { int a, b, c; C_0149ed40(); };

// @baa 0x0149ed40
C_0149ed40::C_0149ed40() : a(0), b(0), c(0) {}

struct C_0149ed50 { int a, b, c; C_0149ed50(); };

// @baa 0x0149ed50
C_0149ed50::C_0149ed50() : a(0), b(0), c(0) {}

struct C_0149ed60 { int a, b, c; C_0149ed60(); };

// @baa 0x0149ed60
C_0149ed60::C_0149ed60() : a(0), b(0), c(0) {}

struct C_0149eda0 {
    undefined4 sub_0149eda0();
};

// @baa 0x0149eda0
undefined4 C_0149eda0::sub_0149eda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_0149edb0 { C_0149edb0* sub_0149edb0(int a0); };

// @baa 0x0149edb0
C_0149edb0* C_0149edb0::sub_0149edb0(int a0) { return this; }

struct C_0149edc0 { int sub_0149edc0(void); };

// @baa 0x0149edc0
int C_0149edc0::sub_0149edc0(void) { return *(int*)((char*)this + 0); }

struct C_0149edd0 {
    int sub_0149edd0(int);
};

// @baa 0x0149edd0
int C_0149edd0::sub_0149edd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0149ede0 { int sub_0149ede0(void); };

// @baa 0x0149ede0
int C_0149ede0::sub_0149ede0(void) { return *(int*)((char*)this + 0); }

struct C_0149edf0 {
    int sub_0149edf0(int);
};

// @baa 0x0149edf0
int C_0149edf0::sub_0149edf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0149ee00 { int sub_0149ee00(void); };

// @baa 0x0149ee00
int C_0149ee00::sub_0149ee00(void) { return *(int*)((char*)this + 0); }

struct C_0149ee80 { int sub_0149ee80(void); };

// @baa 0x0149ee80
int C_0149ee80::sub_0149ee80(void) { return *(int*)((char*)this + 0); }

struct S_0149ee90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0149ee90(INT Index);
};

// @baa 0x0149ee90
DWORD* S_0149ee90::sub_0149ee90(INT Index)
{
    return &Items(Index);
}

// @baa 0x0149ef50
void __stdcall sub_0149ef50(int a0, int a1) {  }

struct C_0149ef60 { int sub_0149ef60(void); };

// @baa 0x0149ef60
int C_0149ef60::sub_0149ef60(void) { return *(int*)((char*)this + 0); }

struct C_0149efe0 { int sub_0149efe0(void); };

// @baa 0x0149efe0
int C_0149efe0::sub_0149efe0(void) { return *(int*)((char*)this + 0); }

struct C_0149eff0 { int sub_0149eff0(void); };

// @baa 0x0149eff0
int C_0149eff0::sub_0149eff0(void) { return *(int*)((char*)this + 0); }

struct C_0149f000 {
    int sub_0149f000();
};

// @baa 0x0149f000
int C_0149f000::sub_0149f000(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0149f010 {
    int sub_0149f010();
};

// @baa 0x0149f010
int C_0149f010::sub_0149f010(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0149f020 {
    int sub_0149f020();
};

// @baa 0x0149f020
int C_0149f020::sub_0149f020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0149f030 {
    int sub_0149f030();
};

// @baa 0x0149f030
int C_0149f030::sub_0149f030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0149f0b0 { int sub_0149f0b0(void); };

// @baa 0x0149f0b0
int C_0149f0b0::sub_0149f0b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f0e0 { int sub_0149f0e0(void); };

// @baa 0x0149f0e0
int C_0149f0e0::sub_0149f0e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f110 { int sub_0149f110(void); };

// @baa 0x0149f110
int C_0149f110::sub_0149f110(void) { return *(int*)((char*)this + 0); }

struct C_0149f120 { int sub_0149f120(void); };

// @baa 0x0149f120
int C_0149f120::sub_0149f120(void) { return *(int*)((char*)this + 0); }

struct C_0149f130 { int sub_0149f130(void); };

// @baa 0x0149f130
int C_0149f130::sub_0149f130(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f140 { int sub_0149f140(void); };

// @baa 0x0149f140
int C_0149f140::sub_0149f140(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f190 { int sub_0149f190(void); };

// @baa 0x0149f190
int C_0149f190::sub_0149f190(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f1a0 { int sub_0149f1a0(void); };

// @baa 0x0149f1a0
int C_0149f1a0::sub_0149f1a0(void) { return *(int*)((char*)this + 0); }

struct C_0149f1b0 { int sub_0149f1b0(void); };

// @baa 0x0149f1b0
int C_0149f1b0::sub_0149f1b0(void) { return *(int*)((char*)this + 0); }

struct C_0149f230 { int sub_0149f230(void); };

// @baa 0x0149f230
int C_0149f230::sub_0149f230(void) { return *(int*)((char*)this + 0); }

struct C_0149f240 { int sub_0149f240(void); };

// @baa 0x0149f240
int C_0149f240::sub_0149f240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0149f250 { int sub_0149f250(void); };

// @baa 0x0149f250
int C_0149f250::sub_0149f250(void) { return *(int*)((char*)this + 0); }

struct C_0149f260 {
    int sub_0149f260(int);
};

// @baa 0x0149f260
int C_0149f260::sub_0149f260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0149f270 {
    int sub_0149f270(int);
};

// @baa 0x0149f270
int C_0149f270::sub_0149f270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0149f290
int sub_0149f290(int a0) { return a0; }

struct C_0149f2a0 {
    int sub_0149f2a0(int);
};

// @baa 0x0149f2a0
int C_0149f2a0::sub_0149f2a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x0149f2b0
int sub_0149f2b0(int a0) { return a0; }

struct C_0149f2c0 {
    int sub_0149f2c0(int);
};

// @baa 0x0149f2c0
int C_0149f2c0::sub_0149f2c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0149f2d0 { int sub_0149f2d0(void); };

// @baa 0x0149f2d0
int C_0149f2d0::sub_0149f2d0(void) { return *(int*)((char*)this + 20); }

struct C_0149f2e0 {
    int sub_0149f2e0(int);
};

// @baa 0x0149f2e0
int C_0149f2e0::sub_0149f2e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0149f2f0 {
    int sub_0149f2f0(int);
};

// @baa 0x0149f2f0
int C_0149f2f0::sub_0149f2f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0149f300 {
    int sub_0149f300(int);
};

// @baa 0x0149f300
int C_0149f300::sub_0149f300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0149f320 { int sub_0149f320(void); };

// @baa 0x0149f320
int C_0149f320::sub_0149f320(void) { return *(int*)((char*)this + 20); }

struct C_0149f330 { int sub_0149f330(void); };

// @baa 0x0149f330
int C_0149f330::sub_0149f330(void) { return *(int*)((char*)this + 20); }

struct C_0149f340 { int sub_0149f340(void); };

// @baa 0x0149f340
int C_0149f340::sub_0149f340(void) { return *(int*)((char*)this + 20); }

struct C_0149f350 { int sub_0149f350(void); };

// @baa 0x0149f350
int C_0149f350::sub_0149f350(void) { return *(int*)((char*)this + 20); }

struct C_0149f360 { int sub_0149f360(void); };

// @baa 0x0149f360
int C_0149f360::sub_0149f360(void) { return *(int*)((char*)this + 20); }

struct C_0149f370 { int sub_0149f370(void); };

// @baa 0x0149f370
int C_0149f370::sub_0149f370(void) { return *(int*)((char*)this + 20); }

struct C_0149f380 { int sub_0149f380(void); };

// @baa 0x0149f380
int C_0149f380::sub_0149f380(void) { return *(int*)((char*)this + 20); }

struct C_0149f390 { int sub_0149f390(void); };

// @baa 0x0149f390
int C_0149f390::sub_0149f390(void) { return *(int*)((char*)this + 20); }

struct C_0149f3a0 { int sub_0149f3a0(void); };

// @baa 0x0149f3a0
int C_0149f3a0::sub_0149f3a0(void) { return *(int*)((char*)this + 20); }

struct C_0149f3b0 {
    undefined4 sub_0149f3b0();
};

int sub_00dca3b0(void);
int sub_00dd8ef0(...);
int sub_0149f3ff(...);
extern undefined4 g_026c5d94;
// @baa 0x0149f3b0
undefined4 C_0149f3b0::sub_0149f3b0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5d94 == 0) {
      g_026c5d94 = sub_00dd8ef0(L"Engine");
      sub_00dca3b0();
      if (g_026c5d94 == 0) {
sub_0149f3ff:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5d94) goto sub_0149f3ff;
    }
  }
  return 0;
}

// @baa 0x0149f620
void sub_0149f620(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0149f640
void sub_0149f640(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

typedef uint size_t;

struct C_0149f7f0{
void sub_0149f7f0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
uint sub_0053df70(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0149f7f0
void C_0149f7f0::sub_0149f7f0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
INT iVar2;
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
iVar2=sub_0053d240(iVar2,param_1[2],0xc);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*0xc,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*0xc),(void*)(*param_1+param_2*0xc),
(iVar1-param_2)*0xc);
return;
}

// @baa 0x0149f9f0
void sub_0149f9f0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0149fa10
void sub_0149fa10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x0149fa60
struct C_0149fab0 {
    int sub_0149fab0(int);
};

// @baa 0x0149fab0
int C_0149fab0::sub_0149fab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0149fac0 {
    int sub_0149fac0(int);
};

// @baa 0x0149fac0
int C_0149fac0::sub_0149fac0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0149fad0 {
    int sub_0149fad0(int);
};

// @baa 0x0149fad0
int C_0149fad0::sub_0149fad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_0149fae0 {
    int sub_0149fae0(int);
};

// @baa 0x0149fae0
int C_0149fae0::sub_0149fae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct E { BYTE Bytes[16]; };

struct S_0149faf0 {
    TArray<E> Items; // 0x00
    E* sub_0149faf0(INT Index);
};

// @baa 0x0149faf0
E* S_0149faf0::sub_0149faf0(INT Index)
{
    return &Items(Index);
}

struct C_0149fb40 {
    int sub_0149fb40();
};

// @baa 0x0149fb40
int C_0149fb40::sub_0149fb40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0149fb60 {
    int sub_0149fb60(int);
};

// @baa 0x0149fb60
int C_0149fb60::sub_0149fb60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0149fb70
struct C_0149fbb0 {
    undefined4 * sub_0149fbb0(byte);
};

// @baa 0x0149fbb0
undefined4 * C_0149fbb0::sub_0149fbb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0149fbd0
// @baa 0x0149fc90
struct C_014a0200 { void sub_014a0200(void); };

// @baa 0x014a0200
void C_014a0200::sub_014a0200(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_014a0210 {
    undefined4 * sub_014a0210(byte);
};

// @baa 0x014a0210
undefined4 * C_014a0210::sub_014a0210(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014a0260 { void sub_014a0260(void); };

// @baa 0x014a0260
void C_014a0260::sub_014a0260(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_014a0270 {
    undefined4 * sub_014a0270(byte);
};

// @baa 0x014a0270
undefined4 * C_014a0270::sub_014a0270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014a02b0 { void sub_014a02b0(void); };

// @baa 0x014a02b0
void C_014a02b0::sub_014a02b0(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_014a02c0 {
    undefined4 * sub_014a02c0(byte);
};

// @baa 0x014a02c0
undefined4 * C_014a02c0::sub_014a02c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_014a0920 { BYTE Bytes[12]; };

struct S_014a0920 {
    TArray<E_014a0920> Items; // 0x00
    const E_014a0920* sub_014a0920(INT Index) const;
};

// @baa 0x014a0920
const E_014a0920* S_014a0920::sub_014a0920(INT Index) const
{
    return &Items(Index);
}

struct S_014a0970 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014a0970(INT Index) const;
};

// @baa 0x014a0970
const DWORD* S_014a0970::sub_014a0970(INT Index) const
{
    return &Items(Index);
}

struct C_014a09c0{
int sub_014a09c0(undefined4*);
};

undefined4 sub_0053df70(...);
// @baa 0x014a09c0
int C_014a09c0::sub_014a09c0(undefined4*param_2)
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

struct S_014a0a20 {
    TArray<E> Items; // 0x00
    const E* sub_014a0a20(INT Index) const;
};

// @baa 0x014a0a20
const E* S_014a0a20::sub_014a0a20(INT Index) const
{
    return &Items(Index);
}

struct S_014a0a70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014a0a70(INT Index);
};

// @baa 0x014a0a70
DWORD* S_014a0a70::sub_014a0a70(INT Index)
{
    return &Items(Index);
}

struct C_014a0ac0{
int sub_014a0ac0(undefined4*);
};

// @baa 0x014a0ac0
int C_014a0ac0::sub_014a0ac0(undefined4*param_2)
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

struct C_014a0b20{
int sub_014a0b20(undefined4*);
};

// @baa 0x014a0b20
int C_014a0b20::sub_014a0b20(undefined4*param_2)
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

struct S_014a0b80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014a0b80(INT Index);
};

// @baa 0x014a0b80
DWORD* S_014a0b80::sub_014a0b80(INT Index)
{
    return &Items(Index);
}

struct C_014a0bd0{
int sub_014a0bd0(undefined4*);
};

// @baa 0x014a0bd0
int C_014a0bd0::sub_014a0bd0(undefined4*param_2)
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

struct S_014a0c30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014a0c30(INT Index);
};

// @baa 0x014a0c30
DWORD* S_014a0c30::sub_014a0c30(INT Index)
{
    return &Items(Index);
}

struct S_014a0c80 {
    TArray<E> Items; // 0x00
    E* sub_014a0c80(INT Index);
};

// @baa 0x014a0c80
E* S_014a0c80::sub_014a0c80(INT Index)
{
    return &Items(Index);
}

struct C_014a0d60{
int sub_014a0d60(undefined4*);
};

// @baa 0x014a0d60
int C_014a0d60::sub_014a0d60(undefined4*param_2)
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

struct C_014a0dc0 {
    int sub_014a0dc0(int);
};

// @baa 0x014a0dc0
int C_014a0dc0::sub_014a0dc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014a0dd0 {
    int sub_014a0dd0(int);
};

// @baa 0x014a0dd0
int C_014a0dd0::sub_014a0dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x014a0de0
void __stdcall sub_014a0de0(int a0, int a1) {  }

struct S_014a0df0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014a0df0(INT Index) const;
};

// @baa 0x014a0df0
const DWORD* S_014a0df0::sub_014a0df0(INT Index) const
{
    return &Items(Index);
}

struct C_014a0e80 {
    int sub_014a0e80(int);
};

// @baa 0x014a0e80
int C_014a0e80::sub_014a0e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014a0e90 {
    int sub_014a0e90(int);
};

// @baa 0x014a0e90
int C_014a0e90::sub_014a0e90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x014a0ea0
void __stdcall sub_014a0ea0(int a0, int a1) {  }

struct C_014a0f10 {
    int sub_014a0f10(int);
};

// @baa 0x014a0f10
int C_014a0f10::sub_014a0f10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x014a0f20
void __stdcall sub_014a0f20(int a0, int a1) {  }

struct C_014a0f30 {
    int sub_014a0f30(int);
};

// @baa 0x014a0f30
int C_014a0f30::sub_014a0f30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014a0fa0 { int sub_014a0fa0(void); };

// @baa 0x014a0fa0
int C_014a0fa0::sub_014a0fa0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014a0fe0 {
    int sub_014a0fe0(int);
};

// @baa 0x014a0fe0
int C_014a0fe0::sub_014a0fe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct S_014a0ff0 {
    TArray<E> Items; // 0x00
    E* sub_014a0ff0(INT Index);
};

// @baa 0x014a0ff0
E* S_014a0ff0::sub_014a0ff0(INT Index)
{
    return &Items(Index);
}

struct C_014a1070 {
    int sub_014a1070(int);
};

// @baa 0x014a1070
int C_014a1070::sub_014a1070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014a1080 { int sub_014a1080(void); };

// @baa 0x014a1080
int C_014a1080::sub_014a1080(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014a1090 {
    int sub_014a1090(int);
};

// @baa 0x014a1090
int C_014a1090::sub_014a1090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x014a1140
int UTexture2D::sub_014a1140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_014a11e0 {
    int sub_014a11e0(int);
};

// @baa 0x014a11e0
int C_014a11e0::sub_014a11e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_014a11f0 {
    int sub_014a11f0();
};

// @baa 0x014a11f0
int C_014a11f0::sub_014a11f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_005413d0(...);
// @baa 0x014a1210
void sub_014a1210(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_014a1220 {
    int sub_014a1220(int);
};

// @baa 0x014a1220
int C_014a1220::sub_014a1220(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x014a1230
void sub_014a1230(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_014a1240 {
    int sub_014a1240(int);
};

// @baa 0x014a1240
int C_014a1240::sub_014a1240(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x014a1280
void sub_014a1280(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_014a1290 {
    int sub_014a1290(int);
};

// @baa 0x014a1290
int C_014a1290::sub_014a1290(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x1c;
}

struct C_014a12b0 {
    int sub_014a12b0();
};

// @baa 0x014a12b0
int C_014a12b0::sub_014a12b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_014a12c0 {
    int sub_014a12c0();
};

// @baa 0x014a12c0
int C_014a12c0::sub_014a12c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a12e0 {
    int sub_014a12e0();
};

// @baa 0x014a12e0
int C_014a12e0::sub_014a12e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_014a12f0 {
    int sub_014a12f0();
};

// @baa 0x014a12f0
int C_014a12f0::sub_014a12f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1310 {
    int sub_014a1310();
};

// @baa 0x014a1310
int C_014a1310::sub_014a1310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_014a1330 {
    int sub_014a1330();
};

// @baa 0x014a1330
int C_014a1330::sub_014a1330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1350 {
    int sub_014a1350();
};

// @baa 0x014a1350
int C_014a1350::sub_014a1350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_014a1360 {
    int sub_014a1360();
};

// @baa 0x014a1360
int C_014a1360::sub_014a1360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1380 {
    int sub_014a1380();
};

// @baa 0x014a1380
int C_014a1380::sub_014a1380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct C_014a1390 {
    int sub_014a1390(int);
};

// @baa 0x014a1390
int C_014a1390::sub_014a1390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_014a13a0 {
    int sub_014a13a0(int);
};

// @baa 0x014a13a0
int C_014a13a0::sub_014a13a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_014a13b0 {
    int sub_014a13b0();
};

// @baa 0x014a13b0
int C_014a13b0::sub_014a13b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a13d0 {
    int sub_014a13d0();
};

// @baa 0x014a13d0
int C_014a13d0::sub_014a13d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_014a13e0 {
    int sub_014a13e0();
};

// @baa 0x014a13e0
int C_014a13e0::sub_014a13e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1400 {
    int sub_014a1400();
};

// @baa 0x014a1400
int C_014a1400::sub_014a1400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_014a1410 {
    int sub_014a1410();
};

// @baa 0x014a1410
int C_014a1410::sub_014a1410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1430 {
    int sub_014a1430();
};

// @baa 0x014a1430
int C_014a1430::sub_014a1430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_014a1450 {
    int sub_014a1450();
};

// @baa 0x014a1450
int C_014a1450::sub_014a1450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1470 {
    int sub_014a1470();
};

// @baa 0x014a1470
int C_014a1470::sub_014a1470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a1490 {
    int sub_014a1490();
};

// @baa 0x014a1490
int C_014a1490::sub_014a1490(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014a14b0 {
    int sub_014a14b0();
};

// @baa 0x014a14b0
int C_014a14b0::sub_014a14b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x014a1a20
void __stdcall sub_014a1a20(int a0, int a1) {  }

struct M_014a1a30 { void sub_0040fcc0(); };

struct C_014a1a30 { char pad[4]; M_014a1a30 m; void sub_014a1a30(); };

// @baa 0x014a1a30
void C_014a1a30::sub_014a1a30() { m.sub_0040fcc0(); }

struct M_014a1ac0 { void sub_0040fcc0(); };

struct C_014a1ac0 { char pad[4]; M_014a1ac0 m; void sub_014a1ac0(); };

// @baa 0x014a1ac0
void C_014a1ac0::sub_014a1ac0() { m.sub_0040fcc0(); }

struct C_014a1ad0 {
    int sub_014a1ad0();
};

// @baa 0x014a1ad0
int C_014a1ad0::sub_014a1ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_005c7a70(...);
int sub_014a1b50(void);
// @baa 0x014a1bc0
undefined4 UUIEditorOptions::sub_014a1bc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014a1b50();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x6c);
  }
  return param_1;
}

// @baa 0x014a7100
void sub_014a5aa0();
// @baa 0x014a7110
void sub_014a7110(void) { sub_014a5aa0(); }

void sub_013e9bc0();
// @baa 0x014a7140
void sub_014a7140(void) { sub_013e9bc0(); }

// @baa 0x014a7170
struct C_014a7230 { void sub_014a6e40(int); C_014a7230 *sub_014a7230(int); };

// @baa 0x014a7230
C_014a7230 *C_014a7230::sub_014a7230(int a) { sub_014a6e40(a); return this; }

struct C_014a7250 { void sub_014a6e40(int); C_014a7250 *sub_014a7250(int); };

// @baa 0x014a7250
C_014a7250 *C_014a7250::sub_014a7250(int a) { sub_014a6e40(a); return this; }

struct C_014a7270 { void sub_014a6e40(int); C_014a7270 *sub_014a7270(int); };

// @baa 0x014a7270
C_014a7270 *C_014a7270::sub_014a7270(int a) { sub_014a6e40(a); return this; }

struct A_014a75e0 { virtual void sub_014b4760(); char pad[804]; };

struct B_014a75e0 { virtual void sub_014b4760(); };

struct C_014a75e0 : A_014a75e0, B_014a75e0 { virtual void sub_014b4760(); C_014a75e0(); };

C_014a75e0::C_014a75e0() {}

// @baa 0x014a75e0
void C_014a75e0::sub_014b4760() {}

// @baa 0x014b3c50
// @baa 0x014b3c70
IMPLEMENT_CLASS_AT(UUILayerRoot, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 38);

// @baa 0x014b3c90
// @baa 0x014b3d50
// @baa 0x014ba190
// @baa 0x014ba1b0
IMPLEMENT_CLASS_AT(UUISceneFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 33);

// @baa 0x014ba1d0
IMPLEMENT_CLASS_AT(UUISceneFactoryText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 34);

// @baa 0x014ba1f0
struct C_014ba210 { C_014ba210* sub_014ba210(void); };

// @baa 0x014ba210
C_014ba210* C_014ba210::sub_014ba210(void) { return this; }

struct C_014ba220 { C_014ba220* sub_014ba220(void); };

// @baa 0x014ba220
C_014ba220* C_014ba220::sub_014ba220(void) { return this; }

struct C_014ba230 { C_014ba230* sub_014ba230(void); };

// @baa 0x014ba230
C_014ba230* C_014ba230::sub_014ba230(void) { return this; }

struct C_014ba240 { C_014ba240* sub_014ba240(void); };

// @baa 0x014ba240
C_014ba240* C_014ba240::sub_014ba240(void) { return this; }

int sub_014ad9b0(void);
// @baa 0x014ba300
int UTexture2D::sub_014ba300(void)
{
    int param_1 = (int)this;

  sub_014ad9b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014ba350
// @baa 0x014ba410
// @baa 0x014ba4d0
// @baa 0x014ba590
// @baa 0x014bfdf0
IMPLEMENT_CLASS_AT(UUISceneManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 27);

int sub_014bfd10(void);
// @baa 0x014bfe00
undefined4 UUISceneManager::sub_014bfe00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014bfd10();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,200);
  }
  return param_1;
}

int sub_014be900(void);
// @baa 0x014bfe30
undefined4 UUISceneManager::sub_014bfe30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014be900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x014bfe50
int sub_014dbba0(void);
// @baa 0x014dc0d0
undefined4 UUnrealEdEngine::sub_014dc0d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dbba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014dc0f0 { int sub_014dc0f0(void); };

// @baa 0x014dc0f0
int C_014dc0f0::sub_014dc0f0(void) { return *(int*)((char*)this + 20); }

struct C_014dc100 { int sub_014dc100(void); };

// @baa 0x014dc100
int C_014dc100::sub_014dc100(void) { return *(int*)((char*)this + 24); }

struct S_014dc110 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014dc110
void sub_014dc110(S_014dc110* p, INT Value)
{
    p->vf_18(Value);
}

struct S_014dc130 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014dc130
void sub_014dc130(S_014dc130* p, INT Value)
{
    p->vf_18(Value);
}

struct S_014dc150 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014dc150
void sub_014dc150(S_014dc150* p, INT Value)
{
    p->vf_18(Value);
}

struct S_014dc170 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014dc170
void sub_014dc170(S_014dc170* p, INT Value)
{
    p->vf_18(Value);
}

struct C_014dc190 { void sub_014dc190(int a0); };

// @baa 0x014dc190
void C_014dc190::sub_014dc190(int a0) { *(int*)((char*)this + 104) = a0; }

struct C_014dc1a0 {
    void sub_014dc1a0();
};

// @baa 0x014dc1a0
void C_014dc1a0::sub_014dc1a0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 3;
  return;
}

// @baa 0x0149ce60
bool UUISceneManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005c7a20(void);
extern undefined * g_022b2718;
// @baa 0x014adab0
undefined4 * UObject::sub_014adab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b2718);
  return param_1;
}

extern undefined * g_022b2828;
// @baa 0x014adad0
undefined4 * UObject::sub_014adad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b2828);
  return param_1;
}

struct C_014adb70 {
    undefined4 * sub_014adb70(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b2938;
// @baa 0x014adb70
undefined4 * C_014adb70::sub_014adb70(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adb70 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b2938);
  return param_1;
}

struct C_014adbc0 {
    undefined4 * sub_014adbc0(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b29e0;
// @baa 0x014adbc0
undefined4 * C_014adbc0::sub_014adbc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adbc0 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b29e0);
  return param_1;
}

struct C_014adc20 {
    undefined4 * sub_014adc20(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b2a88;
// @baa 0x014adc20
undefined4 * C_014adc20::sub_014adc20(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adc20 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b2a88);
  return param_1;
}

// @baa 0x014ba650

// @baa 0x014ba760
bool UUILayerRoot::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014bb110

// @baa 0x014bb220
bool UUISceneFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014bb260
