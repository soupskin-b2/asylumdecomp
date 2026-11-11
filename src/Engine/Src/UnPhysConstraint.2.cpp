// UnPhysConstraint.cpp (part 2 of 2): 4 functions
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
