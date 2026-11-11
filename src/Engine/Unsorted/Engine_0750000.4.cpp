// Engine_0750000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UTexture2DDynamic {
    float10 GetSurfaceHeight();
};

// @baa 0x00754f30
float10 UTexture2DDynamic::GetSurfaceHeight(void)
{
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}

// @baa 0x00754d20
INT __stdcall sub_00754d20(void* A, void* B)
{
    return B != 0;
}
