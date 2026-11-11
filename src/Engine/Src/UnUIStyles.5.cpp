// UnUIStyles.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca7660
void UUIStyle_Combo::execGetComboTextStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Text**)Result = sub_00ddbb50();
}

// @baa 0x00ca76a0
void UUIStyle_Combo::execGetComboImageStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Image**)Result = sub_00ddbb70();
}

// @baa 0x00ca1c60
void UUIStyle::execGetStyleForState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIState, StateObject);
	P_FINISH;
	*(UUIStyle_Data**)Result = sub_00ddaa80(StateObject);
}

// @baa 0x00ca1cd0
void UUIStyle::execGetStyleForStateByClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, StateClass);
	P_FINISH;
	*(UUIStyle_Data**)Result = sub_00ddac00(StateClass);
}
