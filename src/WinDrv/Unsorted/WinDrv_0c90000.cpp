// WinDrv_0c90000.cpp: 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c97610
int sub_00c97610(int a0, int a1) { return a1; }

struct C {
    undefined4 sub_00c97620();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_02085f28;
// @baa 0x00c97620
undefined4 C::sub_00c97620(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c) == 0) {
    sub_006311e0(&g_02085f28,
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\../Bink/Src/UnCodecBink.h"
                 ,0x9c,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 0x3c);
}

struct C_00c97650 { C_00c97650* sub_00c97650(void); };

// @baa 0x00c97650
C_00c97650* C_00c97650::sub_00c97650(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_00c97660 { C_00c97660* sub_00c97660(void); };

// @baa 0x00c97660
C_00c97660* C_00c97660::sub_00c97660(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x00c97670
IMPLEMENT_CLASS_AT(UCodecMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 9);

// @baa 0x00c97780
int UCodecMovie::vf_000(void) { return 1; }

// @baa 0x00c97790
bool UCodecMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c977d0
int UCodecMovieFallback::vf_000(void) { return 1; }

// @baa 0x00c977e0
int UCodecMovieBink::vf_000(void) { return 1; }

// @baa 0x00c97960
undefined4 sub_00c97960(void)
{
  return 1;
}

struct C_00c97a00 {
    void sub_00c97a00(undefined4);
    int sub_00c978f0(int);
};

int sub_007161b0(...);
// @baa 0x00c97a00
void C_00c97a00::sub_00c97a00(undefined4 param_2)
{
    int param_1 = (int)this;
  sub_007161b0(param_2,param_1 + 0x78);
  ((C_00c97a00 *)(this))->sub_00c978f0(param_2);
  return;
}

// @baa 0x00c97a30
int sub_00c97a30(void) { return 1; }

void sub_007249d0();
// @baa 0x00c97a40
void sub_00c97a40(void) { sub_007249d0(); }

struct C_view {
    int sub_00739650(int);
};

extern undefined4 g_02086048;
extern undefined * g_02086050;
// @baa 0x00c97a50
undefined4 * UCodecMovieBink::sub_00c97a50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_02086050);
  param_1[5] = (undefined4)(&g_02086048);
  return param_1;
}

// @baa 0x00c97a70
undefined4 sub_00c97a70(void)
{
  return 1;
}

// @baa 0x00c97a80
void sub_00c97a80(void) { sub_007249d0(); }

struct Iface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

// @baa 0x00c97a90
void sub_00c97a90(Iface *p)
{
    p->v6();
}

// @baa 0x00c97ac0
void sub_00c97ac0(void) {  }

// @baa 0x00c97b00
IMPLEMENT_CLASS_AT(UCodecMovieBink, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCodecs.cpp", 11);
