// RRopeTest.cpp: 9 functions
// Placed here by: class 6, callers 1, neighbours 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0163e0e0(void);
int sub_0165ac40(...);
extern undefined4 g_026e1c1c;
// @baa 0x0165aeb0
int sub_0165aeb0(void)
{
  if (g_026e1c1c == 0) {
    g_026e1c1c = sub_0165ac40(L"BmGame");
    sub_0163e0e0();
  }
  return g_026e1c1c;
}

// @baa 0x01669e20
IMPLEMENT_CLASS_AT(ARRopeTest, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeTest.cpp", 13);

// @baa 0x01669f30
int ARRopeTest::vf_000(void) { return 1; }

// @baa 0x01669f40
bool ARRopeTest::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01682e70
// @baa 0x01682ed0
// @baa 0x01683840
// @baa 0x01683870
IMPLEMENT_CLASS_AT(ARShimmyEdgeMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RShimmyEdgeMarker.cpp", 7);

// @baa 0x016838a0
