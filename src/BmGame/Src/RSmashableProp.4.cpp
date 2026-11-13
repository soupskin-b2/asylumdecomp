// RSmashableProp.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARSmashableProp_ : public ARSmashableProp
{
	INT sub_01675050(FName DecalName); /* 0x01675050: the index of the named decal in PropData's decal list, or INDEX_NONE */
};

// @baa 0x016751c0
/* The decal material instance for the named decal (NULL without prop data or when the name isn't found). */
void* ARSmashableProp::sub_016751c0(FName DecalName)
{
	UMaterialInstance* DecalMaterial = NULL;
	if (PropData)
	{
		INT DecalIndex = ((ARSmashableProp_*)this)->sub_01675050(DecalName);
		if (DecalIndex != INDEX_NONE)
		{
			DecalMaterial = DecalMaterialInstances(DecalIndex);
		}
	}
	return DecalMaterial;
}
