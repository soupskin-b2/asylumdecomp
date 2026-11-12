// UnUIObjects.cpp (part 2 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca61c0
void UUIObject::execSetWidgetStyleByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StyleResolverTagToSet);
    P_GET_NAME(StyleFriendlyName);
    P_FINISH;
    *(UBOOL*)Result = sub_00dc9020(StyleResolverTagToSet, StyleFriendlyName);
}

/* Engine.UIRoot.EUIWidgetFace (not in Classes.h) */

// @baa 0x00cc7650
void UUIScreenObject::execGetDockedWidgets(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UUIObject*, out_DockedWidgets);
	P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
	P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
	P_FINISH;
	GetDockedWidgets(out_DockedWidgets, SourceFace, TargetFace);
}
