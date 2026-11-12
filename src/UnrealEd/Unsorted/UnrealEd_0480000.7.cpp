// UnrealEd_0480000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct X_
{
	void DoIt(int a); /* 0x004190f0 */
};

extern X_ *g_02663d88;
// @baa 0x00488c90
unsigned char sub_00488c90(int a)
{
	if (g_02663d88)
	{
		g_02663d88->DoIt(a);
		return 1;
	}
	return 0;
}

/* FaceFX Studio, the command system (FxCommand.h, FxCommandSyntax.h, FxCommandManager.h, FxInternalCommands.h;
 * FxString.h of the FaceFX SDK). */
typedef char FxChar;

typedef bool FxBool;

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

class FxCommandManager
{
public:
	static FxBool UnregisterCommand(const FxString& commandName);
};

// @baa 0x0048b8d0
/* Unregisters the commands FaceFX Studio comes with. */
void sub_0048b8d0()
{
	FxCommandManager::UnregisterCommand(FxString("developer"));
	FxCommandManager::UnregisterCommand(FxString("eatMem"));
	FxCommandManager::UnregisterCommand(FxString("undo"));
	FxCommandManager::UnregisterCommand(FxString("redo"));
	FxCommandManager::UnregisterCommand(FxString("flushUndo"));
	FxCommandManager::UnregisterCommand(FxString("exit"));
	FxCommandManager::UnregisterCommand(FxString("quit"));
	FxCommandManager::UnregisterCommand(FxString("print"));
	FxCommandManager::UnregisterCommand(FxString("warn"));
	FxCommandManager::UnregisterCommand(FxString("error"));
	FxCommandManager::UnregisterCommand(FxString("newActor"));
	FxCommandManager::UnregisterCommand(FxString("loadActor"));
	FxCommandManager::UnregisterCommand(FxString("closeActor"));
	FxCommandManager::UnregisterCommand(FxString("saveActor"));
	FxCommandManager::UnregisterCommand(FxString("rename"));
	FxCommandManager::UnregisterCommand(FxString("renameActor"));
	FxCommandManager::UnregisterCommand(FxString("select"));
	FxCommandManager::UnregisterCommand(FxString("currentTime"));
	FxCommandManager::UnregisterCommand(FxString("exec"));
	FxCommandManager::UnregisterCommand(FxString("nodeGroup"));
	FxCommandManager::UnregisterCommand(FxString("phonList"));
	FxCommandManager::UnregisterCommand(FxString("graph"));
	FxCommandManager::UnregisterCommand(FxString("map"));
	FxCommandManager::UnregisterCommand(FxString("batch"));
	FxCommandManager::UnregisterCommand(FxString("execBatch"));
	FxCommandManager::UnregisterCommand(FxString("key"));
	FxCommandManager::UnregisterCommand(FxString("animGroup"));
	FxCommandManager::UnregisterCommand(FxString("anim"));
	FxCommandManager::UnregisterCommand(FxString("curve"));
	FxCommandManager::UnregisterCommand(FxString("analyze"));
	FxCommandManager::UnregisterCommand(FxString("get"));
	FxCommandManager::UnregisterCommand(FxString("set"));
	FxCommandManager::UnregisterCommand(FxString("play"));
	FxCommandManager::UnregisterCommand(FxString("stop"));
	FxCommandManager::UnregisterCommand(FxString("exportLTF"));
	FxCommandManager::UnregisterCommand(FxString("template"));
	FxCommandManager::UnregisterCommand(FxString("animSet"));
	FxCommandManager::UnregisterCommand(FxString("cook"));
	FxCommandManager::UnregisterCommand(FxString("coordsys"));
	FxCommandManager::UnregisterCommand(FxString("setName"));
	FxCommandManager::UnregisterCommand(FxString("fgcollapse"));
	FxCommandManager::UnregisterCommand(FxString("ue3"));
}
