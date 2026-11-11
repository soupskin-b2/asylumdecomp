// Engine_0660000.cpp (part 13 of 17): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct USurface {
    float10 GetSurfaceHeight();
};

// @baa 0x006634d0
float10 USurface::GetSurfaceHeight()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"USurface::GetSurfaceHeight");
  return (float10)0;
}
