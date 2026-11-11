// Editor_0f70000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UTransactor {
    undefined4 IsActive();
};

// @baa 0x00f73140
undefined4 UTransactor::IsActive()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UTransactor::IsActive");
  return 0;
}
