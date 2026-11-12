// LaunchOpenAutomate.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

/* OpenAutomate SDK (OpenAutomate.h) */
typedef int oaInt;

typedef wchar_t oaChar;

typedef enum { OA_CMD_EXIT = 0 } oaCommandType;

typedef struct oaCommandStruct
{
	oaInt StructSize;
	oaCommandType Type;
	const oaChar* BenchmarkName;
} oaCommand;

// @baa 0x004011d0
/* oaInitCommand: clear the command and stamp its size. */
void sub_004011d0(oaCommand* Command)
{
	memset(Command, 0, sizeof(oaCommand));
	Command->StructSize = sizeof(oaCommand);
}
