// NewMaterialEditor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<UMaterialExpression*>::AddUniqueItem's out-of-line copy (material editor selection: selected
 * expressions, caller 0142c5e0). */
// @baa 0x01429f60
template INT TArray<UMaterialExpression*>::AddUniqueItem(UMaterialExpression* const& Item);

// @baa 0x0142a060
template INT TArray<UMaterialExpressionComment*>::AddUniqueItem(UMaterialExpressionComment* const& Item);

// @baa 0x0142a1c0
template INT TArray<UMaterialExpressionCompound*>::AddUniqueItem(UMaterialExpressionCompound* const& Item);
