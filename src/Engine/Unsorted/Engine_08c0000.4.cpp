// Engine_08c0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4814;
	/* AddDebugText */
struct APlayerController_ : public APlayerController
{
	void eventAddDebugText(const FString& DebugText, class AActor* SrcActor, FLOAT Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, UBOOL bSkipOverwriteCheck);
};

// @baa 0x008c3690
/* PlayerController.AddDebugText script event: the generated glue, out of line here. */
void APlayerController_::eventAddDebugText(const FString& DebugText, class AActor* SrcActor, FLOAT Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, UBOOL bSkipOverwriteCheck)
{
	struct PlayerController_eventAddDebugText_Parms
	{
		FString DebugText;
		class AActor* SrcActor;
		FLOAT Duration;
		FVector Offset;
		FVector DesiredOffset;
		FColor TextColor;
		UBOOL bSkipOverwriteCheck;
	} Parms;
	Parms.DebugText = DebugText;
	Parms.SrcActor = SrcActor;
	Parms.Duration = Duration;
	Parms.Offset = Offset;
	Parms.DesiredOffset = DesiredOffset;
	Parms.TextColor = TextColor;
	Parms.bSkipOverwriteCheck = bSkipOverwriteCheck ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4814), &Parms);
}

extern FName g_026c4598;
	/* PreClientTravel */
struct APlayerController__008c3780 : public APlayerController
{
	void eventPreClientTravel(const FString& PendingURL, BYTE TravelType, UBOOL bIsSeamlessTravel);
};

// @baa 0x008c3780
/* PlayerController.PreClientTravel script event: the generated glue, out of line here. */
void APlayerController__008c3780::eventPreClientTravel(const FString& PendingURL, BYTE TravelType, UBOOL bIsSeamlessTravel)
{
	struct PlayerController_eventPreClientTravel_Parms
	{
		FString PendingURL;
		BYTE TravelType;
		UBOOL bIsSeamlessTravel;
	} Parms;
	Parms.PendingURL = PendingURL;
	Parms.TravelType = TravelType;
	Parms.bIsSeamlessTravel = bIsSeamlessTravel ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4598), &Parms);
}

extern FName g_026c3fa4;
	/* ClientMessage */
struct APlayerController__008c3830 : public APlayerController
{
	void eventClientMessage(const FString& S, FName Type, FLOAT MsgLifeTime);
};

// @baa 0x008c3830
/* PlayerController.ClientMessage script event: the generated glue, out of line here. */
void APlayerController__008c3830::eventClientMessage(const FString& S, FName Type, FLOAT MsgLifeTime)
{
	struct PlayerController_eventClientMessage_Parms
	{
		FString S;
		FName Type;
		FLOAT MsgLifeTime;
	} Parms;
	Parms.S = S;
	Parms.Type = Type;
	Parms.MsgLifeTime = MsgLifeTime;
	ProcessEvent(FindFunctionChecked(g_026c3fa4), &Parms);
}
