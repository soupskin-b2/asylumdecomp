// UnPhysConstraint.cpp (part 2 of 2): 21 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URB_ConstraintInstance_ : public URB_ConstraintInstance {
    void sub_00a39310(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive); /* SetAngularVelocityDrive */
};

// @baa 0x00c95b10
void URB_ConstraintInstance::execSetAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bEnableSwingDrive);
    P_GET_UBOOL(bEnableTwistDrive);
    P_FINISH;
    ((URB_ConstraintInstance_*)this)->sub_00a39310(bEnableSwingDrive, bEnableTwistDrive);
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

struct ARB_ConstraintActor_ : public ARB_ConstraintActor
{
	void TermConstraint();
	void execTermConstraint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c93970
void ARB_ConstraintActor_::execTermConstraint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TermConstraint();
}

struct URB_ConstraintInstance__00c95810 : public URB_ConstraintInstance
{
	UPhysicsAssetInstance* sub_00a385d0();
};

// @baa 0x00c95810
void URB_ConstraintInstance::execGetPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicsAssetInstance**)Result = ((URB_ConstraintInstance__00c95810*)this)->sub_00a385d0();
}

struct URB_ConstraintInstance__00c96410 : public URB_ConstraintInstance
{
	void sub_00a3a480(FLOAT);
};

// @baa 0x00c96410
void URB_ConstraintInstance::execSetLinearLimitSize(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewLimitSize);
	P_FINISH;
	((URB_ConstraintInstance__00c96410*)this)->sub_00a3a480(NewLimitSize);
}

struct ARB_ConstraintActor__00c937d0 : public ARB_ConstraintActor
{
	void sub_00a321f0(UBOOL);
};

// @baa 0x00c937d0
void ARB_ConstraintActor::execSetDisableCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewDisableCollision);
	P_FINISH;
	((ARB_ConstraintActor__00c937d0*)this)->sub_00a321f0(NewDisableCollision);
}

struct URB_ConstraintInstance__00c95bc0 : public URB_ConstraintInstance
{
	void sub_00a32aa0(FVector);
};

// @baa 0x00c95bc0
void URB_ConstraintInstance::execSetLinearPositionTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InPosTarget);
	P_FINISH;
	((URB_ConstraintInstance__00c95bc0*)this)->sub_00a32aa0(InPosTarget);
}

struct URB_ConstraintInstance__00c95c30 : public URB_ConstraintInstance
{
	void sub_00a32b00(FVector);
};

// @baa 0x00c95c30
void URB_ConstraintInstance::execSetLinearVelocityTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InVelTarget);
	P_FINISH;
	((URB_ConstraintInstance__00c95c30*)this)->sub_00a32b00(InVelTarget);
}

struct URB_ConstraintInstance__00c95df0 : public URB_ConstraintInstance
{
	void sub_00a32bd0(FVector);
};

// @baa 0x00c95df0
void URB_ConstraintInstance::execSetAngularVelocityTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, InVelTarget);
	P_FINISH;
	((URB_ConstraintInstance__00c95df0*)this)->sub_00a32bd0(InVelTarget);
}

struct URB_ConstraintInstance__00c95a60 : public URB_ConstraintInstance
{
	void SetAngularPositionDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive);
	void execSetAngularPositionDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95a60
void URB_ConstraintInstance__00c95a60::execSetAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_FINISH;
	SetAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive);
}

struct URB_ConstraintInstance__00c95ca0 : public URB_ConstraintInstance
{
	void SetLinearDriveParams(FLOAT InSpring, FLOAT InDamping, FLOAT InForceLimit);
	void execSetLinearDriveParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95ca0
void URB_ConstraintInstance__00c95ca0::execSetLinearDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_FINISH;
	SetLinearDriveParams(InSpring, InDamping, InForceLimit);
}

struct URB_ConstraintInstance__00c95e60 : public URB_ConstraintInstance
{
	void SetAngularDriveParams(FLOAT InSpring, FLOAT InDamping, FLOAT InForceLimit);
	void execSetAngularDriveParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95e60
void URB_ConstraintInstance__00c95e60::execSetAngularDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_FINISH;
	SetAngularDriveParams(InSpring, InDamping, InForceLimit);
}

struct URB_ConstraintInstance__00c958a0 : public URB_ConstraintInstance
{
	void SetLinearPositionDrive(UBOOL bEnableXDrive, UBOOL bEnableYDrive, UBOOL bEnableZDrive);
	void execSetLinearPositionDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c958a0
void URB_ConstraintInstance__00c958a0::execSetLinearPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableXDrive);
	P_GET_UBOOL(bEnableYDrive);
	P_GET_UBOOL(bEnableZDrive);
	P_FINISH;
	SetLinearPositionDrive(bEnableXDrive, bEnableYDrive, bEnableZDrive);
}

struct URB_ConstraintInstance__00c95980 : public URB_ConstraintInstance
{
	void SetLinearVelocityDrive(UBOOL bEnableXDrive, UBOOL bEnableYDrive, UBOOL bEnableZDrive);
	void execSetLinearVelocityDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95980
void URB_ConstraintInstance__00c95980::execSetLinearVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableXDrive);
	P_GET_UBOOL(bEnableYDrive);
	P_GET_UBOOL(bEnableZDrive);
	P_FINISH;
	SetLinearVelocityDrive(bEnableXDrive, bEnableYDrive, bEnableZDrive);
}

struct URB_ConstraintInstance__00c95f30 : public URB_ConstraintInstance
{
	void SetAngularDOFLimitScale(FLOAT InSwing1LimitScale, FLOAT InSwing2LimitScale, FLOAT InTwistLimitScale, URB_ConstraintSetup* InSetup);
	void execSetAngularDOFLimitScale(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95f30
void URB_ConstraintInstance__00c95f30::execSetAngularDOFLimitScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSwing1LimitScale);
	P_GET_FLOAT(InSwing2LimitScale);
	P_GET_FLOAT(InTwistLimitScale);
	P_GET_OBJECT(URB_ConstraintSetup, InSetup);
	P_FINISH;
	SetAngularDOFLimitScale(InSwing1LimitScale, InSwing2LimitScale, InTwistLimitScale, InSetup);
}

struct URB_ConstraintInstance__00c961b0 : public URB_ConstraintInstance
{
	void SetAngularLimited(UBOOL SwingLimited, FLOAT Swing1LimitAngle, FLOAT Swing2LimitAngle, UBOOL SwingLimitSoft, FLOAT SwingLimitStiffness, FLOAT SwingLimitDamping, UBOOL TwistLimited, FLOAT TwistLimitAngle, UBOOL TwistLimitSoft, FLOAT TwistLimitStiffness, FLOAT TwistLimitDamping);
	void execSetAngularLimited(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c961b0
void URB_ConstraintInstance__00c961b0::execSetAngularLimited(FFrame& Stack, RESULT_DECL)
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

struct URB_ConstraintInstance__00c96030 : public URB_ConstraintInstance
{
	void SetLimits(FVector FirstNormal, FVector FirstAxis, FVector SecondNormal, FVector SecondAxis, FLOAT Swing1Limit, FLOAT Swing2Limit);
	void execSetLimits(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c96030
void URB_ConstraintInstance__00c96030::execSetLimits(FFrame& Stack, RESULT_DECL)
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

struct URB_ConstraintInstance__00c95680 : public URB_ConstraintInstance
{
	void InitConstraint(UPrimitiveComponent* PrimComp1, UPrimitiveComponent* PrimComp2, URB_ConstraintSetup* Setup, FLOAT Scale, AActor* InOwner, UPrimitiveComponent* InPrimComp, UBOOL bMakeKinForBody1, UPhysicsAssetInstance* PhysicsAssetInstance);
	void execInitConstraint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95680
void URB_ConstraintInstance__00c95680::execInitConstraint(FFrame& Stack, RESULT_DECL)
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

struct URB_ConstraintInstance__00c95850 : public URB_ConstraintInstance
{
	FVector GetConstraintLocation();
	void execGetConstraintLocation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95850
void URB_ConstraintInstance__00c95850::execGetConstraintLocation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetConstraintLocation();
}

struct URB_ConstraintInstance__00c95d70 : public URB_ConstraintInstance
{
	void SetAngularPositionTarget(FQuat InPosTarget);
	void execSetAngularPositionTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95d70
void URB_ConstraintInstance__00c95d70::execSetAngularPositionTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, InPosTarget);
	P_FINISH;
	SetAngularPositionTarget(InPosTarget);
}

struct URB_ConstraintInstance__00c96480 : public URB_ConstraintInstance
{
	void MoveKinActorTransform(FMatrix& NewTM);
	void execMoveKinActorTransform(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c96480
void URB_ConstraintInstance__00c96480::execMoveKinActorTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FMatrix, NewTM);
	P_FINISH;
	MoveKinActorTransform(NewTM);
}
