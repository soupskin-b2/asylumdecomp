// BmGameClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C
{
	INT X;
	INT Y;
	INT Z;

	C * sub_0154b6b0(INT NewX, INT NewY, INT NewZ)
	{
		X = NewX;
		Y = NewY;
		Z = NewZ;
		return this;
	}
};

C g_0154b6b0C;
// @baa 0x0154b6b0
C * g_0154b6b0Use(C * c, INT X, INT Y, INT Z)
{
	return c->sub_0154b6b0(X, Y, Z);
}

extern FName g_026e33ec;
 /* StartScarecrow */
struct URSeqAct_ActivateScarecrow_ : public URSeqAct_ActivateScarecrow
{
    void eventStartScarecrow();
};

/* RSeqAct_ActivateScarecrow.StartScarecrow script event: the generated glue (no parameters). */
inline void URSeqAct_ActivateScarecrow_::eventStartScarecrow()
{
    ProcessEvent(FindFunctionChecked(g_026e33ec), NULL);
}

// @baa 0x0157e560
/* The action hands the work to script once its input fires. */
UBOOL URSeqAct_ActivateScarecrow::UpdateOp(FLOAT DeltaTime)
{
    if (InputLinks(0).bHasImpulse)
    {
        ((URSeqAct_ActivateScarecrow_*)this)->eventStartScarecrow();
    }
    return TRUE;
}
