// RExplodableWallBase.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0171a180
void ARExplodableWallBase::execGetWallSide(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, TestLocation);
	P_FINISH;
	*(BYTE*)Result = sub_01716aa0(TestLocation);
}

// @baa 0x00c83230
void ARExplodableWallBase::execGetFOVCheckLocation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetFOVCheckLocation();
}

/* ARExplodableWallBase::ExplodeExtentLine (0x172f010) isn't declared in the kit. */
struct ARExplodableWallBase_ : public ARExplodableWallBase
{
    UBOOL ExplodeExtentLine(BYTE ExplosionType, BYTE ExplodeFromSide, FLOAT FuseTime, FVector StartCheckLocation, FVector EndCheckLocation, FVector CheckExtent);
};

// @baa 0x017310f0
void ARExplodableWallBase::execExplodeExtentLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(ExplosionType);
    P_GET_BYTE(ExplodeFromSide);
    P_GET_FLOAT(FuseTime);
    P_GET_STRUCT(FVector, StartCheckLocation);
    P_GET_STRUCT(FVector, EndCheckLocation);
    P_GET_STRUCT(FVector, CheckExtent);
    P_FINISH;
    *(UBOOL*)Result = ((ARExplodableWallBase_*)this)->ExplodeExtentLine(ExplosionType, ExplodeFromSide, FuseTime, StartCheckLocation, EndCheckLocation, CheckExtent);
}
