// FMOD_1a30000.cpp (part 1 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef int (__cdecl *InvalidParameterHandler)(const char *expression, const char *filename, unsigned int lineno, const char *functionname, unsigned int errorcode);

extern "C" InvalidParameterHandler __declspec(dllimport) _set_invalid_parameter_handler(InvalidParameterHandler newhandler);
// @baa 0x01a37ee0
InvalidParameterHandler __cdecl sub_01a37ee0(InvalidParameterHandler newhandler)
{
    return _set_invalid_parameter_handler(newhandler);
}
