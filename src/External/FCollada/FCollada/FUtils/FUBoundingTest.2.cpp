// FUBoundingTest.cpp (part 2 of 2): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_018793e0(void); };

// @baa 0x018793e0
C* C::sub_018793e0(void) { return this; }

struct C_018793f0 { char* sub_018793f0(void); };

// @baa 0x018793f0
char* C_018793f0::sub_018793f0(void) { return (char*)this + 16; }

// @baa 0x01879400
void sub_01879400(void) {  }
