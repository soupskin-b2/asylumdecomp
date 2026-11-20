// UnUIStyles.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Array.h"

/* UUIStyle_Data::GetOwnerStyle: the kit declares the out-of-line copy (0x00ddb0a0); it is inline here. FStyleDataReference's
 * IsCustomStyleData* (structcpptext) aren't in the kit. */
struct UUIStyle_Data_ : public UUIStyle_Data
{
	/* GetOwnerStyle (00ddb0a0), inline here. */
	FORCEINLINE UUIStyle* GetOwnerStyle() const
	{
		UUIStyle* Result = NULL;
		if (GetOuter() != NULL)
		{
			Result = Cast<UUIStyle>(GetOuter());
			if (Result == NULL)
			{
				Result = Cast<UUIStyle>(((UObject*)GetOuter())->GetOuter());
			}
		}
		return Result;
	}
};

struct FStyleDataReference_ : public FStyleDataReference
{
	FORCEINLINE UBOOL IsCustomStyleDataValid() const
	{
		return CustomStyleData != NULL && ((UUIStyle_Data_*)CustomStyleData)->GetOwnerStyle() == OwnerStyle;
	}
	FORCEINLINE UBOOL IsCustomStyleDataEnabled() const
	{
		return IsCustomStyleDataValid() && CustomStyleData->bEnabled;
	}

	UUIStyle_Data* GetStyleData() const;
	void SetSourceStyle(UUIStyle* Style);
	UBOOL IsDirty() const;
};

// @baa 0x00ddb270
/* The style data this reference resolves to: the enabled custom data, else the source style's data for the
 * source state, else the source style's default. */
UUIStyle_Data* FStyleDataReference_::GetStyleData() const
{
	UUIStyle_Data* Result = NULL;
	if (IsCustomStyleDataEnabled())
	{
		Result = CustomStyleData;
	}
	else if (SourceStyle != NULL && SourceState != NULL)
	{
		Result = SourceStyle->GetStyleForState(SourceState);
		if (Result == NULL)
		{
			Result = SourceStyle->eventGetDefaultStyle();
		}
	}
	return Result;
}

// @baa 0x00ddb2e0
/* Points the reference at Style, if it has data for the reference's state. */
void FStyleDataReference_::SetSourceStyle(UUIStyle* Style)
{
#line 2348 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStyles.cpp"
	check(Style);
	check(SourceState);

	if (Style->GetStyleForState(SourceState) != NULL)
	{
		SourceStyle = Style;
		SourceStyleID = Style->StyleID;
	}
}

#line 91 "candidate.cpp"

// @baa 0x00ddbb50
/* The text style the combo style uses. */
UUIStyle_Text* UUIStyle_Combo::GetComboTextStyle()
{
	return Cast<UUIStyle_Text>(((FStyleDataReference_&)TextStyle).GetStyleData());
}

// @baa 0x00ddbb70
/* The image style the combo style uses. */
UUIStyle_Image* UUIStyle_Combo::GetComboImageStyle()
{
	return Cast<UUIStyle_Image>(((FStyleDataReference_&)ImageStyle).GetStyleData());
}
