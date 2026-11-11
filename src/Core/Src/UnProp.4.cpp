// UnProp.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x0062ada0
INT UObjectProperty::Identical(INT A, INT B, INT PortFlags)
{
    UObject* ObjectA = A ? *(UObject**)A : NULL;
    UObject* ObjectB = B ? *(UObject**)B : NULL;
    return ObjectA == ObjectB;
}

// @baa 0x0062b180
void UNameProperty::SerializeItem( FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults ) const
{
	Ar << *(FName*)Value;
}

struct UComponentProperty_ : public UComponentProperty {
    FName sub_0062f570() const;
};

// @baa 0x0062f570
FName UComponentProperty_::sub_0062f570() const
{
    FName Result = { 5, 0 }; // NAME_ObjectProperty
    return Result;
}

// @baa 0x0062b200
// @baa 0x0062b200
INT UStrProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062aa70
INT UDelegateProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062b0b0
INT UInterfaceProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062b2b0
// UArrayProperty::GetPropertyValue
// Virtual (vtable slot 79). Signature from Classes.h: INT GetPropertyValue(INT, INT).
// Same body as UNameProperty::GetPropertyValue: copy the property value into the
// caller's out slot and report success.
int UArrayProperty::GetPropertyValue(int a0, int a1)
{
    int Result = 0;
    if (a0)
    {
        *(int*)a1 = a0;
        Result = 1;
    }
    return Result;
}

struct C_0053ea70 {
    int sub_0053ea70(int a1, int a2);
};

// @baa 0x0062e100
int UIntProperty::vf_130(int Obj, int a2, int a3)
{
    ((C_0053ea70*)Obj)->sub_0053ea70(a3, 4);
    return 1;
}

struct UClass_ : public UClass
{
    void sub_005f2bf0(int Offset);
};

// @baa 0x0062e130
void UDelegateProperty::StaticConstructor()
{
    UClass* C = Class;
    ((UClass_*)C)->sub_005f2bf0(0x70);
    ((UClass_*)C)->sub_005f2bf0(0x74);
}

struct C_0053ea70_0062e600
{
	int sub_0053ea70(int Value, int Count);
};

// @baa 0x0062e600
int UFloatProperty::vf_130(int Object, int a2, int a3)
{
	C_0053ea70_0062e600* This = (C_0053ea70_0062e600*)Object;
	This->sub_0053ea70(a3, 4);
	return 1;
}

// @baa 0x0062ed50
void UMapProperty::StaticConstructor()
{
    UClass* C = Class;
    ((UClass_*)C)->sub_005f2bf0(0x70);
    ((UClass_*)C)->sub_005f2bf0(0x74);
}
