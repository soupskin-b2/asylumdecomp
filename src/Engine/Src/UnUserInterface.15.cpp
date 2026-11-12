// UnUserInterface.cpp (part 15 of 15): 17 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Script.h"

// @baa 0x00de1650
bool UUISceneClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de3fc0
IMPLEMENT_CLASS_AT(UGameUISceneClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 25);

// @baa 0x00de40d0
bool UGameUISceneClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de1450
void UUISceneClient::RenderScenes(INT)
PURE_VIRTUAL(UUISceneClient::RenderScenes,)

struct C
{
    BYTE pad_00[0x2c];
    BYTE Values[1];

    INT sub_00ddec90(INT Index);
};

// @baa 0x00ddec90
INT C::sub_00ddec90(INT Index)
{
    return Values[Index];
}

struct C_00ddeca0
{
    BYTE pad_00[0x24];
    BYTE Values[1];

    INT sub_00ddeca0(INT Index);
};

// @baa 0x00ddeca0
INT C_00ddeca0::sub_00ddeca0(INT Index)
{
    return Values[Index];
}

extern INT g_026c5e68;

// @baa 0x00dde460
INT UGameUISceneClient::vf_1b0(INT a0, INT a1, INT a2)
{
    ++g_026c5e68;
    return 0;
}

// @baa 0x00de14b0
void UUISceneClient::UpdateActivePrimitives( FCanvas* Canvas )
PURE_VIRTUAL(UUISceneClient::UpdateActivePrimitives,)

// UnUserInterface.cpp
struct M_00de0940 {
    BYTE Padding[0x14];

    struct FSub_00de0770 {
        void sub_00de0770(INT X, INT A, INT B);
    } FSub;

    void sub_00de0940(INT A, INT B)
    {
        FSub.sub_00de0770(*(INT*)this, A, B);
    }
};

static M_00de0940 g_M_00de0940;
// @baa 0x00de0940
INT sub_00de0941(M_00de0940* T, INT A, INT B)
{
    T->sub_00de0940(A, B);
    return 0;
}

// @baa 0x00de13f0
INT UUISceneClient::InputKey( INT ControllerId, FName Key, EInputEvent Event, FLOAT AmountDepressed, UBOOL bGamepad )
PURE_VIRTUAL(UUISceneClient::InputKey,return FALSE;)

// @baa 0x00de1410
INT UUISceneClient::InputAxis( INT ControllerId, FName Key, FLOAT Delta, FLOAT DeltaTime, UBOOL bGamepad )
PURE_VIRTUAL(UUISceneClient::InputAxis,return FALSE;)

// @baa 0x00de1430
INT UUISceneClient::InputChar( INT ControllerId, TCHAR Character )
PURE_VIRTUAL(UUISceneClient::InputChar,return FALSE;)

// @baa 0x00de14d0
INT UUISceneClient::IsUIActive( DWORD Flags )
PURE_VIRTUAL(UUISceneClient::IsUIActive,return FALSE;)

// @baa 0x00de1390
INT UUISceneClient::ChangeActiveSkin( UUISkin* NewActiveSkin )
PURE_VIRTUAL(UUISceneClient::ChangeActiveSkin,return FALSE;)

// @baa 0x00de1470
void UUISceneClient::RequestPrimitiveReinitialization( UUIScene* Scene )
PURE_VIRTUAL(UUISceneClient::RequestPrimitiveReinitialization,)

// @baa 0x00de1490
void UUISceneClient::InitializePrimitives( FCanvas* Canvas )
PURE_VIRTUAL(UUISceneClient::InitializePrimitives,)

struct Inner
{
    char pad_00[0xdc];
    DWORD Flags;
};

struct C_00dde510
{
    char pad_00[0x1c];
    Inner* Object;

    void sub_00dde510(INT Unused);
};

// @baa 0x00dde510
void C_00dde510::sub_00dde510(INT)
{
    Object->Flags &= ~0x10;
}
