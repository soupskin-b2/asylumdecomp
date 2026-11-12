// LensFlareEditor.cpp: 22 functions
// Placed here by: neighbours 5, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0145ed70
IMPLEMENT_CLASS_AT(ULensFlareEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 16);

// @baa 0x01461d10
// @baa 0x0146b020
IMPLEMENT_CLASS_AT(ULensFlarePreviewComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 17);

// @baa 0x0146d3a0
struct C { void sub_0146a9e0(); void sub_0146d560(int); };

// @baa 0x0146d560
void C::sub_0146d560(int) { sub_0146a9e0(); }

struct C_0146d570 { void sub_0146aa80(); void sub_0146d570(int); };

// @baa 0x0146d570
void C_0146d570::sub_0146d570(int) { sub_0146aa80(); }

// @baa 0x0146f600
IMPLEMENT_CLASS_AT(ULensFlareEditorPropertyWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 18);

// @baa 0x0146f8c0
struct C_01470a30 { void sub_0146fe00(); void sub_01470a30(int); };

// @baa 0x01470a30
void C_01470a30::sub_01470a30(int) { sub_0146fe00(); }

struct C_01471450 { int sub_01471450(void); };

// @baa 0x01471450
int C_01471450::sub_01471450(void) { return *(int*)((char*)this + 836); }

struct C_01471500 {
    undefined4 sub_01471500(byte);
};

int sub_0053dfa0(...);
int sub_01471490(void);
// @baa 0x01471500
undefined4 C_01471500::sub_01471500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01471490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0144ec60
void ULensFlarePreviewComponent::vf_250(int a0, int a1) {  }

// @baa 0x014503b0

// @baa 0x014504c0
int ULensFlarePreviewComponent::vf_000(void) { return 1; }

// @baa 0x014504d0
bool ULensFlarePreviewComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01450510

// @baa 0x01450620
int ULensFlareEditorPropertyWrapper::vf_000(void) { return 1; }

// @baa 0x01450630
bool ULensFlareEditorPropertyWrapper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005c7a20(void);
extern undefined * g_0229d1c8;
// @baa 0x01452cf0
undefined4 * UObject::sub_01452cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0229d1c8);
  return param_1;
}

void sub_01463a40();
// @baa 0x01468f20
void sub_01468f20(void) { sub_01463a40(); }

int sub_006f7810(void);
extern undefined * g_022a0f08;
// @baa 0x01468f30
undefined4 * UPrimitiveComponent::sub_01468f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_022a0f08);
  return param_1;
}

extern undefined * g_022a11b8;
// @baa 0x0146b040
undefined4 * UObject::sub_0146b040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a11b8);
  return param_1;
}
