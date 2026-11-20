// CurveEdPresets.cpp: 27 functions
// Placed here by: callers 6, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0111d640
IMPLEMENT_CLASS_AT(UCurveEdPresetBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 8);

// @baa 0x0111d660
IMPLEMENT_CLASS_AT(UCurveEdPreset_CosWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 9);

// @baa 0x0111d680
IMPLEMENT_CLASS_AT(UCurveEdPreset_LinearDecay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 10);

// @baa 0x0111d6a0
IMPLEMENT_CLASS_AT(UCurveEdPreset_Nothing, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 11);

// @baa 0x0111d6c0
IMPLEMENT_CLASS_AT(UCurveEdPreset_SineWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 12);

// @baa 0x0111d6e0
IMPLEMENT_CLASS_AT(UCurveEdPreset_UserSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresets.cpp", 13);

// @baa 0x0111e250
// @baa 0x0111e310
// @baa 0x0111e3d0
// @baa 0x0111e490
// @baa 0x0111e550
// @baa 0x0111e610

int sub_005c7a20(void);
extern undefined * g_021bd7c8;
struct C_011195a0 { undefined4 * sub_011195a0(void); };
// @baa 0x011195a0
undefined4 * C_011195a0::sub_011195a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd7c8);
  return param_1;
}

extern undefined * g_021bd8d8;
struct C_011195f0 { undefined4 * sub_011195f0(void); };
// @baa 0x011195f0
undefined4 * C_011195f0::sub_011195f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd8d8);
  return param_1;
}

extern undefined * g_021bd9e8;
struct C_011196a0 { undefined4 * sub_011196a0(void); };
// @baa 0x011196a0
undefined4 * C_011196a0::sub_011196a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bd9e8);
  return param_1;
}

extern undefined * g_021bdaf8;
struct C_01119750 { undefined4 * sub_01119750(void); };
// @baa 0x01119750
undefined4 * C_01119750::sub_01119750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdaf8);
  return param_1;
}

extern undefined * g_021bdc08;
struct C_01119800 { undefined4 * sub_01119800(void); };
// @baa 0x01119800
undefined4 * C_01119800::sub_01119800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdc08);
  return param_1;
}

extern undefined * g_021bdd18;
struct C_011198b0 { undefined4 * sub_011198b0(void); };
// @baa 0x011198b0
undefined4 * C_011198b0::sub_011198b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021bdd18);
  return param_1;
}

// @baa 0x01126470

// @baa 0x01126580
UBOOL UCurveEdPreset_CosWave::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011265c0

// @baa 0x011266d0
UBOOL UCurveEdPreset_LinearDecay::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01126820
UBOOL UCurveEdPreset_Nothing::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01126860

// @baa 0x01126970
UBOOL UCurveEdPreset_SineWave::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x011269b0

// @baa 0x01126ac0
UBOOL UCurveEdPreset_UserSet::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
