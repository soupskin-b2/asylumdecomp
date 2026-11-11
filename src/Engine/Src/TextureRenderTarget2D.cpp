// TextureRenderTarget2D.cpp (part 1 of 3): 17 functions
// Placed here by: class 8, neighbours 6, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00753060(float *);
};

// @baa 0x00753060
undefined4 C::sub_00753060(float * param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 0;
  }
  return 1;
}

// @baa 0x00755d90
int UTextureRenderTarget2D::vf_000(void) { return 1; }

// @baa 0x00755da0
int UTextureRenderTarget2D::GetMaterialType(void) { return 16; }

int sub_00720ef0(void);
extern undefined4 g_026b21e0;
// @baa 0x00755ea0
void UTextureRenderTarget2D::vf_01c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  sub_00720ef0();
  if ((g_026b21e0 != 0) && (iVar1 = *(int *)(param_1 + 0xb4), iVar1 == *(int *)(param_1 + 0xb8)))
  {
    *(int *)(param_1 + 0xb4) = iVar1 / 2 + iVar1;
  }
  return;
}

// @baa 0x007612b0
IMPLEMENT_CLASS_AT(UTextureRenderTarget2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget2D.cpp", 12);

// @baa 0x00761310
DOUBLE UTextureRenderTarget2D::vf_10c() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}

// @baa 0x00761330
struct C_00762290 { C_00762290* sub_00762290(void); };

// @baa 0x00762290
C_00762290* C_00762290::sub_00762290(void) { return this; }

struct A_007622a0 { virtual void sub_00755ed0(); char pad[64]; };

struct B_007622a0 { virtual void sub_00755ed0(); };

struct C_007622a0 : A_007622a0, B_007622a0 { virtual void sub_00755ed0(); C_007622a0(); };

C_007622a0::C_007622a0() {}

// @baa 0x007622a0
void C_007622a0::sub_00755ed0() {}

struct A_007622b0 { virtual void sub_00762340(); char pad[64]; };

struct B_007622b0 { virtual void sub_00762340(); };

struct C_007622b0 : A_007622b0, B_007622b0 { virtual void sub_00762340(); C_007622b0(); };

C_007622b0::C_007622b0() {}

// @baa 0x007622b0
void C_007622b0::sub_00762340() {}

struct A_007622c0 { virtual void sub_00755ee0(); char pad[64]; };

struct B_007622c0 { virtual void sub_00755ee0(); };

struct C_007622c0 : A_007622c0, B_007622c0 { virtual void sub_00755ee0(); C_007622c0(); };

C_007622c0::C_007622c0() {}

// @baa 0x007622c0
void C_007622c0::sub_00755ee0() {}

int sub_0053dfa0(...);
int sub_007622d0(void);
// @baa 0x00762340
undefined4 UTextureCube::sub_00762340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007622d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a70(...);
int sub_007626b0(void);
// @baa 0x00762710
undefined4 UScriptedTexture::sub_00762710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007626b0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xe0);
  }
  return param_1;
}

// @baa 0x00767140
// @baa 0x00767fa0
// @baa 0x007683e0
IMPLEMENT_CLASS_AT(UScriptedTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget2D.cpp", 382);

// @baa 0x0076c670
