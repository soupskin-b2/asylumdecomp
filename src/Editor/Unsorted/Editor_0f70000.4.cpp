// Editor_0f70000.cpp (part 4 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f73600
IMPLEMENT_CLASS_AT(UTransactor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp", 631);

// @baa 0x00f73710
int UTransactor::vf_000(void) { return 1; }

// @baa 0x00f73720
bool UTransactor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_026667a8;
extern "C" int sub_00630f20(int IsCritical, const wchar_t* Msg, const wchar_t* FuncName);
// @baa 0x00f73100
void UTransactor::Cancel(INT)
{
	// Pure virtual not implemented: concrete transactors override this.
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UTransactor::Cancel");
}
