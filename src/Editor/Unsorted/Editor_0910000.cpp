// Editor_0910000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009189e0
IMPLEMENT_CLASS_AT(UAnimNotify_Sound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2258);

// @baa 0x00918af0
bool UAnimNotify_Sound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00918b30
IMPLEMENT_CLASS_AT(UAnimNotify_Script, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2294);

// @baa 0x00918c40
bool UAnimNotify_Script::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00918c80
IMPLEMENT_CLASS_AT(UAnimNotify_Scripted, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2316);

// @baa 0x00918d90
bool UAnimNotify_Scripted::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap: FName has no comparison operators (UnName.h compares Index and Number). */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

// @baa 0x00918870
/* The set's sequence named SequenceName, or NULL. (The original reads the array through its const accessor.) */
UAnimSequence* UAnimSet::FindAnimSequence(FName SequenceName)
{
    if (SequenceName != NAME_None)
    {
        const TArray<UAnimSequence*>& ConstSequences = Sequences;
        for (INT i = 0; i < Sequences.Num(); i++)
        {
            if (ConstSequences(i)->SequenceName == SequenceName)
            {
                return ConstSequences(i);
            }
        }
    }
    return NULL;
}

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
};

/* Kit gaps: PKG_ContainsMap and UPackage's flags (opaque in the kit). */
#define PKG_ContainsMap	0x00020000
struct UPackage_ : public UObject
{
	BYTE OpaquePackageState[0x74 - sizeof(UObject)];
	DWORD PackageFlags; /* 0x74 */
	FORCEINLINE UBOOL ContainsMap() const { return (PackageFlags & PKG_ContainsMap) ? TRUE : FALSE; }
};

// @baa 0x00918680
/* AnimSets (and their sequences) inside level packages must not be standalone. */
void UAnimSet::PostLoad()
{
	Super::PostLoad();

	if (((UPackage_*)GetOutermost())->ContainsMap() && HasAnyFlags(RF_Standalone))
	{
		ClearFlags(RF_Standalone);

		for (INT i = 0; i < Sequences.Num(); i++)
		{
			UAnimSequence* Seq = ((TArrayAt_<UAnimSequence*>&)Sequences).At(i);
			if (Seq)
			{
				Seq->ClearFlags(RF_Standalone);
			}
		}
	}
}

#line 109 "candidate.cpp"
