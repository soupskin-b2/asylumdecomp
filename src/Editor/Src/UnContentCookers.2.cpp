// UnContentCookers.cpp (part 2 of 6): 861 functions
// Placed here by: neighbours 815, callers 32, class 12, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00567960
int UTexture2D::sub_00567960(void) { return *(int*)((char*)this + 20); }

// @baa 0x00567970
int UTexture2D::sub_00567970(void) { return *(int*)((char*)this + 24); }

// @baa 0x00567980
int UTexture2D::sub_00567980(void) { return *(int*)((char*)this + 28); }

// @baa 0x00567990
int UTexture2D::sub_00567990(void) { return *(int*)((char*)this + 32); }

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

struct C {
    void sub_005d10b0();
};

int sub_005d1050(void);
extern "C" __declspec(dllimport) int fclose(...);
// @baa 0x005d10b0
void C::sub_005d10b0(void)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x50) != '\0') {
    sub_005d1050();
    fclose(*(FILE **)(param_1 + 0x4c));
  }
  return;
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00601260
undefined4 * UObject::sub_00601260(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  return param_1;
}

struct C_view_0060bd40 {
    int sub_00602cf0(int, int);
};

// @baa 0x0060bd40
int UFracturedStaticMeshComponent::sub_0060bd40(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0060bd40 *)(this))->sub_00602cf0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

int sub_005e1960(...);
int sub_00715ed0(void);
int sub_0073ee40(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b2220;
// @baa 0x0074f150
void sub_0074f150(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b2220 == 0) {
    g_026b2220 = sub_0073ee40(L"Engine");
    sub_00715ed0();
  }
  sub_005e1960(g_026b2220,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_00755160 {
    void sub_00755160(undefined4, undefined4);
};

// @baa 0x00755160
void C_00755160::sub_00755160(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0xc4) = param_3;
    return;
  case 1:
    *(undefined4 *)(param_1 + 200) = param_3;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0xcc) = param_3;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0xd0) = param_3;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0xd4) = param_3;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0xd8) = param_3;
  }
  return;
}

int sub_0097e3a0(...);
int sub_0097edb0(void);
extern undefined4 g_026b5f0c;
// @baa 0x007d65d0
int sub_007d65d0(void)
{
  if (g_026b5f0c == 0) {
    g_026b5f0c = sub_0097e3a0(L"Engine");
    sub_0097edb0();
  }
  return g_026b5f0c;
}

extern "C" int g_026c51ac;
extern "C" int g_026c51b0;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_007d6600();
};

// @baa 0x007d6600
void UObjectThunk::sub_007d6600()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c51ac, g_026c51b0, 0), 0, 0);
}

int sub_008893e0(void);
int sub_008a0040(...);
extern undefined4 g_026b58f8;
// @baa 0x007d6630
int sub_007d6630(void)
{
  if (g_026b58f8 == 0) {
    g_026b58f8 = sub_008a0040(L"Engine");
    sub_008893e0();
  }
  return g_026b58f8;
}

int sub_00cb00f0(void);
int sub_00cc7830(...);
extern undefined4 g_026c3cf8;
// @baa 0x007d6660
int sub_007d6660(void)
{
  if (g_026c3cf8 == 0) {
    g_026c3cf8 = sub_00cc7830(L"Engine");
    sub_00cb00f0();
  }
  return g_026c3cf8;
}

int sub_00c380e0(void);
// @baa 0x00c45130
int USpeechRecognition::sub_00c45130(void)
{
    int param_1 = (int)this;

  sub_00c380e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_008040a0(void);
int sub_00826bd0(...);
extern undefined4 g_026b5480;
// @baa 0x00c8a580
int sub_00c8a580(void)
{
  if (g_026b5480 == 0) {
    g_026b5480 = sub_00826bd0(L"Engine");
    sub_008040a0();
  }
  return g_026b5480;
}

int sub_00e44e00(void);
int sub_00e5d880(...);
extern undefined4 g_026caf20;
// @baa 0x00e5f780
int sub_00e5f780(void)
{
  if (g_026caf20 == 0) {
    g_026caf20 = sub_00e5d880(L"GFxUI");
    sub_00e44e00();
  }
  return g_026caf20;
}

int sub_005f70f0(...);
// @baa 0x010147b0
void sub_010147b0(void)
{
  sub_005f70f0(0,0x4000000,1);
  return;
}

int sub_00629c10(...);
int sub_0062d5a0(...);
extern undefined4 g_025d6818;
// @baa 0x0108bd20
int sub_0108bd20(void)
{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  iVar1 = g_025d6818;
  local_4 = 0;
  uVar2 = sub_00629c10(L"-gABC=",&local_4);
  sub_0062d5a0(uVar2);
  if (local_4 == 0) {
    local_4 = iVar1;
  }
  return local_4;
}

struct C_0108bd60 {
    undefined4 sub_0108bd60();
};

// @baa 0x0108bd60
undefined4 C_0108bd60::sub_0108bd60(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x74) != 4) && (*(int *)(param_1 + 0x74) != 8)) {
    return 0;
  }
  return 1;
}

struct C_0108be30 {
    void sub_0108be30(undefined4);
};

int sub_00f63120(...);
// @baa 0x0108be30
void C_0108be30::sub_0108be30(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00f63120(param_2,*(undefined4 *)(param_1 + 0x74));
  return;
}

struct C_0108be50 { void sub_0057cb40(int); C_0108be50 *sub_0108be50(int); };

// @baa 0x0108be50
C_0108be50 *C_0108be50::sub_0108be50(int a) { sub_0057cb40(a); return this; }

// @baa 0x0108be70
void __stdcall sub_0108be70(int a0) {  }

struct C_0108bfe0 { C_0108bfe0* sub_0108bfe0(void); };

// @baa 0x0108bfe0
C_0108bfe0* C_0108bfe0::sub_0108bfe0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0108bff0 { int sub_0108bff0(void); };

// @baa 0x0108bff0
int C_0108bff0::sub_0108bff0(void) { return *(int*)((char*)this + 4); }

struct C_0108c000 { int sub_0108c000(void); };

// @baa 0x0108c000
int C_0108c000::sub_0108c000(void) { return *(int*)((char*)this + 4); }

struct C_0108c010 { int sub_0108c010(void); };

// @baa 0x0108c010
int C_0108c010::sub_0108c010(void) { return *(int*)((char*)this + 4); }

struct C_0108c020 { int sub_0108c020(void); };

// @baa 0x0108c020
int C_0108c020::sub_0108c020(void) { return *(int*)((char*)this + 4); }

struct C_0108c030 { int sub_0108c030(void); };

// @baa 0x0108c030
int C_0108c030::sub_0108c030(void) { return *(int*)((char*)this + 4); }

struct C_0108c040 { int sub_0108c040(void); };

// @baa 0x0108c040
int C_0108c040::sub_0108c040(void) { return *(int*)((char*)this + 4); }

struct C_0108c050 { int sub_0108c050(void); };

// @baa 0x0108c050
int C_0108c050::sub_0108c050(void) { return *(int*)((char*)this + 4); }

struct C_0108c060 { int sub_0108c060(void); };

// @baa 0x0108c060
int C_0108c060::sub_0108c060(void) { return *(int*)((char*)this + 4); }

// @baa 0x0108c070
int sub_0108c070(int a0) { return a0; }

struct C_0108c080 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0108c080(INT Index);
};

// @baa 0x0108c080
UBOOL C_0108c080::sub_0108c080(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0108c0e0 { int a, b; C_0108c0e0(int, int); };

// @baa 0x0108c0e0
C_0108c0e0::C_0108c0e0(int x, int y) : a(x), b(y) {}

struct C_0108c100 { int a, b; C_0108c100(int, int); };

// @baa 0x0108c100
C_0108c100::C_0108c100(int x, int y) : a(x), b(y) {}

struct C_0108c140 { int a, b; C_0108c140(int, int); };

// @baa 0x0108c140
C_0108c140::C_0108c140(int x, int y) : a(x), b(y) {}

struct C_0108c160 { int a, b; C_0108c160(int, int); };

// @baa 0x0108c160
C_0108c160::C_0108c160(int x, int y) : a(x), b(y) {}

struct C_0108c180 { int a, b; C_0108c180(int, int); };

// @baa 0x0108c180
C_0108c180::C_0108c180(int x, int y) : a(x), b(y) {}

struct C_0108c1a0 { int a, b; C_0108c1a0(int, int); };

// @baa 0x0108c1a0
C_0108c1a0::C_0108c1a0(int x, int y) : a(x), b(y) {}

struct C_0108c1c0 { int a, b; C_0108c1c0(int, int); };

// @baa 0x0108c1c0
C_0108c1c0::C_0108c1c0(int x, int y) : a(x), b(y) {}

struct C_0108c1e0 { int a, b; C_0108c1e0(int, int); };

// @baa 0x0108c1e0
C_0108c1e0::C_0108c1e0(int x, int y) : a(x), b(y) {}

struct C_0108c200 { int a, b; C_0108c200(int, int); };

// @baa 0x0108c200
C_0108c200::C_0108c200(int x, int y) : a(x), b(y) {}

struct C_0108c220 { int a, b; C_0108c220(int, int); };

// @baa 0x0108c220
C_0108c220::C_0108c220(int x, int y) : a(x), b(y) {}

struct C_0108c240 { int a, b; C_0108c240(int, int); };

// @baa 0x0108c240
C_0108c240::C_0108c240(int x, int y) : a(x), b(y) {}

struct C_0108c260 { int a, b; C_0108c260(int, int); };

// @baa 0x0108c260
C_0108c260::C_0108c260(int x, int y) : a(x), b(y) {}

struct C_0108c280 { int a, b; C_0108c280(int, int); };

// @baa 0x0108c280
C_0108c280::C_0108c280(int x, int y) : a(x), b(y) {}

struct C_0108c2a0 { int a, b; C_0108c2a0(int, int); };

// @baa 0x0108c2a0
C_0108c2a0::C_0108c2a0(int x, int y) : a(x), b(y) {}

// @baa 0x0108c2c0
int sub_0108c2c0(int a0) { return *(int*)a0; }

struct C_0108c2d0 {
    void sub_0108c2d0(int *);
};

// @baa 0x0108c2d0
void C_0108c2d0::sub_0108c2d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c2e0
int sub_0108c2e0(int a0) { return *(int*)a0; }

struct C_0108c2f0 {
    void sub_0108c2f0(int *);
};

// @baa 0x0108c2f0
void C_0108c2f0::sub_0108c2f0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c300
int sub_0108c300(int a0) { return *(int*)a0; }

// @baa 0x0108c320
int sub_0108c320(int a0) { return *(int*)a0; }

struct C_0108c330 {
    void sub_0108c330(int *);
};

// @baa 0x0108c330
void C_0108c330::sub_0108c330(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c340
int sub_0108c340(int a0) { return *(int*)a0; }

struct C_0108c350 {
    void sub_0108c350(int *);
};

// @baa 0x0108c350
void C_0108c350::sub_0108c350(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c360
int sub_0108c360(int a0) { return *(int*)a0; }

struct C_0108c370 {
    void sub_0108c370(int *);
};

// @baa 0x0108c370
void C_0108c370::sub_0108c370(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c380
int sub_0108c380(int a0) { return *(int*)a0; }

struct C_0108c390 {
    void sub_0108c390(int *);
};

// @baa 0x0108c390
void C_0108c390::sub_0108c390(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c3a0
int sub_0108c3a0(int a0) { return *(int*)a0; }

struct C_0108c3d0 {
    void sub_0108c3d0(int *);
};

// @baa 0x0108c3d0
void C_0108c3d0::sub_0108c3d0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

// @baa 0x0108c3e0
int sub_0108c3e0(int a0) { return *(int*)a0; }

// @baa 0x0108c3f0
bool sub_0108c3f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c400 {
    void sub_0108c400(undefined4 *);
};

// @baa 0x0108c400
void C_0108c400::sub_0108c400(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x0108c420
int sub_0108c420(int a0) { return *(int*)a0; }

struct C_0108c430 {
    void sub_0108c430(int *);
};

// @baa 0x0108c430
void C_0108c430::sub_0108c430(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x0108c440
int sub_0108c440(int a0) { return *(int*)a0; }

// @baa 0x0108c450
bool sub_0108c450(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c460 { int a, b; C_0108c460(const C_0108c460 &); };

// @baa 0x0108c460
C_0108c460::C_0108c460(const C_0108c460 &o) : a(o.a), b(o.b) {}

// @baa 0x0108c4a0
int sub_0108c4a0(int a0) { return *(int*)a0; }

struct C_0108c4b0 { int a, b; C_0108c4b0(const C_0108c4b0 &); };

// @baa 0x0108c4b0
C_0108c4b0::C_0108c4b0(const C_0108c4b0 &o) : a(o.a), b(o.b) {}

// @baa 0x0108c4d0
int sub_0108c4d0(int a0) { return *(int*)a0; }

// @baa 0x0108c4e0
bool sub_0108c4e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0108c4f0
int sub_0108c4f0(int a0) { return *(int*)a0; }

// @baa 0x0108c500
bool sub_0108c500(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c510 { int a, b; C_0108c510(const C_0108c510 &); };

// @baa 0x0108c510
C_0108c510::C_0108c510(const C_0108c510 &o) : a(o.a), b(o.b) {}

// @baa 0x0108c550
int sub_0108c550(int a0) { return *(int*)a0; }

struct C_0108c560 { int a, b; C_0108c560(const C_0108c560 &); };

// @baa 0x0108c560
C_0108c560::C_0108c560(const C_0108c560 &o) : a(o.a), b(o.b) {}

// @baa 0x0108c580
int sub_0108c580(int a0) { return *(int*)a0; }

// @baa 0x0108c590
bool sub_0108c590(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x0108c5a0
int sub_0108c5a0(int a0) { return *(int*)a0; }

// @baa 0x0108c5b0
bool sub_0108c5b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c5c0 { int a, b; C_0108c5c0(const C_0108c5c0 &); };

// @baa 0x0108c5c0
C_0108c5c0::C_0108c5c0(const C_0108c5c0 &o) : a(o.a), b(o.b) {}

struct C_0108c660 { int a, b; C_0108c660(int, int); };

// @baa 0x0108c660
C_0108c660::C_0108c660(int x, int y) : a(x), b(y) {}

struct C_0108c680 { int a, b; C_0108c680(int, int); };

// @baa 0x0108c680
C_0108c680::C_0108c680(int x, int y) : a(x), b(y) {}

struct C_0108c6a0 { int sub_0108c6a0(void); };

// @baa 0x0108c6a0
int C_0108c6a0::sub_0108c6a0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0108c6b0
bool sub_0108c6b0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c6e0 { int a, b; C_0108c6e0(const C_0108c6e0 &); };

// @baa 0x0108c6e0
C_0108c6e0::C_0108c6e0(const C_0108c6e0 &o) : a(o.a), b(o.b) {}

// @baa 0x0108c700
bool sub_0108c700(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0108c730 { int a, b; C_0108c730(const C_0108c730 &); };

// @baa 0x0108c730
C_0108c730::C_0108c730(const C_0108c730 &o) : a(o.a), b(o.b) {}

struct C_0108c7c0 { int a, b; C_0108c7c0(const C_0108c7c0 &); };

// @baa 0x0108c7c0
C_0108c7c0::C_0108c7c0(const C_0108c7c0 &o) : a(o.a), b(o.b) {}

struct C_0108c7e0 { int a, b; C_0108c7e0(const C_0108c7e0 &); };

// @baa 0x0108c7e0
C_0108c7e0::C_0108c7e0(const C_0108c7e0 &o) : a(o.a), b(o.b) {}

struct C_0108c800 { int a, b; C_0108c800(const C_0108c800 &); };

// @baa 0x0108c800
C_0108c800::C_0108c800(const C_0108c800 &o) : a(o.a), b(o.b) {}

struct C_0108c820 { int a, b; C_0108c820(const C_0108c820 &); };

// @baa 0x0108c820
C_0108c820::C_0108c820(const C_0108c820 &o) : a(o.a), b(o.b) {}

struct C_0108c840 { int a, b; C_0108c840(const C_0108c840 &); };

// @baa 0x0108c840
C_0108c840::C_0108c840(const C_0108c840 &o) : a(o.a), b(o.b) {}

struct C_0108c860 { int a, b; C_0108c860(const C_0108c860 &); };

// @baa 0x0108c860
C_0108c860::C_0108c860(const C_0108c860 &o) : a(o.a), b(o.b) {}

struct C_0108c880 { int a, b; C_0108c880(const C_0108c880 &); };

// @baa 0x0108c880
C_0108c880::C_0108c880(const C_0108c880 &o) : a(o.a), b(o.b) {}

int sub_00627f00(...);
// @baa 0x0108c8a0
void sub_0108c8a0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

// @baa 0x0108c910
void sub_0108c910(void) {  }

struct C_0108c970 { int sub_0108c970(void); };

// @baa 0x0108c970
int C_0108c970::sub_0108c970(void) { return *(int*)((char*)this + 232); }

// @baa 0x0108c9d0
int sub_0108c9d0(int a0, int a1) { return a1; }

struct C_0108c9e0 {
    void sub_0108c9e0(undefined4, undefined4);
};

// @baa 0x0108c9e0
void C_0108c9e0::sub_0108c9e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x120) = param_2;
  *(undefined4 *)(param_1 + 0x124) = param_3;
  return;
}

struct C_0108ca00 {
    undefined8 sub_0108ca00();
};

// @baa 0x0108ca00
undefined8 C_0108ca00::sub_0108ca00(void)
{
    int param_1 = (int)this;

  return *(undefined8 *)(param_1 + 0x120);
}

struct C_0108ca10 { int sub_0108ca10(void); };

// @baa 0x0108ca10
int C_0108ca10::sub_0108ca10(void) { return *(int*)((char*)this + 332); }

struct C_0108ca20 { void sub_0108ca20(int a0); };

// @baa 0x0108ca20
void C_0108ca20::sub_0108ca20(int a0) { *(int*)((char*)this + 336) = a0; }

struct C_0108ca30 { int sub_0108ca30(void); };

// @baa 0x0108ca30
int C_0108ca30::sub_0108ca30(void) { return *(int*)((char*)this + 336); }

struct C_0108ca40 {
    undefined4 sub_0108ca40();
};

// @baa 0x0108ca40
undefined4 C_0108ca40::sub_0108ca40(void)
{
    int * param_1 = (int *)this;

  if ((param_1[1] != 0) && (*param_1 != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x0108ca60
int sub_0108ca60(int a0, int a1) { return a1; }

struct C_0108ca70 {
    void sub_0108ca70();
};

// @baa 0x0108ca70
void C_0108ca70::sub_0108ca70(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

struct C_0108ca80 { int a, b, c; C_0108ca80(); };

// @baa 0x0108ca80
C_0108ca80::C_0108ca80() : a(0), b(0), c(0) {}

struct C_0108ca90 { int sub_0108ca90(void); };

// @baa 0x0108ca90
int C_0108ca90::sub_0108ca90(void) { return *(int*)((char*)this + 0); }

struct C_0108caa0 { int sub_0108caa0(void); };

// @baa 0x0108caa0
int C_0108caa0::sub_0108caa0(void) { return *(int*)((char*)this + 0); }

struct C_0108cab0 { int sub_0108cab0(void); };

// @baa 0x0108cab0
int C_0108cab0::sub_0108cab0(void) { return *(int*)((char*)this + 0); }

struct C_0108cac0 { int sub_0108cac0(void); };

// @baa 0x0108cac0
int C_0108cac0::sub_0108cac0(void) { return *(int*)((char*)this + 20); }

struct C_0108cad0 { int sub_0108cad0(void); };

// @baa 0x0108cad0
int C_0108cad0::sub_0108cad0(void) { return *(int*)((char*)this + 20); }

struct C_0108cae0 { int sub_0108cae0(void); };

// @baa 0x0108cae0
int C_0108cae0::sub_0108cae0(void) { return *(int*)((char*)this + 20); }

struct C_0108caf0 { int sub_0108caf0(void); };

// @baa 0x0108caf0
int C_0108caf0::sub_0108caf0(void) { return *(int*)((char*)this + 20); }

struct C_0108cb00 { int sub_0108cb00(void); };

// @baa 0x0108cb00
int C_0108cb00::sub_0108cb00(void) { return *(int*)((char*)this + 20); }

struct C_0108cb10 { int sub_0108cb10(void); };

// @baa 0x0108cb10
int C_0108cb10::sub_0108cb10(void) { return *(int*)((char*)this + 20); }

struct C_0108cb20 { int sub_0108cb20(void); };

// @baa 0x0108cb20
int C_0108cb20::sub_0108cb20(void) { return *(int*)((char*)this + 20); }

struct C_0108cb30 {
    int sub_0108cb30(int);
};

// @baa 0x0108cb30
int C_0108cb30::sub_0108cb30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0108cb50 {
    int sub_0108cb50(int);
};

// @baa 0x0108cb50
int C_0108cb50::sub_0108cb50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108cb60 {
    int sub_0108cb60(int);
};

// @baa 0x0108cb60
int C_0108cb60::sub_0108cb60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108cb70 {
    int sub_0108cb70(int);
};

// @baa 0x0108cb70
int C_0108cb70::sub_0108cb70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0108cb80 { int a, b, c; C_0108cb80(); };

// @baa 0x0108cb80
C_0108cb80::C_0108cb80() : a(0), b(0), c(0) {}

struct C_0108cb90 { int sub_0108cb90(void); };

// @baa 0x0108cb90
int C_0108cb90::sub_0108cb90(void) { return *(int*)((char*)this + 0); }

struct C_0108cba0 { int sub_0108cba0(void); };

// @baa 0x0108cba0
int C_0108cba0::sub_0108cba0(void) { return *(int*)((char*)this + 0); }

struct C_0108ccc0 { C_0108ccc0* sub_0108ccc0(void); };

// @baa 0x0108ccc0
C_0108ccc0* C_0108ccc0::sub_0108ccc0(void) { return this; }

// @baa 0x0108ccd0
IMPLEMENT_CLASS_AT(UCookPackagesCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnContentCookers.cpp", 8187);

// @baa 0x0108cde0
int UCookPackagesCommandlet::vf_000(void) { return 1; }

// @baa 0x0108cdf0
bool UCookPackagesCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0108ce30
IMPLEMENT_CLASS_AT(UPersistentCookerData, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnContentCookers.cpp", 8606);

// @baa 0x0108cf40
int UPersistentCookerData::vf_000(void) { return 1; }

// @baa 0x0108cf50
bool UPersistentCookerData::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0108cfc0 { int sub_0108cfc0(void); };

// @baa 0x0108cfc0
int C_0108cfc0::sub_0108cfc0(void) { return *(int*)((char*)this + 0); }

struct C_0108cfd0 { int a, b, c; C_0108cfd0(); };

// @baa 0x0108cfd0
C_0108cfd0::C_0108cfd0() : a(0), b(0), c(0) {}

struct C_0108d050 { int a, b, c; C_0108d050(); };

// @baa 0x0108d050
C_0108d050::C_0108d050() : a(0), b(0), c(0) {}

struct C_0108d060 { int a, b, c; C_0108d060(); };

// @baa 0x0108d060
C_0108d060::C_0108d060() : a(0), b(0), c(0) {}

struct C_0108d070 { int a, b, c; C_0108d070(); };

// @baa 0x0108d070
C_0108d070::C_0108d070() : a(0), b(0), c(0) {}

struct C_0108d080 { int a, b, c; C_0108d080(); };

// @baa 0x0108d080
C_0108d080::C_0108d080() : a(0), b(0), c(0) {}

struct C_0108d090 { int sub_0108d090(void); };

// @baa 0x0108d090
int C_0108d090::sub_0108d090(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d110 { int sub_0108d110(void); };

// @baa 0x0108d110
int C_0108d110::sub_0108d110(void) { return *(int*)((char*)this + 0); }

struct C_0108d120 { int sub_0108d120(void); };

// @baa 0x0108d120
int C_0108d120::sub_0108d120(void) { return *(int*)((char*)this + 0); }

struct C_0108d130 { int sub_0108d130(void); };

// @baa 0x0108d130
int C_0108d130::sub_0108d130(void) { return *(int*)((char*)this + 0); }

struct C_0108d140 {
    int sub_0108d140();
};

// @baa 0x0108d140
int C_0108d140::sub_0108d140(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d150 {
    int sub_0108d150();
};

// @baa 0x0108d150
int C_0108d150::sub_0108d150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d160 {
    int sub_0108d160();
};

// @baa 0x0108d160
int C_0108d160::sub_0108d160(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d170 {
    int sub_0108d170();
};

// @baa 0x0108d170
int C_0108d170::sub_0108d170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d180 {
    int sub_0108d180();
};

// @baa 0x0108d180
int C_0108d180::sub_0108d180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d190 {
    int sub_0108d190();
};

// @baa 0x0108d190
int C_0108d190::sub_0108d190(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1a0 {
    int sub_0108d1a0();
};

// @baa 0x0108d1a0
int C_0108d1a0::sub_0108d1a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1b0 {
    int sub_0108d1b0();
};

// @baa 0x0108d1b0
int C_0108d1b0::sub_0108d1b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1c0 {
    int sub_0108d1c0();
};

// @baa 0x0108d1c0
int C_0108d1c0::sub_0108d1c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1d0 {
    int sub_0108d1d0();
};

// @baa 0x0108d1d0
int C_0108d1d0::sub_0108d1d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1e0 {
    int sub_0108d1e0();
};

// @baa 0x0108d1e0
int C_0108d1e0::sub_0108d1e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d1f0 {
    int sub_0108d1f0();
};

// @baa 0x0108d1f0
int C_0108d1f0::sub_0108d1f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d200 {
    int sub_0108d200();
};

// @baa 0x0108d200
int C_0108d200::sub_0108d200(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d210 {
    int sub_0108d210();
};

// @baa 0x0108d210
int C_0108d210::sub_0108d210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d220 {
    int sub_0108d220();
};

// @baa 0x0108d220
int C_0108d220::sub_0108d220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d230 { int sub_0108d230(void); };

// @baa 0x0108d230
int C_0108d230::sub_0108d230(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d240 { int sub_0108d240(void); };

// @baa 0x0108d240
int C_0108d240::sub_0108d240(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d250 { int sub_0108d250(void); };

// @baa 0x0108d250
int C_0108d250::sub_0108d250(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d260 { int sub_0108d260(void); };

// @baa 0x0108d260
int C_0108d260::sub_0108d260(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d270 { int sub_0108d270(void); };

// @baa 0x0108d270
int C_0108d270::sub_0108d270(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d280 { int sub_0108d280(void); };

// @baa 0x0108d280
int C_0108d280::sub_0108d280(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d310 { int sub_0108d310(void); };

// @baa 0x0108d310
int C_0108d310::sub_0108d310(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0108d320
undefined4 sub_0108d320(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_0108d340 { int sub_0108d340(void); };

// @baa 0x0108d340
int C_0108d340::sub_0108d340(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d380 { int sub_0108d380(void); };

// @baa 0x0108d380
int C_0108d380::sub_0108d380(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d390 { int sub_0108d390(void); };

// @baa 0x0108d390
int C_0108d390::sub_0108d390(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d3a0 { int sub_0108d3a0(void); };

// @baa 0x0108d3a0
int C_0108d3a0::sub_0108d3a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d3d0 { int sub_0108d3d0(void); };

// @baa 0x0108d3d0
int C_0108d3d0::sub_0108d3d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d400 { int sub_0108d400(void); };

// @baa 0x0108d400
int C_0108d400::sub_0108d400(void) { return *(int*)((char*)this + 0); }

struct C_0108d480{
void sub_0108d480(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0108d480
void C_0108d480::sub_0108d480(int param_2,int param_3)
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

struct C_0108d5c0 { int sub_0108d5c0(void); };

// @baa 0x0108d5c0
int C_0108d5c0::sub_0108d5c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d5f0 { int sub_0108d5f0(void); };

// @baa 0x0108d5f0
int C_0108d5f0::sub_0108d5f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d620 { int sub_0108d620(void); };

// @baa 0x0108d620
int C_0108d620::sub_0108d620(void) { return *(int*)((char*)this + 0); }

struct C_0108d6c0 { int sub_0108d6c0(void); };

// @baa 0x0108d6c0
int C_0108d6c0::sub_0108d6c0(void) { return *(int*)((char*)this + 0); }

struct C_0108d740 { int sub_0108d740(void); };

// @baa 0x0108d740
int C_0108d740::sub_0108d740(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[52]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0108d750(INT Index) const;
};

// @baa 0x0108d750
const E* S::sub_0108d750(INT Index) const
{
    return &Items(Index);
}

struct C_0108d7d0 { int sub_0108d7d0(void); };

// @baa 0x0108d7d0
int C_0108d7d0::sub_0108d7d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108d800 {
    int sub_0108d800();
};

// @baa 0x0108d800
int C_0108d800::sub_0108d800(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d810 {
    int sub_0108d810();
};

// @baa 0x0108d810
int C_0108d810::sub_0108d810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108d9d0 {
    int sub_0108d9d0(int);
};

// @baa 0x0108d9d0
int C_0108d9d0::sub_0108d9d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108d9e0 {
    int sub_0108d9e0(int);
};

// @baa 0x0108d9e0
int C_0108d9e0::sub_0108d9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0108d9f0
int sub_0108d9f0(int a0) { return a0; }

struct C_0108da80 {
    int sub_0108da80(int);
};

// @baa 0x0108da80
int C_0108da80::sub_0108da80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108da90 {
    int sub_0108da90(int);
};

// @baa 0x0108da90
int C_0108da90::sub_0108da90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108daa0 { int sub_0108daa0(void); };

// @baa 0x0108daa0
int C_0108daa0::sub_0108daa0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108dad0 { int sub_0108dad0(void); };

// @baa 0x0108dad0
int C_0108dad0::sub_0108dad0(void) { return *(int*)((char*)this + 20); }

struct C_0108dae0 {
    int sub_0108dae0(int);
};

// @baa 0x0108dae0
int C_0108dae0::sub_0108dae0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108daf0 {
    int sub_0108daf0(int);
};

// @baa 0x0108daf0
int C_0108daf0::sub_0108daf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108db00 { int sub_0108db00(void); };

// @baa 0x0108db00
int C_0108db00::sub_0108db00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108db30 { int sub_0108db30(void); };

// @baa 0x0108db30
int C_0108db30::sub_0108db30(void) { return *(int*)((char*)this + 20); }

struct C_0108db40 {
    int sub_0108db40(int);
};

// @baa 0x0108db40
int C_0108db40::sub_0108db40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108db50 { int sub_0108db50(void); };

// @baa 0x0108db50
int C_0108db50::sub_0108db50(void) { return *(int*)((char*)this + 20); }

struct C_0108db60 { int sub_0108db60(void); };

// @baa 0x0108db60
int C_0108db60::sub_0108db60(void) { return *(int*)((char*)this + 20); }

struct C_0108dc00 {
    int sub_0108dc00(int);
};

// @baa 0x0108dc00
int C_0108dc00::sub_0108dc00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0108dc50 {
    int sub_0108dc50(int);
};

// @baa 0x0108dc50
int C_0108dc50::sub_0108dc50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0108dc60 {
    int sub_0108dc60(int);
};

// @baa 0x0108dc60
int C_0108dc60::sub_0108dc60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0108dc70 {
    int sub_0108dc70(int);
};

// @baa 0x0108dc70
int C_0108dc70::sub_0108dc70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dc80 {
    int sub_0108dc80(int);
};

// @baa 0x0108dc80
int C_0108dc80::sub_0108dc80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dc90 {
    int sub_0108dc90(int);
};

// @baa 0x0108dc90
int C_0108dc90::sub_0108dc90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dca0 {
    int sub_0108dca0(int);
};

// @baa 0x0108dca0
int C_0108dca0::sub_0108dca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dcb0 {
    int sub_0108dcb0(int);
};

// @baa 0x0108dcb0
int C_0108dcb0::sub_0108dcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dcc0 {
    int sub_0108dcc0(int);
};

// @baa 0x0108dcc0
int C_0108dcc0::sub_0108dcc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dcd0 {
    int sub_0108dcd0(int);
};

// @baa 0x0108dcd0
int C_0108dcd0::sub_0108dcd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dce0 {
    int sub_0108dce0(int);
};

// @baa 0x0108dce0
int C_0108dce0::sub_0108dce0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dcf0 {
    int sub_0108dcf0(int);
};

// @baa 0x0108dcf0
int C_0108dcf0::sub_0108dcf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108dd00 { int sub_0108dd00(void); };

// @baa 0x0108dd00
int C_0108dd00::sub_0108dd00(void) { return *(int*)((char*)this + 20); }

struct C_0108dd10 { int sub_0108dd10(void); };

// @baa 0x0108dd10
int C_0108dd10::sub_0108dd10(void) { return *(int*)((char*)this + 20); }

struct C_0108dd20 { int sub_0108dd20(void); };

// @baa 0x0108dd20
int C_0108dd20::sub_0108dd20(void) { return *(int*)((char*)this + 20); }

struct C_0108dd30 { int sub_0108dd30(void); };

// @baa 0x0108dd30
int C_0108dd30::sub_0108dd30(void) { return *(int*)((char*)this + 20); }

struct C_0108dd40 { int sub_0108dd40(void); };

// @baa 0x0108dd40
int C_0108dd40::sub_0108dd40(void) { return *(int*)((char*)this + 20); }

struct C_0108dd50 { int sub_0108dd50(void); };

// @baa 0x0108dd50
int C_0108dd50::sub_0108dd50(void) { return *(int*)((char*)this + 20); }

struct C_0108dd60 { int sub_0108dd60(void); };

// @baa 0x0108dd60
int C_0108dd60::sub_0108dd60(void) { return *(int*)((char*)this + 20); }

struct C_0108dd70 { int sub_0108dd70(void); };

// @baa 0x0108dd70
int C_0108dd70::sub_0108dd70(void) { return *(int*)((char*)this + 20); }

struct C_0108dd80 { int sub_0108dd80(void); };

// @baa 0x0108dd80
int C_0108dd80::sub_0108dd80(void) { return *(int*)((char*)this + 20); }

struct C_0108dd90 { int sub_0108dd90(void); };

// @baa 0x0108dd90
int C_0108dd90::sub_0108dd90(void) { return *(int*)((char*)this + 20); }

struct C_0108dda0 { int sub_0108dda0(void); };

// @baa 0x0108dda0
int C_0108dda0::sub_0108dda0(void) { return *(int*)((char*)this + 20); }

struct C_0108ddb0 { int sub_0108ddb0(void); };

// @baa 0x0108ddb0
int C_0108ddb0::sub_0108ddb0(void) { return *(int*)((char*)this + 20); }

struct C_0108ddc0 { int sub_0108ddc0(void); };

// @baa 0x0108ddc0
int C_0108ddc0::sub_0108ddc0(void) { return *(int*)((char*)this + 20); }

struct C_0108ddd0 { int sub_0108ddd0(void); };

// @baa 0x0108ddd0
int C_0108ddd0::sub_0108ddd0(void) { return *(int*)((char*)this + 20); }

struct C_0108dde0 { int sub_0108dde0(void); };

// @baa 0x0108dde0
int C_0108dde0::sub_0108dde0(void) { return *(int*)((char*)this + 20); }

struct C_0108ddf0 { int sub_0108ddf0(void); };

// @baa 0x0108ddf0
int C_0108ddf0::sub_0108ddf0(void) { return *(int*)((char*)this + 20); }

struct C_0108de00 { int sub_0108de00(void); };

// @baa 0x0108de00
int C_0108de00::sub_0108de00(void) { return *(int*)((char*)this + 20); }

struct C_0108de10 { int sub_0108de10(void); };

// @baa 0x0108de10
int C_0108de10::sub_0108de10(void) { return *(int*)((char*)this + 20); }

struct C_0108de20 { int sub_0108de20(void); };

// @baa 0x0108de20
int C_0108de20::sub_0108de20(void) { return *(int*)((char*)this + 20); }

struct C_0108de30 { int sub_0108de30(void); };

// @baa 0x0108de30
int C_0108de30::sub_0108de30(void) { return *(int*)((char*)this + 20); }

struct C_0108de40 { int sub_0108de40(void); };

// @baa 0x0108de40
int C_0108de40::sub_0108de40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108de50 { int sub_0108de50(void); };

// @baa 0x0108de50
int C_0108de50::sub_0108de50(void) { return *(int*)((char*)this + 0); }

struct C_0108de60 { int sub_0108de60(void); };

// @baa 0x0108de60
int C_0108de60::sub_0108de60(void) { return *(int*)((char*)this + 20); }

struct C_0108de70 { int sub_0108de70(void); };

// @baa 0x0108de70
int C_0108de70::sub_0108de70(void) { return *(int*)((char*)this + 20); }

struct C_0108de80 { int sub_0108de80(void); };

// @baa 0x0108de80
int C_0108de80::sub_0108de80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108de90 { int sub_0108de90(void); };

// @baa 0x0108de90
int C_0108de90::sub_0108de90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005d88c0(...);
// @baa 0x0108e070
void sub_0108e070(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c3cf8 == 0) {
    g_026c3cf8 = sub_00cc7830(L"Engine");
    sub_00cb00f0();
  }
  sub_005d88c0(g_026c3cf8,param_1,param_2,param_3);
  return;
}

// @baa 0x0108e0b0
void sub_0108e0b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0108e0d0
void sub_0108e0d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e0f0
void sub_0108e0f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e110
void sub_0108e110(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e130
void sub_0108e130(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e150
void sub_0108e150(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e170
void sub_0108e170(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0108e190
void sub_0108e190(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct E_0108e1b0 { BYTE Bytes[60]; };

struct S_0108e1b0 {
    TArray<E_0108e1b0> Items; // 0x00
    const E_0108e1b0* sub_0108e1b0(INT Index) const;
};

// @baa 0x0108e1b0
const E_0108e1b0* S_0108e1b0::sub_0108e1b0(INT Index) const
{
    return &Items(Index);
}

struct S_0108e270 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0108e270(INT Index) const;
};

// @baa 0x0108e270
const DWORD* S_0108e270::sub_0108e270(INT Index) const
{
    return &Items(Index);
}

struct S_0108e2c0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0108e2c0(INT Index) const;
};

// @baa 0x0108e2c0
const DWORD* S_0108e2c0::sub_0108e2c0(INT Index) const
{
    return &Items(Index);
}

struct M_0108e420 { void sub_00544ab0(); };

struct C_0108e420 { char pad[296]; M_0108e420 m; void sub_0108e420(); };

// @baa 0x0108e420
void C_0108e420::sub_0108e420() { m.sub_00544ab0(); }

struct C_0108e4a0 {
    int sub_0108e4a0(int);
};

// @baa 0x0108e4a0
int C_0108e4a0::sub_0108e4a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct E_0108e4b0 { BYTE Bytes[36]; };

struct S_0108e4b0 {
    TArray<E_0108e4b0> Items; // 0x00
    E_0108e4b0* sub_0108e4b0(INT Index);
};

// @baa 0x0108e4b0
E_0108e4b0* S_0108e4b0::sub_0108e4b0(INT Index)
{
    return &Items(Index);
}

struct C_0108e500 {
    int sub_0108e500(int);
};

// @baa 0x0108e500
int C_0108e500::sub_0108e500(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_0108e520 {
    int sub_0108e520();
};

// @baa 0x0108e520
int C_0108e520::sub_0108e520(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e540 {
    int sub_0108e540();
};

// @baa 0x0108e540
int C_0108e540::sub_0108e540(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e560 {
    int sub_0108e560();
};

// @baa 0x0108e560
int C_0108e560::sub_0108e560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e580 {
    int sub_0108e580();
};

// @baa 0x0108e580
int C_0108e580::sub_0108e580(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e5a0 {
    int sub_0108e5a0();
};

// @baa 0x0108e5a0
int C_0108e5a0::sub_0108e5a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e5c0 {
    int sub_0108e5c0();
};

// @baa 0x0108e5c0
int C_0108e5c0::sub_0108e5c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e5e0 {
    int sub_0108e5e0();
};

// @baa 0x0108e5e0
int C_0108e5e0::sub_0108e5e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108e600 {
    int sub_0108e600(int);
};

// @baa 0x0108e600
int C_0108e600::sub_0108e600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0108e620 {
    int sub_0108e620(int);
};

// @baa 0x0108e620
int C_0108e620::sub_0108e620(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108e630 {
    int sub_0108e630(int);
};

// @baa 0x0108e630
int C_0108e630::sub_0108e630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108e640 {
    int sub_0108e640(int);
};

// @baa 0x0108e640
int C_0108e640::sub_0108e640(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0108e6a0 {
    int sub_0108e6a0(int);
};

// @baa 0x0108e6a0
int C_0108e6a0::sub_0108e6a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0108e6b0 {
    int sub_0108e6b0(int);
};

// @baa 0x0108e6b0
int C_0108e6b0::sub_0108e6b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0108e6c0 {
    int sub_0108e6c0(int);
};

// @baa 0x0108e6c0
int C_0108e6c0::sub_0108e6c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_0108ef70 {
    int sub_0108ef70(int);
    int sub_0108d0a0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0108ef70
int C_0108ef70::sub_0108ef70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0108ef70 *)(this))->sub_0108d0a0(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_0108efa0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0108efa0(INT Index);
};

// @baa 0x0108efa0
DWORD* S_0108efa0::sub_0108efa0(INT Index)
{
    return &Items(Index);
}

struct S_0108eff0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0108eff0(INT Index);
};

// @baa 0x0108eff0
DWORD* S_0108eff0::sub_0108eff0(INT Index)
{
    return &Items(Index);
}

struct S_0108f040 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0108f040(INT Index);
};

// @baa 0x0108f040
DWORD* S_0108f040::sub_0108f040(INT Index)
{
    return &Items(Index);
}

struct S_0108f090 {
    TArray<E> Items; // 0x00
    E* sub_0108f090(INT Index);
};

// @baa 0x0108f090
E* S_0108f090::sub_0108f090(INT Index)
{
    return &Items(Index);
}

struct C_0108f0e0 {
    int sub_0108f0e0(int);
};

// @baa 0x0108f0e0
int C_0108f0e0::sub_0108f0e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0108f100 {
    int sub_0108f100(int);
};

// @baa 0x0108f100
int C_0108f100::sub_0108f100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0108f110 {
    int sub_0108f110(int);
};

// @baa 0x0108f110
int C_0108f110::sub_0108f110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0108f120 {
    int sub_0108f120(int);
};

// @baa 0x0108f120
int C_0108f120::sub_0108f120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108f130 {
    int sub_0108f130(int);
};

// @baa 0x0108f130
int C_0108f130::sub_0108f130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0108f140 { int sub_0108f140(void); };

// @baa 0x0108f140
int C_0108f140::sub_0108f140(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108f1d0 {
    int sub_0108f1d0(undefined4 *, int);
    int sub_0108d480(int, int);
};

// @baa 0x0108f1d0
int C_0108f1d0::sub_0108f1d0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0108f1d0 *)(this))->sub_0108d480(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_0108f260 {
    int sub_0108f260(int);
};

// @baa 0x0108f260
int C_0108f260::sub_0108f260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0108f270
void __stdcall sub_0108f270(int a0, int a1) {  }

struct C_0108f280 { int sub_0108f280(void); };

// @baa 0x0108f280
int C_0108f280::sub_0108f280(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108f370 {
    int sub_0108f370(int);
};

// @baa 0x0108f370
int C_0108f370::sub_0108f370(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0108f380
void __stdcall sub_0108f380(int a0, int a1) {  }

struct C_0108f3f0 {
    int sub_0108f3f0(int);
};

// @baa 0x0108f3f0
int C_0108f3f0::sub_0108f3f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0108f400
void __stdcall sub_0108f400(int a0, int a1) {  }

struct C_0108f410 {
    int sub_0108f410(int);
};

// @baa 0x0108f410
int C_0108f410::sub_0108f410(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0108f420 {
    int sub_0108f420();
};

// @baa 0x0108f420
int C_0108f420::sub_0108f420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f440 {
    int sub_0108f440();
};

// @baa 0x0108f440
int C_0108f440::sub_0108f440(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f460 {
    int sub_0108f460();
};

// @baa 0x0108f460
int C_0108f460::sub_0108f460(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f480 {
    int sub_0108f480();
};

// @baa 0x0108f480
int C_0108f480::sub_0108f480(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f4a0 {
    int sub_0108f4a0();
};

// @baa 0x0108f4a0
int C_0108f4a0::sub_0108f4a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_0108f4b0 {
    int sub_0108f4b0();
};

// @baa 0x0108f4b0
int C_0108f4b0::sub_0108f4b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct S_0108f4c0 { int sub_00544d40(int); };

// @baa 0x0108f4c0
int sub_0108f4c0(S_0108f4c0 *s, int a) { return s->sub_00544d40(a); }

struct S_0108f4d0 { int sub_00544d40(int); };

// @baa 0x0108f4d0
int sub_0108f4d0(S_0108f4d0 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f4e0 {
    int sub_0108f4e0(int);
};

// @baa 0x0108f4e0
int C_0108f4e0::sub_0108f4e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct S_0108f500 { int sub_00544d40(int); };

// @baa 0x0108f500
int sub_0108f500(S_0108f500 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f510 {
    int sub_0108f510(int);
};

// @baa 0x0108f510
int C_0108f510::sub_0108f510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0108f520 { int sub_00544d40(int); };

// @baa 0x0108f520
int sub_0108f520(S_0108f520 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f530 {
    int sub_0108f530(int);
};

// @baa 0x0108f530
int C_0108f530::sub_0108f530(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0108f540 { int sub_00544d40(int); };

// @baa 0x0108f540
int sub_0108f540(S_0108f540 *s, int a) { return s->sub_00544d40(a); }

struct S_0108f550 { int sub_00544d40(int); };

// @baa 0x0108f550
int sub_0108f550(S_0108f550 *s, int a) { return s->sub_00544d40(a); }

struct S_0108f560 { int sub_00544d40(int); };

// @baa 0x0108f560
int sub_0108f560(S_0108f560 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f5a0 {
    int sub_0108f5a0(int);
};

// @baa 0x0108f5a0
int C_0108f5a0::sub_0108f5a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108f620 {
    int sub_0108f620(int);
};

// @baa 0x0108f620
int C_0108f620::sub_0108f620(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct S_0108f660 { int sub_00544d40(int); };

// @baa 0x0108f660
int sub_0108f660(S_0108f660 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f6c0 {
    int sub_0108f6c0(int);
};

// @baa 0x0108f6c0
int C_0108f6c0::sub_0108f6c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0108f6d0 { int sub_0108f6d0(void); };

// @baa 0x0108f6d0
int C_0108f6d0::sub_0108f6d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0108f6e0 {
    int sub_0108f6e0(int);
};

// @baa 0x0108f6e0
int C_0108f6e0::sub_0108f6e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct S_0108f6f0 { int sub_00544d40(int); };

// @baa 0x0108f6f0
int sub_0108f6f0(S_0108f6f0 *s, int a) { return s->sub_00544d40(a); }

struct C_0108f700 {
    int sub_0108f700();
};

// @baa 0x0108f700
int C_0108f700::sub_0108f700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0108f720 {
    int sub_0108f720();
};

// @baa 0x0108f720
int C_0108f720::sub_0108f720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_005413d0(...);
// @baa 0x0108f760
void sub_0108f760(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108f770 {
    int sub_0108f770(int);
};

// @baa 0x0108f770
int C_0108f770::sub_0108f770(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0108f780 {
    int sub_0108f780(int);
};

// @baa 0x0108f780
int C_0108f780::sub_0108f780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108f790 {
    int sub_0108f790();
};

// @baa 0x0108f790
int C_0108f790::sub_0108f790(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f7b0 {
    int sub_0108f7b0();
};

// @baa 0x0108f7b0
int C_0108f7b0::sub_0108f7b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x0108f7f0
void sub_0108f7f0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108f800 {
    int sub_0108f800(int);
};

// @baa 0x0108f800
int C_0108f800::sub_0108f800(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0108f810 {
    int sub_0108f810(int);
};

// @baa 0x0108f810
int C_0108f810::sub_0108f810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108f820 {
    int sub_0108f820();
};

// @baa 0x0108f820
int C_0108f820::sub_0108f820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f840 {
    int sub_0108f840();
};

// @baa 0x0108f840
int C_0108f840::sub_0108f840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0108f850 {
    int sub_0108f850(int);
};

// @baa 0x0108f850
int C_0108f850::sub_0108f850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108f860 {
    int sub_0108f860();
};

// @baa 0x0108f860
int C_0108f860::sub_0108f860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108f880 {
    int sub_0108f880();
};

// @baa 0x0108f880
int C_0108f880::sub_0108f880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_0108db70();
// @baa 0x0108f910
void sub_0108f910(void) { sub_0108db70(); }

struct C_0108fa20 {
    int sub_0108fa20(int);
};

// @baa 0x0108fa20
int C_0108fa20::sub_0108fa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0108fca0 {
    int sub_0108fca0(int);
};

// @baa 0x0108fca0
int C_0108fca0::sub_0108fca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0108fce0 {
    int sub_0108fce0(int);
};

// @baa 0x0108fce0
int C_0108fce0::sub_0108fce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0108fd70 {
    int sub_0108fd70(int);
};

// @baa 0x0108fd70
int C_0108fd70::sub_0108fd70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108fd80 {
    int sub_0108fd80(int);
};

// @baa 0x0108fd80
int C_0108fd80::sub_0108fd80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108fdc0 {
    int sub_0108fdc0(int);
};

// @baa 0x0108fdc0
int C_0108fdc0::sub_0108fdc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0108fdd0
void sub_0108fdd0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108fde0 {
    int sub_0108fde0(int);
};

// @baa 0x0108fde0
int C_0108fde0::sub_0108fde0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x0108fe20
void sub_0108fe20(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108fe30 {
    int sub_0108fe30(int);
};

// @baa 0x0108fe30
int C_0108fe30::sub_0108fe30(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0108fe40 {
    int sub_0108fe40(int);
};

// @baa 0x0108fe40
int C_0108fe40::sub_0108fe40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108fe50 {
    int sub_0108fe50();
};

// @baa 0x0108fe50
int C_0108fe50::sub_0108fe50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0108fe60 {
    int sub_0108fe60(int);
};

// @baa 0x0108fe60
int C_0108fe60::sub_0108fe60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108fe70 {
    int sub_0108fe70(int);
};

// @baa 0x0108fe70
int C_0108fe70::sub_0108fe70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108feb0 {
    int sub_0108feb0(int);
};

// @baa 0x0108feb0
int C_0108feb0::sub_0108feb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0108fec0
void sub_0108fec0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108fed0 {
    int sub_0108fed0(int);
};

// @baa 0x0108fed0
int C_0108fed0::sub_0108fed0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x0108ff10
void sub_0108ff10(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108ff20 {
    int sub_0108ff20(int);
};

// @baa 0x0108ff20
int C_0108ff20::sub_0108ff20(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0108ff30 {
    int sub_0108ff30(int);
};

// @baa 0x0108ff30
int C_0108ff30::sub_0108ff30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0108ff40 {
    int sub_0108ff40();
};

// @baa 0x0108ff40
int C_0108ff40::sub_0108ff40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x0108ff80
void sub_0108ff80(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0108ff90 {
    int sub_0108ff90(int);
};

// @baa 0x0108ff90
int C_0108ff90::sub_0108ff90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0108ffa0 {
    int sub_0108ffa0();
};

// @baa 0x0108ffa0
int C_0108ffa0::sub_0108ffa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0108ffb0 {
    int sub_0108ffb0();
};

// @baa 0x0108ffb0
int C_0108ffb0::sub_0108ffb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0108ffd0 {
    int sub_0108ffd0();
};

// @baa 0x0108ffd0
int C_0108ffd0::sub_0108ffd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0108ffe0 {
    int sub_0108ffe0();
};

// @baa 0x0108ffe0
int C_0108ffe0::sub_0108ffe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090000 {
    int sub_01090000();
};

// @baa 0x01090000
int C_01090000::sub_01090000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090010 {
    int sub_01090010();
};

// @baa 0x01090010
int C_01090010::sub_01090010(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090030 {
    int sub_01090030();
};

// @baa 0x01090030
int C_01090030::sub_01090030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090040 {
    int sub_01090040();
};

// @baa 0x01090040
int C_01090040::sub_01090040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090060 {
    int sub_01090060();
};

// @baa 0x01090060
int C_01090060::sub_01090060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090070 {
    int sub_01090070();
};

// @baa 0x01090070
int C_01090070::sub_01090070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090090 {
    int sub_01090090();
};

// @baa 0x01090090
int C_01090090::sub_01090090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_010900a0 {
    int sub_010900a0();
};

// @baa 0x010900a0
int C_010900a0::sub_010900a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010900c0 {
    int sub_010900c0(int);
};

// @baa 0x010900c0
int C_010900c0::sub_010900c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_010900d0 {
    int sub_010900d0(int);
};

// @baa 0x010900d0
int C_010900d0::sub_010900d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_010900e0 {
    int sub_010900e0(int);
};

// @baa 0x010900e0
int C_010900e0::sub_010900e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_010900f0 {
    int sub_010900f0(int);
};

// @baa 0x010900f0
int C_010900f0::sub_010900f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01090100 {
    int sub_01090100(int);
};

// @baa 0x01090100
int C_01090100::sub_01090100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01090110 {
    int sub_01090110(int);
};

// @baa 0x01090110
int C_01090110::sub_01090110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_01090130 {
    int sub_01090130();
};

// @baa 0x01090130
int C_01090130::sub_01090130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090150 {
    int sub_01090150();
};

// @baa 0x01090150
int C_01090150::sub_01090150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090170 {
    int sub_01090170();
};

// @baa 0x01090170
int C_01090170::sub_01090170(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090190 {
    int sub_01090190();
};

// @baa 0x01090190
int C_01090190::sub_01090190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_010901b0 {
    int sub_010901b0();
};

// @baa 0x010901b0
int C_010901b0::sub_010901b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010901d0 {
    int sub_010901d0();
};

// @baa 0x010901d0
int C_010901d0::sub_010901d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010901f0 {
    int sub_010901f0();
};

// @baa 0x010901f0
int C_010901f0::sub_010901f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090210 {
    int sub_01090210();
};

// @baa 0x01090210
int C_01090210::sub_01090210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090230 {
    int sub_01090230();
};

// @baa 0x01090230
int C_01090230::sub_01090230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01090240 {
    int sub_01090240();
};

// @baa 0x01090240
int C_01090240::sub_01090240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090260 {
    int sub_01090260();
};

// @baa 0x01090260
int C_01090260::sub_01090260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01090270 {
    int sub_01090270();
};

// @baa 0x01090270
int C_01090270::sub_01090270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090290 {
    int sub_01090290();
};

// @baa 0x01090290
int C_01090290::sub_01090290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_010902a0 {
    int sub_010902a0();
};

// @baa 0x010902a0
int C_010902a0::sub_010902a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010902c0 {
    int sub_010902c0();
};

// @baa 0x010902c0
int C_010902c0::sub_010902c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010902e0 {
    int sub_010902e0();
};

// @baa 0x010902e0
int C_010902e0::sub_010902e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_010902f0 {
    int sub_010902f0();
};

// @baa 0x010902f0
int C_010902f0::sub_010902f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090310 {
    int sub_01090310();
};

// @baa 0x01090310
int C_01090310::sub_01090310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090320 {
    int sub_01090320();
};

// @baa 0x01090320
int C_01090320::sub_01090320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090340 {
    int sub_01090340();
};

// @baa 0x01090340
int C_01090340::sub_01090340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090350 {
    int sub_01090350();
};

// @baa 0x01090350
int C_01090350::sub_01090350(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090370 {
    int sub_01090370();
};

// @baa 0x01090370
int C_01090370::sub_01090370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090380 {
    int sub_01090380();
};

// @baa 0x01090380
int C_01090380::sub_01090380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010903a0 {
    int sub_010903a0();
};

// @baa 0x010903a0
int C_010903a0::sub_010903a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_010903b0 {
    int sub_010903b0();
};

// @baa 0x010903b0
int C_010903b0::sub_010903b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010903d0 {
    int sub_010903d0();
};

// @baa 0x010903d0
int C_010903d0::sub_010903d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010903f0 {
    int sub_010903f0();
};

// @baa 0x010903f0
int C_010903f0::sub_010903f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090400 {
    int sub_01090400();
};

// @baa 0x01090400
int C_01090400::sub_01090400(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090420 {
    int sub_01090420();
};

// @baa 0x01090420
int C_01090420::sub_01090420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01090430 {
    int sub_01090430();
};

// @baa 0x01090430
int C_01090430::sub_01090430(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01090450 {
    int sub_01090450();
};

// @baa 0x01090450
int C_01090450::sub_01090450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_0108eca0();
// @baa 0x010906e0
void sub_010906e0(void) { sub_0108eca0(); }

struct C_010906f0 {
    undefined4 * sub_010906f0();
    int sub_00417ef0(int);
};

// @baa 0x010906f0
undefined4 * C_010906f0::sub_010906f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  ((C_010906f0 *)(((char *)this + 4)))->sub_00417ef0((int)(&g_01e3f3dc));
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  return param_1;
}

struct M_01090890 { void sub_0040fcc0(); };

struct C_01090890 { char pad[4]; M_01090890 m; void sub_01090890(); };

// @baa 0x01090890
void C_01090890::sub_01090890() { m.sub_0040fcc0(); }

void sub_0040fcc0();
// @baa 0x010908a0
void sub_010908a0(void) { sub_0040fcc0(); }

struct M_010908e0 { void sub_00549160(); };

struct C_010908e0 { char pad[4]; M_010908e0 m; void sub_010908e0(); };

// @baa 0x010908e0
void C_010908e0::sub_010908e0() { m.sub_00549160(); }

// @baa 0x01090950
void __stdcall sub_01090950(int a0, int a1) {  }

struct C_01090960 {
    int sub_01090960();
};

// @baa 0x01090960
int C_01090960::sub_01090960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_01090980 {
    int sub_01090980();
};

// @baa 0x01090980
int C_01090980::sub_01090980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01090990 {
    int sub_01090990();
};

// @baa 0x01090990
int C_01090990::sub_01090990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_010909a0 {
    int sub_010909a0();
};

// @baa 0x010909a0
int C_010909a0::sub_010909a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_010909b0 {
    int sub_010909b0(int);
};

// @baa 0x010909b0
int C_010909b0::sub_010909b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_010909c0 {
    int sub_010909c0(int);
};

// @baa 0x010909c0
int C_010909c0::sub_010909c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_010909d0 {
    int sub_010909d0(int);
};

// @baa 0x010909d0
int C_010909d0::sub_010909d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_01090b20 {
    FString sub_01090b20();
};

// @baa 0x01090b20
FString C_01090b20::sub_01090b20()
{
    return TEXT("GlobalPersistentCookerData.upk");
}

extern "C" void* memcpy(void*,const void*,unsigned);
extern int g_0267609c, g_026760a0;
void sub_005c7ec0(void);
void sub_005ea8a0(void);
struct S1 { int* a; int n; int m; ~S1(){ sub_0040fcc0(); } void sub_0040fcc0(); };

struct S2 { int* a; int n; int m; S2(const S1& s){ sub_00417dc0(s.n); if (n) { int* src = s.a; memcpy(a, src, n*2);} } ~S2(){ sub_0040fcc0(); } void sub_0040fcc0(); int sub_00417dc0(int); S1 sub_00640140(int); };

struct F { int k; int v; };

struct E_01090de0 { char pad[0x14]; F f; char pad2[12]; };

struct Obj { char pad[0xb0]; TArray<E_01090de0> arr; S1 sub_005bbd90(int); };

Obj* sub_005e9b90(int,int,int,int,int);
struct Dst { void sub_006345c0(S1*); };

struct C_01090de0 { char pad[0x108]; Dst d; int x; void sub_01090de0(int a); };

// @baa 0x01090de0
void C_01090de0::sub_01090de0(int a){
  if (((g_0267609c & 0xc) || g_026760a0) && (*(int*)(a+0x74) & 0x20000) && x) {
    sub_005c7ec0();
    Obj* o = sub_005e9b90(a,0,0,0,0);
    sub_005ea8a0();
    for (int i=0;i<o->arr.Num();i++){
      F* f = &o->arr(i).f;
      if (f->k != 0x2a2 || f->v) {
        S1 t3 = S2(o->sub_005bbd90(i)).sub_00640140(1);
        d.sub_006345c0(&t3);
      }
    }
  }
}

struct T_010911c0;
// @baa 0x010911c0
template INT TArray<T_010911c0*>::RemoveItem(T_010911c0* const&);

struct C_01091370 { int sub_01091370(void); };

// @baa 0x01091370
int C_01091370::sub_01091370(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01091380 { void* Data; int Num; int Max; void sub_01091380(); };

// @baa 0x01091380
void C_01091380::sub_01091380() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01091510 { int sub_01091510(void); };

// @baa 0x01091510
int C_01091510::sub_01091510(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01091520 { void* Data; int Num; int Max; void sub_01091520(); };

// @baa 0x01091520
void C_01091520::sub_01091520() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01091660 { void* Data; int Num; int Max; void sub_01091660(); };

// @baa 0x01091660
void C_01091660::sub_01091660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01091770 {
    int sub_01091770();
};

// @baa 0x01091770
int C_01091770::sub_01091770(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01091790 {
    int sub_01091790();
};

// @baa 0x01091790
int C_01091790::sub_01091790(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010917b0 {
    int sub_010917b0();
};

// @baa 0x010917b0
int C_010917b0::sub_010917b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010917d0 {
    int sub_010917d0();
};

// @baa 0x010917d0
int C_010917d0::sub_010917d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010917f0 {
    int sub_010917f0();
};

// @baa 0x010917f0
int C_010917f0::sub_010917f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01091810 {
    int sub_01091810();
};

// @baa 0x01091810
int C_01091810::sub_01091810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01091830 {
    int sub_01091830(int);
};

// @baa 0x01091830
int C_01091830::sub_01091830(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_01091840 {
    int sub_01091840(int);
};

// @baa 0x01091840
int C_01091840::sub_01091840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01091850 {
    int sub_01091850(int);
};

// @baa 0x01091850
int C_01091850::sub_01091850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_01091910 {
    int sub_01091910(int);
};

// @baa 0x01091910
int C_01091910::sub_01091910(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01091a40
undefined4 * UTexture2D::sub_01091a40(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = 0xffffffff;
  return param_1;
}

// @baa 0x01091a80
int UTexture2D::sub_01091a80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x01091a90
int UTexture2D::sub_01091a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x01091ab0
int UTexture2D::sub_01091ab0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01091ac0
int UTexture2D::sub_01091ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01091ae0
int UTexture2D::sub_01091ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01091af0
int UTexture2D::sub_01091af0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01091b00
int UTexture2D::sub_01091b00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01091b20
int UTexture2D::sub_01091b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01091b30
int UTexture2D::sub_01091b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01091b40
int UTexture2D::sub_01091b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01091c50
int UTexture2D::sub_01091c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01091c60
int UTexture2D::sub_01091c60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x01091c70
int UTexture2D::sub_01091c70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01091c90
int UTexture2D::sub_01091c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01091ca0
int UTexture2D::sub_01091ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

int sub_0053dfa0(...);
int sub_00fa5ab0(void);
// @baa 0x01091e50
undefined4 UTexture2D::sub_01091e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa5ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01091e70
int UTexture2D::sub_01091e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x01091f20
undefined4 * UTexture2D::sub_01091f20(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = puVar1[3];
  param_1[7] = puVar1[4];
  param_1[8] = puVar1[5];
  return param_1;
}

struct C_view_01091f80 {
    int sub_01091f20(int);
};

// @baa 0x01091f80
int UTexture2D::sub_01091f80(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_01091f80 *)(this))->sub_01091f20(param_2);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}

// @baa 0x01091fa0
int UTexture2D::sub_01091fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x01092050
undefined4 * UTexture2D::sub_01092050(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = puVar1[3];
  param_1[7] = puVar1[4];
  return param_1;
}

struct C_view_010920b0 {
    int sub_01092050(int);
};

// @baa 0x010920b0
int UTexture2D::sub_010920b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_010920b0 *)(this))->sub_01092050(param_2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

struct C_view_010923b0 {
    int sub_01092330(int);
};

// @baa 0x010923b0
int UTexture2D::sub_010923b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_010923b0 *)(this))->sub_01092330(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

// @baa 0x01092470
int UTexture2D::sub_01092470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x010925a0
int UTexture2D::sub_010925a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01092790
int UTexture2D::sub_01092790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_view_010928d0 {
    int sub_01092850(int);
};

// @baa 0x010928d0
int UTexture2D::sub_010928d0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_010928d0 *)(this))->sub_01092850(param_2);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return param_1;
}

// @baa 0x010928f0
int UTexture2D::sub_010928f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

// @baa 0x01092900
int UTexture2D::sub_01092900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x01092990
int UTexture2D::sub_01092990(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_01092a90 {
    int sub_01092a10(int, int);
};

// @baa 0x01092a90
int UTexture2D::sub_01092a90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01092a90 *)(this))->sub_01092a10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x01092b30
int UTexture2D::sub_01092b30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092b40
int UTexture2D::sub_01092b40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092b50
int UTexture2D::sub_01092b50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092be0
int UTexture2D::sub_01092be0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_01092ce0 {
    int sub_01092c60(int, int);
};

// @baa 0x01092ce0
int UTexture2D::sub_01092ce0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01092ce0 *)(this))->sub_01092c60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x01092d80
int UTexture2D::sub_01092d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092d90
int UTexture2D::sub_01092d90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092da0
int UTexture2D::sub_01092da0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092e30
int UTexture2D::sub_01092e30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01092ef0
int UTexture2D::sub_01092ef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

// @baa 0x01092f40
int UTexture2D::sub_01092f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

// @baa 0x01092f50
int UTexture2D::sub_01092f50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

// @baa 0x01092f60
int UTexture2D::sub_01092f60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x01092f70
int UTexture2D::sub_01092f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x01092f80
int UTexture2D::sub_01092f80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x01092f90
int UTexture2D::sub_01092f90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x01092fa0
int UTexture2D::sub_01092fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x010931a0
int UTexture2D::sub_010931a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_010931b0 { int a, b, c; C_010931b0(); };

// @baa 0x010931b0
C_010931b0::C_010931b0() : a(0), b(0), c(0) {}

struct C_010931c0 { int a, b, c; C_010931c0(); };

// @baa 0x010931c0
C_010931c0::C_010931c0() : a(0), b(0), c(0) {}

struct C_010931d0 { int a, b, c; C_010931d0(); };

// @baa 0x010931d0
C_010931d0::C_010931d0() : a(0), b(0), c(0) {}

// @baa 0x010931e0
int UTexture2D::sub_010931e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

// @baa 0x010931f0
int UTexture2D::sub_010931f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x01093200
int UTexture2D::sub_01093200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x01093210
int UTexture2D::sub_01093210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x01093220
int UTexture2D::sub_01093220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x01093230
int UTexture2D::sub_01093230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x38;
}

// @baa 0x01093250
int UTexture2D::sub_01093250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

// @baa 0x01093260
int UTexture2D::sub_01093260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x01093270
int UTexture2D::sub_01093270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

int sub_0101b440(void);
// @baa 0x01093680
undefined4 UObject::sub_01093680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0101b440();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010936a0 {
    undefined4 sub_010936a0(byte);
    int sub_00549160();
};

// @baa 0x010936a0
undefined4 C_010936a0::sub_010936a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010936a0 *)(((char *)this + 4)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_010908f0(void);
// @baa 0x010936d0
undefined4 UTexture2D::sub_010936d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010908f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_010938f0 {
    int sub_010936f0(int);
};

// @baa 0x010938f0
int UObject::sub_010938f0(int param_2)
{
    int param_1 = (int)this;
  ((C_view_010938f0 *)(this))->sub_010936f0(param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}

// @baa 0x01093920
void sub_01093920(void) { sub_0108eca0(); }

struct C_01093980 {
    undefined4 sub_01093980(byte);
    int sub_0040fcc0();
};

// @baa 0x01093980
undefined4 C_01093980::sub_01093980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01093980 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010939b0 { void* Data; int Num; int Max; void sub_010939b0(); };

// @baa 0x010939b0
void C_010939b0::sub_010939b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_01093a60 { void sub_00549160(); };

struct C_01093a60 { char pad[4]; M_01093a60 m; void sub_01093a60(); };

// @baa 0x01093a60
void C_01093a60::sub_01093a60() { m.sub_00549160(); }

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

struct TConstSetBitIterator_01093ad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093ad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093ad0& operator++();
};

TConstSetBitIterator_01093ad0::TConstSetBitIterator_01093ad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093ad0
TConstSetBitIterator_01093ad0& TConstSetBitIterator_01093ad0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01093af0 {
    int sub_01093af0();
};

// @baa 0x01093af0
int C_01093af0::sub_01093af0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct TConstSetBitIterator_01093b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093b00& operator++();
};

TConstSetBitIterator_01093b00::TConstSetBitIterator_01093b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093b00
TConstSetBitIterator_01093b00& TConstSetBitIterator_01093b00::operator++()
{
    It.Advance();
    return *this;
}

struct C_01093b20 {
    int sub_01093b20();
};

// @baa 0x01093b20
int C_01093b20::sub_01093b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct TConstSetBitIterator_01093b30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093b30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093b30& operator++();
};

TConstSetBitIterator_01093b30::TConstSetBitIterator_01093b30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093b30
TConstSetBitIterator_01093b30& TConstSetBitIterator_01093b30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093b50& operator++();
};

TConstSetBitIterator_01093b50::TConstSetBitIterator_01093b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093b50
TConstSetBitIterator_01093b50& TConstSetBitIterator_01093b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093b70& operator++();
};

TConstSetBitIterator_01093b70::TConstSetBitIterator_01093b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093b70
TConstSetBitIterator_01093b70& TConstSetBitIterator_01093b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093b90& operator++();
};

TConstSetBitIterator_01093b90::TConstSetBitIterator_01093b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093b90
TConstSetBitIterator_01093b90& TConstSetBitIterator_01093b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093bb0& operator++();
};

TConstSetBitIterator_01093bb0::TConstSetBitIterator_01093bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093bb0
TConstSetBitIterator_01093bb0& TConstSetBitIterator_01093bb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01093bd0 {
    int sub_01093bd0();
};

// @baa 0x01093bd0
int C_01093bd0::sub_01093bd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x38;
}

struct TConstSetBitIterator_01093bf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093bf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093bf0& operator++();
};

TConstSetBitIterator_01093bf0::TConstSetBitIterator_01093bf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093bf0
TConstSetBitIterator_01093bf0& TConstSetBitIterator_01093bf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093c40& operator++();
};

TConstSetBitIterator_01093c40::TConstSetBitIterator_01093c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093c40
TConstSetBitIterator_01093c40& TConstSetBitIterator_01093c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093c90& operator++();
};

TConstSetBitIterator_01093c90::TConstSetBitIterator_01093c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093c90
TConstSetBitIterator_01093c90& TConstSetBitIterator_01093c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093ce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093ce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093ce0& operator++();
};

TConstSetBitIterator_01093ce0::TConstSetBitIterator_01093ce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093ce0
TConstSetBitIterator_01093ce0& TConstSetBitIterator_01093ce0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093d30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093d30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093d30& operator++();
};

TConstSetBitIterator_01093d30::TConstSetBitIterator_01093d30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093d30
TConstSetBitIterator_01093d30& TConstSetBitIterator_01093d30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093d80& operator++();
};

TConstSetBitIterator_01093d80::TConstSetBitIterator_01093d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093d80
TConstSetBitIterator_01093d80& TConstSetBitIterator_01093d80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01093dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01093dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01093dd0& operator++();
};

TConstSetBitIterator_01093dd0::TConstSetBitIterator_01093dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01093dd0
TConstSetBitIterator_01093dd0& TConstSetBitIterator_01093dd0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010952b0 {
    int sub_010952b0(int);
    int sub_01091920(int, int);
};

// @baa 0x010952b0
int C_010952b0::sub_010952b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010952b0 *)(this))->sub_01091920((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

// @baa 0x01095360
int UTexture2D::sub_01095360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01095380
int UTexture2D::sub_01095380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01095390
int UTexture2D::sub_01095390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x01095400
int UTexture2D::sub_01095400(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01095420
int UTexture2D::sub_01095420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01095430
int UTexture2D::sub_01095430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x01095440
int UTexture2D::sub_01095440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01095450
int UTexture2D::sub_01095450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

extern TArray<int> g_026a1ca4;
struct C_01095560 {
    int sub_01095560();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01095560
int C_01095560::sub_01095560()
{
    return g_026a1ca4(Index);
}

// @baa 0x010955c0
int UTexture2D::sub_010955c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

// @baa 0x010955d0
int UTexture2D::sub_010955d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x010955f0
int UTexture2D::sub_010955f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01095600
int UTexture2D::sub_01095600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x01095620
int UTexture2D::sub_01095620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x1c;
}

struct C_view_01095640 {
    int sub_005a9910(int, int);
};

// @baa 0x01095640
int UTexture2D::sub_01095640(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01095640 *)(this))->sub_005a9910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_view_01095680 {
    int sub_010920d0(int, int);
};

// @baa 0x01095680
int UTexture2D::sub_01095680(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01095680 *)(this))->sub_010920d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_view_010956c0 {
    int sub_01092520(int, int);
};

// @baa 0x010956c0
int UTexture2D::sub_010956c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_010956c0 *)(this))->sub_01092520((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_view_010956f0 {
    int sub_01092650(int, int);
};

// @baa 0x010956f0
int UTexture2D::sub_010956f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_010956f0 *)(this))->sub_01092650((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_01095720 {
    int sub_010926d0(int, int);
};

// @baa 0x01095720
int UTexture2D::sub_01095720(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01095720 *)(this))->sub_010926d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_010958a0 {
    int sub_010958a0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x010958a0
int C_010958a0::sub_010958a0()
{
    return g_026a1ca4(Index);
}

struct TConstSetBitIterator_01095900 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01095900(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01095900& operator++();
};

TConstSetBitIterator_01095900::TConstSetBitIterator_01095900(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01095900
TConstSetBitIterator_01095900& TConstSetBitIterator_01095900::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01095920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01095920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01095920& operator++();
};

TConstSetBitIterator_01095920::TConstSetBitIterator_01095920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01095920
TConstSetBitIterator_01095920& TConstSetBitIterator_01095920::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01095940
int UTexture2D::sub_01095940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct TConstSetBitIterator_01095950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01095950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01095950& operator++();
};

TConstSetBitIterator_01095950::TConstSetBitIterator_01095950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01095950
TConstSetBitIterator_01095950& TConstSetBitIterator_01095950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01095970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01095970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01095970& operator++();
};

TConstSetBitIterator_01095970::TConstSetBitIterator_01095970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01095970
TConstSetBitIterator_01095970& TConstSetBitIterator_01095970::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01095990
int UTexture2D::sub_01095990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

int sub_01092eb0(void);
// @baa 0x01095b80
undefined4 UTexture2D::sub_01095b80(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01092eb0();
  return param_1;
}

// @baa 0x01095b90
int UTexture2D::sub_01095b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x01095be0
int UTexture2D::sub_01095be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

int sub_01092f00(void);
// @baa 0x01095c30
undefined4 UTexture2D::sub_01095c30(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01092f00();
  return param_1;
}

// @baa 0x01095c40
int UTexture2D::sub_01095c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x01095c90
int UTexture2D::sub_01095c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_01095f70 {
    undefined4 * sub_01095f70(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x01095f70
undefined4 * C_01095f70::sub_01095f70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01095f70 *)(((char *)this + 4)))->sub_00551820(param_2[1]);
  return param_1;
}

struct C_01095f90 {
    undefined4 * sub_01095f90(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x01095f90
undefined4 * C_01095f90::sub_01095f90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01095f90 *)(((char *)this + 4)))->sub_00551820(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_01096050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096050& operator++();
};

TConstSetBitIterator_01096050::TConstSetBitIterator_01096050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096050
TConstSetBitIterator_01096050& TConstSetBitIterator_01096050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096070& operator++();
};

TConstSetBitIterator_01096070::TConstSetBitIterator_01096070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096070
TConstSetBitIterator_01096070& TConstSetBitIterator_01096070::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096090& operator++();
};

TConstSetBitIterator_01096090::TConstSetBitIterator_01096090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096090
TConstSetBitIterator_01096090& TConstSetBitIterator_01096090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096590& operator++();
};

TConstSetBitIterator_01096590::TConstSetBitIterator_01096590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096590
TConstSetBitIterator_01096590& TConstSetBitIterator_01096590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010965b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010965b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010965b0& operator++();
};

TConstSetBitIterator_010965b0::TConstSetBitIterator_010965b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010965b0
TConstSetBitIterator_010965b0& TConstSetBitIterator_010965b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010965d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010965d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010965d0& operator++();
};

TConstSetBitIterator_010965d0::TConstSetBitIterator_010965d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010965d0
TConstSetBitIterator_010965d0& TConstSetBitIterator_010965d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010965f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010965f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010965f0& operator++();
};

TConstSetBitIterator_010965f0::TConstSetBitIterator_010965f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010965f0
TConstSetBitIterator_010965f0& TConstSetBitIterator_010965f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096610& operator++();
};

TConstSetBitIterator_01096610::TConstSetBitIterator_01096610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096610
TConstSetBitIterator_01096610& TConstSetBitIterator_01096610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096630& operator++();
};

TConstSetBitIterator_01096630::TConstSetBitIterator_01096630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096630
TConstSetBitIterator_01096630& TConstSetBitIterator_01096630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096770& operator++();
};

TConstSetBitIterator_01096770::TConstSetBitIterator_01096770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096770
TConstSetBitIterator_01096770& TConstSetBitIterator_01096770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010968e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010968e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010968e0& operator++();
};

TConstSetBitIterator_010968e0::TConstSetBitIterator_010968e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010968e0
TConstSetBitIterator_010968e0& TConstSetBitIterator_010968e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096930& operator++();
};

TConstSetBitIterator_01096930::TConstSetBitIterator_01096930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096930
TConstSetBitIterator_01096930& TConstSetBitIterator_01096930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096980& operator++();
};

TConstSetBitIterator_01096980::TConstSetBitIterator_01096980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096980
TConstSetBitIterator_01096980& TConstSetBitIterator_01096980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010969d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010969d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010969d0& operator++();
};

TConstSetBitIterator_010969d0::TConstSetBitIterator_010969d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010969d0
TConstSetBitIterator_010969d0& TConstSetBitIterator_010969d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096a20& operator++();
};

TConstSetBitIterator_01096a20::TConstSetBitIterator_01096a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096a20
TConstSetBitIterator_01096a20& TConstSetBitIterator_01096a20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096a70& operator++();
};

TConstSetBitIterator_01096a70::TConstSetBitIterator_01096a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096a70
TConstSetBitIterator_01096a70& TConstSetBitIterator_01096a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096ac0& operator++();
};

TConstSetBitIterator_01096ac0::TConstSetBitIterator_01096ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096ac0
TConstSetBitIterator_01096ac0& TConstSetBitIterator_01096ac0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096b10& operator++();
};

TConstSetBitIterator_01096b10::TConstSetBitIterator_01096b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096b10
TConstSetBitIterator_01096b10& TConstSetBitIterator_01096b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096b60& operator++();
};

TConstSetBitIterator_01096b60::TConstSetBitIterator_01096b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096b60
TConstSetBitIterator_01096b60& TConstSetBitIterator_01096b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096b80& operator++();
};

TConstSetBitIterator_01096b80::TConstSetBitIterator_01096b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096b80
TConstSetBitIterator_01096b80& TConstSetBitIterator_01096b80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096ba0& operator++();
};

TConstSetBitIterator_01096ba0::TConstSetBitIterator_01096ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096ba0
TConstSetBitIterator_01096ba0& TConstSetBitIterator_01096ba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096bc0& operator++();
};

TConstSetBitIterator_01096bc0::TConstSetBitIterator_01096bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096bc0
TConstSetBitIterator_01096bc0& TConstSetBitIterator_01096bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096be0& operator++();
};

TConstSetBitIterator_01096be0::TConstSetBitIterator_01096be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096be0
TConstSetBitIterator_01096be0& TConstSetBitIterator_01096be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096c00& operator++();
};

TConstSetBitIterator_01096c00::TConstSetBitIterator_01096c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096c00
TConstSetBitIterator_01096c00& TConstSetBitIterator_01096c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096c20& operator++();
};

TConstSetBitIterator_01096c20::TConstSetBitIterator_01096c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096c20
TConstSetBitIterator_01096c20& TConstSetBitIterator_01096c20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096c40& operator++();
};

TConstSetBitIterator_01096c40::TConstSetBitIterator_01096c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096c40
TConstSetBitIterator_01096c40& TConstSetBitIterator_01096c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096c60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096c60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096c60& operator++();
};

TConstSetBitIterator_01096c60::TConstSetBitIterator_01096c60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096c60
TConstSetBitIterator_01096c60& TConstSetBitIterator_01096c60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096c80& operator++();
};

TConstSetBitIterator_01096c80::TConstSetBitIterator_01096c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096c80
TConstSetBitIterator_01096c80& TConstSetBitIterator_01096c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096ca0& operator++();
};

TConstSetBitIterator_01096ca0::TConstSetBitIterator_01096ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096ca0
TConstSetBitIterator_01096ca0& TConstSetBitIterator_01096ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096cc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096cc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096cc0& operator++();
};

TConstSetBitIterator_01096cc0::TConstSetBitIterator_01096cc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096cc0
TConstSetBitIterator_01096cc0& TConstSetBitIterator_01096cc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096ce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096ce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096ce0& operator++();
};

TConstSetBitIterator_01096ce0::TConstSetBitIterator_01096ce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096ce0
TConstSetBitIterator_01096ce0& TConstSetBitIterator_01096ce0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096d00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096d00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096d00& operator++();
};

TConstSetBitIterator_01096d00::TConstSetBitIterator_01096d00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096d00
TConstSetBitIterator_01096d00& TConstSetBitIterator_01096d00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096d20& operator++();
};

TConstSetBitIterator_01096d20::TConstSetBitIterator_01096d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096d20
TConstSetBitIterator_01096d20& TConstSetBitIterator_01096d20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096d40& operator++();
};

TConstSetBitIterator_01096d40::TConstSetBitIterator_01096d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096d40
TConstSetBitIterator_01096d40& TConstSetBitIterator_01096d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096d90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096d90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096d90& operator++();
};

TConstSetBitIterator_01096d90::TConstSetBitIterator_01096d90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096d90
TConstSetBitIterator_01096d90& TConstSetBitIterator_01096d90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096de0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096de0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096de0& operator++();
};

TConstSetBitIterator_01096de0::TConstSetBitIterator_01096de0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096de0
TConstSetBitIterator_01096de0& TConstSetBitIterator_01096de0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096e30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096e30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096e30& operator++();
};

TConstSetBitIterator_01096e30::TConstSetBitIterator_01096e30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096e30
TConstSetBitIterator_01096e30& TConstSetBitIterator_01096e30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096e80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096e80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096e80& operator++();
};

TConstSetBitIterator_01096e80::TConstSetBitIterator_01096e80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096e80
TConstSetBitIterator_01096e80& TConstSetBitIterator_01096e80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096ed0& operator++();
};

TConstSetBitIterator_01096ed0::TConstSetBitIterator_01096ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096ed0
TConstSetBitIterator_01096ed0& TConstSetBitIterator_01096ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096f20& operator++();
};

TConstSetBitIterator_01096f20::TConstSetBitIterator_01096f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096f20
TConstSetBitIterator_01096f20& TConstSetBitIterator_01096f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096f70& operator++();
};

TConstSetBitIterator_01096f70::TConstSetBitIterator_01096f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096f70
TConstSetBitIterator_01096f70& TConstSetBitIterator_01096f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01096fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01096fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01096fc0& operator++();
};

TConstSetBitIterator_01096fc0::TConstSetBitIterator_01096fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01096fc0
TConstSetBitIterator_01096fc0& TConstSetBitIterator_01096fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097010& operator++();
};

TConstSetBitIterator_01097010::TConstSetBitIterator_01097010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097010
TConstSetBitIterator_01097010& TConstSetBitIterator_01097010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097060& operator++();
};

TConstSetBitIterator_01097060::TConstSetBitIterator_01097060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097060
TConstSetBitIterator_01097060& TConstSetBitIterator_01097060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010970b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010970b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010970b0& operator++();
};

TConstSetBitIterator_010970b0::TConstSetBitIterator_010970b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010970b0
TConstSetBitIterator_010970b0& TConstSetBitIterator_010970b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097100& operator++();
};

TConstSetBitIterator_01097100::TConstSetBitIterator_01097100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097100
TConstSetBitIterator_01097100& TConstSetBitIterator_01097100::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097150 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097150(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097150& operator++();
};

TConstSetBitIterator_01097150::TConstSetBitIterator_01097150(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097150
TConstSetBitIterator_01097150& TConstSetBitIterator_01097150::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010971a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010971a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010971a0& operator++();
};

TConstSetBitIterator_010971a0::TConstSetBitIterator_010971a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010971a0
TConstSetBitIterator_010971a0& TConstSetBitIterator_010971a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010971f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010971f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010971f0& operator++();
};

TConstSetBitIterator_010971f0::TConstSetBitIterator_010971f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010971f0
TConstSetBitIterator_010971f0& TConstSetBitIterator_010971f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01097210 {
    int sub_01097210();
};

// @baa 0x01097210
int C_01097210::sub_01097210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct TConstSetBitIterator_01097220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097220& operator++();
};

TConstSetBitIterator_01097220::TConstSetBitIterator_01097220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097220
TConstSetBitIterator_01097220& TConstSetBitIterator_01097220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097240& operator++();
};

TConstSetBitIterator_01097240::TConstSetBitIterator_01097240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097240
TConstSetBitIterator_01097240& TConstSetBitIterator_01097240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097260& operator++();
};

TConstSetBitIterator_01097260::TConstSetBitIterator_01097260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097260
TConstSetBitIterator_01097260& TConstSetBitIterator_01097260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010972b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010972b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010972b0& operator++();
};

TConstSetBitIterator_010972b0::TConstSetBitIterator_010972b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010972b0
TConstSetBitIterator_010972b0& TConstSetBitIterator_010972b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097300& operator++();
};

TConstSetBitIterator_01097300::TConstSetBitIterator_01097300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097300
TConstSetBitIterator_01097300& TConstSetBitIterator_01097300::operator++()
{
    It.Advance();
    return *this;
}

struct C_01097320 {
    int sub_01097320();
};

// @baa 0x01097320
int C_01097320::sub_01097320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct TConstSetBitIterator_01097330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097330& operator++();
};

TConstSetBitIterator_01097330::TConstSetBitIterator_01097330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097330
TConstSetBitIterator_01097330& TConstSetBitIterator_01097330::operator++()
{
    It.Advance();
    return *this;
}

struct C_01097350 {
    int sub_01097350();
};

// @baa 0x01097350
int C_01097350::sub_01097350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct C_01097560 {
    undefined4 * sub_01097560(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x01097560
undefined4 * C_01097560::sub_01097560(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01097560 *)(((char *)this + 4)))->sub_00551820((int)(param_2 + 1));
  return param_1;
}

// @baa 0x01097660
void sub_01097660(void) { sub_0108eca0(); }

struct C_view_01097790 {
    int sub_00549160();
};

// @baa 0x01097790
undefined4 UTexture2D::sub_01097790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01097790 *)(((char *)this + 4)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_010977e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010977e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010977e0& operator++();
};

TConstSetBitIterator_010977e0::TConstSetBitIterator_010977e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010977e0
TConstSetBitIterator_010977e0& TConstSetBitIterator_010977e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097830& operator++();
};

TConstSetBitIterator_01097830::TConstSetBitIterator_01097830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097830
TConstSetBitIterator_01097830& TConstSetBitIterator_01097830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097880& operator++();
};

TConstSetBitIterator_01097880::TConstSetBitIterator_01097880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097880
TConstSetBitIterator_01097880& TConstSetBitIterator_01097880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010978d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010978d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010978d0& operator++();
};

TConstSetBitIterator_010978d0::TConstSetBitIterator_010978d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010978d0
TConstSetBitIterator_010978d0& TConstSetBitIterator_010978d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097920& operator++();
};

TConstSetBitIterator_01097920::TConstSetBitIterator_01097920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097920
TConstSetBitIterator_01097920& TConstSetBitIterator_01097920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01097970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01097970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01097970& operator++();
};

TConstSetBitIterator_01097970::TConstSetBitIterator_01097970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01097970
TConstSetBitIterator_01097970& TConstSetBitIterator_01097970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010979c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010979c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010979c0& operator++();
};

TConstSetBitIterator_010979c0::TConstSetBitIterator_010979c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010979c0
TConstSetBitIterator_010979c0& TConstSetBitIterator_010979c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0109acd0 {
    int sub_005a9910(int, int);
};

// @baa 0x0109acd0
int UTexture2D::sub_0109acd0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0109acd0 *)(this))->sub_005a9910((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_view_0109ad10 {
    int sub_010920d0(int, int);
};

// @baa 0x0109ad10
int UTexture2D::sub_0109ad10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0109ad10 *)(this))->sub_010920d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0109ad90 {
    undefined4 sub_0109ad90(int);
    int sub_01092650(int, int);
};

// @baa 0x0109ad90
undefined4 C_0109ad90::sub_0109ad90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109ad90 *)(this))->sub_01092650((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

struct C_0109add0 {
    int sub_0109add0(int);
    int sub_010926d0(int, int);
};

// @baa 0x0109add0
int C_0109add0::sub_0109add0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109add0 *)(this))->sub_010926d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_0109ae30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109ae30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109ae30& operator++();
};

TConstSetBitIterator_0109ae30::TConstSetBitIterator_0109ae30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109ae30
TConstSetBitIterator_0109ae30& TConstSetBitIterator_0109ae30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109ae50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109ae50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109ae50& operator++();
};

TConstSetBitIterator_0109ae50::TConstSetBitIterator_0109ae50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109ae50
TConstSetBitIterator_0109ae50& TConstSetBitIterator_0109ae50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109aff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109aff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109aff0& operator++();
};

TConstSetBitIterator_0109aff0::TConstSetBitIterator_0109aff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109aff0
TConstSetBitIterator_0109aff0& TConstSetBitIterator_0109aff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109b010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b010& operator++();
};

TConstSetBitIterator_0109b010::TConstSetBitIterator_0109b010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b010
TConstSetBitIterator_0109b010& TConstSetBitIterator_0109b010::operator++()
{
    It.Advance();
    return *this;
}

struct C_0109b030 {
    int sub_0109b030();
};

// @baa 0x0109b030
int C_0109b030::sub_0109b030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_0109b040 {
    int sub_0109b040();
};

// @baa 0x0109b040
int C_0109b040::sub_0109b040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + 0xc + *(int *)*param_1;
}

struct TConstSetBitIterator_0109b050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b050& operator++();
};

TConstSetBitIterator_0109b050::TConstSetBitIterator_0109b050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b050
TConstSetBitIterator_0109b050& TConstSetBitIterator_0109b050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109b070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b070& operator++();
};

TConstSetBitIterator_0109b070::TConstSetBitIterator_0109b070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b070
TConstSetBitIterator_0109b070& TConstSetBitIterator_0109b070::operator++()
{
    It.Advance();
    return *this;
}

struct C_0109b090 {
    int sub_0109b090();
};

// @baa 0x0109b090
int C_0109b090::sub_0109b090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x28;
}

struct C_0109b0a0 {
    int sub_0109b0a0(int);
    int sub_01095ce0(int, int);
};

// @baa 0x0109b0a0
int C_0109b0a0::sub_0109b0a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b0a0 *)(this))->sub_01095ce0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x2c + *param_1;
  }
  return 0;
}

struct C_0109b0d0 {
    int sub_0109b0d0(int);
    int sub_01095d60(int, int);
};

// @baa 0x0109b0d0
int C_0109b0d0::sub_0109b0d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b0d0 *)(this))->sub_01095d60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_0109b100 {
    int sub_0109b100(int);
    int sub_01095df0(int, int);
};

// @baa 0x0109b100
int C_0109b100::sub_0109b100(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b100 *)(this))->sub_01095df0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_0109b130 {
    int sub_0109b130(int);
    int sub_01095e70(int, int);
};

// @baa 0x0109b130
int C_0109b130::sub_0109b130(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b130 *)(this))->sub_01095e70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_0109b160 {
    int sub_0109b160(int);
    int sub_01095ef0(int, int);
};

// @baa 0x0109b160
int C_0109b160::sub_0109b160(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b160 *)(this))->sub_01095ef0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_0109b280 {
    int sub_0109b280(int);
    int sub_01095fc0(int, int);
};

// @baa 0x0109b280
int C_0109b280::sub_0109b280(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0109b280 *)(this))->sub_01095fc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x38;
  }
  return 0;
}

struct TConstSetBitIterator_0109b370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b370& operator++();
};

TConstSetBitIterator_0109b370::TConstSetBitIterator_0109b370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b370
TConstSetBitIterator_0109b370& TConstSetBitIterator_0109b370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109b440 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b440(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b440& operator++();
};

TConstSetBitIterator_0109b440::TConstSetBitIterator_0109b440(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b440
TConstSetBitIterator_0109b440& TConstSetBitIterator_0109b440::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109b4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109b4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109b4c0& operator++();
};

TConstSetBitIterator_0109b4c0::TConstSetBitIterator_0109b4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109b4c0
TConstSetBitIterator_0109b4c0& TConstSetBitIterator_0109b4c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d5f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d5f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d5f0& operator++();
};

TConstSetBitIterator_0109d5f0::TConstSetBitIterator_0109d5f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d5f0
TConstSetBitIterator_0109d5f0& TConstSetBitIterator_0109d5f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d640& operator++();
};

TConstSetBitIterator_0109d640::TConstSetBitIterator_0109d640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d640
TConstSetBitIterator_0109d640& TConstSetBitIterator_0109d640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d690& operator++();
};

TConstSetBitIterator_0109d690::TConstSetBitIterator_0109d690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d690
TConstSetBitIterator_0109d690& TConstSetBitIterator_0109d690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d6e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d6e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d6e0& operator++();
};

TConstSetBitIterator_0109d6e0::TConstSetBitIterator_0109d6e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d6e0
TConstSetBitIterator_0109d6e0& TConstSetBitIterator_0109d6e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d730& operator++();
};

TConstSetBitIterator_0109d730::TConstSetBitIterator_0109d730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d730
TConstSetBitIterator_0109d730& TConstSetBitIterator_0109d730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d780& operator++();
};

TConstSetBitIterator_0109d780::TConstSetBitIterator_0109d780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d780
TConstSetBitIterator_0109d780& TConstSetBitIterator_0109d780::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d7d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d7d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d7d0& operator++();
};

TConstSetBitIterator_0109d7d0::TConstSetBitIterator_0109d7d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d7d0
TConstSetBitIterator_0109d7d0& TConstSetBitIterator_0109d7d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d820& operator++();
};

TConstSetBitIterator_0109d820::TConstSetBitIterator_0109d820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d820
TConstSetBitIterator_0109d820& TConstSetBitIterator_0109d820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d870 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d870(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d870& operator++();
};

TConstSetBitIterator_0109d870::TConstSetBitIterator_0109d870(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d870
TConstSetBitIterator_0109d870& TConstSetBitIterator_0109d870::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d8c0& operator++();
};

TConstSetBitIterator_0109d8c0::TConstSetBitIterator_0109d8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d8c0
TConstSetBitIterator_0109d8c0& TConstSetBitIterator_0109d8c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d910& operator++();
};

TConstSetBitIterator_0109d910::TConstSetBitIterator_0109d910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d910
TConstSetBitIterator_0109d910& TConstSetBitIterator_0109d910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d960& operator++();
};

TConstSetBitIterator_0109d960::TConstSetBitIterator_0109d960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d960
TConstSetBitIterator_0109d960& TConstSetBitIterator_0109d960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d9b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d9b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d9b0& operator++();
};

TConstSetBitIterator_0109d9b0::TConstSetBitIterator_0109d9b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d9b0
TConstSetBitIterator_0109d9b0& TConstSetBitIterator_0109d9b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109da00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109da00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109da00& operator++();
};

TConstSetBitIterator_0109da00::TConstSetBitIterator_0109da00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109da00
TConstSetBitIterator_0109da00& TConstSetBitIterator_0109da00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109da50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109da50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109da50& operator++();
};

TConstSetBitIterator_0109da50::TConstSetBitIterator_0109da50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109da50
TConstSetBitIterator_0109da50& TConstSetBitIterator_0109da50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109db60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109db60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109db60& operator++();
};

TConstSetBitIterator_0109db60::TConstSetBitIterator_0109db60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109db60
TConstSetBitIterator_0109db60& TConstSetBitIterator_0109db60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109dbb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109dbb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109dbb0& operator++();
};

TConstSetBitIterator_0109dbb0::TConstSetBitIterator_0109dbb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109dbb0
TConstSetBitIterator_0109dbb0& TConstSetBitIterator_0109dbb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109dc00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109dc00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109dc00& operator++();
};

TConstSetBitIterator_0109dc00::TConstSetBitIterator_0109dc00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109dc00
TConstSetBitIterator_0109dc00& TConstSetBitIterator_0109dc00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109dc50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109dc50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109dc50& operator++();
};

TConstSetBitIterator_0109dc50::TConstSetBitIterator_0109dc50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109dc50
TConstSetBitIterator_0109dc50& TConstSetBitIterator_0109dc50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109dca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109dca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109dca0& operator++();
};

TConstSetBitIterator_0109dca0::TConstSetBitIterator_0109dca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109dca0
TConstSetBitIterator_0109dca0& TConstSetBitIterator_0109dca0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0109ed80 {
    int sub_0109ed80(int);
    int sub_01095d60(int, int);
};

// @baa 0x0109ed80
int C_0109ed80::sub_0109ed80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109ed80 *)(this))->sub_01095d60((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0109edc0 {
    int sub_0109edc0(int);
    int sub_01095ef0(int, int);
};

// @baa 0x0109edc0
int C_0109edc0::sub_0109edc0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109edc0 *)(this))->sub_01095ef0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0x50 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0109ee00 {
    int sub_0109ee00(int);
    int sub_01095e70(int, int);
};

// @baa 0x0109ee00
int C_0109ee00::sub_0109ee00(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109ee00 *)(this))->sub_01095e70((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0x50 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0109ee40 {
    int sub_0109ee40(int);
    int sub_01095df0(int, int);
};

// @baa 0x0109ee40
int C_0109ee40::sub_0109ee40(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109ee40 *)(this))->sub_01095df0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = param_2 * 0x50 + *param_1, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C_0109ee80 {
    int sub_0109ee80(int);
    int sub_01095fc0(int, int);
};

// @baa 0x0109ee80
int C_0109ee80::sub_0109ee80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0109ee80 *)(this))->sub_01095fc0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x38, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct TConstSetBitIterator_0109eec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109eec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109eec0& operator++();
};

TConstSetBitIterator_0109eec0::TConstSetBitIterator_0109eec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109eec0
TConstSetBitIterator_0109eec0& TConstSetBitIterator_0109eec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109eee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109eee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109eee0& operator++();
};

TConstSetBitIterator_0109eee0::TConstSetBitIterator_0109eee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109eee0
TConstSetBitIterator_0109eee0& TConstSetBitIterator_0109eee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109ef60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109ef60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109ef60& operator++();
};

TConstSetBitIterator_0109ef60::TConstSetBitIterator_0109ef60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109ef60
TConstSetBitIterator_0109ef60& TConstSetBitIterator_0109ef60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109f080 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109f080(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109f080& operator++();
};

TConstSetBitIterator_0109f080::TConstSetBitIterator_0109f080(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109f080
TConstSetBitIterator_0109f080& TConstSetBitIterator_0109f080::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109f0d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109f0d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109f0d0& operator++();
};

TConstSetBitIterator_0109f0d0::TConstSetBitIterator_0109f0d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109f0d0
TConstSetBitIterator_0109f0d0& TConstSetBitIterator_0109f0d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0109f120 {
    void sub_0109f120();
    int sub_0109bb60(int);
};

// @baa 0x0109f120
void C_0109f120::sub_0109f120(void)
{
    int param_1 = (int)this;
  ((C_0109f120 *)((*(char **)((char *)this + 0x10))))->sub_0109bb60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0109f140 {
    void sub_0109f140();
    int sub_0109bec0(int);
};

// @baa 0x0109f140
void C_0109f140::sub_0109f140(void)
{
    int param_1 = (int)this;
  ((C_0109f140 *)((*(char **)((char *)this + 0x10))))->sub_0109bec0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0109f160 {
    void sub_0109f160();
    int sub_0109c100(int);
};

// @baa 0x0109f160
void C_0109f160::sub_0109f160(void)
{
    int param_1 = (int)this;
  ((C_0109f160 *)((*(char **)((char *)this + 0x10))))->sub_0109c100(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0109f180 {
    void sub_0109f180();
    int sub_0109c340(int);
};

// @baa 0x0109f180
void C_0109f180::sub_0109f180(void)
{
    int param_1 = (int)this;
  ((C_0109f180 *)((*(char **)((char *)this + 0x10))))->sub_0109c340(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct Ar0 { int pad[4]; int loading; int sub_0053ea70(void*, int); };

struct Arr0 { int pad[5]; int n; };

struct Msk { int sub_0054f600(); };

struct Con0;
struct It0 { int *Data; int x; unsigned mask; Arr0 *owner; unsigned c; int idx; int pad; void sub_010977e0(Con0*, int); };

struct Con0 { int pad[1]; int cnt; int pad2[9]; int off; void sub_0108d820(Ar0*); void sub_0109e2c0(int); void* sub_0109b4e0(void*); };

struct Ob0 { int sub_0053ea70(void*, int); virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void S(void*); };

struct E_0109f220 { int a,b,c; int f[4]; int g[2]; int z; };

struct T8 { int a,b; };

struct R { char pad[4]; E_0109f220* e; };

Ob0* sub_00637c10(Ar0*, void*);
// @baa 0x0109f220
Ar0* sub_0109f220(Ar0* ar0, Con0* c)
{
  Ar0* ar = ar0;
  int &count = *(int*)&ar0;
  c->sub_0108d820(ar);
  int z = 0;
  if (ar->loading != z) {
    ar->sub_0053ea70(&count, 4);
    c->sub_0109e2c0(count);
    for (int i = 0; i < count; i++) {
      T8 tmp;
      z = 0;
      E_0109f220 *p = ((R*)c->sub_0109b4e0(&tmp))->e;
      if (p) { p->a=z; p->b=z; p->c=z; p->z=-1; } else p = 0;
      int *f = p->f;
      Ob0 *o = sub_00637c10(ar, p);
      o->sub_0053ea70(f,4);
      o->sub_0053ea70(f+1,4);
      o->sub_0053ea70(f+2,4);
      o->sub_0053ea70(f+3,4);
      o->S(f+4);
    }
  } else {
    count = c->cnt - c->off;
    ar->sub_0053ea70(&count, 4);
    It0 it;
    it.sub_010977e0(c, z);
    while (it.idx < it.owner->n) {
      E_0109f220 *p = (E_0109f220*)((char*)it.Data[0] + it.idx * 0x2c);
      int *f = p->f;
      Ob0 *o = sub_00637c10(ar, p);
      o->sub_0053ea70(f,4);
      o->sub_0053ea70(f+1,4);
      o->sub_0053ea70(f+2,4);
      o->sub_0053ea70(f+3,4);
      o->S(f+4);
      it.c &= ~it.mask;
      ((Msk*)&it.x)->sub_0054f600();
    }
  }
  return ar;
}

struct C_0109fe50 {
    void sub_0109fe50();
    int sub_0109cc80(int);
};

// @baa 0x0109fe50
void C_0109fe50::sub_0109fe50(void)
{
    int param_1 = (int)this;
  ((C_0109fe50 *)((*(char **)((char *)this + 0x10))))->sub_0109cc80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0109fe70 {
    void sub_0109fe70();
    int sub_0109ce90(int);
};

// @baa 0x0109fe70
void C_0109fe70::sub_0109fe70(void)
{
    int param_1 = (int)this;
  ((C_0109fe70 *)((*(char **)((char *)this + 0x10))))->sub_0109ce90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_010a15b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a15b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a15b0& operator++();
};

TConstSetBitIterator_010a15b0::TConstSetBitIterator_010a15b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a15b0
TConstSetBitIterator_010a15b0& TConstSetBitIterator_010a15b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010a1600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a1600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a1600& operator++();
};

TConstSetBitIterator_010a1600::TConstSetBitIterator_010a1600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a1600
TConstSetBitIterator_010a1600& TConstSetBitIterator_010a1600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010a1650 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a1650(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a1650& operator++();
};

TConstSetBitIterator_010a1650::TConstSetBitIterator_010a1650(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a1650
TConstSetBitIterator_010a1650& TConstSetBitIterator_010a1650::operator++()
{
    It.Advance();
    return *this;
}

struct C_010a1b40 {
    int sub_010a1b40();
};

int sub_01097a10(void);
// @baa 0x010a1b40
int C_010a1b40::sub_010a1b40(void)
{
    int param_1 = (int)this;

  sub_01097a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a1b60 {
    int sub_010a1b60();
};

int sub_01097a70(void);
// @baa 0x010a1b60
int C_010a1b60::sub_010a1b60(void)
{
    int param_1 = (int)this;

  sub_01097a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a1b80 {
    int sub_010a1b80();
};

int sub_01097ad0(void);
// @baa 0x010a1b80
int C_010a1b80::sub_010a1b80(void)
{
    int param_1 = (int)this;

  sub_01097ad0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a1ba0 {
    int sub_010a1ba0();
};

int sub_01097b30(void);
// @baa 0x010a1ba0
int C_010a1ba0::sub_010a1ba0(void)
{
    int param_1 = (int)this;

  sub_01097b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a1bc0 {
    int sub_010a1bc0();
};

int sub_01097b90(void);
// @baa 0x010a1bc0
int C_010a1bc0::sub_010a1bc0(void)
{
    int param_1 = (int)this;

  sub_01097b90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a1be0 {
    int sub_010a1be0();
};

int sub_01097bf0(void);
// @baa 0x010a1be0
int C_010a1be0::sub_010a1be0(void)
{
    int param_1 = (int)this;

  sub_01097bf0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct S_010a2910 {
    int __thiscall sub_0109ef80(int a);
    int __thiscall sub_010a2910(int a);
};

// @baa 0x010a2910
int S_010a2910::sub_010a2910(int a) {
    return sub_0109ef80(a);
}

void sub_0109f000();
// @baa 0x010a2920
void sub_010a2920(void) { sub_0109f000(); }

struct TConstSetBitIterator_010a2930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a2930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a2930& operator++();
};

TConstSetBitIterator_010a2930::TConstSetBitIterator_010a2930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a2930
TConstSetBitIterator_010a2930& TConstSetBitIterator_010a2930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010a2980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010a2980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010a2980& operator++();
};

TConstSetBitIterator_010a2980::TConstSetBitIterator_010a2980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010a2980
TConstSetBitIterator_010a2980& TConstSetBitIterator_010a2980::operator++()
{
    It.Advance();
    return *this;
}

struct C_010a3010 {
    undefined4 sub_010a3010(undefined4, undefined4);
    int sub_0109fcd0(int, int);
};

// @baa 0x010a3010
undefined4 C_010a3010::sub_010a3010(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a3010 *)(this))->sub_0109fcd0(param_2, param_3);
  return param_1;
}

struct C_010a3030 {
    undefined4 sub_010a3030(undefined4, undefined4);
    int sub_0109fd30(int, int);
};

// @baa 0x010a3030
undefined4 C_010a3030::sub_010a3030(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a3030 *)(this))->sub_0109fd30(param_2, param_3);
  return param_1;
}

struct C_010a3050 {
    undefined4 sub_010a3050(undefined4, undefined4);
    int sub_0109fd90(int, int);
};

// @baa 0x010a3050
undefined4 C_010a3050::sub_010a3050(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a3050 *)(this))->sub_0109fd90(param_2, param_3);
  return param_1;
}

struct C_010a3070 {
    undefined4 sub_010a3070(undefined4, undefined4);
    int sub_0109fdf0(int, int);
};

// @baa 0x010a3070
undefined4 C_010a3070::sub_010a3070(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a3070 *)(this))->sub_0109fdf0(param_2, param_3);
  return param_1;
}

struct C_010a3090 {
    void sub_010a3090();
    int sub_0109f1a0(int);
};

// @baa 0x010a3090
void C_010a3090::sub_010a3090(void)
{
    int param_1 = (int)this;
  ((C_010a3090 *)((*(char **)((char *)this + 0x10))))->sub_0109f1a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a30b0 {
    void sub_010a30b0();
    int sub_0109f3c0(int);
};

// @baa 0x010a30b0
void C_010a30b0::sub_010a30b0(void)
{
    int param_1 = (int)this;
  ((C_010a30b0 *)((*(char **)((char *)this + 0x10))))->sub_0109f3c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a30d0 {
    void sub_010a30d0();
    int sub_0109f440(int);
};

// @baa 0x010a30d0
void C_010a30d0::sub_010a30d0(void)
{
    int param_1 = (int)this;
  ((C_010a30d0 *)((*(char **)((char *)this + 0x10))))->sub_0109f440(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a30f0 {
    void sub_010a30f0();
    int sub_0109f730(int);
};

// @baa 0x010a30f0
void C_010a30f0::sub_010a30f0(void)
{
    int param_1 = (int)this;
  ((C_010a30f0 *)((*(char **)((char *)this + 0x10))))->sub_0109f730(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a3110 {
    void sub_010a3110();
    int sub_0109f8c0(int);
};

// @baa 0x010a3110
void C_010a3110::sub_010a3110(void)
{
    int param_1 = (int)this;
  ((C_010a3110 *)((*(char **)((char *)this + 0x10))))->sub_0109f8c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a3130 {
    void sub_010a3130();
    int sub_0109f940(int);
};

// @baa 0x010a3130
void C_010a3130::sub_010a3130(void)
{
    int param_1 = (int)this;
  ((C_010a3130 *)((*(char **)((char *)this + 0x10))))->sub_0109f940(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a3150 {
    void sub_010a3150();
    int sub_0109cc80(int);
};

// @baa 0x010a3150
void C_010a3150::sub_010a3150(void)
{
    int param_1 = (int)this;
  ((C_010a3150 *)((*(char **)((char *)this + 0x10))))->sub_0109cc80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010a3170 {
    void sub_010a3170();
    int sub_0109ce90(int);
};

// @baa 0x010a3170
void C_010a3170::sub_010a3170(void)
{
    int param_1 = (int)this;
  ((C_010a3170 *)((*(char **)((char *)this + 0x10))))->sub_0109ce90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_01033050(void);
// @baa 0x010a4900
undefined4 UTexture2D::sub_010a4900(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01033050();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010a4cc0 {
    int sub_010a4cc0();
};

int sub_01097670(void);
// @baa 0x010a4cc0
int C_010a4cc0::sub_010a4cc0(void)
{
    int param_1 = (int)this;

  sub_01097670();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4e30 {
    int sub_010a4e30();
};

// @baa 0x010a4e30
int C_010a4e30::sub_010a4e30(void)
{
    int param_1 = (int)this;

  sub_01097a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4e50 {
    int sub_010a4e50();
};

// @baa 0x010a4e50
int C_010a4e50::sub_010a4e50(void)
{
    int param_1 = (int)this;

  sub_01097a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4e70 {
    int sub_010a4e70();
};

// @baa 0x010a4e70
int C_010a4e70::sub_010a4e70(void)
{
    int param_1 = (int)this;

  sub_01097ad0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4e90 {
    int sub_010a4e90();
};

// @baa 0x010a4e90
int C_010a4e90::sub_010a4e90(void)
{
    int param_1 = (int)this;

  sub_01097b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4eb0 {
    int sub_010a4eb0();
};

// @baa 0x010a4eb0
int C_010a4eb0::sub_010a4eb0(void)
{
    int param_1 = (int)this;

  sub_01097b90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a4ed0 {
    int sub_010a4ed0();
};

// @baa 0x010a4ed0
int C_010a4ed0::sub_010a4ed0(void)
{
    int param_1 = (int)this;

  sub_01097bf0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a59d0 {
    int sub_010a59d0(undefined4, undefined4, undefined4);
    int sub_0109fcd0(int, int);
};

// @baa 0x010a59d0
int C_010a59d0::sub_010a59d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010a59d0 *)(this))->sub_0109fcd0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_010a5a00 {
    int sub_010a5a00(undefined4, undefined4, undefined4);
    int sub_0109fd30(int, int);
};

// @baa 0x010a5a00
int C_010a5a00::sub_010a5a00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010a5a00 *)(this))->sub_0109fd30(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_010a5a30 {
    int sub_010a5a30(undefined4, undefined4, undefined4);
    int sub_0109fd90(int, int);
};

// @baa 0x010a5a30
int C_010a5a30::sub_010a5a30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010a5a30 *)(this))->sub_0109fd90(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_010a5a60 {
    int sub_010a5a60(undefined4, undefined4, undefined4);
    int sub_0109fdf0(int, int);
};

// @baa 0x010a5a60
int C_010a5a60::sub_010a5a60(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_010a5a60 *)(this))->sub_0109fdf0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_010a5a90 {
    undefined4 sub_010a5a90(byte);
};

int sub_010a5100(void);
// @baa 0x010a5a90
undefined4 C_010a5a90::sub_010a5a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010a5100();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010a5ab0 {
    undefined4 sub_010a5ab0(byte);
};

int sub_010a5160(void);
// @baa 0x010a5ab0
undefined4 C_010a5ab0::sub_010a5ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010a5160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010a5c10 {
    void sub_010a5c10();
    int sub_010a3190(int, int);
};

// @baa 0x010a5c10
void C_010a5c10::sub_010a5c10(void)
{
    int param_1 = (int)this;
  ((C_010a5c10 *)(this))->sub_010a3190(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a5d90 {
    void sub_010a5d90();
    int sub_010a3250(int, int);
};

// @baa 0x010a5d90
void C_010a5d90::sub_010a5d90(void)
{
    int param_1 = (int)this;
  ((C_010a5d90 *)(this))->sub_010a3250(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a5eb0 {
    void sub_010a5eb0();
    int sub_010a3310(int, int);
};

// @baa 0x010a5eb0
void C_010a5eb0::sub_010a5eb0(void)
{
    int param_1 = (int)this;
  ((C_010a5eb0 *)(this))->sub_010a3310(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a6240 {
    void sub_010a6240();
    int sub_010a36d0(int, int);
};

// @baa 0x010a6240
void C_010a6240::sub_010a6240(void)
{
    int param_1 = (int)this;
  ((C_010a6240 *)(this))->sub_010a36d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a6550 {
    void sub_010a6550();
    int sub_010a3910(int, int);
};

// @baa 0x010a6550
void C_010a6550::sub_010a6550(void)
{
    int param_1 = (int)this;
  ((C_010a6550 *)(this))->sub_010a3910(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a6620 {
    int sub_010a6620();
};

int sub_0109cd00(void);
// @baa 0x010a6620
int C_010a6620::sub_010a6620(void)
{
    int param_1 = (int)this;

  sub_0109cd00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a66c0 {
    undefined4 sub_010a66c0(undefined4, undefined4);
    int sub_010a3ab0(int, int);
};

// @baa 0x010a66c0
undefined4 C_010a66c0::sub_010a66c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a66c0 *)(this))->sub_010a3ab0(param_2, param_3);
  return param_1;
}

struct C_010a66e0 {
    void sub_010a66e0();
    int sub_010a3b10(int, int);
};

// @baa 0x010a66e0
void C_010a66e0::sub_010a66e0(void)
{
    int param_1 = (int)this;
  ((C_010a66e0 *)(this))->sub_010a3b10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a67b0 {
    int sub_010a67b0();
};

int sub_0109cf10(void);
// @baa 0x010a67b0
int C_010a67b0::sub_010a67b0(void)
{
    int param_1 = (int)this;

  sub_0109cf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a6850 {
    undefined4 sub_010a6850(undefined4, undefined4);
    int sub_010a3cb0(int, int);
};

// @baa 0x010a6850
undefined4 C_010a6850::sub_010a6850(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a6850 *)(this))->sub_010a3cb0(param_2, param_3);
  return param_1;
}

struct C_010a6870 {
    void sub_010a6870();
    int sub_010a3d10(int, int);
};

// @baa 0x010a6870
void C_010a6870::sub_010a6870(void)
{
    int param_1 = (int)this;
  ((C_010a6870 *)(this))->sub_010a3d10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_010a6940 {
    undefined4 sub_010a6940(undefined4, undefined4);
    int sub_010a3dd0(int, int);
};

// @baa 0x010a6940
undefined4 C_010a6940::sub_010a6940(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_010a6940 *)(this))->sub_010a3dd0(param_2, param_3);
  return param_1;
}

struct C_view_010a6960 {
    int sub_010a3e30(int, int);
};

// @baa 0x010a6960
int UTexture2D::sub_010a6960(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6960 *)(this))->sub_010a3e30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6980 {
    int sub_010a3eb0(int, int);
};

// @baa 0x010a6980
int UTexture2D::sub_010a6980(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6980 *)(this))->sub_010a3eb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a69a0 {
    int sub_010a3f30(int, int);
};

// @baa 0x010a69a0
int UTexture2D::sub_010a69a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a69a0 *)(this))->sub_010a3f30(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a69c0 {
    int sub_010a3fb0(int, int);
};

// @baa 0x010a69c0
int UTexture2D::sub_010a69c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a69c0 *)(this))->sub_010a3fb0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a69e0 {
    int sub_010a4030(int, int);
};

// @baa 0x010a69e0
int UTexture2D::sub_010a69e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a69e0 *)(this))->sub_010a4030(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6a00 {
    int sub_010a40b0(int, int);
};

// @baa 0x010a6a00
int UTexture2D::sub_010a6a00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6a00 *)(this))->sub_010a40b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6a20 {
    int sub_010a4130(int, int);
};

// @baa 0x010a6a20
int UTexture2D::sub_010a6a20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6a20 *)(this))->sub_010a4130(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6a40 {
    int sub_010a41b0(int, int);
};

// @baa 0x010a6a40
int UTexture2D::sub_010a6a40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6a40 *)(this))->sub_010a41b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6a60 {
    int sub_010a4230(int, int);
};

// @baa 0x010a6a60
int UTexture2D::sub_010a6a60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6a60 *)(this))->sub_010a4230(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6a80 {
    int sub_010a42a0(int, int);
};

// @baa 0x010a6a80
int UTexture2D::sub_010a6a80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6a80 *)(this))->sub_010a42a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6aa0 {
    int sub_010a4320(int, int);
};

// @baa 0x010a6aa0
int UTexture2D::sub_010a6aa0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6aa0 *)(this))->sub_010a4320(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6ac0 {
    int sub_010a43a0(int, int);
};

// @baa 0x010a6ac0
int UTexture2D::sub_010a6ac0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6ac0 *)(this))->sub_010a43a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6ae0 {
    int sub_010a4420(int, int);
};

// @baa 0x010a6ae0
int UTexture2D::sub_010a6ae0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6ae0 *)(this))->sub_010a4420(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0109d410(void);
// @baa 0x010a6b00
int UTexture2D::sub_010a6b00(void)
{
    int param_1 = (int)this;

  sub_0109d410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_010a6ba0 {
    int sub_010a6b20(int);
};

// @baa 0x010a6ba0
int UTexture2D::sub_010a6ba0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_010a6ba0 *)(this))->sub_010a6b20(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

struct C_010a6c20 {
    int sub_010a6c20();
};

int sub_0109d4d0(void);
// @baa 0x010a6c20
int C_010a6c20::sub_010a6c20(void)
{
    int param_1 = (int)this;

  sub_0109d4d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a6cc0 {
    int sub_010a6cc0();
};

int sub_0109d530(void);
// @baa 0x010a6cc0
int C_010a6cc0::sub_010a6cc0(void)
{
    int param_1 = (int)this;

  sub_0109d530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a6d60 {
    int sub_010a6d60();
};

int sub_0109d590(void);
// @baa 0x010a6d60
int C_010a6d60::sub_010a6d60(void)
{
    int param_1 = (int)this;

  sub_0109d590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_010a6d80 {
    int sub_010a4700(int, int);
};

// @baa 0x010a6d80
int UTexture2D::sub_010a6d80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6d80 *)(this))->sub_010a4700(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_010a6e20 {
    int sub_010a4780(int, int);
};

// @baa 0x010a6e20
int UTexture2D::sub_010a6e20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_010a6e20 *)(this))->sub_010a4780(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_010a6ec0 {
    int sub_010a6ec0();
};

int sub_0109daa0(void);
// @baa 0x010a6ec0
int C_010a6ec0::sub_010a6ec0(void)
{
    int param_1 = (int)this;

  sub_0109daa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a6ee0 {
    int sub_010a6ee0();
};

int sub_0109db00(void);
// @baa 0x010a6ee0
int C_010a6ee0::sub_010a6ee0(void)
{
    int param_1 = (int)this;

  sub_0109db00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010a4b00();
// @baa 0x010a70b0
void sub_010a70b0(void) { sub_010a4b00(); }

void sub_010a4b70();
// @baa 0x010a70c0
void sub_010a70c0(void) { sub_010a4b70(); }

void sub_010a4be0();
// @baa 0x010a70d0
void sub_010a70d0(void) { sub_010a4be0(); }

void sub_010a4c50();
// @baa 0x010a70e0
void sub_010a70e0(void) { sub_010a4c50(); }

void sub_010a4d50();
// @baa 0x010a70f0
void sub_010a70f0(void) { sub_010a4d50(); }

void sub_010a4dc0();
// @baa 0x010a7100
void sub_010a7100(void) { sub_010a4dc0(); }

// @baa 0x010a7110
int UTexture2D::sub_010a7110(void)
{
    int param_1 = (int)this;

  sub_01097a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a7130
int UTexture2D::sub_010a7130(void)
{
    int param_1 = (int)this;

  sub_01097a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a7150
int UTexture2D::sub_010a7150(void)
{
    int param_1 = (int)this;

  sub_01097ad0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a7170
int UTexture2D::sub_010a7170(void)
{
    int param_1 = (int)this;

  sub_01097b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a7190
int UTexture2D::sub_010a7190(void)
{
    int param_1 = (int)this;

  sub_01097b90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a71b0
int UTexture2D::sub_010a71b0(void)
{
    int param_1 = (int)this;

  sub_01097bf0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010a5300();
// @baa 0x010a71d0
void sub_010a71d0(void) { sub_010a5300(); }

void sub_010a5290();
// @baa 0x010a71e0
void sub_010a71e0(void) { sub_010a5290(); }

void sub_010a5540();
// @baa 0x010a71f0
void sub_010a71f0(void) { sub_010a5540(); }

void sub_010a5620();
// @baa 0x010a7200
void sub_010a7200(void) { sub_010a5620(); }

void sub_010a55b0();
// @baa 0x010a7210
void sub_010a7210(void) { sub_010a55b0(); }

void sub_010a5860();
// @baa 0x010a7220
void sub_010a7220(void) { sub_010a5860(); }

void sub_010a5960();
// @baa 0x010a7650
void sub_010a7650(void) { sub_010a5960(); }

void sub_010a5d20();
// @baa 0x010a76a0
void sub_010a76a0(void) { sub_010a5d20(); }

void sub_010a5ff0();
// @baa 0x010a7740
void sub_010a7740(void) { sub_010a5ff0(); }

void sub_010a6060();
// @baa 0x010a7750
void sub_010a7750(void) { sub_010a6060(); }

void sub_010a61e0();
// @baa 0x010a77a0
void sub_010a77a0() { sub_010a61e0(); }

// @baa 0x010a78c0
int UTexture2D::sub_010a78c0(void)
{
    int param_1 = (int)this;

  sub_0109cd00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_view_010a7a00 {
    int sub_010a3ab0(int, int);
};

// @baa 0x010a7a00
int UTexture2D::sub_010a7a00(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_010a7a00 *)(this))->sub_010a3ab0(param_2, param_4);
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
    void sub_010a3910(int, int);
};

struct C_010a7a30 {
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
    void sub_010a7a30(void);
};

// @baa 0x010a7a30
void C_010a7a30::sub_010a7a30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3910(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x010a7a90
int UTexture2D::sub_010a7a90(void)
{
    int param_1 = (int)this;

  sub_0109cf10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_view_010a7b30 {
    int sub_010a3cb0(int, int);
};

// @baa 0x010a7b30
int UTexture2D::sub_010a7b30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_010a7b30 *)(this))->sub_010a3cb0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_010a7b60 {
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
    void sub_010a3b10(int, int);
};

struct C_010a7b60 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7b60* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7b60(void);
};

// @baa 0x010a7b60
void C_010a7b60::sub_010a7b60(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3b10(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct Block_010a7bc0 {
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
    void sub_010a36d0(int, int);
};

struct C_010a7bc0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7bc0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7bc0(void);
};

// @baa 0x010a7bc0
void C_010a7bc0::sub_010a7bc0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a36d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_010a7be0 {
    int sub_010a3dd0(int, int);
};

// @baa 0x010a7be0
int UTexture2D::sub_010a7be0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_010a7be0 *)(this))->sub_010a3dd0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_010a7c10 {
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
    void sub_010a3d10(int, int);
};

struct C_010a7c10 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7c10* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7c10(void);
};

// @baa 0x010a7c10
void C_010a7c10::sub_010a7c10(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3d10(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct Block_010a7c30 {
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
    void sub_010a3190(int, int);
};

struct C_010a7c30 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7c30* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7c30(void);
};

// @baa 0x010a7c30
void C_010a7c30::sub_010a7c30(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3190(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct Block_010a7c50 {
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
    void sub_010a3310(int, int);
};

struct C_010a7c50 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7c50* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7c50(void);
};

// @baa 0x010a7c50
void C_010a7c50::sub_010a7c50(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3310(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct Block_010a7c70 {
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
    void sub_010a3250(int, int);
};

struct C_010a7c70 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_010a7c70* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_010a7c70(void);
};

// @baa 0x010a7c70
void C_010a7c70::sub_010a7c70(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_010a3250(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x010a7c90
int UTexture2D::sub_010a7c90(void)
{
    int param_1 = (int)this;

  sub_0109d410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010a6bc0(undefined4 param_1);
// @baa 0x010a7db0
void sub_010a7db0(undefined4 param_1)
{
    sub_010a6bc0(param_1);
}

struct C_010a7dc0 {
    int sub_010a7dc0();
};

// @baa 0x010a7dc0
int C_010a7dc0::sub_010a7dc0(void)
{
    int param_1 = (int)this;

  sub_0109d4d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a7e50 {
    int sub_010a7e50();
};

// @baa 0x010a7e50
int C_010a7e50::sub_010a7e50(void)
{
    int param_1 = (int)this;

  sub_0109d530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a7ee0 {
    int sub_010a7ee0();
};

// @baa 0x010a7ee0
int C_010a7ee0::sub_010a7ee0(void)
{
    int param_1 = (int)this;

  sub_0109d590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_010a7f50 {
    int sub_010a6da0(int, int);
};

// @baa 0x010a7f50
undefined4 UTexture2D::sub_010a7f50(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_010a7f50 *)(this))->sub_010a6da0(param_2, param_3);
  return param_1;
}

struct C_view_010a7fc0 {
    int sub_010a6e40(int, int);
};

// @baa 0x010a7fc0
undefined4 UTexture2D::sub_010a7fc0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_010a7fc0 *)(this))->sub_010a6e40(param_2, param_3);
  return param_1;
}

struct C_010a7fe0 {
    int sub_010a7fe0();
};

// @baa 0x010a7fe0
int C_010a7fe0::sub_010a7fe0(void)
{
    int param_1 = (int)this;

  sub_0109daa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a8000 {
    int sub_010a8000();
};

// @baa 0x010a8000
int C_010a8000::sub_010a8000(void)
{
    int param_1 = (int)this;

  sub_0109db00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010a82f0
void sub_010a82f0(void) { sub_010a4b00(); }

// @baa 0x010a8300
void sub_010a8300(void) { sub_010a4b70(); }

// @baa 0x010a8310
void sub_010a8310(void) { sub_010a4be0(); }

// @baa 0x010a8320
void sub_010a8320(void) { sub_010a4c50(); }

// @baa 0x010a8330
void sub_010a8330(void) { sub_010a4d50(); }

// @baa 0x010a8340
void sub_010a8340(void) { sub_010a4dc0(); }

struct C_010a8350 {
    int sub_010a8350();
};

// @baa 0x010a8350
int C_010a8350::sub_010a8350(void)
{
    int param_1 = (int)this;

  sub_01097a10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a8370 {
    int sub_010a8370();
};

// @baa 0x010a8370
int C_010a8370::sub_010a8370(void)
{
    int param_1 = (int)this;

  sub_01097a70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a8390 {
    int sub_010a8390();
};

// @baa 0x010a8390
int C_010a8390::sub_010a8390(void)
{
    int param_1 = (int)this;

  sub_01097ad0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a83b0 {
    int sub_010a83b0();
};

// @baa 0x010a83b0
int C_010a83b0::sub_010a83b0(void)
{
    int param_1 = (int)this;

  sub_01097b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a83d0 {
    int sub_010a83d0();
};

// @baa 0x010a83d0
int C_010a83d0::sub_010a83d0(void)
{
    int param_1 = (int)this;

  sub_01097b90();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010a83f0 {
    int sub_010a83f0();
};

// @baa 0x010a83f0
int C_010a83f0::sub_010a83f0(void)
{
    int param_1 = (int)this;

  sub_01097bf0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010aae50
void sub_010aae50(void) { sub_010a5290(); }

// @baa 0x010aae60
void sub_010aae60(void) { sub_010a5540(); }

// @baa 0x010aaed0
void sub_010aaed0(void) { sub_010a55b0(); }

// @baa 0x010aaee0
void sub_010aaee0(void) { sub_010a5860(); }

struct S_010abd90 {
    void sub_010a5960(void);
    void sub_010abd90(void);
};

// @baa 0x010abd90
void S_010abd90::sub_010abd90(void) {
    sub_010a5960();
}

// @baa 0x010ac990
int UTexture2D::sub_010ac990(void)
{
    int param_1 = (int)this;

  sub_0109d410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010ac9b0 {
    void sub_010ac9b0();
    int sub_010a6bc0(int);
};

// @baa 0x010ac9b0
void C_010ac9b0::sub_010ac9b0(void)
{
    int param_1 = (int)this;
  ((C_010ac9b0 *)(this))->sub_010a6bc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

struct C_010ac9c0 {
    int sub_010ac9c0();
};

// @baa 0x010ac9c0
int C_010ac9c0::sub_010ac9c0(void)
{
    int param_1 = (int)this;

  sub_0109d4d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010acd20 {
    int sub_010acd20();
};

// @baa 0x010acd20
int C_010acd20::sub_010acd20(void)
{
    int param_1 = (int)this;

  sub_0109d530();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010ad080 {
    int sub_010ad080();
};

// @baa 0x010ad080
int C_010ad080::sub_010ad080(void)
{
    int param_1 = (int)this;

  sub_0109d590();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010ad0a0 {
    int sub_010ad0a0();
};

// @baa 0x010ad0a0
int C_010ad0a0::sub_010ad0a0(void)
{
    int param_1 = (int)this;

  sub_0109daa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010ad0c0 {
    int sub_010ad0c0();
};

// @baa 0x010ad0c0
int C_010ad0c0::sub_010ad0c0(void)
{
    int param_1 = (int)this;

  sub_0109db00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010ad0e0 { void sub_010a8020(int); C_010ad0e0 *sub_010ad0e0(int); };

// @baa 0x010ad0e0
C_010ad0e0 *C_010ad0e0::sub_010ad0e0(int a) { sub_010a8020(a); return this; }

struct C_010ad210 { void sub_010a8200(int); C_010ad210 *sub_010ad210(int); };

// @baa 0x010ad210
C_010ad210 *C_010ad210::sub_010ad210(int a) { sub_010a8200(a); return this; }

// @baa 0x010ad260
void sub_010ad260(void) { sub_010a4b00(); }

// @baa 0x010ad270
void sub_010ad270(void) { sub_010a4b70(); }

// @baa 0x010ad280
void sub_010ad280(void) { sub_010a4be0(); }

// @baa 0x010ad350
void sub_010ad350(void) { sub_010a4c50(); }

// @baa 0x010ad360
void sub_010ad360(void) { sub_010a4d50(); }

// @baa 0x010ad370
void sub_010ad370(void) { sub_010a4dc0(); }

// @baa 0x010ada50
void sub_010ada50(void) { sub_010a5290(); }

// @baa 0x010ada60
void sub_010ada60(void) { sub_010a5540(); }

// @baa 0x010ada70
void sub_010ada70(void) { sub_010a55b0(); }

// @baa 0x010ada80
void sub_010ada80(void) { sub_010a5860(); }

void sub_006d2a30();
// @baa 0x010ada90
void sub_010ada90(void) { sub_006d2a30(); }

// @baa 0x010ae2e0
void sub_010ae2e0(void) { sub_010a5960(); }

struct C_010af2d0 { void sub_010a8020(int); C_010af2d0 *sub_010af2d0(int); };

// @baa 0x010af2d0
C_010af2d0 *C_010af2d0::sub_010af2d0(int a) { sub_010a8020(a); return this; }

struct C_010af2f0 {
    void sub_010af2f0();
    int sub_010ad100(int);
};

// @baa 0x010af2f0
void C_010af2f0::sub_010af2f0(void)
{
    int param_1 = (int)this;
  ((C_010af2f0 *)((*(char **)((char *)this + 0x10))))->sub_010ad100(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_010af3b0 { void sub_010a8200(int); C_010af3b0 *sub_010af3b0(int); };

// @baa 0x010af3b0
C_010af3b0 *C_010af3b0::sub_010af3b0(int a) { sub_010a8200(a); return this; }

// @baa 0x010af480
int sub_005c7a70(...);
int sub_010af3d0(void);
// @baa 0x010af490
undefined4 UPersistentCookerData::sub_010af490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010af3d0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x13c);
  }
  return param_1;
}

// @baa 0x010af8a0
void sub_010af8a0(void) { sub_010a5540(); }

// @baa 0x010af8b0
void sub_010af8b0(void) { sub_010a5860(); }

// @baa 0x010b1b60
struct C_010b1c20 { void sub_010a8020(int); C_010b1c20 *sub_010b1c20(int); };

// @baa 0x010b1c20
C_010b1c20 *C_010b1c20::sub_010b1c20(int a) { sub_010a8020(a); return this; }

struct C_010b1e30 { void sub_010a8200(int); C_010b1e30 *sub_010b1e30(int); };

// @baa 0x010b1e30
C_010b1e30 *C_010b1e30::sub_010b1e30(int a) { sub_010a8200(a); return this; }

int sub_0103e6a0(void);
// @baa 0x010b1e50
undefined4 UTexture2D::sub_010b1e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0103e6a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010b2790 {
    int sub_010b2790(undefined4);
    int sub_010b2710(int);
};

// @baa 0x010b2790
int C_010b2790::sub_010b2790(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_010b2790 *)(this))->sub_010b2710(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

int sub_0108ce30(void);
int sub_010b1b60(...);
extern undefined4 g_026ce514;
// @baa 0x010b27b0
void sub_010b27b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026ce514 == 0) {
    g_026ce514 = sub_010b1b60(L"Editor");
    sub_0108ce30();
  }
  sub_005d88c0(g_026ce514,param_1,param_2,param_3);
  return;
}

void sub_010b26a0();
// @baa 0x010b4d10
void sub_010b4d10(void) { sub_010b26a0(); }

struct C_view_010b5120 {
    int sub_010b5030(int);
};

// @baa 0x010b5120
void UTexture2D::sub_010b5120(void)
{
    int param_1 = (int)this;
  ((C_view_010b5120 *)((*(char **)((char *)this + 0x10))))->sub_010b5030(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_0109d470(void);
// @baa 0x010b5140
int UTexture2D::sub_010b5140(void)
{
    int param_1 = (int)this;

  sub_0109d470();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010b5230
int UTexture2D::sub_010b5230(void)
{
    int param_1 = (int)this;

  sub_0109d470();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x010b5480
int UTexture2D::sub_010b5480(void)
{
    int param_1 = (int)this;

  sub_0109d470();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010b54a0 { void sub_010b5250(int); C_010b54a0 *sub_010b54a0(int); };

// @baa 0x010b54a0
C_010b54a0 *C_010b54a0::sub_010b54a0(int a) { sub_010b5250(a); return this; }

// @baa 0x010b54c0
int UTexture2D::sub_010b54c0(void)
{
    int param_1 = (int)this;

  sub_0109d470();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_010b54e0 { void sub_010b5250(int); C_010b54e0 *sub_010b54e0(int); };

// @baa 0x010b54e0
C_010b54e0 *C_010b54e0::sub_010b54e0(int a) { sub_010b5250(a); return this; }

struct C_010b5500 { void sub_010b5250(int); C_010b5500 *sub_010b5500(int); };

// @baa 0x010b5500
C_010b5500 *C_010b5500::sub_010b5500(int a) { sub_010b5250(a); return this; }

struct C_view_010b5620 {
    int sub_010b55a0(int);
};

// @baa 0x010b5620
int UTexture2D::sub_010b5620(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_010b5620 *)(this))->sub_010b55a0(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

int sub_01054330(void);
// @baa 0x010b5640
undefined4 UTexture2D::sub_010b5640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01054330();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_010b59e0 {
    void sub_010b59e0();
    int sub_010b5950(int);
};

// @baa 0x010b59e0
void C_010b59e0::sub_010b59e0(void)
{
    int param_1 = (int)this;
  ((C_010b59e0 *)((*(char **)((char *)this + 0x10))))->sub_010b5950(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_010b5c50(void);
// @baa 0x010b5df0
undefined4 UCookPackagesCommandlet::sub_010b5df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010b5c50();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1114);
  }
  return param_1;
}

// @baa 0x010b5e20
// @baa 0x010b5e30
struct D_01e25c60 { void sub_010a4ce0(); };

extern D_01e25c60 g_026ce54c;
// @baa 0x01e25c60
void sub_01e25c60() { g_026ce54c.sub_010a4ce0(); }
