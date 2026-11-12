// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// Engine_0660000.cpp (part 15 of 17): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UMaterialInterface {
    undefined4 GetPhysicalMaterial();
};

// @baa 0x006635f0
undefined4 UMaterialInterface::GetPhysicalMaterial()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"UMaterialInterface::GetPhysicalMaterial");
  return 0;
}
