// RPawnPlayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Native.h"
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
	__forceinline const T& ConstAt(INT i) const
	{
#line 566 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

/* Kit gaps: FString::operator* (plain inline in UnString.h), FString::Printf (this unit's copy at 0x005495f0)
 * and GLog (0x025d53e8). */
struct FString_ : public FString
{
	const TCHAR* operator*() const
	{
		return Num() ? &((const TArrayAt_<TCHAR>*)this)->ConstAt(0) : TEXT("");
	}
	static FString Printf(const TCHAR* Fmt, ...);
};

extern FOutputDevice* g_025d53e8;
// @baa 0x01699eb0
	/* GLog */
/* Forwards the Trioviz (stereoscopic 3D) setting to the engine's console command. */
void ARGameInfo::SetTrioviz(const FString& Value)
{
	FString Command;
	Command = FString_::Printf(TEXT("Trioviz %s"), *(const FString_&)Value);
	GEngine->Exec(*(const FString_&)Command, *g_025d53e8);
}

#line 50 "candidate.cpp"
