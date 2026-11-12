// UnAudioNodes.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap: FUntypedBulkData::RemoveBulkData (0x0056bfe0) isn't declared. */
struct FUntypedBulkData_ : public FUntypedBulkData_Mirror
{
	void RemoveBulkData();
};

// @baa 0x00cc0f60
/* Cooking drops the uncompressed wave and its channel layout. */
void USoundNodeWave::StripData(UE3::EPlatformType TargetPlatform)
{
	((FUntypedBulkData_&)RawData).RemoveBulkData();
	ChannelOffsets.Empty();
	ChannelSizes.Empty();
}
