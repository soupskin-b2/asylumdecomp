// RRopeComponentBase.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URRopeComponentBase_ : public URRopeComponentBase
{
	void RequestUpdateRope();
	void execRequestUpdateRope(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffe00
void URRopeComponentBase_::execRequestUpdateRope( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RequestUpdateRope();
}

struct URRopeComponentBase__01700860 : public URRopeComponentBase
{
	void DetachRopeEnd1();
	void execDetachRopeEnd1(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01700860
void URRopeComponentBase__01700860::execDetachRopeEnd1( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DetachRopeEnd1();
}

struct URRopeComponentBase__01700890 : public URRopeComponentBase
{
	void DetachRopeEnd2();
	void execDetachRopeEnd2(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01700890
void URRopeComponentBase__01700890::execDetachRopeEnd2( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DetachRopeEnd2();
}

struct URRopeComponentBase__01700ad0 : public URRopeComponentBase
{
	void StopCurrentRopeLengthChange();
	void execStopCurrentRopeLengthChange(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01700ad0
void URRopeComponentBase__01700ad0::execStopCurrentRopeLengthChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopCurrentRopeLengthChange();
}

struct URRopeComponentBase__01700b40 : public URRopeComponentBase
{
	UBOOL GetIsRopeInitialised();
	void execGetIsRopeInitialised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01700b40
void URRopeComponentBase__01700b40::execGetIsRopeInitialised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsRopeInitialised();
}

// @baa 0x016ffe30
void URSimpleRopeComponent::execUpdateRope(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_250();
}

// @baa 0x01700b80
void URSimpleRopeComponent::execInitialiseRope(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_258();
}

// @baa 0x01700bc0
void URSimpleRopeComponent::execFinaliseRope(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_25c();
}

// @baa 0x01700950
void URRopeComponentBase::execSetAutoLength(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(LengthChangeType);
    P_FINISH;
    sub_0163f480(LengthChangeType);
}
