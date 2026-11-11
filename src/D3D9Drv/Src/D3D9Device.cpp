// D3D9Device.cpp: 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_0069c850(void); };

// @baa 0x0069c850
C* C::sub_0069c850(void) { *(int*)((char*)this + 0) = 0; return this; }

extern char g_026b2820[];
// @baa 0x00715930
int sub_00715930(void) { return (int)g_026b2820; }
