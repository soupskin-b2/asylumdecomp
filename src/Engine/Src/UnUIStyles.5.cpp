// UnUIStyles.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca7660
void UUIStyle_Combo::execGetComboTextStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Text**)Result = GetComboTextStyle();
}

// @baa 0x00ca76a0
void UUIStyle_Combo::execGetComboImageStyle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UUIStyle_Image**)Result = GetComboImageStyle();
}

// @baa 0x00ca1c60
void UUIStyle::execGetStyleForState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIState, StateObject);
	P_FINISH;
	*(UUIStyle_Data**)Result = GetStyleForState(StateObject);
}

// @baa 0x00ca1cd0
void UUIStyle::execGetStyleForStateByClass(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, StateClass);
	P_FINISH;
	*(UUIStyle_Data**)Result = GetStyleForStateByClass(StateClass);
}

#include "ue3/ConstructObject.h"

// @baa 0x00dd0180
template UUIStyle_Data* ConstructObject<UUIStyle_Data>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 74 "candidate.cpp"
