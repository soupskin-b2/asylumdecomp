// Editor_06a0000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UDecalMaterial { int GetPhysicalMaterial(void); };

// @baa 0x006ae1f0
int UDecalMaterial::GetPhysicalMaterial(void) { return *(int*)((char*)this + 64); }
