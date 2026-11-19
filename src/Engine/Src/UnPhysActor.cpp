// UnPhysActor.cpp (part 1 of 5): 49 functions
// Placed here by: neighbours 22, class 13, file 9, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009d8930
IMPLEMENT_CLASS_AT(AKActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 31);

// @baa 0x009d8a40
UBOOL AKActor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8a50
UBOOL AKActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d8a90
UBOOL AKActorSpawnable::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8aa0
IMPLEMENT_CLASS_AT(AKAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 33);

// @baa 0x009d8bb0
UBOOL AKAsset::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8bc0
UBOOL AKAsset::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d8c00
IMPLEMENT_CLASS_AT(ARB_Thruster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 34);

// @baa 0x009d8d10
UBOOL ARB_Thruster::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8d20
UBOOL ARB_Thruster::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d8d60
IMPLEMENT_CLASS_AT(ARB_LineImpulseActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 35);

// @baa 0x009d8e70
UBOOL ARB_LineImpulseActor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8e80
UBOOL ARB_LineImpulseActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d8ec0
IMPLEMENT_CLASS_AT(ARB_RadialImpulseActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 36);

// @baa 0x009d8fd0
UBOOL ARB_RadialImpulseActor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d8fe0
UBOOL ARB_RadialImpulseActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d9020
IMPLEMENT_CLASS_AT(ARB_RadialForceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 37);

// @baa 0x009d9130
UBOOL ARB_RadialForceActor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d9140
UBOOL ARB_RadialForceActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009d9180
IMPLEMENT_CLASS_AT(ARB_CylindricalForceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 39);

// @baa 0x009d9290
UBOOL ARB_CylindricalForceActor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x009d92a0
UBOOL ARB_CylindricalForceActor::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_009d9370(int);
};

// @baa 0x009d99e0
void AKActor::sub_009d99e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_009d9370(param_1 + 0x240);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x274) = 1;
    if ((*(byte *)(param_1 + 0x1e0) & 2) == 0) {
      *(undefined1 *)(param_1 + 0x274) = 3;
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  }
  return;
}

// @baa 0x009f01b0
// @baa 0x009f0210
// @baa 0x009f02a0
IMPLEMENT_CLASS_AT(AKActorSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 32);

// @baa 0x009f0300
// @baa 0x009f0360
// @baa 0x009f03c0
// @baa 0x009f0420
// @baa 0x009f0480
// @baa 0x009f18b0
IMPLEMENT_CLASS_AT(UKMeshProps, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 30);

// @baa 0x009f1b70
// @baa 0x009f1ba0
// @baa 0x009f1bd0
// @baa 0x009f1c00
// @baa 0x009f1c30
// @baa 0x009f1c60
// @baa 0x009f31e0
// @baa 0x009f3210
// @baa 0x009f3240
// @baa 0x009f3300
// @baa 0x009f33c0
// @baa 0x009f3480
// @baa 0x009f3540
// @baa 0x009f3600
// @baa 0x009f36c0
// @baa 0x009f3780
// @baa 0x009f3840
