// FaceFX_0480000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_FX_OUTLINE_SYNTAX_CTOR
#include "ue3/FaceFX.h"

struct C {
    short sub_01ab5e50();
};

extern C* g_027d344c;
extern "C" C* __cdecl sub_01b92c90(void);
// @baa 0x004820f0
short __cdecl sub_004820f0(void)
{
    if (g_027d344c == 0)
        g_027d344c = sub_01b92c90();
    return g_027d344c->sub_01ab5e50();
}

/* FaceFX Studio, the command system (FxCommand.h, FxCommandSyntax.h; FxString.h of the FaceFX SDK).
 * Each console command describes the arguments it takes with a static CreateSyntax(). */
// @baa 0x004834b0
FxCommandSyntax sub_004834b0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-g", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-anim", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-sc", "-soundcue", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-snw", "-soundnodewave", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-pkg", "-package", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-l", "-language", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cc", "-coarticulationconfig", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-gc", "-gestureconfig", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-o", "-overwrite", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nt", "-notext", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ng", "-nogestures", CAT_Flag));
	return newSyntax;
}
