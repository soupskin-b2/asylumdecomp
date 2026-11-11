// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UAudioComponent's play/stop side of the ambient sound (00791770 has no name in the headers). */
struct UAudioComponent_ : public UAudioComponent {
	void sub_00791770();
};

/* AActor's vtable slot 0x314 (the headers guess `virtual FLOAT vf_314(INT)`; this override
 * returns nothing, so it is declared here as void under its address). */
struct AAmbientSound_ : public AAmbientSound {
	void sub_0076cd90(INT Param);
	void sub_00791ad0(INT Param);
};

// @baa 0x00791ad0
void AAmbientSound_::sub_00791ad0(INT Param)
{
	sub_0076cd90(Param);
	if (bAutoPlay && AudioComponent && !AudioComponent->bWasPlaying)
	{
		((UAudioComponent_*)AudioComponent)->sub_00791770();
		bIsPlaying = TRUE;
	}
}
