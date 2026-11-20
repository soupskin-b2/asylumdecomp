// TextureRenderTarget2D.cpp (part 3 of 3): 23 functions
// Placed here by: callers 1, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Native.h"

// @baa 0x00767160
IMPLEMENT_CLASS_AT(UScriptedTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget2D.cpp", 382);

// @baa 0x0076c780
UBOOL UTextureRenderTarget2D::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00755ed0 {
    undefined4 sub_00755ed0();
};

// @baa 0x00755ed0
undefined4 C_00755ed0::sub_00755ed0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xb4);
}

struct C_00755ee0 {
    undefined4 sub_00755ee0();
};

// @baa 0x00755ee0
undefined4 C_00755ee0::sub_00755ee0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xb8);
}

// @baa 0x00755ef0
UBOOL UScriptedTexture::HasUniqueStaticConfigName() const { return 1; }

int sub_0073cbc0(void);
// @baa 0x00755f00
void UScriptedTexture::UpdateResource()
{
    int param_1 = (int)this;

  sub_0073cbc0();
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
  return;
}

extern int g_01efe320;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00755f20(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755f20
FDecalValue* FDecalValue::sub_00755f20(int* Src)
{
    Value = (int)&g_01efe320;
    Unk04 = *Src;
    return this;
}

extern char g_01ef2e0c[];
// @baa 0x00755f40
int sub_00755f40(void) { return (int)g_01ef2e0c; }

extern int g_01efe32c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00755f50
{
    FDecalValue_00755f50* sub_00755f50(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755f50
FDecalValue_00755f50* FDecalValue_00755f50::sub_00755f50(int* Src)
{
    Value = (int)&g_01efe32c;
    Unk04 = *Src;
    return this;
}

extern char g_01ef2e40[];
// @baa 0x00755f70
int sub_00755f70(void) { return (int)g_01ef2e40; }

extern int g_01efe338;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00755f80
{
    FDecalValue_00755f80* sub_00755f80(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00755f80
FDecalValue_00755f80* FDecalValue_00755f80::sub_00755f80(int* Src)
{
    Value = (int)&g_01efe338;
    Unk04 = *Src;
    return this;
}

extern char g_01ef2e6c[];
// @baa 0x00755fa0
int sub_00755fa0(void) { return (int)g_01ef2e6c; }

extern char g_01ebb554[];
struct C_00755fb0 { void sub_00755fb0(void); };
// @baa 0x00755fb0
void C_00755fb0::sub_00755fb0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00755fc0 { void sub_00755fc0(void); };
// @baa 0x00755fc0
void C_00755fc0::sub_00755fc0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00755fd0 { void sub_00755fd0(void); };
// @baa 0x00755fd0
void C_00755fd0::sub_00755fd0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
struct C_00755fe0 { undefined4 * sub_00755fe0(byte param_2); };
// @baa 0x00755fe0
undefined4 * C_00755fe0::sub_00755fe0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00756000 { undefined4 * sub_00756000(byte param_2); };
// @baa 0x00756000
undefined4 * C_00756000::sub_00756000(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00756020 { undefined4 * sub_00756020(byte param_2); };
// @baa 0x00756020
undefined4 * C_00756020::sub_00756020(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0076ee00

// @baa 0x0076ef10
UBOOL UScriptedTexture::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f20ba0
void UTextureRenderTargetFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UTextureRenderTarget2D::StaticClass();
	bCreateNew = TRUE;
	bEditAfterNew = TRUE;
	bEditorImport = FALSE;
	Description = TEXT("RenderToTexture");
	Width = 256;
	Height = 256;
	Format = 0;
}

/* UnScriptedTexture.cpp: the list of scripted textures the renderer updates each frame. */
extern TArray<UScriptedTexture*> GScriptedTextures;
// @baa 0x007684a0
void UScriptedTexture::BeginDestroy()
{
	GScriptedTextures.RemoveItem(this);
	Super::BeginDestroy();
}

/* FString::Printf here is the linker's copy specialised for these argument types (0x00766b80). */
// @baa 0x00768090
FString UTextureRenderTarget2D::GetDesc()
{
	return FString::Printf(TEXT("Render to Texture %dx%d[%s]"), SizeX, SizeY, GPixelFormats[Format].Name);
}
