// Engine_0dc0000.cpp (part 5 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UUIPrefabScene {
    void RequestSceneInputMaskUpdate();
};

// @baa 0x00dc2e10
void UUIPrefabScene::RequestSceneInputMaskUpdate(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x40;
  return;
}
