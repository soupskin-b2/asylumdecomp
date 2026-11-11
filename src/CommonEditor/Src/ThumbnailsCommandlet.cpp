// ThumbnailsCommandlet.cpp: 12 functions
// Placed here by: class 7, neighbours 3, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_0173a490();
};

// @baa 0x0173a490
void C::sub_0173a490(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x0173dca0
IMPLEMENT_CLASS_AT(UThumbnailsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\ThumbnailsCommandlet.cpp", 6);

// @baa 0x0173ddb0
int UThumbnailsCommandlet::vf_000(void) { return 1; }

// @baa 0x0173ddc0
bool UThumbnailsCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_023d4d90;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_0173de00(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x0173de00
FDecalValue* FDecalValue::sub_0173de00(int* Src)
{
    Value = (int)&g_023d4d90;
    Unk04 = *Src;
    return this;
}

extern char g_023d22f4[];
// @baa 0x0173de20
int sub_0173de20(void) { return (int)g_023d22f4; }

extern int g_023d4d9c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_0173de30
{
    FDecalValue_0173de30* sub_0173de30(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x0173de30
FDecalValue_0173de30* FDecalValue_0173de30::sub_0173de30(int* Src)
{
    Value = (int)&g_023d4d9c;
    Unk04 = *Src;
    return this;
}

// @baa 0x0174a9c0
UThumbnailsCommandlet::UThumbnailsCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x0174aa20
int sub_0174aa20(void);
int sub_005c7a70(...);
// @baa 0x0174aa80
undefined4 UThumbnailsCommandlet::sub_0174aa80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0174aa20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x0174c980
// @baa 0x0174df60
