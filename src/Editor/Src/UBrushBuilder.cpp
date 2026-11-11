// UBrushBuilder.cpp: 11 functions
// Placed here by: neighbours 7, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00ee12d0
IMPLEMENT_CLASS_AT(UBrushBuilder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UBrushBuilder.cpp", 155);

// @baa 0x00ee12f0
IMPLEMENT_CLASS_AT(UCubeBuilder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UBrushBuilder.cpp", 157);

int sub_00eddfd0(...);
int sub_00ee0610(void);
extern undefined4 g_026ccb88;
// @baa 0x00ee1310
int sub_00ee1310(void)
{
  if (g_026ccb88 == 0) {
    g_026ccb88 = sub_00eddfd0(L"Editor");
    sub_00ee0610();
  }
  return g_026ccb88;
}

void sub_006cd050();
// @baa 0x00ee1340
void sub_00ee1340(void) { sub_006cd050(); }

struct M_00ee1350 { void sub_006cd050(); };

struct C { char pad[32]; M_00ee1350 m; void sub_00ee1350(); };

// @baa 0x00ee1350
void C::sub_00ee1350() { m.sub_006cd050(); }

void sub_00ee0a70();
// @baa 0x00ee1360
void sub_00ee1360(void) { sub_00ee0a70(); }

void sub_00ee0ae0();
// @baa 0x00ee1370
void sub_00ee1370(void) { sub_00ee0ae0(); }

void sub_00ee0b50();
// @baa 0x00ee1380
void sub_00ee1380(void) { sub_00ee0b50(); }

void sub_00ee0bc0();
// @baa 0x00ee1390
void sub_00ee1390(void) { sub_00ee0bc0(); }

// @baa 0x00ee13a0
// @baa 0x00ee1460
