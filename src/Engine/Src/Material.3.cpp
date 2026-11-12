// Material.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* FName has no comparison operator in Classes.h; this is UE3's FName::operator== body. */
/* Classes.h declares this as 'virtual INT GetStaticComponentMaskParameterValue(INT, INT, INT, INT, INT, INT, INT)'
 * (placeholder types); this helper carries the real signature. */
struct UDecalMaterial_ : public UDecalMaterial
{
	UBOOL GetStaticComponentMaskParameterValue( FName ParameterName, UBOOL& OutR, UBOOL& OutG, UBOOL& OutB, UBOOL& OutA, FGuid& OutExpressionGuid );
};

// @baa 0x006bb680
UBOOL UDecalMaterial_::GetStaticComponentMaskParameterValue( FName ParameterName, UBOOL& OutR, UBOOL& OutG, UBOOL& OutB, UBOOL& OutA, FGuid& OutExpressionGuid )
{
	UBOOL bSuccess = FALSE;
	for ( INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++ )
	{
		UMaterialExpressionStaticComponentMaskParameter* ComponentMaskParameter =
			Cast<UMaterialExpressionStaticComponentMaskParameter>(Expressions(ExpressionIndex));

		if ( ComponentMaskParameter && ComponentMaskParameter->ParameterName == ParameterName )
		{
			OutR = ComponentMaskParameter->DefaultR;
			OutG = ComponentMaskParameter->DefaultG;
			OutB = ComponentMaskParameter->DefaultB;
			OutA = ComponentMaskParameter->DefaultA;
			OutExpressionGuid = ComponentMaskParameter->ExpressionGUID;
			bSuccess = TRUE;
			break;
		}
	}
	return bSuccess;
}

/* Classes.h declares this as 'virtual INT GetStaticSwitchParameterValue(INT, INT, INT, INT)'
 * (placeholder types); this helper carries the real signature. */
struct UDecalMaterial__006bb590 : public UDecalMaterial
{
	UBOOL GetStaticSwitchParameterValue( FName ParameterName, UBOOL& OutValue, FGuid& OutExpressionGuid );
};

// @baa 0x006bb590
UBOOL UDecalMaterial__006bb590::GetStaticSwitchParameterValue( FName ParameterName, UBOOL& OutValue, FGuid& OutExpressionGuid )
{
	UBOOL bSuccess = FALSE;
	for ( INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++ )
	{
		UMaterialExpressionStaticSwitchParameter* SwitchParameter =
			Cast<UMaterialExpressionStaticSwitchParameter>(Expressions(ExpressionIndex));

		if ( SwitchParameter && SwitchParameter->ParameterName == ParameterName )
		{
			OutValue = SwitchParameter->DefaultValue;
			OutExpressionGuid = SwitchParameter->ExpressionGUID;
			bSuccess = TRUE;
			break;
		}
	}
	return bSuccess;
}
