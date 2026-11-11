// BmGame_1620000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// The headers give FSpeechEvent no destructor to define; this declares it.
struct FSpeechEvent_ : public FSpeechEvent {
    ~FSpeechEvent_();
};

// @baa 0x01622dd0
FSpeechEvent_::~FSpeechEvent_()
{
}
