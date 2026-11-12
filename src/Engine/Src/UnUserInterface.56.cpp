// UnUserInterface.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00ddd070
int sub_00ddd070(int a0, int a1) { return a1; }

/* Kit gap: FUIRangeData's native methods aren't declared. */
struct FUIRangeData_ : public FUIRangeData
{
	UBOOL HasValue() const;
};

// @baa 0x00dde670
/* Whether any of the range's values has been set. */
UBOOL FUIRangeData_::HasValue() const
{
	return CurrentValue != 0.f || MinValue != 0.f || MaxValue != 0.f || NudgeValue != 0.f || bIntRange;
}

struct SubObj_00569780
{
    int _A;
    int _B;
    int _C;
    int _D;
    int _E;
    int _Limit;
};

struct UIHolder_00569780
{
    int _Flags[2];
    SubObj_00569780* _Parent;
    int _Value;
    __declspec(noinline) int sub_00569780();
};

// @baa 0x00569780
int UIHolder_00569780::sub_00569780()
{
    return (_Value < _Parent->_Limit) ? 12 : -1;
}

int s0056()
{
    UIHolder_00569780 h;
    return h.sub_00569780();
}
