// SkyLightComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" void* sub_0053df40(DWORD Count, DWORD Alignment);
 /* out-of-line appMalloc */
/* The runtime scene-info block a sky light allocates (0x250 bytes). Its constructor is
 * sub_00739d30: it stores the owning component, sets the scene-proxy vtable, and writes
 * the intensity-scaled light data near the end of the block. */
struct FSkyLightSceneInfoData {
    BYTE Data[0x24C]; /* 0x04 .. 0x250: the per-light payload */
};

struct FSkyLightSceneInfo {
    USkyLightComponent* LightComponent; /* 0x00 */
    FSkyLightSceneInfoData Data;        /* 0x04 */
    FSkyLightSceneInfo(USkyLightComponent* Component); /* sub_00739d30 */
};

inline void* operator new(size_t Size) { return sub_0053df40(Size, 8); }

// @baa 0x0073a1f0
UINT USkyLightComponent::CreateSceneInfo() {
    return (UINT)new FSkyLightSceneInfo(this);
}
