// UnrealEd_04a0000.cpp: 51 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_004a0560 { void sub_00423d80(); };

struct C { char pad[20]; M_004a0560 m; void sub_004a0560(); };

// @baa 0x004a0560
void C::sub_004a0560() { m.sub_00423d80(); }

struct C_004a0570 { int a, b, c; C_004a0570(); };

// @baa 0x004a0570
C_004a0570::C_004a0570() : a(0), b(0), c(0) {}

void sub_00424350();
// @baa 0x004a0580
void sub_004a0580(void) { sub_00424350(); }

struct C_004a4b50 {
    void sub_004a4b50();
};

// @baa 0x004a4b50
void C_004a4b50::sub_004a4b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_004a4b60 {
    void sub_004a4b60();
};

int sub_0049d900(...);
int sub_01ab3290(...);
// @baa 0x004a4b60
void C_004a4b60::sub_004a4b60(void)
{
    int * param_1 = (int *)this;

  sub_0049d900(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct M_004a4c40 { void sub_004246d0(); };

struct C_004a4c40 { char pad[24712]; M_004a4c40 m; void sub_004a4c40(); };

// @baa 0x004a4c40
void C_004a4c40::sub_004a4c40() { m.sub_004246d0(); }

struct C_004a4d50 {
    undefined4 sub_004a4d50(byte);
};

int sub_0049fdb0(void);
// @baa 0x004a4d50
undefined4 C_004a4d50::sub_004a4d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0049fdb0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xe4);
  }
  return param_1;
}

struct C_004a50a0 {
    undefined4 sub_004a50a0();
};

int sub_004a2490(...);
int sub_004a2770(...);
// @baa 0x004a50a0
undefined4 C_004a50a0::sub_004a50a0(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  if ((*(char *)(param_1 + 0x14) != '\0') && (cVar1 = sub_004a2770(param_1 + 0x18), cVar1 != '\0'))
  {
    return 1;
  }
  if ((*(char *)(param_1 + 0x15) != '\0') && (cVar1 = sub_004a2490(param_1 + 0x18), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}

struct C_004a5aa0 {
    undefined4 sub_004a5aa0(byte);
};

int sub_004a04d0(void);
// @baa 0x004a5aa0
undefined4 C_004a5aa0::sub_004a5aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a04d0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x2c);
  }
  return param_1;
}

void sub_004a46d0();
// @baa 0x004a6750
void sub_004a6750(void) { sub_004a46d0(); }

// @baa 0x004a6760
void sub_004a6760(void) { sub_004a46d0(); }

struct C_004a6fa0 {
    undefined4 sub_004a6fa0(byte);
};

int sub_004a0680(void);
// @baa 0x004a6fa0
undefined4 C_004a6fa0::sub_004a6fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0680();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x98);
  }
  return param_1;
}

struct C_004a9100 {
    undefined4 sub_004a9100(byte);
};

int sub_004a0b20(void);
// @baa 0x004a9100
undefined4 C_004a9100::sub_004a9100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0b20();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x108);
  }
  return param_1;
}

struct C_004ab3e0 {
    undefined4 sub_004ab3e0(byte);
};

int sub_004a0eb0(void);
// @baa 0x004ab3e0
undefined4 C_004ab3e0::sub_004ab3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0eb0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x60);
  }
  return param_1;
}

extern void __cdecl sub_01ab3290(void* Data, unsigned int Capacity);
struct FOptionString {
    char* Data; // 0x00
    unsigned int Capacity; // 0x04
    unsigned int Length; // 0x08
    void sub_00414280(const char* Text, int Length);
    FOptionString(const char* Text) { sub_00414280(Text, -1); }
    ~FOptionString() { sub_01ab3290(Data, Capacity); Data = 0; Length = 0; Capacity = 0; }
};

struct FOption {
    FOptionString ShortName; // 0x00
    FOptionString LongName; // 0x0c
    int Type; // 0x18
    FOption(const FOptionString& Short, const FOptionString& Long, int Kind);
    ~FOption();
};

struct FOptionList {
    FOption* Data; // 0x00
    unsigned int Capacity; // 0x04
    unsigned int Count; // 0x08
    FOptionList() : Data(0), Capacity(0), Count(0) {}
    ~FOptionList();
    void sub_0049f8a0(const FOption& Option);
};

// @baa 0x004ab400
FOptionList sub_004ab400() {
    FOptionList Options;
    Options.sub_0049f8a0(FOption(FOptionString("-c"), FOptionString("-create"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-r"), FOptionString("-remove"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-s"), FOptionString("-set"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-n"), FOptionString("-norefresh"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-t"), FOptionString("-track"), 5));
    Options.sub_0049f8a0(FOption(FOptionString("-p"), FOptionString("-phoneme"), 5));
    Options.sub_0049f8a0(FOption(FOptionString("-v"), FOptionString("-value"), 1));
    return Options;
}

struct C_004ab9e0 {
    undefined4 sub_004ab9e0(byte);
};

int sub_004a1020(void);
// @baa 0x004ab9e0
undefined4 C_004ab9e0::sub_004ab9e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1020();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x4c);
  }
  return param_1;
}

struct C_004adab0 {
    undefined4 sub_004adab0(byte);
};

int sub_004a1220(void);
// @baa 0x004adab0
undefined4 C_004adab0::sub_004adab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1220();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xb4);
  }
  return param_1;
}

struct C_004ae7b0 {
    undefined4 sub_004ae7b0(byte);
};

int sub_004a1880(void);
// @baa 0x004ae7b0
undefined4 C_004ae7b0::sub_004ae7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1880();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
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
	FxCommandSyntax() : _container(0), _allocatedCount(0), _usedCount(0) {}
	~FxCommandSyntax();

	void AddArgDesc(const FxCommandArgumentDesc& argDesc);

private:
	/* FxArray<FxCommandArgumentDesc> */
	FxCommandArgumentDesc* _container;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

// @baa 0x004a9130
FxCommandSyntax sub_004a9130()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-lo", "-layout", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-addnode", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nt", "-nodetype", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nx", "-nodex", CAT_Int32));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ny", "-nodey", CAT_Int32));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-rn", "-removenode", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-en", "-editnode", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-min", "-minimum", CAT_Real));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-max", "-maximum", CAT_Real));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-io", "-inputop", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-l", "-link", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-u", "-unlink", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-el", "-editlink", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-from", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-t", "-to", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-lf", "-linkfn", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-lp", "-linkfnparams", CAT_StringArray));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-it", "-interp", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-up", "-userprops", CAT_StringArray));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nr", "-norefresh", CAT_Flag));
	return newSyntax;
}

// @baa 0x004a6fd0
FxCommandSyntax sub_004a6fd0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-anim", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-gr", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-add", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-r", "-remove", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cp", "-copy", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-e", "-edit", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-o", "-owner", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-i", "-interpolation", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-san", "-sourceanim", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-sgr", "-sourcegroup", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-sn", "-sourcename", CAT_String));
	return newSyntax;
}

// @baa 0x004a7710
FxCommandSyntax sub_004a7710()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dwm", "-debugwidgetmesssages", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dnt", "-dumpnametable", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dct", "-dumpclasstable", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dcc", "-dumpconsolecommands", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dcv", "-dumpconsolevariables", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dms", "-dumpmemorystats", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dma", "-dumpmemoryallocs", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-crash", "-crash", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-scs", "-spamcommandsystem", CAT_Size));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dbp", "-dumpbonepose", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-drp", "-dumprefpose", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-tb", "-testbaking", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-dmas", "-dumpmountedanimationsets", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-da", "-dumpanims", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-saf", "-saveaudiofile", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-about", "-about", CAT_Flag));
	return newSyntax;
}

// @baa 0x004aefe0
FxCommandSyntax sub_004aefe0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-e", "-export", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-s", "-sync", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-fg", "-facegraph", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-m", "-mapping", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ng", "-nodegroups", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-c", "-cameras", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-w", "-workspaces", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cm", "-colourmap", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cm2", "-colormap", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-all", CAT_Flag));
	return newSyntax;
}

// @baa 0x004adae0
FxCommandSyntax sub_004adae0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-t", "-type", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-c", "-clear", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nz", "-nozoom", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-add", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-r", "-remove", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-names", CAT_StringArray));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-g", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n1", "-node1", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n2", "-node2", CAT_String));
	return newSyntax;
}

// @baa 0x004a9f50
FxCommandSyntax sub_004a9f50()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-l", "-link", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-g", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-anim", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-sc", "-soundcuepath", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-snw", "-soundnodewavename", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-p", "-package", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-usc", "-updatesoundcues", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-lfan", "-linkfromanimname", CAT_Flag));
	return newSyntax;
}

// @baa 0x004a5520
FxCommandSyntax sub_004a5520()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-addednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-rn", "-removednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-en", "-editednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ac", "-addedcurves", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-rc", "-removedcurves", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cm", "-changedmapping", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ec", "-editedcurves", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ca", "-changedanimation", CAT_Flag));
	return newSyntax;
}

// @baa 0x004ae7d0
FxCommandSyntax sub_004ae7d0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-fg", "-facegraphnode", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ag", "-animgroup", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-anim", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ac", "-animcurve", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-p", "-path", CAT_StringArray));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-o", "-old", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-new", CAT_String));
	return newSyntax;
}

// @baa 0x004aba00
FxCommandSyntax sub_004aba00()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-c", "-create", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-e", "-edit", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-r", "-remove", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-add", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-g", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-nodes", CAT_StringArray));
	return newSyntax;
}

// @baa 0x004a86a0
FxCommandSyntax sub_004a86a0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ag", "-animgroup", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-animname", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-all", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-d", "-dir", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ex", "-extratracks", CAT_StringArray));
	return newSyntax;
}

// @baa 0x004a5ac0
FxCommandSyntax sub_004a5ac0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-an", "-addednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-rn", "-removednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-en", "-editednodes", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ac", "-addedcurves", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-rc", "-removedcurves", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cm", "-changedmapping", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-ec", "-editedcurves", CAT_Flag));
	return newSyntax;
}

// @baa 0x004a51e0
FxCommandSyntax sub_004a51e0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-m", "-mount", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-u", "-unmount", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-i", "-import", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-e", "-export", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-to", "-to", CAT_String));
	return newSyntax;
}

// @baa 0x004a6c90
FxCommandSyntax sub_004a6c90()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-new", CAT_Real));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-frame", CAT_Int32));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-p", "-prev", CAT_Real));
	return newSyntax;
}

// @baa 0x004ac6c0
FxCommandSyntax sub_004ac6c0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-all", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-s", "-start", CAT_Real));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-e", "-end", CAT_Real));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-l", "-loop", CAT_Flag));
	return newSyntax;
}

// @baa 0x004a4e90
FxCommandSyntax sub_004a4e90()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-c", "-create", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-r", "-remove", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-g", "-group", CAT_String));
	return newSyntax;
}

// @baa 0x004a65d0
FxCommandSyntax sub_004a65d0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-fn", "-forcenodes", CAT_StringArray));
	return newSyntax;
}

// @baa 0x004a6a20
FxCommandSyntax sub_004a6a20()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-p", "-platform", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	return newSyntax;
}

// @baa 0x004ad1d0
FxCommandSyntax sub_004ad1d0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-t", "-to", CAT_String));
	return newSyntax;
}

// @baa 0x004acc60
FxCommandSyntax sub_004acc60()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nu", "-noundo", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-d", "-debug", CAT_Flag));
	return newSyntax;
}

// @baa 0x004ae5a0
FxCommandSyntax sub_004ae5a0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-v", "-value", CAT_String));
	return newSyntax;
}

// @baa 0x004afbd0
FxCommandSyntax sub_004afbd0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-nr", "-noredo", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-d", "-debug", CAT_Flag));
	return newSyntax;
}

// @baa 0x004a8090
FxCommandSyntax sub_004a8090()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-s", "-size", CAT_Size));
	return newSyntax;
}

// @baa 0x004a6ba0
FxCommandSyntax sub_004a6ba0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-sp", "-sourcepackage", CAT_String));
	return newSyntax;
}

// @baa 0x004a8180
FxCommandSyntax sub_004a8180()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	return newSyntax;
}

// @baa 0x004a8e80
FxCommandSyntax sub_004a8e80()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	return newSyntax;
}

// @baa 0x004ab860
FxCommandSyntax sub_004ab860()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	return newSyntax;
}

// @baa 0x004ab260
FxCommandSyntax sub_004ab260()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	return newSyntax;
}

// @baa 0x004ac990
FxCommandSyntax sub_004ac990()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-m", "-message", CAT_String));
	return newSyntax;
}

// @baa 0x004aca80
FxCommandSyntax sub_004aca80()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-m", "-message", CAT_String));
	return newSyntax;
}

// @baa 0x004acde0
FxCommandSyntax sub_004acde0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	return newSyntax;
}

// @baa 0x004ad930
FxCommandSyntax sub_004ad930()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-f", "-file", CAT_String));
	return newSyntax;
}

// @baa 0x004acb70
FxCommandSyntax sub_004acb70()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-m", "-message", CAT_String));
	return newSyntax;
}

// @baa 0x004ac5d0
FxCommandSyntax sub_004ac5d0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-p", "-push", CAT_Flag));
	return newSyntax;
}
