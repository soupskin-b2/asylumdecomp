// RPlayerController.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_X_38_2050
{
    BYTE Pad[0x38];
    FLOAT F38;
    FLOAT F3c;
    FLOAT F40;
};

struct C_G_320_2050
{
    BYTE Pad[0x320];
    C_X_38_2050* X;
};

extern C_G_320_2050* g_026c3cdc;
// @baa 0x016d2050
FLOAT sub_016d2050()
{
    C_X_38_2050* X = g_026c3cdc->X;
    return ((X->F38 - X->F3c) / (X->F40 - X->F3c)) * 100.0f;
}

// @baa 0x016d26f0
/* A new, empty object of the class the editor asked for. */
UObject* URCharacterBioCueFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}
