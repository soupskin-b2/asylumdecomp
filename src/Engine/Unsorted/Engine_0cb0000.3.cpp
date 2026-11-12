// Engine_0cb0000.cpp: 17 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gap: APlayerController::GetPlayerNetworkAddress (UnPlayer.cpp) isn't declared. */

// @baa 0x00cb6db0
void APlayerController::execGetPlayerNetworkAddress(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = ((APlayerController*)this)->GetPlayerNetworkAddress();
}

/* Kit gap: AFileWriter::Logf (UnActor.cpp) isn't declared. */

// @baa 0x00cb7bd0
void AFileWriter::execLogf(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LogString);
	P_FINISH;
	((AFileWriter*)this)->Logf(LogString);
}

/* Kit gap: AActor::GetURLMap isn't declared. */

// @baa 0x00cb5d80
void AActor::execGetURLMap(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = ((AActor*)this)->GetURLMap();
}

/* Kit gap: APlayerController::GetServerNetworkAddress isn't declared. */

// @baa 0x00cb6e40
void APlayerController::execGetServerNetworkAddress(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = ((APlayerController*)this)->GetServerNetworkAddress();
}

// @baa 0x00cb7c80
void AGameInfo::execGetNetworkNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetNetworkNumber();
}

// @baa 0x00cb7e50
void APlayerReplicationInfo::execGetPlayerAlias(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetPlayerAlias();
}

// @baa 0x00cb7ee0
void AWorldInfo::execGetLocalURL(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetLocalURL();
}

// @baa 0x00cb7f70
void AWorldInfo::execGetAddressURL(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetAddressURL();
}

/* Kit gap: APlayerController::ClientConvolve (UnPlayer.cpp; an empty stub in this build) isn't declared. */

// @baa 0x00cb7350
void APlayerController::execClientConvolve(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(C);
	P_GET_INT(H);
	P_FINISH;
	((APlayerController*)this)->ClientConvolve(C, H);
}

/* Kit gap: APlayerController::ServerProcessConvolve (UnPlayer.cpp; an empty stub in this build) isn't declared. */

// @baa 0x00cb7430
void APlayerController::execServerProcessConvolve(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(C);
	P_GET_INT(H);
	P_FINISH;
	((APlayerController*)this)->ServerProcessConvolve(C, H);
}

/* Kit gap: APlayerController::GetDefaultURL (UnPlayer.cpp) isn't declared. */

// @baa 0x00cb7140
void APlayerController::execGetDefaultURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Option);
	P_FINISH;
	*(FString*)Result = ((APlayerController*)this)->GetDefaultURL(Option);
}

/* Kit gap: AActor::ChartData (UnActor.cpp) isn't declared. */

// @baa 0x00cb5ca0
void AActor::execChartData(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(DataName);
	P_GET_FLOAT(DataValue);
	P_FINISH;
	((AActor*)this)->ChartData(DataName, DataValue);
}

/* Kit gaps: UpdateURL (007bf4b0) isn't declared (names from the exe's native table). */

// @baa 0x00cb7020
void APlayerController::execUpdateURL(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(NewOption);
	P_GET_STR(NewValue);
	P_GET_UBOOL(bSave1Default);
	P_FINISH;
	((APlayerController*)this)->UpdateURL(NewOption, NewValue, bSave1Default);
}

// @baa 0x00cb5e10
void AActor::execSupportsKismetModification(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(USequenceOp, AskingOp);
	P_GET_STR_REF(Reason);
	P_FINISH;
	*(UBOOL*)Result = SupportsKismetModification(AskingOp, Reason);
}

// @baa 0x00cb72c0
void APlayerController::execPasteFromClipboard(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = PasteFromClipboard();
}

// @baa 0x00cb7210
void APlayerController::execCopyToClipboard(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Text);
	P_FINISH;
	CopyToClipboard(Text);
}

// @baa 0x00cb8360
void UFont::execStrWidth(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Text);
	P_FINISH;
	*(FLOAT*)Result = StrWidth(Text);
}
