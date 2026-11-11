// Engine_0cb0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UClient::GetVirtualKey (0x12c in the vtable) is a pure virtual: the platform client classes
 * translate an input key code into the name it is bound to. */
struct UClient_ : public UClient
{
	void GetVirtualKey(FName& KeyName, INT KeyCode);
};

// @baa 0x00cb5b60
void UClient_::GetVirtualKey(FName& KeyName, INT KeyCode) PURE_VIRTUAL(UClient::GetVirtualKey, KeyName.Index = 0; KeyName.Number = 0;);
