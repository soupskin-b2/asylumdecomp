// UnEdFact.cpp (part 1 of 4): 331 functions
// Placed here by: neighbours 200, callers 59, file 49, class 23.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007178f0
wchar_t * sub_007178f0(undefined4 param_1)
{
  switch(param_1) {
  case 1:
    return L"TEXTUREGROUP_WorldNormalMap";
  case 2:
    return L"TEXTUREGROUP_WorldSpecular";
  case 3:
    return L"TEXTUREGROUP_Character";
  case 4:
    return L"TEXTUREGROUP_CharacterNormalMap";
  case 5:
    return L"TEXTUREGROUP_CharacterSpecular";
  case 6:
    return L"TEXTUREGROUP_Weapon";
  case 7:
    return L"TEXTUREGROUP_WeaponNormalMap";
  case 8:
    return L"TEXTUREGROUP_WeaponSpecular";
  default:
    return L"TEXTUREGROUP_World";
  case 0xc:
    return L"TEXTUREGROUP_Vehicle";
  case 0xd:
    return L"TEXTUREGROUP_VehicleNormalMap";
  case 0xe:
    return L"TEXTUREGROUP_VehicleSpecular";
  case 0xf:
    return L"TEXTUREGROUP_Cinematic";
  case 0x10:
    return L"TEXTUREGROUP_Effects";
  case 0x12:
    return L"TEXTUREGROUP_Skybox";
  case 0x13:
    return L"TEXTUREGROUP_UI";
  case 0x14:
    return L"TEXTUREGROUP_LightAndShadowMap";
  case 0x15:
    return L"TEXTUREGROUP_RenderTarget";
  }
}

int sub_0077b170(...);
int sub_00784ab0(void);
extern undefined4 g_026b3c50;
// @baa 0x007d6090
int sub_007d6090(void)
{
  if (g_026b3c50 == 0) {
    g_026b3c50 = sub_0077b170(L"Engine");
    sub_00784ab0();
  }
  return g_026b3c50;
}

struct C{
int sub_00cb45c0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cb45c0
int C::sub_00cb45c0(undefined4*param_2)
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

// @baa 0x00ed80c0
IMPLEMENT_CLASS_AT(UTextureFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6619);

// @baa 0x00ed8120
// @baa 0x00ed8150
UFontFactory::UFontFactory()
{
}

IMPLEMENT_CLASS_AT(UFontFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7353);
// @baa 0x00ed81b0
int sub_00f33220(void);
extern undefined * g_02132700;
// @baa 0x00ed9d70
undefined4 * UFontFactory::sub_00ed9d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00f33220();
  *param_1 = (undefined4)(&g_02132700);
  return param_1;
}

int sub_005e1960(...);
int sub_00f4e590(void);
int sub_00f657c0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026cce2c;
// @baa 0x00f19270
void sub_00f19270(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cce2c == 0) {
    g_026cce2c = sub_00f657c0(L"Editor");
    sub_00f4e590();
  }
  sub_005e1960(g_026cce2c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f192d0
int sub_00f192d0(int a0, int a1) { return a1; }

// @baa 0x00f192e0
int sub_00f192e0(int a0, int a1) { return a1; }

// @baa 0x00f192f0
int sub_00f192f0(int a0, int a1) { return a1; }

int sub_00ccdba0(void);
int sub_00cdc050(...);
extern undefined4 g_026c3c6c;
// @baa 0x00f19300
void sub_00f19300(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c3c6c == 0) {
    g_026c3c6c = sub_00cdc050(L"Engine");
    sub_00ccdba0();
  }
  sub_005e1960(g_026c3c6c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f19420
int UMaterialFactory::vf_110(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) { return 0; }

// @baa 0x00f19570
int USoundModeFactory::vf_118(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return 0; }

struct C_00f19740 {
    bool sub_00f19740();
};

// @baa 0x00f19740
bool C_00f19740::sub_00f19740(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0x38425053;
}

// @baa 0x00f19cd0
void sub_00f19cd0(void) {  }

struct C_00f19dc0 {
    char pad[0x78];
    DWORD field78;
    DWORD sub_00f19dc0(DWORD a, DWORD b, DWORD c, DWORD d, DWORD e, DWORD f);
};

// @baa 0x00f19dc0
DWORD C_00f19dc0::sub_00f19dc0(DWORD a, DWORD b, DWORD c, DWORD d, DWORD e, DWORD f)
{
    return field78;
}

struct C_00f19dd0 { int sub_00f19dd0(int a0, int a1, int a2, int a3, int a4, int a5); };

// @baa 0x00f19dd0
int C_00f19dd0::sub_00f19dd0(int a0, int a1, int a2, int a3, int a4, int a5) { return *(int*)((char*)this + 116); }

struct C_00f19e20 { int sub_00f19e20(void); };

// @baa 0x00f19e20
int C_00f19e20::sub_00f19e20(void) { return *(int*)((char*)this + 4); }

struct C_00f19e30 { int sub_00f19e30(void); };

// @baa 0x00f19e30
int C_00f19e30::sub_00f19e30(void) { return *(int*)((char*)this + 4); }

struct C_00f19e40 { int sub_00f19e40(void); };

// @baa 0x00f19e40
int C_00f19e40::sub_00f19e40(void) { return *(int*)((char*)this + 4); }

struct C_00f19e50 { int a, b; C_00f19e50(int, int); };

// @baa 0x00f19e50
C_00f19e50::C_00f19e50(int x, int y) : a(x), b(y) {}

struct C_00f19e70 { int a, b; C_00f19e70(int, int); };

// @baa 0x00f19e70
C_00f19e70::C_00f19e70(int x, int y) : a(x), b(y) {}

struct C_00f19e90 { int a, b; C_00f19e90(int, int); };

// @baa 0x00f19e90
C_00f19e90::C_00f19e90(int x, int y) : a(x), b(y) {}

struct C_00f19eb0 { int a, b; C_00f19eb0(int, int); };

// @baa 0x00f19eb0
C_00f19eb0::C_00f19eb0(int x, int y) : a(x), b(y) {}

struct C_00f19ed0 { int a, b; C_00f19ed0(int, int); };

// @baa 0x00f19ed0
C_00f19ed0::C_00f19ed0(int x, int y) : a(x), b(y) {}

struct C_00f19ef0 { int a, b; C_00f19ef0(int, int); };

// @baa 0x00f19ef0
C_00f19ef0::C_00f19ef0(int x, int y) : a(x), b(y) {}

struct C_00f19f10 { int a, b; C_00f19f10(int, int); };

// @baa 0x00f19f10
C_00f19f10::C_00f19f10(int x, int y) : a(x), b(y) {}

struct C_00f19f30 { int a, b; C_00f19f30(int, int); };

// @baa 0x00f19f30
C_00f19f30::C_00f19f30(int x, int y) : a(x), b(y) {}

struct C_00f19f50 { int a, b; C_00f19f50(int, int); };

// @baa 0x00f19f50
C_00f19f50::C_00f19f50(int x, int y) : a(x), b(y) {}

// @baa 0x00f19f90
int sub_00f19f90(int a0) { return *(int*)a0; }

// @baa 0x00f19fa0
bool sub_00f19fa0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f19fb0 {
    void sub_00f19fb0(undefined4 *);
};

// @baa 0x00f19fb0
void C_00f19fb0::sub_00f19fb0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f19fd0
int sub_00f19fd0(int a0) { return *(int*)a0; }

struct C_00f19fe0 {
    void sub_00f19fe0(int *);
};

// @baa 0x00f19fe0
void C_00f19fe0::sub_00f19fe0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

// @baa 0x00f19ff0
int sub_00f19ff0(int a0) { return *(int*)a0; }

// @baa 0x00f1a000
bool sub_00f1a000(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a010 {
    void sub_00f1a010(undefined4 *);
};

// @baa 0x00f1a010
void C_00f1a010::sub_00f1a010(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a030
int sub_00f1a030(int a0) { return *(int*)a0; }

// @baa 0x00f1a040
bool sub_00f1a040(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a050 {
    void sub_00f1a050(undefined4 *);
};

// @baa 0x00f1a050
void C_00f1a050::sub_00f1a050(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a070
int sub_00f1a070(int a0) { return *(int*)a0; }

// @baa 0x00f1a080
bool sub_00f1a080(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a090 {
    void sub_00f1a090(undefined4 *);
};

// @baa 0x00f1a090
void C_00f1a090::sub_00f1a090(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a0b0
int sub_00f1a0b0(int a0) { return *(int*)a0; }

// @baa 0x00f1a0c0
bool sub_00f1a0c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a0d0 {
    void sub_00f1a0d0(undefined4 *);
};

// @baa 0x00f1a0d0
void C_00f1a0d0::sub_00f1a0d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a0f0
int sub_00f1a0f0(int a0) { return *(int*)a0; }

// @baa 0x00f1a100
bool sub_00f1a100(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a110 {
    void sub_00f1a110(undefined4 *);
};

// @baa 0x00f1a110
void C_00f1a110::sub_00f1a110(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a130
int sub_00f1a130(int a0) { return *(int*)a0; }

// @baa 0x00f1a140
bool sub_00f1a140(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a150 {
    void sub_00f1a150(undefined4 *);
};

// @baa 0x00f1a150
void C_00f1a150::sub_00f1a150(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00f1a170
int sub_00f1a170(int a0) { return *(int*)a0; }

// @baa 0x00f1a180
bool sub_00f1a180(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f1a190 {
    void sub_00f1a190(undefined4 *);
};

// @baa 0x00f1a190
void C_00f1a190::sub_00f1a190(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00f1a1f0 {
    void sub_00f1a1f0(int, int, int, int);
};

int sub_00630ea0(...);
// @baa 0x00f1a1f0
void C_00f1a1f0::sub_00f1a1f0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630ea0(this_,param_1,param_2,param_3,param_4);
  return;
}

int sub_005d88c0(...);
int sub_00c35e80(...);
int sub_00c3d500(void);
extern undefined4 g_026c0a80;
// @baa 0x00f1a210
void sub_00f1a210(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c0a80 == 0) {
    g_026c0a80 = sub_00c35e80(L"Engine");
    sub_00c3d500();
  }
  sub_005d88c0(g_026c0a80,param_1,param_2,param_3);
  return;
}

int sub_00982140(void);
int sub_009a4d10(...);
extern undefined4 g_026b6010;
// @baa 0x00f1a260
void sub_00f1a260(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b6010 == 0) {
    g_026b6010 = sub_009a4d10(L"Engine");
    sub_00982140();
  }
  sub_005d88c0(g_026b6010,param_1,param_2,param_3);
  return;
}

int sub_00588dd0(...);
int sub_00589470(void);
extern undefined4 g_02688448;
// @baa 0x00f1a490
void sub_00f1a490(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_005e1960(g_02688448,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f1d580
IMPLEMENT_CLASS_AT(UAnimSetFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4428);

// @baa 0x00f1d690
int UAnimSetFactoryNew::vf_000(void) { return 1; }

// @baa 0x00f1d6a0
bool UAnimSetFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00ce8aa0(void);
int sub_00d194e0(...);
extern undefined4 g_026c5640;
// @baa 0x00f1ec80
void UFont::sub_00f1ec80(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (g_026c5640 == 0) {
    g_026c5640 = sub_00d194e0(L"Engine");
    sub_00ce8aa0();
  }
  iVar1 = g_026c5640;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffb;
  *(int *)(param_1 + 0x30) = iVar1;
  *(undefined1 *)(param_1 + 0x96) = 0x13;
  return;
}

// @baa 0x00f1ecc0
int UFontFactory::vf_000(void) { return 1; }

// @baa 0x00f1ecd0
IMPLEMENT_CLASS_AT(USequenceFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7610);

// @baa 0x00f1ede0
int USequenceFactory::vf_000(void) { return 1; }

// @baa 0x00f1edf0
bool USequenceFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1ee30
IMPLEMENT_CLASS_AT(UAnimObjectFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7771);

// @baa 0x00f1ef40
int UAnimObjectFactory::vf_000(void) { return 1; }

// @baa 0x00f1ef50
bool UAnimObjectFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1ef90
int UReimportTextureFactory::vf_000(void) { return 1; }

extern undefined4 g_026acbd8;
extern undefined1 g_01eaf278;
int sub_00631ac0(...);
int sub_006334b0(void);
struct C_00f1efa0 {
    int sub_005d5620(int, int, int);
    int sub_0062dc50(int, int, int, int, int);
    char pad[0x28];
    int field28;
    void sub_00f1efa0();
};

struct FNameL { int Index; int Number; };

// @baa 0x00f1efa0
void C_00f1efa0::sub_00f1efa0()
{
    FNameL Name;
    int obj;

    int Outer1 = field28;
    ((C_00f1efa0 *)&Name)->sub_005d5620((int)L"Pitch", 1, 1);
    if (g_026acbd8 == 0) {
        g_026acbd8 = sub_00631ac0(L"Core");
        sub_006334b0();
    }
    obj = sub_005e1960(g_026acbd8, Outer1, Name.Index, Name.Number, 0, 4, 0, g_026667a8, 0, 0, 0);
    if (obj != 0) {
        ((C_00f1efa0 *)obj)->sub_0062dc50(0, 0x64, (int)L"Import", 0, 0);
        *(int *)obj = (int)&g_01eaf278;
    }

    int Outer2 = field28;
    ((C_00f1efa0 *)&Name)->sub_005d5620((int)L"Roll", 1, 1);
    if (g_026acbd8 == 0) {
        g_026acbd8 = sub_00631ac0(L"Core");
        sub_006334b0();
    }
    obj = sub_005e1960(g_026acbd8, Outer2, Name.Index, Name.Number, 0, 4, 0, g_026667a8, 0, 0, 0);
    if (obj != 0) {
        ((C_00f1efa0 *)obj)->sub_0062dc50(0, 0x68, (int)L"Import", 0, 0);
        *(int *)obj = (int)&g_01eaf278;
    }

    int Outer3 = field28;
    ((C_00f1efa0 *)&Name)->sub_005d5620((int)L"Yaw", 1, 1);
    if (g_026acbd8 == 0) {
        g_026acbd8 = sub_00631ac0(L"Core");
        sub_006334b0();
    }
    obj = sub_005e1960(g_026acbd8, Outer3, Name.Index, Name.Number, 0, 4, 0, g_026667a8, 0, 0, 0);
    if (obj != 0) {
        ((C_00f1efa0 *)obj)->sub_0062dc50(0, 0x6c, (int)L"Import", 0, 0);
        *(int *)obj = (int)&g_01eaf278;
    }
}

int sub_00c1c250(void);
int sub_00c32ac0(...);
extern undefined4 g_026c096c;
// @baa 0x00f20060
void sub_00f20060(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c096c == 0) {
    g_026c096c = sub_00c32ac0(L"Engine");
    sub_00c1c250();
  }
  sub_005d88c0(g_026c096c,param_1,param_2,param_3);
  return;
}

int sub_00720a70(void);
int sub_00724d20(...);
extern undefined4 g_026b224c;
// @baa 0x00f200a0
void sub_00f200a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b224c == 0) {
    g_026b224c = sub_00724d20(L"Engine");
    sub_00720a70();
  }
  sub_005d88c0(g_026b224c,param_1,param_2,param_3);
  return;
}

struct C_00f20160 {
    void sub_00f20160(undefined4, undefined4, undefined2, undefined2);
};

// @baa 0x00f20160
void C_00f20160::sub_00f20160(undefined4 param_2, undefined4 param_3, undefined2 param_4, undefined2 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00f20190 {
    void sub_00f20190(undefined4, undefined4, undefined1, undefined1);
};

// @baa 0x00f20190
void C_00f20190::sub_00f20190(undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4,param_5);
  return;
}

typedef uint size_t;

struct C_00f252f0 {
    int sub_00f252f0(int);
    int sub_00662dd0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00f252f0
int C_00f252f0::sub_00f252f0(int param_2)
{
    uint param_1 = (uint)this;
  int iVar1;
  iVar1 = ((C_00f252f0 *)(this))->sub_00662dd0(param_2);
  sub_01a37612((void *)((-(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1 | *(uint *)(param_1 + 0xc0)) +
                 iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00f25340 { void* Data; int Num; int Max; void sub_00f25340(); };

// @baa 0x00f25340
void C_00f25340::sub_00f25340() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f253a0 { void* Data; int Num; int Max; void sub_00f253a0(); };

// @baa 0x00f253a0
void C_00f253a0::sub_00f253a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f25400 { void* Data; int Num; int Max; void sub_00f25400(); };

// @baa 0x00f25400
void C_00f25400::sub_00f25400() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00f25460 {
    int sub_00f25460(int);
};

// @baa 0x00f25460
int C_00f25460::sub_00f25460(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f25470 {
    int sub_00f25470(int);
};

// @baa 0x00f25470
int C_00f25470::sub_00f25470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f25480 {
    int sub_00f25480(int);
};

// @baa 0x00f25480
int C_00f25480::sub_00f25480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f25490 {
    int sub_00f25490(int);
};

// @baa 0x00f25490
int C_00f25490::sub_00f25490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f254a0 {
    int sub_00f254a0(int);
};

// @baa 0x00f254a0
int C_00f254a0::sub_00f254a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f254b0 {
    int sub_00f254b0(int);
};

// @baa 0x00f254b0
int C_00f254b0::sub_00f254b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f254c0 {
    int sub_00f254c0(int);
};

// @baa 0x00f254c0
int C_00f254c0::sub_00f254c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f254d0 {
    int sub_00f254d0(int);
};

// @baa 0x00f254d0
int C_00f254d0::sub_00f254d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f254e0 {
    int sub_00f254e0(int);
};

// @baa 0x00f254e0
int C_00f254e0::sub_00f254e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct M_00f25530 { void sub_0040fcc0(); };

struct C_00f25530 { char pad[4]; M_00f25530 m; void sub_00f25530(); };

// @baa 0x00f25530
void C_00f25530::sub_00f25530() { m.sub_0040fcc0(); }

struct M_00f25550 { void sub_0040fcc0(); };

struct C_00f25550 { char pad[4]; M_00f25550 m; void sub_00f25550(); };

// @baa 0x00f25550
void C_00f25550::sub_00f25550() { m.sub_0040fcc0(); }

struct M_00f25560 { void sub_0040fcc0(); };

struct C_00f25560 { char pad[4]; M_00f25560 m; void sub_00f25560(); };

// @baa 0x00f25560
void C_00f25560::sub_00f25560() { m.sub_0040fcc0(); }

struct M_00f25570 { void sub_0040fcc0(); };

struct C_00f25570 { char pad[4]; M_00f25570 m; void sub_00f25570(); };

// @baa 0x00f25570
void C_00f25570::sub_00f25570() { m.sub_0040fcc0(); }

struct M_00f25580 { void sub_0040fcc0(); };

struct C_00f25580 { char pad[4]; M_00f25580 m; void sub_00f25580(); };

// @baa 0x00f25580
void C_00f25580::sub_00f25580() { m.sub_0040fcc0(); }

struct M_00f25590 { void sub_0040fcc0(); };

struct C_00f25590 { char pad[4]; M_00f25590 m; void sub_00f25590(); };

// @baa 0x00f25590
void C_00f25590::sub_00f25590() { m.sub_0040fcc0(); }

struct M_00f255a0 { void sub_0040fcc0(); };

struct C_00f255a0 { char pad[4]; M_00f255a0 m; void sub_00f255a0(); };

// @baa 0x00f255a0
void C_00f255a0::sub_00f255a0() { m.sub_0040fcc0(); }

struct M_00f255b0 { void sub_0040fcc0(); };

struct C_00f255b0 { char pad[4]; M_00f255b0 m; void sub_00f255b0(); };

// @baa 0x00f255b0
void C_00f255b0::sub_00f255b0() { m.sub_0040fcc0(); }

void sub_00f253a0();
// @baa 0x00f255c0
void sub_00f255c0(void) { sub_00f253a0(); }

struct C_00f25640 {
    int sub_00f25640(int);
};

// @baa 0x00f25640
int C_00f25640::sub_00f25640(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f257d0 {
    int sub_00f257d0(int);
};

// @baa 0x00f257d0
int C_00f257d0::sub_00f257d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00f25880
undefined4 * UObject::sub_00f25880(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

struct C_00f25980 {
    int sub_00f25980(int);
};

// @baa 0x00f25980
int C_00f25980::sub_00f25980(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f25b00 {
    int sub_00f25b00(int);
};

// @baa 0x00f25b00
int C_00f25b00::sub_00f25b00(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f25c80 {
    int sub_00f25c80(int);
};

// @baa 0x00f25c80
int C_00f25c80::sub_00f25c80(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f25e00 {
    int sub_00f25e00(int);
};

// @baa 0x00f25e00
int C_00f25e00::sub_00f25e00(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f25f80 {
    int sub_00f25f80(int);
};

// @baa 0x00f25f80
int C_00f25f80::sub_00f25f80(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f26100 {
    int sub_00f26100(int);
};

// @baa 0x00f26100
int C_00f26100::sub_00f26100(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f26280 {
    int sub_00f26280(int);
};

// @baa 0x00f26280
int C_00f26280::sub_00f26280(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct M_00f26390 { void sub_0040fcc0(); };

struct C_00f26390 { char pad[4]; M_00f26390 m; void sub_00f26390(); };

// @baa 0x00f26390
void C_00f26390::sub_00f26390() { m.sub_0040fcc0(); }

void sub_0040fcc0();
// @baa 0x00f263a0
void sub_00f263a0(void) { sub_0040fcc0(); }

struct M_00f263b0 { void sub_0040fcc0(); };

struct C_00f263b0 { char pad[4]; M_00f263b0 m; void sub_00f263b0(); };

// @baa 0x00f263b0
void C_00f263b0::sub_00f263b0() { m.sub_0040fcc0(); }

struct M_00f263c0 { void sub_0040fcc0(); };

struct C_00f263c0 { char pad[4]; M_00f263c0 m; void sub_00f263c0(); };

// @baa 0x00f263c0
void C_00f263c0::sub_00f263c0() { m.sub_0040fcc0(); }

struct M_00f263d0 { void sub_0040fcc0(); };

struct C_00f263d0 { char pad[4]; M_00f263d0 m; void sub_00f263d0(); };

// @baa 0x00f263d0
void C_00f263d0::sub_00f263d0() { m.sub_0040fcc0(); }

struct M_00f263e0 { void sub_0040fcc0(); };

struct C_00f263e0 { char pad[4]; M_00f263e0 m; void sub_00f263e0(); };

// @baa 0x00f263e0
void C_00f263e0::sub_00f263e0() { m.sub_0040fcc0(); }

struct M_00f263f0 { void sub_0040fcc0(); };

struct C_00f263f0 { char pad[4]; M_00f263f0 m; void sub_00f263f0(); };

// @baa 0x00f263f0
void C_00f263f0::sub_00f263f0() { m.sub_0040fcc0(); }

struct M_00f26400 { void sub_0040fcc0(); };

struct C_00f26400 { char pad[4]; M_00f26400 m; void sub_00f26400(); };

// @baa 0x00f26400
void C_00f26400::sub_00f26400() { m.sub_0040fcc0(); }

struct M_00f26410 { void sub_0040fcc0(); };

struct C_00f26410 { char pad[4]; M_00f26410 m; void sub_00f26410(); };

// @baa 0x00f26410
void C_00f26410::sub_00f26410() { m.sub_0040fcc0(); }

int sub_005e44e0(...);
int sub_00737960(...);
int sub_007551e0(void);
int sub_007713d0(...);
extern undefined4 g_026b3b38;
// @baa 0x00f29f80
void UTextureFactory::vf_128(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    if (g_026b3b38 == 0) {
      g_026b3b38 = sub_007713d0(L"Engine");
      sub_007551e0();
    }
    uVar1 = sub_005e44e0(g_026b3b38,param_3,param_4,param_5,param_6,param_7,0,g_026667a8,0,0);
    sub_00737960(uVar1);
    return;
  }
  uVar1 = sub_005e44e0(param_2,param_3,param_4,param_5,param_6,param_7,0,g_026667a8,0,0);
  sub_00737960(uVar1);
  return;
}

struct C_00f2fc20 {
    int sub_00f2fc20(int);
    int sub_00f25750(int, int);
};

// @baa 0x00f2fc20
int C_00f2fc20::sub_00f2fc20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fc20 *)(this))->sub_00f25750((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_00f2fc60 {
    int sub_00f2fc60(int);
    int sub_00f25910(int, int);
};

// @baa 0x00f2fc60
int C_00f2fc60::sub_00f2fc60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fc60 *)(this))->sub_00f25910((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fca0 {
    int sub_00f2fca0(int);
    int sub_00f25a90(int, int);
};

// @baa 0x00f2fca0
int C_00f2fca0::sub_00f2fca0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fca0 *)(this))->sub_00f25a90((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fce0 {
    int sub_00f2fce0(int);
    int sub_00f25c10(int, int);
};

// @baa 0x00f2fce0
int C_00f2fce0::sub_00f2fce0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fce0 *)(this))->sub_00f25c10((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fd20 {
    int sub_00f2fd20(int);
    int sub_00f25d90(int, int);
};

// @baa 0x00f2fd20
int C_00f2fd20::sub_00f2fd20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fd20 *)(this))->sub_00f25d90((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fd60 {
    int sub_00f2fd60(int);
    int sub_00f25f10(int, int);
};

// @baa 0x00f2fd60
int C_00f2fd60::sub_00f2fd60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fd60 *)(this))->sub_00f25f10((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fda0 {
    int sub_00f2fda0(int);
    int sub_00f26090(int, int);
};

// @baa 0x00f2fda0
int C_00f2fda0::sub_00f2fda0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fda0 *)(this))->sub_00f26090((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_00f2fde0 {
    int sub_00f2fde0(int);
    int sub_00f26210(int, int);
};

// @baa 0x00f2fde0
int C_00f2fde0::sub_00f2fde0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00f2fde0 *)(this))->sub_00f26210((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct M_00f2fe80 { void sub_00f2f610(); };

struct C_00f2fe80 { char pad[8]; M_00f2fe80 m; void sub_00f2fe80(); };

// @baa 0x00f2fe80
void C_00f2fe80::sub_00f2fe80() { m.sub_00f2f610(); }

struct M_00f30c00 { void sub_00f2f610(); };

struct C_00f30c00 { char pad[8]; M_00f30c00 m; void sub_00f30c00(); };

// @baa 0x00f30c00
void C_00f30c00::sub_00f30c00() { m.sub_00f2f610(); }

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

struct TConstSetBitIterator_00f30c10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30c10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30c10& operator++();
};

TConstSetBitIterator_00f30c10::TConstSetBitIterator_00f30c10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30c10
TConstSetBitIterator_00f30c10& TConstSetBitIterator_00f30c10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30c60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30c60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30c60& operator++();
};

TConstSetBitIterator_00f30c60::TConstSetBitIterator_00f30c60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30c60
TConstSetBitIterator_00f30c60& TConstSetBitIterator_00f30c60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30cb0& operator++();
};

TConstSetBitIterator_00f30cb0::TConstSetBitIterator_00f30cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30cb0
TConstSetBitIterator_00f30cb0& TConstSetBitIterator_00f30cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30d00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30d00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30d00& operator++();
};

TConstSetBitIterator_00f30d00::TConstSetBitIterator_00f30d00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30d00
TConstSetBitIterator_00f30d00& TConstSetBitIterator_00f30d00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30d50& operator++();
};

TConstSetBitIterator_00f30d50::TConstSetBitIterator_00f30d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30d50
TConstSetBitIterator_00f30d50& TConstSetBitIterator_00f30d50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30da0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30da0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30da0& operator++();
};

TConstSetBitIterator_00f30da0::TConstSetBitIterator_00f30da0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30da0
TConstSetBitIterator_00f30da0& TConstSetBitIterator_00f30da0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30df0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30df0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30df0& operator++();
};

TConstSetBitIterator_00f30df0::TConstSetBitIterator_00f30df0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30df0
TConstSetBitIterator_00f30df0& TConstSetBitIterator_00f30df0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30e40& operator++();
};

TConstSetBitIterator_00f30e40::TConstSetBitIterator_00f30e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30e40
TConstSetBitIterator_00f30e40& TConstSetBitIterator_00f30e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30e90& operator++();
};

TConstSetBitIterator_00f30e90::TConstSetBitIterator_00f30e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30e90
TConstSetBitIterator_00f30e90& TConstSetBitIterator_00f30e90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f30ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f30ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f30ee0& operator++();
};

TConstSetBitIterator_00f30ee0::TConstSetBitIterator_00f30ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f30ee0
TConstSetBitIterator_00f30ee0& TConstSetBitIterator_00f30ee0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00f324e0
// @baa 0x00f32540
// @baa 0x00f33220
// @baa 0x00f33300
// @baa 0x00f33360
struct A_00f33420 { virtual void sub_00f334d0(); char pad[172]; };

struct B_00f33420 { virtual void sub_00f334d0(); };

struct C_00f33420 : A_00f33420, B_00f33420 { virtual void sub_00f334d0(); C_00f33420(); };

C_00f33420::C_00f33420() {}

// @baa 0x00f33420
void C_00f33420::sub_00f334d0() {}

int sub_005c7a70(...);
int sub_00f33430(void);
// @baa 0x00f334d0
undefined4 UAnimObjectFactory::sub_00f334d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f33430();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb8);
  }
  return param_1;
}

struct A_00f33580 { virtual void sub_00f33630(); char pad[112]; };

struct B_00f33580 { virtual void sub_00f33630(); };

struct C_00f33580 : A_00f33580, B_00f33580 { virtual void sub_00f33630(); C_00f33580(); };

C_00f33580::C_00f33580() {}

// @baa 0x00f33580
void C_00f33580::sub_00f33630() {}

int sub_00f33590(void);
// @baa 0x00f33630
undefined4 UReimportStaticMeshFactory::sub_00f33630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f33590();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x7c);
  }
  return param_1;
}

struct A_00f336e0 { virtual void sub_00f33790(); char pad[108]; };

struct B_00f336e0 { virtual void sub_00f33790(); };

struct C_00f336e0 : A_00f336e0, B_00f336e0 { virtual void sub_00f33790(); C_00f336e0(); };

C_00f336e0::C_00f336e0() {}

// @baa 0x00f336e0
void C_00f336e0::sub_00f33790() {}

int sub_00f336f0(void);
// @baa 0x00f33790
undefined4 UReimportSkeletalMeshFactory::sub_00f33790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f336f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

struct A_00f33840 { virtual void sub_00f338f0(); char pad[108]; };

struct B_00f33840 { virtual void sub_00f338f0(); };

struct C_00f33840 : A_00f33840, B_00f33840 { virtual void sub_00f338f0(); C_00f33840(); };

C_00f33840::C_00f33840() {}

// @baa 0x00f33840
void C_00f33840::sub_00f338f0() {}

int sub_00f33850(void);
// @baa 0x00f338f0
undefined4 UReimportSkeletalMeshFactory::sub_00f338f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f33850();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

struct C_00f33910 {
    undefined4 * sub_00f33910();
};

int sub_0060b3d0(void);
extern undefined * g_02150158;
// @baa 0x00f33910
undefined4 * C_00f33910::sub_00f33910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_02150158);
  param_1[0x19] = 0;
  return param_1;
}

// @baa 0x00f33930
IMPLEMENT_CLASS_AT(UColladaFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8413);

// @baa 0x00f33990
struct C_00f339b0 {
    undefined4 * sub_00f339b0();
};

extern undefined * g_02150280;
// @baa 0x00f339b0
undefined4 * C_00f339b0::sub_00f339b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  *param_1 = (undefined4)(&g_02150280);
  param_1[0x19] = 1;
  return param_1;
}

// @baa 0x00f339d0
IMPLEMENT_CLASS_AT(USpeedTreeFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8486);

// @baa 0x00f33a30
struct C_00f33b20 {
    void sub_00f33b20();
    int sub_00f2fe90(int);
};

// @baa 0x00f33b20
void C_00f33b20::sub_00f33b20(void)
{
    int param_1 = (int)this;
  ((C_00f33b20 *)((*(char **)((char *)this + 0x10))))->sub_00f2fe90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33b40 {
    void sub_00f33b40();
    int sub_00f2ff10(int);
};

// @baa 0x00f33b40
void C_00f33b40::sub_00f33b40(void)
{
    int param_1 = (int)this;
  ((C_00f33b40 *)((*(char **)((char *)this + 0x10))))->sub_00f2ff10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33b60 {
    void sub_00f33b60();
    int sub_00f30080(int);
};

// @baa 0x00f33b60
void C_00f33b60::sub_00f33b60(void)
{
    int param_1 = (int)this;
  ((C_00f33b60 *)((*(char **)((char *)this + 0x10))))->sub_00f30080(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33b80 {
    void sub_00f33b80();
    int sub_00f301f0(int);
};

// @baa 0x00f33b80
void C_00f33b80::sub_00f33b80(void)
{
    int param_1 = (int)this;
  ((C_00f33b80 *)((*(char **)((char *)this + 0x10))))->sub_00f301f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33ba0 {
    void sub_00f33ba0();
    int sub_00f30360(int);
};

// @baa 0x00f33ba0
void C_00f33ba0::sub_00f33ba0(void)
{
    int param_1 = (int)this;
  ((C_00f33ba0 *)((*(char **)((char *)this + 0x10))))->sub_00f30360(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33bc0 {
    void sub_00f33bc0();
    int sub_00f304d0(int);
};

// @baa 0x00f33bc0
void C_00f33bc0::sub_00f33bc0(void)
{
    int param_1 = (int)this;
  ((C_00f33bc0 *)((*(char **)((char *)this + 0x10))))->sub_00f304d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33be0 {
    void sub_00f33be0();
    int sub_00f30640(int);
};

// @baa 0x00f33be0
void C_00f33be0::sub_00f33be0(void)
{
    int param_1 = (int)this;
  ((C_00f33be0 *)((*(char **)((char *)this + 0x10))))->sub_00f30640(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33c00 {
    void sub_00f33c00();
    int sub_00f307b0(int);
};

// @baa 0x00f33c00
void C_00f33c00::sub_00f33c00(void)
{
    int param_1 = (int)this;
  ((C_00f33c00 *)((*(char **)((char *)this + 0x10))))->sub_00f307b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33c20 {
    void sub_00f33c20();
    int sub_00f30920(int);
};

// @baa 0x00f33c20
void C_00f33c20::sub_00f33c20(void)
{
    int param_1 = (int)this;
  ((C_00f33c20 *)((*(char **)((char *)this + 0x10))))->sub_00f30920(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f33c40 {
    void sub_00f33c40();
    int sub_00f30a90(int);
};

// @baa 0x00f33c40
void C_00f33c40::sub_00f33c40(void)
{
    int param_1 = (int)this;
  ((C_00f33c40 *)((*(char **)((char *)this + 0x10))))->sub_00f30a90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00f34290 {
    undefined4 sub_00f34290(byte);
    int sub_00f2f610();
};

int sub_0053dfa0(...);
// @baa 0x00f34290
undefined4 C_00f34290::sub_00f34290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f34290 *)(((char *)this + 8)))->sub_00f2f610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f35140
IMPLEMENT_CLASS_AT(UTextureExporterPCX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6690);

// @baa 0x00f35160
IMPLEMENT_CLASS_AT(UTextureExporterBMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6870);

// @baa 0x00f35180
IMPLEMENT_CLASS_AT(UTextureExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6919);

// @baa 0x00f351a0
IMPLEMENT_CLASS_AT(URenderTargetExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6987);

// @baa 0x00f351c0
IMPLEMENT_CLASS_AT(URenderTargetCubeExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7151);

// @baa 0x00f35580
IMPLEMENT_CLASS_AT(UTextureCubeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 61);

// @baa 0x00f355a0
IMPLEMENT_CLASS_AT(UMaterialInstanceConstantFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 96);

// @baa 0x00f355c0
IMPLEMENT_CLASS_AT(UMaterialInstanceTimeVaryingFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 133);

// @baa 0x00f355e0
IMPLEMENT_CLASS_AT(UMaterialFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 740);

// @baa 0x00f35600
IMPLEMENT_CLASS_AT(UMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 775);

// @baa 0x00f35620
IMPLEMENT_CLASS_AT(UDecalMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 802);

// @baa 0x00f35640
IMPLEMENT_CLASS_AT(UClassFactoryUC, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 1627);

// @baa 0x00f35660
IMPLEMENT_CLASS_AT(ULevelFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 2211);

// @baa 0x00f35680
IMPLEMENT_CLASS_AT(UPackageFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 2757);

// @baa 0x00f356a0
IMPLEMENT_CLASS_AT(UPolysFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3427);

// @baa 0x00f356c0
IMPLEMENT_CLASS_AT(UModelFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3499);

// @baa 0x00f356e0
// @baa 0x00f35710
IMPLEMENT_CLASS_AT(USoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3808);

// @baa 0x00f35730
IMPLEMENT_CLASS_AT(USoundTTSFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 3592);

// @baa 0x00f35760
IMPLEMENT_CLASS_AT(USoundSurroundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4028);

// @baa 0x00f35780
IMPLEMENT_CLASS_AT(USoundCueFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4057);

// @baa 0x00f357a0
IMPLEMENT_CLASS_AT(USoundModeFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4098);

// @baa 0x00f357c0
IMPLEMENT_CLASS_AT(UFonixFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4131);

// @baa 0x00f357e0
IMPLEMENT_CLASS_AT(ULensFlareFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4159);

// @baa 0x00f35800
IMPLEMENT_CLASS_AT(UParticleSystemFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4186);

// @baa 0x00f35820
IMPLEMENT_CLASS_AT(UApexDestructibleAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4192);

// @baa 0x00f35840
IMPLEMENT_CLASS_AT(UApexRenderMeshAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4240);

// @baa 0x00f35860
IMPLEMENT_CLASS_AT(UApexParticleSystemAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4276);

// @baa 0x00f35880
IMPLEMENT_CLASS_AT(UApexMeshParticleFactoryAssetFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4312);

// @baa 0x00f358a0
IMPLEMENT_CLASS_AT(UDestructibleDamageParametersFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4373);

// @baa 0x00f358c0
IMPLEMENT_CLASS_AT(UPhysXParticleSystemFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4401);

// @baa 0x00f358e0
// @baa 0x00f35900
IMPLEMENT_CLASS_AT(UAnimTreeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4455);

// @baa 0x00f35920
IMPLEMENT_CLASS_AT(UPostProcessFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4482);

// @baa 0x00f35940
IMPLEMENT_CLASS_AT(UPhysicalMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4509);

// @baa 0x00f35960
IMPLEMENT_CLASS_AT(UTextureMovieFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4587);

// @baa 0x00f35980
IMPLEMENT_CLASS_AT(UTextureRenderTargetFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4670);

// @baa 0x00f359a0
IMPLEMENT_CLASS_AT(UTextureRenderTargetCubeFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 4751);

// @baa 0x00f359c0
// @baa 0x00f359f0
IMPLEMENT_CLASS_AT(UReimportTextureFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 7972);

// @baa 0x00f35a00
IMPLEMENT_CLASS_AT(UReimportStaticMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8080);

// @baa 0x00f35a10
IMPLEMENT_CLASS_AT(UReimportSkeletalMeshFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8186);

// @baa 0x00f35a20
IMPLEMENT_CLASS_AT(UReimportSoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8286);

// @baa 0x00f35a30
// @baa 0x00f35a60
// @baa 0x00f35a80
// @baa 0x00f35aa0
IMPLEMENT_CLASS_AT(UCurveEdPresetCurveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8446);

// @baa 0x00f35ac0
IMPLEMENT_CLASS_AT(UCameraAnimFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 8483);

// @baa 0x00f35ae0
// @baa 0x00f35b10
// @baa 0x00f35bd0
// @baa 0x00f35c90
// @baa 0x00f35d50
// @baa 0x00f35e10
// @baa 0x00f35ed0
// @baa 0x00f35f90
// @baa 0x00f36050
// @baa 0x00f36110
// @baa 0x00f361d0
// @baa 0x00f36290
// @baa 0x00f36350
// @baa 0x00f36410
// @baa 0x00f364d0
// @baa 0x00f36590
// @baa 0x00f36650
// @baa 0x00f36710
// @baa 0x00f367d0
// @baa 0x00f36890
// @baa 0x00f36950
// @baa 0x00f36a10
// @baa 0x00f36ad0
// @baa 0x00f36b90
// @baa 0x00f36c50
// @baa 0x00f36d10
// @baa 0x00f36dd0
// @baa 0x00f36e90
// @baa 0x00f36f50
// @baa 0x00f37010
// @baa 0x00f370d0
// @baa 0x00f37190
// @baa 0x00f37250
// @baa 0x00f37310
// @baa 0x00f373d0
// @baa 0x00f37490
// @baa 0x00f37550
// @baa 0x00f37610
// @baa 0x00f37790
// @baa 0x00f37850
// @baa 0x00f37910
// @baa 0x00f379d0
// @baa 0x00f37a90
// @baa 0x00f37b50
// @baa 0x00f37c10
// @baa 0x00f37cd0
// @baa 0x00f37d90
// @baa 0x00f37e50
// @baa 0x00f37f10
// @baa 0x00f37fd0
struct C_00f391d0 {
    int sub_00f391d0();
};

int sub_00f30f30(void);
// @baa 0x00f391d0
int C_00f391d0::sub_00f391d0(void)
{
    int param_1 = (int)this;

  sub_00f30f30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f391f0 {
    int sub_00f391f0();
};

int sub_00f30f90(void);
// @baa 0x00f391f0
int C_00f391f0::sub_00f391f0(void)
{
    int param_1 = (int)this;

  sub_00f30f90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f39210 {
    int sub_00f39210();
};

int sub_00f30ff0(void);
// @baa 0x00f39210
int C_00f39210::sub_00f39210(void)
{
    int param_1 = (int)this;

  sub_00f30ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f39230 {
    int sub_00f39230();
};

int sub_00f31050(void);
// @baa 0x00f39230
int C_00f39230::sub_00f39230(void)
{
    int param_1 = (int)this;

  sub_00f31050();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f39250 {
    int sub_00f39250();
};

int sub_00f310b0(void);
// @baa 0x00f39250
int C_00f39250::sub_00f39250(void)
{
    int param_1 = (int)this;

  sub_00f310b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f39270 {
    int sub_00f39270();
};

int sub_00f31110(void);
// @baa 0x00f39270
int C_00f39270::sub_00f39270(void)
{
    int param_1 = (int)this;

  sub_00f31110();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f39290 {
    int sub_00f39290();
};

int sub_00f31170(void);
// @baa 0x00f39290
int C_00f39290::sub_00f39290(void)
{
    int param_1 = (int)this;

  sub_00f31170();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f392b0 {
    int sub_00f392b0();
};

int sub_00f311d0(void);
// @baa 0x00f392b0
int C_00f392b0::sub_00f392b0(void)
{
    int param_1 = (int)this;

  sub_00f311d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f392d0 {
    int sub_00f392d0();
};

int sub_00f31230(void);
// @baa 0x00f392d0
int C_00f392d0::sub_00f392d0(void)
{
    int param_1 = (int)this;

  sub_00f31230();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f39490
IMPLEMENT_CLASS_AT(UTerrainHeightMapExporterTextT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 767);

// @baa 0x00f395a0
bool UTerrainHeightMapExporterTextT3D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f395e0
IMPLEMENT_CLASS_AT(UTerrainHeightMapExporterG16BMPT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 921);

// @baa 0x00f396f0
bool UTerrainHeightMapExporterG16BMPT3D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00f1b740(void);
int sub_00f35d50(...);
extern undefined4 g_026ccce0;
// @baa 0x00f39730
void sub_00f39730(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026ccce0 == 0) {
    g_026ccce0 = sub_00f35d50(L"Editor");
    sub_00f1b740();
  }
  sub_005e1960(g_026ccce0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00f1b8a0(void);
int sub_00f35e10(...);
extern undefined4 g_026ccce4;
// @baa 0x00f39790
void sub_00f39790(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026ccce4 == 0) {
    g_026ccce4 = sub_00f35e10(L"Editor");
    sub_00f1b8a0();
  }
  sub_005e1960(g_026ccce4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00f1be20(void);
int sub_00f36110(...);
extern undefined4 g_026cccf4;
// @baa 0x00f397f0
void sub_00f397f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cccf4 == 0) {
    g_026cccf4 = sub_00f36110(L"Editor");
    sub_00f1be20();
  }
  sub_005e1960(g_026cccf4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00f1e0e0(void);
int sub_00f37310(...);
extern undefined4 g_026ccd58;
// @baa 0x00f398b0
void sub_00f398b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026ccd58 == 0) {
    g_026ccd58 = sub_00f37310(L"Editor");
    sub_00f1e0e0();
  }
  sub_005e1960(g_026ccd58,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

int sub_00f1ecd0(void);
int sub_00f37910(...);
extern undefined4 g_026ccd78;
// @baa 0x00f39910
void sub_00f39910(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026ccd78 == 0) {
    g_026ccd78 = sub_00f37910(L"Editor");
    sub_00f1ecd0();
  }
  sub_005e1960(g_026ccd78,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00f3c6c0
// @baa 0x00f3c7d0
bool UFontFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f3c810
// @baa 0x00f3c920
bool UReimportTextureFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f3c960
// @baa 0x00f3ca70
bool UReimportSoundFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00f3ea40 {
    int sub_00f3ea40();
};

// @baa 0x00f3ea40
int C_00f3ea40::sub_00f3ea40(void)
{
    int param_1 = (int)this;

  sub_00f30f30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3ea60 {
    int sub_00f3ea60();
};

// @baa 0x00f3ea60
int C_00f3ea60::sub_00f3ea60(void)
{
    int param_1 = (int)this;

  sub_00f30f90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3ea80 {
    int sub_00f3ea80();
};

// @baa 0x00f3ea80
int C_00f3ea80::sub_00f3ea80(void)
{
    int param_1 = (int)this;

  sub_00f30ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eaa0 {
    int sub_00f3eaa0();
};

// @baa 0x00f3eaa0
int C_00f3eaa0::sub_00f3eaa0(void)
{
    int param_1 = (int)this;

  sub_00f31050();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eac0 {
    int sub_00f3eac0();
};

// @baa 0x00f3eac0
int C_00f3eac0::sub_00f3eac0(void)
{
    int param_1 = (int)this;

  sub_00f310b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eae0 {
    int sub_00f3eae0();
};

// @baa 0x00f3eae0
int C_00f3eae0::sub_00f3eae0(void)
{
    int param_1 = (int)this;

  sub_00f31110();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eb00 {
    int sub_00f3eb00();
};

// @baa 0x00f3eb00
int C_00f3eb00::sub_00f3eb00(void)
{
    int param_1 = (int)this;

  sub_00f31170();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eb20 {
    int sub_00f3eb20();
};

// @baa 0x00f3eb20
int C_00f3eb20::sub_00f3eb20(void)
{
    int param_1 = (int)this;

  sub_00f311d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3eb40 {
    int sub_00f3eb40();
};

// @baa 0x00f3eb40
int C_00f3eb40::sub_00f3eb40(void)
{
    int param_1 = (int)this;

  sub_00f31230();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00f3e790();
// @baa 0x00f3f3e0
void sub_00f3f3e0(void) { sub_00f3e790(); }

void sub_00f3cab0();
// @baa 0x00f3f3f0
void sub_00f3f3f0(void) { sub_00f3cab0(); }

void sub_00f3cb20();
// @baa 0x00f3f400
void sub_00f3f400(void) { sub_00f3cb20(); }

void sub_00f3cb90();
// @baa 0x00f3f410
void sub_00f3f410(void) { sub_00f3cb90(); }

void sub_00f3cc00();
// @baa 0x00f3f420
void sub_00f3f420(void) { sub_00f3cc00(); }

void sub_00f3cc70();
// @baa 0x00f3f430
void sub_00f3f430(void) { sub_00f3cc70(); }

void sub_00f3cce0();
// @baa 0x00f3f440
void sub_00f3f440(void) { sub_00f3cce0(); }

void sub_00f3cd50();
// @baa 0x00f3f760
void sub_00f3f760(void) { sub_00f3cd50(); }

void sub_00f3cdc0();
// @baa 0x00f3f770
void sub_00f3f770(void) { sub_00f3cdc0(); }

void sub_00f3ce30();
// @baa 0x00f3f780
void sub_00f3f780(void) { sub_00f3ce30(); }

struct C_00f3f790 {
    int sub_00f3f790();
};

// @baa 0x00f3f790
int C_00f3f790::sub_00f3f790(void)
{
    int param_1 = (int)this;

  sub_00f30f30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f7b0 {
    int sub_00f3f7b0();
};

// @baa 0x00f3f7b0
int C_00f3f7b0::sub_00f3f7b0(void)
{
    int param_1 = (int)this;

  sub_00f30f90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f7d0 {
    int sub_00f3f7d0();
};

// @baa 0x00f3f7d0
int C_00f3f7d0::sub_00f3f7d0(void)
{
    int param_1 = (int)this;

  sub_00f30ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f7f0 {
    int sub_00f3f7f0();
};

// @baa 0x00f3f7f0
int C_00f3f7f0::sub_00f3f7f0(void)
{
    int param_1 = (int)this;

  sub_00f31050();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f810 {
    int sub_00f3f810();
};

// @baa 0x00f3f810
int C_00f3f810::sub_00f3f810(void)
{
    int param_1 = (int)this;

  sub_00f310b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f830 {
    int sub_00f3f830();
};

// @baa 0x00f3f830
int C_00f3f830::sub_00f3f830(void)
{
    int param_1 = (int)this;

  sub_00f31110();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f850 {
    int sub_00f3f850();
};

// @baa 0x00f3f850
int C_00f3f850::sub_00f3f850(void)
{
    int param_1 = (int)this;

  sub_00f31170();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f870 {
    int sub_00f3f870();
};

// @baa 0x00f3f870
int C_00f3f870::sub_00f3f870(void)
{
    int param_1 = (int)this;

  sub_00f311d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00f3f890 {
    int sub_00f3f890();
};

// @baa 0x00f3f890
int C_00f3f890::sub_00f3f890(void)
{
    int param_1 = (int)this;

  sub_00f31230();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f3f8b0
void sub_00f3f8b0(void) { sub_00f3e790(); }

// @baa 0x00f3f8c0
void sub_00f3f8c0(void) { sub_00f3cab0(); }

// @baa 0x00f3f8d0
void sub_00f3f8d0(void) { sub_00f3cb20(); }

// @baa 0x00f3f8e0
void sub_00f3f8e0(void) { sub_00f3cb90(); }

// @baa 0x00f3f8f0
void sub_00f3f8f0(void) { sub_00f3cc00(); }

// @baa 0x00f3f900
void sub_00f3f900(void) { sub_00f3cc70(); }

// @baa 0x00f3f910
void sub_00f3f910(void) { sub_00f3cce0(); }

// @baa 0x00f42df0
void sub_00f42df0(void) { sub_00f3cd50(); }

// @baa 0x00f42e00
void sub_00f42e00(void) { sub_00f3cdc0(); }

// @baa 0x00f42e10
void sub_00f42e10(void) { sub_00f3ce30(); }

// @baa 0x00f42e20
void sub_00f42e20(void) { sub_00f3e790(); }
