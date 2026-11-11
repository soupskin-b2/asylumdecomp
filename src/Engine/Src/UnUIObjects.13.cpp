// UnUIObjects.cpp (part 13 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UConsoleEntry { int GetOwner(void); };

// @baa 0x00d992d0
int UConsoleEntry::GetOwner(void) { return *(int*)((char*)this + 312); }
