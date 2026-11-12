// UnClass.cpp (part 2 of 2): 15 functions
// Placed here by: neighbours 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00575580
UScriptStruct::UScriptStruct()
{
    *(DWORD*)((BYTE*)this + 0x84) = 0;
    *(DWORD*)((BYTE*)this + 0x88) = 0;
    *(DWORD*)((BYTE*)this + 0x8c) = 0;
    *(DWORD*)((BYTE*)this + 0x94) = 0;
    *(DWORD*)((BYTE*)this + 0x98) = 0;
    *(DWORD*)((BYTE*)this + 0x9c) = 0;
}

struct C {
    undefined4 sub_00588e90(byte);
};

int sub_0053dfa0(...);
int sub_00588400(void);
// @baa 0x00588e90
undefined4 C::sub_00588e90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00588eb0 {
    undefined4 sub_00588eb0(byte);
};

// @baa 0x00588eb0
undefined4 C_00588eb0::sub_00588eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00588ed0 {
    undefined4 sub_00588ed0(byte);
};

// @baa 0x00588ed0
undefined4 C_00588ed0::sub_00588ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00567f30 {
    undefined4 sub_00565c50();
};

struct UClass_ : public UClass
{
    void sub_005f2bf0(UField* UField::* Field);
};

// @baa 0x00567f30
void UField::StaticConstructor()
{
    UClass* C_00567f30 = Class;
    ((UClass_*)C_00567f30)->sub_005f2bf0(&UField::SuperField);
    ((UClass_*)C_00567f30)->sub_005f2bf0(&UField::Next);
}

// @baa 0x00567f50
void UField::vf_114(void) {  }

// @baa 0x00567f80
void UField::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	Ar << SuperField << Next;
}

// @baa 0x00567fb0
int UField::vf_118(void) { return 0; }

// @baa 0x00567fc0
int UField::vf_110(void) { return 1; }

// @baa 0x00568010
IMPLEMENT_CLASS_AT(UField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 86);

// @baa 0x00568120
int UField::vf_000(void) { return 1; }

// @baa 0x00568130
bool UField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00568580
int UConst::vf_000(void) { return 1; }

// @baa 0x0058aa40
IMPLEMENT_CLASS_AT(UConst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 2357);

/* Kit gap: UObject::ConditionalRegister (0x005c7a50) isn't declared. */
struct UObject_ : public UObject
{
    void ConditionalRegister(); /* 0x005c7a50 */
};

// @baa 0x00567ff0
/* Registering a field registers its super field first. */
void UField::Register()
{
    Super::Register();
    if (SuperField)
    {
        ((UObject_*)SuperField)->ConditionalRegister();
    }
}
