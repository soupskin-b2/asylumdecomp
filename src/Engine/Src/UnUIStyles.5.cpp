// UnUIStyles.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UUIStyle_Combo_ : public UUIStyle_Combo
{
	UUIStyle_Text* sub_00ddbb50();
};

// @baa 0x00ca7660
void UUIStyle_Combo::execGetComboTextStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Text**)Result = ((UUIStyle_Combo_*)this)->sub_00ddbb50();
}

struct UUIStyle_Combo__00ca76a0 : public UUIStyle_Combo
{
	UUIStyle_Image* sub_00ddbb70();
};

// @baa 0x00ca76a0
void UUIStyle_Combo::execGetComboImageStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Image**)Result = ((UUIStyle_Combo__00ca76a0*)this)->sub_00ddbb70();
}

struct UUIStyle_ : public UUIStyle
{
	UUIStyle_Data* sub_00ddaa80(UUIState*);
};

// @baa 0x00ca1c60
void UUIStyle::execGetStyleForState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIState, StateObject);
	P_FINISH;
	*(UUIStyle_Data**)Result = ((UUIStyle_*)this)->sub_00ddaa80(StateObject);
}

struct UUIStyle__00ca1cd0 : public UUIStyle
{
	UUIStyle_Data* sub_00ddac00(UClass*);
};

// @baa 0x00ca1cd0
void UUIStyle::execGetStyleForStateByClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, StateClass);
	P_FINISH;
	*(UUIStyle_Data**)Result = ((UUIStyle__00ca1cd0*)this)->sub_00ddac00(StateClass);
}
