// FCollada_1820000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

/* The container part of FCDGeometryPolygonsInput: an object list (first, last, count and a pointer
 * to the count) kept at the head of the struct. Its own ctor runs first and the derived ctor then
 * stamps the vtable over the pointer, so the derived ctor leaves the vtable store last. */
struct sub_01825140_Base {
    INT First;
    INT Last;
    INT Count;
    INT* CountPtr;
    sub_01825140_Base() { First = 0; Last = 0; Count = 0; CountPtr = &Count; }
};

class sub_01825140 : public sub_01825140_Base {
public:
    sub_01825140();
    virtual ~sub_01825140();
};

// @baa 0x01825140
sub_01825140::sub_01825140() {}

sub_01825140::~sub_01825140() {}
