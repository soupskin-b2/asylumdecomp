// Editor_0750000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00755cb0
int UTextureRenderTarget::vf_000(void) { return 1; }

// @baa 0x00755cc0
bool UTextureRenderTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00755d00
int UTextureRenderTarget::sub_00755d00(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xac);
  iVar2 = 0;
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 1) != 0)) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// @baa 0x00755d20
void sub_00755d20(void) {  }

// @baa 0x00755d30
FTextureResource* UTextureRenderTarget::CreateResource() { return 0; }

// @baa 0x00755d40
int UTextureRenderTarget::GetMaterialType(void) { return 48; }

// @baa 0x00755d70
float sub_00755d70(void)
{
    return 2.2f;
}
