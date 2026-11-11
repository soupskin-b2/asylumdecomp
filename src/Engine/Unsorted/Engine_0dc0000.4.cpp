// Engine_0dc0000.cpp (part 4 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UUIPrefabScene {
    void RequestFormattingUpdate();
};

// @baa 0x00dc2e00
void UUIPrefabScene::RequestFormattingUpdate(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x20;
  return;
}
