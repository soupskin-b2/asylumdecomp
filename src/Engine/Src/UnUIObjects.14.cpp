// UnUIObjects.cpp (part 14 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UConsoleEntry { int GetScene(void); };

// @baa 0x00d992e0
int UConsoleEntry::GetScene(void) { return *(int*)((char*)this + 316); }
