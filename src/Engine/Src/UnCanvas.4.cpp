// UnCanvas.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00aaa350
/* UnCanvas.cpp: draws the texture as a 3x3 grid, stretching only the middle row and column so the corners keep their size. */
void UCanvas::DrawTileStretched(UTexture* Tex, FLOAT Left, FLOAT Top, FLOAT AWidth, FLOAT AHeight, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, FLinearColor DrawColor, UBOOL bStretchHorizontally, UBOOL bStretchVertically, FLOAT ScalingFactor)
{
	// Offset for the origin.
	Left += OrgX;
	Top += OrgY;

	// Figure out how much of the texture the corners can use.
	const FLOAT ScaleX = (!(appAbs(AWidth) < DELTA) && bStretchHorizontally) ? Min(1.f, appAbs(UL / AWidth * ScalingFactor)) : 1.f;
	const FLOAT ScaleY = (!(appAbs(AHeight) < DELTA) && bStretchVertically) ? Min(1.f, appAbs(VL / AHeight * ScalingFactor)) : 1.f;

	const FLOAT CornerWidth = ScaleX * AWidth * 0.5f;
	const FLOAT CornerHeight = ScaleY * AHeight * 0.5f;
	const FLOAT CornerU = UL * 0.5f;
	const FLOAT CornerV = VL * 0.5f;

	const FLOAT Widths[3] = { CornerWidth, AWidth - CornerWidth * 2.f, CornerWidth };
	const FLOAT USizes[3] = { CornerU, 0.f, CornerU };
	const FLOAT Heights[3] = { CornerHeight, AHeight - CornerHeight * 2.f, CornerHeight };
	const FLOAT VSizes[3] = { CornerV, 0.f, CornerV };

	FLOAT CurY = Top;
	FLOAT CurV = V;
	for (INT Row = 0; Row < 3; Row++)
	{
		FLOAT CurX = Left;
		FLOAT CurU = U;
		for (INT Col = 0; Col < 3; Col++)
		{
			if (Widths[Col] > 0.f && Heights[Row] > 0.f)
			{
				DrawTile(Tex, CurX, CurY, Widths[Col], Heights[Row], CurU, CurV, USizes[Col], VSizes[Row], DrawColor);
				CurX += Widths[Col];
				CurU += USizes[Col];
			}
		}
		CurY += Heights[Row];
		CurV += VSizes[Row];
	}
}
