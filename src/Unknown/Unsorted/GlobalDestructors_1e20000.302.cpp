// GlobalDestructors_1e20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C
{
    DWORD* sub_01b4b310(DWORD Value);
};

extern C g_027d331c;
extern DWORD sub_01e28570();
extern void __cdecl sub_01a37872(void*);
// @baa 0x01e21b70
void sub_01e21b70()
{
    g_027d331c.sub_01b4b310(0);
    sub_01a37872(&sub_01e28570);
}
