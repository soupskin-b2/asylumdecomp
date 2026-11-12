// UnUIStyles.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gap: FGuid::IsValid / operator= on FSTYLE_ID (FGuidImplementation has no members). */
inline UBOOL IsValidStyleID(const FSTYLE_ID& ID)
{
	return (ID.A | ID.B | ID.C | ID.D) != 0;
}

/* Kit gap: UObject::GetOuter (UnObjBas.h) isn't declared. */
struct UObject_ : public UObject
{
	FORCEINLINE UObject* GetOuter() const { return Outer; }
};

// @baa 0x00ddb0d0
/* vf_01c is PostLoad: older packages saved the referenced styles without their IDs or owners; fill them in. */
void UUIStyle_Combo::vf_01c()
{
	Super::vf_01c();

	if (TextStyle.SourceStyle && !IsValidStyleID(TextStyle.SourceStyleID))
	{
		TextStyle.SourceStyleID = TextStyle.SourceStyle->StyleID;
	}
	if (ImageStyle.SourceStyle && !IsValidStyleID(ImageStyle.SourceStyleID))
	{
		ImageStyle.SourceStyleID = ImageStyle.SourceStyle->StyleID;
	}

	if (TextStyle.OwnerStyle == NULL)
	{
		TextStyle.OwnerStyle = Cast<UUIStyle>(((UObject_*)this)->GetOuter());
	}
	if (ImageStyle.OwnerStyle == NULL)
	{
		ImageStyle.OwnerStyle = Cast<UUIStyle>(((UObject_*)this)->GetOuter());
	}
}
