// AnalyzeReferencedContent.cpp (part 1 of 3): 261 functions
// Placed here by: neighbours 250, class 5, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0090b930(void);
int sub_009126b0(...);
extern undefined4 g_026b5d80;
// @baa 0x00802e90
int sub_00802e90(void)
{
  if (g_026b5d80 == 0) {
    g_026b5d80 = sub_009126b0(L"Engine");
    sub_0090b930();
  }
  return g_026b5d80;
}

int sub_0090ba90(void);
int sub_00938c70(...);
extern undefined4 g_026b5d84;
// @baa 0x00986330
int sub_00986330(void)
{
  if (g_026b5d84 == 0) {
    g_026b5d84 = sub_00938c70(L"Engine");
    sub_0090ba90();
  }
  return g_026b5d84;
}

int sub_00d08060(...);
int sub_00d0b4e0(void);
extern undefined4 g_026c56d0;
// @baa 0x00c9c300
int sub_00c9c300(void)
{
  if (g_026c56d0 == 0) {
    g_026c56d0 = sub_00d08060(L"Engine");
    sub_00d0b4e0();
  }
  return g_026c56d0;
}

int sub_006311e0(...);
int sub_0071a300(...);
extern undefined4 g_02181474;
extern undefined4 g_02181584;
extern undefined4 g_02181698;
extern undefined4 g_026ce3b0;
extern undefined4 g_026ce3b4;
extern undefined4 g_026ce3b8;
// @baa 0x01013c40
void sub_01013c40(void)
{
  g_026ce3b0 = sub_0071a300(L"TBasePassPixelShaderFNoLightMapPolicyNoSkyLight");
  g_026ce3b4 = sub_0071a300(L"TBasePassPixelShaderFDirectionalVertexLightMapPolicyNoSkyLight");
  g_026ce3b8 = sub_0071a300(L"TLightPixelShaderFPointLightPolicyFShadowTexturePolicy");
  if (g_026ce3b0 == 0) {
    sub_006311e0("ShaderTypeBasePassNoLightmap",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeReferencedContent.cpp"
                 ,0x357,&g_02181474);
  }
  if (g_026ce3b4 == 0) {
    sub_006311e0("ShaderTypeBasePassAndLightmap",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeReferencedContent.cpp"
                 ,0x358,&g_02181584);
  }
  if (g_026ce3b8 == 0) {
    sub_006311e0("ShaderTypePointLightWithShadowMap",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeReferencedContent.cpp"
                 ,0x359,&g_02181698);
  }
  return;
}

// @baa 0x01013ce0
undefined4 sub_01013ce0(void)
{
  return 1;
}

struct C {
    void sub_01013cf0();
};

// @baa 0x01013cf0
void C::sub_01013cf0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffffef;
  return;
}

struct C_01013db0 { int sub_01013db0(void); };

// @baa 0x01013db0
int C_01013db0::sub_01013db0(void) { return *(int*)((char*)this + 4); }

struct C_01013dc0 { int sub_01013dc0(void); };

// @baa 0x01013dc0
int C_01013dc0::sub_01013dc0(void) { return *(int*)((char*)this + 4); }

struct C_01013dd0 { int sub_01013dd0(void); };

// @baa 0x01013dd0
int C_01013dd0::sub_01013dd0(void) { return *(int*)((char*)this + 4); }

struct C_01013de0 { int sub_01013de0(void); };

// @baa 0x01013de0
int C_01013de0::sub_01013de0(void) { return *(int*)((char*)this + 4); }

struct C_01013df0 { int sub_01013df0(void); };

// @baa 0x01013df0
int C_01013df0::sub_01013df0(void) { return *(int*)((char*)this + 4); }

struct C_01013e00 { int sub_01013e00(void); };

// @baa 0x01013e00
int C_01013e00::sub_01013e00(void) { return *(int*)((char*)this + 4); }

struct C_01013e10 { int sub_01013e10(void); };

// @baa 0x01013e10
int C_01013e10::sub_01013e10(void) { return *(int*)((char*)this + 4); }

struct C_01013e20 { int a, b; C_01013e20(int, int); };

// @baa 0x01013e20
C_01013e20::C_01013e20(int x, int y) : a(x), b(y) {}

struct C_01013e40 { int a, b; C_01013e40(int, int); };

// @baa 0x01013e40
C_01013e40::C_01013e40(int x, int y) : a(x), b(y) {}

struct C_01013e60 { int a, b; C_01013e60(int, int); };

// @baa 0x01013e60
C_01013e60::C_01013e60(int x, int y) : a(x), b(y) {}

struct C_01013e80 { int a, b; C_01013e80(int, int); };

// @baa 0x01013e80
C_01013e80::C_01013e80(int x, int y) : a(x), b(y) {}

struct C_01013ea0 { int a, b; C_01013ea0(int, int); };

// @baa 0x01013ea0
C_01013ea0::C_01013ea0(int x, int y) : a(x), b(y) {}

struct C_01013ec0 { int a, b; C_01013ec0(int, int); };

// @baa 0x01013ec0
C_01013ec0::C_01013ec0(int x, int y) : a(x), b(y) {}

struct C_01013ee0 { int a, b; C_01013ee0(int, int); };

// @baa 0x01013ee0
C_01013ee0::C_01013ee0(int x, int y) : a(x), b(y) {}

struct C_01013f00 { int a, b; C_01013f00(int, int); };

// @baa 0x01013f00
C_01013f00::C_01013f00(int x, int y) : a(x), b(y) {}

struct C_01013f20 { int a, b; C_01013f20(int, int); };

// @baa 0x01013f20
C_01013f20::C_01013f20(int x, int y) : a(x), b(y) {}

struct C_01013f40 { int a, b; C_01013f40(int, int); };

// @baa 0x01013f40
C_01013f40::C_01013f40(int x, int y) : a(x), b(y) {}

struct C_01013f60 { int a, b; C_01013f60(int, int); };

// @baa 0x01013f60
C_01013f60::C_01013f60(int x, int y) : a(x), b(y) {}

struct C_01013f80 { int a, b; C_01013f80(int, int); };

// @baa 0x01013f80
C_01013f80::C_01013f80(int x, int y) : a(x), b(y) {}

struct C_01013fa0 { int a, b; C_01013fa0(int, int); };

// @baa 0x01013fa0
C_01013fa0::C_01013fa0(int x, int y) : a(x), b(y) {}

struct C_01013fc0 { int a, b; C_01013fc0(int, int); };

// @baa 0x01013fc0
C_01013fc0::C_01013fc0(int x, int y) : a(x), b(y) {}

struct C_01013fe0 { int a, b; C_01013fe0(int, int); };

// @baa 0x01013fe0
C_01013fe0::C_01013fe0(int x, int y) : a(x), b(y) {}

struct C_01014000 { int a, b; C_01014000(int, int); };

// @baa 0x01014000
C_01014000::C_01014000(int x, int y) : a(x), b(y) {}

struct C_01014020 { int a, b; C_01014020(int, int); };

// @baa 0x01014020
C_01014020::C_01014020(int x, int y) : a(x), b(y) {}

// @baa 0x01014040
int sub_01014040(int a0) { return *(int*)a0; }

struct C_01014050 {
    void sub_01014050(int *);
};

// @baa 0x01014050
void C_01014050::sub_01014050(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014060
int sub_01014060(int a0) { return *(int*)a0; }

struct C_01014070 {
    void sub_01014070(int *);
};

// @baa 0x01014070
void C_01014070::sub_01014070(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014080
int sub_01014080(int a0) { return *(int*)a0; }

struct C_01014090 {
    void sub_01014090(int *);
};

// @baa 0x01014090
void C_01014090::sub_01014090(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010140a0
int sub_010140a0(int a0) { return *(int*)a0; }

struct C_010140b0 {
    void sub_010140b0(int *);
};

// @baa 0x010140b0
void C_010140b0::sub_010140b0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010140c0
int sub_010140c0(int a0) { return *(int*)a0; }

struct C_010140d0 {
    void sub_010140d0(int *);
};

// @baa 0x010140d0
void C_010140d0::sub_010140d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010140e0
int sub_010140e0(int a0) { return *(int*)a0; }

struct C_010140f0 {
    void sub_010140f0(int *);
};

// @baa 0x010140f0
void C_010140f0::sub_010140f0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014100
int sub_01014100(int a0) { return *(int*)a0; }

struct C_01014110 {
    void sub_01014110(int *);
};

// @baa 0x01014110
void C_01014110::sub_01014110(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014120
int sub_01014120(int a0) { return *(int*)a0; }

struct C_01014130 {
    void sub_01014130(int *);
};

// @baa 0x01014130
void C_01014130::sub_01014130(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014140
int sub_01014140(int a0) { return *(int*)a0; }

struct C_01014150 {
    void sub_01014150(int *);
};

// @baa 0x01014150
void C_01014150::sub_01014150(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014160
int sub_01014160(int a0) { return *(int*)a0; }

struct C_01014170 {
    void sub_01014170(int *);
};

// @baa 0x01014170
void C_01014170::sub_01014170(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014180
int sub_01014180(int a0) { return *(int*)a0; }

struct C_01014190 {
    void sub_01014190(int *);
};

// @baa 0x01014190
void C_01014190::sub_01014190(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010141a0
int sub_010141a0(int a0) { return *(int*)a0; }

struct C_010141b0 {
    void sub_010141b0(int *);
};

// @baa 0x010141b0
void C_010141b0::sub_010141b0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010141c0
int sub_010141c0(int a0) { return *(int*)a0; }

// @baa 0x010141d0
int sub_010141d0(int a0) { return *(int*)a0; }

struct C_010141e0 {
    void sub_010141e0(int *);
};

// @baa 0x010141e0
void C_010141e0::sub_010141e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x010141f0
int sub_010141f0(int a0) { return *(int*)a0; }

// @baa 0x01014200
bool sub_01014200(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01014230 {
    void sub_01014230(undefined4 *);
};

// @baa 0x01014230
void C_01014230::sub_01014230(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01014250
int sub_01014250(int a0) { return *(int*)a0; }

// @baa 0x01014260
bool sub_01014260(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01014270 {
    void sub_01014270(undefined4 *);
};

// @baa 0x01014270
void C_01014270::sub_01014270(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01014290
int sub_01014290(int a0) { return *(int*)a0; }

// @baa 0x010142a0
bool sub_010142a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_010142b0 {
    void sub_010142b0(undefined4 *);
};

// @baa 0x010142b0
void C_010142b0::sub_010142b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_010142d0 { int sub_010142d0(void); };

// @baa 0x010142d0
int C_010142d0::sub_010142d0(void) { return *(int*)((char*)this + 4); }

struct C_010142e0 { int sub_010142e0(void); };

// @baa 0x010142e0
int C_010142e0::sub_010142e0(void) { return *(int*)((char*)this + 4); }

struct C_010142f0 { int sub_010142f0(void); };

// @baa 0x010142f0
int C_010142f0::sub_010142f0(void) { return *(int*)((char*)this + 4); }

struct C_01014300 { int sub_01014300(void); };

// @baa 0x01014300
int C_01014300::sub_01014300(void) { return *(int*)((char*)this + 4); }

struct C_01014310 { int sub_01014310(void); };

// @baa 0x01014310
int C_01014310::sub_01014310(void) { return *(int*)((char*)this + 4); }

struct C_01014320 { int sub_01014320(void); };

// @baa 0x01014320
int C_01014320::sub_01014320(void) { return *(int*)((char*)this + 4); }

struct C_01014330 { int sub_01014330(void); };

// @baa 0x01014330
int C_01014330::sub_01014330(void) { return *(int*)((char*)this + 4); }

struct C_01014340 { int sub_01014340(void); };

// @baa 0x01014340
int C_01014340::sub_01014340(void) { return *(int*)((char*)this + 4); }

struct C_01014350 { int sub_01014350(void); };

// @baa 0x01014350
int C_01014350::sub_01014350(void) { return *(int*)((char*)this + 4); }

struct C_01014360 { int sub_01014360(void); };

// @baa 0x01014360
int C_01014360::sub_01014360(void) { return *(int*)((char*)this + 4); }

struct C_01014370 {
    void sub_01014370(int *);
};

// @baa 0x01014370
void C_01014370::sub_01014370(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_010143a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_010143a0* sub_010143a0(INT value);
};

// @baa 0x010143a0
C_010143a0* C_010143a0::sub_010143a0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_010143c0 {
    char pad[4];
    int field4;
    C_010143c0* sub_010143c0();
};

// @baa 0x010143c0
C_010143c0* C_010143c0::sub_010143c0()
{
    field4 += 1;
    return this;
}

struct C_010143d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_010143d0* sub_010143d0(INT value);
};

// @baa 0x010143d0
C_010143d0* C_010143d0::sub_010143d0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_010143f0 {
    char pad4[4];
    int f4;
    C_010143f0* sub_010143f0();
};

// @baa 0x010143f0
C_010143f0* C_010143f0::sub_010143f0()
{
    f4++;
    return this;
}

struct C_01014400 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01014400* sub_01014400(INT value);
};

// @baa 0x01014400
C_01014400* C_01014400::sub_01014400(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_01014420 {
    int x;
    int y;
    C_01014420 *sub_01014420();
};

// @baa 0x01014420
C_01014420 *C_01014420::sub_01014420()
{
    ++y;
    return this;
}

struct C_01014430 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01014430* sub_01014430(INT value);
};

// @baa 0x01014430
C_01014430* C_01014430::sub_01014430(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_01014450 {
    int f0;
    int f4;
    C_01014450& sub_01014450();
};

// @baa 0x01014450
C_01014450& C_01014450::sub_01014450()
{
    f4++;
    return *this;
}

struct C_01014460 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_01014460* sub_01014460(INT value);
};

// @baa 0x01014460
C_01014460* C_01014460::sub_01014460(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct S {
    int f0;
    int f4;
    S *sub_01014480();
};

// @baa 0x01014480
S *S::sub_01014480() {
    ++f4;
    return this;
}

struct C_01014490 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01014490(INT Index);
};

// @baa 0x01014490
UBOOL C_01014490::sub_01014490(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_010144b0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_010144b0(INT Index);
};

// @baa 0x010144b0
UBOOL C_010144b0::sub_010144b0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_010144d0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_010144d0(INT Index);
};

// @baa 0x010144d0
UBOOL C_010144d0::sub_010144d0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_010144f0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_010144f0(INT Index);
};

// @baa 0x010144f0
UBOOL C_010144f0::sub_010144f0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01014510 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01014510(INT Index);
};

// @baa 0x01014510
UBOOL C_01014510::sub_01014510(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01014530 { int a, b; C_01014530(int, int); };

// @baa 0x01014530
C_01014530::C_01014530(int x, int y) : a(x), b(y) {}

struct C_01014550 { int a, b; C_01014550(int, int); };

// @baa 0x01014550
C_01014550::C_01014550(int x, int y) : a(x), b(y) {}

struct C_01014570 { int a, b; C_01014570(int, int); };

// @baa 0x01014570
C_01014570::C_01014570(int x, int y) : a(x), b(y) {}

struct C_01014590 { int a, b; C_01014590(int, int); };

// @baa 0x01014590
C_01014590::C_01014590(int x, int y) : a(x), b(y) {}

struct C_010145b0 { int a, b; C_010145b0(int, int); };

// @baa 0x010145b0
C_010145b0::C_010145b0(int x, int y) : a(x), b(y) {}

// @baa 0x010145d0
int sub_010145d0(int a0) { return *(int*)a0; }

struct C_010145e0 {
    void sub_010145e0(int *);
};

// @baa 0x010145e0
void C_010145e0::sub_010145e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x010145f0
int sub_010145f0(int a0) { return *(int*)a0; }

struct C_01014600 {
    void sub_01014600(int *);
};

// @baa 0x01014600
void C_01014600::sub_01014600(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014610
int sub_01014610(int a0) { return *(int*)a0; }

struct C_01014620 {
    void sub_01014620(int *);
};

// @baa 0x01014620
void C_01014620::sub_01014620(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014630
int sub_01014630(int a0) { return *(int*)a0; }

struct C_01014640 {
    void sub_01014640(int *);
};

// @baa 0x01014640
void C_01014640::sub_01014640(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x01014650
int sub_01014650(int a0) { return *(int*)a0; }

struct C_01014660 {
    void sub_01014660(int *);
};

// @baa 0x01014660
void C_01014660::sub_01014660(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_01014670 { int sub_01014670(void); };

// @baa 0x01014670
int C_01014670::sub_01014670(void) { return *(int*)((char*)this + 4); }

struct C_01014680 { int sub_01014680(void); };

// @baa 0x01014680
int C_01014680::sub_01014680(void) { return *(int*)((char*)this + 4); }

struct C_01014690 { int sub_01014690(void); };

// @baa 0x01014690
int C_01014690::sub_01014690(void) { return *(int*)((char*)this + 4); }

struct C_010146a0 { int sub_010146a0(void); };

// @baa 0x010146a0
int C_010146a0::sub_010146a0(void) { return *(int*)((char*)this + 4); }

struct C_010146b0 { int sub_010146b0(void); };

// @baa 0x010146b0
int C_010146b0::sub_010146b0(void) { return *(int*)((char*)this + 4); }

int sub_00627f00(...);
// @baa 0x010146c0
void sub_010146c0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

// @baa 0x01014730
void sub_01014730(void) {  }

// @baa 0x01014740
void sub_01014740(void) {  }

// @baa 0x01014750
float10 sub_01014750(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01014760
void sub_01014760(void) {  }

extern char g_01e72a60[];
struct C_01014770 { void sub_01014770(void); };

// @baa 0x01014770
void C_01014770::sub_01014770(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_01014780 { void sub_01014780(void); };

// @baa 0x01014780
void C_01014780::sub_01014780(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_01014790 { int sub_01014790(void); };

// @baa 0x01014790
int C_01014790::sub_01014790(void) { return *(int*)((char*)this + 76); }

struct C_010147a0 { int a; C_010147a0(int); };

// @baa 0x010147a0
C_010147a0::C_010147a0(int x) : a(x) {}

struct C_010147d0 { void sub_010147d0(int a0); };

// @baa 0x010147d0
void C_010147d0::sub_010147d0(int a0) { *(int*)((char*)this + 332) = a0; }

// @baa 0x010147e0
int sub_010147e0(void) { return 1; }

// @baa 0x010147f0
int sub_010147f0(void) { return 1; }

// @baa 0x01014800
int sub_01014800(void) { return 1; }

// @baa 0x01014810
int sub_01014810(void) { return 1; }

// @baa 0x01014820
int sub_01014820(void) { return 1; }

// @baa 0x01014830
int sub_01014830(void) { return 1; }

// @baa 0x01014840
int sub_01014840(void) { return 1; }

// @baa 0x01014850
int sub_01014850(void) { return 1; }

// @baa 0x01014860
int sub_01014860(void) { return 1; }

// @baa 0x01014870
int sub_01014870(void) { return 1; }

// @baa 0x01014880
int sub_01014880(void) { return 1; }

struct C_01014890 { void sub_01014890(int a0); };

// @baa 0x01014890
void C_01014890::sub_01014890(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_010148a0 {
    uint sub_010148a0(uint);
};

// @baa 0x010148a0
uint C_010148a0::sub_010148a0(uint param_2)
{
    uint * param_1 = (uint *)this;

  return *param_1 & param_2;
}

// @baa 0x010148b0
int sub_010148b0(int a0, int a1) { return a1; }

// @baa 0x010148c0
int sub_010148c0(void) { return 0; }

struct C_010148d0 {
    void sub_010148d0();
};

// @baa 0x010148d0
void C_010148d0::sub_010148d0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffffe7 | 7;
  return;
}

// @baa 0x010148e0
int sub_010148e0(int a0, int a1) { return a1; }

extern undefined4 g_0218554c;
struct C_01014930 {
    void sub_01014930();
};

// @baa 0x01014930
void C_01014930::sub_01014930()
{
    *(undefined4 *)this = (undefined4)&g_0218554c;
}

struct C_01014940 {
    undefined4 * sub_01014940(byte);
};

int sub_0053dfa0(...);
// @baa 0x01014940
undefined4 * C_01014940::sub_01014940(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0218554c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01014960
int sub_01014960(int a0, int a1) { return a1; }

// @baa 0x01014980
int sub_01014980(int a0, int a1) { return a1; }

// @baa 0x010149a0
int sub_010149a0(int a0, int a1) { return a1; }

struct C_010149b0 { int sub_010149b0(void); };

// @baa 0x010149b0
int C_010149b0::sub_010149b0(void) { return *(int*)((char*)this + 48); }

// @baa 0x010149d0
int sub_010149d0(int a0, int a1) { return a1; }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02185554;
// @baa 0x010149f0
undefined4 * UUnrealEdEngine::sub_010149f0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02185554);
  return param_1;
}

// @baa 0x01014a20
int sub_01014a20(void) { return 4; }

void sub_00c38ac0();
// @baa 0x01014a30
void sub_01014a30(void) { sub_00c38ac0(); }

struct C_01014a40 { int sub_01014a40(void); };

// @baa 0x01014a40
int C_01014a40::sub_01014a40(void) { return *(int*)((char*)this + 92); }

struct C_01014a50 { int a, b, c; C_01014a50(); };

// @baa 0x01014a50
C_01014a50::C_01014a50() : a(0), b(0), c(0) {}

struct C_01014a60 { int a, b, c; C_01014a60(); };

// @baa 0x01014a60
C_01014a60::C_01014a60() : a(0), b(0), c(0) {}

struct C_01014a70 { int sub_01014a70(void); };

// @baa 0x01014a70
int C_01014a70::sub_01014a70(void) { return *(int*)((char*)this + 0); }

struct C_01014a80 { int sub_01014a80(void); };

// @baa 0x01014a80
int C_01014a80::sub_01014a80(void) { return *(int*)((char*)this + 0); }

struct C_01014a90 { int sub_01014a90(void); };

// @baa 0x01014a90
int C_01014a90::sub_01014a90(void) { return *(int*)((char*)this + 0); }

struct C_01014aa0 { int sub_01014aa0(void); };

// @baa 0x01014aa0
int C_01014aa0::sub_01014aa0(void) { return *(int*)((char*)this + 0); }

struct C_01014ab0 { int sub_01014ab0(void); };

// @baa 0x01014ab0
int C_01014ab0::sub_01014ab0(void) { return *(int*)((char*)this + 0); }

struct C_01014ac0 { int sub_01014ac0(void); };

// @baa 0x01014ac0
int C_01014ac0::sub_01014ac0(void) { return *(int*)((char*)this + 0); }

struct C_01014ad0 { int sub_01014ad0(void); };

// @baa 0x01014ad0
int C_01014ad0::sub_01014ad0(void) { return *(int*)((char*)this + 0); }

struct C_01014ae0 { int sub_01014ae0(void); };

// @baa 0x01014ae0
int C_01014ae0::sub_01014ae0(void) { return *(int*)((char*)this + 0); }

struct C_01014af0 { int sub_01014af0(void); };

// @baa 0x01014af0
int C_01014af0::sub_01014af0(void) { return *(int*)((char*)this + 0); }

struct C_01014b00 { int sub_01014b00(void); };

// @baa 0x01014b00
int C_01014b00::sub_01014b00(void) { return *(int*)((char*)this + 0); }

struct C_01014b10 { int sub_01014b10(void); };

// @baa 0x01014b10
int C_01014b10::sub_01014b10(void) { return *(int*)((char*)this + 0); }

struct C_01014b20 { int sub_01014b20(void); };

// @baa 0x01014b20
int C_01014b20::sub_01014b20(void) { return *(int*)((char*)this + 0); }

struct C_01014b30 { int sub_01014b30(void); };

// @baa 0x01014b30
int C_01014b30::sub_01014b30(void) { return *(int*)((char*)this + 0); }

struct C_01014b40 { int sub_01014b40(void); };

// @baa 0x01014b40
int C_01014b40::sub_01014b40(void) { return *(int*)((char*)this + 0); }

struct C_01014b50 { int sub_01014b50(void); };

// @baa 0x01014b50
int C_01014b50::sub_01014b50(void) { return *(int*)((char*)this + 0); }

struct C_01014b60 { int sub_01014b60(void); };

// @baa 0x01014b60
int C_01014b60::sub_01014b60(void) { return *(int*)((char*)this + 20); }

struct C_01014b70 { int sub_01014b70(void); };

// @baa 0x01014b70
int C_01014b70::sub_01014b70(void) { return *(int*)((char*)this + 20); }

struct C_01014b80 { int sub_01014b80(void); };

// @baa 0x01014b80
int C_01014b80::sub_01014b80(void) { return *(int*)((char*)this + 20); }

struct C_01014b90 { int sub_01014b90(void); };

// @baa 0x01014b90
int C_01014b90::sub_01014b90(void) { return *(int*)((char*)this + 20); }

struct C_01014ba0 { int sub_01014ba0(void); };

// @baa 0x01014ba0
int C_01014ba0::sub_01014ba0(void) { return *(int*)((char*)this + 20); }

struct C_01014bb0 { int sub_01014bb0(void); };

// @baa 0x01014bb0
int C_01014bb0::sub_01014bb0(void) { return *(int*)((char*)this + 20); }

struct C_01014bc0 { int sub_01014bc0(void); };

// @baa 0x01014bc0
int C_01014bc0::sub_01014bc0(void) { return *(int*)((char*)this + 20); }

struct C_01014bd0 { int sub_01014bd0(void); };

// @baa 0x01014bd0
int C_01014bd0::sub_01014bd0(void) { return *(int*)((char*)this + 20); }

struct C_01014be0 { int sub_01014be0(void); };

// @baa 0x01014be0
int C_01014be0::sub_01014be0(void) { return *(int*)((char*)this + 20); }

struct C_01014bf0 { int sub_01014bf0(void); };

// @baa 0x01014bf0
int C_01014bf0::sub_01014bf0(void) { return *(int*)((char*)this + 20); }

struct C_01014c00 { int sub_01014c00(void); };

// @baa 0x01014c00
int C_01014c00::sub_01014c00(void) { return *(int*)((char*)this + 20); }

struct C_01014c10 { int sub_01014c10(void); };

// @baa 0x01014c10
int C_01014c10::sub_01014c10(void) { return *(int*)((char*)this + 20); }

struct C_01014c20 { int sub_01014c20(void); };

// @baa 0x01014c20
int C_01014c20::sub_01014c20(void) { return *(int*)((char*)this + 20); }

struct C_01014c30 { int sub_01014c30(void); };

// @baa 0x01014c30
int C_01014c30::sub_01014c30(void) { return *(int*)((char*)this + 20); }

struct C_01014c40 { int sub_01014c40(void); };

// @baa 0x01014c40
int C_01014c40::sub_01014c40(void) { return *(int*)((char*)this + 20); }

struct C_01014c50 { int a, b, c; C_01014c50(); };

// @baa 0x01014c50
C_01014c50::C_01014c50() : a(0), b(0), c(0) {}

struct C_01014c60 { int sub_01014c60(void); };

// @baa 0x01014c60
int C_01014c60::sub_01014c60(void) { return *(int*)((char*)this + 0); }

struct C_01014c70 { int sub_01014c70(void); };

// @baa 0x01014c70
int C_01014c70::sub_01014c70(void) { return *(int*)((char*)this + 0); }

struct C_01014c80 { int a, b, c; C_01014c80(); };

// @baa 0x01014c80
C_01014c80::C_01014c80() : a(0), b(0), c(0) {}

struct C_01014c90 { int sub_01014c90(void); };

// @baa 0x01014c90
int C_01014c90::sub_01014c90(void) { return *(int*)((char*)this + 0); }

struct C_01014ca0 { int a, b, c; C_01014ca0(); };

// @baa 0x01014ca0
C_01014ca0::C_01014ca0() : a(0), b(0), c(0) {}

struct C_01014cb0 { int sub_01014cb0(void); };

// @baa 0x01014cb0
int C_01014cb0::sub_01014cb0(void) { return *(int*)((char*)this + 0); }

struct C_01014cc0 { int a, b, c; C_01014cc0(); };

// @baa 0x01014cc0
C_01014cc0::C_01014cc0() : a(0), b(0), c(0) {}

struct C_01014cd0 { int sub_01014cd0(void); };

// @baa 0x01014cd0
int C_01014cd0::sub_01014cd0(void) { return *(int*)((char*)this + 0); }

struct C_01014ce0 { int a, b, c; C_01014ce0(); };

// @baa 0x01014ce0
C_01014ce0::C_01014ce0() : a(0), b(0), c(0) {}

struct C_01014cf0 { int sub_01014cf0(void); };

// @baa 0x01014cf0
int C_01014cf0::sub_01014cf0(void) { return *(int*)((char*)this + 0); }

struct C_01014d00 { int a, b, c; C_01014d00(); };

// @baa 0x01014d00
C_01014d00::C_01014d00() : a(0), b(0), c(0) {}

struct C_01014d10 { int sub_01014d10(void); };

// @baa 0x01014d10
int C_01014d10::sub_01014d10(void) { return *(int*)((char*)this + 0); }

struct C_01014d20 { int a, b, c; C_01014d20(); };

// @baa 0x01014d20
C_01014d20::C_01014d20() : a(0), b(0), c(0) {}

struct C_01014d30 { int sub_01014d30(void); };

// @baa 0x01014d30
int C_01014d30::sub_01014d30(void) { return *(int*)((char*)this + 0); }

struct C_01014d40 { int a, b, c; C_01014d40(); };

// @baa 0x01014d40
C_01014d40::C_01014d40() : a(0), b(0), c(0) {}

struct C_01014d50 { int sub_01014d50(void); };

// @baa 0x01014d50
int C_01014d50::sub_01014d50(void) { return *(int*)((char*)this + 0); }

struct C_01014d60 { int a, b, c; C_01014d60(); };

// @baa 0x01014d60
C_01014d60::C_01014d60() : a(0), b(0), c(0) {}

struct C_01014d70 { int sub_01014d70(void); };

// @baa 0x01014d70
int C_01014d70::sub_01014d70(void) { return *(int*)((char*)this + 0); }

struct C_01014d80 { int a, b, c; C_01014d80(); };

// @baa 0x01014d80
C_01014d80::C_01014d80() : a(0), b(0), c(0) {}

struct C_01014d90 { int sub_01014d90(void); };

// @baa 0x01014d90
int C_01014d90::sub_01014d90(void) { return *(int*)((char*)this + 0); }

struct C_01014da0 { int sub_01014da0(void); };

// @baa 0x01014da0
int C_01014da0::sub_01014da0(void) { return *(int*)((char*)this + 0); }

struct C_01014db0 { int sub_01014db0(void); };

// @baa 0x01014db0
int C_01014db0::sub_01014db0(void) { return *(int*)((char*)this + 0); }

struct C_01014dc0 { int sub_01014dc0(void); };

// @baa 0x01014dc0
int C_01014dc0::sub_01014dc0(void) { return *(int*)((char*)this + 0); }

struct C_01014dd0 { int sub_01014dd0(void); };

// @baa 0x01014dd0
int C_01014dd0::sub_01014dd0(void) { return *(int*)((char*)this + 0); }

struct C_01014de0 { int sub_01014de0(void); };

// @baa 0x01014de0
int C_01014de0::sub_01014de0(void) { return *(int*)((char*)this + 0); }

struct C_01014df0 { int sub_01014df0(void); };

// @baa 0x01014df0
int C_01014df0::sub_01014df0(void) { return *(int*)((char*)this + 0); }

struct C_01014e00 { int sub_01014e00(void); };

// @baa 0x01014e00
int C_01014e00::sub_01014e00(void) { return *(int*)((char*)this + 0); }

struct C_01014e10 { int sub_01014e10(void); };

// @baa 0x01014e10
int C_01014e10::sub_01014e10(void) { return *(int*)((char*)this + 0); }

struct C_01014e20 { int sub_01014e20(void); };

// @baa 0x01014e20
int C_01014e20::sub_01014e20(void) { return *(int*)((char*)this + 0); }

struct C_01014e30 { int sub_01014e30(void); };

// @baa 0x01014e30
int C_01014e30::sub_01014e30(void) { return *(int*)((char*)this + 0); }

struct C_01014e40 { int sub_01014e40(void); };

// @baa 0x01014e40
int C_01014e40::sub_01014e40(void) { return *(int*)((char*)this + 0); }

struct C_01014e50 { int sub_01014e50(void); };

// @baa 0x01014e50
int C_01014e50::sub_01014e50(void) { return *(int*)((char*)this + 20); }

struct C_01014e60 {
    int sub_01014e60(int);
};

// @baa 0x01014e60
int C_01014e60::sub_01014e60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01014e70 { int sub_01014e70(void); };

// @baa 0x01014e70
int C_01014e70::sub_01014e70(void) { return *(int*)((char*)this + 20); }

struct C_01014e80 {
    int sub_01014e80(int);
};

// @baa 0x01014e80
int C_01014e80::sub_01014e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x01015970
IMPLEMENT_CLASS_AT(UAnalyzeCookedContentCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeCookedContentCommandlet.cpp", 16);

// @baa 0x01015a80
int UAnalyzeCookedContentCommandlet::vf_000(void) { return 1; }

// @baa 0x01015a90
bool UAnalyzeCookedContentCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01015ad0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_01015ad0* sub_01015ad0();
};

extern INT g_02185564;
// @baa 0x01015ad0
C_01015ad0* C_01015ad0::sub_01015ad0()
{
    Value04 = 0;
    Unk00 = &g_02185564;
    return this;
}

struct C_01015af0 {
    undefined4 * sub_01015af0(byte);
};

// @baa 0x01015af0
undefined4 * C_01015af0::sub_01015af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0218554c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01015b10 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_01015b10* sub_01015b10();
};

extern INT g_0218556c;
// @baa 0x01015b10
C_01015b10* C_01015b10::sub_01015b10()
{
    Value04 = 0;
    Unk00 = &g_0218556c;
    return this;
}

struct C_01015b20 {
    void sub_01015b20();
};

// @baa 0x01015b20
void C_01015b20::sub_01015b20() {
    *(int*)this = (int)&g_0218554c;
}

// @baa 0x01015b30
IMPLEMENT_CLASS_AT(UAnalyzeReferencedContentCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\AnalyzeReferencedContent.cpp", 15);

// @baa 0x01015c40
int UAnalyzeReferencedContentCommandlet::vf_000(void) { return 1; }

// @baa 0x01015c50
bool UAnalyzeReferencedContentCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_01050b10();
// @baa 0x01054620
void sub_01054620(void) { sub_01050b10(); }

void sub_01050bc0();
// @baa 0x01054630
void sub_01054630(void) { sub_01050bc0(); }

void sub_01050c70();
// @baa 0x01054640
void sub_01054640(void) { sub_01050c70(); }

void sub_01050d20();
// @baa 0x01054650
void sub_01054650(void) { sub_01050d20(); }

void sub_01050dd0();
// @baa 0x01054660
void sub_01054660(void) { sub_01050dd0(); }

struct C_01054670 {
    int sub_01054670();
};

int sub_0102a7c0(void);
// @baa 0x01054670
int C_01054670::sub_01054670(void)
{
    int param_1 = (int)this;

  sub_0102a7c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01054690 {
    int sub_01054690();
};

int sub_0102a870(void);
// @baa 0x01054690
int C_01054690::sub_01054690(void)
{
    int param_1 = (int)this;

  sub_0102a870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010546b0 {
    int sub_010546b0();
};

int sub_0102a920(void);
// @baa 0x010546b0
int C_010546b0::sub_010546b0(void)
{
    int param_1 = (int)this;

  sub_0102a920();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010546d0 {
    int sub_010546d0();
};

int sub_0102a9d0(void);
// @baa 0x010546d0
int C_010546d0::sub_010546d0(void)
{
    int param_1 = (int)this;

  sub_0102a9d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010546f0 {
    int sub_010546f0();
};

int sub_0102aa80(void);
// @baa 0x010546f0
int C_010546f0::sub_010546f0(void)
{
    int param_1 = (int)this;

  sub_0102aa80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01050100();
// @baa 0x01054710
void sub_01054710(void) { sub_01050100(); }

void sub_01050170();
// @baa 0x01054720
void sub_01054720(void) { sub_01050170(); }

void sub_010501e0();
// @baa 0x01054730
void sub_01054730(void) { sub_010501e0(); }

void sub_01050250();
// @baa 0x01054740
void sub_01054740(void) { sub_01050250(); }

void sub_010502c0();
// @baa 0x01054750
void sub_01054750(void) { sub_010502c0(); }

void sub_01050330();
// @baa 0x01054760
void sub_01054760(void) { sub_01050330(); }

void sub_010503a0();
// @baa 0x01054770
void sub_01054770(void) { sub_010503a0(); }

void sub_01050410();
// @baa 0x01054780
void sub_01054780(void) { sub_01050410(); }

void sub_01050480();
// @baa 0x01054790
void sub_01054790(void) { sub_01050480(); }

void sub_010504f0();
// @baa 0x010547a0
void sub_010547a0(void) { sub_010504f0(); }

void sub_01050560();
// @baa 0x010547b0
void sub_010547b0(void) { sub_01050560(); }

void sub_010505d0();
// @baa 0x010547c0
void sub_010547c0(void) { sub_010505d0(); }

void sub_01054330();
// @baa 0x010547d0
void sub_010547d0(void) { sub_01054330(); }

int sub_010241a0(void);
// @baa 0x01059310
int UTexture2D::sub_01059310(void)
{
    int param_1 = (int)this;

  sub_010241a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010593a0
int UTexture2D::sub_010593a0(void)
{
    int param_1 = (int)this;

  sub_010241a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01059330();
// @baa 0x010593c0
void sub_010593c0(void) { sub_01059330(); }

// @baa 0x010593d0
int UTexture2D::sub_010593d0(void)
{
    int param_1 = (int)this;

  sub_010241a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010593f0
void sub_010593f0(void) { sub_01059330(); }

// @baa 0x01059400
int UTexture2D::sub_01059400(void)
{
    int param_1 = (int)this;

  sub_010241a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01059420
void sub_01059420(void) { sub_01059330(); }

int sub_005c7a70(...);
int sub_01059670(void);
// @baa 0x01059700
undefined4 UAnalyzeReferencedContentCommandlet::sub_01059700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01059670();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x4a4);
  }
  return param_1;
}

// @baa 0x01059730
// @baa 0x01059740
