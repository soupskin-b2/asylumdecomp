// UnNetDrv.cpp (part 2 of 3): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UNetDriver {
    void LowLevelDestroy();
};

// @baa 0x00c1a570
void UNetDriver::LowLevelDestroy()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelDestroy");
  return;
}
