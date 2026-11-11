// UnCanvas.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// One element of the canvas transform stack (0x50 bytes, 16-byte aligned).
struct __declspec(align(16)) FCanvasTransform
{
	FMatrix Matrix;
	FVector Translation;
};

struct FCanvas_
{
	void sub_00a7b870(FCanvasTransform&);
};

// @baa 0x00a81ba0
void UCanvas::execPopTransform(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (Canvas.Dummy)
	{
		FCanvasTransform Transform;
		((FCanvas_*)(Canvas.Dummy + 0x24))->sub_00a7b870(Transform);
	}
}
