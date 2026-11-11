// BmGame_16e0000.cpp: 24 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016e8750
void ARGameInfo::execUpdateMusic( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3c4();
}

// @baa 0x016e89c0
void ARGameRI::execUnloadAllLevels( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e8a00
void ARGameRI::execUnloadNextLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x016e91e0
void ARGameRI::execDumpFpsChart( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3b0();
}

// @baa 0x016e9a60
void ARJokerTannoy::execCancelBarkSetLoading( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e9ad0
void ARPawnSpawnObject::execSpawnPawn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016e9cf0
void ARPontoonBase::execEditorInitPontoonMeshes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e9e60
void ARPontoonBase::execUpdatePontoonForces( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_36c();
}

// @baa 0x016e9f00
void ARChatterBoxBase::execSetBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016e9f70
void ARCinematicActor::execTeleport( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016ea110
void ARCinematicActor::execInternalFinishAnimControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

struct ARCinematicBatmanBase_ : public ARCinematicBatmanBase
{
	void DamageLevelUpdated();
	void execDamageLevelUpdated(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ea200
void ARCinematicBatmanBase_::execDamageLevelUpdated( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DamageLevelUpdated();
}

struct ARCinematicBatmanBase__016ea230 : public ARCinematicBatmanBase
{
    void sub_0156bbd0();
    void execLoadDamageMeshes(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ea230
void ARCinematicBatmanBase__016ea230::execLoadDamageMeshes(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    sub_0156bbd0();
}

// @baa 0x016ea300
void ARElectrifiedFloorPanel::execIntialise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

// @baa 0x016ea340
void ARElectrifiedFloorPanel::execUpdateShockedCharactersEffect( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016ea380
void ARElectrifiedFloorPanel::execCheckForPawnsOnTile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x016ea3c0
void ARElectrifiedFloorPanel::execUpdatePawnsOnTile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_364();
}

// @baa 0x016eadb0
void URHUDPrompt::execResetLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_114();
}

// @baa 0x016eadf0
void URHUDPrompt::execDrawHUD( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_118();
}

// @baa 0x016eb280
void URSeqAct_ActivateElectrifiedFloorPanels::execGetPlateDistances( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016eb2c0
void URSeqAct_ActivateElectrifiedFloorPanels::execGetClosestCurrent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x016eb460
void URSeqAct_FullScreenPlayer::execPlayMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016eb4a0
void URSeqAct_FullScreenPlayer::execStopMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x016ebc40
void URWeaponConfig::execShrink( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_10c();
}
