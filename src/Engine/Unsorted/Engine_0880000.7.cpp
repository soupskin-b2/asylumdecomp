// Engine_0880000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

class FNavigationOctree
{
public:
	void RemoveObject(FNavigationOctreeObject* Object);
};

/* UWorld::NavigationOctree (0x11c) is not declared: Classes.h covers it with _native2. */
struct UWorld_ : public UWorld
{
	FNavigationOctree*& NavigationOctree() { return *(FNavigationOctree**)((BYTE*)this + 0x11c); }
};

// @baa 0x00880dc0
FNavigationOctreeObject::~FNavigationOctreeObject()
{
	if (OctreeNode.Dummy != NULL && GWorld != NULL && ((UWorld_*)GWorld)->NavigationOctree() != NULL)
	{
		((UWorld_*)GWorld)->NavigationOctree()->RemoveObject(this);
	}
}
