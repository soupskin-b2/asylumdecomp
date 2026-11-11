// GFxUIEditorFactories.cpp (part 1 of 3): 21 functions
// Placed here by: neighbours 13, class 4, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00634620(); };

// @baa 0x00634620
void C::sub_00634620() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern undefined4 g_026ccd54;
// @baa 0x00f19cb0
void sub_00f19cb0(void)
{
  g_026ccd54 = 1;
  return;
}

// @baa 0x014f9e60
IMPLEMENT_CLASS_AT(UGFxMovieFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIEditorFactories.cpp", 27);

// @baa 0x014f9f70
int UGFxMovieFactory::vf_000(void) { return 1; }

// @baa 0x014f9f80
bool UGFxMovieFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_014fa5a0 {
    byte * sub_014fa5a0();
};

// @baa 0x014fa5a0
byte * C_014fa5a0::sub_014fa5a0(void)
{
    byte * param_1 = (byte *)this;

  return param_1 + ((uint)(*param_1 >> 3) * 4 + 0xc >> 3);
}

// @baa 0x014fa5c0
IMPLEMENT_CLASS_AT(UGFxReimportCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIMovieCustomImporter.cpp", 504);

// @baa 0x014fa6d0
int UGFxReimportCommandlet::vf_000(void) { return 1; }

// @baa 0x014fa6e0
bool UGFxReimportCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x014fa720
IMPLEMENT_CLASS_AT(UGFxMovieThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIMovieThumbnailRenderer.cpp", 27);

// @baa 0x014fa830
int UGFxMovieThumbnailRenderer::vf_000(void) { return 1; }

// @baa 0x014fa840
bool UGFxMovieThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_014fa890 { int a, b, c; C_014fa890(); };

// @baa 0x014fa890
C_014fa890::C_014fa890() : a(0), b(0), c(0) {}

int sub_005c7a20(void);
extern undefined * g_022ccc48;
// @baa 0x014ff080
undefined4 * UObject::sub_014ff080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022ccc48);
  return param_1;
}

// @baa 0x014ff0a0
// @baa 0x014ff100
int sub_014fa1e0(void);
int sub_014fdf20(...);
extern undefined4 g_026def9c;
// @baa 0x014ff120
int sub_014ff120(void)
{
  if (g_026def9c == 0) {
    g_026def9c = sub_014fdf20(L"GFxUIEditor");
    sub_014fa1e0();
  }
  return g_026def9c;
}

int sub_014fa020(void);
int sub_014fd670(...);
extern undefined4 g_026def98;
// @baa 0x014ff150
int sub_014ff150(void)
{
  if (g_026def98 == 0) {
    g_026def98 = sub_014fd670(L"GFxUIEditor");
    sub_014fa020();
  }
  return g_026def98;
}

// @baa 0x014ff180
// @baa 0x014ff190

// @baa 0x014fa880
// a GFx movie can be drawn whenever there is one
UBOOL UGFxMovieThumbnailRenderer::SupportsThumbnailRendering(UObject* Object, UBOOL bCheckObjectState)
{
    return Object != NULL;
}
