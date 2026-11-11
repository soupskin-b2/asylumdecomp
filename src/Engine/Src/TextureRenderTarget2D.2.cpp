// TextureRenderTarget2D.cpp (part 2 of 3): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UTextureRenderTarget2D {
    float10 GetSurfaceHeight();
};

// @baa 0x00761320
float10 UTextureRenderTarget2D::GetSurfaceHeight(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb8);
}
