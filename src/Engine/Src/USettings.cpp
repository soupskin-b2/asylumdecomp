// USettings.cpp (part 1 of 2): 62 functions
// Placed here by: class 19, neighbours 11, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006be4b0
int sub_006be4b0(void) { return 0; }

// @baa 0x006be4c0
int sub_006be4c0(void) { return 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00cbe870(); };

// @baa 0x00cbe870
void C::sub_00cbe870() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d66ff0
int sub_00d66ff0(int a0, int a1) { return a1; }

// @baa 0x00d67000
int sub_00d67000(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00d67010
int sub_00d67010(void) { return (int)g_01e3f3e0; }

// @baa 0x00d67750
bool UOnlineSubsystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67790
int UOnlineGameSettings::vf_000(void) { return 1; }

// @baa 0x00d677a0
int UOnlineGameSearch::vf_000(void) { return 1; }

// @baa 0x00d677b0
IMPLEMENT_CLASS_AT(UOnlineGameplayEvents, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 12);

// @baa 0x00d678c0
int UOnlineGameplayEvents::vf_000(void) { return 1; }

// @baa 0x00d678d0
bool UOnlineGameplayEvents::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67950
undefined4 sub_00d67950(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x00d679e0
IMPLEMENT_CLASS_AT(USettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\USettings.cpp", 7);

// @baa 0x00d67af0
int USettings::vf_000(void) { return 1; }

// @baa 0x00d67b00
bool USettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67b40
void USettings::sub_00d67b40(undefined4 * param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x01') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    return;
  }
  *param_2 = 0;
  return;
}

// @baa 0x00d67b60
void USettings::sub_00d67b60(undefined4 * param_2)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\x02') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    param_2[1] = *(undefined4 *)(param_1 + 8);
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

typedef uint size_t;

int sub_0053df40(...);
void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00d67bb0
void USettings::sub_00d67bb0(undefined4 * param_2, undefined4 * param_3)
{
    char * param_1 = (char *)this;

  undefined4 uVar1;
  void *_Dst;
  
  if (*param_1 == '\x06') {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *param_2 = uVar1;
    _Dst = (void *)sub_0053df40(uVar1,8);
    *param_3 = (undefined4)(_Dst);
    sub_01a375f0(_Dst,*(void **)(param_1 + 8),*(size_t *)(param_1 + 4));
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// @baa 0x00d67c00
void USettings::sub_00d67c00(undefined4 * param_2, undefined4 * param_3)
{
    char * param_1 = (char *)this;

  if (*param_1 == '\a') {
    *param_2 = *(undefined4 *)(param_1 + 4);
    *param_3 = *(undefined4 *)(param_1 + 8);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// @baa 0x00d67d50
undefined4 USettings::sub_00d67d50(float param_2)
{
    char * param_1 = (char *)this;
  if ((*param_1 == '\x05') && (param_2 == *(float *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}

// @baa 0x00d67e00
undefined4 USettings::sub_00d67e00(double param_2)
{
    char * param_1 = (char *)this;
  if ((*param_1 == '\x03') && (param_2 == *(double *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}

struct FSettingsDataView {
    BYTE Type;
    FLOAT Value;
};

struct USettings_ {
    FLOAT sub_00d67f90(const FSettingsDataView& Data);
};

// @baa 0x00d67f90
FLOAT USettings_::sub_00d67f90(const FSettingsDataView& Data)
{
    FLOAT Value;
    if (Data.Type == 5)
        Value = Data.Value;
    else
        Value = 0.f;
    return Value;
}

struct C_00d70990{
int sub_00d70990(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00d70990
int C_00d70990::sub_00d70990(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1)||(iVar3)){
iVar3=sub_0053df70(*param_1,0xc*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+0xc*iVar2);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_00d78700 { void* Data; int Num; int Max; void sub_00d78700(); };

// @baa 0x00d78700
void C_00d78700::sub_00d78700() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
struct L { int a,b,c; int sub_00489970(int); void sub_0040fcc0(); ~L(){ sub_0040fcc0();} };

struct Dt { L sub_00d797a0(); int sub_00d6e4a0(int); int d[4]; };

struct E { int Id; Dt Data; };

struct Del { int sub_00784f80(void*); };

#define V4(n) virtual void n##a(){} virtual void n##b(){} virtual void n##c(){} virtual void n##d(){}
#define V16(n) V4(n##1) V4(n##2) V4(n##3) V4(n##4)
#define V64(n) V16(n##1) V16(n##2) V16(n##3) V16(n##4)
struct S {
 V64(x) V16(y)
 virtual int v(int,int,int*);
 int pad[(0x3c-4)/4]; TArray<E> Properties; int pad2[(0x6c-0x48)/4];
 Del dlg;
 int sub_00d66f70(int,int);
 int sub_00d79ec0(int a,int b,int c);
};

// @baa 0x00d79ec0
int S::sub_00d79ec0(int a,int b,int c){
 int id;
 if(!v(a,b,&id)) return 0;
 for(int i=0;i<Properties.Num();i++){
  if(Properties(i).Id==id){
   int r = Properties(i).Data.sub_00d797a0().sub_00489970(c);
   if(!Properties(i).Data.sub_00d6e4a0(c)) return 0;
   if(r && dlg.sub_00784f80(this)) sub_00d66f70(a,b);
   return 1;
  }
 }
 return 0; }

// @baa 0x00d884a0
// @baa 0x00d88530
int sub_005c7a20(void);
extern undefined * g_020b6d88;
// @baa 0x00d88550
undefined4 * UObject::sub_00d88550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b6d88);
  return param_1;
}

// @baa 0x00d88650
int sub_00d88650(void) { return 1; }

// @baa 0x00d88680
int USettings::sub_00d88680(void) { return *(int*)((char*)this + 4); }

struct A_00d88690 { virtual void sub_00d88980(); char pad[44]; };

struct B_00d88690 { virtual void sub_00d88980(); };

struct C_00d88690 : A_00d88690, B_00d88690 { virtual void sub_00d88980(); C_00d88690(); };

C_00d88690::C_00d88690() {}

// @baa 0x00d88690
void C_00d88690::sub_00d88980() {}

int sub_005c7a70(...);
int sub_00d888c0(void);
// @baa 0x00d88980
undefined4 USettings::sub_00d88980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d888c0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xc0);
  }
  return param_1;
}

// @baa 0x00d8ab30
// @baa 0x00d8af90

// @baa 0x00d74320
/* The string a settings value holds, or an empty string when it isn't a string. */
FString USettings::GetSettingsDataString(FSettingsData& Data)
{
	FString Result;
	if (Data.Type == SDT_String && Data.Value2.Dummy != 0)
	{
		Result = (const TCHAR*)Data.Value2.Dummy;
	}
	else
	{
		Result = TEXT("");
	}
	return Result;
}

/* Kit gap: UE3's global operator delete[] (appFree, the exe's out-of-line copy 0053dfa0) isn't declared next to
 * Implement.h's operator delete. */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

// @baa 0x00d67f60
/* Frees what a settings value holds and empties it. */
void USettings::EmptySettingsData(FSettingsData& Data)
{
	// Free the string or blob it holds.
	if (Data.Type == SDT_String)
	{
		delete [] (TCHAR*)Data.Value2.Dummy;
	}
	else if (Data.Type == SDT_Blob)
	{
		delete [] (BYTE*)Data.Value2.Dummy;
	}
	Data.Type = SDT_Empty;
	Data.Value1 = 0;
	Data.Value2.Dummy = 0;
}

// @baa 0x00d67fc0
/* The integer a settings value holds, or 0 when it isn't one. */
INT USettings::GetSettingsDataInt(FSettingsData& Data)
{
	if (Data.Type == SDT_Int32)
	{
		return Data.Value1;
	}
	return 0;
}

// @baa 0x00d6e670
/* Makes a settings value a float. */
void USettings::SetSettingsDataFloat(FSettingsData& Data, FLOAT InFloat)
{
	INT Value;
	*(FLOAT*)&Value = InFloat;
	EmptySettingsData(Data);
	Data.Type = SDT_Float;
	Data.Value1 = Value;
}

// @baa 0x00d6e6c0
/* Makes a settings value a 32-bit integer. */
void USettings::SetSettingsDataInt(FSettingsData& Data, INT InInt)
{
	EmptySettingsData(Data);
	Data.Type = SDT_Int32;
	Data.Value1 = InInt;
}

/* Kit gap: USettings' FSettingsData helpers (USettings.h) aren't declared. */
struct USettings__00d6e700 : public USettings
{
	void SetSettingsDataDateTime(FSettingsData& Data, INT InPart1, INT InPart2); /* 0x00d6e700 */
	void GetSettingsDataDateTime(FSettingsData& Data, INT& OutPart1, INT& OutPart2); /* 0x00d67fe0 */
};

// @baa 0x00d6e700
/* Makes a settings value a date/time pair. */
void USettings__00d6e700::SetSettingsDataDateTime(FSettingsData& Data, INT InPart1, INT InPart2)
{
	EmptySettingsData(Data);
	Data.Type = SDT_DateTime;
	Data.Value1 = InPart1;
	Data.Value2.Dummy = InPart2;
}

/* Kit gap: USettings' FSettingsData helpers (USettings.h) aren't declared. */
struct USettings__00d67fe0 : public USettings
{
	void SetSettingsDataDateTime(FSettingsData& Data, INT InPart1, INT InPart2); /* 0x00d6e700 */
	void GetSettingsDataDateTime(FSettingsData& Data, INT& OutPart1, INT& OutPart2); /* 0x00d67fe0 */
};

// @baa 0x00d67fe0
/* The date/time pair a settings value holds, or zeros when it isn't one. */
void USettings__00d67fe0::GetSettingsDataDateTime(FSettingsData& Data, INT& OutPart1, INT& OutPart2)
{
	if (Data.Type == SDT_DateTime)
	{
		OutPart1 = Data.Value1;
		OutPart2 = Data.Value2.Dummy;
	}
	else
	{
		OutPart1 = 0;
		OutPart2 = 0;
	}
}

/* Kit gaps: UE3's global operator new[] / delete[] (appMalloc/appFree, the exe's out-of-line copies 0053df40 /
 * 0053dfa0) aren't declared next to Implement.h's new/delete, nor is FSettingsData's structcpptext (CleanUp and
 * the SetData overloads). */
inline void* __cdecl operator new[](unsigned int Size) { return sub_0053df40(Size, DEFAULT_ALIGNMENT); }

struct FSettingsData_ : public FSettingsData
{
	/* Frees the string or blob this holds and empties it. */
	inline void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	void SetData(const TCHAR* InString);
};

// @baa 0x00d6e1f0
/* Makes this a string value holding its own copy of InString. */
void FSettingsData_::SetData(const TCHAR* InString)
{
	CleanUp();
	Type = SDT_String;
	if (InString != NULL)
	{
		Value1 = (INT)wcslen(InString);
		TCHAR* String = new TCHAR[Value1 + 1];
		Value2.Dummy = (INT)String;
		if (Value1 > 0)
		{
			wcscpy_s(String, Value1 + 1, InString);
		}
		else
		{
			*String = 0;
		}
	}
}

/* Kit gap: FSettingsData's structcpptext (the SetData overloads and operator=) isn't declared. Its CleanUp is
 * folded with ~FSettingsData (00d67c50), which is what this calls. */
struct FSettingsData__00d74260 : public FSettingsData
{
	void SetData(const TCHAR* InString); /* 0x00d6e1f0 */
	void SetData(INT InSize, const BYTE* InData); /* 0x00d6e390 */
	FSettingsData__00d74260& operator=(const FSettingsData__00d74260& Other);
};

// @baa 0x00d74260
/* Copies another settings value, duplicating the string or blob it owns. */
FSettingsData__00d74260& FSettingsData__00d74260::operator=(const FSettingsData__00d74260& Other)
{
	if (this != &Other)
	{
		if (Other.Type == SDT_String)
		{
			SetData((const TCHAR*)Other.Value2.Dummy);
		}
		else if (Other.Type == SDT_Blob)
		{
			SetData(Other.Value1, (const BYTE*)Other.Value2.Dummy);
		}
		else
		{
			// CleanUp(), then a plain copy.
			this->~FSettingsData__00d74260();
			memcpy(this, &Other, sizeof(FSettingsData));
		}
	}
	return *this;
}

/* Kit gaps: FString has no operator* (UnString.h); FSettingsData's SetData overloads (structcpptext) and USettings'
 * FSettingsData helpers aren't declared. */
struct FStringM_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

struct FSettingsData__00d6e620 : public FSettingsData
{
	void SetData(const TCHAR* InString); /* 0x00d6e1f0 */
	FSettingsData__00d6e620& operator=(const FSettingsData__00d6e620& Other); /* 0x00d74260 */
};

struct USettings__00d6e620 : public USettings
{
	void SetSettingsDataString(FSettingsData& Data, const FString& InString);
	void SetSettingsData(FSettingsData& Data, FSettingsData& Data2Copy);
};

// @baa 0x00d6e620
/* Makes a settings value a string. */
void USettings__00d6e620::SetSettingsDataString(FSettingsData& Data, const FString& InString)
{
	Data.SetData(*(const FStringM_&)InString);
}

/* Copies one settings value into another. */
void USettings__00d6e620::SetSettingsData(FSettingsData& Data, FSettingsData& Data2Copy)
{
	Data = (FSettingsData__00d6e620&)Data2Copy;
}

struct FSettingsData__00d74300 : public FSettingsData
{
	void SetData(const TCHAR* InString); /* 0x00d6e1f0 */
	FSettingsData__00d74300& operator=(const FSettingsData__00d74300& Other); /* 0x00d74260 */
};

struct USettings__00d74300 : public USettings
{
	void SetSettingsDataString(FSettingsData& Data, const FString& InString);
	void SetSettingsData(FSettingsData& Data, FSettingsData& Data2Copy);
};

/* Makes a settings value a string. */
void USettings__00d74300::SetSettingsDataString(FSettingsData& Data, const FString& InString)
{
	Data.SetData(*(const FStringM_&)InString);
}

// @baa 0x00d74300
/* Copies one settings value into another. */
void USettings__00d74300::SetSettingsData(FSettingsData& Data, FSettingsData& Data2Copy)
{
	(FSettingsData__00d74300&)Data = (FSettingsData__00d74300&)Data2Copy;
}

/* Kit gaps: FSettingsData's structcpptext (the SetData/GetData blob overloads) and USettings' blob helpers aren't
 * declared. */
struct FSettingsData__00d742e0 : public FSettingsData
{
	void SetData(DWORD InSize, const BYTE* InData); /* 0x00d6e390 */
	void GetData(TArray<BYTE>& OutData) const; /* 0x00d79720 */
};

struct USettings__00d742e0 : public USettings
{
	void SetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& Blob);
	void GetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& OutBlob);
};

// @baa 0x00d742e0
/* Makes a settings value a blob holding a copy of Blob. */
void USettings__00d742e0::SetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& Blob)
{
	Data.SetData(Blob.Num(), Blob.GetTypedData());
}

/* Copies out the blob a settings value holds. */
void USettings__00d742e0::GetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& OutBlob)
{
	Data.GetData(OutBlob);
}

/* Kit gaps: FSettingsData's structcpptext (the SetData/GetData blob overloads) and USettings' blob helpers aren't
 * declared. */
struct FSettingsData__00d799d0 : public FSettingsData
{
	void SetData(DWORD InSize, const BYTE* InData); /* 0x00d6e390 */
	void GetData(TArray<BYTE>& OutData) const; /* 0x00d79720 */
};

struct USettings__00d799d0 : public USettings
{
	void SetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& Blob);
	void GetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& OutBlob);
};

/* Makes a settings value a blob holding a copy of Blob. */
void USettings__00d799d0::SetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& Blob)
{
	Data.SetData(Blob.Num(), Blob.GetTypedData());
}

// @baa 0x00d799d0
/* Copies out the blob a settings value holds. */
void USettings__00d799d0::GetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& OutBlob)
{
	Data.GetData(OutBlob);
}

/* Kit gap: the structcpptext of FSettingsData (operator=), FSettingsProperty (copy constructor, operator=) and
 * FOnlineProfileSetting (operator=) isn't declared. */
struct FSettingsData__00d79460 : public FSettingsData
{
	FSettingsData__00d79460& operator=(const FSettingsData__00d79460& Other); /* 0x00d74260 */
};

struct FSettingsProperty_ : public FSettingsProperty
{
	FSettingsProperty_(const FSettingsProperty_& Other);
	FSettingsProperty_& operator=(const FSettingsProperty_& Other)
	{
		if (&Other != this)
		{
			PropertyId = Other.PropertyId;
			Data = (const FSettingsData__00d79460&)Other.Data;
		}
		return *this;
	}
};

struct FOnlineProfileSetting_ : public FOnlineProfileSetting
{
	FOnlineProfileSetting_& operator=(const FOnlineProfileSetting_& Other);
};

/* Copies the id and (a deep copy of) the data. */
FSettingsProperty_::FSettingsProperty_(const FSettingsProperty_& Other)
{
	PropertyId = Other.PropertyId;
	(FSettingsData__00d79460&)Data = (const FSettingsData__00d79460&)Other.Data;
}

// @baa 0x00d79460
/* Copies the owner and the setting. */
FOnlineProfileSetting_& FOnlineProfileSetting_::operator=(const FOnlineProfileSetting_& Other)
{
	if (&Other != this)
	{
		Owner = Other.Owner;
		(FSettingsProperty_&)ProfileSetting = (const FSettingsProperty_&)Other.ProfileSetting;
	}
	return *this;
}

// @baa 0x00d745e0
/* The value index of a string setting; FALSE when there's no such setting. */
UBOOL USettings::GetStringSettingValue(INT StringSettingId, INT& ValueIndex)
{
	for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
	{
		if (LocalizedSettings(Index).Id == StringSettingId)
		{
			ValueIndex = LocalizedSettings(Index).ValueIndex;
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x00d749a0
/* The name of a string setting; NAME_None when there's no such setting. */
FName USettings::GetStringSettingName(INT StringSettingId)
{
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Id == StringSettingId)
		{
			return LocalizedSettingsMappings(Index).Name;
		}
	}
	return NAME_None;
}

/* Kit gap: FName has no operator== (UnName.h). */
// @baa 0x00d748e0
/* The id of the string setting with this name; FALSE when there's none. */
UBOOL USettings::GetStringSettingId(FName StringSettingName, INT& StringSettingId)
{
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Name == StringSettingName)
		{
			StringSettingId = LocalizedSettingsMappings(Index).Id;
			return TRUE;
		}
	}
	return FALSE;
}

/* Kit gaps: FSettingsData::GetData (structcpptext) and USettings::FindProperty (inline in UnOnlineSubsystem/Settings headers) isn't declared. */
struct FSettingsData__00d75800 : public FSettingsData
{
	FORCEINLINE void GetData(FLOAT& OutData) const
	{
		if (Type == SDT_Float)
		{
			OutData = *(const FLOAT*)&Value1;
		}
	}
};

struct USettings__00d75800 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
};

// @baa 0x00d75800
/* The value of a float property; FALSE when there's no such property or it isn't a float. */
UBOOL USettings::GetFloatProperty(INT PropertyId, FLOAT& Value)
{
	UBOOL bFound = FALSE;
	FSettingsProperty* Property = ((USettings__00d75800*)this)->FindProperty(PropertyId);
	if (Property != NULL)
	{
		if (Property->Data.Type == SDT_Float)
		{
			((const FSettingsData__00d75800&)Property->Data).GetData(Value);
			bFound = TRUE;
		}
	}
	return bFound;
}

/* Kit gap: TArray::AddItem isn't declared; this element type's copy is out of line (00d70990). */
template<class T> struct TArrayAddItem_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x00d76540
/* Adds the string settings advertised through QoS to QoSSettings. */
void USettings::GetQoSAdvertisedStringSettings(TArray<FLocalizedStringSetting>& QoSSettings)
{
	for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
	{
		if (LocalizedSettings(Index).AdvertisementType == ODAT_QoS ||
			LocalizedSettings(Index).AdvertisementType == ODAT_OnlineServiceAndQoS)
		{
			((TArrayAddItem_<FLocalizedStringSetting>&)QoSSettings).AddItem(LocalizedSettings(Index));
		}
	}
}

// @baa 0x00d7da70
/* Adds the properties advertised through QoS to QoSProps. */
void USettings::GetQoSAdvertisedProperties(TArray<FSettingsProperty>& QoSProps)
{
	for (INT Index = 0; Index < Properties.Num(); Index++)
	{
		if (Properties(Index).AdvertisementType == ODAT_QoS ||
			Properties(Index).AdvertisementType == ODAT_OnlineServiceAndQoS)
		{
			((TArrayAddItem_<FSettingsProperty>&)QoSProps).AddItem(Properties(Index));
		}
	}
}

/* Kit gaps: FSettingsData::GetData (structcpptext) and USettings::FindProperty (USettings.h) aren't declared. */
struct FSettingsData__00d76460 : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
	FORCEINLINE void GetData(FLOAT& OutData) const
	{
		if (Type == SDT_Float)
		{
			OutData = *(const FLOAT*)&Value1;
		}
		else
		{
			OutData = 0.f;
		}
	}
};

struct USettings__00d76460 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
};

// @baa 0x00d76460
/* A ranged property's value as a float (ints are converted); FALSE when there's no such property. */
UBOOL USettings::GetRangedPropertyValue(INT PropertyId, FLOAT& OutValue)
{
	FSettingsProperty* Property = ((USettings__00d76460*)this)->FindProperty(PropertyId);
	if (Property != NULL)
	{
		switch (Property->Data.Type)
		{
			case SDT_Int32:
			{
				INT Value;
				((const FSettingsData__00d76460&)Property->Data).GetData(Value);
				OutValue = (FLOAT)Value;
				break;
			}
			case SDT_Float:
			{
				((const FSettingsData__00d76460&)Property->Data).GetData(OutValue);
				break;
			}
			default:
			{
				Property = NULL;
				break;
			}
		}
	}
	return Property != NULL;
}

struct FScriptDelegate_ : public FScriptDelegate
{
	UBOOL IsCallable(const UObject* OwningObject) const; /* 0x00784f80 */
};

struct FSettingsData__00d75890 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
	}
};

struct USettings__00d75890 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
	void delegateNotifyPropertyValueUpdated(FName PropertyName); /* 0x00d66f70 */
};

// @baa 0x00d75890
/* Sets an int property (only when it already holds an int) and tells the NotifyPropertyValueUpdated delegate. */
void USettings::SetIntProperty(INT PropertyId, INT Value)
{
	FSettingsProperty* Property = ((USettings__00d75890*)this)->FindProperty(PropertyId);
	if (Property != NULL && Property->Data.Type == SDT_Int32)
	{
		((FSettingsData__00d75890&)Property->Data).SetData(Value);
		if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
		{
			this->delegateNotifyPropertyValueUpdated(GetPropertyName(PropertyId));
		}
	}
}

/* Kit gap: FSettingsData::ToString (structcpptext, out of line at 00d797a0) isn't declared. */
struct FSettingsData__00d79d10 : public FSettingsData
{
	FString ToString() const; /* 0x00d797a0 */
};

// @baa 0x00d79d10
/* A property's value as a string; empty when there's no such property. */
FString USettings::GetPropertyAsString(INT PropertyId)
{
	for (INT Index = 0; Index < Properties.Num(); Index++)
	{
		if (Properties(Index).PropertyId == PropertyId)
		{
			return ((const FSettingsData__00d79d10&)Properties(Index).Data).ToString();
		}
	}
	return FString();
}

struct FSettingsData__00d75710 : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE void SetData(FLOAT InData)
	{
		INT Value;
		*(FLOAT*)&Value = InData;
		CleanUp();
		Type = SDT_Float;
		Value1 = Value;
	}
};

struct USettings__00d75710 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
	void delegateNotifyPropertyValueUpdated(FName PropertyName); /* 0x00d66f70 */
};

// @baa 0x00d75710
/* Sets a float property (only when it already holds a float) and tells the NotifyPropertyValueUpdated delegate. */
void USettings::SetFloatProperty(INT PropertyId, FLOAT Value)
{
	FSettingsProperty* Property = ((USettings__00d75710*)this)->FindProperty(PropertyId);
	if (Property != NULL && Property->Data.Type == SDT_Float)
	{
		((FSettingsData__00d75710&)Property->Data).SetData(Value);
		if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
		{
			this->delegateNotifyPropertyValueUpdated(GetPropertyName(PropertyId));
		}
	}
}

struct FSettingsData__00d759f0 : public FSettingsData
{
	void SetData(const FString& InString); /* 0x00d6e290 */
};

struct USettings__00d759f0 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
	void delegateNotifyPropertyValueUpdated(FName PropertyName); /* 0x00d66f70 */
};

// @baa 0x00d759f0
/* Sets a string property (only when it already holds a string) and tells the NotifyPropertyValueUpdated delegate. */
void USettings::SetStringProperty(INT PropertyId, const FString& Value)
{
	FSettingsProperty* Property = ((USettings__00d759f0*)this)->FindProperty(PropertyId);
	if (Property != NULL && Property->Data.Type == SDT_String)
	{
		Property->Data.SetData(Value);
		if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
		{
			this->delegateNotifyPropertyValueUpdated(GetPropertyName(PropertyId));
		}
	}
}

/* Kit gap: FSettingsData::ToString (structcpptext, out of line at 00d797a0) isn't declared. */
struct FSettingsData__00d79de0 : public FSettingsData
{
	FString ToString() const; /* 0x00d797a0 */
};

// @baa 0x00d79de0
/* The value of the property with this name as a string; empty when there's no such property. */
FString USettings::GetPropertyAsStringByName(FName PropertyName)
{
	INT PropertyId;
	if (GetPropertyId(PropertyName, PropertyId))
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			if (Properties(Index).PropertyId == PropertyId)
			{
				return ((const FSettingsData__00d79de0&)Properties(Index).Data).ToString();
			}
		}
	}
	return FString();
}

/* Kit gaps: FSettingsData's structcpptext (SetData(INT), out of line here at 00d6e2e0), USettings::FindPropertyMetaData, USettings::FindProperty,
 * FScriptDelegate::IsCallable (00784f80) and the delegateNotifyPropertyValueUpdated glue (out of line, 00d66f70)
 * aren't declared. */
/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

struct FSettingsData__00d75b50 : public FSettingsData
{
	void SetData(INT InData); /* 0x00d6e2e0 */
};

struct USettings__00d75b50 : public USettings
{
	FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
	{
		for (INT Index = 0; Index < Properties.Num(); Index++)
		{
			FSettingsProperty& Property = Properties(Index);
			if (Property.PropertyId == PropertyId)
			{
				return &Property;
			}
		}
		return NULL;
	}
	FORCEINLINE FSettingsPropertyPropertyMetaData* FindPropertyMetaData(INT PropertyId)
	{
		for (INT Index = 0; Index < PropertyMappings.Num(); Index++)
		{
			FSettingsPropertyPropertyMetaData& MetaData = PropertyMappings(Index);
			if (MetaData.Id == PropertyId)
			{
				return &MetaData;
			}
		}
		return NULL;
	}
	void delegateNotifyPropertyValueUpdated(FName PropertyName); /* 0x00d66f70 */
};

// @baa 0x00d75b50
/* Sets an id-mapped int property to one of its mapped value ids and tells the NotifyPropertyValueUpdated delegate;
 * FALSE when the property or the value id isn't known. */
UBOOL USettings::SetPropertyValueId(INT PropertyId, INT ValueId)
{
	UBOOL bOk = FALSE;
	FSettingsProperty* Property = ((USettings__00d75b50*)this)->FindProperty(PropertyId);
	if (Property != NULL && Property->Data.Type == SDT_Int32)
	{
		FSettingsPropertyPropertyMetaData* MetaData = ((USettings__00d75b50*)this)->FindPropertyMetaData(PropertyId);
		if (MetaData != NULL && MetaData->MappingType == PVMT_IdMapped)
		{
			for (INT Index = 0; Index < MetaData->ValueMappings.Num(); Index++)
			{
				FIdToStringMapping& Mapping = ((TArrayAt_<FIdToStringMapping>&)MetaData->ValueMappings).At(Index);
				if (Mapping.Id == ValueId)
				{
					Property->Data.SetData(ValueId);
					if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
					{
						this->delegateNotifyPropertyValueUpdated(Mapping.Name);
					}
					bOk = TRUE;
					break;
				}
			}
		}
	}
	return bOk;
}

#line 1163 "candidate.cpp"
