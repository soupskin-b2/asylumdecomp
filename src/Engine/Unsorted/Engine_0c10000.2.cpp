// Engine_0c10000.cpp (part 2 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UPendingLevel {
    undefined4 GetDriver();
};

// @baa 0x00c14930
undefined4 UPendingLevel::GetDriver()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UPendingLevel::GetDriver");
  return 0;
}
