// UnUIObjects.cpp (part 11 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UUIScreenObject {
    undefined4 GetNumResolvedFaces();
};

// @baa 0x00d99110
undefined4 UUIScreenObject::GetNumResolvedFaces()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"UUIScreenObject::GetNumResolvedFaces");
  return 0;
}
