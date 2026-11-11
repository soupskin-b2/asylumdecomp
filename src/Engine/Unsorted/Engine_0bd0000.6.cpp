// Engine_0bd0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct AFoliageFactory_ : public AFoliageFactory
{
    void sub_00784510(UINT Param);
    void sub_00bd52b0();
    void sub_00bd59c0(UINT Param);
};

// @baa 0x00bd59c0
void AFoliageFactory_::sub_00bd59c0(UINT Param)
{
    sub_00784510(Param);
    sub_00bd52b0();
}
