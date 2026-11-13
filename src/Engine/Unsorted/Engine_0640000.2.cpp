// Engine_0640000.cpp (part 2 of 2): 28 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

INT sub_0064dbe0(void);
INT sub_0053f6c0(void);
// @baa 0x0064e9e0
INT ADecalManager::vf_000()
{
	return sub_0064dbe0 == sub_0053f6c0;
}

struct S_0064b6c0
{
    char Pad[0x58];
    float Field_0058;
    char Pad_005C[0x0C];
    float Field_0068;
    char Pad_006C[0x0C];
    float Field_0078;

    struct S_0064b6f0 { float X, Y, Z; };
    S_0064b6f0 sub_0064b6c0()
    {
        S_0064b6f0 R;
        R.X = Field_0058;
        R.Y = Field_0068;
        R.Z = Field_0078;
        return R;
    }
};

// @baa 0x0064b6c0
void ref_call()
{
    S_0064b6c0 s;
    S_0064b6c0::S_0064b6f0 r = s.sub_0064b6c0();
}

struct C
{
    WORD pad_00;
    WORD field_02;

    INT sub_0064aae0();
};

// @baa 0x0064aae0
INT C::sub_0064aae0()
{
    return field_02 > 0;
}

struct USurface_ : public USurface
{
    void sub_0064bbf0();
};

// @baa 0x0064bbf0
void USurface_::sub_0064bbf0()
{
    if (--*(INT*)((char*)this + 0x14) == 0)
        BeginDestroy();
}

struct C_0064d1e0
{
    char pad_00[0x2c];
    float Value;

    void sub_0064d1e0(float In);
};

// @baa 0x0064d1e0
void C_0064d1e0::sub_0064d1e0(float In)
{
    Value = In;
}

struct S_0064cbd0 {
    S_0064cbd0* sub_0064cbd0();
};

// @baa 0x0064cbd0
S_0064cbd0* S_0064cbd0::sub_0064cbd0()
{
    *(WORD*)(this + 2)  = 0;
    *(WORD*)(this + 8)  = 0;
    *(WORD*)(this + 0x10) = 0;
    *(WORD*)(this + 0x16) = 0;
    *(WORD*)(this + 0x1a) = 0;
    return this;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_();
};

extern const unsigned char g_01ebbe54;
// @baa 0x0064c030
FNamedValue_::FNamedValue_()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbe54;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c550
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c550();
};

extern const unsigned char g_01ebbf68;
// @baa 0x0064c550
FNamedValue_0064c550::FNamedValue_0064c550()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbf68;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c560
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c560();
};

extern const unsigned char g_01ebbf88;
// @baa 0x0064c560
FNamedValue_0064c560::FNamedValue_0064c560()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbf88;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c570
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c570();
};

extern const unsigned char g_01ebbfa8;
// @baa 0x0064c570
FNamedValue_0064c570::FNamedValue_0064c570()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbfa8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c580
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c580();
};

extern const unsigned char g_01ebbfc8;
// @baa 0x0064c580
FNamedValue_0064c580::FNamedValue_0064c580()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbfc8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c590
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c590();
};

extern const unsigned char g_01ebbfe8;
// @baa 0x0064c590
FNamedValue_0064c590::FNamedValue_0064c590()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbfe8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5a0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5a0();
};

extern const unsigned char g_01ebc008;
// @baa 0x0064c5a0
FNamedValue_0064c5a0::FNamedValue_0064c5a0()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebc008;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5b0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5b0();
};

extern const unsigned char g_01ebc028;
// @baa 0x0064c5b0
FNamedValue_0064c5b0::FNamedValue_0064c5b0()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc028;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5c0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5c0();
};

extern const unsigned char g_01ebc048;
// @baa 0x0064c5c0
FNamedValue_0064c5c0::FNamedValue_0064c5c0()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc048;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5d0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5d0();
};

extern const unsigned char g_01ebc068;
// @baa 0x0064c5d0
FNamedValue_0064c5d0::FNamedValue_0064c5d0()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc068;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5e0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5e0();
};

extern const unsigned char g_01ebc088;
// @baa 0x0064c5e0
FNamedValue_0064c5e0::FNamedValue_0064c5e0()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc088;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c5f0
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c5f0();
};

extern const unsigned char g_01ebc0a8;
// @baa 0x0064c5f0
FNamedValue_0064c5f0::FNamedValue_0064c5f0()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc0a8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c600
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c600();
};

extern const unsigned char g_01ebc0c8;
// @baa 0x0064c600
FNamedValue_0064c600::FNamedValue_0064c600()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc0c8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c610
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c610();
};

extern const unsigned char g_01ebc0e8;
// @baa 0x0064c610
FNamedValue_0064c610::FNamedValue_0064c610()
{
	Name = L"VariableKeyLerp";
	Handler = &g_01ebc0e8;
}

// A named value descriptor: pairs a wide-string tag with its handler.
struct FNamedValue_0064c070
{
	const unsigned char* Handler;
	const TCHAR* Name;
	FNamedValue_0064c070();
};

extern const unsigned char g_01ebbed4;
// @baa 0x0064c070
FNamedValue_0064c070::FNamedValue_0064c070()
{
	Name = L"ConstantKeyLerp";
	Handler = &g_01ebbed4;
}

// A shader parameter descriptor: its type tag plus the parameter's name.
struct FShaderParam_0064b440
{
	const unsigned char* Type;
	const TCHAR* Name;
	FShaderParam_0064b440(const TCHAR* InName);
};

extern const unsigned char g_01ebb754;
// @baa 0x0064b440
FShaderParam_0064b440::FShaderParam_0064b440(const TCHAR* InName)
{
	Type = &g_01ebb754;
	Name = InName;
}

// A shader parameter descriptor: its type tag plus the parameter's name.
struct FShaderParam_0064c010
{
	const unsigned char* Type;
	const TCHAR* Name;
	FShaderParam_0064c010(const TCHAR* InName);
};

extern const unsigned char g_01ebbe34;
// @baa 0x0064c010
FShaderParam_0064c010::FShaderParam_0064c010(const TCHAR* InName)
{
	Type = &g_01ebbe34;
	Name = InName;
}

// Registers a named shader parameter for the material.
struct FMaterialParamRegistrar_0064fdf0
{
	void sub_0064fdf0(class UMaterial* Material);
};

// 0x007329f0: __stdcall, sets a named parameter on the material it is handed.
void __stdcall sub_007329f0(class UMaterial* Material, const TCHAR* ParameterName, UBOOL bValue);
// @baa 0x0064fdf0
void FMaterialParamRegistrar_0064fdf0::sub_0064fdf0(class UMaterial* Material)
{
	sub_007329f0(Material, L"ShadowCoordinateScaleBias", 1);
}

// Registers a named shader parameter for the material.
struct FMaterialParamRegistrar_0064fe10
{
	void sub_0064fe10(class UMaterial* Material);
};

// 0x00732a30: __stdcall, sets a named parameter on the material it is handed.
void __stdcall sub_00732a30(class UMaterial* Material, const TCHAR* ParameterName, UBOOL bValue);
// @baa 0x0064fe10
void FMaterialParamRegistrar_0064fe10::sub_0064fe10(class UMaterial* Material)
{
	sub_00732a30(Material, L"ShadowTexture", 1);
}

// Copies a 4x4 matrix (64 bytes) into the translation slot at +0x10.
struct FMatrixHolder_
{
	FLOAT Scale[4];
	FLOAT Matrix[16];
	void sub_0064ad30(const FLOAT* Source);
};

// @baa 0x0064ad30
void FMatrixHolder_::sub_0064ad30(const FLOAT* Source)
{
	appMemcpy(Matrix, Source, 16 * sizeof(FLOAT));
}

// Clears a five-component float record.
struct FRenderPassParams_
{
	FLOAT Values[5];
	FRenderPassParams_();
};

// @baa 0x0064a7e0
FRenderPassParams_::FRenderPassParams_()
{
	for (INT i = 0; i < 5; i++)
	{
		Values[i] = 0.f;
	}
}

// Reports whether a face with this material flag may use the given draw hint.
struct FMeshBatchElement_
{
	BYTE Reserved[0x36];
	unsigned char DrawHintMask;
	BYTE EnabledFlags;
	UBOOL TestDrawHint(INT DrawHint);
};

// @baa 0x0064bc60
UBOOL FMeshBatchElement_::TestDrawHint(INT DrawHint)
{
	if (DrawHintMask > 0)
	{
		if ((EnabledFlags & (DrawHint | 0x21)) == 0)
		{
			return 1;
		}
	}
	return 0;
}
