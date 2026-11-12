// UnProp.cpp: 42 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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
    FName Result((EName)5); // NAME_ObjectProperty
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

// @baa 0x005ebc90
int UProperty::vf_16c(void) { return 0; }

// @baa 0x005ebd50
int UMapProperty::vf_16c(void) { return 0; }

// @baa 0x005ebd70
void UProperty::vf_178(int a0, int a1) {  }

// @baa 0x005ebd80
void UMapProperty::vf_178(int a0, int a1) {  }

// @baa 0x005fa780
int UProperty::vf_160(void) { return 0; }

struct C_005faab0 { int a, b, c; C_005faab0(); };

// @baa 0x005faab0
C_005faab0::C_005faab0() : a(0), b(0), c(0) {}

// @baa 0x005faac0
int UArrayProperty::sub_005faac0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faad0
int UArrayProperty::sub_005faad0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faae0
int UArrayProperty::sub_005faae0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005faaf0
int UArrayProperty::sub_005faaf0(void) { return *(int*)((char*)this + 20); }

// @baa 0x005fab00
int UArrayProperty::sub_005fab00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

/* GError->Logf: a variadic member, so cdecl with `this` pushed first. */
struct FOutputDeviceError_ {
    void sub_00630f20(const TCHAR* Fmt, ...);
};

extern FOutputDeviceError_* g_026667a8;
// @baa 0x006005b0
INT UProperty::ImportText(INT, INT, INT, INT, INT)
{
    g_026667a8->sub_00630f20(TEXT("Pure virtual not implemented (%s)"), TEXT("UProperty::ImportText"));
    return 0;
}

struct M_00600650 { void sub_0040fcc0(); };

struct C_00600650 { char pad[44]; M_00600650 m; void sub_00600650(); };

// @baa 0x00600650
void C_00600650::sub_00600650() { m.sub_0040fcc0(); }

int sub_0040fcc0(void);

struct C_00600660 {
    int sub_00600660();
};

// @baa 0x00600660
int C_00600660::sub_00600660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

extern "C" void* sub_01a375f0(void* Dst, const void* Src, DWORD Size);
// @baa 0x0062a740
void UProperty::vf_144(INT* InValue, INT* OutValue, INT C, INT D, INT E)
{
	sub_01a375f0(InValue, OutValue, ElementSize);
}

// @baa 0x0062a7b0
void UProperty::vf_154(int a0) {  }

// @baa 0x0062a800
void __stdcall sub_0062a800(int a0, int a1) {  }

struct S005a15a0 {
    int sub_005a15a0(int a1, int a2, int a3);
};

struct S00639730 {
    char pad[0x70];
    S005a15a0 *field_70;
    __declspec(noinline) int sub_00639730(int a1, int a2, int a3) {
        return field_70->sub_005a15a0(a1, a2, a3);
    }
};

// @baa 0x00639730
int sub_00639730_ref(S00639730 *p, int a, int b, int c) {
    return p->sub_00639730(a, b, c);
}

int sub_0063ec80(...);
// @baa 0x0063efa0
void UStructProperty::ExportTextItem(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;

  sub_0063ec80(*(undefined4 *)(param_1 + 0x70),param_2,param_3,param_4,param_5,param_6);
  return;
}

// @baa 0x0062a8d0
// 0x0062a8d0
// Copy a single byte out of a source buffer into a destination slot, if the source
// is valid. Returns whether the source was present.
int __stdcall sub_0062a8d0(const BYTE* Source, BYTE* Value)
{
    INT Result = 0;
    if (Source)
    {
        *Value = *Source;
        Result = 1;
    }
    return Result;
}

// @baa 0x0062a8f0
UINT __stdcall sub_0062a8f0(BYTE* Value, BYTE* Data)
{
	UINT Result = 0;
	if (Value)
	{
		*Value = *Data;
		Result = 1;
	}
	return Result;
}

// @baa 0x0062aa00
INT UIntProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    INT Value = 0;
    if (PropertyValueAddress)
    {
        Value = *(INT*)PropertyValueAddress;
        *(INT*)OutValue = Value;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062ad40
INT UFloatProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(FLOAT*)OutValue = *(FLOAT*)PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062aa20
UINT UIntProperty::SetPropertyValue(UINT* Value, INT* Source)
{
    UINT bResult = 0;
    if (Value)
    {
        *Value = *Source;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062ae90
INT UObjectProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = *(INT*)PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062af30
// @baa 0x0062af30
INT UClassProperty::GetPropertyValue(INT PropertyValueAddress, INT OutValue)
{
    UBOOL bResult = 0;
    if (PropertyValueAddress)
    {
        *(INT*)OutValue = *(INT*)PropertyValueAddress;
        bResult = 1;
    }
    return bResult;
}

// @baa 0x0062af50
// 0062af50
UINT UClassProperty::SetPropertyValue(UINT* InValue, INT* InSource)
{
	UINT bSet = 0;
	if (InValue != 0)
	{
		*InValue = *InSource;
		bSet = 1;
	}
	return bSet;
}

// @baa 0x0062aeb0
UINT __stdcall sub_0062aeb0(UINT* Dest, UINT* Source)
{
	UINT Result = 0;
	if (Dest != NULL)
	{
		*Dest = *Source;
		Result = 1;
	}
	return Result;
}

// @baa 0x0062ad60
UINT UFloatProperty::SetPropertyValue(UINT* Dest, INT* Src)
{
    UINT Result = 0;
    if (Dest)
    {
        *(FLOAT*)Dest = *(FLOAT*)Src;
        Result = 1;
    }
    return Result;
}

// @baa 0x0062afd0
// 0x0062afd0: copy the property's value into Value, reporting success.
INT UComponentProperty::GetPropertyValue(INT PropertyAddress, INT Value)
{
	INT Result = 0;
	if (PropertyAddress != 0)
	{
		*(INT*)Value = *(INT*)PropertyAddress;
		Result = 1;
	}
	return Result;
}

// @baa 0x0062aff0
UINT __stdcall sub_0062aff0(UINT* Value, INT* InValue)
{
    UINT bResult = 0;
    if (Value != NULL)
    {
        *Value = *InValue;
        bResult = 1;
    }
    return bResult;
}
