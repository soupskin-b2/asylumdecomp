// GFxUIEditor_14f0000.cpp: 24 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x014f9d70
int UGFxEditor::vf_000(void) { return 1; }

// @baa 0x014f9d80
bool UGFxEditor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005c7a20(void);
extern undefined * g_022cc240;
// @baa 0x014f9dc0
undefined4 * UObject::sub_014f9dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022cc240);
  return param_1;
}

// @baa 0x014f9de0
IMPLEMENT_CLASS_AT(UGFxEditor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIEditor.cpp", 73);

// @baa 0x014f9e40
struct C { char* sub_014f9fc0(void); };

// @baa 0x014f9fc0
char* C::sub_014f9fc0(void) { return (char*)this + 416; }

struct C_014f9fd0 { char* sub_014f9fd0(void); };

// @baa 0x014f9fd0
char* C_014f9fd0::sub_014f9fd0(void) { return (char*)this + 428; }

struct C_014f9fe0 { char* sub_014f9fe0(void); };

// @baa 0x014f9fe0
char* C_014f9fe0::sub_014f9fe0(void) { return (char*)this + 440; }

struct C_014f9ff0 { int sub_014f9ff0(void); };

// @baa 0x014f9ff0
int C_014f9ff0::sub_014f9ff0(void) { return *(int*)((char*)this + 452); }

extern char g_025e98a8[];
// @baa 0x014fa000
int sub_014fa000(void) { return (int)g_025e98a8; }

extern char g_026deff4[];
// @baa 0x014fa010
int sub_014fa010(void) { return (int)g_026deff4; }

// @baa 0x014fa020
IMPLEMENT_CLASS_AT(UGenericBrowserType_GFxMovieInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUIEditor\\Src\\GFxUIGenericBrowserTypes.cpp", 150);

// @baa 0x014fa130
int UGenericBrowserType_GFxMovieInfo::vf_000(void) { return 1; }

// @baa 0x014fa140
bool UGenericBrowserType_GFxMovieInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

class wxMenuBase;
class wxMenuBase {
    public:
    public: __declspec(dllimport) void Enable(int,bool);
    friend struct C_014fa180;
};

struct C_014fa180 {
    void sub_014fa180(int);
    int sub_0115ae90(int);
};

// @baa 0x014fa180
void C_014fa180::sub_014fa180(int param_2)
{
    wxMenuBase * param_1 = (wxMenuBase *)this;
  ((C_014fa180 *)(this))->sub_0115ae90(param_2);
  ((wxMenuBase *)(param_1))->wxMenuBase::Enable(*(int *)(*(int *)(param_1 + 0x8c) + 8), param_2 == 0);
  return;
}

// @baa 0x014fa1b0
int UGenericBrowserType_GFxMovieInfo::vf_110(void) { return 0; }

// @baa 0x014fa1c0
int sub_014fa1c0(void) { return 0; }

// @baa 0x014fa1d0
void UGenericBrowserType_GFxMovieInfo::vf_12c(void) {  }

struct C_014fa3c0 {
    void sub_014fa3c0();
};

int sub_01808e20(...);
// @baa 0x014fa3c0
void C_014fa3c0::sub_014fa3c0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_01808e20(param_1 + 6);
  }
  return;
}

struct C_014fa450 {
    undefined1 sub_014fa450();
};

int sub_014fa3d0(void);
// @baa 0x014fa450
undefined1 C_014fa450::sub_014fa450(void)
{
    int param_1 = (int)this;

  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    sub_014fa3d0();
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return uVar1;
}

struct C_014fc320 {
    undefined4 sub_014fc320(byte);
};

int sub_0053dfa0(...);
int sub_014fbd60(void);
// @baa 0x014fc320
undefined4 C_014fc320::sub_014fc320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014fbd60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C_014fcc10 {
    int sub_014fcc10();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014fcc10
int C_014fcc10::sub_014fcc10()
{
    return g_026a1ca4(Index);
}

struct C_014fcc70 {
    int sub_014fcc70();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014fcc70
int C_014fcc70::sub_014fcc70()
{
    return g_026a1ca4(Index);
}

extern undefined * g_022cc898;
// @baa 0x014fccd0
undefined4 * UObject::sub_014fccd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022cc898);
  return param_1;
}
