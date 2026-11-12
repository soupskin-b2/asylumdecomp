// Material.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x006bb2e0
/* The default value of the material's scalar parameter ParameterName. */
UBOOL UMaterial::GetScalarParameterValue(FName ParameterName, FLOAT& OutValue)
{
    UBOOL bSuccess = FALSE;
    for (INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++)
    {
        UMaterialExpressionScalarParameter* ScalarParameter = Cast<UMaterialExpressionScalarParameter>(Expressions(ExpressionIndex));
        if (ScalarParameter && ScalarParameter->ParameterName == ParameterName)
        {
            OutValue = ScalarParameter->DefaultValue;
            bSuccess = TRUE;
            break;
        }
    }
    return bSuccess;
}

// @baa 0x006bb1f0
/* The default value of the material's vector parameter ParameterName. */
UBOOL UMaterial::GetVectorParameterValue(FName ParameterName, FLinearColor& OutValue)
{
    UBOOL bSuccess = FALSE;
    for (INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++)
    {
        UMaterialExpressionVectorParameter* VectorParameter = Cast<UMaterialExpressionVectorParameter>(Expressions(ExpressionIndex));
        if (VectorParameter && VectorParameter->ParameterName == ParameterName)
        {
            OutValue = VectorParameter->DefaultValue;
            bSuccess = TRUE;
            break;
        }
    }
    return bSuccess;
}

// @baa 0x006bb3c0
/* The texture of the material's texture parameter ParameterName. */
UBOOL UMaterial::GetTextureParameterValue(FName ParameterName, UTexture*& OutValue)
{
    UBOOL bSuccess = FALSE;
    for (INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++)
    {
        UMaterialExpressionTextureSampleParameter* TextureParameter = Cast<UMaterialExpressionTextureSampleParameter>(Expressions(ExpressionIndex));
        if (TextureParameter && TextureParameter->ParameterName == ParameterName)
        {
            OutValue = TextureParameter->Texture;
            bSuccess = TRUE;
            break;
        }
    }
    return bSuccess;
}
