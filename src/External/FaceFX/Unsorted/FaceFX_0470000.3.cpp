// FaceFX_0470000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

// FaceFX's console log: formats the message into the shared buffer and sends it at level 0.
// (The FaceFX SDK headers aren't in the project, so its names here are unknown.)
extern char g_02618858[0x19000];
void sub_0046c030();
void sub_00477960(int Level, const char* Message);
// @baa 0x0047ceb0
void sub_0047ceb0(const char* format, ...)
{
    sub_0046c030();
    memset(g_02618858, 0, sizeof(g_02618858));
    va_list args;
    va_start(args, format);
    _vsnprintf_s(g_02618858, sizeof(g_02618858) - 1, _TRUNCATE, format, args);
    va_end(args);
    sub_00477960(0, g_02618858);
}
