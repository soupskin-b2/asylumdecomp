// GFxUIMovie.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FGFxHandler { void sub_00e689a0(INT Command, INT Argument); };

extern FGFxHandler* g_026caed4;
// @baa 0x00e68a60
INT UGFxInteraction::vf_120(INT Command, INT Argument)
{
    if (g_026caed4)
        g_026caed4->sub_00e689a0(Command, Argument);
    return 0;
}

struct C
{
    INT Value;

    C* sub_00e42bd0(INT* Source);
};

// @baa 0x00e42bd0
C* C::sub_00e42bd0(INT* Source)
{
    *(INT*)this = *Source;
    return this;
}

struct C_00e42aa0
{
    char pad_00[0x34];
    float Value;

    void sub_00e42aa0(float In);
};

// @baa 0x00e42aa0
void C_00e42aa0::sub_00e42aa0(float In)
{
    Value = In;
}

struct C_00e42eb0
{
    INT Value_00;
    BYTE Flag_04;

    C_00e42eb0* sub_00e42eb0(INT Value);
};

// @baa 0x00e42eb0
C_00e42eb0* C_00e42eb0::sub_00e42eb0(INT Value)
{
    Flag_04 = 0;
    Value_00 = Value;
    return this;
}

/* UObject::GetOutermost (005d7350) and the static UObject::GetTransientPackage (005c1d70);
 * Classes.h declares neither on UObject. */
struct UObject_ : public UObject
{
    UObject* GetOutermost();            /* 0x005d7350 */
    static UObject* GetTransientPackage(); /* 0x005c1d70 */
};

// @baa 0x00e44f80
void UGFxMovie::Serialize(FArchive& Ar)
{
    /* don't save a command handler that lives in the transient package */
    if (Ar.IsSaving() && FSCmdHandler && ((UObject_*)FSCmdHandler)->GetOutermost() == UObject_::GetTransientPackage())
    {
        FSCmdHandler = NULL;
    }
    Super::Serialize(Ar);
}

extern FName g_026caf98;
 /* GFXUI_Start (registered from L"Start" in 00e427c0) */
struct UGFxMovie_ : public UGFxMovie
{
    UBOOL eventStart(UBOOL StartPaused);
};

// @baa 0x00e42060
/* The Start script event's generated glue (GFxUIClasses.h). */
UBOOL UGFxMovie_::eventStart(UBOOL StartPaused)
{
    struct GFxMovie_eventStart_Parms
    {
        UBOOL StartPaused;
        UBOOL ReturnValue;
    };
    GFxMovie_eventStart_Parms Parms;
    Parms.StartPaused = StartPaused ? TRUE : FALSE;
    Parms.ReturnValue = FALSE;
    ProcessEvent(FindFunctionChecked(g_026caf98), &Parms);
    return Parms.ReturnValue;
}
