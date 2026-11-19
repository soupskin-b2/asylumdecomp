// RBmAIClass.cpp: 48 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e33a0;
	/* GetDialogueFearLevel */

// @baa 0x015d8a30
/* RBMAIController.GetDialogueFearLevel script event: the generated glue, out of line here. */
BYTE ARBMAIController::eventGetDialogueFearLevel()
{
	struct RBMAIController_eventGetDialogueFearLevel_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e33a0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2738;
	/* AdjustAnimatedAimDir */

// @baa 0x015d8bc0
/* RBMAIController.AdjustAnimatedAimDir script event: the generated glue, out of line here. */
FVector ARBMAIController::eventAdjustAnimatedAimDir(FVector AnimatedDir)
{
	struct RBMAIController_eventAdjustAnimatedAimDir_Parms
	{
		FVector AnimatedDir;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.AnimatedDir = AnimatedDir;
	ProcessEvent(FindFunctionChecked(g_026e2738), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2f74;
	/* DoPlayerLookAt */

// @baa 0x015d8c40
/* RBMAIController.DoPlayerLookAt script event: the generated glue, out of line here. */
void ARBMAIController::eventDoPlayerLookAt(FLOAT DeltaTime)
{
	struct RBMAIController_eventDoPlayerLookAt_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e2f74), &Parms);
}

extern FName g_026e39ec;
	/* UpdateNotVisibleAlert */

// @baa 0x015d8c80
/* RBMAIController.UpdateNotVisibleAlert script event: the generated glue, out of line here. */
void ARBMAIController::eventUpdateNotVisibleAlert(FLOAT DeltaTime, class UAlertInstance* A)
{
	struct RBMAIController_eventUpdateNotVisibleAlert_Parms
	{
		FLOAT DeltaTime;
		class UAlertInstance* A;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	Parms.A = A;
	ProcessEvent(FindFunctionChecked(g_026e39ec), &Parms);
}

extern FName g_026e2a08;
	/* BehaviourCanRespondToAlerts */

// @baa 0x015d8cd0
/* RBMAIController.BehaviourCanRespondToAlerts script event: the generated glue, out of line here. */
UBOOL ARBMAIController::eventBehaviourCanRespondToAlerts()
{
	struct RBMAIController_eventBehaviourCanRespondToAlerts_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2a08), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3490;
	/* BehaviourStateChanged */

// @baa 0x015d8d90
/* RBMAIController.BehaviourStateChanged script event: the generated glue, out of line here. */
void ARBMAIController::eventBehaviourStateChanged(FName NewState)
{
	struct RBMAIController_eventBehaviourStateChanged_Parms
	{
		FName NewState;
	} Parms;
	Parms.NewState = NewState;
	ProcessEvent(FindFunctionChecked(g_026e3490), &Parms);
}

extern FName g_026e36e0;
	/* RemoveBehaviourFromList */

// @baa 0x015d8de0
/* RBMAIController.RemoveBehaviourFromList script event: the generated glue, out of line here. */
void ARBMAIController::eventRemoveBehaviourFromList(class URBMBehaviour* BehaviourToRemove)
{
	struct RBMAIController_eventRemoveBehaviourFromList_Parms
	{
		class URBMBehaviour* BehaviourToRemove;
	} Parms;
	Parms.BehaviourToRemove = BehaviourToRemove;
	ProcessEvent(FindFunctionChecked(g_026e36e0), &Parms);
}

extern FName g_026e2cd8;
	/* GetCheckSightRange */

// @baa 0x015d8e20
/* RBMAIController.GetCheckSightRange script event: the generated glue, out of line here. */
FLOAT ARBMAIController::eventGetCheckSightRange()
{
	struct RBMAIController_eventGetCheckSightRange_Parms
	{
		FLOAT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e2cd8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3874;
	/* IsInBehaviourControlled */

// @baa 0x015d8e60
/* RBMAIController.IsInBehaviourControlled script event: the generated glue, out of line here. */
UBOOL ARBMAIController::eventIsInBehaviourControlled()
{
	struct RBMAIController_eventIsInBehaviourControlled_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3874), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e29bc;
	/* BatmanSeenEventUpdateVal */

// @baa 0x015d8fe0
/* RBMAIManager.BatmanSeenEventUpdateVal script event: the generated glue, out of line here. */
void ARBMAIManager::eventBatmanSeenEventUpdateVal(UBOOL Seen)
{
	struct RBMAIManager_eventBatmanSeenEventUpdateVal_Parms
	{
		UBOOL Seen;
	} Parms;
	Parms.Seen = Seen ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e29bc), &Parms);
}

extern FName g_026e27c8;
	/* IsAnyoneAttacking */

// @baa 0x015d9070
/* RBMCombatManager.IsAnyoneAttacking script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager::eventIsAnyoneAttacking()
{
	struct RBMCombatManager_eventIsAnyoneAttacking_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e27c8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e35e0;
	/* CanDoMoveCheck */

// @baa 0x015d90e0
/* RBMCombatManager.CanDoMoveCheck script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager::eventCanDoMoveCheck(class ARPawnCombat* TestPawn)
{
	struct RBMCombatManager_eventCanDoMoveCheck_Parms
	{
		class ARPawnCombat* TestPawn;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.TestPawn = TestPawn;
	ProcessEvent(FindFunctionChecked(g_026e35e0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3154;
	/* IsCombatPaused */

// @baa 0x015d9130
/* RBMCombatManager.IsCombatPaused script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager::eventIsCombatPaused()
{
	struct RBMCombatManager_eventIsCombatPaused_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3154), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a68;
	/* GetNavSearchIndex */

// @baa 0x015d91e0
/* RBMRoomAIState.GetNavSearchIndex script event: the generated glue, out of line here. */
INT URBMRoomAIState::eventGetNavSearchIndex(class ARBMAIController* Searcher)
{
	struct RBMRoomAIState_eventGetNavSearchIndex_Parms
	{
		class ARBMAIController* Searcher;
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	Parms.Searcher = Searcher;
	ProcessEvent(FindFunctionChecked(g_026e2a68), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2dd4;
	/* GetHostileCount */

// @baa 0x015d9230
/* RBMRoomAIState.GetHostileCount script event: the generated glue, out of line here. */
INT URBMRoomAIState::eventGetHostileCount()
{
	struct RBMRoomAIState_eventGetHostileCount_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e2dd4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3384;
	/* UpdateAlert */

// @baa 0x015d9300
/* AlertInstance.UpdateAlert script event: the generated glue, out of line here. */
void UAlertInstance::eventUpdateAlert(FVector NewLocation, BYTE NewType, FLOAT BackDateTime)
{
	struct AlertInstance_eventUpdateAlert_Parms
	{
		FVector NewLocation;
		BYTE NewType;
		FLOAT BackDateTime;
	} Parms;
	Parms.NewLocation = NewLocation;
	Parms.NewType = NewType;
	Parms.BackDateTime = BackDateTime;
	ProcessEvent(FindFunctionChecked(g_026e3384), &Parms);
}

extern FName g_026e382c;
	/* StopMovementOverlay */

// @baa 0x015d9b60
/* RBMBehaviour_MoveToJokerInChair.StopMovementOverlay script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventStopMovementOverlay(class ARPawnCharacter* P)
{
	struct RBMBehaviour_MoveToJokerInChair_eventStopMovementOverlay_Parms
	{
		class ARPawnCharacter* P;
	} Parms;
	Parms.P = P;
	ProcessEvent(FindFunctionChecked(g_026e382c), &Parms);
}

extern FName g_026e37a0;
	/* PlayEvent */

// @baa 0x015fb180
/* RBMBehaviour_IdleWithPlannarProp.PlayEvent script event: the generated glue, out of line here. */
void URBMBehaviour_IdleWithPlannarProp::eventPlayEvent(INT EventIndex)
{
	struct RBMBehaviour_IdleWithPlannarProp_eventPlayEvent_Parms
	{
		INT EventIndex;
	} Parms;
	Parms.EventIndex = EventIndex;
	ProcessEvent(FindFunctionChecked(g_026e37a0), &Parms);
}

extern FName g_026e2ca8;
	/* PlayBatmanAnim */

// @baa 0x015fb690
/* RBMBehaviour_MoveToBatmanInChair.PlayBatmanAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair::eventPlayBatmanAnim(INT AnimNo)
{
	struct RBMBehaviour_MoveToBatmanInChair_eventPlayBatmanAnim_Parms
	{
		INT AnimNo;
	} Parms;
	Parms.AnimNo = AnimNo;
	ProcessEvent(FindFunctionChecked(g_026e2ca8), &Parms);
}

extern FName g_026e3a64;
	/* PlayHarleyAnim */

// @baa 0x015fb6d0
/* RBMBehaviour_MoveToBatmanInChair.PlayHarleyAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair::eventPlayHarleyAnim(INT AnimNo)
{
	struct RBMBehaviour_MoveToBatmanInChair_eventPlayHarleyAnim_Parms
	{
		INT AnimNo;
	} Parms;
	Parms.AnimNo = AnimNo;
	ProcessEvent(FindFunctionChecked(g_026e3a64), &Parms);
}

extern FName g_026e38ec;
	/* PlayJokerAnim */

// @baa 0x015fb960
/* RBMBehaviour_MoveToJokerInChair.PlayJokerAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventPlayJokerAnim(INT AnimNum)
{
	struct RBMBehaviour_MoveToJokerInChair_eventPlayJokerAnim_Parms
	{
		INT AnimNum;
	} Parms;
	Parms.AnimNum = AnimNum;
	ProcessEvent(FindFunctionChecked(g_026e38ec), &Parms);
}

extern FName g_026e3854;
	/* TriggerPawnActivatedEvent */

// @baa 0x015d8d60
/* RBMAIController.TriggerPawnActivatedEvent script event: the generated glue, out of line here. */
void ARBMAIController::eventTriggerPawnActivatedEvent()
{
	ProcessEvent(FindFunctionChecked(g_026e3854), NULL);
}

extern FName g_026e3994;
	/* BatmanSeenEvent */

// @baa 0x015d8fb0
/* RBMAIManager.BatmanSeenEvent script event: the generated glue, out of line here. */
void ARBMAIManager::eventBatmanSeenEvent()
{
	ProcessEvent(FindFunctionChecked(g_026e3994), NULL);
}

extern FName g_026e3770;
	/* CombatSuccessTriggered */

// @baa 0x015d90b0
/* RBMCombatManager.CombatSuccessTriggered script event: the generated glue, out of line here. */
void ARBMCombatManager::eventCombatSuccessTriggered()
{
	ProcessEvent(FindFunctionChecked(g_026e3770), NULL);
}

extern FName g_026e28c8;
	/* AddToBehaviourHistory */

// @baa 0x015eef10
/* RBMAIController.AddToBehaviourHistory script event: the generated glue, out of line here. */
void ARBMAIController::eventAddToBehaviourHistory(const FString& BehaviourInfoString)
{
	struct RBMAIController_eventAddToBehaviourHistory_Parms
	{
		FString BehaviourInfoString;
	} Parms;
	Parms.BehaviourInfoString = BehaviourInfoString;
	ProcessEvent(FindFunctionChecked(g_026e28c8), &Parms);
}

extern FName g_026e3310;
	/* CanDoIdleConfigLOSCheck */

// @baa 0x015fb0e0
/* RBMAIManager.CanDoIdleConfigLOSCheck script event: the generated glue, out of line here. */
UBOOL ARBMAIManager::eventCanDoIdleConfigLOSCheck(class ARBMAIController* TestController)
{
	struct RBMAIManager_eventCanDoIdleConfigLOSCheck_Parms
	{
		class ARBMAIController* TestController;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.TestController = TestController;
	ProcessEvent(FindFunctionChecked(g_026e3310), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3304;
	/* FinishedStalling */

// @baa 0x015fb1c0
/* RBMBehaviour_IdleWithPlannarProp.FinishedStalling script event: the generated glue, out of line here. */
void URBMBehaviour_IdleWithPlannarProp::eventFinishedStalling()
{
	ProcessEvent(FindFunctionChecked(g_026e3304), NULL);
}

extern FName g_026e3408;
	/* NewMovementPoint */

// @baa 0x015fb510
/* RBMBehaviour_MoveToGroup.NewMovementPoint script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToGroup::eventNewMovementPoint()
{
	ProcessEvent(FindFunctionChecked(g_026e3408), NULL);
}

extern FName g_026e2eb0;
	/* DisableInputLines */

// @baa 0x015fb540
/* RBMBehaviour_MoveToGroup.DisableInputLines script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToGroup::eventDisableInputLines()
{
	ProcessEvent(FindFunctionChecked(g_026e2eb0), NULL);
}

extern FName g_026e2604;
	/* HideBMHead */

// @baa 0x015fb710
/* RBMBehaviour_MoveToBatmanInChair.HideBMHead script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair::eventHideBMHead()
{
	ProcessEvent(FindFunctionChecked(g_026e2604), NULL);
}

extern FName g_026e2af8;
	/* CheckAnims */

// @baa 0x015fb740
/* RBMBehaviour_MoveToBatmanInChair.CheckAnims script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair::eventCheckAnims()
{
	ProcessEvent(FindFunctionChecked(g_026e2af8), NULL);
}

extern FName g_026e3908;
	/* Jolt */

// @baa 0x015fb840
/* RBMBehaviour_MoveToJokerInChair.Jolt script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventJolt()
{
	ProcessEvent(FindFunctionChecked(g_026e3908), NULL);
}

extern FName g_026e3208;
	/* FrankEnd */

// @baa 0x015fb870
/* RBMBehaviour_MoveToJokerInChair.FrankEnd script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventFrankEnd()
{
	ProcessEvent(FindFunctionChecked(g_026e3208), NULL);
}

extern FName g_026e3988;
	/* FrankReact */

// @baa 0x015fb8a0
/* RBMBehaviour_MoveToJokerInChair.FrankReact script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventFrankReact()
{
	ProcessEvent(FindFunctionChecked(g_026e3988), NULL);
}

extern FName g_026e25b4;
	/* FrankSayQuiet */

// @baa 0x015fb8d0
/* RBMBehaviour_MoveToJokerInChair.FrankSayQuiet script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventFrankSayQuiet()
{
	ProcessEvent(FindFunctionChecked(g_026e25b4), NULL);
}

extern FName g_026e39b8;
	/* ThugsEnd */

// @baa 0x015fb900
/* RBMBehaviour_MoveToJokerInChair.ThugsEnd script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventThugsEnd()
{
	ProcessEvent(FindFunctionChecked(g_026e39b8), NULL);
}

extern FName g_026e2fcc;
	/* ThugsReact */

// @baa 0x015fb930
/* RBMBehaviour_MoveToJokerInChair.ThugsReact script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventThugsReact()
{
	ProcessEvent(FindFunctionChecked(g_026e2fcc), NULL);
}

extern FName g_026e2794;
	/* UpdateLinks */

// @baa 0x015fbb60
/* RBMBehaviourAutoStringUp.UpdateLinks script event: the generated glue, out of line here. */
void URBMBehaviourAutoStringUp::eventUpdateLinks()
{
	ProcessEvent(FindFunctionChecked(g_026e2794), NULL);
}

extern FName g_026e284c;
	/* BMGAME_CalcVisibilityFor */

// @baa 0x015d8d10
/* The script event's generated glue (BmGameClasses.h), out of line here. */
BYTE ARBMAIController::eventCalcVisibilityFor(class AActor* A)
{
	struct RBMAIController_eventCalcVisibilityFor_Parms
	{
		class AActor* A;
		BYTE ReturnValue;
	} Parms;
	Parms.A = A;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e284c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2828;
	/* BMGAME_AlertSeen */

// @baa 0x015d8ee0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARAlertEventCoordinator::eventAlertSeen(class ARBMAIController* Spotter)
{
	struct RAlertEventCoordinator_eventAlertSeen_Parms
	{
		class ARBMAIController* Spotter;
	} Parms;
	Parms.Spotter = Spotter;
	ProcessEvent(FindFunctionChecked(g_026e2828), &Parms);
}

extern FName g_026e3930;
	/* BMGAME_AlertSuspected */

// @baa 0x015d8f20
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARAlertEventCoordinator::eventAlertSuspected(class ARBMAIController* Suspectee, UBOOL bUpdateAlert)
{
	struct RAlertEventCoordinator_eventAlertSuspected_Parms
	{
		class ARBMAIController* Suspectee;
		UBOOL bUpdateAlert;
	} Parms;
	Parms.Suspectee = Suspectee;
	Parms.bUpdateAlert = bUpdateAlert ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3930), &Parms);
}

extern FName g_026e36fc;
	/* BMGAME_IsPlayingOverlay */

// @baa 0x015d9ba0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_MoveToJokerInChair::eventIsPlayingOverlay(class ARPawnCharacter* P, FOverlayId Id)
{
	struct RBMBehaviour_MoveToJokerInChair_eventIsPlayingOverlay_Parms
	{
		class ARPawnCharacter* P;
		FOverlayId Id;
		UBOOL ReturnValue;
	} Parms;
	Parms.P = P;
	Parms.Id = Id;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e36fc), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2dfc;
	/* BMGAME_ChangePose */

// @baa 0x015d9c00
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventChangePose(class ARPawnCharacter* P, FName Stand, FName Weap)
{
	struct RBMBehaviour_MoveToJokerInChair_eventChangePose_Parms
	{
		class ARPawnCharacter* P;
		FName Stand;
		FName Weap;
	} Parms;
	Parms.P = P;
	Parms.Stand = Stand;
	Parms.Weap = Weap;
	ProcessEvent(FindFunctionChecked(g_026e2dfc), &Parms);
}

extern FName g_026e2a90;
	/* BMGAME_HasLOS */

// @baa 0x015fb1f0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL URBMBehaviour_IdleWithPlannarProp::eventHasLOS()
{
	struct RBMBehaviour_IdleWithPlannarProp_eventHasLOS_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2a90), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3534;
	/* BMGAME_GetEventCoordinator */

// @baa 0x015d92c0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
class ARAlertEventCoordinator* UAlertInstance::eventGetEventCoordinator()
{
	struct AlertInstance_eventGetEventCoordinator_Parms
	{
		class ARAlertEventCoordinator* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e3534), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3544;
	/* BMGAME_TriggerCombat */

// @baa 0x015fb150
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_IdleWithPlannarProp::eventTriggerCombat()
{
	ProcessEvent(FindFunctionChecked(g_026e3544), NULL);
}

extern FName g_026e28b0;
	/* BMGAME_DisconnectGuard */

// @baa 0x015fb650
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_MoveToBatmanInChair::eventDisconnectGuard(INT guardNo)
{
	struct RBMBehaviour_MoveToBatmanInChair_eventDisconnectGuard_Parms
	{
		INT guardNo;
	} Parms;
	Parms.guardNo = guardNo;
	ProcessEvent(FindFunctionChecked(g_026e28b0), &Parms);
}

	/* BMGAME_DisconnectGuard */

// @baa 0x015fb9a0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void URBMBehaviour_MoveToJokerInChair::eventDisconnectGuard(INT guardNo)
{
	struct RBMBehaviour_MoveToJokerInChair_eventDisconnectGuard_Parms
	{
		INT guardNo;
	} Parms;
	Parms.guardNo = guardNo;
	ProcessEvent(FindFunctionChecked(g_026e28b0), &Parms);
}
