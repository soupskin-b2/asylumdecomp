// RawIndexBuffer.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_007156b0(undefined4, undefined4, undefined4);
};

int sub_006311e0(...);
extern undefined4 g_01ede5ec;
// @baa 0x007156b0
void C::sub_007156b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x24) == 0) {
    sub_006311e0("bIsEmpty",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\RawIndexBuffer.cpp"
                 ,0xf3,&g_01ede5ec);
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}
