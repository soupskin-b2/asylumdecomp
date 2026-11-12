// FCollada_1830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

/* UE3's object-list header, kept at the head of FCDEmitter: first and last object
 * indices, a count and a pointer to that count (so native code can see changes). */
struct FUObjectContainer {
    INT First;
    INT Last;
    INT Count;
    INT* CountPtr;
    FUObjectContainer() { First = 0; Last = 0; Count = 0; CountPtr = &Count; }
};

/* FCDEmitter's own ctor: the base ctor fills the object list first, then the
 * derived ctor runs empty and leaves the vtable store last. */
class FCDEmitter : public FUObjectContainer {
public:
    FCDEmitter();
    virtual ~FCDEmitter();
};

FCDEmitter::FCDEmitter() {}

// @baa 0x01837f20
FCDEmitter::~FCDEmitter() {}
