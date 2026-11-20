// GameFramework_0e20000.cpp (part 1 of 6): 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e25880
UBOOL AGameHUD::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00e25890
UBOOL AGameHUD::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e258d0
IMPLEMENT_CLASS_AT(AGamePawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GamePawn.cpp", 11);

// @baa 0x00e259e0
UBOOL AGamePawn::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00e259f0
UBOOL AGamePawn::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e25a80
IMPLEMENT_CLASS_AT(AGameProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameProjectile.cpp", 9);

// @baa 0x00e25bb0
UBOOL AGameProjectile::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e25bf0
IMPLEMENT_CLASS_AT(USeqAct_ModifyProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameSequence.cpp", 9);

// @baa 0x00e25d00
UBOOL USeqAct_ModifyProperty::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00e25d10
UBOOL USeqAct_ModifyProperty::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e25ee0
IMPLEMENT_CLASS_AT(AGameWeapon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 9);

// @baa 0x00e25ff0
UBOOL AGameWeapon::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00e26000
UBOOL AGameWeapon::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e261a0
IMPLEMENT_CLASS_AT(AGameExplosionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 12);

// @baa 0x00e262d0
UBOOL AGameExplosionActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct E { BYTE Bytes[24]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00e26990(INT Index);
};

// @baa 0x00e26990
E* S::sub_00e26990(INT Index)
{
    return &Items(Index);
}

struct C_00e269e0 {
    int sub_00e269e0(int);
};

// @baa 0x00e269e0
int C_00e269e0::sub_00e269e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00e276e0 { C_00e276e0* sub_00e276e0(void); };

// @baa 0x00e276e0
C_00e276e0* C_00e276e0::sub_00e276e0(void) { return this; }

// @baa 0x00e27720
// @baa 0x00e27780
// @baa 0x00e277e0
// @baa 0x00e27840
int sub_00773ad0(void);
extern undefined * g_020ed6c0;
struct C_00e27870 { undefined4 * sub_00e27870(void); };
// @baa 0x00e27870
undefined4 * C_00e27870::sub_00e27870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00773ad0();
  *param_1 = (undefined4)(&g_020ed6c0);
  return param_1;
}

// @baa 0x00e27890
IMPLEMENT_CLASS_AT(AGameHUD, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameHUD.cpp", 9);

// @baa 0x00e27910
// @baa 0x00e27970
// @baa 0x00e279d0
// @baa 0x00e27a30
// @baa 0x00e27a90
int sub_0077ccd0(void);
extern undefined * g_020ee0c8;
struct C_00e27fc0 { undefined4 * sub_00e27fc0(void); };
// @baa 0x00e27fc0
undefined4 * C_00e27fc0::sub_00e27fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  *param_1 = (undefined4)(&g_020ee0c8);
  return param_1;
}

// @baa 0x00e27fe0
IMPLEMENT_CLASS_AT(AGamePlayerController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameController.cpp", 9);

