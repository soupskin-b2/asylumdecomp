// UnrealEd_1ac0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01ac95f0
{
    INT sub_01ac95f0(INT Value);
};

// @baa 0x01ac9ad0
INT sub_01ac9ad0(INT Value, S_01ac95f0* Object)
{
    return Object->sub_01ac95f0(Value);
}

/* FaceFX SDK, the mapping from phonemes to the targets (Face Graph nodes) that shape them
 * (FxPhonemeEnum.h, FxPhonemeMap.h). */
typedef char FxChar;

typedef float FxReal;

/* The phonemes FaceFX knows. */
enum FxPhoneme
{
	PHON_SIL = 0,
	PHON_P,
	PHON_B,
	PHON_T,
	PHON_D,
	PHON_K,
	PHON_G,
	PHON_M,
	PHON_N,
	PHON_NG,
	PHON_RA,
	PHON_RU,
	PHON_FLAP,
	PHON_PH,
	PHON_F,
	PHON_V,
	PHON_TH,
	PHON_DH,
	PHON_S,
	PHON_Z,
	PHON_SH,
	PHON_ZH,
	PHON_CX,
	PHON_X,
	PHON_GH,
	PHON_HH,
	PHON_R,
	PHON_Y,
	PHON_L,
	PHON_W,
	PHON_H,
	PHON_TS,
	PHON_CH,
	PHON_JH,
	PHON_IY,
	PHON_E,
	PHON_EN,
	PHON_EH,
	PHON_A,
	PHON_AA,
	PHON_AAN,
	PHON_AO,
	PHON_AON,
	PHON_O,
	PHON_ON,
	PHON_UW,
	PHON_UY,
	PHON_EU,
	PHON_OE,
	PHON_OEN,
	PHON_AH,
	PHON_IH,
	PHON_UU,
	PHON_UH,
	PHON_AX,
	PHON_UX,
	PHON_AE,
	PHON_ER,
	PHON_AXR,
	PHON_EXR,
	PHON_EY,
	PHON_AW,
	PHON_AY,
	PHON_OY,
	PHON_OW,
	NUM_PHONS
};

class FxPhonemeMap
{
public:
	void Clear();
	void MapPhonToName(const FxPhoneme& phon, const FxChar* name, FxReal amount);

	void sub_01ac9bc0();
};

// @baa 0x01ac9bc0
/* Replaces the mapping with the default one: the targets of the stock FaceFX rig. */
void FxPhonemeMap::sub_01ac9bc0()
{
	Clear();

	MapPhonToName(PHON_P, "open", 0.0f);
	MapPhonToName(PHON_B, "open", 0.0f);
	MapPhonToName(PHON_T, "open", 0.4f);
	MapPhonToName(PHON_D, "open", 0.4f);
	MapPhonToName(PHON_K, "open", 0.25f);
	MapPhonToName(PHON_G, "open", 0.25f);
	MapPhonToName(PHON_M, "open", 0.0f);
	MapPhonToName(PHON_N, "open", 0.4f);
	MapPhonToName(PHON_NG, "open", 0.4f);
	MapPhonToName(PHON_RA, "open", 0.4f);
	MapPhonToName(PHON_RU, "open", 0.25f);
	MapPhonToName(PHON_FLAP, "open", 0.3f);
	MapPhonToName(PHON_PH, "open", 0.1f);
	MapPhonToName(PHON_F, "open", 0.0f);
	MapPhonToName(PHON_V, "open", 0.0f);
	MapPhonToName(PHON_TH, "open", 0.45f);
	MapPhonToName(PHON_DH, "open", 0.45f);
	MapPhonToName(PHON_S, "open", 0.15f);
	MapPhonToName(PHON_Z, "open", 0.15f);
	MapPhonToName(PHON_SH, "open", 0.0f);
	MapPhonToName(PHON_ZH, "open", 0.0f);
	MapPhonToName(PHON_CX, "open", 0.25f);
	MapPhonToName(PHON_X, "open", 0.25f);
	MapPhonToName(PHON_GH, "open", 0.25f);
	MapPhonToName(PHON_HH, "open", 0.3f);
	MapPhonToName(PHON_R, "open", 0.1f);
	MapPhonToName(PHON_Y, "open", 0.0f);
	MapPhonToName(PHON_L, "open", 0.4f);
	MapPhonToName(PHON_W, "open", 0.0f);
	MapPhonToName(PHON_H, "open", 0.2f);
	MapPhonToName(PHON_TS, "open", 0.4f);
	MapPhonToName(PHON_CH, "open", 0.0f);
	MapPhonToName(PHON_JH, "open", 0.0f);
	MapPhonToName(PHON_IY, "open", 0.2f);
	MapPhonToName(PHON_E, "open", 0.35f);
	MapPhonToName(PHON_EN, "open", 0.35f);
	MapPhonToName(PHON_EH, "open", 0.5f);
	MapPhonToName(PHON_A, "open", 0.55f);
	MapPhonToName(PHON_AA, "open", 0.55f);
	MapPhonToName(PHON_AAN, "open", 0.55f);
	MapPhonToName(PHON_AO, "open", 0.4f);
	MapPhonToName(PHON_AON, "open", 0.4f);
	MapPhonToName(PHON_O, "open", 0.4f);
	MapPhonToName(PHON_ON, "open", 0.4f);
	MapPhonToName(PHON_UW, "open", 0.4f);
	MapPhonToName(PHON_UY, "open", 0.0f);
	MapPhonToName(PHON_EU, "open", 0.4f);
	MapPhonToName(PHON_OE, "open", 0.4f);
	MapPhonToName(PHON_OEN, "open", 0.4f);
	MapPhonToName(PHON_AH, "open", 0.5f);
	MapPhonToName(PHON_IH, "open", 0.5f);
	MapPhonToName(PHON_UU, "open", 0.4f);
	MapPhonToName(PHON_UH, "open", 0.4f);
	MapPhonToName(PHON_AX, "open", 0.5f);
	MapPhonToName(PHON_UX, "open", 0.5f);
	MapPhonToName(PHON_AE, "open", 0.5f);
	MapPhonToName(PHON_ER, "open", 0.4f);
	MapPhonToName(PHON_AXR, "open", 0.4f);
	MapPhonToName(PHON_EXR, "open", 0.4f);
	MapPhonToName(PHON_EY, "open", 0.5f);
	MapPhonToName(PHON_AW, "open", 0.5f);
	MapPhonToName(PHON_AY, "open", 0.5f);
	MapPhonToName(PHON_OY, "open", 0.4f);
	MapPhonToName(PHON_OW, "open", 0.4f);
	MapPhonToName(PHON_R, "W", 0.7f);
	MapPhonToName(PHON_Y, "W", 0.5f);
	MapPhonToName(PHON_W, "W", 0.85f);
	MapPhonToName(PHON_AO, "W", 0.55f);
	MapPhonToName(PHON_AON, "W", 0.55f);
	MapPhonToName(PHON_O, "W", 0.55f);
	MapPhonToName(PHON_ON, "W", 0.55f);
	MapPhonToName(PHON_UW, "W", 0.55f);
	MapPhonToName(PHON_UY, "W", 0.85f);
	MapPhonToName(PHON_EU, "W", 0.55f);
	MapPhonToName(PHON_OE, "W", 0.55f);
	MapPhonToName(PHON_OEN, "W", 0.55f);
	MapPhonToName(PHON_UU, "W", 0.55f);
	MapPhonToName(PHON_UH, "W", 0.55f);
	MapPhonToName(PHON_OY, "W", 0.55f);
	MapPhonToName(PHON_OW, "W", 0.55f);
	MapPhonToName(PHON_SH, "ShCh", 0.85f);
	MapPhonToName(PHON_ZH, "ShCh", 0.85f);
	MapPhonToName(PHON_Y, "ShCh", 0.3f);
	MapPhonToName(PHON_CH, "ShCh", 0.85f);
	MapPhonToName(PHON_JH, "ShCh", 0.85f);
	MapPhonToName(PHON_ER, "ShCh", 0.5f);
	MapPhonToName(PHON_AXR, "ShCh", 0.5f);
	MapPhonToName(PHON_EXR, "ShCh", 0.5f);
	MapPhonToName(PHON_P, "PBM", 0.9f);
	MapPhonToName(PHON_B, "PBM", 0.9f);
	MapPhonToName(PHON_M, "PBM", 0.9f);
	MapPhonToName(PHON_PH, "FV", 0.4f);
	MapPhonToName(PHON_F, "FV", 0.75f);
	MapPhonToName(PHON_V, "FV", 0.75f);
	MapPhonToName(PHON_S, "wide", 0.5f);
	MapPhonToName(PHON_Z, "wide", 0.5f);
	MapPhonToName(PHON_IY, "wide", 0.8f);
	MapPhonToName(PHON_E, "wide", 0.25f);
	MapPhonToName(PHON_EN, "wide", 0.25f);
	MapPhonToName(PHON_EH, "wide", 0.6f);
	MapPhonToName(PHON_AH, "wide", 0.6f);
	MapPhonToName(PHON_IH, "wide", 0.6f);
	MapPhonToName(PHON_AX, "wide", 0.6f);
	MapPhonToName(PHON_UX, "wide", 0.6f);
	MapPhonToName(PHON_AE, "wide", 0.6f);
	MapPhonToName(PHON_EY, "wide", 0.6f);
	MapPhonToName(PHON_AW, "wide", 0.6f);
	MapPhonToName(PHON_AY, "wide", 0.6f);
	MapPhonToName(PHON_K, "tBack", 0.8f);
	MapPhonToName(PHON_G, "tBack", 0.8f);
	MapPhonToName(PHON_RU, "tBack", 0.8f);
	MapPhonToName(PHON_CX, "tBack", 0.8f);
	MapPhonToName(PHON_X, "tBack", 0.8f);
	MapPhonToName(PHON_GH, "tBack", 0.8f);
	MapPhonToName(PHON_EH, "tBack", 0.4f);
	MapPhonToName(PHON_AH, "tBack", 0.4f);
	MapPhonToName(PHON_IH, "tBack", 0.4f);
	MapPhonToName(PHON_AX, "tBack", 0.4f);
	MapPhonToName(PHON_UX, "tBack", 0.4f);
	MapPhonToName(PHON_AE, "tBack", 0.4f);
	MapPhonToName(PHON_EY, "tBack", 0.4f);
	MapPhonToName(PHON_AW, "tBack", 0.4f);
	MapPhonToName(PHON_AY, "tBack", 0.4f);
	MapPhonToName(PHON_T, "tRoof", 0.8f);
	MapPhonToName(PHON_D, "tRoof", 0.8f);
	MapPhonToName(PHON_N, "tRoof", 0.8f);
	MapPhonToName(PHON_NG, "tRoof", 0.8f);
	MapPhonToName(PHON_RA, "tRoof", 0.5f);
	MapPhonToName(PHON_FLAP, "tRoof", 0.6f);
	MapPhonToName(PHON_S, "tRoof", 0.4f);
	MapPhonToName(PHON_Z, "tRoof", 0.4f);
	MapPhonToName(PHON_SH, "tRoof", 0.4f);
	MapPhonToName(PHON_ZH, "tRoof", 0.4f);
	MapPhonToName(PHON_Y, "tRoof", 0.4f);
	MapPhonToName(PHON_L, "tRoof", 0.8f);
	MapPhonToName(PHON_TS, "tRoof", 0.8f);
	MapPhonToName(PHON_CH, "tRoof", 0.4f);
	MapPhonToName(PHON_JH, "tRoof", 0.4f);
	MapPhonToName(PHON_IY, "tRoof", 0.2f);
	MapPhonToName(PHON_E, "tRoof", 0.2f);
	MapPhonToName(PHON_EN, "tRoof", 0.2f);
	MapPhonToName(PHON_ER, "tRoof", 0.5f);
	MapPhonToName(PHON_AXR, "tRoof", 0.5f);
	MapPhonToName(PHON_EXR, "tRoof", 0.5f);
	MapPhonToName(PHON_TH, "tTeeth", 0.9f);
	MapPhonToName(PHON_DH, "tTeeth", 0.9f);
}

// FCollada: initialises the sub-object at +0x10 and reports success.
struct FCSubObject_
{
	void Init(); /* 0x01ad6ba0 */
};

struct FCObject_
{
	BYTE _pad[0x10];
	FCSubObject_ Sub; /* 0x10 */

	bool Init();
};

// @baa 0x01acc980
bool FCObject_::Init()
{
	Sub.Init();
	return 1;
}
