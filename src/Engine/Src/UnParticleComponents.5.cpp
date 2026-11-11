// UnParticleComponents.cpp: 19 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UParticleSystemComponent_ : public UParticleSystemComponent
{
	void DeactivateSystem();
	void execDeactivateSystem(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9cea0
void UParticleSystemComponent_::execDeactivateSystem( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DeactivateSystem();
}

struct UParticleSystemComponent__00c9ced0 : public UParticleSystemComponent
{
	void KillParticlesForced();
	void execKillParticlesForced(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9ced0
void UParticleSystemComponent__00c9ced0::execKillParticlesForced( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	KillParticlesForced();
}

struct UParticleSystemComponent__00c9cf00 : public UParticleSystemComponent
{
	void ForceKillParticlesWithEvents();
	void execForceKillParticlesWithEvents(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9cf00
void UParticleSystemComponent__00c9cf00::execForceKillParticlesWithEvents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceKillParticlesWithEvents();
}

struct UParticleSystemComponent__00c9cfa0 : public UParticleSystemComponent
{
	UBOOL GetSkipUpdateDynamicDataDuringTick();
	void execGetSkipUpdateDynamicDataDuringTick(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9cfa0
void UParticleSystemComponent__00c9cfa0::execGetSkipUpdateDynamicDataDuringTick( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetSkipUpdateDynamicDataDuringTick();
}

// @baa 0x00c9d190
void UParticleSystemComponent::execRewindEmitterInstances( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_25c();
}

struct UParticleSystemComponent__00c9db00 : public UParticleSystemComponent
{
	INT GetLODLevel();
	void execGetLODLevel(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9db00
void UParticleSystemComponent__00c9db00::execGetLODLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetLODLevel();
}

struct UParticleSystemComponent__00c9db40 : public UParticleSystemComponent
{
	INT GetEditorLODLevel();
	void execGetEditorLODLevel(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9db40
void UParticleSystemComponent__00c9db40::execGetEditorLODLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetEditorLODLevel();
}

struct UParticleSystemComponent__00c9db80 : public UParticleSystemComponent {
    void SetFloatParameter(FName ParameterName, FLOAT Param);
    void execSetFloatParameter(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9db80
void UParticleSystemComponent__00c9db80::execSetFloatParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_FLOAT(Param);
    P_FINISH;
    SetFloatParameter(ParameterName, Param);
}

struct UParticleSystemComponent__00c9e4f0 : public UParticleSystemComponent
{
	void ResetToDefaults();
	void execResetToDefaults(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9e4f0
void UParticleSystemComponent__00c9e4f0::execResetToDefaults( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetToDefaults();
}

// @baa 0x00c9cb80
void UParticleSystem::execGetCurrentLODMethod(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_10c();
}

// @baa 0x00c9cbc0
void UParticleSystem::execGetLODLevelCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_110();
}

// @baa 0x00c9deb0
void UParticleSystemComponent::execGetSpawnScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_290();
}

// @baa 0x00c9d120
void UParticleSystemComponent::execRewindEmitterInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(EmitterIndex);
	P_FINISH;

	vf_258(EmitterIndex);
}

struct UParticleSystemComponent__00c9cd80 : public UParticleSystemComponent
{
	void sub_00b64730(UParticleSystem*);
};

// @baa 0x00c9cd80
void UParticleSystemComponent::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UParticleSystem, NewTemplate);
	P_FINISH;
	((UParticleSystemComponent__00c9cd80*)this)->sub_00b64730(NewTemplate);
}

struct UParticleSystemComponent__00c9da40 : public UParticleSystemComponent
{
	void sub_00b5d900(INT);
};

// @baa 0x00c9da40
void UParticleSystemComponent::execSetLODLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(InLODLevel);
	P_FINISH;
	((UParticleSystemComponent__00c9da40*)this)->sub_00b5d900(InLODLevel);
}

struct UParticleSystemComponent__00c9daa0 : public UParticleSystemComponent
{
	void sub_00b51ba0(INT);
};

// @baa 0x00c9daa0
void UParticleSystemComponent::execSetEditorLODLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(InLODLevel);
	P_FINISH;
	((UParticleSystemComponent__00c9daa0*)this)->sub_00b51ba0(InLODLevel);
}

struct UParticleSystemComponent__00c9cf30 : public UParticleSystemComponent
{
	void sub_00b51be0(UBOOL);
};

// @baa 0x00c9cf30
void UParticleSystemComponent::execSetSkipUpdateDynamicDataDuringTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInSkipUpdateDynamicDataDuringTick);
	P_FINISH;
	((UParticleSystemComponent__00c9cf30*)this)->sub_00b51be0(bInSkipUpdateDynamicDataDuringTick);
}

struct UParticleSystemComponent__00c9e480 : public UParticleSystemComponent
{
	void sub_00b5d0c0(UBOOL);
};

// @baa 0x00c9e480
void UParticleSystemComponent::execSetActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNowActive);
	P_FINISH;
	((UParticleSystemComponent__00c9e480*)this)->sub_00b5d0c0(bNowActive);
}

// @baa 0x00c9cc70
void UParticleSystem::execSetCurrentLODMethod(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(InMethod);
	P_FINISH;
	vf_118(InMethod);
}
