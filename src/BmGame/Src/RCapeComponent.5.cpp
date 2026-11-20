// RCapeComponent.cpp: 17 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

const TCHAR* sub_016ad8c0();
const TCHAR* sub_0053f6c0();
// @baa 0x016ade70
UBOOL URCapeComponent::HasUniqueStaticConfigName() const
{
    return sub_016ad8c0 == sub_0053f6c0;
}

// @baa 0x016b1f80
void URCapeComponent::SetMaterialSpeedVariableOverride(FLOAT F)
{
    MaterialSpeedVariableOverride = F;
    sub_016aee80();
}

struct C_Z_1562420
{
};

struct C_Y_60
{
    BYTE Pad[0x60];
    C_Z_1562420* Z;
};

struct C_X_08
{
    BYTE Pad[8];
    C_Y_60* Y;
};

struct C_016b2120
{
    BYTE Pad[0xb8];
    C_X_08* X;
    DWORD sub_016b2120();
};

// @baa 0x016b2120
DWORD C_016b2120::sub_016b2120()
{
    C_X_08* XX = X;
    return ((URAnimNode_Cape*)XX->Y->Z)->GetNumBonesInCape();
}

struct C_Phys_15f0
{
    void sub_016c15f0(INT* P1, INT P10);
};

struct C_016c6430
{
    BYTE Pad[0xb8];
    C_Phys_15f0* Cape;
    void sub_016c6430(INT A1, INT A2, INT A3, INT A4, INT A5, INT A6, INT A7, INT A8, INT A9, INT A10);
};

// @baa 0x016c6430
void C_016c6430::sub_016c6430(INT A1, INT A2, INT A3, INT A4, INT A5, INT A6, INT A7, INT A8, INT A9, INT A10)
{
    C_Phys_15f0* P = Cape;
    if (P != NULL)
        P->sub_016c15f0(&A1, A10);
}

struct C_Cape80_2480
{
    void sub_01562480(INT A1, INT A2, FLOAT F3);
};

struct C_016ae850
{
    BYTE Pad[0x60];
    C_Cape80_2480* Cape;
    void sub_016ae850(INT A1, INT A2, FLOAT F3);
};

// @baa 0x016ae850
void C_016ae850::sub_016ae850(INT A1, INT A2, FLOAT F3)
{
    Cape->sub_01562480(A1, A2, F3);
}

// @baa 0x016c9f30
void URCapeStateConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URCapeStateConfig::StaticClass();
	bCreateNew = TRUE;
	Description = TEXT("CapeStateConfig");
}

// @baa 0x016ae4e0
/* The cape state being entered (a pending forward request wins over the controller's current state). */
FName URCapeComponent::GetCurrentCapeStateName()
{
	if (CapePhysics.Dummy)
	{
		if (IsStateChangeRequested)
		{
			return ForwardToStateName;
		}
		return CapeStateController->CapeStateName;
	}
	return NAME_None;
}

// @baa 0x016ae690
UBOOL URCapeComponent::GetIsInCinematicsState()
{
	if (CapePhysics.Dummy)
	{
		FName StateName;
		if (IsStateChangeRequested)
		{
			StateName = ForwardToStateName;
		}
		else
		{
			StateName = CapeStateController->CapeStateName;
		}
		if (StateName == CapeConfig->CinematicCapeStateName)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x016aea50
/* The cape config's chain width. */
FLOAT URCapeComponent::GetCapeChainWidth()
{
#line 1435 "e:\\\\Projects\\\\Amadeus\\\\AA\\\\Game\\\\UnrealEngine3\\\\Development\\\\Src\\\\BmGame\\\\Src\\\\RCapeComponent.cpp"
    check(CapeConfig != NULL);
    return CapeConfig->CapeChainWidth;
}

#line 172 "candidate.cpp"

// @baa 0x016aecd0
/* The cape config's horizontal damping. */
FLOAT URCapeComponent::GetHorizontalDamping()
{
#line 1528 "e:\\\\Projects\\\\Amadeus\\\\AA\\\\Game\\\\UnrealEngine3\\\\Development\\\\Src\\\\BmGame\\\\Src\\\\RCapeComponent.cpp"
    check(CapeConfig != NULL);
    return CapeConfig->HorizontalDamping;
}

#line 188 "candidate.cpp"

// @baa 0x016b2140
/* How many support connector index pairs the cape config has. */
INT URCapeComponent::GetNumSupportConnectorIndexPairs()
{
#line 1504 "e:\\\\Projects\\\\Amadeus\\\\AA\\\\Game\\\\UnrealEngine3\\\\Development\\\\Src\\\\BmGame\\\\Src\\\\RCapeComponent.cpp"
    check(CapeConfig != NULL);
    return CapeConfig->SupportConnectorIndexPairs.Num();
}

#line 204 "candidate.cpp"

// @baa 0x016aea10
/* How many chains the cape has. */
INT URCapeComponent::GetNumChainsInCape()
{
#line 1253 "e:\\\\Projects\\\\Amadeus\\\\AA\\\\Game\\\\UnrealEngine3\\\\Development\\\\Src\\\\BmGame\\\\Src\\\\RCapeComponent.cpp"
    check(0 <= CapeConfig->NumChainsInCape);
    return CapeConfig->NumChainsInCape;
}

#line 220 "candidate.cpp"

// @baa 0x016ae900
/* Pick the cape bone the state controller debug-renders (1-based chain number and link; 0 turns it off). */
void URCapeComponent::SetCapeDebugRenderBone(INT ChainNumber, INT LinkNumber)
{
    if (ChainNumber != 0 && LinkNumber != 0)
    {
        CapeStateController->sub_016ced50(CapeAnimNode->sub_015691f0(ChainNumber - 1, LinkNumber));
    }
    else
    {
        CapeStateController->sub_016ced50(-1);
    }
}

// @baa 0x016ae800
/* look the name up through the cape anim node (URAnimNode_Cape::GetStateAnimNode), once both the anim node and the
 * state controller exist. */
void* URCapeComponent::GetAnimStateTreeNode(FName Name)
{
    if (CapeAnimNode != NULL && CapeStateController != NULL)
    {
        void* Result = CapeAnimNode->GetStateAnimNode(Name);
        if (Result != NULL)
        {
            return Result;
        }
    }
    return NULL;
}

// @baa 0x016aed10
/* The cape config's vertical damping. */
FLOAT URCapeComponent::GetVerticalDamping()
{
#line 1534 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
    check(CapeConfig != NULL);
    return CapeConfig->VerticalDamping;
}

#line 282 "candidate.cpp"

// @baa 0x016ae870
/* Switch manual blend-weight setting on the cape anim node and set the root weight and both child weights. */
void URCapeComponent::SetAutoCapeAnimBlendWeights(UBOOL bEnable, FLOAT RootWeight, FLOAT ChildWeight)
{
    CapeAnimNode->IsBlendWeightSettingEnabled = bEnable;
    CapeAnimNode->RootBlendWeight = RootWeight;
    CapeAnimNode->Child1BlendWeight = ChildWeight;
    CapeAnimNode->Child2BlendWeight = ChildWeight;
}

// @baa 0x016ba4a0
/* Whether a cape bone collides with the world in a cape state (FALSE when either index is past the config's table). */
UBOOL URCapeComponent::GetBoneCollisionWithWorld(INT StateIndex, INT BoneIndex) const
{
    const TArray<FCapeBoolArrayType>& States = CapeConfig->BoneCollisionWithWorldStates;
    if (StateIndex < States.Num())
    {
        const FCapeBoolArrayType& State = States(StateIndex);
        if (BoneIndex < State.BoolArray.Num())
        {
            return State.BoolArray(BoneIndex);
        }
    }
    return FALSE;
}

#line 339 "candidate.cpp"
