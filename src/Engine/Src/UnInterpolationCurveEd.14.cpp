// UnInterpolationCurveEd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern template AActor* Cast<AActor>(UObject* Src);
/* Kit gap: UnMath.h's FRotationTranslationMatrix isn't declared; this build has its constructor out of line. */
struct FRotationTranslationMatrix : public FMatrix
{
	FRotationTranslationMatrix(const FRotator& Rot, const FVector& Origin);
};

// @baa 0x00d22080
/* Move and turn an actor by a transform (its current location and rotation, then the given matrix). */
void sub_00d22080(UObject* Object, const FMatrix& Transform)
{
	AActor* Actor = Cast<AActor>(Object);
	if (Actor)
	{
		FRotationTranslationMatrix ActorTM(Actor->Rotation, Actor->Location);
		FMatrix NewTM = ActorTM * Transform;
		Actor->Location = NewTM.GetOrigin();
		Actor->Rotation = NewTM.Rotator();
	}
}
