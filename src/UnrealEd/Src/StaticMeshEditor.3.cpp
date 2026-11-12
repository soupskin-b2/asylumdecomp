// StaticMeshEditor.cpp (part 3 of 3): 8 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_01284da0(void);
// @baa 0x0124a550
undefined4 UUnrealEdEngine::sub_0124a550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxWindowBase
{
public:
    __declspec(dllimport) bool Close(bool Force);
};

struct C : public wxWindowBase
{
    void sub_01220ac0(INT Unused);
};

// @baa 0x01220ac0
void C::sub_01220ac0(INT)
{
    Close(false);
}

extern char g_025e87e8[];
extern void __stdcall sub_0122a3d0(char* Message, INT Value);
// @baa 0x01231120
void __stdcall sub_01231120(INT Unused)
{
    sub_0122a3d0(g_025e87e8, 6);
}

extern char g_025e8830[];
// @baa 0x01231130
void __stdcall sub_01231130(INT Unused)
{
    sub_0122a3d0(g_025e8830, 0xa);
}

extern char g_025e88a8[];
// @baa 0x01231140
void __stdcall sub_01231140(INT Unused)
{
    sub_0122a3d0(g_025e88a8, 0xa);
}

extern char g_025e8920[];
// @baa 0x01231150
void __stdcall sub_01231150(INT Unused)
{
    sub_0122a3d0(g_025e8920, 0xa);
}

extern char g_025e8998[];
// @baa 0x01231160
void __stdcall sub_01231160(INT Unused)
{
    sub_0122a3d0(g_025e8998, 0x12);
}

extern char g_025e8a70[];
// @baa 0x01231170
void __stdcall sub_01231170(INT Unused)
{
    sub_0122a3d0(g_025e8a70, 0x1a);
}
