// Editor_0910000.cpp: 7 functions
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
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

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
