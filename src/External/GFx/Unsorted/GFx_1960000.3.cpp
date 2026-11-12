// GFx_1960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/GFx.h"

/* GASTextField's primary base, virtuals in vtable order.
 * Slot 0x40 (the 17th virtual) returns a pointer in eax. */
class Primary
{
public:
    virtual void v00() {}
    virtual void v04() {}
    virtual void v08() {}
    virtual void v0c() {}
    virtual void v10() {}
    virtual void v14() {}
    virtual void v18() {}
    virtual void v1c() {}
    virtual void v20() {}
    virtual void v24() {}
    virtual void v28() {}
    virtual void v2c() {}
    virtual void v30() {}
    virtual void v34() {}
    virtual void v38() {}
    virtual void v3c() {}
    virtual Primary* GetObject(); /* slot 0x40 */
};

/* secondary base (sits at offset 0x10 in GASTextField) */
class Secondary
{
public:
    BYTE sub_0196b1e0();
};

class GASTextField : public Primary, public Secondary
{
};

// @baa 0x0196b1e0
/* reports whether the byte at 0xe8 of the primary base's GetObject() result is clear */
BYTE Secondary::sub_0196b1e0()
{
    Primary* obj = reinterpret_cast<Primary*>((BYTE*)this - 0x10);
    Primary* result = obj->GetObject();
    return ((BYTE*)result)[0xe8] ? 0 : 1;
}
