// UnUIStyles.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x00ddb0d0
/* PostLoad: older packages saved the referenced styles without their IDs or owners; fill them in. */
void UUIStyle_Combo::PostLoad()
{
	Super::PostLoad();

	if (TextStyle.SourceStyle && !TextStyle.SourceStyleID.IsValid())
	{
		TextStyle.SourceStyleID = TextStyle.SourceStyle->StyleID;
	}
	if (ImageStyle.SourceStyle && !ImageStyle.SourceStyleID.IsValid())
	{
		ImageStyle.SourceStyleID = ImageStyle.SourceStyle->StyleID;
	}

	if (TextStyle.OwnerStyle == NULL)
	{
		TextStyle.OwnerStyle = Cast<UUIStyle>(GetOuter());
	}
	if (ImageStyle.OwnerStyle == NULL)
	{
		ImageStyle.OwnerStyle = Cast<UUIStyle>(GetOuter());
	}
}

// @baa 0x00ddb0a0
/* The style that owns this style data: its outer, or for custom style data its outer's outer. */
UUIStyle* UUIStyle_Data::GetOwnerStyle() const
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

// @baa 0x00ddb1d0
/* Whether CustomStyleData belongs to the style this reference is in. */
UBOOL FStyleDataReference::IsCustomStyleDataValid() const
{
	return CustomStyleData != NULL && CustomStyleData->GetOwnerStyle() == OwnerStyle;
}

// @baa 0x00ddb220
/* Whether the custom style data is valid and enabled. */
UBOOL FStyleDataReference::IsCustomStyleDataEnabled() const
{
	return CustomStyleData != NULL && CustomStyleData->GetOwnerStyle() == OwnerStyle && CustomStyleData->bEnabled;
}

// @baa 0x00ddb180
/* Turns the custom style data on or off, if it belongs to this reference's style. */
void FStyleDataReference::EnableCustomStyleData(UBOOL bEnabled)
{
	if (CustomStyleData != NULL && CustomStyleData->GetOwnerStyle() == OwnerStyle)
	{
		CustomStyleData->bEnabled = bEnabled;
	}
}

// @baa 0x00ddb7a0
/* The archetype style's data for StateObject, unless the archetype is the class default. */
UUIStyle_Data* UUIStyle::GetArchetypeStyleForState(UUIState* StateObject) const
{
	UUIStyle_Data* Result = NULL;

	UUIStyle* StyleArchetype = GetArchetype<UUIStyle>();
	if (StyleArchetype != GetDefault<UUIStyle>())
	{
		Result = StyleArchetype->GetStyleForState(StateObject);		/* GetStyleForState */
	}

	return Result;
}
