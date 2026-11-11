// RGlideKickCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARGlideKickCamera_ : public ARGlideKickCamera
{
	void sub_016b0a50(FLOAT);
};

// @baa 0x01709eb0
void ARGlideKickCamera::execUpdateCamera(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARGlideKickCamera_*)this)->sub_016b0a50(DeltaTime);
}
