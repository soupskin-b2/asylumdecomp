// UnSkeletalAnim.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW	/* new(Array) T kept out of line, per T */
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add */
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00915f10
/* Array.h's placement new into a TArray, instantiated (out of line) for USkeletalMeshComponent's
 * Attachments: execAttachComponent does 'new(Attachments) FAttachment'. */
FAttachment* NewAttachment(TArray<FAttachment>& Attachments)
{
	return new(Attachments) FAttachment;
}

// @baa 0x00915fc0
/* Array.h's placement new into a TArray, instantiated (out of line) for FLOAT: TArray<FLOAT>'s
 * serializer (0092ee10, 'Ar << *::new(A) T' per element when loading) calls it. */
FLOAT* NewFloat(TArray<FLOAT>& Array)
{
	return new(Array) FLOAT;
}

// @baa 0x00915d70
/* Array.h's placement new into a TArray, instantiated (out of line) for a 12-byte element; nothing
 * in the exe calls this copy any more, FVector is the likely T. */
FVector* NewVector(TArray<FVector>& Array)
{
	return new(Array) FVector;
}
