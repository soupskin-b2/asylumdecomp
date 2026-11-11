// fmod_musicengine.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// FMOD music engine's cue state table (External/FMOD/src/fmod_musicengine.cpp).
// The table owns the doubly-linked list of cue-state entries; while empty the
// head entry (at offset 8 in the object) is a sentinel that links to itself.
class CueStateTable
{
    int   m_NumCues;
    struct Entry
    {
        Entry* Prev;
        Entry* Next;
        int    State;
    };
    Entry m_Head;

public:
    CueStateTable();
    virtual ~CueStateTable();
};

// @baa 0x017f7ad0
CueStateTable::CueStateTable()
{
    Entry* head = &m_Head;
    head->Prev  = head;
    head->Next  = head;
    head->State = 0;
}
