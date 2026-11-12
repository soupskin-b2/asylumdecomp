// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* IMPLEMENT_COMPARE_CONSTREF(FAnimNotifyEvent, UnSkeletalAnim, ...) and its Sort instance (00921a00). */
class CompareUnSkeletalAnimFAnimNotifyEventConstRef;
template<class T, class CompareClass> void Sort(T* First, INT Num);
struct UAnimSequence_ : public UAnimSequence
{
	void SortNotifies();
};

// @baa 0x0092a7f0
/* Puts the notifies in time order. */
void UAnimSequence_::SortNotifies()
{
	Sort<FAnimNotifyEvent, CompareUnSkeletalAnimFAnimNotifyEventConstRef>(&Notifies(0), Notifies.Num());
}
