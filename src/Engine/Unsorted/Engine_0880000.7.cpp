// Engine_0880000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

class FNavigationOctree
{
public:
	void RemoveObject(FNavigationOctreeObject* Object);
};

// @baa 0x00880dc0
FNavigationOctreeObject::~FNavigationOctreeObject()
{
	if (OctreeNode.Dummy != NULL && GWorld != NULL && GWorld->NavigationOctree != NULL)
	{
		GWorld->NavigationOctree->RemoveObject(this);
	}
}

// @baa 0x0088d8b0
void sub_0088d8b0()
{
    GEngine->Client->SaveConfig();
}
