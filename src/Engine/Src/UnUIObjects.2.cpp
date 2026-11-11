// UnUIObjects.cpp (part 2 of 17): 1 function
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
