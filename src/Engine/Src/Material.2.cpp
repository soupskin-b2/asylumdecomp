// Material.cpp (part 2 of 2): 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UDecalMaterial {
    undefined4 GetRenderProxy(int);
};

int sub_006311e0(...);
extern undefined4 g_01eca5c4;
// @baa 0x006ae1b0
undefined4 UDecalMaterial::GetRenderProxy(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    sub_006311e0("!Selected || GIsEditor",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Material.cpp"
                 ,0x301,&g_01eca5c4);
  }
  return *(undefined4 *)(param_1 + 0x21c + param_2 * 4);
}
