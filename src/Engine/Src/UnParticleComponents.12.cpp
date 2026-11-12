// UnParticleComponents.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

// @baa 0x007ea680
/* TObjectIterator<UParticleSystemComponent> constructor, instantiated out of line. */
template TObjectIterator<UParticleSystemComponent>::TObjectIterator(UBOOL bOnlyGCedObjects);

// @baa 0x010684c0
/* TObjectIterator<UParticleSystem> constructor, instantiated out of line. */
template TObjectIterator<UParticleSystem>::TObjectIterator(UBOOL bOnlyGCedObjects);

// @baa 0x01068570
/* TObjectIterator<UParticleEmitter> constructor, instantiated out of line. */
template TObjectIterator<UParticleEmitter>::TObjectIterator(UBOOL bOnlyGCedObjects);
