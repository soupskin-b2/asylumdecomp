// Engine_0c10000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UPendingLevel {
    undefined4 TrySkipFile();
};

// @baa 0x00c14970
undefined4 UPendingLevel::TrySkipFile()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UPendingLevel::TrySkipFile");
  return 0;
}
