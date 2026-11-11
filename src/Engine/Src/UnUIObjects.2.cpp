// UnUIObjects.cpp (part 2 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UUIObject_ : public UUIObject {
    UBOOL sub_00dc9020(FName StyleResolverTagToSet, FName StyleFriendlyName); /* SetWidgetStyleByName */
};

// @baa 0x00ca61c0
void UUIObject::execSetWidgetStyleByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(StyleResolverTagToSet);
    P_GET_NAME(StyleFriendlyName);
    P_FINISH;
    *(UBOOL*)Result = ((UUIObject_*)this)->sub_00dc9020(StyleResolverTagToSet, StyleFriendlyName);
}

/* Engine.UIRoot.EUIWidgetFace (not in Classes.h) */
enum EUIWidgetFace { UIFACE_Left, UIFACE_Top, UIFACE_Right, UIFACE_Bottom, UIFACE_MAX };

struct UUIScreenObject_ : public UUIScreenObject
{
	void GetDockedWidgets(TArray<UUIObject*>& out_DockedWidgets, BYTE SourceFace, BYTE TargetFace) const;
	void execGetDockedWidgets(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc7650
void UUIScreenObject_::execGetDockedWidgets(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UUIObject*, out_DockedWidgets);
	P_GET_BYTE_OPTX(SourceFace, UIFACE_MAX);
	P_GET_BYTE_OPTX(TargetFace, UIFACE_MAX);
	P_FINISH;
	GetDockedWidgets(out_DockedWidgets, SourceFace, TargetFace);
}
