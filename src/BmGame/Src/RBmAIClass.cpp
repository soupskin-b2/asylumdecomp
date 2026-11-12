// RBmAIClass.cpp: 38 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e33a0;
	/* GetDialogueFearLevel */
struct ARBMAIController_ : public ARBMAIController
{
	BYTE eventGetDialogueFearLevel();
};

// @baa 0x015d8a30
/* RBMAIController.GetDialogueFearLevel script event: the generated glue, out of line here. */
BYTE ARBMAIController_::eventGetDialogueFearLevel()
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
struct ARBMAIController__015d8bc0 : public ARBMAIController
{
	FVector eventAdjustAnimatedAimDir(FVector AnimatedDir);
};

// @baa 0x015d8bc0
/* RBMAIController.AdjustAnimatedAimDir script event: the generated glue, out of line here. */
FVector ARBMAIController__015d8bc0::eventAdjustAnimatedAimDir(FVector AnimatedDir)
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
struct ARBMAIController__015d8c40 : public ARBMAIController
{
	void eventDoPlayerLookAt(FLOAT DeltaTime);
};

// @baa 0x015d8c40
/* RBMAIController.DoPlayerLookAt script event: the generated glue, out of line here. */
void ARBMAIController__015d8c40::eventDoPlayerLookAt(FLOAT DeltaTime)
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
struct ARBMAIController__015d8c80 : public ARBMAIController
{
	void eventUpdateNotVisibleAlert(FLOAT DeltaTime, class UAlertInstance* A);
};

// @baa 0x015d8c80
/* RBMAIController.UpdateNotVisibleAlert script event: the generated glue, out of line here. */
void ARBMAIController__015d8c80::eventUpdateNotVisibleAlert(FLOAT DeltaTime, class UAlertInstance* A)
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
struct ARBMAIController__015d8cd0 : public ARBMAIController
{
	UBOOL eventBehaviourCanRespondToAlerts();
};

// @baa 0x015d8cd0
/* RBMAIController.BehaviourCanRespondToAlerts script event: the generated glue, out of line here. */
UBOOL ARBMAIController__015d8cd0::eventBehaviourCanRespondToAlerts()
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
struct ARBMAIController__015d8d90 : public ARBMAIController
{
	void eventBehaviourStateChanged(FName NewState);
};

// @baa 0x015d8d90
/* RBMAIController.BehaviourStateChanged script event: the generated glue, out of line here. */
void ARBMAIController__015d8d90::eventBehaviourStateChanged(FName NewState)
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
struct ARBMAIController__015d8de0 : public ARBMAIController
{
	void eventRemoveBehaviourFromList(class URBMBehaviour* BehaviourToRemove);
};

// @baa 0x015d8de0
/* RBMAIController.RemoveBehaviourFromList script event: the generated glue, out of line here. */
void ARBMAIController__015d8de0::eventRemoveBehaviourFromList(class URBMBehaviour* BehaviourToRemove)
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
struct ARBMAIController__015d8e20 : public ARBMAIController
{
	FLOAT eventGetCheckSightRange();
};

// @baa 0x015d8e20
/* RBMAIController.GetCheckSightRange script event: the generated glue, out of line here. */
FLOAT ARBMAIController__015d8e20::eventGetCheckSightRange()
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
struct ARBMAIController__015d8e60 : public ARBMAIController
{
	UBOOL eventIsInBehaviourControlled();
};

// @baa 0x015d8e60
/* RBMAIController.IsInBehaviourControlled script event: the generated glue, out of line here. */
UBOOL ARBMAIController__015d8e60::eventIsInBehaviourControlled()
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
struct ARBMAIManager_ : public ARBMAIManager
{
	void eventBatmanSeenEventUpdateVal(UBOOL Seen);
};

// @baa 0x015d8fe0
/* RBMAIManager.BatmanSeenEventUpdateVal script event: the generated glue, out of line here. */
void ARBMAIManager_::eventBatmanSeenEventUpdateVal(UBOOL Seen)
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
struct ARBMCombatManager_ : public ARBMCombatManager
{
	UBOOL eventIsAnyoneAttacking();
};

// @baa 0x015d9070
/* RBMCombatManager.IsAnyoneAttacking script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager_::eventIsAnyoneAttacking()
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
struct ARBMCombatManager__015d90e0 : public ARBMCombatManager
{
	UBOOL eventCanDoMoveCheck(class ARPawnCombat* TestPawn);
};

// @baa 0x015d90e0
/* RBMCombatManager.CanDoMoveCheck script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager__015d90e0::eventCanDoMoveCheck(class ARPawnCombat* TestPawn)
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
struct ARBMCombatManager__015d9130 : public ARBMCombatManager
{
	UBOOL eventIsCombatPaused();
};

// @baa 0x015d9130
/* RBMCombatManager.IsCombatPaused script event: the generated glue, out of line here. */
UBOOL ARBMCombatManager__015d9130::eventIsCombatPaused()
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
struct URBMRoomAIState_ : public URBMRoomAIState
{
	INT eventGetNavSearchIndex(class ARBMAIController* Searcher);
};

// @baa 0x015d91e0
/* RBMRoomAIState.GetNavSearchIndex script event: the generated glue, out of line here. */
INT URBMRoomAIState_::eventGetNavSearchIndex(class ARBMAIController* Searcher)
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
struct URBMRoomAIState__015d9230 : public URBMRoomAIState
{
	INT eventGetHostileCount();
};

// @baa 0x015d9230
/* RBMRoomAIState.GetHostileCount script event: the generated glue, out of line here. */
INT URBMRoomAIState__015d9230::eventGetHostileCount()
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
struct UAlertInstance_ : public UAlertInstance
{
	void eventUpdateAlert(FVector NewLocation, BYTE NewType, FLOAT BackDateTime);
};

// @baa 0x015d9300
/* AlertInstance.UpdateAlert script event: the generated glue, out of line here. */
void UAlertInstance_::eventUpdateAlert(FVector NewLocation, BYTE NewType, FLOAT BackDateTime)
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
struct URBMBehaviour_MoveToJokerInChair_ : public URBMBehaviour_MoveToJokerInChair
{
	void eventStopMovementOverlay(class ARPawnCharacter* P);
};

// @baa 0x015d9b60
/* RBMBehaviour_MoveToJokerInChair.StopMovementOverlay script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair_::eventStopMovementOverlay(class ARPawnCharacter* P)
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
struct URBMBehaviour_IdleWithPlannarProp_ : public URBMBehaviour_IdleWithPlannarProp
{
	void eventPlayEvent(INT EventIndex);
};

// @baa 0x015fb180
/* RBMBehaviour_IdleWithPlannarProp.PlayEvent script event: the generated glue, out of line here. */
void URBMBehaviour_IdleWithPlannarProp_::eventPlayEvent(INT EventIndex)
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
struct URBMBehaviour_MoveToBatmanInChair_ : public URBMBehaviour_MoveToBatmanInChair
{
	void eventPlayBatmanAnim(INT AnimNo);
};

// @baa 0x015fb690
/* RBMBehaviour_MoveToBatmanInChair.PlayBatmanAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair_::eventPlayBatmanAnim(INT AnimNo)
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
struct URBMBehaviour_MoveToBatmanInChair__015fb6d0 : public URBMBehaviour_MoveToBatmanInChair
{
	void eventPlayHarleyAnim(INT AnimNo);
};

// @baa 0x015fb6d0
/* RBMBehaviour_MoveToBatmanInChair.PlayHarleyAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair__015fb6d0::eventPlayHarleyAnim(INT AnimNo)
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
struct URBMBehaviour_MoveToJokerInChair__015fb960 : public URBMBehaviour_MoveToJokerInChair
{
	void eventPlayJokerAnim(INT AnimNum);
};

// @baa 0x015fb960
/* RBMBehaviour_MoveToJokerInChair.PlayJokerAnim script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb960::eventPlayJokerAnim(INT AnimNum)
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
struct ARBMAIController__015d8d60 : public ARBMAIController
{
	void eventTriggerPawnActivatedEvent();
};

// @baa 0x015d8d60
/* RBMAIController.TriggerPawnActivatedEvent script event: the generated glue, out of line here. */
void ARBMAIController__015d8d60::eventTriggerPawnActivatedEvent()
{
	ProcessEvent(FindFunctionChecked(g_026e3854), NULL);
}

extern FName g_026e3994;
	/* BatmanSeenEvent */
struct ARBMAIManager__015d8fb0 : public ARBMAIManager
{
	void eventBatmanSeenEvent();
};

// @baa 0x015d8fb0
/* RBMAIManager.BatmanSeenEvent script event: the generated glue, out of line here. */
void ARBMAIManager__015d8fb0::eventBatmanSeenEvent()
{
	ProcessEvent(FindFunctionChecked(g_026e3994), NULL);
}

extern FName g_026e3770;
	/* CombatSuccessTriggered */
struct ARBMCombatManager__015d90b0 : public ARBMCombatManager
{
	void eventCombatSuccessTriggered();
};

// @baa 0x015d90b0
/* RBMCombatManager.CombatSuccessTriggered script event: the generated glue, out of line here. */
void ARBMCombatManager__015d90b0::eventCombatSuccessTriggered()
{
	ProcessEvent(FindFunctionChecked(g_026e3770), NULL);
}

extern FName g_026e28c8;
	/* AddToBehaviourHistory */
struct ARBMAIController__015eef10 : public ARBMAIController
{
	void eventAddToBehaviourHistory(const FString& BehaviourInfoString);
};

// @baa 0x015eef10
/* RBMAIController.AddToBehaviourHistory script event: the generated glue, out of line here. */
void ARBMAIController__015eef10::eventAddToBehaviourHistory(const FString& BehaviourInfoString)
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
struct ARBMAIManager__015fb0e0 : public ARBMAIManager
{
	UBOOL eventCanDoIdleConfigLOSCheck(class ARBMAIController* TestController);
};

// @baa 0x015fb0e0
/* RBMAIManager.CanDoIdleConfigLOSCheck script event: the generated glue, out of line here. */
UBOOL ARBMAIManager__015fb0e0::eventCanDoIdleConfigLOSCheck(class ARBMAIController* TestController)
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
struct URBMBehaviour_IdleWithPlannarProp__015fb1c0 : public URBMBehaviour_IdleWithPlannarProp
{
	void eventFinishedStalling();
};

// @baa 0x015fb1c0
/* RBMBehaviour_IdleWithPlannarProp.FinishedStalling script event: the generated glue, out of line here. */
void URBMBehaviour_IdleWithPlannarProp__015fb1c0::eventFinishedStalling()
{
	ProcessEvent(FindFunctionChecked(g_026e3304), NULL);
}

extern FName g_026e3408;
	/* NewMovementPoint */
struct URBMBehaviour_MoveToGroup_ : public URBMBehaviour_MoveToGroup
{
	void eventNewMovementPoint();
};

// @baa 0x015fb510
/* RBMBehaviour_MoveToGroup.NewMovementPoint script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToGroup_::eventNewMovementPoint()
{
	ProcessEvent(FindFunctionChecked(g_026e3408), NULL);
}

extern FName g_026e2eb0;
	/* DisableInputLines */
struct URBMBehaviour_MoveToGroup__015fb540 : public URBMBehaviour_MoveToGroup
{
	void eventDisableInputLines();
};

// @baa 0x015fb540
/* RBMBehaviour_MoveToGroup.DisableInputLines script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToGroup__015fb540::eventDisableInputLines()
{
	ProcessEvent(FindFunctionChecked(g_026e2eb0), NULL);
}

extern FName g_026e2604;
	/* HideBMHead */
struct URBMBehaviour_MoveToBatmanInChair__015fb710 : public URBMBehaviour_MoveToBatmanInChair
{
	void eventHideBMHead();
};

// @baa 0x015fb710
/* RBMBehaviour_MoveToBatmanInChair.HideBMHead script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair__015fb710::eventHideBMHead()
{
	ProcessEvent(FindFunctionChecked(g_026e2604), NULL);
}

extern FName g_026e2af8;
	/* CheckAnims */
struct URBMBehaviour_MoveToBatmanInChair__015fb740 : public URBMBehaviour_MoveToBatmanInChair
{
	void eventCheckAnims();
};

// @baa 0x015fb740
/* RBMBehaviour_MoveToBatmanInChair.CheckAnims script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToBatmanInChair__015fb740::eventCheckAnims()
{
	ProcessEvent(FindFunctionChecked(g_026e2af8), NULL);
}

extern FName g_026e3908;
	/* Jolt */
struct URBMBehaviour_MoveToJokerInChair__015fb840 : public URBMBehaviour_MoveToJokerInChair
{
	void eventJolt();
};

// @baa 0x015fb840
/* RBMBehaviour_MoveToJokerInChair.Jolt script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb840::eventJolt()
{
	ProcessEvent(FindFunctionChecked(g_026e3908), NULL);
}

extern FName g_026e3208;
	/* FrankEnd */
struct URBMBehaviour_MoveToJokerInChair__015fb870 : public URBMBehaviour_MoveToJokerInChair
{
	void eventFrankEnd();
};

// @baa 0x015fb870
/* RBMBehaviour_MoveToJokerInChair.FrankEnd script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb870::eventFrankEnd()
{
	ProcessEvent(FindFunctionChecked(g_026e3208), NULL);
}

extern FName g_026e3988;
	/* FrankReact */
struct URBMBehaviour_MoveToJokerInChair__015fb8a0 : public URBMBehaviour_MoveToJokerInChair
{
	void eventFrankReact();
};

// @baa 0x015fb8a0
/* RBMBehaviour_MoveToJokerInChair.FrankReact script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb8a0::eventFrankReact()
{
	ProcessEvent(FindFunctionChecked(g_026e3988), NULL);
}

extern FName g_026e25b4;
	/* FrankSayQuiet */
struct URBMBehaviour_MoveToJokerInChair__015fb8d0 : public URBMBehaviour_MoveToJokerInChair
{
	void eventFrankSayQuiet();
};

// @baa 0x015fb8d0
/* RBMBehaviour_MoveToJokerInChair.FrankSayQuiet script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb8d0::eventFrankSayQuiet()
{
	ProcessEvent(FindFunctionChecked(g_026e25b4), NULL);
}

extern FName g_026e39b8;
	/* ThugsEnd */
struct URBMBehaviour_MoveToJokerInChair__015fb900 : public URBMBehaviour_MoveToJokerInChair
{
	void eventThugsEnd();
};

// @baa 0x015fb900
/* RBMBehaviour_MoveToJokerInChair.ThugsEnd script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb900::eventThugsEnd()
{
	ProcessEvent(FindFunctionChecked(g_026e39b8), NULL);
}

extern FName g_026e2fcc;
	/* ThugsReact */
struct URBMBehaviour_MoveToJokerInChair__015fb930 : public URBMBehaviour_MoveToJokerInChair
{
	void eventThugsReact();
};

// @baa 0x015fb930
/* RBMBehaviour_MoveToJokerInChair.ThugsReact script event: the generated glue, out of line here. */
void URBMBehaviour_MoveToJokerInChair__015fb930::eventThugsReact()
{
	ProcessEvent(FindFunctionChecked(g_026e2fcc), NULL);
}

extern FName g_026e2794;
	/* UpdateLinks */
struct URBMBehaviourAutoStringUp_ : public URBMBehaviourAutoStringUp
{
	void eventUpdateLinks();
};

// @baa 0x015fbb60
/* RBMBehaviourAutoStringUp.UpdateLinks script event: the generated glue, out of line here. */
void URBMBehaviourAutoStringUp_::eventUpdateLinks()
{
	ProcessEvent(FindFunctionChecked(g_026e2794), NULL);
}
