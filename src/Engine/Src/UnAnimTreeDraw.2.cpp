// UnAnimTreeDraw.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AnimNodeBlendNative : UAnimNodeBlend
{
    void sub_00c54040(FLOAT BlendTarget, FLOAT BlendTime);
};

// @baa 0x00c90580
void UAnimNodeBlend::execSetBlendTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(BlendTarget);
    P_GET_FLOAT(BlendTime);
    P_FINISH;
    static_cast<AnimNodeBlendNative*>(this)->sub_00c54040(BlendTarget, BlendTime);
}
