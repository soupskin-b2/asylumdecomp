// TextureMovie.cpp: 32 functions
// Placed here by: class 19, neighbours 9, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00755620
IMPLEMENT_CLASS_AT(UTextureMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureMovie.cpp", 12);

// @baa 0x00755730
int UTextureMovie::vf_000(void) { return 1; }

// @baa 0x00755740
bool UTextureMovie::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_01efe2e4;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00755890(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755890
FDecalValue* FDecalValue::sub_00755890(int* Src)
{
    Value = (int)&g_01efe2e4;
    Unk04 = *Src;
    return this;
}

extern char g_01ef1114[];
// @baa 0x007558d0
int sub_007558d0(void) { return (int)g_01ef1114; }

extern char g_01ebb554[];
// @baa 0x007558e0
void UTextureMovie::sub_007558e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x007558f0
undefined4 * UTextureMovie::sub_007558f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01efe2f0;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00755910
{
    FDecalValue_00755910* sub_00755910(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755910
FDecalValue_00755910* FDecalValue_00755910::sub_00755910(int* Src)
{
    Value = (int)&g_01efe2f0;
    Unk04 = *Src;
    return this;
}

extern char g_01ef1354[];
// @baa 0x00755950
int sub_00755950(void) { return (int)g_01ef1354; }

// @baa 0x00755960
void UTextureMovie::sub_00755960(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00755970
undefined4 * UTextureMovie::sub_00755970(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ef18b4[];
// @baa 0x00755a00
int sub_00755a00(void) { return (int)g_01ef18b4; }

// @baa 0x00755a10
void UTextureMovie::sub_00755a10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00755a20
undefined4 * UTextureMovie::sub_00755a20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01efe308;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00755a40
{
    FDecalValue_00755a40* sub_00755a40(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755a40
FDecalValue_00755a40* FDecalValue_00755a40::sub_00755a40(int* Src)
{
    Value = (int)&g_01efe308;
    Unk04 = *Src;
    return this;
}

extern char g_01ef1af4[];
// @baa 0x00755a80
int sub_00755a80(void) { return (int)g_01ef1af4; }

// @baa 0x00755a90
void UTextureMovie::sub_00755a90(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00755aa0
undefined4 * UTextureMovie::sub_00755aa0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01efe314;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00755ac0
{
    FDecalValue_00755ac0* sub_00755ac0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755ac0
FDecalValue_00755ac0* FDecalValue_00755ac0::sub_00755ac0(int* Src)
{
    Value = (int)&g_01efe314;
    Unk04 = *Src;
    return this;
}

extern char g_01ef1d34[];
// @baa 0x00755b10
int sub_00755b10(void) { return (int)g_01ef1d34; }

// @baa 0x00755b20
void UTextureMovie::sub_00755b20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00755b30
undefined4 * UTextureMovie::sub_00755b30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00755b50
int UTextureMovie::sub_00755b50(void)
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

// @baa 0x00755b70
INT UTextureMovie::GetMaterialType() { return 16; }

// @baa 0x007610e0
DOUBLE UTextureMovie::vf_10c() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb0);
}

// @baa 0x007610f0
DOUBLE UTextureMovie::GetSurfaceHeight() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}

int sub_005c7a70(...);
int sub_00761100(void);
// @baa 0x00761170
undefined4 UTextureMovie::sub_00761170(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00761100();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x100);
  }
  return param_1;
}

// @baa 0x00767110
// @baa 0x007677f0

/* The header's bulk data mirror declares no methods; the engine's FUntypedBulkData::Serialize is
 * at 0x00585e80. */

// @baa 0x00755990
void UTextureMovie::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	((FUntypedBulkData_Mirror&)Data).Serialize( Ar, this, INDEX_NONE );
}

/* Kit gap: FRenderCommandFence has no constructor, BeginFence (0x00719c60) or GetNumPendingFences (0x0071f7e0)
 * (RenderingThread.h). */
struct FRenderCommandFence_ : public FRenderCommandFence
{
	FRenderCommandFence_() { NumPendingFences = 0; }
};

/* Named accessor for the FPointer field (ISSUES.md 19). */
static __forceinline FRenderCommandFence_*& GetReleaseCodecFence(UTextureMovie* Movie)
{
	return (FRenderCommandFence_*&)Movie->ReleaseCodecFence.Dummy;
}

// @baa 0x007557d0
/* Ready to call FinishDestroy once the codec flushing fence has been hit. */
UBOOL UTextureMovie::IsReadyForFinishDestroy()
{
	return Super::IsReadyForFinishDestroy() && GetReleaseCodecFence(this) && GetReleaseCodecFence(this)->GetNumPendingFences() == 0;
}

// @baa 0x00755780
void UTextureMovie::BeginDestroy()
{
	Super::BeginDestroy();

	// synchronize with the rendering thread by inserting a fence
	if (!GetReleaseCodecFence(this))
	{
		GetReleaseCodecFence(this) = new FRenderCommandFence_();
	}
	GetReleaseCodecFence(this)->BeginFence();
}
