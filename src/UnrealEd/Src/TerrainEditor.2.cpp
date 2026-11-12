// TerrainEditor.cpp (part 2 of 4): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

// The object referenced by the field at 0x1b4; the call goes through its
// 7th virtual slot (vtable offset 0x18).
struct C_0124c040_Target {
    virtual void f0() {}
    virtual void f1() {}
    virtual void f2() {}
    virtual void f3() {}
    virtual void f4() {}
    virtual void f5() {}
    virtual void sub_vf4(int arg);
};

struct C_0124c040 {
    char pad[0x1b4];
    C_0124c040_Target* sub_target;
    void sub_0124c040();
    static void KeepAlive() { C_0124c040 obj; obj.sub_0124c040(); }
};

void C_0124c040_Target::sub_vf4(int arg) {}

// @baa 0x0124c040
void C_0124c040::sub_0124c040()
{
    if (sub_target) {
        sub_target->sub_vf4(0);
    }
}
