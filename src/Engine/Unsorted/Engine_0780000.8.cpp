// Engine_0780000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include <string.h>

struct Sub_00786c50_Type {
	DOUBLE Value;
	BYTE Data[0x7C];
	Sub_00786c50_Type* sub_00786c50();
};

extern BYTE g_025d87c8[];
// @baa 0x00786c50
Sub_00786c50_Type* Sub_00786c50_Type::sub_00786c50()
{
	Sub_00786c50_Type* Self = this;
	Self->Value = 0.0;
	memcpy(Self->Data, g_025d87c8, sizeof(Self->Data));
	return Self;
}
