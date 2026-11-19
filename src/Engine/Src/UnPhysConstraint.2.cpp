// UnPhysConstraint.cpp (part 2 of 2): 23 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c95b10
void URB_ConstraintInstance::execSetAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bEnableSwingDrive);
    P_GET_UBOOL(bEnableTwistDrive);
    P_FINISH;
    SetAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive);
}

struct URB_ConstraintInstance__00a400a0 : public URB_ConstraintInstance
{
	INT TermConstraint(INT Arg0, INT Arg1);
	void execTermConstraint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a400a0
void URB_ConstraintInstance__00a400a0::execTermConstraint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TermConstraint( 0, 1 );
}

// @baa 0x00c93970
void ARB_ConstraintActor::execTermConstraint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TermConstraint();
}

struct URB_ConstraintInstance__00c95810 : public URB_ConstraintInstance
{
	UPhysicsAssetInstance* GetPhysicsAssetInstance();
};

// @baa 0x00c95810
void URB_ConstraintInstance::execGetPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicsAssetInstance**)Result = ((URB_ConstraintInstance__00c95810*)this)->GetPhysicsAssetInstance();
}

// @baa 0x00c96410
void URB_ConstraintInstance::execSetLinearLimitSize(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewLimitSize);
	P_FINISH;
	this->SetLinearLimitSize(NewLimitSize);
}

// @baa 0x00c937d0
void ARB_ConstraintActor::execSetDisableCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewDisableCollision);
	P_FINISH;
	this->SetDisableCollision(NewDisableCollision);
}

// @baa 0x00c95bc0
void URB_ConstraintInstance::execSetLinearPositionTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InPosTarget);
	P_FINISH;
	this->SetLinearPositionTarget(InPosTarget);
}

// @baa 0x00c95c30
void URB_ConstraintInstance::execSetLinearVelocityTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InVelTarget);
	P_FINISH;
	this->SetLinearVelocityTarget(InVelTarget);
}

// @baa 0x00c95df0
void URB_ConstraintInstance::execSetAngularVelocityTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InVelTarget);
	P_FINISH;
	this->SetAngularVelocityTarget(InVelTarget);
}

// @baa 0x00c95a60
void URB_ConstraintInstance::execSetAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_FINISH;
	SetAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive);
}

// @baa 0x00c95ca0
void URB_ConstraintInstance::execSetLinearDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_FINISH;
	SetLinearDriveParams(InSpring, InDamping, InForceLimit);
}

// @baa 0x00c95e60
void URB_ConstraintInstance::execSetAngularDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_FINISH;
	SetAngularDriveParams(InSpring, InDamping, InForceLimit);
}

// @baa 0x00c958a0
void URB_ConstraintInstance::execSetLinearPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableXDrive);
	P_GET_UBOOL(bEnableYDrive);
	P_GET_UBOOL(bEnableZDrive);
	P_FINISH;
	SetLinearPositionDrive(bEnableXDrive, bEnableYDrive, bEnableZDrive);
}

// @baa 0x00c95980
void URB_ConstraintInstance::execSetLinearVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableXDrive);
	P_GET_UBOOL(bEnableYDrive);
	P_GET_UBOOL(bEnableZDrive);
	P_FINISH;
	SetLinearVelocityDrive(bEnableXDrive, bEnableYDrive, bEnableZDrive);
}

// @baa 0x00c95f30
void URB_ConstraintInstance::execSetAngularDOFLimitScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSwing1LimitScale);
	P_GET_FLOAT(InSwing2LimitScale);
	P_GET_FLOAT(InTwistLimitScale);
	P_GET_OBJECT(URB_ConstraintSetup, InSetup);
	P_FINISH;
	SetAngularDOFLimitScale(InSwing1LimitScale, InSwing2LimitScale, InTwistLimitScale, InSetup);
}

// @baa 0x00c961b0
void URB_ConstraintInstance::execSetAngularLimited(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(SwingLimited);
	P_GET_FLOAT(Swing1LimitAngle);
	P_GET_FLOAT(Swing2LimitAngle);
	P_GET_UBOOL(SwingLimitSoft);
	P_GET_FLOAT(SwingLimitStiffness);
	P_GET_FLOAT(SwingLimitDamping);
	P_GET_UBOOL(TwistLimited);
	P_GET_FLOAT(TwistLimitAngle);
	P_GET_UBOOL(TwistLimitSoft);
	P_GET_FLOAT(TwistLimitStiffness);
	P_GET_FLOAT(TwistLimitDamping);
	P_FINISH;
	SetAngularLimited(SwingLimited, Swing1LimitAngle, Swing2LimitAngle, SwingLimitSoft, SwingLimitStiffness, SwingLimitDamping, TwistLimited, TwistLimitAngle, TwistLimitSoft, TwistLimitStiffness, TwistLimitDamping);
}

// @baa 0x00c96030
void URB_ConstraintInstance::execSetLimits(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, FirstNormal);
	P_GET_STRUCT(FVector, FirstAxis);
	P_GET_STRUCT(FVector, SecondNormal);
	P_GET_STRUCT(FVector, SecondAxis);
	P_GET_FLOAT(Swing1Limit);
	P_GET_FLOAT(Swing2Limit);
	P_FINISH;
	SetLimits(FirstNormal, FirstAxis, SecondNormal, SecondAxis, Swing1Limit, Swing2Limit);
}

// @baa 0x00c95680
void URB_ConstraintInstance::execInitConstraint(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPrimitiveComponent, PrimComp1);
	P_GET_OBJECT(UPrimitiveComponent, PrimComp2);
	P_GET_OBJECT(URB_ConstraintSetup, Setup);
	P_GET_FLOAT(Scale);
	P_GET_OBJECT(AActor, InOwner);
	P_GET_OBJECT(UPrimitiveComponent, InPrimComp);
	P_GET_UBOOL(bMakeKinForBody1);
	P_GET_OBJECT(UPhysicsAssetInstance, PhysicsAssetInstance);
	P_FINISH;
	InitConstraint(PrimComp1, PrimComp2, Setup, Scale, InOwner, InPrimComp, bMakeKinForBody1, PhysicsAssetInstance);
}

// @baa 0x00c95850
void URB_ConstraintInstance::execGetConstraintLocation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetConstraintLocation();
}

// @baa 0x00c95d70
void URB_ConstraintInstance::execSetAngularPositionTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, InPosTarget);
	P_FINISH;
	SetAngularPositionTarget(InPosTarget);
}

// @baa 0x00c96480
void URB_ConstraintInstance::execMoveKinActorTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FMatrix, NewTM);
	P_FINISH;
	MoveKinActorTransform(NewTM);
}

extern FName g_026c4100;
	/* ConstraintBrokenNotify */

// @baa 0x00a2ff20
/* Actor.ConstraintBrokenNotify script event: the generated glue, out of line here. */
void AActor::eventConstraintBrokenNotify(class AActor* ConOwner, class URB_ConstraintSetup* ConSetup, class URB_ConstraintInstance* ConInstance)
{
	struct Actor_eventConstraintBrokenNotify_Parms
	{
		class AActor* ConOwner;
		class URB_ConstraintSetup* ConSetup;
		class URB_ConstraintInstance* ConInstance;
	} Parms;
	Parms.ConOwner = ConOwner;
	Parms.ConSetup = ConSetup;
	Parms.ConInstance = ConInstance;
	ProcessEvent(FindFunctionChecked(g_026c4100), &Parms);
}

// @baa 0x00c93840
void ARB_ConstraintActor::execInitConstraint(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Actor1);
    P_GET_OBJECT(AActor, Actor2);
    P_GET_NAME_OPTX(Actor1Bone, NAME_None);
    P_GET_NAME_OPTX(Actor2Bone, NAME_None);
    P_GET_FLOAT_OPTX(BreakThreshold, 0.f);
    P_FINISH;
    this->InitConstraint(Actor1, Actor2, Actor1Bone, Actor2Bone, BreakThreshold);
}
