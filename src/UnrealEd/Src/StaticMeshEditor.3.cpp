// StaticMeshEditor.cpp (part 3 of 3): 13 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

int sub_00c38ac0(void);
// @baa 0x01221f20
undefined4 UObject::sub_01221f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01221d60
IMPLEMENT_CLASS_AT(UStaticMeshEditorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp", 22);

// @baa 0x01221e70
int UStaticMeshEditorComponent::vf_000(void) { return 1; }

// @baa 0x01221e80
bool UStaticMeshEditorComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d40b0;
extern undefined4 g_026d40b4;
extern undefined4 g_026d40b8;
// @baa 0x01221ec0
undefined * sub_01221ec0(void)
{
  if ((g_026d40b8 & 1) == 0) {
    g_026d40b8 = g_026d40b8 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d40b0 = (undefined4)(&g_026af518);
    g_026d40b4 = (undefined4)(L"HSMEChunkProxy");
  }
  return (undefined *)(&g_026d40b0);
}
