// TerrainEditor.cpp (part 1 of 4): 288 functions
// Placed here by: neighbours 282, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00fefd40(void);
int sub_010027f0(...);
extern undefined4 g_026cdd30;
// @baa 0x00ec0930
int sub_00ec0930(void)
{
  if (g_026cdd30 == 0) {
    g_026cdd30 = sub_010027f0(L"Editor");
    sub_00fefd40();
  }
  return g_026cdd30;
}

struct C {
    void sub_0124b170();
};

// @baa 0x0124b170
void C::sub_0124b170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[0x10] = 0;
  return;
}

struct C_0124b180 { int sub_0124b180(void); };

// @baa 0x0124b180
int C_0124b180::sub_0124b180(void) { return *(int*)((char*)this + 0); }

struct C_0124b190 { int sub_0124b190(void); };

// @baa 0x0124b190
int C_0124b190::sub_0124b190(void) { return *(int*)((char*)this + 4); }

struct C_0124b1a0 { int sub_0124b1a0(void); };

// @baa 0x0124b1a0
int C_0124b1a0::sub_0124b1a0(void) { return *(int*)((char*)this + 8); }

struct C_0124b1b0 { int sub_0124b1b0(void); };

// @baa 0x0124b1b0
int C_0124b1b0::sub_0124b1b0(void) { return *(int*)((char*)this + 8); }

struct C_0124b1c0 { int sub_0124b1c0(void); };

// @baa 0x0124b1c0
int C_0124b1c0::sub_0124b1c0(void) { return *(int*)((char*)this + 8); }

struct C_0124b1d0 { int sub_0124b1d0(void); };

// @baa 0x0124b1d0
int C_0124b1d0::sub_0124b1d0(void) { return *(int*)((char*)this + 8); }

struct C_0124b1e0 { int sub_0124b1e0(void); };

// @baa 0x0124b1e0
int C_0124b1e0::sub_0124b1e0(void) { return *(int*)((char*)this + 8); }

struct C_0124b1f0 { int sub_0124b1f0(void); };

// @baa 0x0124b1f0
int C_0124b1f0::sub_0124b1f0(void) { return *(int*)((char*)this + 12); }

struct C_0124b200 { int sub_0124b200(void); };

// @baa 0x0124b200
int C_0124b200::sub_0124b200(void) { return *(int*)((char*)this + 16); }

struct C_0124b210 { int sub_0124b210(void); };

// @baa 0x0124b210
int C_0124b210::sub_0124b210(void) { return *(int*)((char*)this + 20); }

struct C_0124b220 { int sub_0124b220(void); };

// @baa 0x0124b220
int C_0124b220::sub_0124b220(void) { return *(int*)((char*)this + 24); }

struct C_0124b230 { int sub_0124b230(void); };

// @baa 0x0124b230
int C_0124b230::sub_0124b230(void) { return *(int*)((char*)this + 28); }

struct C_0124b240 { int sub_0124b240(void); };

// @baa 0x0124b240
int C_0124b240::sub_0124b240(void) { return *(int*)((char*)this + 32); }

struct C_0124b250 { int sub_0124b250(void); };

// @baa 0x0124b250
int C_0124b250::sub_0124b250(void) { return *(int*)((char*)this + 36); }

struct C_0124b260 { int sub_0124b260(void); };

// @baa 0x0124b260
int C_0124b260::sub_0124b260(void) { return *(int*)((char*)this + 40); }

struct C_0124b270 { int sub_0124b270(void); };

// @baa 0x0124b270
int C_0124b270::sub_0124b270(void) { return *(int*)((char*)this + 44); }

struct C_0124b280 { int sub_0124b280(void); };

// @baa 0x0124b280
int C_0124b280::sub_0124b280(void) { return *(int*)((char*)this + 48); }

struct C_0124b290 { int sub_0124b290(void); };

// @baa 0x0124b290
int C_0124b290::sub_0124b290(void) { return *(int*)((char*)this + 52); }

struct C_0124b2a0 { int sub_0124b2a0(void); };

// @baa 0x0124b2a0
int C_0124b2a0::sub_0124b2a0(void) { return *(int*)((char*)this + 56); }

struct C_0124b2b0 { int sub_0124b2b0(void); };

// @baa 0x0124b2b0
int C_0124b2b0::sub_0124b2b0(void) { return *(int*)((char*)this + 60); }

struct C_0124b2c0 { char* sub_0124b2c0(void); };

// @baa 0x0124b2c0
char* C_0124b2c0::sub_0124b2c0(void) { return (char*)this + 68; }

struct C_0124b2d0 { char* sub_0124b2d0(void); };

// @baa 0x0124b2d0
char* C_0124b2d0::sub_0124b2d0(void) { return (char*)this + 72; }

struct C_0124b2e0 { int sub_0124b2e0(void); };

// @baa 0x0124b2e0
int C_0124b2e0::sub_0124b2e0(void) { return *(int*)((char*)this + 64); }

struct C_0124b2f0 { void sub_0124b2f0(int a0); };

// @baa 0x0124b2f0
void C_0124b2f0::sub_0124b2f0(int a0) { *(int*)((char*)this + 64) = a0; }

struct C_0124b300 { void sub_0124b300(int a0); };

// @baa 0x0124b300
void C_0124b300::sub_0124b300(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_0124b310 { void sub_0124b310(int a0); };

// @baa 0x0124b310
void C_0124b310::sub_0124b310(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_0124b320 { void sub_0124b320(int a0); };

// @baa 0x0124b320
void C_0124b320::sub_0124b320(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_0124b330 { void sub_0124b330(int a0); };

// @baa 0x0124b330
void C_0124b330::sub_0124b330(int a0) { *(int*)((char*)this + 32) = a0; }

struct C_0124b340 { void sub_0124b340(int a0); };

// @baa 0x0124b340
void C_0124b340::sub_0124b340(int a0) { *(int*)((char*)this + 44) = a0; }

struct C_0124b350 { void sub_0124b350(int a0); };

// @baa 0x0124b350
void C_0124b350::sub_0124b350(int a0) { *(int*)((char*)this + 48) = a0; }

struct C_0124b360 { void sub_0124b360(int a0); };

// @baa 0x0124b360
void C_0124b360::sub_0124b360(int a0) { *(int*)((char*)this + 56) = a0; }

struct C_0124b370 { int sub_0124b370(void); };

// @baa 0x0124b370
int C_0124b370::sub_0124b370(void) { return *(int*)((char*)this + 856); }

struct C_0124b380 { int sub_0124b380(void); };

// @baa 0x0124b380
int C_0124b380::sub_0124b380(void) { return *(int*)((char*)this + 860); }

struct C_0124b390 { int sub_0124b390(void); };

// @baa 0x0124b390
int C_0124b390::sub_0124b390(void) { return *(int*)((char*)this + 864); }

struct C_0124b3a0 { int sub_0124b3a0(void); };

// @baa 0x0124b3a0
int C_0124b3a0::sub_0124b3a0(void) { return *(int*)((char*)this + 868); }

struct C_0124b3b0 { int sub_0124b3b0(void); };

// @baa 0x0124b3b0
int C_0124b3b0::sub_0124b3b0(void) { return *(int*)((char*)this + 872); }

struct C_0124b3c0 { int sub_0124b3c0(void); };

// @baa 0x0124b3c0
int C_0124b3c0::sub_0124b3c0(void) { return *(int*)((char*)this + 876); }

struct C_0124b3d0 { int sub_0124b3d0(void); };

// @baa 0x0124b3d0
int C_0124b3d0::sub_0124b3d0(void) { return *(int*)((char*)this + 880); }

struct C_0124b3e0 { int sub_0124b3e0(void); };

// @baa 0x0124b3e0
int C_0124b3e0::sub_0124b3e0(void) { return *(int*)((char*)this + 884); }

struct C_0124b3f0 { int sub_0124b3f0(void); };

// @baa 0x0124b3f0
int C_0124b3f0::sub_0124b3f0(void) { return *(int*)((char*)this + 888); }

struct C_0124b400 { int sub_0124b400(void); };

// @baa 0x0124b400
int C_0124b400::sub_0124b400(void) { return *(int*)((char*)this + 892); }

struct C_0124b410 { int sub_0124b410(void); };

// @baa 0x0124b410
int C_0124b410::sub_0124b410(void) { return *(int*)((char*)this + 896); }

struct C_0124b420 { int sub_0124b420(void); };

// @baa 0x0124b420
int C_0124b420::sub_0124b420(void) { return *(int*)((char*)this + 900); }

struct C_0124b430 { int sub_0124b430(void); };

// @baa 0x0124b430
int C_0124b430::sub_0124b430(void) { return *(int*)((char*)this + 904); }

struct C_0124b440 { int sub_0124b440(void); };

// @baa 0x0124b440
int C_0124b440::sub_0124b440(void) { return *(int*)((char*)this + 908); }

struct C_0124b450 { int sub_0124b450(void); };

// @baa 0x0124b450
int C_0124b450::sub_0124b450(void) { return *(int*)((char*)this + 912); }

struct C_0124b460 { int sub_0124b460(void); };

// @baa 0x0124b460
int C_0124b460::sub_0124b460(void) { return *(int*)((char*)this + 916); }

struct C_0124b470 { int sub_0124b470(void); };

// @baa 0x0124b470
int C_0124b470::sub_0124b470(void) { return *(int*)((char*)this + 920); }

struct C_0124b480 { int sub_0124b480(void); };

// @baa 0x0124b480
int C_0124b480::sub_0124b480(void) { return *(int*)((char*)this + 924); }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0220f924;
// @baa 0x0124b490
undefined4 * UUnrealEdEngine::sub_0124b490(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0220f924);
  param_1[5] = param_3;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x0124b4c0
void sub_0124b4c0(void) { sub_00c38ac0(); }

struct C_0124b4d0 { int sub_0124b4d0(void); };

// @baa 0x0124b4d0
int C_0124b4d0::sub_0124b4d0(void) { return *(int*)((char*)this + 464); }

struct C_0124b4e0 { int sub_0124b4e0(void); };

// @baa 0x0124b4e0
int C_0124b4e0::sub_0124b4e0(void) { return *(int*)((char*)this + 468); }

struct C_0124b4f0 {
    void sub_0124b4f0(undefined4, undefined4);
};

// @baa 0x0124b4f0
void C_0124b4f0::sub_0124b4f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  return;
}

struct C_0124b510 { int sub_0124b510(void); };

// @baa 0x0124b510
int C_0124b510::sub_0124b510(void) { return *(int*)((char*)this + 544); }

struct C_0124b520 { int sub_0124b520(void); };

// @baa 0x0124b520
int C_0124b520::sub_0124b520(void) { return *(int*)((char*)this + 436); }

struct C_0124b530 { char* sub_0124b530(void); };

// @baa 0x0124b530
char* C_0124b530::sub_0124b530(void) { return (char*)this + 452; }

struct C_0124b540 { char* sub_0124b540(void); };

// @baa 0x0124b540
char* C_0124b540::sub_0124b540(void) { return (char*)this + 532; }

struct C_0124b670 {
    undefined4 sub_0124b670();
};

// @baa 0x0124b670
undefined4 C_0124b670::sub_0124b670(void)
{
    int * param_1 = (int *)this;

  if ((*param_1 != 0) && (param_1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

struct C_0124b760 {
    void sub_0124b760();
};

int sub_00f80980(void);
extern undefined * g_0220f9a0;
extern undefined * g_0220f9a8;
// @baa 0x0124b760
void C_0124b760::sub_0124b760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0220f9a8);
  param_1[1] = (undefined4)(&g_0220f9a0);
  sub_00f80980();
  return;
}

extern char g_02206a5c[];
// @baa 0x0124b7a0
int sub_0124b7a0(void) { return (int)g_02206a5c; }

extern char g_026d4138[];
// @baa 0x0124b7b0
int sub_0124b7b0(void) { return (int)g_026d4138; }

// @baa 0x0124b8a0
void __stdcall sub_0124b8a0(int a0) {  }

// @baa 0x0124b8b0
void __stdcall sub_0124b8b0(int a0) {  }

// @baa 0x0124b8c0
void __stdcall sub_0124b8c0(int a0) {  }

// @baa 0x0124bc20
void __stdcall sub_0124bc20(int a0) {  }

// @baa 0x0124bc30
void __stdcall sub_0124bc30(int a0) {  }

// @baa 0x0124bc40
void __stdcall sub_0124bc40(int a0) {  }

// @baa 0x0124bcd0
void __stdcall sub_0124bcd0(int a0) {  }

// @baa 0x0124bce0
void __stdcall sub_0124bce0(int a0) {  }

// @baa 0x0124bcf0
void __stdcall sub_0124bcf0(int a0) {  }

// @baa 0x0124bd00
void __stdcall sub_0124bd00(int a0) {  }

struct C_view_0124c0a0 {
    int sub_005dfd20(int);
};

// @baa 0x0124c0a0
void UThumbnailManager::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view_0124c0a0 *)(this))->sub_005dfd20(param_2);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
  return;
}

struct C_0124c0e0 { int sub_0124c0e0(void); };

// @baa 0x0124c0e0
int C_0124c0e0::sub_0124c0e0(void) { return *(int*)((char*)this + 4); }

struct C_0124c0f0 { int sub_0124c0f0(void); };

// @baa 0x0124c0f0
int C_0124c0f0::sub_0124c0f0(void) { return *(int*)((char*)this + 4); }

struct C_0124c100 { int a, b; C_0124c100(int, int); };

// @baa 0x0124c100
C_0124c100::C_0124c100(int x, int y) : a(x), b(y) {}

struct C_0124c120 { int a, b; C_0124c120(int, int); };

// @baa 0x0124c120
C_0124c120::C_0124c120(int x, int y) : a(x), b(y) {}

// @baa 0x0124c140
int sub_0124c140(int a0) { return *(int*)a0; }

// @baa 0x0124c150
bool sub_0124c150(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0124c160 { int a, b; C_0124c160(const C_0124c160 &); };

// @baa 0x0124c160
C_0124c160::C_0124c160(const C_0124c160 &o) : a(o.a), b(o.b) {}

// @baa 0x0124c1a0
int sub_0124c1a0(int a0) { return *(int*)a0; }

// @baa 0x0124c1b0
bool sub_0124c1b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0124c1c0 { int a, b; C_0124c1c0(const C_0124c1c0 &); };

// @baa 0x0124c1c0
C_0124c1c0::C_0124c1c0(const C_0124c1c0 &o) : a(o.a), b(o.b) {}

struct C_0124c230 { int a, b; C_0124c230(const C_0124c230 &); };

// @baa 0x0124c230
C_0124c230::C_0124c230(const C_0124c230 &o) : a(o.a), b(o.b) {}

struct C_0124c250 { int a, b; C_0124c250(const C_0124c250 &); };

// @baa 0x0124c250
C_0124c250::C_0124c250(const C_0124c250 &o) : a(o.a), b(o.b) {}

// @baa 0x0124c270
void sub_0124c270(void) {  }

// @baa 0x0124c280
void sub_0124c280(void) {  }

// @baa 0x0124c290
float10 sub_0124c290(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0124c2b0
undefined2 sub_0124c2b0(void)
{
  return 0x73;
}

// @baa 0x0124c2c0
undefined2 sub_0124c2c0(void)
{
  return 0x73;
}

struct C_0124c2d0 { void sub_0124c2d0(int a0); };

// @baa 0x0124c2d0
void C_0124c2d0::sub_0124c2d0(int a0) { *(int*)((char*)this + 92) = a0; }

// @baa 0x0124c2e0
int sub_0124c2e0(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x0124c2f0
void sub_0124c2f0(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158c10[];
// @baa 0x0124c310
int sub_0124c310(void) { return (int)g_02158c10; }

int sub_005c7a20(void);
extern undefined * g_0220fa30;
// @baa 0x0124c320
undefined4 * UObject::sub_0124c320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220fa30);
  return param_1;
}

// @baa 0x0124c340
IMPLEMENT_CLASS_AT(UTerrainEditOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp", 18);

// @baa 0x0124c3a0
// @baa 0x0124c3d0
int sub_0124c3d0(int a0, int a1) { return a1; }

// @baa 0x0124c3e0
IMPLEMENT_CLASS_AT(UThumbnailLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 23);

// @baa 0x0124c440
extern undefined * g_0220fb40;
// @baa 0x0124c460
undefined4 * UObject::sub_0124c460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220fb40);
  return param_1;
}

// @baa 0x0124c480
int sub_0124c480(int a0, int a1) { return a1; }

extern undefined * g_0220fc58;
// @baa 0x0124c490
undefined4 * UObject::sub_0124c490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220fc58);
  return param_1;
}

// @baa 0x0124c4b0
IMPLEMENT_CLASS_AT(UAnimSetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 33);

// @baa 0x0124c510
// @baa 0x0124c530
undefined4 sub_0124c530(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0220fd70;
// @baa 0x0124c540
undefined4 * UObject::sub_0124c540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220fd70);
  return param_1;
}

// @baa 0x0124c560
IMPLEMENT_CLASS_AT(UAnimTreeLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 34);

// @baa 0x0124c5c0
// @baa 0x0124c5e0
undefined4 sub_0124c5e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0220fe88;
// @baa 0x0124c5f0
undefined4 * UObject::sub_0124c5f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220fe88);
  return param_1;
}

// @baa 0x0124c610
IMPLEMENT_CLASS_AT(UApexDestructibleAssetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 38);

// @baa 0x0124c670
// @baa 0x0124c690
undefined4 sub_0124c690(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0220ffa0;
// @baa 0x0124c6a0
undefined4 * UObject::sub_0124c6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0220ffa0);
  return param_1;
}

// @baa 0x0124c6c0
IMPLEMENT_CLASS_AT(UGenericThumbnailLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 35);

// @baa 0x0124c720
// @baa 0x0124c740
undefined4 sub_0124c740(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022100b8;
// @baa 0x0124c750
undefined4 * UObject::sub_0124c750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022100b8);
  return param_1;
}

// @baa 0x0124c770
IMPLEMENT_CLASS_AT(UMaterialInstanceLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 49);

// @baa 0x0124c7d0
// @baa 0x0124c7f0
undefined4 sub_0124c7f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022101d0;
// @baa 0x0124c800
undefined4 * UObject::sub_0124c800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022101d0);
  return param_1;
}

// @baa 0x0124c820
IMPLEMENT_CLASS_AT(UMemCountThumbnailLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 32);

// @baa 0x0124c880
// @baa 0x0124c8a0
undefined4 sub_0124c8a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022102e8;
// @baa 0x0124c8b0
undefined4 * UObject::sub_0124c8b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022102e8);
  return param_1;
}

// @baa 0x0124c8d0
IMPLEMENT_CLASS_AT(UParticleSystemLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 51);

// @baa 0x0124c930
// @baa 0x0124c950
undefined4 sub_0124c950(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210400;
// @baa 0x0124c960
undefined4 * UObject::sub_0124c960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210400);
  return param_1;
}

// @baa 0x0124c980
IMPLEMENT_CLASS_AT(UPhysicsAssetLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 36);

// @baa 0x0124c9e0
// @baa 0x0124ca00
undefined4 sub_0124ca00(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210518;
// @baa 0x0124ca10
undefined4 * UObject::sub_0124ca10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210518);
  return param_1;
}

// @baa 0x0124ca30
IMPLEMENT_CLASS_AT(UPostProcessLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 43);

// @baa 0x0124ca90
// @baa 0x0124cab0
undefined4 sub_0124cab0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210630;
// @baa 0x0124cac0
undefined4 * UObject::sub_0124cac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210630);
  return param_1;
}

// @baa 0x0124cae0
IMPLEMENT_CLASS_AT(USkeletalMeshLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 40);

// @baa 0x0124cb40
// @baa 0x0124cb60
undefined4 sub_0124cb60(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210748;
// @baa 0x0124cb70
undefined4 * UObject::sub_0124cb70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210748);
  return param_1;
}

// @baa 0x0124cb90
IMPLEMENT_CLASS_AT(USoundLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 44);

// @baa 0x0124cbf0
// @baa 0x0124cc10
undefined4 sub_0124cc10(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0124cc20
IMPLEMENT_CLASS_AT(UStaticMeshLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 41);

// @baa 0x0124cc80
extern undefined * g_02210860;
// @baa 0x0124cca0
undefined4 * UObject::sub_0124cca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210860);
  return param_1;
}

// @baa 0x0124ccc0
int sub_0124ccc0(int a0, int a1) { return a1; }

extern undefined * g_02210978;
// @baa 0x0124ccd0
undefined4 * UObject::sub_0124ccd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210978);
  return param_1;
}

// @baa 0x0124ccf0
IMPLEMENT_CLASS_AT(UFracturedStaticMeshLabelRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 42);

// @baa 0x0124cd50
// @baa 0x0124cd70
undefined4 sub_0124cd70(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern char g_02019ce8[];
// @baa 0x0124cd80
int sub_0124cd80(void) { return (int)g_02019ce8; }

// @baa 0x0124cd90
int sub_0124cd90(int a0, int a1) { return a1; }

// @baa 0x0124cda0
IMPLEMENT_CLASS_AT(UThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 22);

// @baa 0x0124ce00
UBOOL UThumbnailRenderer::SupportsThumbnailRendering(UObject* Object, UBOOL bCheckObjectState) { return TRUE; }

// @baa 0x0124ce10
extern undefined * g_02210a90;
// @baa 0x0124ce30
undefined4 * UObject::sub_0124ce30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210a90);
  return param_1;
}

// @baa 0x0124ce50
int sub_0124ce50(int a0, int a1) { return a1; }

// @baa 0x0124ce60
IMPLEMENT_CLASS_AT(UDefaultSizedThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 26);

// @baa 0x0124cec0
int sub_0124cec0(void) { return (int)g_02019ce8; }

// @baa 0x0124ced0
extern undefined * g_02210ba8;
// @baa 0x0124cef0
undefined4 * UObject::sub_0124cef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210ba8);
  return param_1;
}

// @baa 0x0124cf10
int sub_0124cf10(int a0, int a1) { return a1; }

extern undefined * g_02210cc0;
// @baa 0x0124cf20
undefined4 * UObject::sub_0124cf20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210cc0);
  return param_1;
}

// @baa 0x0124cf40
IMPLEMENT_CLASS_AT(UMaterialInstanceThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 27);

// @baa 0x0124cfa0
// @baa 0x0124cfc0
undefined4 sub_0124cfc0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210dd8;
// @baa 0x0124cfd0
undefined4 * UObject::sub_0124cfd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210dd8);
  return param_1;
}

// @baa 0x0124cff0
IMPLEMENT_CLASS_AT(USkeletalMeshThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 29);

// @baa 0x0124d050
// @baa 0x0124d070
undefined4 sub_0124d070(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02210ef0;
// @baa 0x0124d080
undefined4 * UObject::sub_0124d080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02210ef0);
  return param_1;
}

// @baa 0x0124d0a0
IMPLEMENT_CLASS_AT(UStaticMeshThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 30);

// @baa 0x0124d100
// @baa 0x0124d120
undefined4 sub_0124d120(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0124d130
int sub_0124d130(int a0, int a1) { return a1; }

// @baa 0x0124d140
int sub_0124d140(int a0, int a1) { return a1; }

// @baa 0x0124d150
int sub_0124d150(void) { return (int)g_02019ce8; }

// @baa 0x0124d160
int sub_0124d160(int a0, int a1) { return a1; }

// @baa 0x0124d170
int sub_0124d170(void) { return (int)g_02019ce8; }

// @baa 0x0124d180
int sub_0124d180(int a0, int a1) { return a1; }

// @baa 0x0124d190
IMPLEMENT_CLASS_AT(UTextureThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 24);

// @baa 0x0124d1f0
extern undefined * g_02211008;
// @baa 0x0124d210
undefined4 * UObject::sub_0124d210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211008);
  return param_1;
}

// @baa 0x0124d230
int sub_0124d230(int a0, int a1) { return a1; }

extern undefined * g_02211120;
// @baa 0x0124d240
undefined4 * UObject::sub_0124d240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211120);
  return param_1;
}

// @baa 0x0124d260
IMPLEMENT_CLASS_AT(UFontThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 47);

// @baa 0x0124d2c0
// @baa 0x0124d2e0
undefined4 sub_0124d2e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0124d2f0
int sub_0124d2f0(void) { return (int)g_02019ce8; }

extern undefined * g_02211238;
// @baa 0x0124d300
undefined4 * UObject::sub_0124d300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211238);
  return param_1;
}

// @baa 0x0124d320
IMPLEMENT_CLASS_AT(ULensFlareThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 50);

// @baa 0x0124d380
// @baa 0x0124d3a0
undefined4 sub_0124d3a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0124d3b0
int sub_0124d3b0(void) { return (int)g_02019ce8; }

extern undefined * g_02211350;
// @baa 0x0124d3c0
undefined4 * UObject::sub_0124d3c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211350);
  return param_1;
}

// @baa 0x0124d3e0
IMPLEMENT_CLASS_AT(UParticleSystemThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 28);

// @baa 0x0124d440
// @baa 0x0124d460
undefined4 sub_0124d460(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02211468;
// @baa 0x0124d470
undefined4 * UObject::sub_0124d470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211468);
  return param_1;
}

// @baa 0x0124d490
IMPLEMENT_CLASS_AT(UTextureCubeThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 25);

// @baa 0x0124d4f0
struct C_0124d510 {
    DWORD sub_0124d510(DWORD param);
};

// @baa 0x0124d510
DWORD C_0124d510::sub_0124d510(DWORD param)
{
    return (DWORD)this;
}

struct C_0124d520 { int sub_0124d520(void); };

// @baa 0x0124d520
int C_0124d520::sub_0124d520(void) { return *(int*)((char*)this + 0); }

struct C_0124d530 { int sub_0124d530(void); };

// @baa 0x0124d530
int C_0124d530::sub_0124d530(void) { return *(int*)((char*)this + 0); }

struct C_0124d540 { int sub_0124d540(void); };

// @baa 0x0124d540
int C_0124d540::sub_0124d540(void) { return *(int*)((char*)this + 20); }

struct C_0124d550 {
    int sub_0124d550(int);
};

// @baa 0x0124d550
int C_0124d550::sub_0124d550(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d4de4;
extern undefined4 g_026d4de8;
extern undefined4 g_026d4dec;
// @baa 0x0124d560
undefined * sub_0124d560(void)
{
  if ((g_026d4dec & 1) == 0) {
    g_026d4dec = g_026d4dec | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d4de4 = (undefined4)(&g_026af518);
    g_026d4de8 = (undefined4)(L"HTEBHitProxy");
  }
  return (undefined *)(&g_026d4de4);
}

// @baa 0x0124d5e0
// @baa 0x0124d710
bool UTerrainEditOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0124d870 {
    undefined4 * sub_0124d870(byte);
};

int sub_0053dfa0(...);
// @baa 0x0124d870
undefined4 * C_0124d870::sub_0124d870(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0220f9a8);
  param_1[1] = (undefined4)(&g_0220f9a0);
  sub_00f80980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005eae70(...);
int sub_006311e0(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_022051b8;
extern undefined4 g_022052f0;
extern undefined4 g_02205428;
extern undefined4 g_02205560;
extern undefined4 g_022056a8;
extern undefined4 g_022057f4;
extern undefined4 g_02205930;
extern undefined4 g_02205a6c;
extern undefined4 g_02205bb8;
extern undefined4 g_02205d00;
extern undefined4 g_02205e50;
extern undefined4 g_02205fac;
extern undefined4 g_0220610c;
extern undefined4 g_0220626c;
extern undefined4 g_022063c8;
extern undefined4 g_02206524;
extern undefined4 g_02206694;
extern undefined4 g_02206808;
extern undefined4 g_02206980;
extern undefined4 g_026b2250;
// @baa 0x0124d8f0
undefined4 UUnrealEdEngine::sub_0124d8f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_View",0,0x4002,0,1);
  *(int *)(param_1 + 0x358) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("ViewIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3d7,&g_022051b8);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Empty",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x35c) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("HideIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3d9,&g_022052f0);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Lock",0,0x4002,0,1);
  *(int *)(param_1 + 0x360) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("LockIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3db,&g_02205428);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Empty",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x364) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("UnlockIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3dd,&g_02205560);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Wireframe",0,0x4002,
                       0,1);
  *(int *)(param_1 + 0x36c) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("WireframeOffIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3df,&g_022056a8);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Wireframe",0,0x4002,
                       0,1);
  *(int *)(param_1 + 0x368) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("WireframeIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3e1,&g_022057f4);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Solid",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x370) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("SolidIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3e3,&g_02205930);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Solid",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x374) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("SolidOffIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3e5,&g_02205a6c);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Open_Alpha",0,0x4002
                       ,0,1);
  *(int *)(param_1 + 0x378) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("OpenedIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,999,&g_02205bb8);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Closed_Alpha",0,
                       0x4002,0,1);
  *(int *)(param_1 + 0x37c) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("ClosedIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3e9,&g_02205d00);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Layer_Icon_Alpha",0,
                       0x4002,0,1);
  *(int *)(param_1 + 0x380) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("LayerIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3eb,&g_02205e50);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Material_Icon_Alpha"
                       ,0,0x4002,0,1);
  *(int *)(param_1 + 900) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("MaterialIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3ed,&g_02205fac);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TLB_DecoLayer_Icon_Alpha",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x388) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("DecoLayerIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3ef,&g_0220610c);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TLB_Decoration_Icon_Alpha",0,0x4002,0,1
                      );
  *(int *)(param_1 + 0x38c) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("DecorationIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3f1,&g_0220626c);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.TerrainLayerBrowser.TLB_Foliage_Icon_Alpha",
                       0,0x4002,0,1);
  *(int *)(param_1 + 0x390) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("FoliageIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3f3,&g_022063c8);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TLB_HeightMap_Icon_Alpha",0,0x4002,0,1)
  ;
  *(int *)(param_1 + 0x394) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("HeightMapIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3f5,&g_02206524);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TerrainProp_ProceduralOverlay",0,0x4002
                       ,0,1);
  *(int *)(param_1 + 0x398) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("ProceduralOverlayIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3f7,&g_02206694);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TerrainProp_FoliageOverlay",0,0x4002,0,
                       1);
  *(int *)(param_1 + 0x39c) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("FoliageOverlayIcon",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3f9,&g_02206808);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar1 = sub_005eae70(g_026b2250,0,
                       L"EditorMaterials.TerrainLayerBrowser.TerrainProp_FoliageOverlay_Left",0,
                       0x4002,0,1);
  *(int *)(param_1 + 0x3a0) = iVar1;
  if (iVar1 == 0) {
    sub_006311e0("FoliageOverlayIcon2",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TerrainEditor.cpp"
                 ,0x3fb,&g_02206980);
  }
  return 1;
}

// @baa 0x0124fa60
IMPLEMENT_CLASS_AT(UThumbnailManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 21);

// @baa 0x0124fb90
bool UThumbnailManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0124fbd0
// @baa 0x0124fce0
int UThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124fcf0
bool UThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0124fd30
// @baa 0x0124fe40
int UThumbnailLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124fe50
bool UThumbnailLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0124fe90
int UTextureThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124fea0
int UTextureCubeThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124fed0
int UMaterialInstanceThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff00
int USkeletalMeshThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff10
int UStaticMeshThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff20
int UIconThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff30
int UMemCountThumbnailLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff40
int UAnimSetLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff50
int UAnimTreeLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff60
int UGenericThumbnailLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff70
int UPhysicsAssetLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff80
int UApexDestructibleAssetLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ff90
int USkeletalMeshLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ffa0
int UStaticMeshLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ffb0
int UFracturedStaticMeshLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ffc0
int UPostProcessLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ffd0
int USoundLabelRenderer::vf_000(void) { return 1; }

// @baa 0x0124ffe0
int UArchetypeThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x01250010
int UFontThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x01250040
int UMaterialInstanceLabelRenderer::vf_000(void) { return 1; }

// @baa 0x01250070
int UParticleSystemLabelRenderer::vf_000(void) { return 1; }

struct C_01250140 { int a, b, c; C_01250140(); };

// @baa 0x01250140
C_01250140::C_01250140() : a(0), b(0), c(0) {}

struct C_01250150 { C_01250150* sub_01250150(int a0); };

// @baa 0x01250150
C_01250150* C_01250150::sub_01250150(int a0) { return this; }

struct C_012502c0 { int sub_012502c0(void); };

// @baa 0x012502c0
int C_012502c0::sub_012502c0(void) { return *(int*)((char*)this + 0); }

struct C_01250340 {
    int sub_01250340();
};

// @baa 0x01250340
int C_01250340::sub_01250340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01250350 {
    int sub_01250350();
};

// @baa 0x01250350
int C_01250350::sub_01250350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_012503d0 { int sub_012503d0(void); };

// @baa 0x012503d0
int C_012503d0::sub_012503d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01250400 { int sub_01250400(void); };

// @baa 0x01250400
int C_01250400::sub_01250400(void) { return *(int*)((char*)this + 0); }

struct C_01250410 { int sub_01250410(void); };

// @baa 0x01250410
int C_01250410::sub_01250410(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01250440 {
    int sub_01250440(int);
};

// @baa 0x01250440
int C_01250440::sub_01250440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01250450
int sub_01250450(int a0) { return a0; }

struct C_01250460 {
    int sub_01250460(int);
};

// @baa 0x01250460
int C_01250460::sub_01250460(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01250470 {
    int sub_01250470(int);
};

// @baa 0x01250470
int C_01250470::sub_01250470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01250480 { int sub_01250480(void); };

// @baa 0x01250480
int C_01250480::sub_01250480(void) { return *(int*)((char*)this + 20); }

struct C_01250490 { int sub_01250490(void); };

// @baa 0x01250490
int C_01250490::sub_01250490(void) { return *(int*)((char*)this + 20); }

struct C_012504a0 { int sub_012504a0(void); };

// @baa 0x012504a0
int C_012504a0::sub_012504a0(void) { return *(int*)((char*)this + 20); }

// @baa 0x01250640
void sub_01250640(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01250660
void sub_01250660(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01250680
struct C_01250aa0 {
    int sub_01250aa0(int);
};

// @baa 0x01250aa0
int C_01250aa0::sub_01250aa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct E { BYTE Bytes[64]; };

struct S_01250ab0 {
    TArray<E> Items; // 0x00
    E* sub_01250ab0(INT Index);
};

// @baa 0x01250ab0
E* S_01250ab0::sub_01250ab0(INT Index)
{
    return &Items(Index);
}

struct C_01250b00 {
    int sub_01250b00();
};

// @baa 0x01250b00
int C_01250b00::sub_01250b00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01250b20 {
    int sub_01250b20(int);
};

// @baa 0x01250b20
int C_01250b20::sub_01250b20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01250bd0
struct C_01257630 { void sub_01257500(); void sub_01257630(int); };

// @baa 0x01257630
void C_01257630::sub_01257630(int) { sub_01257500(); }

typedef uint size_t;

struct C_012584d0 {
    void sub_012584d0(int);
    int sub_012502d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x012584d0
void C_012584d0::sub_012584d0(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 0x1c8) < param_2) {
    param_2 = param_2 - *(int *)(param_1 + 0x1c8);
    iVar1 = ((C_012584d0 *)(((char *)this + 0x1c4)))->sub_012502d0(param_2);
    sub_01a37612((void *)(iVar1 * 0x54 + *(int *)(param_1 + 0x1c4)),0,param_2 * 0x54);
  }
  return;
}

struct C_01259660 { int a, b, c; C_01259660(); };

// @baa 0x01259660
C_01259660::C_01259660() : a(0), b(0), c(0) {}

struct C_0125b1c0 {
    int sub_0125b1c0(int);
};

// @baa 0x0125b1c0
int C_0125b1c0::sub_0125b1c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0125b360 {
    int sub_0125b360(int);
};

// @baa 0x0125b360
int C_0125b360::sub_0125b360(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_01262660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01262660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01262660& operator++();
};

TConstSetBitIterator_01262660::TConstSetBitIterator_01262660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01262660
TConstSetBitIterator_01262660& TConstSetBitIterator_01262660::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01262710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01262710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01262710& operator++();
};

TConstSetBitIterator_01262710::TConstSetBitIterator_01262710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01262710
TConstSetBitIterator_01262710& TConstSetBitIterator_01262710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01262760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01262760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01262760& operator++();
};

TConstSetBitIterator_01262760::TConstSetBitIterator_01262760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01262760
TConstSetBitIterator_01262760& TConstSetBitIterator_01262760::operator++()
{
    It.Advance();
    return *this;
}

void sub_0125f3e0();
// @baa 0x012627b0
void sub_012627b0(void) { sub_0125f3e0(); }

struct C_012627c0 { C_012627c0* sub_012627c0(void); };

// @baa 0x012627c0
C_012627c0* C_012627c0::sub_012627c0(void) { return this; }

struct C_0126c650 {
    void sub_0126c650();
    int sub_012623a0(int);
};

// @baa 0x0126c650
void C_0126c650::sub_0126c650(void)
{
    int param_1 = (int)this;
  ((C_0126c650 *)((*(char **)((char *)this + 0x10))))->sub_012623a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0126c670 {
    void sub_0126c670();
    int sub_01262500(int);
};

// @baa 0x0126c670
void C_0126c670::sub_0126c670(void)
{
    int param_1 = (int)this;
  ((C_0126c670 *)((*(char **)((char *)this + 0x10))))->sub_01262500(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

extern undefined * g_02211e80;
// @baa 0x0126c9d0
undefined4 * UObject::sub_0126c9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02211e80);
  return param_1;
}

// @baa 0x0126c9f0
// @baa 0x0126ca80
struct C_0126cb60 {
    int sub_0126cb60();
};

int sub_0125f4b0(void);
// @baa 0x0126cb60
int C_0126cb60::sub_0126cb60(void)
{
    int param_1 = (int)this;

  sub_0125f4b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0126d520 {
    int sub_0126d520();
};

int sub_012626b0(void);
// @baa 0x0126d520
int C_0126d520::sub_0126d520(void)
{
    int param_1 = (int)this;

  sub_012626b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0126d5d0 {
    int sub_0126d5d0();
};

// @baa 0x0126d5d0
int C_0126d5d0::sub_0126d5d0(void)
{
    int param_1 = (int)this;

  sub_0125f4b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01273220 { void sub_01272520(); void sub_01273220(int); };

// @baa 0x01273220
void C_01273220::sub_01273220(int) { sub_01272520(); }
