// Engine_0c80000.cpp: 18 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAudioComponent_ : public UAudioComponent
{
	void ResetToDefaults();
	void execResetToDefaults(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c80a10
void UAudioComponent_::execResetToDefaults( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetToDefaults();
}

struct AController_ : public AController
{
	void FinishRotation();
	void execFinishRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c84af0
void AController_::execFinishRotation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FinishRotation();
}

// @baa 0x00c85120
void AController::execEndClimbLadder( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_370();
}

struct AController__00c851d0 : public AController
{
	void StopLatentExecution();
	void execStopLatentExecution(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c851d0
void AController__00c851d0::execStopLatentExecution( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopLatentExecution();
}

struct ADroppedPickup_ : public ADroppedPickup
{
	void AddToNavigation();
	void execAddToNavigation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87850
void ADroppedPickup_::execAddToNavigation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AddToNavigation();
}

struct ADroppedPickup__00c87880 : public ADroppedPickup
{
	void RemoveFromNavigation();
	void execRemoveFromNavigation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87880
void ADroppedPickup__00c87880::execRemoveFromNavigation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RemoveFromNavigation();
}

// @baa 0x00c878e0
void AInterpActor::execSetShadowParentOnAllAttachedComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c88fb0
void ACoverGroup::execEnableGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c88ff0
void ACoverGroup::execDisableGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

// @baa 0x00c89030
void ACoverGroup::execToggleGroup( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

struct AFileWriter_ : public AFileWriter
{
	void CloseFile();
	void execCloseFile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89070
void AFileWriter_::execCloseFile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CloseFile();
}

struct AGameInfo_ : public AGameInfo
{
	void DoNavFearCostFallOff();
	void execDoNavFearCostFallOff(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c890d0
void AGameInfo_::execDoNavFearCostFallOff( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoNavFearCostFallOff();
}

struct ULightEnvironmentComponent_ : public ULightEnvironmentComponent
{
	UBOOL IsEnabled();
	void execIsEnabled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8b6d0
void ULightEnvironmentComponent_::execIsEnabled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsEnabled();
}

struct UCameraAnimInst_ : public UCameraAnimInst {
    void ApplyTransientScaling(FLOAT Scalar); /* 0x00788120 */
};

// @baa 0x00c8c330
void UCameraAnimInst::execApplyTransientScaling(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Scalar);
    P_FINISH;
    ((UCameraAnimInst_*)this)->ApplyTransientScaling(Scalar);
}

struct UTexture2DComposite_ : public UTexture2DComposite
{
	UBOOL SourceTexturesFullyStreamedIn();
	void execSourceTexturesFullyStreamedIn(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8f520
void UTexture2DComposite_::execSourceTexturesFullyStreamedIn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = SourceTexturesFullyStreamedIn();
}

struct UTexture2DComposite__00c8f5c0 : public UTexture2DComposite
{
	void ResetSourceRegions();
	void execResetSourceRegions(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8f5c0
void UTexture2DComposite__00c8f5c0::execResetSourceRegions( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetSourceRegions();
}

// @baa 0x00c8fcd0
void ACrowdAgent::execPlayDeath( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c8ff00
void ASkeletalMeshActorMAT::execMAT_FinishAnimControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}
