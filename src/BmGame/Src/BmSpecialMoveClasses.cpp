// BmSpecialMoveClasses.cpp: 71 functions
// Placed here by: neighbours 18, file 12, callers 8, class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01613290
int ARSpecialMoveInstance_RelativeAnimMove::vf_000(void) { return 1; }

// @baa 0x016132a0
int ARSpecialMoveInstance_CatchLedge::vf_000(void) { return 1; }

// @baa 0x016132b0
IMPLEMENT_CLASS_AT(URSpecialMoveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 23);

// @baa 0x016133c0
int URSpecialMoveFactoryNew::vf_000(void) { return 1; }

// @baa 0x016133d0
bool URSpecialMoveFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01613410
IMPLEMENT_CLASS_AT(URMatineeSpecialMoveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 24);

// @baa 0x01613520
int URMatineeSpecialMoveFactoryNew::vf_000(void) { return 1; }

// @baa 0x01613530
bool URMatineeSpecialMoveFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016168b0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 10);

// @baa 0x016168d0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapperFalling, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 11);

// @baa 0x016168f0
// @baa 0x016169b0
// @baa 0x01623020
IMPLEMENT_CLASS_AT(URSpecialMoveConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 13);

// @baa 0x01623040
IMPLEMENT_CLASS_AT(URSpecialMoveConfig_RelativeAnimMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 14);

int sub_005c7a20(void);
extern undefined * g_02344d28;
// @baa 0x016230b0
undefined4 * UObject::sub_016230b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344d28);
  return param_1;
}

// @baa 0x016230d0
extern undefined * g_02344e38;
// @baa 0x01623100
undefined4 * UObject::sub_01623100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344e38);
  return param_1;
}

// @baa 0x01623120
IMPLEMENT_CLASS_AT(URSimpleSpecialMoveConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 15);

// @baa 0x01623180
// @baa 0x01623210
// @baa 0x01625a00
// @baa 0x01625a20
// @baa 0x01625c30
// @baa 0x01625cf0
// @baa 0x01625e00
bool URSpecialMoveConfig_RelativeAnimMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01625e40
// @baa 0x01629830
// @baa 0x01629850
// @baa 0x0162b500
// @baa 0x0162b5c0
// @baa 0x0162d140
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_RelativeAnimMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 19);

// @baa 0x0162d1e0
// @baa 0x0162fce0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 16);

// @baa 0x0162fd20
// @baa 0x0162fd60
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_CatchLedge, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 20);

// @baa 0x0162fda0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_ResonateObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 17);

// @baa 0x0162fdf0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_SwingToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 18);

// @baa 0x0162fe30
// @baa 0x0162fef0
// @baa 0x0162ffb0
// @baa 0x01630070
// @baa 0x01630130
// @baa 0x016318c0
// @baa 0x016319d0
bool ARSpecialMoveInstance_RelativeAnimMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined * g_02344738;
// @baa 0x01612a50
undefined4 * UObject::sub_01612a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344738);
  return param_1;
}

extern undefined * g_02344848;
// @baa 0x01612aa0
undefined4 * UObject::sub_01612aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344848);
  return param_1;
}

// @baa 0x016130f0
int URSpecialMoveConfig_RelativeAnimMove::vf_000(void) { return 1; }

// @baa 0x01613100
int URSimpleSpecialMoveConfig::vf_000(void) { return 1; }

// @baa 0x01613110

// @baa 0x01613220
int ARSpecialMoveInstance::vf_000(void) { return 1; }

// @baa 0x01613230
bool ARSpecialMoveInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01613270
int ARSpecialMoveInstance_ResonateObject::vf_000(void) { return 1; }

// @baa 0x01613280
int ARSpecialMoveInstance_SwingToVantagePoint::vf_000(void) { return 1; }

// @baa 0x01613710
void sub_01613710(void) {  }

extern undefined * g_02344988;
// @baa 0x0161da60
undefined4 * UObject::sub_0161da60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344988);
  return param_1;
}

int sub_01612e20(void);
int sub_016168f0(...);
extern undefined4 g_026e1a18;
// @baa 0x0161dab0
int sub_0161dab0(void)
{
  if (g_026e1a18 == 0) {
    g_026e1a18 = sub_016168f0(L"BmGame");
    sub_01612e20();
  }
  return g_026e1a18;
}

// @baa 0x01626940

// @baa 0x016290e0

// @baa 0x016291f0
bool URSimpleSpecialMoveConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01631620

// @baa 0x01631730
bool ARSpecialMoveInstance_ResonateObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01631770

// @baa 0x01631880
bool ARSpecialMoveInstance_SwingToVantagePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016325c0

// @baa 0x016326d0
bool ARSpecialMoveInstance_CatchLedge::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern UBOOL g_026bb6a8;
// @baa 0x01613570
void __stdcall SetOcclusion(void* P)
{
    g_026bb6a8 = (P == NULL);
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x01625fe0
void URSpecialMoveFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URSpecialMoveConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Special Move Config");
}

// @baa 0x01626020
void URMatineeSpecialMoveFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URSpecialMoveConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Matinee Special Move Config");
}

// @baa 0x0162b680
/* A new special-move config; this factory always makes a simple special move config, whatever class was asked for. */
UObject* URMatineeSpecialMoveFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(URSimpleSpecialMoveConfig::StaticClass(), InParent, InName, Flags);
}

// @baa 0x01613590
/* Converts the raw stick axes to angles in [0, 360] (degrees, offset by 180); a centred stick reads as a fixed angle. */
void ARSpecialMoveInstance_ResonateObject::GetLeftAndRightAngles(FLOAT& LeftAngle, FLOAT& RightAngle, FLOAT RawLeftX, FLOAT RawLeftY, FLOAT RawRightX, FLOAT RawRightY)
{
	LeftAngle = (FLOAT)appAtan2(RawLeftY, RawLeftX) * (180.f / (FLOAT)PI);
	RightAngle = (FLOAT)appAtan2(RawRightY, RawRightX) * (180.f / (FLOAT)PI);
	if (RawRightY == 0.f && RawRightX == 0.f)
	{
		RightAngle = 180.f;
	}
	if (RawLeftY == 0.f && RawLeftX == 0.f)
	{
		LeftAngle = 81.f;
	}
	LeftAngle += 180.f;
	RightAngle += 180.f;
}

// @baa 0x01616d50
/* Advances along the swing arc (an angle lerped from TrajectoryStart to TrajectoryEnd over TrajectoryDuration) and
 * returns the new position on the arc plus the normalized progress. */
FLOAT ARSpecialMoveInstance_SwingToVantagePoint::UpdateTrajectory(FLOAT DeltaTime, FVector& Position)
{
	FLOAT Alpha = Clamp(DeltaTime / TrajectoryDuration + CurrentTrajectoryPosition, 0.f, 1.f);
	FLOAT Angle = Lerp(TrajectoryStart, TrajectoryEnd, Alpha);
	CurrentTrajectoryPosition = Alpha;
	FLOAT SinAngle = appSin(Angle);
	Position = (FVector(0.f, 0.f, 1.f) * appCos(Angle) + -TrajectoryDir * SinAngle) * TrajectoryRadius + TrajectoryOrigin;
	return CurrentTrajectoryPosition;
}
