// Engine_0b60000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AEmitter_ : public AEmitter
{
    /* SetTemplate (UnParticleComponents.cpp); Classes.h doesn't declare it. */
    void sub_00b65bf0(UParticleSystem* NewTemplate, UBOOL bDestroyOnFinish);
};

// @baa 0x00b65c90
void AEmitter::execSetTemplate(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UParticleSystem, NewTemplate);
    P_GET_UBOOL_OPTX(bDestroyOnFinish, FALSE);
    P_FINISH;
    ((AEmitter_*)this)->sub_00b65bf0(NewTemplate, bDestroyOnFinish);
}
