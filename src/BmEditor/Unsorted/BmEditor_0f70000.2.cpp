// BmEditor_0f70000.cpp (part 2 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UTransactor {
    undefined4 Undo();
};

// @baa 0x00f731a0
undefined4 UTransactor::Undo()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UTransactor::Undo");
  return 0;
}
