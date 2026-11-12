// UnUIStyles.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Array.h"

/* Kit gaps: UObject::GetOuter, UUIStyle_Data::GetOwnerStyle and FStyleDataReference's methods aren't declared. */
struct UObject_ : public UObject
{
	FORCEINLINE UObject* GetOuter() const { return Outer; }
};

struct UUIStyle_Data_ : public UUIStyle_Data
{
	/* GetOwnerStyle (00ddb0a0), inline here. */
	FORCEINLINE UUIStyle* GetOwnerStyle() const
	{
		UUIStyle* Result = NULL;
		if (((UObject_*)this)->GetOuter() != NULL)
		{
			Result = Cast<UUIStyle>(((UObject_*)this)->GetOuter());
			if (Result == NULL)
			{
				Result = Cast<UUIStyle>(((UObject_*)((UObject_*)this)->GetOuter())->GetOuter());
			}
		}
		return Result;
	}
};

/* Kit gap: FGuid operator== (UnMisc.h) for FSTYLE_ID. */
FORCEINLINE UBOOL operator==(const FSTYLE_ID& X, const FSTYLE_ID& Y)
{
	return ((X.A ^ Y.A) | (X.B ^ Y.B) | (X.C ^ Y.C) | (X.D ^ Y.D)) == 0;
}

struct UUIStyle_ : public UUIStyle
{
	UUIStyle_Data* sub_00dc9980();			/* eventGetDefaultStyle */
	UBOOL sub_00ddaf10(UUIState* State);		/* IsDirty(State) */
};

struct FStyleDataReference_ : public FStyleDataReference
{
	UUIStyle_Data* GetStyleData() const;		/* 00ddb270 */
	UBOOL operator==(const FStyleDataReference& Other) const;
};

// @baa 0x00ddb430
/* References are equal when they point at the same style, state and custom data, and resolve to matching style data. */
UBOOL FStyleDataReference_::operator==(const FStyleDataReference& Other) const
{
	UBOOL bResult = SourceStyle == Other.SourceStyle
	&&	SourceState == Other.SourceState
	&&	SourceStyleID == Other.SourceStyleID
	&&	CustomStyleData == Other.CustomStyleData
	&&	OwnerStyle == Other.OwnerStyle;
	if (bResult)
	{
		UUIStyle_Data* MyStyleData = GetStyleData();
		UUIStyle_Data* OtherStyleData = ((const FStyleDataReference_&)Other).GetStyleData();
		bResult = (MyStyleData == NULL && OtherStyleData == NULL)
			|| (MyStyleData != NULL && MyStyleData->MatchesStyleData(OtherStyleData));
	}
	return bResult;
}

/* Kit gap: UObject::IsA is only the free ObjectIsA in Cast.h; the member is kept out of line here (00402b40). */
struct UObject_IsA : public UObject
{
	UBOOL IsA(UClass* SomeBase) const
	{
		return ObjectIsA(this, SomeBase);
	}
};

// @baa 0x00ddb9c0
/* UUIStyle_Combo's comparison: the base properties, then the text and image style references. */
UBOOL UUIStyle_Combo::MatchesStyleData(UUIStyle_Data* StyleToCompare)
{
	UBOOL bResult = Super::MatchesStyleData(StyleToCompare);
	if (StyleToCompare == this)
	{
		bResult = TRUE;
	}
	else if (StyleToCompare != NULL && bResult && ((UObject_IsA*)StyleToCompare)->IsA(UUIStyle_Combo::StaticClass()))
	{
		UUIStyle_Combo* OtherComboStyle = Cast<UUIStyle_Combo>(StyleToCompare);
		bResult = ((const FStyleDataReference_&)TextStyle) == OtherComboStyle->TextStyle
				&&	((const FStyleDataReference_&)ImageStyle) == OtherComboStyle->ImageStyle;
	}
	return bResult;
}
