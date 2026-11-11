// Engine_0940000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <xmmintrin.h>

// @baa 0x009432d0
__m64 sub_009432d0(__m128 Value)
{
    return _mm_cvtps_pi16(Value);
}
