// FaceFX_0480000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

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
typedef char FxChar;

typedef unsigned int FxSize;

static const FxSize FxInvalidIndex = (FxSize)-1;
void FxFree(void* ptr, FxSize n);
class FxString
{
public:
	FxString(const FxChar* str, FxSize numChars = FxInvalidIndex);
	~FxString()
	{
		FxFree(_container, _allocatedCount);
		_container = 0;
		_usedCount = 0;
		_allocatedCount = 0;
	}

private:
	FxChar* _container;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

/* The kind of value an argument takes. */
enum FxCommandArgumentType
{
	CAT_Flag = 0,
	CAT_Real,
	CAT_DReal,
	CAT_Size,
	CAT_Int32,
	CAT_String,
	CAT_StringArray,
	CAT_Bool
};

class FxCommandArgumentDesc
{
public:
	FxCommandArgumentDesc(const FxString& argNameShort, const FxString& argNameLong, FxCommandArgumentType argType);
	~FxCommandArgumentDesc();

	FxString ArgNameShort;
	FxString ArgNameLong;
	FxCommandArgumentType ArgType;
};

class FxCommandSyntax
{
public:
	FxCommandSyntax();
	~FxCommandSyntax();

	void AddArgDesc(const FxCommandArgumentDesc& argDesc);

private:
	/* FxArray<FxCommandArgumentDesc> */
	FxCommandArgumentDesc* _container;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

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
