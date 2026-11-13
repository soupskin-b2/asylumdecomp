// UnCanvas.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/AppMath.h"

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
	FLinearColor Color(DrawColor);
	DrawString(Canvas, appTrunc(OrgX + CurX), appTrunc(OrgY + CurY), *InText, Font, Color, XScale, YScale);
}
