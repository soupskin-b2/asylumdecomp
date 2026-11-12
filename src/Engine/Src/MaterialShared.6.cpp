// MaterialShared.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006d9230
int sub_006d9230(void) { return 272; }

// 0x006e3e30: CodeChunks[Index] accessor (see MaterialShared.cpp)
// 0x00703760: returns that chunk's data, or a fixed value for Index == -1
struct UMaterialInterface_ : public UMaterialInterface {
  void* sub_00703760(int Index); /* 0x00703760 */
  void* sub_006e3e30(int Index); /* 0x006e3e30 */
};

// @baa 0x00703760
void* UMaterialInterface_::sub_00703760(int Index)
{
  if (Index != -1)
    return sub_006e3e30(Index);
  return (void*)0x40;
}

/* Kit gap: FRenderCommandFence::BeginFence (0x00719c60) isn't declared. */
struct FRenderCommandFence_ : public FRenderCommandFence_Mirror
{
	void BeginFence();
};

// @baa 0x006d9260
void UMaterialInterface::BeginDestroy()
{
	// Make sure the rendering thread is done with any references to the parent before finishing destruction.
	((FRenderCommandFence_&)ParentRefFence).BeginFence();
	Super::BeginDestroy();
}

/* Kit gap: FRenderCommandFence::GetNumPendingFences (0x0071f7e0) isn't declared. */
struct FRenderCommandFence__006d9250 : public FRenderCommandFence_Mirror
{
	UINT GetNumPendingFences() const;
};

// @baa 0x006d9250
UBOOL UMaterialInterface::IsReadyForFinishDestroy()
{
	return ((const FRenderCommandFence__006d9250&)ParentRefFence).GetNumPendingFences() == 0;
}
