// UnUserInterface.cpp (part 15 of 15): 16 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

extern int g_026667a8;
int sub_00630f20(int Log, const wchar_t* Message, const wchar_t* Func);
// @baa 0x00de1450
// Pure virtual thunk: the base class provides the message, the derived class must override.
void UUISceneClient::RenderScenes(INT)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UUISceneClient::RenderScenes");
}

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
INT UGameUISceneClient::vf_1b0(INT, INT, INT)
{
    ++g_026c5e68;
    return 0;
}

int sub_00630f20(...);
// @baa 0x00de14b0
void UUISceneClient::UpdateActivePrimitives(INT)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UUISceneClient::UpdateActivePrimitives");
}

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

class FOutputDevice
{
public:
	void Logf( const TCHAR* Fmt, ... );
};

extern FOutputDevice* GError;
#define appErrorf GError->Logf
#define PURE_VIRTUAL(func,extra) { appErrorf(TEXT("Pure virtual not implemented (%s)"), TEXT(#func)); extra }
// @baa 0x00de13f0
INT UUISceneClient::InputKey( INT ControllerId, INT KeyIndex, INT KeyNumber, INT Event, INT AmountDepressed, INT bGamepad )
PURE_VIRTUAL(UUISceneClient::InputKey,return FALSE;)

// @baa 0x00de1410
INT UUISceneClient::InputAxis( INT ControllerId, INT KeyIndex, INT KeyNumber, INT Delta, INT DeltaTime, INT bGamepad )
PURE_VIRTUAL(UUISceneClient::InputAxis,return FALSE;)

// @baa 0x00de1430
INT UUISceneClient::InputChar( INT ControllerId, INT Character )
PURE_VIRTUAL(UUISceneClient::InputChar,return FALSE;)

// @baa 0x00de14d0
INT UUISceneClient::IsUIActive( INT Flags )
PURE_VIRTUAL(UUISceneClient::IsUIActive,return FALSE;)

// @baa 0x00de1390
INT UUISceneClient::ChangeActiveSkin( INT NewActiveSkin )
PURE_VIRTUAL(UUISceneClient::ChangeActiveSkin,return FALSE;)

// @baa 0x00de1470
void UUISceneClient::RequestPrimitiveReinitialization( UUIScene* Scene )
PURE_VIRTUAL(UUISceneClient::RequestPrimitiveReinitialization,)

// @baa 0x00de1490
void UUISceneClient::InitializePrimitives( INT Canvas )
PURE_VIRTUAL(UUISceneClient::InitializePrimitives,)
