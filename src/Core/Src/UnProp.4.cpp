// UnProp.cpp: 75 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Implement.h"

// @baa 0x0062ada0
UBOOL UObjectProperty::Identical(const void* A, const void* B, DWORD PortFlags) const
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

// @baa 0x0062f570
FName UComponentProperty::GetID() const
{
    FName Result(NAME_ObjectProperty); // NAME_ObjectProperty
    return Result;
}

// @baa 0x0062b200
// @baa 0x0062b200
UBOOL UStrProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.StringValue = (FString*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062aa70
UBOOL UDelegateProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.DelegateValue = (FScriptDelegate*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062b0b0
UBOOL UInterfaceProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.InterfaceValue = (FScriptInterface*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062b2b0
// UArrayProperty::GetPropertyValue
// Virtual (vtable slot 79). Signature from Classes.h: INT GetPropertyValue(INT, INT).
// Same body as UNameProperty::GetPropertyValue: copy the property value into the
// caller's out slot and report success.
UBOOL UArrayProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.ArrayValue = (TArray<BYTE>*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062e100
UBOOL UIntProperty::NetSerializeItem(FArchive& Obj, UPackageMap* a2, void* a3) const
{
    Obj.ByteOrderSerialize(a3, 4);
    return 1;
}

// @baa 0x0062e130
void UDelegateProperty::StaticConstructor()
{
    UClass* C = Class;
    ((UClass*)C)->EmitObjectReference(0x70);
    ((UClass*)C)->EmitObjectReference(0x74);
}

// @baa 0x0062e600
UBOOL UFloatProperty::NetSerializeItem(FArchive& Object, UPackageMap* a2, void* a3) const
{
	Object.ByteOrderSerialize(a3, 4);
	return 1;
}

// @baa 0x0062ed50
void UMapProperty::StaticConstructor()
{
    UClass* C = Class;
    ((UClass*)C)->EmitObjectReference(0x70);
    ((UClass*)C)->EmitObjectReference(0x74);
}

// @baa 0x005ebc90
UBOOL UProperty::ContainsObjectReference() const { return 0; }

// @baa 0x005ebd50
UBOOL UMapProperty::ContainsObjectReference() const { return 0; }

// @baa 0x005ebd70
void UProperty::EmitReferenceInfo(struct FGCReferenceTokenStream* a0, INT a1) {  }

// @baa 0x005ebd80
void UMapProperty::EmitReferenceInfo(struct FGCReferenceTokenStream* a0, INT a1) {  }

// @baa 0x005fa780
UBOOL UProperty::RequiresInit() const { return 0; }

struct C_005faab0 { int a, b, c; C_005faab0(); };

// @baa 0x005faab0
C_005faab0::C_005faab0() : a(0), b(0), c(0) {}

struct C_005faac0 { int sub_005faac0(void); };
// @baa 0x005faac0
int C_005faac0::sub_005faac0(void) { return *(int*)((char*)this + 0); }

struct C_005faad0 { int sub_005faad0(void); };
// @baa 0x005faad0
int C_005faad0::sub_005faad0(void) { return *(int*)((char*)this + 0); }

struct C_005faae0 { int sub_005faae0(void); };
// @baa 0x005faae0
int C_005faae0::sub_005faae0(void) { return *(int*)((char*)this + 0); }

struct C_005faaf0 { int sub_005faaf0(void); };
// @baa 0x005faaf0
int C_005faaf0::sub_005faaf0(void) { return *(int*)((char*)this + 20); }

struct C_005fab00 { int sub_005fab00(int param_2); };
// @baa 0x005fab00
int C_005fab00::sub_005fab00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x006005b0
const TCHAR* UProperty::ImportText(const TCHAR* Buffer, BYTE* Data, INT PortFlags, UObject* OwnerObject, FOutputDevice* ErrorText) const PURE_VIRTUAL(UProperty::ImportText, return NULL;)

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
void UProperty::CopySingleValue(void* InValue, void* OutValue, UObject* C, UObject* D, struct FObjectInstancingGraph* E) const
{
	sub_01a375f0(InValue, OutValue, ElementSize);
}

// @baa 0x0062a7b0
void UProperty::DestroyValue(void* a0) const {  }

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

// @baa 0x0063efa0
void UStructProperty::ExportTextItem(FString& ValueStr, const BYTE* PropertyValue, const BYTE* DefaultValue, UObject* Parent, INT PortFlags) const
{
    UStructProperty_ExportTextItem(Struct, ValueStr, PropertyValue, DefaultValue, Parent, PortFlags);
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
UBOOL UIntProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.IntValue = *(INT*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062ad40
UBOOL UFloatProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.FloatValue = *(FLOAT*)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062aa20
UBOOL UIntProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(INT*)PropertyValueAddress = PropertyValue.IntValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062ae90
UBOOL UObjectProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.ObjectValue = *(UObject**)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062af30
// @baa 0x0062af30
UBOOL UClassProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.ClassValue = *(UClass**)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062af50
// 0062af50
UBOOL UClassProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(UClass**)PropertyValueAddress = PropertyValue.ClassValue;
        bResult = TRUE;
    }
    return bResult;
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
UBOOL UFloatProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(FLOAT*)PropertyValueAddress = PropertyValue.FloatValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062afd0
// 0x0062afd0: copy the property's value into Value, reporting success.
UBOOL UComponentProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        out_PropertyValue.ComponentValue = *(UComponent**)PropertyValueAddress;
        bResult = TRUE;
    }
    return bResult;
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

// @baa 0x0062a7e0
/* Whether the property is localized (CPF_Localized). */
UBOOL UProperty::IsLocalized() const
{
	return (PropertyFlags & 0x8000) ? TRUE : FALSE;
}

// @baa 0x0062a8a0
/* Whether the byte is nonzero; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UByteProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? *(BYTE*)Data != 0 : 0;
}

// @baa 0x0062a970
UBOOL UIntProperty::Identical(const void* A, const void* B, DWORD PortFlags) const
{
	return *(INT*)A == (B ? *(INT*)B : 0);
}

// @baa 0x0062a9a0
/* Whether the int is nonzero; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UIntProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? *(INT*)Data != 0 : 0;
}

// @baa 0x0062a9d0
/* Zeroes the int; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UIntProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		*(INT*)Data = 0;
	}
}

// @baa 0x0062aa50
/* CopySingleValue: copies the delegate. */
void UDelegateProperty::CopySingleValue(void* Dest, void* Src, UObject* SubobjectRoot, UObject* DestOwnerObject, struct FObjectInstancingGraph* InstanceGraph) const
{
	*(FScriptDelegate*)Dest = *(FScriptDelegate*)Src;
}

// @baa 0x0062aa90
/* Writes the delegate the value points to into the property's storage. */
UBOOL UDelegateProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(FScriptDelegate*)PropertyValueAddress = *PropertyValue.DelegateValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062ad10
/* Zeroes the float; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UFloatProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		*(FLOAT*)Data = 0.f;
	}
}

// @baa 0x0062ade0
void UObjectProperty::SerializeItem(FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults) const
{
	Ar << *(UObject**)Value;
}

// @baa 0x0062ae30
/* Whether the reference is set; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UObjectProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? *(UObject**)Data != NULL : 0;
}

// @baa 0x0062ae60
/* Clears the reference; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UObjectProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		*(UObject**)Data = NULL;
	}
}

// @baa 0x0062b050
/* CopySingleValue: copies the interface reference. */
void UInterfaceProperty::CopySingleValue(void* Dest, void* Src, UObject* SubobjectRoot, UObject* DestOwnerObject, struct FObjectInstancingGraph* InstanceGraph) const
{
	*(FScriptInterface*)Dest = *(FScriptInterface*)Src;
}

// @baa 0x0062b0d0
/* Writes the interface reference the value points to into the property's storage. */
UBOOL UInterfaceProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(FScriptInterface*)PropertyValueAddress = *PropertyValue.InterfaceValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062b110
/* CopySingleValue: copies the name. */
void UNameProperty::CopySingleValue(void* Dest, void* Src, UObject* SubobjectRoot, UObject* DestOwnerObject, struct FObjectInstancingGraph* InstanceGraph) const
{
	*(FName*)Dest = *(FName*)Src;
}

// @baa 0x0062b1c0
/* Writes the name the value points to into the property's storage. */
UBOOL UNameProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(FName*)PropertyValueAddress = *PropertyValue.NameValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062b740
/* Whether the property has flag 0x400000 (CPF_Component). */
UBOOL UProperty::ContainsInstancedObjectProperty() const
{
	return (PropertyFlags & 0x400000) ? TRUE : FALSE;
}

// @baa 0x0062e0e0
void UIntProperty::SerializeItem(FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults) const
{
	Ar.ByteOrderSerialize(Value, sizeof(INT));
}

// @baa 0x0062e5e0
void UFloatProperty::SerializeItem(FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults) const
{
	Ar.ByteOrderSerialize(Value, sizeof(FLOAT));
}

// @baa 0x0062e940
/* Resets the name to NAME_None; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UNameProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		*(FName*)Data = NAME_None;
	}
}

// @baa 0x0062e370
void UDelegateProperty::SerializeItem(FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults) const
{
	Ar << ((FScriptDelegate*)Value)->Object << ((FScriptDelegate*)Value)->FunctionName;
}

// @baa 0x0062e3a0
/* NetSerializeItem(Ar, Map, Data): the delegate goes over the wire as its object and function name. */
UBOOL UDelegateProperty::NetSerializeItem(FArchive& Ar, UPackageMap* Map, void* Data) const
{
	Ar << ((FScriptDelegate*)Data)->Object << ((FScriptDelegate*)Data)->FunctionName;
	return 1;
}

// @baa 0x0062e440
/* Clears the delegate; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UDelegateProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		((FScriptDelegate*)Data)->Object = NULL;
		((FScriptDelegate*)Data)->FunctionName = NAME_None;
	}
}

// @baa 0x00639310
/* CopySingleValue: copies the string. */
void UStrProperty::CopySingleValue(void* Dest, void* Src, UObject* SubobjectRoot, UObject* DestOwnerObject, struct FObjectInstancingGraph* InstanceGraph) const
{
	*(FString*)Dest = *(FString*)Src;
}

// @baa 0x006393f0
/* Writes the string the value points to into the property's storage. */
UBOOL UStrProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const
{
    UBOOL bResult = FALSE;
    if (PropertyValueAddress != NULL)
    {
        *(FString*)PropertyValueAddress = *PropertyValue.StringValue;
        bResult = TRUE;
    }
    return bResult;
}

// @baa 0x0062a7c0
/* NetSerializeItem(Ar, Map, Data): plain serialization. */
UBOOL UProperty::NetSerializeItem(FArchive& Ar, UPackageMap* Map, void* Data) const
{
	SerializeItem(Ar, Data, 0, NULL);
	return 1;
}

// @baa 0x0062aca0
UBOOL UFloatProperty::Identical(const void* A, const void* B, DWORD PortFlags) const
{
	return *(FLOAT*)A == (B ? *(FLOAT*)B : 0.f);
}

// @baa 0x0062acd0
/* Whether the float is nonzero; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UFloatProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? *(FLOAT*)Data != 0.f : 0;
}

// @baa 0x0062b130
/* CopyCompleteValue: copies every element of the name array. */
void UNameProperty::CopyCompleteValue(void* Dest, void* Src, UObject* SubobjectRoot, UObject* DestOwnerObject, FObjectInstancingGraph* InstanceGraph) const
{
	if (ArrayDim == 1)
	{
		*(FName*)Dest = *(FName*)Src;
	}
	else
	{
		for (INT i = 0; i < ArrayDim; i++)
		{
			((FName*)Dest)[i] = ((FName*)Src)[i];
		}
	}
}

/* FScriptInterface's accessors (UnObjBas.h), which the kit's plain struct lacks */
inline UObject* GetObject(const FScriptInterface& I) { return I.Object; }

inline void* GetInterface(const FScriptInterface& I) { return I.Object ? I.Interface : NULL; }

// @baa 0x0062e760
UBOOL UInterfaceProperty::Identical(const void* A, const void* B, DWORD PortFlags) const
{
	FScriptInterface* InterfaceA = (FScriptInterface*)A;
	FScriptInterface* InterfaceB = (FScriptInterface*)B;
	if (InterfaceB == NULL)
	{
		return GetObject(*InterfaceA) == NULL;
	}
	return GetObject(*InterfaceA) == GetObject(*InterfaceB) && GetInterface(*InterfaceA) == GetInterface(*InterfaceB);
}

// @baa 0x0062e800
/* Whether an interface is set; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UInterfaceProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? GetInterface(*(FScriptInterface*)Data) != NULL : 0;
}

// @baa 0x006305c0
/* Whether the string is non-empty; with PPF_LocalizedOnly (0x80), only for localized properties. */
UBOOL UStrProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
	return ((PortFlags & 0x80) == 0 || IsLocalized()) ? ((FString*)Data)->Len() > 0 : 0;
}

// @baa 0x006319b0
/* Zeroes the byte; with PPF_LocalizedOnly (0x80), only for localized properties. */
void UByteProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
#line 691 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp"
	check(Data);
	if ((PortFlags & 0x80) == 0 || IsLocalized())
	{
		*Data = 0;
	}
}

#line 681 "candidate.cpp"

// @baa 0x0062de80
FName UProperty::GetID() const
{
	return GetClass()->GetFName();
}
