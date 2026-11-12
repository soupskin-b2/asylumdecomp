// Engine_0bb0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct Singleton_026b0d94
{
    virtual void vf_000() = 0;
    virtual void vf_001() = 0;
    virtual void vf_002() = 0;
    virtual void vf_003() = 0;
    virtual void vf_004() = 0;
    virtual void vf_005() = 0;
    virtual void vf_006() = 0;
    virtual void vf_007() = 0;
    virtual void vf_008() = 0;
    virtual void vf_009() = 0;
    virtual void vf_010() = 0;
    virtual void vf_011() = 0;
    virtual void vf_012() = 0;
    virtual void vf_013() = 0;
    virtual void vf_014() = 0;
    virtual void vf_015() = 0;
    virtual void vf_016() = 0;
    virtual void vf_017() = 0;
    virtual void vf_018() = 0;
    virtual void vf_019() = 0;
    virtual void vf_020() = 0;
    virtual void vf_021() = 0;
    virtual void vf_022() = 0;
    virtual void vf_023() = 0;
    virtual void vf_024() = 0;
    virtual void vf_025() = 0;
    virtual void vf_026() = 0;
    virtual void vf_027() = 0;
    virtual void vf_028() = 0;
    virtual void vf_029() = 0;
    virtual void vf_030() = 0;
    virtual void vf_031() = 0;
    virtual void vf_032() = 0;
    virtual void vf_033() = 0;
    virtual void vf_034() = 0;
    virtual void vf_035() = 0;
    virtual void vf_036() = 0;
    virtual void vf_037() = 0;
    virtual void vf_038() = 0;
    virtual void vf_039() = 0;
    virtual void vf_040() = 0;
    virtual void vf_041() = 0;
    virtual void vf_042() = 0;
    virtual void vf_043() = 0;
    virtual void vf_044() = 0;
    virtual void vf_045() = 0;
    virtual void vf_046() = 0;
    virtual void vf_047() = 0;
    virtual void vf_048() = 0;
    virtual void vf_049() = 0;
    virtual void vf_050() = 0;
    virtual void vf_051() = 0;
    virtual void vf_052() = 0;
    virtual void vf_053() = 0;
    virtual void vf_054() = 0;
    virtual void vf_055() = 0;
    virtual void vf_056() = 0;
    virtual void vf_057() = 0;
    virtual void vf_058() = 0;
    virtual void vf_059() = 0;
    virtual void vf_060() = 0;
    virtual void vf_061() = 0;
    virtual void vf_062() = 0;
    virtual void vf_063() = 0;
    virtual void vf_064() = 0;
    virtual void vf_065() = 0;
    virtual void vf_066() = 0;
    virtual void vf_067() = 0;
    virtual void vf_068() = 0;
    virtual void vf_069() = 0;
    virtual void vf_070() = 0;
    virtual void vf_071() = 0;
    virtual void vf_072() = 0;
    virtual void vf_073() = 0;
    virtual void vf_074() = 0;
    virtual void vf_075() = 0;
    virtual void vf_076() = 0;
    virtual void vf_077() = 0;
    virtual void vf_078() = 0;
    virtual void vf_079() = 0;
    virtual void vf_080() = 0;
    virtual void vf_081() = 0;
    virtual void vf_082() = 0;
    virtual void vf_083() = 0;
    virtual void vf_084() = 0;
    virtual void vf_085() = 0;
    virtual void vf_086() = 0;
    virtual void vf_087() = 0;
    virtual void vf_088() = 0;
    virtual void vf_089() = 0;
    virtual void vf_090() = 0;
    virtual void vf_091() = 0;
    virtual void vf_092() = 0;
    virtual void vf_093() = 0;
    virtual void vf_094() = 0;
    virtual void vf_095() = 0;
    virtual void vf_096() = 0;
    virtual void vf_097() = 0;
    virtual void vf_098() = 0;
    virtual void vf_099() = 0;
    virtual void vf_100() = 0;
    virtual void vf_101() = 0;
    virtual void vf_102() = 0;
    virtual void vf_103() = 0;
    virtual void vf_104() = 0;
    virtual void vf_105() = 0;
    virtual void vf_106() = 0;
    virtual void vf_107() = 0;
    virtual void vf_108() = 0;
    virtual void vf_109() = 0;
    virtual void vf_110() = 0;
    virtual void vf_111() = 0;
    virtual void vf_112() = 0;
    virtual void vf_113() = 0;
    virtual void vf_114() = 0;
    virtual void vf_115() = 0;
    virtual void vf_116() = 0;
    virtual void vf_117() = 0;
    virtual void vf_118() = 0;
    virtual void vf_119() = 0;
    virtual void vf_120() = 0;
    virtual void vf_121() = 0;
    virtual void vf_122() = 0;
    virtual void vf_123() = 0;
    virtual void vf_124() = 0;
    virtual void vf_125() = 0;
    virtual void vf_126() = 0;
    virtual void vf_127() = 0;
    virtual void vf_128() = 0;
    virtual void vf_129() = 0;
    virtual void vf_130() = 0;
    virtual void vf_131() = 0;
    virtual void vf_132() = 0;
    virtual void vf_133() = 0;
    virtual void sub_218(DWORD Value) = 0;
};

extern Singleton_026b0d94* g_026b0d94;
struct C_SingletonClient
{
    DWORD Pad_00;
    DWORD Pad_04;
    DWORD Field_08;
    void sub_00bbe8f0();
};

// @baa 0x00bbe8f0
void C_SingletonClient::sub_00bbe8f0()
{
    if (Field_08 != 0)
    {
        g_026b0d94->sub_218(Field_08);
    }
}

extern INT g_0201a1d0;
struct F00bb4560
{
	INT* A;
	INT B;
	INT C;

	F00bb4560* sub_00bb4560(INT b, INT c)
	{
		A = &g_0201a1d0;
		B = b;
		C = c;
		return this;
	}
};

// @baa 0x00bb4560
void Use(F00bb4560* S, INT b, INT c)
{
	S->sub_00bb4560(b, c);
}
