// LightComponent.cpp (part 2 of 5): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct ULightComponent {
    undefined4 CreateSceneInfo();
};

// @baa 0x006974d0
undefined4 ULightComponent::CreateSceneInfo()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"ULightComponent::CreateSceneInfo"
              );
  return 0;
}
