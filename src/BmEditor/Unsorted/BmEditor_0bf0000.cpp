// BmEditor_0bf0000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    FString sub_00bfe760();
};

// @baa 0x00bfe760
FString C::sub_00bfe760()
{
    return TEXT("MemoryUsed: ,PhysicalTotal, PhysicalMemUsed, VirtualMemUsed, GPUTotal, GPUMemUsed, AudioMemUsed, TextureMemUsed, NovodexMemUsed, VertexLightingMemUsed, StaticMeshVertexMemUsed, StaticMeshIndexMemUsed, SkeletalMeshVertexMemUsed, SkeletalMeshIndexMemUsed, VertexShaderMemUsed, PixelShaderMemUsed, NumAllocations, AllocationOverhead, AllignmentWaste");
}
