// UnWorld.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct sub_009b45b0_struct {
    INT field_0x00;
    INT field_0x04;
    INT field_0x08;
    INT field_0x0c;
    INT field_0x10;
    INT field_0x14;
    sub_009b45b0_struct* sub_009b45b0(INT InValue);
};

// @baa 0x009b45b0
// Zeroes six dwords of this, returns this.
sub_009b45b0_struct* sub_009b45b0_struct::sub_009b45b0(INT InValue)
{
    field_0x14 = field_0x10 = field_0x0c = field_0x08 = field_0x04 = field_0x00 = 0;
    return this;
}

// A three-word value whose copy-assignment is rebuilt here (009b1a50).
struct FTriWord
{
	INT X;
	INT Y;
	INT Z;

	FTriWord& sub_009b1a50(const FTriWord& Other);
};

// @baa 0x009b1a50
FTriWord& FTriWord::sub_009b1a50(const FTriWord& Other)
{
	X = Other.X;
	Y = Other.Y;
	Z = Other.Z;
	return *this;
}

// Extern reference so the compiler emits sub_009b1a50 (no direct callers exist).
FTriWord& fwords_assign_helper(FTriWord& A, const FTriWord& B)
{
	return A.sub_009b1a50(B);
}

extern undefined4 g_026b6300;
// @baa 0x009b2c80
undefined4 sub_009b2c80(void)
{
  return g_026b6300;
}

int sub_005c7a20(void);
extern undefined * g_01f9a4f8;
// @baa 0x009c1aa0
undefined4 * UObject::sub_009c1aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a4f8);
  return param_1;
}

extern undefined * g_01f9a610;
// @baa 0x009c1ac0
undefined4 * UObject::sub_009c1ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a610);
  return param_1;
}

extern undefined * g_01f9a728;
// @baa 0x009c1b70
undefined4 * UObject::sub_009c1b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a728);
  return param_1;
}

extern undefined * g_01f9a840;
// @baa 0x009c1c20
undefined4 * UObject::sub_009c1c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f9a840);
  return param_1;
}

UClass* sub_007d5ec0();
                 /* ULevelStreamingPersistent::StaticClass, out of line */

struct AWorldInfo_ : public AWorldInfo
{
    FWorldFractureSettings sub_009c6dd0() const;
};

// @baa 0x009c6dd0
/* GetWorldFractureSettings: the settings come from the persistent level's WorldInfo when streaming. */
FWorldFractureSettings AWorldInfo_::sub_009c6dd0() const
{
    const AWorldInfo* Info = this;
    if (StreamingLevels.Num() > 0 &&
        StreamingLevels(0) &&
        StreamingLevels(0)->LoadedLevel &&
        StreamingLevels(0)->sub_00402b40(sub_007d5ec0()))
    {
        Info = ((ULevel*)StreamingLevels(0)->LoadedLevel)->sub_007de2b0();
    }

    FWorldFractureSettings Settings;
    Settings.ChanceOfPhysicsChunkOverride = Info->ChanceOfPhysicsChunkOverride;
    Settings.bEnableChanceOfPhysicsChunkOverride = Info->bEnableChanceOfPhysicsChunkOverride;
    Settings.MaxExplosionChunkSize = Info->MaxExplosionChunkSize;
    Settings.bLimitExplosionChunkSize = Info->bLimitExplosionChunkSize;
    Settings.MaxDamageChunkSize = Info->MaxDamageChunkSize;
    Settings.bLimitDamageChunkSize = Info->bLimitDamageChunkSize;
    Settings.FractureExplosionVelScale = Info->FractureExplosionVelScale;
    Settings.MaxNumFacturedChunksToSpawnInAFrame = Info->MaxNumFacturedChunksToSpawnInAFrame;
    return Settings;
}

// @baa 0x009b1500
struct C_009b1500 {
    INT X;    // 0x00
    INT Y;    // 0x04
    INT Z;    // 0x08

    C_009b1500* sub_009b1500(const INT *Source);
};

// @baa 0x009b1500
C_009b1500* C_009b1500::sub_009b1500(const INT *Source)
{
    X = Source[0];
    Y = Source[1];
    Z = -1;
    return this;
}

void C_009b1500Caller()
{
    C_009b1500 Obj;
    Obj.sub_009b1500(&(Obj.X));
}
