// Texture.cpp (part 2 of 3): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UTexture {
    undefined4 GetMaterialType();
};

// @baa 0x0071efa0
undefined4 UTexture::GetMaterialType()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UTexture::GetMaterialType");
  return 0x30;
}
