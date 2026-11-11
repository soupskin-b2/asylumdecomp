// UnEdModes.cpp (part 1 of 3): 281 functions
// Placed here by: neighbours 227, class 40, callers 13, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f4cd60
int __stdcall sub_00f4cd60(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) { return 0; }

// @baa 0x00f4d070
int __stdcall sub_00f4d070(int a0) { return 7; }

struct C_view {
    int sub_00759640(int);
};

int sub_006311e0(...);
extern undefined4 g_021543c8;
// @baa 0x00f4d080
void UTerrainFactory::sub_00f4d080(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x1c) == 0) {
    sub_006311e0("Component",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdModes.cpp"
                 ,0x9a,&g_021543c8);
  }
  ((C_view *)((*(char **)((char *)this + 0x1c))))->sub_00759640(0);
  return;
}

struct C_view_00f4d0c0 {
    int sub_0076a230(int, int, int);
};

extern undefined4 g_02154498;
extern undefined4 g_025d67c0;
extern undefined4 g_026b62b8;
// @baa 0x00f4d0c0
void UTerrainFactory::sub_00f4d0c0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x1c) == 0) {
    sub_006311e0("Component",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdModes.cpp"
                 ,0xa0,&g_02154498);
  }
  ((C_view_00f4d0c0 *)((*(char **)((char *)this + 0x1c))))->sub_0076a230(*(undefined4 *)(g_026b62b8 + 0x34), 0, (int)(&g_025d67c0));
  return;
}

// @baa 0x00f4d190
int UTerrainFactory::sub_00f4d190(void) { return *(int*)((char*)this + 4); }

// @baa 0x00f4d1a0
int sub_00f4d1a0(void) { return 0; }

struct V_00f4d230 {
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
    virtual void g(int a0);
    void sub_00f4d230(int a0);
};

// @baa 0x00f4d230
void V_00f4d230::sub_00f4d230(int a0) { g(a0); }

struct S {
    void sub_00fa6ea0();
};

struct C {
    char pad[0x48];
    S *m_48;
    void sub_00f4d240();
};

// @baa 0x00f4d240
void C::sub_00f4d240() {
    m_48->sub_00fa6ea0();
}

// @baa 0x00f4d350
int sub_00f4d350(void) { return 1; }

// @baa 0x00f4d360
int __stdcall sub_00f4d360(int a0, int a1) { return 0; }

// @baa 0x00f4d3c0
int __stdcall sub_00f4d3c0(int a0, int a1) { return 0; }

struct C_00f4d4d0 { void sub_00f4d4d0(int a0); };

// @baa 0x00f4d4d0
void C_00f4d4d0::sub_00f4d4d0(int a0) { *(int*)((char*)this + 84) = a0; }

struct C_00f4d4f0 {
    int sub_00f4d4f0();
};

// @baa 0x00f4d4f0
int C_00f4d4f0::sub_00f4d4f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

extern char g_02158bc0[];
struct C_00f4d5c0 { C_00f4d5c0* sub_00f4d5c0(void); };

// @baa 0x00f4d5c0
C_00f4d5c0* C_00f4d5c0::sub_00f4d5c0(void) { *(int*)((char*)this + 0) = (int)g_02158bc0; return this; }

struct C_00f4d5d0 {
    undefined4 sub_00f4d5d0(int *);
};

// @baa 0x00f4d5d0
undefined4 C_00f4d5d0::sub_00f4d5d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00f4d610 { int sub_00f4d610(void); };

// @baa 0x00f4d610
int C_00f4d610::sub_00f4d610(void) { return *(int*)((char*)this + 4); }

struct C_00f4d620 { int sub_00f4d620(void); };

// @baa 0x00f4d620
int C_00f4d620::sub_00f4d620(void) { return *(int*)((char*)this + 4); }

struct C_00f4d630 { int sub_00f4d630(void); };

// @baa 0x00f4d630
int C_00f4d630::sub_00f4d630(void) { return *(int*)((char*)this + 4); }

struct C_00f4d640 {
    char pad4[4];
    int field4;
    int sub_00f4d640();
};

// @baa 0x00f4d640
int C_00f4d640::sub_00f4d640()
{
    ++field4;
    return (int)this;
}

struct C_00f4d650 { int sub_00f4d650(void); };

// @baa 0x00f4d650
int C_00f4d650::sub_00f4d650(void) { return *(int*)((char*)this + 4); }

struct C_00f4d660 { int sub_00f4d660(void); };

// @baa 0x00f4d660
int C_00f4d660::sub_00f4d660(void) { return *(int*)((char*)this + 4); }

struct C_00f4d670 { int sub_00f4d670(void); };

// @baa 0x00f4d670
int C_00f4d670::sub_00f4d670(void) { return *(int*)((char*)this + 4); }

struct C_00f4d680 {
    int pad;
    int field;
    C_00f4d680* sub_00f4d680();
};

// @baa 0x00f4d680
C_00f4d680* C_00f4d680::sub_00f4d680()
{
    field = field + 1;
    return this;
}

struct C_00f4d690 { int sub_00f4d690(void); };

// @baa 0x00f4d690
int C_00f4d690::sub_00f4d690(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6a0 { int sub_00f4d6a0(void); };

// @baa 0x00f4d6a0
int C_00f4d6a0::sub_00f4d6a0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6b0 { int sub_00f4d6b0(void); };

// @baa 0x00f4d6b0
int C_00f4d6b0::sub_00f4d6b0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6c0 { int sub_00f4d6c0(void); };

// @baa 0x00f4d6c0
int C_00f4d6c0::sub_00f4d6c0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6d0 { int sub_00f4d6d0(void); };

// @baa 0x00f4d6d0
int C_00f4d6d0::sub_00f4d6d0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6e0 { int sub_00f4d6e0(void); };

// @baa 0x00f4d6e0
int C_00f4d6e0::sub_00f4d6e0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d6f0 { int sub_00f4d6f0(void); };

// @baa 0x00f4d6f0
int C_00f4d6f0::sub_00f4d6f0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d700 { int sub_00f4d700(void); };

// @baa 0x00f4d700
int C_00f4d700::sub_00f4d700(void) { return *(int*)((char*)this + 4); }

struct C_00f4d710 { int sub_00f4d710(void); };

// @baa 0x00f4d710
int C_00f4d710::sub_00f4d710(void) { return *(int*)((char*)this + 4); }

struct C_00f4d720 { int sub_00f4d720(void); };

// @baa 0x00f4d720
int C_00f4d720::sub_00f4d720(void) { return *(int*)((char*)this + 4); }

struct C_00f4d730 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f4d730* sub_00f4d730(INT value);
};

// @baa 0x00f4d730
C_00f4d730* C_00f4d730::sub_00f4d730(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00f4d750 {
    C_00f4d750* sub_00f4d750();
    char pad4[4];
    INT count;
};

// @baa 0x00f4d750
C_00f4d750* C_00f4d750::sub_00f4d750()
{
    ++count;
    return this;
}

struct C_00f4d760 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f4d760* sub_00f4d760(INT value);
};

// @baa 0x00f4d760
C_00f4d760* C_00f4d760::sub_00f4d760(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00f4d780 {
    int x;
    int f;
    C_00f4d780* sub_00f4d780();
};

// @baa 0x00f4d780
C_00f4d780* C_00f4d780::sub_00f4d780()
{
    f++;
    return this;
}

struct C_00f4d790 {
    undefined4 sub_00f4d790();
};

extern undefined2 g_01e3f3dc;
// @baa 0x00f4d790
undefined4 C_00f4d790::sub_00f4d790(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) == 0) {
    sub_006311e0("CurrentSurface","Engine/Inc\\SurfaceIterators.h",0x3d,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 0x10);
}

struct C_00f4d7c0 {
    int sub_00f4d7c0();
};

// @baa 0x00f4d7c0
int C_00f4d7c0::sub_00f4d7c0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_006311e0("!bReachedEnd","Engine/Inc\\SurfaceIterators.h",0x52,&g_01e3f3dc);
  }
  return param_1[3];
}

struct C_00f4d7f0 { int sub_00f4d7f0(void); };

// @baa 0x00f4d7f0
int C_00f4d7f0::sub_00f4d7f0(void) { return *(int*)((char*)this + 4); }

struct C_00f4d800 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f4d800(INT Index);
};

// @baa 0x00f4d800
UBOOL C_00f4d800::sub_00f4d800(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f4d820 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f4d820(INT Index);
};

// @baa 0x00f4d820
UBOOL C_00f4d820::sub_00f4d820(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f4d840 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f4d840(INT Index);
};

// @baa 0x00f4d840
UBOOL C_00f4d840::sub_00f4d840(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f4d860 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00f4d860(INT Index);
};

// @baa 0x00f4d860
UBOOL C_00f4d860::sub_00f4d860(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00f4d8b0 { int a, b; C_00f4d8b0(int, int); };

// @baa 0x00f4d8b0
C_00f4d8b0::C_00f4d8b0(int x, int y) : a(x), b(y) {}

struct C_00f4d8d0 { int a, b; C_00f4d8d0(int, int); };

// @baa 0x00f4d8d0
C_00f4d8d0::C_00f4d8d0(int x, int y) : a(x), b(y) {}

// @baa 0x00f4d8f0
int sub_00f4d8f0(int a0) { return *(int*)a0; }

struct C_00f4d900 {
    void sub_00f4d900(int *);
};

// @baa 0x00f4d900
void C_00f4d900::sub_00f4d900(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00f4d910
int sub_00f4d910(int a0) { return *(int*)a0; }

// @baa 0x00f4d920
bool sub_00f4d920(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f4d930 {
    void sub_00f4d930(undefined4 *);
};

// @baa 0x00f4d930
void C_00f4d930::sub_00f4d930(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

int sub_005d88c0(...);
int sub_00982400(void);
int sub_009977e0(...);
extern undefined4 g_026b6018;
// @baa 0x00f4d950
void sub_00f4d950(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b6018 == 0) {
    g_026b6018 = sub_009977e0(L"Engine");
    sub_00982400();
  }
  sub_005d88c0(g_026b6018,param_1,param_2,param_3);
  return;
}

int sub_00982560(void);
int sub_009978a0(...);
extern undefined4 g_026b601c;
// @baa 0x00f4d990
void sub_00f4d990(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b601c == 0) {
    g_026b601c = sub_009978a0(L"Engine");
    sub_00982560();
  }
  sub_005d88c0(g_026b601c,param_1,param_2,param_3);
  return;
}

int sub_005eae70(...);
// @baa 0x00f4d9d0
void sub_00f4d9d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b601c == 0) {
    g_026b601c = sub_009978a0(L"Engine");
    sub_00982560();
  }
  sub_005eae70(g_026b601c,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x00f4da30
void sub_00f4da30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00f4da50
void sub_00f4da50(void) {  }

// @baa 0x00f4da60
void sub_00f4da60(void) {  }

// @baa 0x00f4da80
undefined4 sub_00f4da80(float * param_1, float * param_2)
{
  if ((((*param_2 <= *param_1) && (*param_1 <= param_2[3])) && (param_2[1] <= param_1[1])) &&
     (((param_1[1] <= param_2[4] && (param_2[2] <= param_1[2])) && (param_1[2] <= param_2[5])))) {
    return 1;
  }
  return 0;
}

// @baa 0x00f4dad0
undefined2 sub_00f4dad0(void)
{
  return 0x69;
}

// @baa 0x00f4dae0
undefined2 sub_00f4dae0(void)
{
  return 0x73;
}

int sub_00d1ff50(void);
int sub_00d3b340(...);
extern undefined4 g_026c57cc;
// @baa 0x00f4daf0
int sub_00f4daf0(void)
{
  if (g_026c57cc == 0) {
    g_026c57cc = sub_00d3b340(L"Engine");
    sub_00d1ff50();
  }
  return g_026c57cc;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x00f4db20
void sub_00f4db20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c57cc == 0) {
    g_026c57cc = sub_00d3b340(L"Engine");
    sub_00d1ff50();
  }
  sub_005e1960(g_026c57cc,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct S_00f4db80 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00f4db80
void sub_00f4db80(S_00f4db80* p, INT Value)
{
    p->vf_18(Value);
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026cce5c;
extern undefined4 g_026cce60;
extern undefined4 g_026cce64;
// @baa 0x00f4dba0
undefined * sub_00f4dba0(void)
{
  if ((g_026cce64 & 1) == 0) {
    g_026cce64 = g_026cce64 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cce5c = (undefined4)(&g_026af518);
    g_026cce60 = (undefined4)(L"HBSPBrushVert");
  }
  return (undefined *)(&g_026cce5c);
}

struct C_view_00f4dbf0 {
    int sub_00c407b0(int);
};

extern undefined4 g_02158be0;
// @baa 0x00f4dbf0
undefined4 * UUnrealEdEngine::sub_00f4dbf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f4dbf0 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02158be0);
  param_1[5] = param_3;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x00f4dc50
void sub_00f4dc50(void) { sub_00c38ac0(); }

extern undefined4 g_026cce68;
extern undefined4 g_026cce6c;
extern undefined4 g_026cce70;
// @baa 0x00f4dc60
undefined * sub_00f4dc60(void)
{
  if ((g_026cce70 & 1) == 0) {
    g_026cce70 = g_026cce70 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cce68 = (undefined4)(&g_026af518);
    g_026cce6c = (undefined4)(L"HStaticMeshVert");
  }
  return (undefined *)(&g_026cce68);
}

struct C_00f4dcb0 { C_00f4dcb0* sub_00f4dcb0(void); };

// @baa 0x00f4dcb0
C_00f4dcb0* C_00f4dcb0::sub_00f4dcb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00f4dcc0 { C_00f4dcc0* sub_00f4dcc0(int a0); };

// @baa 0x00f4dcc0
C_00f4dcc0* C_00f4dcc0::sub_00f4dcc0(int a0) { return this; }

// @baa 0x00f4dd10
undefined4 sub_00f4dd10(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern char g_02158c10[];
// @baa 0x00f4dd20
int sub_00f4dd20(void) { return (int)g_02158c10; }

int sub_005c7a20(void);
extern undefined * g_02158c38;
// @baa 0x00f4dd30
undefined4 * UObject::sub_00f4dd30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02158c38);
  return param_1;
}

// @baa 0x00f4dd50
IMPLEMENT_CLASS_AT(UEditorUserSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 78);

// @baa 0x00f4ddb0
struct S_00f4ddd0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00f4ddd0
void sub_00f4ddd0(S_00f4ddd0* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00f4ddf0
int sub_00f4ddf0(int a0, int a1) { return a1; }

extern undefined * g_02158d48;
// @baa 0x00f4de00
undefined4 * UObject::sub_00f4de00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02158d48);
  return param_1;
}

// @baa 0x00f4de20
IMPLEMENT_CLASS_AT(ULightingChannelsObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 77);

// @baa 0x00f4de80
struct C_00f4dea0 {
    undefined4 sub_00f4dea0();
};

// @baa 0x00f4dea0
undefined4 C_00f4dea0::sub_00f4dea0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x300);
}

// @baa 0x00f4ded0
char* ULightingChannelsObject::sub_00f4ded0(void) { return (char*)this + 24; }

// @baa 0x00f4dee0
int ULightingChannelsObject::sub_00f4dee0(void) { return *(int*)((char*)this + 36); }

struct S_00f4def0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00f4def0
void sub_00f4def0(S_00f4def0* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158e54[];
// @baa 0x00f4df10
void ULightingChannelsObject::sub_00f4df10(void) { *(int*)((char*)this + 0) = (int)g_02158e54; }

int sub_0053dfa0(...);
// @baa 0x00f4df20
undefined4 * ULightingChannelsObject::sub_00f4df20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02158e54);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f4df40 { C_00f4df40* sub_00f4df40(void); };

// @baa 0x00f4df40
C_00f4df40* C_00f4df40::sub_00f4df40(void) { *(int*)((char*)this + 0) = (int)g_02158e54; return this; }

extern char g_02158e58[];
struct C_00f4df50 { C_00f4df50* sub_00f4df50(void); };

// @baa 0x00f4df50
C_00f4df50* C_00f4df50::sub_00f4df50(void) { *(int*)((char*)this + 0) = (int)g_02158e58; return this; }

struct C_00f4df60 { void sub_00f4df60(void); };

// @baa 0x00f4df60
void C_00f4df60::sub_00f4df60(void) { *(int*)((char*)this + 0) = (int)g_02158e54; }

struct C_00f4dfa0 { void sub_00f4dfa0(void); };

// @baa 0x00f4dfa0
void C_00f4dfa0::sub_00f4dfa0(void) { *(int*)((char*)this + 0) = (int)g_02158e54; }

// @baa 0x00f4dfb0
int __stdcall sub_00f4dfb0(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00f4dfc0
int __stdcall sub_00f4dfc0(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }

// @baa 0x00f4dfd0
int __stdcall sub_00f4dfd0(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00f4dfe0
int __stdcall sub_00f4dfe0(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00f4dff0
int sub_00f4dff0(void) { return 0; }

// @baa 0x00f4e000
int sub_00f4e000(void) { return 0; }

// @baa 0x00f4e010
void sub_00f4e010(void) {  }

// @baa 0x00f4e020
void sub_00f4e020(void) {  }

// @baa 0x00f4e030
void __stdcall sub_00f4e030(int a0, int a1) {  }

// @baa 0x00f4e040
void sub_00f4e040(void) {  }

// @baa 0x00f4e050
int __stdcall sub_00f4e050(int a0, int a1) { return 0; }

struct C_00f4e060 { int sub_00f4e060(void); };

// @baa 0x00f4e060
int C_00f4e060::sub_00f4e060(void) { return *(int*)((char*)this + 4); }

struct C_00f4e070 { int sub_00f4e070(void); };

// @baa 0x00f4e070
int C_00f4e070::sub_00f4e070(void) { return *(int*)((char*)this + 8); }

struct C_00f4e080 { int sub_00f4e080(void); };

// @baa 0x00f4e080
int C_00f4e080::sub_00f4e080(void) { return *(int*)((char*)this + 12); }

// @baa 0x00f4e090
int __stdcall sub_00f4e090(int a0, int a1) { return 0; }

struct C_00f4e0a0 { int sub_00f4e0a0(void); };

// @baa 0x00f4e0a0
int C_00f4e0a0::sub_00f4e0a0(void) { return *(int*)((char*)this + 52); }

struct C_00f4e0b0 { int sub_00f4e0b0(void); };

// @baa 0x00f4e0b0
int C_00f4e0b0::sub_00f4e0b0(void) { return *(int*)((char*)this + 52); }

struct C_00f4e0c0 {
    undefined4 sub_00f4e0c0();
};

// @baa 0x00f4e0c0
undefined4 C_00f4e0c0::sub_00f4e0c0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x34);
}

struct C_00f4e0d0 {
    char pad[0x24];
    int f;
    int sub_00f4e0d0();
};

// @baa 0x00f4e0d0
int C_00f4e0d0::sub_00f4e0d0()
{
    return f > -1;
}

struct C_00f4e0e0 {
    undefined4 sub_00f4e0e0();
};

// @baa 0x00f4e0e0
undefined4 C_00f4e0e0::sub_00f4e0e0(void)
{
    int param_1 = (int)this;
  if ((-1 < *(int *)(param_1 + 0x24)) && (*(float *)(param_1 + 0x20) == 1.0)) {
    return 1;
  }
  return 0;
}

struct C_00f4e110 { void sub_00f4e110(int a0); };

// @baa 0x00f4e110
void C_00f4e110::sub_00f4e110(int a0) { *(int*)((char*)this + 36) = a0; }

struct C_00f4e120 { char* sub_00f4e120(void); };

// @baa 0x00f4e120
char* C_00f4e120::sub_00f4e120(void) { return (char*)this + 8; }

struct C_00f4e130 { char* sub_00f4e130(void); };

// @baa 0x00f4e130
char* C_00f4e130::sub_00f4e130(void) { return (char*)this + 20; }

struct C_00f4e140 { float sub_00f4e140(void); };

// @baa 0x00f4e140
float C_00f4e140::sub_00f4e140(void) { return *(float*)((char*)this + 32); }

struct C_00f4e150 { void sub_00f4e150(int a0); };

// @baa 0x00f4e150
void C_00f4e150::sub_00f4e150(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_00f4e180 { int sub_00f4e180(void); };

// @baa 0x00f4e180
int C_00f4e180::sub_00f4e180(void) { return *(int*)((char*)this + 44); }

struct C_00f4e190 { int sub_00f4e190(void); };

// @baa 0x00f4e190
int C_00f4e190::sub_00f4e190(void) { return *(int*)((char*)this + 44); }

struct C_00f4e1a0 { void sub_00f4e1a0(int a0); };

// @baa 0x00f4e1a0
void C_00f4e1a0::sub_00f4e1a0(int a0) { *(int*)((char*)this + 100) = a0; }

extern undefined4 g_026cce74;
extern undefined4 g_026cce78;
extern undefined4 g_026cce7c;
// @baa 0x00f4e1b0
undefined * sub_00f4e1b0(void)
{
  if ((g_026cce7c & 1) == 0) {
    g_026cce7c = g_026cce7c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cce74 = (undefined4)(&g_026af518);
    g_026cce78 = (undefined4)(L"HGeomPolyProxy");
  }
  return (undefined *)(&g_026cce74);
}

struct C_view_00f4e200 {
    int sub_00c407b0(int);
};

extern undefined4 g_02158e80;
// @baa 0x00f4e200
undefined4 * UUnrealEdEngine::sub_00f4e200(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f4e200 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02158e80);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x00f4e240
int sub_00f4e240(void) { return 3; }

// @baa 0x00f4e250
void sub_00f4e250(void) { sub_00c38ac0(); }

extern undefined4 g_026cce80;
extern undefined4 g_026cce84;
extern undefined4 g_026cce88;
// @baa 0x00f4e260
undefined * sub_00f4e260(void)
{
  if ((g_026cce88 & 1) == 0) {
    g_026cce88 = g_026cce88 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cce80 = (undefined4)(&g_026af518);
    g_026cce84 = (undefined4)(L"HGeomEdgeProxy");
  }
  return (undefined *)(&g_026cce80);
}

struct C_view_00f4e2b0 {
    int sub_00c407b0(int);
};

extern undefined4 g_02158eb0;
// @baa 0x00f4e2b0
undefined4 * UUnrealEdEngine::sub_00f4e2b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f4e2b0 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02158eb0);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x00f4e2f0
int sub_00f4e2f0(void) { return 3; }

// @baa 0x00f4e300
void sub_00f4e300(void) { sub_00c38ac0(); }

extern undefined4 g_026cce8c;
extern undefined4 g_026cce90;
extern undefined4 g_026cce94;
// @baa 0x00f4e310
undefined * sub_00f4e310(void)
{
  if ((g_026cce94 & 1) == 0) {
    g_026cce94 = g_026cce94 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cce8c = (undefined4)(&g_026af518);
    g_026cce90 = (undefined4)(L"HGeomVertexProxy");
  }
  return (undefined *)(&g_026cce8c);
}

struct C_view_00f4e360 {
    int sub_00c407b0(int);
};

extern undefined * g_02158ee4;
// @baa 0x00f4e360
undefined4 * UUnrealEdEngine::sub_00f4e360(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f4e360 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02158ee4);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x00f4e3a0
int sub_00f4e3a0(void) { return 3; }

// @baa 0x00f4e3b0
void sub_00f4e3b0(void) { sub_00c38ac0(); }

// @baa 0x00f4e3c0
int sub_00f4e3c0(int a0, int a1) { return a1; }

extern char g_02158ef4[];
struct C_00f4e3d0 { C_00f4e3d0* sub_00f4e3d0(void); };

// @baa 0x00f4e3d0
C_00f4e3d0* C_00f4e3d0::sub_00f4e3d0(void) { *(int*)((char*)this + 0) = (int)g_02158ef4; return this; }

struct C_00f4e3e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f4e3e0* sub_00f4e3e0(INT value);
};

// @baa 0x00f4e3e0
C_00f4e3e0* C_00f4e3e0::sub_00f4e3e0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00f4e400 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00f4e400* sub_00f4e400(INT value);
};

// @baa 0x00f4e400
C_00f4e400* C_00f4e400::sub_00f4e400(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00f4e420 { int a, b, c; C_00f4e420(); };

// @baa 0x00f4e420
C_00f4e420::C_00f4e420() : a(0), b(0), c(0) {}

struct C_00f4e430 { int a, b, c; C_00f4e430(); };

// @baa 0x00f4e430
C_00f4e430::C_00f4e430() : a(0), b(0), c(0) {}

struct C_00f4e440 { int sub_00f4e440(void); };

// @baa 0x00f4e440
int C_00f4e440::sub_00f4e440(void) { return *(int*)((char*)this + 0); }

struct C_00f4e450 { int sub_00f4e450(void); };

// @baa 0x00f4e450
int C_00f4e450::sub_00f4e450(void) { return *(int*)((char*)this + 0); }

struct C_00f4e460 { int sub_00f4e460(void); };

// @baa 0x00f4e460
int C_00f4e460::sub_00f4e460(void) { return *(int*)((char*)this + 0); }

struct C_00f4e470 { int sub_00f4e470(void); };

// @baa 0x00f4e470
int C_00f4e470::sub_00f4e470(void) { return *(int*)((char*)this + 0); }

struct C_00f4e480 { int sub_00f4e480(void); };

// @baa 0x00f4e480
int C_00f4e480::sub_00f4e480(void) { return *(int*)((char*)this + 0); }

struct C_00f4e490 { int sub_00f4e490(void); };

// @baa 0x00f4e490
int C_00f4e490::sub_00f4e490(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4a0 { int sub_00f4e4a0(void); };

// @baa 0x00f4e4a0
int C_00f4e4a0::sub_00f4e4a0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4b0 { int sub_00f4e4b0(void); };

// @baa 0x00f4e4b0
int C_00f4e4b0::sub_00f4e4b0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4c0 { int sub_00f4e4c0(void); };

// @baa 0x00f4e4c0
int C_00f4e4c0::sub_00f4e4c0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4d0 { int sub_00f4e4d0(void); };

// @baa 0x00f4e4d0
int C_00f4e4d0::sub_00f4e4d0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4e0 { int sub_00f4e4e0(void); };

// @baa 0x00f4e4e0
int C_00f4e4e0::sub_00f4e4e0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e4f0 { int sub_00f4e4f0(void); };

// @baa 0x00f4e4f0
int C_00f4e4f0::sub_00f4e4f0(void) { return *(int*)((char*)this + 0); }

struct C_00f4e500 { int sub_00f4e500(void); };

// @baa 0x00f4e500
int C_00f4e500::sub_00f4e500(void) { return *(int*)((char*)this + 0); }

// @baa 0x00f4e590
IMPLEMENT_CLASS_AT(UTerrainFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1466);

// @baa 0x00f4e6a0
int UTerrainFactory::vf_000(void) { return 1; }

// @baa 0x00f4e6b0
bool UTerrainFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f4ec90
int sub_00f4ec90(void) { return 1; }

int sub_005fbe20(void);
int sub_0060f890(...);
extern undefined4 g_026a4b38;
// @baa 0x00f4eca0
bool UTerrainFactory::sub_00f4eca0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  if (g_026a4b38 == 0) {
    g_026a4b38 = sub_0060f890(L"Core");
    sub_005fbe20();
  }
  return iVar1 != g_026a4b38;
}

// @baa 0x00f4ee00
IMPLEMENT_CLASS_AT(UEditorEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 76);

// @baa 0x00f4ef10
int UEditorEngine::vf_000(void) { return 1; }

// @baa 0x00f4ef20
bool UEditorEngine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f4ef60
// @baa 0x00f4f070
int ULightingChannelsObject::vf_000(void) { return 1; }

// @baa 0x00f4f080
bool ULightingChannelsObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f4f0c0
// @baa 0x00f4f1f0
bool UEditorUserSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00f4f280 {
    undefined4 sub_00f4f280();
};

// @baa 0x00f4f280
undefined4 C_00f4f280::sub_00f4f280(void)
{
    int param_1 = (int)this;
  float fVar1;
  float *pfVar2;
  pfVar2 = *(float **)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  *pfVar2 = fVar1;
  pfVar2[1] = pfVar2[1] + fVar1;
  return 0xc;
}

struct C_00f4f2a0 {
    void sub_00f4f2a0();
};

extern undefined4 g_01ebb554;
// @baa 0x00f4f2a0
void C_00f4f2a0::sub_00f4f2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01ebb554);
  return;
}

struct C_00f4f2b0 {
    undefined4 * sub_00f4f2b0(byte);
};

// @baa 0x00f4f2b0
undefined4 * C_00f4f2b0::sub_00f4f2b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f4f520
undefined4 UTerrainFactory::sub_00f4f520(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x34) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x34) + 8);
  }
  return 1;
}

struct Target {
    void sub_00fa6ea0();
};

struct C_00f4f780 {
    char pad[0x48];
    Target* p_0x48;
    void sub_00f4f780();
};

// @baa 0x00f4f780
void C_00f4f780::sub_00f4f780()
{
    p_0x48->sub_00fa6ea0();
}

// @baa 0x00f50030
undefined4 UTerrainFactory::sub_00f50030(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc);
  }
  return *(undefined4 *)(param_1 + 4);
}

struct C_00f52bb0{
int sub_00f52bb0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00f52bb0
int C_00f52bb0::sub_00f52bb0(undefined4*param_2)
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

struct C_00f52ca0{
int sub_00f52ca0(undefined4*);
};

// @baa 0x00f52ca0
int C_00f52ca0::sub_00f52ca0(undefined4*param_2)
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

// @baa 0x00f5bc40
void sub_00f5bc40(void) {  }

// @baa 0x00f5bc50
void __stdcall sub_00f5bc50(int a0) {  }

// @baa 0x00f5bc60
void sub_00f5bc60(void) {  }

// @baa 0x00f5bc70
void sub_00f5bc70(void) {  }

// @baa 0x00f5bc80
void sub_00f5bc80(void) {  }

// @baa 0x00f5bc90
int sub_00f5bc90(void) { return 1; }

// @baa 0x00f5bca0
int sub_00f5bca0(void) { return 1; }

// @baa 0x00f5bcb0
int __stdcall sub_00f5bcb0(int a0) { return 1; }

// @baa 0x00f5bcc0
int __stdcall sub_00f5bcc0(int a0, int a1) { return 0; }

// @baa 0x00f5bcd0
int __stdcall sub_00f5bcd0(int a0, int a1) { return 0; }

// @baa 0x00f5bce0
void sub_00f5bce0(void) {  }

// @baa 0x00f5bd10
int __stdcall sub_00f5bd10(int a0) { return 1; }

// @baa 0x00f5bd20
void sub_00f5bd20(void) {  }

// @baa 0x00f5bd30
void sub_00f5bd30(void) {  }

// @baa 0x00f5bd40
void sub_00f5bd40(void) {  }

// @baa 0x00f5bd70
int __stdcall sub_00f5bd70(int a0, int a1) { return 0; }

// @baa 0x00f5bd80
void sub_00f5bd80(void) {  }

// @baa 0x00f5bd90
int sub_00f5bd90(void) { return 0; }

// @baa 0x00f5bda0
int sub_00f5bda0(void) { return 0; }

// @baa 0x00f5d270
int sub_00f5d270(void) { return 0; }

int sub_00ec5970(void);
int sub_00f5bdb0(void);
// @baa 0x00f5d280
void UTerrainFactory::sub_00f5d280(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  sub_00f5bdb0();
  iVar1 = sub_00ec5970();
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  iVar1 = sub_00ec5970();
  *(undefined4 *)(iVar1 + 0x3c) = 1;
  return;
}

struct C_00f5d560 {
    void sub_00f5d560();
};

int sub_00f5bbb0(void);
extern undefined * g_021591c0;
// @baa 0x00f5d560
void C_00f5d560::sub_00f5d560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021591c0);
  sub_00f5bbb0();
  return;
}

// @baa 0x00f5d570
int sub_00f5d570(void) { return 1; }

struct C_00f5db70 {
    FString sub_00f5db70();
};

// @baa 0x00f5db70
FString C_00f5db70::sub_00f5db70()
{
    return TEXT("Modifier");
}

struct C_00f5df80 {
    int sub_00f5df80(undefined4 *);
};

int sub_00662b80(...);
// @baa 0x00f5df80
int C_00f5df80::sub_00f5df80(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662b80(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  return *(int *)(param_1 + 4) + -1;
}

extern TArray<int> g_026a1ca4;
struct C_00f5e110 {
    int sub_00f5e110();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f5e110
int C_00f5e110::sub_00f5e110()
{
    return g_026a1ca4(Index);
}

struct C_00f5e170 {
    int sub_00f5e170();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f5e170
int C_00f5e170::sub_00f5e170()
{
    return g_026a1ca4(Index);
}

struct C_00f5e1d0 {
    int sub_00f5e1d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f5e1d0
int C_00f5e1d0::sub_00f5e1d0()
{
    return g_026a1ca4(Index);
}

struct C_00f5e230 {
    int sub_00f5e230();
};

// @baa 0x00f5e230
int C_00f5e230::sub_00f5e230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f5e250 {
    int sub_00f5e250();
};

// @baa 0x00f5e250
int C_00f5e250::sub_00f5e250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_00f5e260 {
    int sub_00f5e260();
};

// @baa 0x00f5e260
int C_00f5e260::sub_00f5e260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x48;
}

struct C_00f5e270 {
    int sub_00f5e270();
};

// @baa 0x00f5e270
int C_00f5e270::sub_00f5e270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f5e290 {
    int sub_00f5e290();
};

// @baa 0x00f5e290
int C_00f5e290::sub_00f5e290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00f5e2a0 {
    int sub_00f5e2a0();
};

// @baa 0x00f5e2a0
int C_00f5e2a0::sub_00f5e2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_00f5e2b0 {
    int sub_00f5e2b0(int);
    int sub_00f59790(int, int);
};

// @baa 0x00f5e2b0
int C_00f5e2b0::sub_00f5e2b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f5e2b0 *)(this))->sub_00f59790((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
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

struct TConstSetBitIterator_00f5e440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e440& operator++();
};

TConstSetBitIterator_00f5e440::TConstSetBitIterator_00f5e440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e440
TConstSetBitIterator_00f5e440& TConstSetBitIterator_00f5e440::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e460& operator++();
};

TConstSetBitIterator_00f5e460::TConstSetBitIterator_00f5e460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e460
TConstSetBitIterator_00f5e460& TConstSetBitIterator_00f5e460::operator++()
{
    It.Advance();
    return *this;
}

void sub_00f5e370();
// @baa 0x00f5e480
void sub_00f5e480(void) { sub_00f5e370(); }

struct TConstSetBitIterator_00f5e490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e490& operator++();
};

TConstSetBitIterator_00f5e490::TConstSetBitIterator_00f5e490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e490
TConstSetBitIterator_00f5e490& TConstSetBitIterator_00f5e490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e4e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e4e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e4e0& operator++();
};

TConstSetBitIterator_00f5e4e0::TConstSetBitIterator_00f5e4e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e4e0
TConstSetBitIterator_00f5e4e0& TConstSetBitIterator_00f5e4e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e530& operator++();
};

TConstSetBitIterator_00f5e530::TConstSetBitIterator_00f5e530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e530
TConstSetBitIterator_00f5e530& TConstSetBitIterator_00f5e530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e550& operator++();
};

TConstSetBitIterator_00f5e550::TConstSetBitIterator_00f5e550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e550
TConstSetBitIterator_00f5e550& TConstSetBitIterator_00f5e550::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e570& operator++();
};

TConstSetBitIterator_00f5e570::TConstSetBitIterator_00f5e570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e570
TConstSetBitIterator_00f5e570& TConstSetBitIterator_00f5e570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e5c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e5c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e5c0& operator++();
};

TConstSetBitIterator_00f5e5c0::TConstSetBitIterator_00f5e5c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e5c0
TConstSetBitIterator_00f5e5c0& TConstSetBitIterator_00f5e5c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f5e610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f5e610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f5e610& operator++();
};

TConstSetBitIterator_00f5e610::TConstSetBitIterator_00f5e610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f5e610
TConstSetBitIterator_00f5e610& TConstSetBitIterator_00f5e610::operator++()
{
    It.Advance();
    return *this;
}

struct C_00f5e920 {
    undefined4 * sub_00f5e920();
};

int sub_00ff92b0(void);
extern undefined * g_02159320;
// @baa 0x00f5e920
undefined4 * C_00f5e920::sub_00f5e920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_02159320);
  param_1[1] = 0xf;
  return param_1;
}

// @baa 0x00f5e940
int sub_00f5e940(void) { return 0; }

// @baa 0x00f5e950
int __stdcall sub_00f5e950(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14) { return 1; }

struct C_00f5e960 {
    FString sub_00f5e960();
};

// @baa 0x00f5e960
FString C_00f5e960::sub_00f5e960()
{
    return TEXT("SplitY");
}

void sub_00f5e8b0();
// @baa 0x00f5e990
void sub_00f5e990(void) { sub_00f5e8b0(); }

struct C_00f5e9a0 {
    undefined4 * sub_00f5e9a0();
};

extern undefined * g_02159380;
// @baa 0x00f5e9a0
undefined4 * C_00f5e9a0::sub_00f5e9a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_02159380);
  param_1[1] = 0x10;
  return param_1;
}

// @baa 0x00f5e9c0
int sub_00f5e9c0(void) { return 0; }

// @baa 0x00f5e9d0
int __stdcall sub_00f5e9d0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14) { return 1; }

struct C_00f5e9e0 {
    FString sub_00f5e9e0();
};

// @baa 0x00f5e9e0
FString C_00f5e9e0::sub_00f5e9e0()
{
    return TEXT("Merge");
}

// @baa 0x00f5ea10
void sub_00f5ea10(void) { sub_00f5e8b0(); }

struct C_00f5ea20 {
    undefined4 * sub_00f5ea20();
};

extern undefined * g_021593e0;
// @baa 0x00f5ea20
undefined4 * C_00f5ea20::sub_00f5ea20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_021593e0);
  param_1[1] = 0x11;
  return param_1;
}

// @baa 0x00f5ea40
int sub_00f5ea40(void) { return 1; }

struct C_00f5ea50 {
    FString sub_00f5ea50();
};

// @baa 0x00f5ea50
FString C_00f5ea50::sub_00f5ea50()
{
    return TEXT("AddRemoveSectors");
}

// @baa 0x00f5ea80
void sub_00f5ea80(void) { sub_00f5e8b0(); }

struct C_00f5ea90 {
    undefined4 * sub_00f5ea90();
};

extern undefined * g_02159458;
// @baa 0x00f5ea90
undefined4 * C_00f5ea90::sub_00f5ea90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_02159458);
  param_1[1] = 0x12;
  return param_1;
}

// @baa 0x00f5eab0
int __stdcall sub_00f5eab0(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 1; }

struct C_00f5eac0 {
    FString sub_00f5eac0();
};

// @baa 0x00f5eac0
FString C_00f5eac0::sub_00f5eac0()
{
    return TEXT("OrientationFlip");
}

// @baa 0x00f5eaf0
void sub_00f5eaf0(void) { sub_00f5e8b0(); }

struct C_00f5eb00 {
    undefined4 * sub_00f5eb00();
};

extern undefined * g_021594c8;
// @baa 0x00f5eb00
undefined4 * C_00f5eb00::sub_00f5eb00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_021594c8);
  param_1[1] = 0x13;
  return param_1;
}

struct C_00f5eb30 {
    FString sub_00f5eb30();
};

// @baa 0x00f5eb30
FString C_00f5eb30::sub_00f5eb30()
{
    return TEXT("VertexEdit");
}

// @baa 0x00f5eb60
void sub_00f5eb60(void) { sub_00f5e8b0(); }

// @baa 0x00f5f0b0
undefined4 UTerrainFactory::sub_00f5f0b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00f5c480(void);
// @baa 0x00f5f310
undefined4 UTerrainFactory::sub_00f5f310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5c480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00f5d1f0(void);
// @baa 0x00f5fe50
undefined4 UTerrainFactory::sub_00f5fe50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5d1f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00f61f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f61f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f61f00& operator++();
};

TConstSetBitIterator_00f61f00::TConstSetBitIterator_00f61f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f61f00
TConstSetBitIterator_00f61f00& TConstSetBitIterator_00f61f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f61f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f61f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f61f50& operator++();
};

TConstSetBitIterator_00f61f50::TConstSetBitIterator_00f61f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f61f50
TConstSetBitIterator_00f61f50& TConstSetBitIterator_00f61f50::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00f623f0
// @baa 0x00f62450
int sub_00f62740(void);
int sub_005c7a70(...);
// @baa 0x00f627a0
undefined4 UTerrainFactory::sub_00f627a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_00f62740();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,100);
  }
  return param_1;
}

// @baa 0x00f64af0
int sub_00f64af0(void) { return 0; }

int sub_00f64b00(void);
// @baa 0x00f64b60
undefined4 UTerrainFactory::sub_00f64b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f64b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00f65140 {
    int sub_00f5e3d0(int, int);
};

// @baa 0x00f65140
int UPackageMap::sub_00f65140(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00f65140 *)(this))->sub_00f5e3d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_00f65180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f65180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f65180& operator++();
};

TConstSetBitIterator_00f65180::TConstSetBitIterator_00f65180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f65180
TConstSetBitIterator_00f65180& TConstSetBitIterator_00f65180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f651a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f651a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f651a0& operator++();
};

TConstSetBitIterator_00f651a0::TConstSetBitIterator_00f651a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f651a0
TConstSetBitIterator_00f651a0& TConstSetBitIterator_00f651a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f65670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f65670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f65670& operator++();
};

TConstSetBitIterator_00f65670::TConstSetBitIterator_00f65670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f65670
TConstSetBitIterator_00f65670& TConstSetBitIterator_00f65670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f656c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f656c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f656c0& operator++();
};

TConstSetBitIterator_00f656c0::TConstSetBitIterator_00f656c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f656c0
TConstSetBitIterator_00f656c0& TConstSetBitIterator_00f656c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f65710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f65710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f65710& operator++();
};

TConstSetBitIterator_00f65710::TConstSetBitIterator_00f65710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f65710
TConstSetBitIterator_00f65710& TConstSetBitIterator_00f65710::operator++()
{
    It.Advance();
    return *this;
}

struct C_00f65760 {
    undefined4 sub_00f65760(byte);
};

int sub_00553720(void);
// @baa 0x00f65760
undefined4 C_00f65760::sub_00f65760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_02159760[];
struct S_00f65780 { void sub_0060b3d0(); };

// @baa 0x00f65780
void sub_00f65780(S_00f65780 *p) { if (p) { p->sub_0060b3d0(); *(int *)p = (int)g_02159760; } }

// @baa 0x00f657a0
struct C_00ffb910 {
    undefined4 * sub_00ffb910();
};

extern undefined * g_0217f870;
// @baa 0x00ffb910
undefined4 * C_00ffb910::sub_00ffb910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217f870);
  param_1[1] = 1;
  return param_1;
}

struct C_00ffb930 {
    FString sub_00ffb930();
};

// @baa 0x00ffb930
FString C_00ffb930::sub_00ffb930()
{
    return TEXT("Paint");
}

// @baa 0x00ffb960
void sub_00ffb960(void) { sub_00f5e8b0(); }

struct C_00ffb970 {
    undefined4 * sub_00ffb970();
};

extern undefined * g_0217f8d0;
// @baa 0x00ffb970
undefined4 * C_00ffb970::sub_00ffb970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217f8d0);
  param_1[1] = 6;
  return param_1;
}

struct C_00ffb990 {
    FString sub_00ffb990();
};

// @baa 0x00ffb990
FString C_00ffb990::sub_00ffb990()
{
    return TEXT("Noise");
}

// @baa 0x00ffb9c0
void sub_00ffb9c0(void) { sub_00f5e8b0(); }

struct C_00ffb9d0 {
    undefined4 * sub_00ffb9d0();
};

extern undefined * g_0217f930;
// @baa 0x00ffb9d0
undefined4 * C_00ffb9d0::sub_00ffb9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217f930);
  param_1[1] = 2;
  return param_1;
}

struct C_00ffb9f0 {
    FString sub_00ffb9f0();
};

// @baa 0x00ffb9f0
FString C_00ffb9f0::sub_00ffb9f0()
{
    return TEXT("Smooth");
}

// @baa 0x00ffba20
void sub_00ffba20(void) { sub_00f5e8b0(); }

struct C_00ffba30 {
    undefined4 * sub_00ffba30();
};

extern undefined * g_0217f990;
// @baa 0x00ffba30
undefined4 * C_00ffba30::sub_00ffba30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217f990);
  param_1[1] = 3;
  return param_1;
}

struct C_00ffba50 {
    FString sub_00ffba50();
};

// @baa 0x00ffba50
FString C_00ffba50::sub_00ffba50()
{
    return TEXT("Average");
}

// @baa 0x00ffba80
void sub_00ffba80(void) { sub_00f5e8b0(); }

struct C_00ffba90 {
    undefined4 * sub_00ffba90();
};

extern undefined * g_0217f9f0;
// @baa 0x00ffba90
undefined4 * C_00ffba90::sub_00ffba90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217f9f0);
  param_1[1] = 4;
  return param_1;
}

struct C_00ffbab0 {
    FString sub_00ffbab0();
};

// @baa 0x00ffbab0
FString C_00ffbab0::sub_00ffbab0()
{
    return TEXT("Flatten");
}

// @baa 0x00ffbae0
void sub_00ffbae0(void) { sub_00f5e8b0(); }

struct C_00ffbaf0 {
    undefined4 * sub_00ffbaf0();
};

extern undefined * g_0217fa50;
// @baa 0x00ffbaf0
undefined4 * C_00ffbaf0::sub_00ffbaf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217fa50);
  param_1[1] = 7;
  return param_1;
}

struct C_00ffbb10 {
    FString sub_00ffbb10();
};

// @baa 0x00ffbb10
FString C_00ffbb10::sub_00ffbb10()
{
    return TEXT("Visibility");
}

// @baa 0x00ffbb40
void sub_00ffbb40(void) { sub_00f5e8b0(); }

struct C_00ffbb50 {
    undefined4 * sub_00ffbb50();
};

extern undefined * g_0217fab8;
// @baa 0x00ffbb50
undefined4 * C_00ffbb50::sub_00ffbb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217fab8);
  param_1[1] = 8;
  return param_1;
}

// @baa 0x00ffbb70
int sub_00ffbb70(void) { return 0; }

struct C_00ffbb80 {
    FString sub_00ffbb80();
};

// @baa 0x00ffbb80
FString C_00ffbb80::sub_00ffbb80()
{
    return TEXT("Tex Pan");
}

// @baa 0x00ffbbb0
void sub_00ffbbb0(void) { sub_00f5e8b0(); }

struct C_00ffbbc0 {
    undefined4 * sub_00ffbbc0();
};

extern undefined * g_0217fb18;
// @baa 0x00ffbbc0
undefined4 * C_00ffbbc0::sub_00ffbbc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217fb18);
  param_1[1] = 9;
  return param_1;
}

// @baa 0x00ffbbe0
int sub_00ffbbe0(void) { return 0; }

struct C_00ffbbf0 {
    FString sub_00ffbbf0();
};

// @baa 0x00ffbbf0
FString C_00ffbbf0::sub_00ffbbf0()
{
    return TEXT("Tex Rotate");
}

// @baa 0x00ffbc20
void sub_00ffbc20(void) { sub_00f5e8b0(); }

struct C_00ffbc30 {
    undefined4 * sub_00ffbc30();
};

extern undefined * g_0217fb80;
// @baa 0x00ffbc30
undefined4 * C_00ffbc30::sub_00ffbc30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_0217fb80);
  param_1[1] = 10;
  return param_1;
}
