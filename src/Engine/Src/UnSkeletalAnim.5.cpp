// UnSkeletalAnim.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00940310
void USkeletalMeshComponent::execUpdatePermanentFixing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePermanentFixing();
}

// @baa 0x00937ec0
void USkeletalMeshComponent::execSetAnimTreeTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimTree, NewTemplate);
	P_FINISH;
	sub_00937e40(NewTemplate);
}

// @baa 0x00940090
void USkeletalMeshComponent::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_FINISH;
	if (Component)
		sub_0093fde0(Component);
}

// @baa 0x00940100
void USkeletalMeshComponent::execAttachComponentToSocket(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_GET_NAME(SocketName);
	P_FINISH;
	if ( Component != NULL )
	{
		AttachComponentToSocket(Component, SocketName);
	}
}
