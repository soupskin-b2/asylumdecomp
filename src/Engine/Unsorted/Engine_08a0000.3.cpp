// Engine_08a0000.cpp (part 3 of 4): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x008ae950
template AActor* Cast<AActor>(UObject* Src);

// @baa 0x008ae9b0
template UInterpData* Cast<UInterpData>(UObject* Src);

// @baa 0x008aea40
template AProjectile* Cast<AProjectile>(UObject* Src);

// @baa 0x008aeb10
template AEmitter* Cast<AEmitter>(UObject* Src);

// @baa 0x008aeb80
template AController* Cast<AController>(UObject* Src);

// @baa 0x008aebe0
template USoundNodeWave* Cast<USoundNodeWave>(UObject* Src);

// @baa 0x008aec40
template AInventory* Cast<AInventory>(UObject* Src);

// @baa 0x008aeca0
template ASkeletalMeshActor* Cast<ASkeletalMeshActor>(UObject* Src);

// @baa 0x008aed00
template AAnimatedCamera* Cast<AAnimatedCamera>(UObject* Src);
