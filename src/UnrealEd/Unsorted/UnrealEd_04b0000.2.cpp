// UnrealEd_04b0000.cpp (part 2 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02663cf4;
extern "C" C* __cdecl sub_004a5a10(void);
// @baa 0x004b21f0
short __cdecl sub_004b21f0(void)
{
    if (g_02663cf4 == 0)
        g_02663cf4 = sub_004a5a10();
    return g_02663cf4->sub_01ab5e50();
}

extern C* g_02663d10;
extern "C" C* __cdecl sub_004a6f10(void);
// @baa 0x004b2bc0
short __cdecl sub_004b2bc0(void)
{
    if (g_02663d10 == 0)
        g_02663d10 = sub_004a6f10();
    return g_02663d10->sub_01ab5e50();
}

extern C* g_02663d74;
extern "C" C* __cdecl sub_004ada20(void);
// @baa 0x004b6110
short __cdecl sub_004b6110(void)
{
    if (g_02663d74 == 0)
        g_02663d74 = sub_004ada20();
    return g_02663d74->sub_01ab5e50();
}

extern C* g_02663d48;
extern "C" C* __cdecl sub_004ab950(void);
// @baa 0x004b6170
short __cdecl sub_004b6170(void)
{
    if (g_02663d48 == 0)
        g_02663d48 = sub_004ab950();
    return g_02663d48->sub_01ab5e50();
}

extern C* g_02663d40;
extern "C" C* __cdecl sub_004ab350(void);
// @baa 0x004b61d0
short __cdecl sub_004b61d0(void)
{
    if (g_02663d40 == 0)
        g_02663d40 = sub_004ab350();
    return g_02663d40->sub_01ab5e50();
}

extern C* g_02663d7c;
extern "C" C* __cdecl sub_004ae720(void);
// @baa 0x004b6230
short __cdecl sub_004b6230(void)
{
    if (g_02663d7c == 0)
        g_02663d7c = sub_004ae720();
    return g_02663d7c->sub_01ab5e50();
}

extern C* g_02663ce0;
extern "C" C* __cdecl sub_004b2210(void);
// @baa 0x004b7e50
short __cdecl sub_004b7e50(void)
{
    if (g_02663ce0 == 0)
        g_02663ce0 = sub_004b2210();
    return g_02663ce0->sub_01ab5e50();
}

extern C* g_02663d30;
extern "C" C* __cdecl sub_004b3d80(void);
// @baa 0x004b8880
short __cdecl sub_004b8880(void)
{
    if (g_02663d30 == 0)
        g_02663d30 = sub_004b3d80();
    return g_02663d30->sub_01ab5e50();
}

struct C_004ba8a0
{
    char pad_00[0x24];
    float Value;

    void sub_004ba8a0(float In);
};

// @baa 0x004ba8a0
void C_004ba8a0::sub_004ba8a0(float In)
{
    Value = In;
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

// @baa 0x004b22a0
FxCommandSyntax sub_004b22a0()
{
	FxCommandSyntax newSyntax;
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-a", "-add", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-r", "-remove", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-gr", "-group", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-n", "-name", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-mv", "-move", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-cp", "-copy", CAT_Flag));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-fr", "-from", CAT_String));
	newSyntax.AddArgDesc(FxCommandArgumentDesc("-to", "-to", CAT_String));
	return newSyntax;
}

typedef bool FxBool;

class FxClass;
class FxObject;
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
class FxCommandArgumentDesc;
class FxCommandSyntax_004b88a0
{
public:
	~FxCommandSyntax_004b88a0();

private:
	/* FxArray<FxCommandArgumentDesc> */
	FxCommandArgumentDesc* _container;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

/* The base of the console commands; a command without arguments keeps this empty syntax. */
class FxCommand
{
public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCommandManager
{
public:
	static FxBool RegisterCommand(const FxString& commandName, const FxCommandSyntax_004b88a0& commandSyntax, FxObject* (*constructCommand)());
};

class FxDeveloperCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxDeveloperCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxEatMemCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxEatMemCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxUndoCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxUndoCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxRedoCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxRedoCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxFlushUndoCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxFlushUndoCommand, FxCommand);
};

class FxExitCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxExitCommand, FxCommand);
};

class FxPrintCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxPrintCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxWarnCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxWarnCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxErrorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxErrorCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxNewActorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxNewActorCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxLoadActorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxLoadActorCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCloseActorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCloseActorCommand, FxCommand);
};

class FxSaveActorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxSaveActorCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxRenameCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxRenameCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxRenameActorCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxRenameActorCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxSelectCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxSelectCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCurrentTimeCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCurrentTimeCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxExecCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxExecCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxNodeGroupCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxNodeGroupCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxPhonemeListCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxPhonemeListCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxGraphCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxGraphCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxMapCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxMapCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxBeginBatchCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxBeginBatchCommand, FxCommand);
};

class FxExecBatchCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxExecBatchCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxBatchCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxBatchCommand, FxCommand);
};

class FxKeyCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxKeyCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxAnimGroupCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxAnimGroupCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxAnimCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxAnimCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCurveCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCurveCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxAnalysisCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxAnalysisCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxGetCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxGetCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxSetCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxSetCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxPlayCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxPlayCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxStopCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxStopCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxExportLTFCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxExportLTFCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxTemplateCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxTemplateCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxAnimSetCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxAnimSetCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCookCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCookCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCoordSysCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCoordSysCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxSetNameCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxSetNameCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxCollapseFaceGraphCommand : public FxCommand
{
	FX_DECLARE_CLASS(FxCollapseFaceGraphCommand, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

class FxUE3Command : public FxCommand
{
	FX_DECLARE_CLASS(FxUE3Command, FxCommand);

public:
	static FxCommandSyntax_004b88a0 CreateSyntax();
};

// @baa 0x004b88a0
/* Registers the commands FaceFX Studio comes with. */
void sub_004b88a0()
{
	FX_REGISTER_CLASS(FxDeveloperCommand);
	FX_REGISTER_CLASS(FxEatMemCommand);
	FX_REGISTER_CLASS(FxUndoCommand);
	FX_REGISTER_CLASS(FxRedoCommand);
	FX_REGISTER_CLASS(FxFlushUndoCommand);
	FX_REGISTER_CLASS(FxExitCommand);
	FX_REGISTER_CLASS(FxPrintCommand);
	FX_REGISTER_CLASS(FxWarnCommand);
	FX_REGISTER_CLASS(FxErrorCommand);
	FX_REGISTER_CLASS(FxNewActorCommand);
	FX_REGISTER_CLASS(FxLoadActorCommand);
	FX_REGISTER_CLASS(FxCloseActorCommand);
	FX_REGISTER_CLASS(FxSaveActorCommand);
	FX_REGISTER_CLASS(FxRenameCommand);
	FX_REGISTER_CLASS(FxRenameActorCommand);
	FX_REGISTER_CLASS(FxSelectCommand);
	FX_REGISTER_CLASS(FxCurrentTimeCommand);
	FX_REGISTER_CLASS(FxExecCommand);
	FX_REGISTER_CLASS(FxNodeGroupCommand);
	FX_REGISTER_CLASS(FxPhonemeListCommand);
	FX_REGISTER_CLASS(FxGraphCommand);
	FX_REGISTER_CLASS(FxMapCommand);
	FX_REGISTER_CLASS(FxBeginBatchCommand);
	FX_REGISTER_CLASS(FxExecBatchCommand);
	FX_REGISTER_CLASS(FxBatchCommand);
	FX_REGISTER_CLASS(FxKeyCommand);
	FX_REGISTER_CLASS(FxAnimGroupCommand);
	FX_REGISTER_CLASS(FxAnimCommand);
	FX_REGISTER_CLASS(FxCurveCommand);
	FX_REGISTER_CLASS(FxAnalysisCommand);
	FX_REGISTER_CLASS(FxGetCommand);
	FX_REGISTER_CLASS(FxSetCommand);
	FX_REGISTER_CLASS(FxPlayCommand);
	FX_REGISTER_CLASS(FxStopCommand);
	FX_REGISTER_CLASS(FxExportLTFCommand);
	FX_REGISTER_CLASS(FxTemplateCommand);
	FX_REGISTER_CLASS(FxAnimSetCommand);
	FX_REGISTER_CLASS(FxCookCommand);
	FX_REGISTER_CLASS(FxCoordSysCommand);
	FX_REGISTER_CLASS(FxSetNameCommand);
	FX_REGISTER_CLASS(FxCollapseFaceGraphCommand);
	FX_REGISTER_CLASS(FxUE3Command);

	FxCommandManager::RegisterCommand(FxString("developer"), FxDeveloperCommand::CreateSyntax(), &FxDeveloperCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("eatMem"), FxEatMemCommand::CreateSyntax(), &FxEatMemCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("undo"), FxUndoCommand::CreateSyntax(), &FxUndoCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("redo"), FxRedoCommand::CreateSyntax(), &FxRedoCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("flushUndo"), FxFlushUndoCommand::CreateSyntax(), &FxFlushUndoCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("exit"), FxExitCommand::CreateSyntax(), &FxExitCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("quit"), FxExitCommand::CreateSyntax(), &FxExitCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("print"), FxPrintCommand::CreateSyntax(), &FxPrintCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("warn"), FxWarnCommand::CreateSyntax(), &FxWarnCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("error"), FxErrorCommand::CreateSyntax(), &FxErrorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("newActor"), FxNewActorCommand::CreateSyntax(), &FxNewActorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("loadActor"), FxLoadActorCommand::CreateSyntax(), &FxLoadActorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("closeActor"), FxCloseActorCommand::CreateSyntax(), &FxCloseActorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("saveActor"), FxSaveActorCommand::CreateSyntax(), &FxSaveActorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("rename"), FxRenameCommand::CreateSyntax(), &FxRenameCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("renameActor"), FxRenameActorCommand::CreateSyntax(), &FxRenameActorCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("select"), FxSelectCommand::CreateSyntax(), &FxSelectCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("currentTime"), FxCurrentTimeCommand::CreateSyntax(), &FxCurrentTimeCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("exec"), FxExecCommand::CreateSyntax(), &FxExecCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("nodeGroup"), FxNodeGroupCommand::CreateSyntax(), &FxNodeGroupCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("phonList"), FxPhonemeListCommand::CreateSyntax(), &FxPhonemeListCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("graph"), FxGraphCommand::CreateSyntax(), &FxGraphCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("map"), FxMapCommand::CreateSyntax(), &FxMapCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("batch"), FxBeginBatchCommand::CreateSyntax(), &FxBeginBatchCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("execBatch"), FxExecBatchCommand::CreateSyntax(), &FxExecBatchCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("key"), FxKeyCommand::CreateSyntax(), &FxKeyCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("animGroup"), FxAnimGroupCommand::CreateSyntax(), &FxAnimGroupCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("anim"), FxAnimCommand::CreateSyntax(), &FxAnimCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("curve"), FxCurveCommand::CreateSyntax(), &FxCurveCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("analyze"), FxAnalysisCommand::CreateSyntax(), &FxAnalysisCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("get"), FxGetCommand::CreateSyntax(), &FxGetCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("set"), FxSetCommand::CreateSyntax(), &FxSetCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("play"), FxPlayCommand::CreateSyntax(), &FxPlayCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("stop"), FxStopCommand::CreateSyntax(), &FxStopCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("exportLTF"), FxExportLTFCommand::CreateSyntax(), &FxExportLTFCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("template"), FxTemplateCommand::CreateSyntax(), &FxTemplateCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("animSet"), FxAnimSetCommand::CreateSyntax(), &FxAnimSetCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("cook"), FxCookCommand::CreateSyntax(), &FxCookCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("coordsys"), FxCoordSysCommand::CreateSyntax(), &FxCoordSysCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("setName"), FxSetNameCommand::CreateSyntax(), &FxSetNameCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("fgcollapse"), FxCollapseFaceGraphCommand::CreateSyntax(), &FxCollapseFaceGraphCommand::ConstructObject);
	FxCommandManager::RegisterCommand(FxString("ue3"), FxUE3Command::CreateSyntax(), &FxUE3Command::ConstructObject);
}
