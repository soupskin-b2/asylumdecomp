// AnalyzeReferencedContent.cpp (part 2 of 3): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_0218554c[];
struct C { void sub_01015ae0(void); };

// @baa 0x01015ae0
void C::sub_01015ae0(void) { *(int*)((char*)this + 0) = (int)g_0218554c; }

struct FVtObject_01014920
{
	const void* ClassVTable; /* 0x0 */
	void* Owner; /* 0x4 */

	FVtObject_01014920* Init();
};

// @baa 0x01014920
FVtObject_01014920* FVtObject_01014920::Init()
{
	ClassVTable = &g_0218554c;
	Owner = NULL;
	return this;
}
