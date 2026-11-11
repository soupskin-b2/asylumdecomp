// fmod_eventsystemi.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023dfb94[];
struct MemoryNode_ { MemoryNode_ *Next; MemoryNode_ *Prev; MemoryNode_ *Tail; };

struct FMOD_MemoryFSB { void *m_VTable; MemoryNode_ m_ListHead; FMOD_MemoryFSB *sub_017de430(); };

// @baa 0x017de430
FMOD_MemoryFSB *FMOD_MemoryFSB::sub_017de430()
{
    MemoryNode_ *Head = &m_ListHead;
    Head->Next = Head;
    Head->Prev = Head;
    Head->Tail = 0;
    m_VTable = g_023dfb94;
    return this;
}
