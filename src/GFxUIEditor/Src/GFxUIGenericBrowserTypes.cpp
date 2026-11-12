// GFxUIGenericBrowserTypes.cpp: 30 functions
// Placed here by: class 11, neighbours 9, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x014fa1e0
IMPLEMENT_CLASS_AT(UGenericBrowserType_GFxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIGenericBrowserTypes.cpp", 277);

// @baa 0x014fa2f0
int UGenericBrowserType_GFxMovie::vf_000(void) { return 1; }

// @baa 0x014fa300
bool UGenericBrowserType_GFxMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014fa340
int UGenericBrowserType_GFxMovie::vf_110(void) { return 0; }

// @baa 0x014fa350
int sub_014fa350(void) { return 0; }

// @baa 0x014fa360
void UGenericBrowserType_GFxMovie::vf_120(int a0, int a1) {  }

// @baa 0x014fa370
void UGenericBrowserType_GFxMovie::vf_12c(void) {  }

int sub_014f9c60(void);
int sub_014faaa0(...);
extern undefined4 g_026def90;
// @baa 0x014fb080
int sub_014fb080(void)
{
  if (g_026def90 == 0) {
    g_026def90 = sub_014faaa0(L"GFxUIEditor");
    sub_014f9c60();
  }
  return g_026def90;
}

int sub_005c7a20(void);
extern undefined * g_022cc3f8;
// @baa 0x014fb0b0
undefined4 * UObject::sub_014fb0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022cc3f8);
  return param_1;
}

// @baa 0x014fb0d0
IMPLEMENT_CLASS_AT(UGFxMovieThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIMovieThumbnailRenderer.cpp", 27);

// @baa 0x014fb130
// @baa 0x014fccf0
// @baa 0x014fcd50
extern undefined * g_022cc9d8;
// @baa 0x014fcd70
undefined4 * UObject::sub_014fcd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022cc9d8);
  return param_1;
}

// @baa 0x014fcd90
IMPLEMENT_CLASS_AT(UGenericBrowserType_GFxMovieInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIGenericBrowserTypes.cpp", 150);

// @baa 0x014fcdf0
int sub_014fa720(void);
int sub_014fcb50(...);
extern undefined4 g_026defac;
// @baa 0x014fce10
int sub_014fce10(void)
{
  if (g_026defac == 0) {
    g_026defac = sub_014fcb50(L"GFxUIEditor");
    sub_014fa720();
  }
  return g_026defac;
}

// @baa 0x014fd0b0
// @baa 0x014fd0d0
struct A_014fd170 { virtual void sub_014fd230(); char pad[96]; };

struct B_014fd170 { virtual void sub_014fd230(); };

struct C_014fd170 : A_014fd170, B_014fd170 { virtual void sub_014fd230(); C_014fd170(); };

C_014fd170::C_014fd170() {}

// @baa 0x014fd170
void C_014fd170::sub_014fd230() {}

int sub_005c7a70(...);
int sub_014fd180(void);
// @baa 0x014fd230
undefined4 UGenericBrowserType_GFxMovie::sub_014fd230(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014fd180();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

// @baa 0x014fd670
// @baa 0x014fdf20

// @baa 0x014fa020

// @baa 0x014fa130
int UGenericBrowserType_GFxMovieInfo::vf_000(void) { return 1; }

// @baa 0x014fa140
bool UGenericBrowserType_GFxMovieInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

class wxMenuBase;
class wxMenuBase {
    public:
    public: __declspec(dllimport) void Enable(int,bool);
    friend struct C_014fa180;
};

struct C_014fa180 {
    void sub_014fa180(int);
    int sub_0115ae90(int);
};

// @baa 0x014fa180
void C_014fa180::sub_014fa180(int param_2)
{
    wxMenuBase * param_1 = (wxMenuBase *)this;
  ((C_014fa180 *)(this))->sub_0115ae90(param_2);
  ((wxMenuBase *)(param_1))->wxMenuBase::Enable(*(int *)(*(int *)(param_1 + 0x8c) + 8), param_2 == 0);
  return;
}

// @baa 0x014fa1b0
int UGenericBrowserType_GFxMovieInfo::vf_110(void) { return 0; }

// @baa 0x014fa1c0
int sub_014fa1c0(void) { return 0; }

// @baa 0x014fa1d0
void UGenericBrowserType_GFxMovieInfo::vf_12c(void) {  }
