// UnUserInterface.cpp: 2 functions
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
