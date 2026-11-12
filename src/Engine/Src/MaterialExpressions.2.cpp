// MaterialExpressions.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00c267f0
void UMaterialExpressionTextureSample::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
    new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
    new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
    new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
    new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
    new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c26680
/* An expression has a single output covering all channels. */
void UMaterialExpression::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
    new(Outputs) FExpressionOutput(FALSE);
}

// @baa 0x00c287b0
/* A font sample has an RGBA output plus one per channel. */
void UMaterialExpressionFontSample::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
    new(Outputs) FExpressionOutput(TRUE, TRUE, TRUE, TRUE, FALSE);
    new(Outputs) FExpressionOutput(TRUE, TRUE, FALSE, FALSE, FALSE);
    new(Outputs) FExpressionOutput(TRUE, FALSE, TRUE, FALSE, FALSE);
    new(Outputs) FExpressionOutput(TRUE, FALSE, FALSE, TRUE, FALSE);
    new(Outputs) FExpressionOutput(TRUE, FALSE, FALSE, FALSE, TRUE);
}
