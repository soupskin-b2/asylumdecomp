// UnUIObjects.cpp (part 14 of 17): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UConsoleEntry { int GetScene(void); };

// @baa 0x00d992e0
int UConsoleEntry::GetScene(void) { return *(int*)((char*)this + 316); }

// Engine_0dc0000.cpp (part 2 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct UUIPrefabScene {
    int GetOwner();
};

// @baa 0x00dc2cb0
int UUIPrefabScene::GetOwner()
{ return 0; }
