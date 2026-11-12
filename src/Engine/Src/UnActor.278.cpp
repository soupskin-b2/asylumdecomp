// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

extern FName g_026c4aac;
	/* ENGINE_CollisionChanged */
/* Cast<T> is out of line for this T in the exe (0075acd0) */
extern template UCylinderComponent* Cast<UCylinderComponent>(UObject* Src);
struct UCylinderComponent_ : public UCylinderComponent
{
	void SetCylinderSize(FLOAT NewRadius, FLOAT NewHeight); // 006dcdd0
};

struct AActor_ : public AActor
{
	void FindTouchingActors(); // 007814c0
	void SetCollisionSize(FLOAT NewRadius, FLOAT NewHeight); // 00781ad0

	/* the script event's generated glue (EngineClasses.h) */
	void eventCollisionChanged()
	{
		ProcessEvent(FindFunctionChecked(g_026c4aac), NULL);
	}
};

// @baa 0x00781ad0
void AActor_::SetCollisionSize(FLOAT NewRadius, FLOAT NewHeight)
{
	UCylinderComponent* CylComp = Cast<UCylinderComponent>(CollisionComponent);
	if (CylComp)
	{
		((UCylinderComponent_*)CylComp)->SetCylinderSize(NewRadius, NewHeight);
	}
	FindTouchingActors();
	eventCollisionChanged();
	bNetDirty = TRUE;
}
