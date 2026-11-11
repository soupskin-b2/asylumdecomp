// TerrainEditor.cpp (part 2 of 4): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x0124d5c0
undefined4 UObject::sub_0124d5c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_0220f938[];
struct C : public wxMenu
{
    void sub_0124b750();
};

// @baa 0x0124b750
void C::sub_0124b750()
{
    *(void**)this = g_0220f938;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

int sub_00630f20(...);
extern INT g_026667a8;
// @baa 0x012508c0
void UThumbnailRenderer::Draw(INT, INT, INT, INT, INT, INT, INT, INT, INT, INT, INT) {
  sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UThumbnailRenderer::Draw");
}
