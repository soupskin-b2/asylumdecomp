// GenericDlgOptions.cpp: 31 functions
// Placed here by: callers 17, file 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0115b4f0
void UOptions2DShaper::InitializeIntrinsicPropertyValues()
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x34) = 2;
  return;
}

// @baa 0x0115b500
void sub_0115b500(void) {  }

// @baa 0x0115b510
void UOptions2DShaperExtrude::InitializeIntrinsicPropertyValues()
{ *(int*)((char*)this + 56) = 256; }

// @baa 0x0115b520
void UOptions2DShaperExtrudeToPoint::InitializeIntrinsicPropertyValues()
{ *(int*)((char*)this + 56) = 256; }

// @baa 0x0115b530
void UOptions2DShaperExtrudeToBevel::InitializeIntrinsicPropertyValues()
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = 0x80;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  return;
}

// @baa 0x0115b540
void UOptions2DShaperRevolve::InitializeIntrinsicPropertyValues()
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = 0xc;
  *(undefined4 *)(param_1 + 0x3c) = 3;
  return;
}

// @baa 0x0115b550
void UOptions2DShaperBezierDetail::InitializeIntrinsicPropertyValues()
{ *(int*)((char*)this + 48) = 10; }

// @baa 0x01160520
IMPLEMENT_CLASS_AT(UOptionsProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 15);

// @baa 0x01160540
IMPLEMENT_CLASS_AT(UOptions2DShaper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 48);

// @baa 0x01160560
IMPLEMENT_CLASS_AT(UOptions2DShaperSheet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 67);

// @baa 0x01160580
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrude, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 91);

// @baa 0x011605a0
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrudeToPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 115);

// @baa 0x011605c0
IMPLEMENT_CLASS_AT(UOptions2DShaperExtrudeToBevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 141);

// @baa 0x011605e0
IMPLEMENT_CLASS_AT(UOptions2DShaperRevolve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 167);

// @baa 0x01160600
IMPLEMENT_CLASS_AT(UOptions2DShaperBezierDetail, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 189);

// @baa 0x01161ca0
// @baa 0x01161d60
// @baa 0x01161e20
// @baa 0x011735d0
IMPLEMENT_CLASS_AT(UOptionsDupObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 215);

// @baa 0x01173600
IMPLEMENT_CLASS_AT(UOptionsNewClassFromSel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\GenericDlgOptions.cpp", 239);

// @baa 0x01179680
// @baa 0x01179740
// @baa 0x01179800
// @baa 0x011798c0
// @baa 0x01179980
// @baa 0x01179a40
// @baa 0x01179b00

int sub_005c7a20(void);
extern undefined * g_021cfb30;
struct C_0115bef0 { undefined4 * sub_0115bef0(void); };
// @baa 0x0115bef0
undefined4 * C_0115bef0::sub_0115bef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021cfb30);
  return param_1;
}

// @baa 0x0115bf10
int sub_0115bf10(int a0, int a1) { return a1; }

// @baa 0x01161f00
/* Default package and class names for the "new class from selection" dialog. */
void UOptionsNewClassFromSel::InitializeIntrinsicPropertyValues()
{
	Package = TEXT("MyLevel");
	Name = TEXT("MyClass");
}

// @baa 0x01161ee0
/* Default package and object names for the duplicate-object dialog. */
void UOptionsDupObject::InitializeIntrinsicPropertyValues()
{
	Package = TEXT("MyLevel");
	Name = TEXT("NewObject");
}
