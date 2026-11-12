// Core_05a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Array.h"

/* Kit gap: FString has no operator* (UnString.h). */
class FString_ : public FString
{
public:
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

// @baa 0x005a5080
/* Script warning: reported through the frame, so it carries the script call stack. */
void UObject::execWarnInternal(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_FINISH;
	Stack.Logf(TEXT("%s"), *(const FString_&)S);
}

// @baa 0x005a4ed0
void UObject::execAsc(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(S);
	P_FINISH;
	*(INT*)Result = **(const FString_&)S;
}
