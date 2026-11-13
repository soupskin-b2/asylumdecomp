// UnInterpolation.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

/* FString::operator* (UnString.h) and UObject::GetFullName/GetName (UnObjBas.h), which the headers lack. */

/* Core.h: appErrorf hands the message to an attached debugger first. This build has no debugger
 * support (appIsDebuggerPresent is constant), so only the temporaries' destructor flags are left
 * of that branch in the code. */
inline UBOOL appIsDebuggerPresent() { return FALSE; }

void __cdecl appFailAssertFuncDebug(const ANSICHAR* Expr, const ANSICHAR* File, INT Line, const TCHAR* Format = TEXT(""), ...);
#define appErrorf(...) ( (appIsDebuggerPresent() ? (appFailAssertFuncDebug("appErrorf", __FILE__, __LINE__, ##__VA_ARGS__), 1) : 1), GError->Logf(__VA_ARGS__) )
/* UnObjBas.h: the cast that must succeed (out of line per class in this build). */
template<class T> T* CastChecked(UObject* Src)
{
	if (!Src || !ObjectIsA(Src, T::StaticClass()))
	{
		appErrorf(TEXT("Cast of %s to %s failed"), Src ? *Src->GetFullName() : TEXT("NULL"), *((UObject*)T::StaticClass())->GetName());
	}
	return (T*)Src;
}

// @baa 0x00cfda00
template UInterpTrackInstToggle* CastChecked<UInterpTrackInstToggle>(UObject* Src);

// @baa 0x00cfdbd0
template UInterpTrackInstEvent* CastChecked<UInterpTrackInstEvent>(UObject* Src);

// @baa 0x00cfdda0
template UInterpTrackInstDirector* CastChecked<UInterpTrackInstDirector>(UObject* Src);

// @baa 0x00cfdf70
template UInterpTrackInstSlomo* CastChecked<UInterpTrackInstSlomo>(UObject* Src);

// @baa 0x00cfe140
template UInterpTrackInstAnimControl* CastChecked<UInterpTrackInstAnimControl>(UObject* Src);

// @baa 0x00d05de0
template UInterpTrackInstFloatProp* CastChecked<UInterpTrackInstFloatProp>(UObject* Src);

// @baa 0x00d06180
template UInterpTrackInstColorProp* CastChecked<UInterpTrackInstColorProp>(UObject* Src);

// @baa 0x00d05fb0
template UInterpTrackInstVectorProp* CastChecked<UInterpTrackInstVectorProp>(UObject* Src);

// @baa 0x00d0cd40
template UInterpTrackEvent* CastChecked<UInterpTrackEvent>(UObject* Src);

// @baa 0x00d0d010
template UInterpGroupInst* CastChecked<UInterpGroupInst>(UObject* Src);

// @baa 0x00d0d1e0
template UInterpGroup* CastChecked<UInterpGroup>(UObject* Src);

// @baa 0x00d16d60
template UInterpTrackFaceFX* CastChecked<UInterpTrackFaceFX>(UObject* Src);

// @baa 0x00d19a70
template USeqAct_Interp* CastChecked<USeqAct_Interp>(UObject* Src);
