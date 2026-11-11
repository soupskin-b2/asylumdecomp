// UnTexCompress.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

/* Classes.h has FColor and FLinearColor as plain script mirrors: no FColor::FromRGBE, no
 * FLinearColor(R,G,B,A) constructor and no FLinearColor::Black. With the return type
 * FLinearColor (no constructor) the result is built in a temporary and copied; the
 * original returns a constructed FLinearColor, reproduced here with FLinearColor_. */
struct FLinearColor_ : public FLinearColor
{
	FLinearColor_(FLOAT InR, FLOAT InG, FLOAT InB, FLOAT InA) { R = InR; G = InG; B = InB; A = InA; }
	static const FLinearColor_ Black;
};

struct FColor_ : public FColor
{
	FLinearColor_ FromRGBE() const;
};

// @baa 0x005418f0
/** Converts from RGBE to a linear float color. */
FLinearColor_ FColor_::FromRGBE() const
{
	if (A == 0)
	{
		return FLinearColor_::Black;
	}
	else
	{
		const FLOAT Scale = ldexp(1 / 255.0, A - 128);
		return FLinearColor_(R * Scale, G * Scale, B * Scale, 1.0f);
	}
}
