// Launch_1ab0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01ab7380
{
    INT sub_01ab7380(INT Value);
};

// @baa 0x01ab7760
INT sub_01ab7760(INT Value, S_01ab7380* Object)
{
    return Object->sub_01ab7380(Value);
}

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01ab74e0
{
    INT sub_01ab74e0(INT Value);
};

// @baa 0x01ab7770
INT sub_01ab7770(INT Value, S_01ab74e0* Object)
{
    return Object->sub_01ab74e0(Value);
}
