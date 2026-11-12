// UnParticleTrailModules.cpp: 56 functions
// Placed here by: neighbours 28, class 15, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00baaa10
IMPLEMENT_CLASS_AT(UParticleModuleTrailBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 13);

// @baa 0x00baab20
int UParticleModuleTrailBase::vf_000(void) { return 1; }

// @baa 0x00baab30
bool UParticleModuleTrailBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baab70
int UParticleModuleTrailSource::vf_000(void) { return 1; }

// @baa 0x00baab80
void __stdcall sub_00baab80(int a0, int a1, int a2) {  }

// @baa 0x00baabb0
void UParticleModuleTrailSource::vf_168(void) {  }

struct C {
    void sub_00baabe0(undefined4, undefined4, undefined4 *, undefined4 *);
};

// @baa 0x00baabe0
void C::sub_00baabe0(undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  *param_5 = 0xffffffff;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_5 = *param_4;
  }
  return;
}

// @baa 0x00baac00
int UParticleModuleTrailSpawn::vf_000(void) { return 1; }

// @baa 0x00baac10
void __stdcall sub_00baac10(int a0, int a1, int a2) {  }

// @baa 0x00baac20
void __stdcall sub_00baac20(int a0, int a1, int a2) {  }

// @baa 0x00baac30
int UParticleModuleTrailSpawn::vf_114(int a0) { return 0; }

// @baa 0x00baac40
void UParticleModuleTrailSpawn::vf_168(void) {  }

// @baa 0x00baac60
int UParticleModuleTrailTaper::vf_000(void) { return 1; }

// @baa 0x00baac70
void __stdcall sub_00baac70(int a0, int a1, int a2) {  }

// @baa 0x00baac80
void __stdcall sub_00baac80(int a0, int a1, int a2) {  }

// @baa 0x00baac90
void UParticleModuleTrailTaper::vf_168(void) {  }

// @baa 0x00baacb0
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataTrail2, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 477);

// @baa 0x00baadc0
int UParticleModuleTypeDataTrail2::vf_000(void) { return 1; }

// @baa 0x00baadd0
bool UParticleModuleTypeDataTrail2::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baae10
void UParticleModuleTypeDataTrail2::vf_170(int a0, int a1) {  }

// @baa 0x00baae20
void __stdcall sub_00baae20(int a0, int a1, int a2) {  }

// @baa 0x00baae30
void __stdcall sub_00baae30(int a0, int a1, int a2) {  }

// @baa 0x00baae40
void UParticleModuleTypeDataTrail2::vf_174(int a0, int a1, int a2) {  }

// @baa 0x00baae50
int UParticleModuleTypeDataTrail2::vf_114(int a0) { return 36; }

// @baa 0x00baae60
void UParticleModuleTypeDataTrail2::vf_16c(void) {  }

// @baa 0x00bc8ea0
// @baa 0x00bc8f00
int UParticleModuleTrailBase::vf_130(void) { return 3; }

// @baa 0x00bc8f10
// @baa 0x00bcd770
int sub_005c7a20(void);
extern undefined * g_0201af98;
// @baa 0x00bcd790
undefined4 * UObject::sub_00bcd790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201af98);
  return param_1;
}

// @baa 0x00bcd7b0
IMPLEMENT_CLASS_AT(UParticleModuleTrailSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 18);

// @baa 0x00bcd830
// @baa 0x00bcd860
IMPLEMENT_CLASS_AT(UParticleModuleTrailSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 366);

extern undefined * g_0201b108;
// @baa 0x00bcd880
undefined4 * UObject::sub_00bcd880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201b108);
  return param_1;
}

// @baa 0x00bcd8a0
IMPLEMENT_CLASS_AT(UParticleModuleTrailTaper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 441);

// @baa 0x00bcd910
// @baa 0x00bcd930
// @baa 0x00bcd950
// @baa 0x00bcdb60
// @baa 0x00bcdc20
// @baa 0x00bd1510
// @baa 0x00bd1530
// @baa 0x00bd1550
// @baa 0x00bd1610
// @baa 0x00bd1720
bool UParticleModuleTrailSource::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bd1760
// @baa 0x00bd1870
bool UParticleModuleTrailSpawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bd18b0

struct UParticleModuleTypeDataTrail2_BAA : public UParticleModuleTypeDataTrail2
{
	virtual void sub_00baaf50(INT A, INT B, INT* Source, INT* Dest, INT* Tail);
};

// @baa 0x00baaf50
void UParticleModuleTypeDataTrail2_BAA::sub_00baaf50(INT A, INT B, INT* Source, INT* Dest, INT* Tail)
{
	*Dest = *Source;
	*Tail = -1;
}

extern undefined * g_0201a860;
// @baa 0x00bc8f30
undefined4 * UObject::sub_00bc8f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201a860);
  return param_1;
}

extern undefined * g_0201a9c8;
// @baa 0x00bc8f50
undefined4 * UObject::sub_00bc8f50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201a9c8);
  return param_1;
}

extern undefined * g_0201ab38;
// @baa 0x00bc8ff0
undefined4 * UObject::sub_00bc8ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201ab38);
  return param_1;
}

// @baa 0x00bd1970

// @baa 0x00bd1a80
bool UParticleModuleTrailTaper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gaps, with UE3's definitions (UnName.h, UnObjBas.h): FName has no constructor from a string and no
 * comparison operators, and UObject has no GetFName(). */
struct FName_ : public FName
{
    FName_(const TCHAR* Name, INT FindType = 1, UBOOL bSplitName = 1); /* 0x005d5620 */
};

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

static __forceinline FName GetFName(const UObject* Object)
{
    return Object->ObjectInternalInteger != INDEX_NONE ? (const FName_&)Object->Name : FName_(TEXT("<uninitialized>"));
}

/* Kit gap: TArray::InsertZeroed (Array.h; out of line here, 0x00b51d40) isn't in the kit's TArray. */
template<typename T> struct TArrayInsertZeroed_ : public TArray<T>
{
    void InsertZeroed(INT Index, INT Count = 1); /* 0x00b51d40 for FVector */
};

// @baa 0x00bbf090
/* Editing SourceOffsetCount grows or shrinks the default offsets to match. */
void UParticleModuleTrailSource::PostEditChange(UProperty* PropertyThatChanged)
{
    if (PropertyThatChanged)
    {
        if (GetFName(PropertyThatChanged) == FName_(TEXT("SourceOffsetCount")))
        {
            if (SourceOffsetDefaults.Num() > 0)
            {
                if (SourceOffsetDefaults.Num() < SourceOffsetCount)
                {
                    ((TArrayInsertZeroed_<FVector>&)SourceOffsetDefaults).InsertZeroed(SourceOffsetDefaults.Num(), SourceOffsetCount - SourceOffsetDefaults.Num());
                }
                else if (SourceOffsetDefaults.Num() > SourceOffsetCount)
                {
                    const INT RemoveIndex = SourceOffsetCount ? (SourceOffsetCount - 1) : 0;
                    SourceOffsetDefaults.Remove(RemoveIndex, SourceOffsetDefaults.Num() - SourceOffsetCount);
                }
            }
            else if (SourceOffsetCount > 0)
            {
                ((TArrayInsertZeroed_<FVector>&)SourceOffsetDefaults).InsertZeroed(0, SourceOffsetCount);
            }
        }
    }
    Super::PostEditChange(PropertyThatChanged);
}

// @baa 0x00baab90
/* Slot 0x114 (unnamed in the kit; UE3's RequiredBytes): particle-sourced trails store the source index per particle. */
INT UParticleModuleTrailSource::vf_114(INT)
{
	INT Size = 0;
	switch (SourceMethod)
	{
	case 1:
		Size = sizeof(INT);
		break;
	}
	return Size;
}
