// MaterialExpressions.cpp: 21 functions
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

// @baa 0x00c26f50
/* RGBA, then each channel on its own. */
void UMaterialExpressionDestColor::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c26e40
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionMeshEmitterVertexColor::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c27060
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionDestDepth::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c27310
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionStaticComponentMaskParameter::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(0, 0, 0, 0, 0);
}

// @baa 0x00c275b0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionDepthBiasBlend::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
}

// @baa 0x00c276c0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionDepthBiasedBlend::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c277d0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionVectorParameter::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c278b0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionVertexColor::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c27cc0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionParticleSubUV::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c28010
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionMeshSubUV::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c28120
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionLensFlareIntensity::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c28190
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionLensFlareOcclusion::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c28200
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionLensFlareRadialDistance::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c28270
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionLensFlareRayDistance::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c282e0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionLensFlareSourceDistance::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c283e0
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionPixelDepth::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}

// @baa 0x00c28510
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionSceneTexture::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 1, 1, 0);
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 1, 0, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 1, 0);
	new(Outputs) FExpressionOutput(1, 0, 0, 0, 1);
}

// @baa 0x00c28620
/* One output per channel mask (Mask, R, G, B, A). */
void UMaterialExpressionSceneDepth::GetOutputs(TArray<FExpressionOutput>& Outputs)
{
	new(Outputs) FExpressionOutput(1, 1, 0, 0, 0);
}
