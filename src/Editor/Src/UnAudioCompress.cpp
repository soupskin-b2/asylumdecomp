// UnAudioCompress.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00ec6b00();
};

int sub_006311e0(...);
extern undefined4 g_02130210;
// @baa 0x00ec6b00
undefined4 C::sub_00ec6b00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) == 0) {
    sub_006311e0("CompressedDataStore.Num()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnAudioCompress.cpp"
                 ,0x261,&g_02130210);
  }
  return *(undefined4 *)(param_1 + 8);
}
