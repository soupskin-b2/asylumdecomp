// Editor_0450000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Exchange<FLOAT> (UnTemplate.h), which the kit lacks. */
template< class T > inline void Exchange( T& A, T& B )
{
	const T Temp = A;
	A = B;
	B = Temp;
}

// @baa 0x0045fea0
template void Exchange<FLOAT>(FLOAT&, FLOAT&);
