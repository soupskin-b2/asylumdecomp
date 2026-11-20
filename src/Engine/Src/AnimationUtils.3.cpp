// AnimationUtils.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Builds the algorithm named in the ini (00c144e0). */
UAnimationCompressionAlgorithm* ConstructDefaultCompressionAlgorithm();
// @baa 0x00c14730
/* The default compression algorithm, made the first time it's asked for. */
UAnimationCompressionAlgorithm* FAnimationUtils::GetDefaultAnimationCompressionAlgorithm()
{
	static UAnimationCompressionAlgorithm* SAlgorithm = ConstructDefaultCompressionAlgorithm();
	return SAlgorithm;
}
