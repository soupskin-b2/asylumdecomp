// RRopeComponentBase.cpp: 22 functions
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

// @baa 0x017009b0
void URRopeComponentBase::execSetContinuousAutoLength(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(LengthChangeType);
    P_FINISH;
    sub_0163f4a0(LengthChangeType);
}

struct RopeComponentNative : URRopeComponentBase
{
    void sub_01645040(FLOAT NewRopeLength, BYTE LengthChangeType);
};

// @baa 0x017008c0
void URRopeComponentBase::execSetRopeLength(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewRopeLength);
    P_GET_BYTE(LengthChangeType);
    P_FINISH;
    static_cast<RopeComponentNative*>(this)->sub_01645040(NewRopeLength, LengthChangeType);
}

struct RopeComponentNative_01700290 : URRopeComponentBase
{
    FVector sub_01644c90(FLOAT RopePos, BYTE MeasurementRopeEnd);
};

// @baa 0x01700290
void URRopeComponentBase::execGetPositionOfRopePos(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(RopePos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_FINISH;
    *(FVector*)Result = static_cast<RopeComponentNative_01700290*>(this)->sub_01644c90(RopePos, MeasurementRopeEnd);
}

struct RopeComponentNative_01700a10 : URRopeComponentBase
{
    void sub_016451a0(FLOAT NewRopeLength, BYTE LengthChangeType, FLOAT ChangeDuration);
};

// @baa 0x01700a10
void URRopeComponentBase::execSetGradualRopeLengthChange(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewRopeLength);
    P_GET_BYTE(LengthChangeType);
    P_GET_FLOAT(ChangeDuration);
    P_FINISH;
    static_cast<RopeComponentNative_01700a10*>(this)->sub_016451a0(NewRopeLength, LengthChangeType, ChangeDuration);
}

struct RopeComponentNative_01700190 : URRopeComponentBase
{
    FVector sub_01644bc0(FVector WorldSpacePos, BYTE MeasurementRopeEnd, FLOAT& RopePos);
};

// @baa 0x01700190
void URRopeComponentBase::execGetNearestPointOnRopeToPoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, WorldSpacePos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_FLOAT_REF(RopePos);
    P_FINISH;
    *(FVector*)Result = static_cast<RopeComponentNative_01700190*>(this)->sub_01644bc0(WorldSpacePos, MeasurementRopeEnd, RopePos);
}

struct RopeComponentNative_01700660 : URRopeComponentBase
{
    void sub_01644f40(AActor* AttachActor, FName SocketName, USkeletalMeshComponent* AttachComponent, FLOAT AttachMaxDistance);
};

// @baa 0x01700660
void URRopeComponentBase::execAttachRopeEnd1ToSocket(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, AttachActor);
    P_GET_NAME(SocketName);
    P_GET_OBJECT_OPTX(USkeletalMeshComponent, AttachComponent, NULL);
    P_GET_FLOAT_OPTX(AttachMaxDistance, 0.0f);
    P_FINISH;
    static_cast<RopeComponentNative_01700660*>(this)->sub_01644f40(AttachActor, SocketName, AttachComponent, AttachMaxDistance);
}

struct RopeComponentNative_01700760 : URRopeComponentBase
{
    void sub_01644fc0(AActor* AttachActor, FName SocketName, USkeletalMeshComponent* AttachComponent, FLOAT AttachMaxDistance);
};

// @baa 0x01700760
void URRopeComponentBase::execAttachRopeEnd2ToSocket(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, AttachActor);
    P_GET_NAME(SocketName);
    P_GET_OBJECT_OPTX(USkeletalMeshComponent, AttachComponent, NULL);
    P_GET_FLOAT_OPTX(AttachMaxDistance, 0.0f);
    P_FINISH;
    static_cast<RopeComponentNative_01700760*>(this)->sub_01644fc0(AttachActor, SocketName, AttachComponent, AttachMaxDistance);
}

struct RopeComponentNative_017003e0 : URRopeComponentBase
{
    void sub_01644e00(AActor* AttachActor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT AttachMaxDistance);
};

// @baa 0x017003e0
void URRopeComponentBase::execAttachRopeEnd1(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, AttachActor);
    P_GET_STRUCT(FVector, AttachPos);
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    P_GET_NAME(AttachBone);
    P_GET_OBJECT_OPTX(UPrimitiveComponent, AttachComponent, NULL);
    P_GET_FLOAT_OPTX(AttachMaxDistance, 0.0f);
    P_FINISH;
    static_cast<RopeComponentNative_017003e0*>(this)->sub_01644e00(AttachActor, AttachPos, AttachBone, AttachComponent, AttachMaxDistance);
}

struct RopeComponentNative_01700520 : URRopeComponentBase
{
    void sub_01644ea0(AActor* AttachActor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT AttachMaxDistance);
};

// @baa 0x01700520
void URRopeComponentBase::execAttachRopeEnd2(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, AttachActor);
    P_GET_STRUCT(FVector, AttachPos);
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    P_GET_NAME(AttachBone);
    P_GET_OBJECT_OPTX(UPrimitiveComponent, AttachComponent, NULL);
    P_GET_FLOAT_OPTX(AttachMaxDistance, 0.0f);
    P_FINISH;
    static_cast<RopeComponentNative_01700520*>(this)->sub_01644ea0(AttachActor, AttachPos, AttachBone, AttachComponent, AttachMaxDistance);
}

struct RopeComponentNative_016ffe70 : URRopeComponentBase
{
    FVector sub_01644a10(FVector LineSegmentStartPos, FVector LineSegmentEndPos, BYTE MeasurementRopeEnd, FLOAT& RopePos, FLOAT& LineSegmentPos);
};

// @baa 0x016ffe70
void URRopeComponentBase::execGetNearestPointOnRopeToLineSegment(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, LineSegmentStartPos);
    P_GET_STRUCT(FVector, LineSegmentEndPos);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_FLOAT_REF(RopePos);
    P_GET_FLOAT_REF(LineSegmentPos);
    P_FINISH;
    *(FVector*)Result = static_cast<RopeComponentNative_016ffe70*>(this)->sub_01644a10(LineSegmentStartPos, LineSegmentEndPos, MeasurementRopeEnd, RopePos, LineSegmentPos);
}

struct RopeComponentNative_016fffe0 : URRopeComponentBase
{
    FVector sub_01644ac0(FVector RayStartPos, FVector RayDirection, BYTE MeasurementRopeEnd, FLOAT& RopePos, FLOAT& RayPos, FLOAT BufferLength);
};

// @baa 0x016fffe0
void URRopeComponentBase::execGetNearestPointOnRopeToRay(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, RayStartPos);
    P_GET_STRUCT(FVector, RayDirection);
    P_GET_BYTE(MeasurementRopeEnd);
    P_GET_FLOAT_REF(RopePos);
    P_GET_FLOAT_REF(RayPos);
    P_GET_FLOAT_OPTX(BufferLength, 0.0f);
    P_FINISH;
    *(FVector*)Result = static_cast<RopeComponentNative_016fffe0*>(this)->sub_01644ac0(RayStartPos, RayDirection, MeasurementRopeEnd, RopePos, RayPos, BufferLength);
}

// @baa 0x01700b00
void URRopeComponentBase::execGetMinRopeLength(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_254();
}

// @baa 0x01700ca0
void URRopeComponentBase::execCalculateDistanceBetweenRopeEnds(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_264();
}
