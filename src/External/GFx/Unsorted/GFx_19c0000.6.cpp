// GFx_19c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S019CA970
{
	int  Data0;
	int  Data4;
	int  Data8;
	int  DataC;
	int  Value;

	__declspec(noinline) S019CA970* sub_019ca970(int NewValue)
	{
		Data0 = 0;
		Data4 = 0;
		Data8 = 0;
		DataC = 0;
		Value = NewValue;
		return this;
	}
};

// @baa 0x019ca970
void s019c()
{
	S019CA970 s;
	s.sub_019ca970(3);
}
