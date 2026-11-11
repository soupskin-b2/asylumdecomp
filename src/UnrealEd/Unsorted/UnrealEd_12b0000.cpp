// UnrealEd_12b0000.cpp: 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_012b02d0(byte);
};

int sub_0053dfa0(...);
int sub_012ade60(void);
// @baa 0x012b02d0
undefined4 C::sub_012b02d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012ade60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_012b1110(void);
// @baa 0x012b44f0
undefined4 UObject::sub_012b44f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012b1110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_012afbc0(...);
int sub_012b1e30(void);
extern undefined4 g_026d55dc;
// @baa 0x012b55f0
int sub_012b55f0(void)
{
  if (g_026d55dc == 0) {
    g_026d55dc = sub_012afbc0(L"UnrealEd");
    sub_012b1e30();
  }
  return g_026d55dc;
}

int sub_012afc80(...);
int sub_012b1f80(void);
extern undefined4 g_026d55e0;
// @baa 0x012b5620
int sub_012b5620(void)
{
  if (g_026d55e0 == 0) {
    g_026d55e0 = sub_012afc80(L"UnrealEd");
    sub_012b1f80();
  }
  return g_026d55e0;
}

int sub_012afd40(...);
int sub_012b20d0(void);
extern undefined4 g_026d55e4;
// @baa 0x012b5650
int sub_012b5650(void)
{
  if (g_026d55e4 == 0) {
    g_026d55e4 = sub_012afd40(L"UnrealEd");
    sub_012b20d0();
  }
  return g_026d55e4;
}

int sub_012afe00(...);
int sub_012b2220(void);
extern undefined4 g_026d55e8;
// @baa 0x012b5680
int sub_012b5680(void)
{
  if (g_026d55e8 == 0) {
    g_026d55e8 = sub_012afe00(L"UnrealEd");
    sub_012b2220();
  }
  return g_026d55e8;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0223039c;
// @baa 0x012bfa50
undefined4 * UUnrealEdEngine::sub_012bfa50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223039c);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x012bfa70
void sub_012bfa70(void) { sub_00c38ac0(); }

extern undefined4 g_022303ac;
// @baa 0x012bfa80
undefined4 * UUnrealEdEngine::sub_012bfa80(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303ac);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfab0
void sub_012bfab0(void) { sub_00c38ac0(); }

extern undefined4 g_022303bc;
// @baa 0x012bfac0
undefined4 * UUnrealEdEngine::sub_012bfac0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303bc);
  return param_1;
}

// @baa 0x012bfae0
void sub_012bfae0(void) { sub_00c38ac0(); }

extern undefined4 g_022303cc;
// @baa 0x012bfaf0
undefined4 * UUnrealEdEngine::sub_012bfaf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303cc);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfb20
void sub_012bfb20(void) { sub_00c38ac0(); }

extern undefined4 g_022303dc;
// @baa 0x012bfb30
undefined4 * UUnrealEdEngine::sub_012bfb30(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303dc);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfb60
void sub_012bfb60(void) { sub_00c38ac0(); }

extern undefined4 g_022303ec;
// @baa 0x012bfb70
undefined4 * UUnrealEdEngine::sub_012bfb70(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303ec);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfba0
void sub_012bfba0(void) { sub_00c38ac0(); }

extern undefined4 g_022303fc;
// @baa 0x012bfbb0
undefined4 * UUnrealEdEngine::sub_012bfbb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_022303fc);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfbe0
void sub_012bfbe0(void) { sub_00c38ac0(); }

extern undefined4 g_0223040c;
// @baa 0x012bfbf0
undefined4 * UUnrealEdEngine::sub_012bfbf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0223040c);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x012bfc20
void sub_012bfc20(void) { sub_00c38ac0(); }

// @baa 0x012bfc30
void __stdcall sub_012bfc30(int a0, int a1) {  }

struct C_012bfcb0 {
    undefined4 sub_012bfcb0();
};

// @baa 0x012bfcb0
undefined4 C_012bfcb0::sub_012bfcb0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x398) + 0xac);
}

extern char g_025e8df0[];
// @baa 0x012bfcc0
int sub_012bfcc0(void) { return (int)g_025e8df0; }

extern char g_026d5eb8[];
// @baa 0x012bfcd0
int sub_012bfcd0(void) { return (int)g_026d5eb8; }

// @baa 0x012bff80
void __stdcall sub_012bff80(int a0) {  }

// @baa 0x012bffb0
void __stdcall sub_012bffb0(int a0, int a1) {  }

extern char g_025e8df8[];
// @baa 0x012bffd0
int sub_012bffd0(void) { return (int)g_025e8df8; }

extern char g_026d5ff0[];
// @baa 0x012bffe0
int sub_012bffe0(void) { return (int)g_026d5ff0; }

// @baa 0x012bfff0
wchar_t * sub_012bfff0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return L"VARIABLETYPE_Unknown";
  case 1:
    return L"VARIABLETYPE_Boolean";
  case 2:
    return L"VARIABLETYPE_Float";
  case 3:
    return L"VARIABLETYPE_FColor";
  case 4:
    return L"VARIABLETYPE_FVector";
  case 5:
    return L"VARIABLETYPE_FloatDist";
  case 6:
    return L"VARIABLETYPE_VectorDist";
  default:
    return L"UNKNOWN ENUM";
  }
}

class wxMenuBar
{
public:
    __declspec(dllimport) virtual ~wxMenuBar();
};

extern void* g_022306d0[];
struct C_012bff90 : public wxMenuBar
{
    void sub_012bff90();
};

// @baa 0x012bff90
void C_012bff90::sub_012bff90()
{
    *(void**)this = g_022306d0;
    ((wxMenuBar*)this)->wxMenuBar::~wxMenuBar();
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_022309b0[];
struct C_012bffa0 : public wxMenu
{
    void sub_012bffa0();
};

// @baa 0x012bffa0
void C_012bffa0::sub_012bffa0()
{
    *(void**)this = g_022309b0;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_02230a18[];
struct C_012bffc0 : public wxMenu
{
    void sub_012bffc0();
};

// @baa 0x012bffc0
void C_012bffc0::sub_012bffc0()
{
    *(void**)this = g_02230a18;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}
