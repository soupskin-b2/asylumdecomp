// UnActor.cpp (part 1 of 2): 228 functions
// Placed here by: callers 91, file 90, neighbours 46.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern FName g_026c3f6c;
 /* NAME_Attach */
struct AActor_ : public AActor {
    UFunction* sub_005d7d10(FName InName, INT Global); /* FindFunctionChecked */
    void sub_00753900(AActor* Other);
};

// @baa 0x00753900
void AActor_::sub_00753900(AActor* Other)
{
    BYTE* Frame = (BYTE*)StateFrame;
    if (!Frame || (*(QWORD*)(Frame + 0x2c) & 0x80000))
    {
        struct { AActor* Other; } Parms;
        Parms.Other = Other;
        ProcessEvent(sub_005d7d10(g_026c3f6c, 0), &Parms, 0);
    }
}

// @baa 0x0075b3b0
IMPLEMENT_CLASS_AT(UBookMark, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 105);

// @baa 0x0075b3d0
IMPLEMENT_CLASS_AT(UDestructibleDamageParameters, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 121);

// @baa 0x0075b3f0
IMPLEMENT_CLASS_AT(UMacroReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 128);

// @baa 0x0075b410
IMPLEMENT_CLASS_AT(UMapInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 114);

// @baa 0x0075b450
IMPLEMENT_CLASS_AT(USavedMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 73);

// @baa 0x0075d510
// @baa 0x0075d5d0
// @baa 0x0075d690
// @baa 0x0075d750
// @baa 0x0075d810
// @baa 0x00767050
IMPLEMENT_CLASS_AT(UClipPadEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 106);

// @baa 0x00767070
IMPLEMENT_CLASS_AT(UDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 88);

// @baa 0x00767090
IMPLEMENT_CLASS_AT(UKillZDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 89);

// @baa 0x007670b0
IMPLEMENT_CLASS_AT(UEdCoordSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 102);

// @baa 0x00768e20
// @baa 0x00768ee0
// @baa 0x00768fa0
// @baa 0x00769060
// @baa 0x0076e620
IMPLEMENT_CLASS_AT(UReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 49);

// @baa 0x0076e650
IMPLEMENT_CLASS_AT(UAdvancedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 51);

// @baa 0x0076e680
IMPLEMENT_CLASS_AT(UCeilingReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 60);

// @baa 0x0076e6b0
IMPLEMENT_CLASS_AT(UForcedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 50);

// @baa 0x0076e6e0
IMPLEMENT_CLASS_AT(UCoverSlipReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 57);

// @baa 0x0076e710
IMPLEMENT_CLASS_AT(UFloorToCeilingReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 59);

// @baa 0x0076e740
IMPLEMENT_CLASS_AT(UMantleReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 55);

// @baa 0x0076e770
IMPLEMENT_CLASS_AT(USlotToSlotReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 54);

// @baa 0x0076e7a0
IMPLEMENT_CLASS_AT(USwatTurnReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 56);

// @baa 0x0076e7d0
IMPLEMENT_CLASS_AT(UWallTransReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 58);

// @baa 0x0076e800
IMPLEMENT_CLASS_AT(ULadderReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 52);

// @baa 0x0076e830
IMPLEMENT_CLASS_AT(UProscribedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 53);

// @baa 0x0076e860
IMPLEMENT_CLASS_AT(UTeleportReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 112);

// @baa 0x0076f540
// @baa 0x0076f600
// @baa 0x0076f6c0
// @baa 0x0076f780
// @baa 0x0076f840
// @baa 0x0076f900
// @baa 0x0076f9c0
// @baa 0x0076fa80
// @baa 0x0076fb40
// @baa 0x0076fc00
// @baa 0x0076fcc0
// @baa 0x0076fd80
// @baa 0x0076fe40
// @baa 0x00778380
IMPLEMENT_CLASS_AT(AActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 32);

// @baa 0x007783b0
IMPLEMENT_CLASS_AT(ABrush, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 90);

// @baa 0x007783e0
IMPLEMENT_CLASS_AT(AVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 91);

// @baa 0x00778410
IMPLEMENT_CLASS_AT(ABlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 98);

// @baa 0x00778440
IMPLEMENT_CLASS_AT(ADynamicBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 110);

// @baa 0x00778470
IMPLEMENT_CLASS_AT(ACullDistanceVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 115);

// @baa 0x007784a0
IMPLEMENT_CLASS_AT(ALevelStreamingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 113);

// @baa 0x007784d0
IMPLEMENT_CLASS_AT(APhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 92);

// @baa 0x00778500
IMPLEMENT_CLASS_AT(ADefaultPhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 95);

// @baa 0x00778530
IMPLEMENT_CLASS_AT(AGravityVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 94);

// @baa 0x00778560
IMPLEMENT_CLASS_AT(ALadderVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 96);

// @baa 0x00778590
IMPLEMENT_CLASS_AT(AWaterVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 93);

// @baa 0x007785c0
IMPLEMENT_CLASS_AT(ATriggerVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 107);

// @baa 0x007785f0
IMPLEMENT_CLASS_AT(AController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 80);

void sub_00777830();
// @baa 0x00778600
void sub_00778600(void) { sub_00777830(); }

// @baa 0x00778610
IMPLEMENT_CLASS_AT(ADroppedPickup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 79);

// @baa 0x00778640
IMPLEMENT_CLASS_AT(AEmitterPool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 116);

// @baa 0x00778670
IMPLEMENT_CLASS_AT(AHUD, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 72);

// @baa 0x00778680
IMPLEMENT_CLASS_AT(AInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 74);

// @baa 0x007786b0
IMPLEMENT_CLASS_AT(ANavigationPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 62);

// @baa 0x007786f0
IMPLEMENT_CLASS_AT(ADoorMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 109);

// @baa 0x00778730
IMPLEMENT_CLASS_AT(ALadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 87);

// @baa 0x00778770
IMPLEMENT_CLASS_AT(AAutoLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 99);

// @baa 0x007787b0
IMPLEMENT_CLASS_AT(ALiftCenter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 103);

// @baa 0x007787f0
IMPLEMENT_CLASS_AT(ALiftExit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 104);

// @baa 0x00778830
IMPLEMENT_CLASS_AT(AObjective, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 101);

// @baa 0x00778870
IMPLEMENT_CLASS_AT(APathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 61);

// @baa 0x007788b0
IMPLEMENT_CLASS_AT(AAirNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 125);

// @baa 0x007788f0
IMPLEMENT_CLASS_AT(AVolumePathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 108);

// @baa 0x00778930
IMPLEMENT_CLASS_AT(APickupFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 70);

// @baa 0x00778970
IMPLEMENT_CLASS_AT(APlayerStart, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 66);

// @baa 0x007789b0
IMPLEMENT_CLASS_AT(APortalMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 111);

// @baa 0x007789f0
IMPLEMENT_CLASS_AT(ATeleporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 65);

// @baa 0x00778a30
IMPLEMENT_CLASS_AT(AGameInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 47);

// @baa 0x00778a70
IMPLEMENT_CLASS_AT(AInternetInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 77);

// @baa 0x00778aa0
IMPLEMENT_CLASS_AT(AMacroReachSpecInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 131);

// @baa 0x00778ad0
IMPLEMENT_CLASS_AT(AMutator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 85);

// @baa 0x00778b00
IMPLEMENT_CLASS_AT(APotentialClimbWatcher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 97);

// @baa 0x00778b30
IMPLEMENT_CLASS_AT(AReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 75);

// @baa 0x00778b60
IMPLEMENT_CLASS_AT(AGameReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 78);

// @baa 0x00778b90
IMPLEMENT_CLASS_AT(APlayerReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 76);

// @baa 0x00778bc0
IMPLEMENT_CLASS_AT(ATeamInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 100);

// @baa 0x00778bf0
IMPLEMENT_CLASS_AT(AZoneInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 48);

void sub_00777900();
// @baa 0x00778c20
void sub_00778c20(void) { sub_00777900(); }

// @baa 0x00778c30
IMPLEMENT_CLASS_AT(AInventory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 68);

// @baa 0x00778c60
IMPLEMENT_CLASS_AT(AWeapon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 44);

// @baa 0x00778c90
IMPLEMENT_CLASS_AT(AInventoryManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 69);

// @baa 0x00778cc0
IMPLEMENT_CLASS_AT(AKeypoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 67);

// @baa 0x00778cf0
IMPLEMENT_CLASS_AT(AClipMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 42);

// @baa 0x00778d20
IMPLEMENT_CLASS_AT(APolyMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 43);

// @baa 0x00778d50
IMPLEMENT_CLASS_AT(ALight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 33);

// @baa 0x00778d80
IMPLEMENT_CLASS_AT(ADirectionalLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 34);

// @baa 0x00778db0
IMPLEMENT_CLASS_AT(ADirectionalLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 35);

// @baa 0x00778de0
IMPLEMENT_CLASS_AT(APointLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 36);

// @baa 0x00778e10
IMPLEMENT_CLASS_AT(APointLightMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 37);

// @baa 0x00778e40
IMPLEMENT_CLASS_AT(APointLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 38);

// @baa 0x00778e70
IMPLEMENT_CLASS_AT(ASkyLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 117);

// @baa 0x00778ea0
IMPLEMENT_CLASS_AT(ASkyLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 118);

// @baa 0x00778ed0
IMPLEMENT_CLASS_AT(ASpotLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 39);

// @baa 0x00778f00
IMPLEMENT_CLASS_AT(ASpotLightMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 40);

// @baa 0x00778f30
IMPLEMENT_CLASS_AT(ASpotLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 41);

// @baa 0x00778f60
IMPLEMENT_CLASS_AT(ANote, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 45);

// @baa 0x00778f90
IMPLEMENT_CLASS_AT(AScout, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 63);

// @baa 0x00778fc0
IMPLEMENT_CLASS_AT(AVehicle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 86);

// @baa 0x00778ff0
IMPLEMENT_CLASS_AT(AProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 64);

// @baa 0x00779020
IMPLEMENT_CLASS_AT(ATrigger, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 71);

// @baa 0x00779050
IMPLEMENT_CLASS_AT(AAIController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 81);

// @baa 0x00779070
// @baa 0x00779130
// @baa 0x007791f0
// @baa 0x007792b0
// @baa 0x00779370
// @baa 0x00779430
// @baa 0x007794f0
// @baa 0x007795b0
// @baa 0x00779670
// @baa 0x00779730
// @baa 0x007797f0
// @baa 0x007798b0
// @baa 0x00779970
// @baa 0x00779a30
// @baa 0x00779af0
// @baa 0x00779bb0
// @baa 0x00779c70
// @baa 0x00779d30
// @baa 0x00779df0
// @baa 0x00779eb0
// @baa 0x00779f70
// @baa 0x0077a030
// @baa 0x0077a0f0
// @baa 0x0077a1b0
// @baa 0x0077a270
// @baa 0x0077a330
// @baa 0x0077a3f0
// @baa 0x0077a4b0
// @baa 0x0077a570
// @baa 0x0077a630
// @baa 0x0077a6f0
// @baa 0x0077a7b0
// @baa 0x0077a870
// @baa 0x0077a930
// @baa 0x0077a9f0
// @baa 0x0077aab0
// @baa 0x0077ab70
// @baa 0x0077ac30
// @baa 0x0077acf0
// @baa 0x0077adb0
// @baa 0x0077ae70
// @baa 0x0077af30
// @baa 0x0077aff0
// @baa 0x0077b0b0
// @baa 0x0077b170
// @baa 0x0077b230
// @baa 0x0077b2f0
// @baa 0x0077b3b0
// @baa 0x0077b470
// @baa 0x0077b530
// @baa 0x0077b5f0
// @baa 0x0077b6b0
// @baa 0x0077b770
// @baa 0x0077b830
// @baa 0x0077b8f0
// @baa 0x0077b9b0
// @baa 0x0077ba70
// @baa 0x0077bb30
// @baa 0x0077bbf0
// @baa 0x0077bcb0
// @baa 0x0077bd70
// @baa 0x0077be30
// @baa 0x0077bef0
// @baa 0x0077bfb0
// @baa 0x0077c070
// @baa 0x0077e6c0
IMPLEMENT_CLASS_AT(APlayerController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 82);

// @baa 0x0077e6d0
IMPLEMENT_CLASS_AT(ADebugCameraController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 84);

// @baa 0x0077fb90
// @baa 0x0077fc50
// @baa 0x0077fd60
bool APlayerController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077fda0
// @baa 0x0077fe60
// @baa 0x0077ff70
bool AMutator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077ffb0
// @baa 0x007800c0
bool ALadder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780100
// @baa 0x00780210
bool AVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780250
// @baa 0x00780360
bool APotentialClimbWatcher::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007803a0
// @baa 0x007804b0
bool AObjective::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007804f0
// @baa 0x00780600
bool ALiftCenter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780640
// @baa 0x00780750
bool ALiftExit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780790
// @baa 0x007808a0
bool ADoorMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007808e0
// @baa 0x007809f0
bool APortalMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780a30
// @baa 0x00780b40
bool ASkyLight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00780b80
// @baa 0x00780c90
bool AMacroReachSpecInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00777f80();
// @baa 0x00781b40
void sub_00781b40(void) { sub_00777f80(); }

int sub_005c7a70(...);
int sub_00781b50(void);
// @baa 0x00781c20
undefined4 UAudioComponent::sub_00781c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00781b50();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1b8);
  }
  return param_1;
}

int sub_0077fb90(...);
int sub_0077fc50(void);
extern undefined4 g_026b3c20;
// @baa 0x00781c50
int sub_00781c50(void)
{
  if (g_026b3c20 == 0) {
    g_026b3c20 = sub_0077fb90(L"Engine");
    sub_0077fc50();
  }
  return g_026b3c20;
}

int sub_0077acf0(...);
int sub_0077ffb0(void);
extern undefined4 g_026b3c30;
// @baa 0x00781c80
int sub_00781c80(void)
{
  if (g_026b3c30 == 0) {
    g_026b3c30 = sub_0077acf0(L"Engine");
    sub_0077ffb0();
  }
  return g_026b3c30;
}

int sub_0077a630(...);
int sub_0077f7a0(void);
extern undefined4 g_026b3c04;
// @baa 0x00781ce0
int sub_00781ce0(void)
{
  if (g_026b3c04 == 0) {
    g_026b3c04 = sub_0077a630(L"Engine");
    sub_0077f7a0();
  }
  return g_026b3c04;
}

int sub_00779bb0(...);
int sub_0077f110(void);
extern undefined4 g_026b3b98;
// @baa 0x00781d10
int sub_00781d10(void)
{
  if (g_026b3b98 == 0) {
    g_026b3b98 = sub_00779bb0(L"Engine");
    sub_0077f110();
  }
  return g_026b3b98;
}

// @baa 0x00781f10
IMPLEMENT_CLASS_AT(AWorldInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 46);

int sub_00781d40(void);
// @baa 0x00781f20
undefined4 AWorldInfo::sub_00781f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00781d40();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x584);
  }
  return param_1;
}

int sub_007791f0(...);
int sub_0077e7e0(void);
extern undefined4 g_026b3b60;
// @baa 0x00781f50
int sub_00781f50(void)
{
  if (g_026b3b60 == 0) {
    g_026b3b60 = sub_007791f0(L"Engine");
    sub_0077e7e0();
  }
  return g_026b3b60;
}

int sub_0077be30(...);
int sub_00780a30(void);
extern undefined4 g_026b3ca8;
// @baa 0x00781fb0
int sub_00781fb0(void)
{
  if (g_026b3ca8 == 0) {
    g_026b3ca8 = sub_0077be30(L"Engine");
    sub_00780a30();
  }
  return g_026b3ca8;
}

int sub_007795b0(...);
int sub_0077ea80(void);
extern undefined4 g_026b3b74;
// @baa 0x00781fe0
int sub_00781fe0(void)
{
  if (g_026b3b74 == 0) {
    g_026b3b74 = sub_007795b0(L"Engine");
    sub_0077ea80();
  }
  return g_026b3b74;
}

// @baa 0x00782010
// @baa 0x00782120
bool ADirectionalLightToggleable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782160
// @baa 0x00782270
bool APointLightMovable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007822b0
// @baa 0x007823c0
bool APointLightToggleable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782400
// @baa 0x00782510
bool ASpotLightMovable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782550
// @baa 0x00782660
bool ASpotLightToggleable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007826a0

/* the kit's FVector/FRotator are aggregates; UE3's constructors */
struct FVector_ : public FVector { FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; } };

struct FRotator_ : public FRotator { FRotator_(INT InPitch, INT InYaw, INT InRoll) { Pitch = InPitch; Yaw = InYaw; Roll = InRoll; } };

// @baa 0x00758370
// ABrush::InitPosRotScale (vtable slot 0x358)
void ABrush::InitPosRotScale()
{
#line 3104 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp"
    check(BrushComponent);
    check(Brush);

    Location = FVector_(0, 0, 0);
    Rotation = FRotator_(0, 0, 0);
    PrePivot = FVector_(0, 0, 0);
}

#line 654 "candidate.cpp"
