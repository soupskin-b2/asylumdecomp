// UnGame.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x007d92f0
/* the out-of-line Cast<UStaticMesh> instantiation */
template UStaticMesh* Cast<UStaticMesh>(UObject* Src);

// @baa 0x007d9390
/* the out-of-line Cast<UDemoPlayPendingLevel> instantiation */
template UDemoPlayPendingLevel* Cast<UDemoPlayPendingLevel>(UObject* Src);
