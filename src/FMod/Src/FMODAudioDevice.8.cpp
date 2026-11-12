// FMODAudioDevice.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Implement.h"

/* FMOD's memory callbacks (FMOD_MEMORY_ALLOCCALLBACK / FMOD_MEMORY_REALLOCCALLBACK, F_CALLBACK =
 * __stdcall), handed to FMOD::Memory_Initialize in UFMODAudioDevice::Init (00e7b500). The FMOD
 * headers aren't in the kit; FMOD_MEMORY_TYPE is an unsigned int.
 * The game calls appMalloc out of line here; the kit's appMalloc is always inline (no
 * BAA_OUTLINE_ALLOC form), so its out-of-line copy is named directly (sub_0053df40, Implement.h). */
typedef unsigned int FMOD_MEMORY_TYPE;

void* __stdcall FMODMemoryAlloc(unsigned int Size, FMOD_MEMORY_TYPE Type)
{
    return sub_0053df40(Size, DEFAULT_ALIGNMENT); /* appMalloc(Size) */
}

// @baa 0x00e70ba0
void* __stdcall FMODMemoryRealloc(void* Ptr, unsigned int Size, FMOD_MEMORY_TYPE Type)
{
    return appRealloc(Ptr, Size);
}

// @baa 0x00e70bd0
