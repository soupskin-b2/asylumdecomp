// TextureRenderTargetCube.cpp (part 2 of 3): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UTextureRenderTargetCube {
    float10 GetSurfaceHeight();
};

// @baa 0x007613b0
float10 UTextureRenderTargetCube::GetSurfaceHeight(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}
