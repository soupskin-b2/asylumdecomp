// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UOnlineTitleFileDownloadMcp::*UOnlineTitleFileDownloadMcpNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineTitleFileDownloadMcpNativeInfo
{
	const TCHAR* Name;
	UOnlineTitleFileDownloadMcpNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UOnlineTitleFileDownloadMcp::name },
// @baa 0x01df7230
UOnlineTitleFileDownloadMcpNativeInfo GIpDrvUOnlineTitleFileDownloadMcpNatives[] =
{
	MAP_NATIVE(UOnlineTitleFileDownloadMcp, execClearDownloadedFiles)
	MAP_NATIVE(UOnlineTitleFileDownloadMcp, execGetTitleFileContents)
	MAP_NATIVE(UOnlineTitleFileDownloadMcp, execReadTitleFile)
	{ NULL, NULL }
};
