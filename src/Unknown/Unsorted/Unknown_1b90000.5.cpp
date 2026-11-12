// Unknown_1b90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <stdarg.h>

extern "C" __declspec(dllimport) int _vswprintf(wchar_t* Buffer, int Count, ...);
// @baa 0x01b9cc00
int sub_01b9cc00(wchar_t* Buffer, int Count, ...)
{
    va_list ArgList;
    va_start(ArgList, Count);
    return _vswprintf(Buffer, Count, ArgList);
}
