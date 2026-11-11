// OnlineGameInterfaceImpl.cpp (part 1 of 5): 42 functions
// Placed here by: neighbours 30, class 9, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e28ee0
void sub_00e28ee0(int * param_1, undefined1 * param_2)
{
  if (param_1[2] + 1 <= param_1[1]) {
    *param_2 = *(undefined1 *)(param_1[2] + *param_1);
    param_1[2] = param_1[2] + 1;
    return;
  }
  param_1[3] = 1;
  return;
}

void sub_00e28f60();
// @baa 0x00e29070
void sub_00e29070(void) { sub_00e28f60(); }

int sub_00e28f60(...);
// @baa 0x00e29080
undefined4 sub_00e29080(undefined4 param_1, undefined4 param_2)
{
  sub_00e28f60(param_1,param_2);
  return param_1;
}

typedef uint size_t;

struct C {
    void sub_00e290a0(void *, size_t);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00e290a0
void C::sub_00e290a0(void * param_2, size_t param_3)
{
    int * param_1 = (int *)this;

  if ((int)(param_1[2] + param_3) <= param_1[1]) {
    sub_01a375f0(param_2,(void *)(*param_1 + param_1[2]),param_3);
    param_1[2] = param_1[2] + param_3;
    return;
  }
  param_1[3] = 1;
  return;
}

struct C_00e290e0 { int sub_00e290e0(void); };

// @baa 0x00e290e0
int C_00e290e0::sub_00e290e0(void) { return *(int*)((char*)this + 12); }

// @baa 0x00e2a150
int sub_00e2a150(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00e2a160
int sub_00e2a160(void) { return (int)g_01e3f3e0; }

struct C_00e2a1d0 { C_00e2a1d0* sub_00e2a1d0(int a0); };

// @baa 0x00e2a1d0
C_00e2a1d0* C_00e2a1d0::sub_00e2a1d0(int a0) { return this; }

// @baa 0x00e2a240
int sub_00e2a240(int a0, int a1) { return a1; }

// @baa 0x00e2a250
int sub_00e2a250(int a0, int a1) { return a1; }

// @baa 0x00e2a260
int sub_00e2a260(int a0, int a1) { return a1; }

struct IFace2 {
    virtual void m1();
    virtual void m2();
    virtual void m3();
};

struct C_00e2a390 {
    char pad[0x18];
    IFace2* p;
    void sub_00e2a390();
};

// @baa 0x00e2a390
void C_00e2a390::sub_00e2a390() { p->m3(); }

struct V_00e2a3a0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void g(int a0);
};

struct O_00e2a3a0 { char pad[24]; V_00e2a3a0* p; void sub_00e2a3a0(int a0); };

// @baa 0x00e2a3a0
void O_00e2a3a0::sub_00e2a3a0(int a0) { p->g(a0); }

extern char g_01e72a60[];
struct C_00e2a3f0 { void sub_00e2a3f0(void); };

// @baa 0x00e2a3f0
void C_00e2a3f0::sub_00e2a3f0(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_00e2a4c0 {
    void sub_00e2a4c0(undefined4);
};

int sub_00637c10(...);
// @baa 0x00e2a4c0
void C_00e2a4c0::sub_00e2a4c0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00637c10(param_2,param_1 + 8);
  return;
}

struct C_00e2a510 {
    void sub_00e2a510(undefined4);
};

// @baa 0x00e2a510
void C_00e2a510::sub_00e2a510(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00637c10(param_2,param_1 + 8);
  return;
}

struct C_00e2a530 { int sub_00e2a530(void); };

// @baa 0x00e2a530
int C_00e2a530::sub_00e2a530(void) { return *(int*)((char*)this + 36); }

// @baa 0x00e2a560
int sub_00e2a560(int a0, int a1) { return a1; }

void sub_00e2a570();
// @baa 0x00e2a6a0
void sub_00e2a6a0(void) { sub_00e2a570(); }

// @baa 0x00e2a6b0
void sub_00e2a6b0(void) { sub_00e2a570(); }

struct C_view {
    int sub_00df41a0(int);
};

int sub_00d56400(...);
// @baa 0x00e2a6c0
void UHTTPDownload::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00df41a0(param_2);
  sub_00d56400(param_2,param_1 + 0xa84);
  return;
}

// @baa 0x00e2aa40
IMPLEMENT_CLASS_AT(UHTTPDownload, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\HTTPDownload.cpp", 841);

// @baa 0x00e2ab50
int UHTTPDownload::vf_000(void) { return 1; }

// @baa 0x00e2ab60
bool UHTTPDownload::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e2b530
bool UOnlineGameInterfaceImpl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00e2d630();
// @baa 0x00e2fd60
void sub_00e2fd60(void) { sub_00e2d630(); }

int sub_00e2d5b0(...);
int sub_00e2d630(...);
int sub_00e30020(...);
// @baa 0x00e30170
undefined4 sub_00e30170(undefined4 param_1, int param_2)
{
  sub_00e2d630(param_1,param_2);
  sub_00e30020(param_1,param_2 + 4);
  sub_00e2d5b0(param_1,param_2 + 0x10);
  return param_1;
}

struct M_00e30b20 { void sub_0040fcc0(); };

struct C_00e30b20 { char pad[4]; M_00e30b20 m; void sub_00e30b20(); };

// @baa 0x00e30b20
void C_00e30b20::sub_00e30b20() { m.sub_0040fcc0(); }

struct M_00e30b70 { void sub_0040fcc0(); };

struct C_00e30b70 { char pad[8]; M_00e30b70 m; void sub_00e30b70(); };

// @baa 0x00e30b70
void C_00e30b70::sub_00e30b70() { m.sub_0040fcc0(); }

struct M_00e30bf0 { void sub_0040fcc0(); };

struct C_00e30bf0 { char pad[8]; M_00e30bf0 m; void sub_00e30bf0(); };

// @baa 0x00e30bf0
void C_00e30bf0::sub_00e30bf0() { m.sub_0040fcc0(); }

struct M_00e30c00 { void sub_0040fcc0(); };

struct C_00e30c00 { char pad[8]; M_00e30c00 m; void sub_00e30c00(); };

// @baa 0x00e30c00
void C_00e30c00::sub_00e30c00() { m.sub_0040fcc0(); }

// @baa 0x00e38320
INT UOnlineGameInterfaceImpl::vf_144() {
  return 0xffffffff;
}

// @baa 0x00e38330
INT UOnlineGameInterfaceImpl::vf_148() {
  return 0xffffffff;
}

// @baa 0x00e38340
UINT UOnlineGameInterfaceImpl::vf_14c(UINT a, UINT b) { return 0xFFFFFFFF; }

// @baa 0x00e38350
INT UOnlineGameInterfaceImpl::vf_150(INT a, INT b, INT c) { return 0xFFFFFFFF; }

struct C_00e38360 : UOnlineGameInterfaceImpl {
    virtual UINT sub_00e38360(UINT a);
};

// @baa 0x00e38360
UINT C_00e38360::sub_00e38360(UINT a) { return 0xFFFFFFFF; }

extern const C_00e38360 *g_useC;
// @baa 0x00e384c0
IMPLEMENT_CLASS_AT(UOnlineGameInterfaceImpl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\OnlineGameInterfaceImpl.cpp", 9);

// @baa 0x00e39c50
int sub_005c7a70(...);
int sub_00e3a0b0(void);
// @baa 0x00e3a140
undefined4 UHTTPDownload::sub_00e3a140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e3a0b0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb5c);
  }
  return param_1;
}

int sub_0053dfa0(...);
int sub_00e39ce0(void);
// @baa 0x00e3a170
undefined4 UHTTPDownload::sub_00e3a170(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e39ce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e3a1d0
// @baa 0x00e40df0
