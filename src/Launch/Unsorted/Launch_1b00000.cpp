// Launch_1b00000.cpp (part 1 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double fabs(double);
// @baa 0x01b03810
double sub_01b03810(double param_1)
{
    return fabs(param_1);
}
