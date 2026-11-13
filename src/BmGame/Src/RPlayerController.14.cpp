// RPlayerController.cpp: 5 functions
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

extern FName g_026e37c0;
	/* BMGAME_PictureLoaded */
/* The movie's script event (generated glue, BmGameClasses.h) */
struct URGFxMovie_ : public URGFxMovie
{
	void eventPictureLoaded()
	{
		ProcessEvent(FindFunctionChecked(g_026e37c0), NULL);
	}
};

// @baa 0x016d2760
/* Async package-load completion callback (UE3's FAsyncCompletionCallback: linker root, user data),
 * registered for a streamed picture with the movie as user data: once the picture is there,
 * remember it and tell script. */
void sub_016d2760(UObject* LinkerRoot, void* CallbackUserData)
{
	URGFxMovie* Movie = (URGFxMovie*)CallbackUserData;
	UTexture2D* Picture = Movie->GetPicture();
	if (Picture)
	{
		Movie->CurrentStreamedPicture = Picture;
		((URGFxMovie_*)Movie)->eventPictureLoaded();
	}
}

extern FName g_026e371c;
	/* BMGAME_GetAnimNames */
/* The config's script event (generated glue, BmGameClasses.h) */
struct URIdleConfig_ : public URIdleConfig
{
	void eventGetAnimNames(TArray<FName>& AnimNames); /* 0x01624940 */
};

// @baa 0x01624940
void URIdleConfig_::eventGetAnimNames(TArray<FName>& AnimNames)
{
	struct RIdleConfig_eventGetAnimNames_Parms
	{
		TArray<FName> AnimNames;
	} Parms;
	Parms.AnimNames = AnimNames;
	ProcessEvent(FindFunctionChecked(g_026e371c), &Parms);
	AnimNames = Parms.AnimNames;
}

extern UBOOL g_026e2528;
 /* a pending value is waiting */
extern INT g_026e252c;
// @baa 0x01718fc0
   /* the pending value */
/* Hands out the pending value once, if there is one. */
INT ARPlayerController::vf_588(INT& out_Value)
{
	if (g_026e2528)
	{
		g_026e2528 = FALSE;
		out_Value = g_026e252c;
		return TRUE;
	}
	return FALSE;
}
