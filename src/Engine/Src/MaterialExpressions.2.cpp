// MaterialExpressions.cpp: 2 functions
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
