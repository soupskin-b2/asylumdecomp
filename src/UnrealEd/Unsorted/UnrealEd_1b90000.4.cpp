// UnrealEd_1b90000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01b90ab0
{
    INT sub_01b90ab0(INT Value);
};

// @baa 0x01b90c20
INT sub_01b90c20(INT Value, S_01b90ab0* Object)
{
    return Object->sub_01b90ab0(Value);
}

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01b90140
{
    INT sub_01b90140(INT Value);
};

// @baa 0x01b90480
INT sub_01b90480(INT Value, S_01b90140* Object)
{
    return Object->sub_01b90140(Value);
}

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01b90290
{
    INT sub_01b90290(INT Value);
};

// @baa 0x01b90490
INT sub_01b90490(INT Value, S_01b90290* Object)
{
    return Object->sub_01b90290(Value);
}

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01b908f0
{
    INT sub_01b908f0(INT Value);
};

// @baa 0x01b90c10
INT sub_01b90c10(INT Value, S_01b908f0* Object)
{
    return Object->sub_01b908f0(Value);
}
