// Engine_0c50000.cpp: 15 functions
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

// @baa 0x00c58350
template AAmbientSound* CastChecked<AAmbientSound>(UObject* Src);

// @baa 0x00c586f0
template AAmbientSoundSimple* CastChecked<AAmbientSoundSimple>(UObject* Src);

// @baa 0x00c58520
template AAmbientSoundMovable* CastChecked<AAmbientSoundMovable>(UObject* Src);

// @baa 0x00c588c0
template ADecalActorBase* CastChecked<ADecalActorBase>(UObject* Src);

// @baa 0x00c58c60
template UFogVolumeSphericalDensityComponent* CastChecked<UFogVolumeSphericalDensityComponent>(UObject* Src);

// @baa 0x00c58f70
template UStaticMesh* CastChecked<UStaticMesh>(UObject* Src);

// @baa 0x00c58a90
template ALensFlareSource* CastChecked<ALensFlareSource>(UObject* Src);

// @baa 0x00c59140
template APointLight* CastChecked<APointLight>(UObject* Src);

// @baa 0x00c59310
template ASpotLight* CastChecked<ASpotLight>(UObject* Src);

// @baa 0x00c594e0
template UApexDestructibleAsset* CastChecked<UApexDestructibleAsset>(UObject* Src);

// @baa 0x00c59a50
template USoundNodeWave* CastChecked<USoundNodeWave>(UObject* Src);

// @baa 0x00c596b0
template UPhysicsAsset* CastChecked<UPhysicsAsset>(UObject* Src);

// @baa 0x00c59880
template USoundCue* CastChecked<USoundCue>(UObject* Src);

// @baa 0x00c59c20
template ULensFlare* CastChecked<ULensFlare>(UObject* Src);

// @baa 0x00c59df0
template UMaterialInterface* CastChecked<UMaterialInterface>(UObject* Src);
