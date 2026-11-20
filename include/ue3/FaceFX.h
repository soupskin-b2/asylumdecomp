/* FaceFX SDK and FaceFX Studio (OC3 Entertainment), the parts the game and the editor call: the basic types
 * (FxPlatform.h), FxString (FxString.h), the class macros (FxClass.h) and the Studio console command system
 * (FxCommand.h, FxCommandSyntax.h, FxCommandManager.h, FxVM.h). The SDK is built into the exe, so everything here is
 * declare-only unless the game's code inlines it.
 *
 * FxCommandSyntax's default constructor is inline in most of the exe (the CreateSyntax functions zero its array in
 * place), but some callers call it out of line: define BAA_FX_OUTLINE_SYNTAX_CTOR before including this to get the
 * out-of-line one.
 *
 * Everything is in namespace OC3Ent::Face, as in the SDK; the header ends with `using namespace OC3Ent::Face;`.
 * It needs nothing else, but FFaceFXRegMap (UE3's side) takes an FString: include Classes.h to call it. */
#ifndef UE3_FACEFX_H
#define UE3_FACEFX_H

namespace OC3Ent
{
namespace Face
{

typedef char FxChar;
typedef bool FxBool;
typedef unsigned int FxSize;
typedef int FxInt32;
typedef float FxReal;

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

class FxClass;
class FxObject;

/* FxName.h: a name, a pointer into the SDK's name table */
class FxName
{
private:
	class FxNameTableEntry* Entry;
};

/* FxActorInstance.h: one actor's animation state (USkeletalMeshComponent::FaceFXActorInstance, an FPointer) */
class FxActorInstance
{
public:
	FxReal GetRegister(const FxName& RegName); /* 0x01abca80: the current value of a register */
};

/* FxClass.h: the run-time class description every FxObject class carries. */
#define FX_DECLARE_CLASS(classname, baseclassname) \
	public: \
		typedef baseclassname Super; \
		static const FxClass* AllocateStaticClass##classname(); \
		static const FxClass* StaticClass() \
		{ \
			if (!_pClassDesc) \
			{ \
				_pClassDesc = AllocateStaticClass##classname(); \
			} \
			return _pClassDesc; \
		} \
		static FxObject* ConstructObject(); \
	private: \
		static const FxClass* _pClassDesc
#define FX_REGISTER_CLASS(classname) classname::StaticClass()

/* FxCommandSyntax.h: the kind of value a console command argument takes. */
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

/* The arguments a command takes (each command's static CreateSyntax() builds one). */
class FxCommandSyntax
{
public:
#ifdef BAA_FX_OUTLINE_SYNTAX_CTOR
	FxCommandSyntax();
#else
	FxCommandSyntax() : _container(0), _allocatedCount(0), _usedCount(0) {}
#endif
	~FxCommandSyntax();

	void AddArgDesc(const FxCommandArgumentDesc& argDesc);

private:
	/* FxArray<FxCommandArgumentDesc> */
	FxCommandArgumentDesc* _container;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

/* FxCommand.h: the base of the console commands; a command without arguments keeps the empty syntax. */
class FxCommand
{
public:
	static FxCommandSyntax CreateSyntax();
};

/* FxCommandManager.h */
class FxCommandManager
{
public:
	static FxBool RegisterCommand(const FxString& commandName, const FxCommandSyntax& commandSyntax, FxObject* (*constructCommand)());
	static FxBool UnregisterCommand(const FxString& commandName);
};

/* FxVM.h: what executing a command came to, and the virtual machine the console commands run in. */
enum FxCommandError;
class FxVM
{
public:
	static FxCommandError ExecuteCommand(const FxString& command);
};

} /* namespace Face */
} /* namespace OC3Ent */
using namespace OC3Ent::Face;

/* UnFaceFXRegMap.h: maps an UnrealScript register name to the FaceFX one */
class FString;
struct FFaceFXRegMap
{
	OC3Ent::Face::FxName FaceFXRegName;

	static FFaceFXRegMap* GetRegisterMapping(const FString& RegName); /* 0x00bf7480: NULL if it was never registered */
};

#endif
