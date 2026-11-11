// UnMem.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_005c17f0();
};

int sub_006311e0(...);
extern undefined4 g_01e8cdd8;
// @baa 0x005c17f0
void C::sub_005c17f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    sub_006311e0("TopChunk==NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnMem.cpp"
                 ,0x2e,&g_01e8cdd8);
  }
  return;
}
