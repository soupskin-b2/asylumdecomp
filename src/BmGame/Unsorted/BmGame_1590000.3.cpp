// BmGame_1590000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

struct S01593b90 {
    int m_Data[43]; // 0xac bytes
    S01593b90* sub_01593b90(int);
};

// @baa 0x01593b90
S01593b90* S01593b90::sub_01593b90(int)
{
    memset(this, 0, 0xac);
    return this;
}

struct C_015941b0
{
	void* sub_015941b0(int InArg);
};

// @baa 0x015941b0
void* C_015941b0::sub_015941b0(int InArg)
{
	memset(this, 0, 0x27c);
	return this;
}
