// UnCanvas.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/AppMath.h"

/* Kit gaps: FLinearColor(const FColor&) (Classes.h has FLinearColor as a plain script mirror), FString's
 * operator* and the font DrawString helper (UnFont.cpp) aren't declared. */
struct FLinearColor_ : public FLinearColor
{
	FLinearColor_(const FColor& C);
};

struct FStringM_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

INT DrawString(FCanvas* Canvas, FLOAT StartX, FLOAT StartY, const TCHAR* Text, UFont* Font, const FLinearColor& Color,
	FLOAT XScale = 1.0f, FLOAT YScale = 1.0f, FLOAT HorizSpacingAdjust = 0.0f, const FLOAT* ForcedViewportHeight = NULL);
// @baa 0x00aa9e30
void UCanvas::execDrawTextClipped(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(InText);
	P_GET_UBOOL_OPTX(CheckHotKey, FALSE);
	P_GET_FLOAT_OPTX(XScale, 1.0f);
	P_GET_FLOAT_OPTX(YScale, 1.0f);
	P_FINISH;

	if (!Font)
	{
		Stack.Logf(TEXT("DrawTextClipped: No font"));
		return;
	}
	FLinearColor_ Color(DrawColor);
	DrawString(Canvas, appTrunc(OrgX + CurX), appTrunc(OrgY + CurY), *(const FStringM_&)InText, Font, Color, XScale, YScale);
}
