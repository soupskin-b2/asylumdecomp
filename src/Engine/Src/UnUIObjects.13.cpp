// UnUIObjects.cpp (part 13 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UConsoleEntry { int GetOwner(void); };

// @baa 0x00d992d0
int UConsoleEntry::GetOwner(void) { return *(int*)((char*)this + 312); }

// Engine_0dc0000.cpp (part 3 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct UUIPrefabScene { UUIPrefabScene* GetScene(void); };

// @baa 0x00dc2cc0
UUIPrefabScene* UUIPrefabScene::GetScene(void) { return this; }
