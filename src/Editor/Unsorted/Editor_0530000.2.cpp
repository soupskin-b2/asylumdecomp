// Editor_0530000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// A global object pointer whose vtable is read at offset 0 and whose virtual
// method at slot 2 (offset 8) is invoked, after which the global pointer is
// reset to a fixed static object.
struct FPropagateObject
{
    virtual void sub_0053d2a0_0();
    virtual void sub_0053d2a0_1();
    virtual void sub_0053d2a0_2();
};

extern FPropagateObject* g_025d5718;
extern FPropagateObject g_025d5814;
// @baa 0x0053d2a0
void sub_0053d2a0()
{
    g_025d5718->sub_0053d2a0_2();
    g_025d5718 = &g_025d5814;
}
