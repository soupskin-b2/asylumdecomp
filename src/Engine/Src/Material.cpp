// Material.cpp (part 1 of 2): 11 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006d69f0
IMPLEMENT_CLASS_AT(UMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Material.cpp", 10);

// @baa 0x006d6b80

// @baa 0x006adc00

// @baa 0x006add10
int UMaterial::vf_000(void) { return 1; }

// @baa 0x006add20
bool UMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_01ece4ec;
struct Sub_006ae060
{
	int Field_0;
	int Field_4;
	int Field_8;

	Sub_006ae060* sub_006ae060(int A, int B);
};

// @baa 0x006ae060
Sub_006ae060* Sub_006ae060::sub_006ae060(int A, int B)
{
	Sub_006ae060* v0 = this;
	v0->Field_0 = (int)&g_01ece4ec;
	v0->Field_4 = A;
	v0->Field_8 = B;
	return v0;
}

extern char g_01ecdfdc[];
// @baa 0x006ae080
void UMaterial::sub_006ae080(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; }

struct C_006ae090 { C_006ae090* sub_006ae090(void); };

// @baa 0x006ae090
C_006ae090* C_006ae090::sub_006ae090(void) { return this; }

struct C_006ae0a0 { C_006ae0a0* sub_006ae0a0(void); };

// @baa 0x006ae0a0
C_006ae0a0* C_006ae0a0::sub_006ae0a0(void) { return this; }

struct C_006ae0b0 { C_006ae0b0* sub_006ae0b0(void); };

// @baa 0x006ae0b0
C_006ae0b0* C_006ae0b0::sub_006ae0b0(void) { return this; }

int sub_006d9710(...);
// @baa 0x006ae0c0
undefined4 UMaterial::sub_006ae0c0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (((*(uint *)(param_1 + 0x20c) & 8) == 0) && ((*(uint *)(param_1 + 0x20c) & 0x4000000) != 0)) {
    iVar1 = sub_006d9710(*(undefined1 *)(param_1 + 0x19c));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
