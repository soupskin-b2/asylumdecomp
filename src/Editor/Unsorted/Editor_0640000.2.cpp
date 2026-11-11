// Editor_0640000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <xmmintrin.h>

struct C { __m128 V; C* sub_00648fb0(__m128 In); };

// @baa 0x00648fb0
C* C::sub_00648fb0(__m128 In)
{
    V = In;
    return this;
}
