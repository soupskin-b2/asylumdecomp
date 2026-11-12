// R3rdPersonCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gap: TArray::AddItem isn't declared; this build calls it out of line (TArray<FLOAT>::AddItem, 0x00547220). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x01694e50
/* Counts the counter-hit notifies in a strike animation and collects the times of those that should go to slow
 * motion (all but HitStrength 2; the HitStrength enum is left out of Enums.h). */
INT ARPawnPlayerCombat::GetNumberOfCounterHits(UAnimSequence* StrikeAnimSequence, TArray<FLOAT>& SlowMoHitTimes)
{
	INT NumHits = 0;
	if (StrikeAnimSequence)
	{
		for (INT i = 0; i < StrikeAnimSequence->Notifies.Num(); i++)
		{
			FAnimNotifyEvent& Event = StrikeAnimSequence->Notifies(i);
			URAnimNotify_CounterHit* CounterHit = Cast<URAnimNotify_CounterHit>(Event.Notify);
			if (CounterHit)
			{
				if (CounterHit->CounterInfo.HitStrength != 2)
				{
					((TArray_<FLOAT>&)SlowMoHitTimes).AddItem(Event.Time);
				}
				NumHits++;
			}
		}
	}
	return NumHits;
}
