// GFxUIRenderer.cpp (part 3 of 3): 3 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e567e0(int);
};

int sub_0053df70(...);
// @baa 0x00e567e0
void C::sub_00e567e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00e568a0 {
    void sub_00e568a0(int);
};

// @baa 0x00e568a0
void C_00e568a0::sub_00e568a0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// GFxUIRenderer.cpp: releases the texture only when one is held (the release itself checks NULL != pTexture).
struct FGFxRenderTexture
{
    char  Header[0xc];
    void* pTexture;

    void sub_00e56530();
    void sub_00e565a0();
};

// @baa 0x00e565a0
void FGFxRenderTexture::sub_00e565a0()
{
    if (pTexture)
        sub_00e56530();
}
