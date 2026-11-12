// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_00f1fc40 { int sub_00f1fc40(void); };

// @baa 0x00f1fc40
int C_00f1fc40::sub_00f1fc40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }
