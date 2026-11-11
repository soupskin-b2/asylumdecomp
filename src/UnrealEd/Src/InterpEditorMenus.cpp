// InterpEditorMenus.cpp: 7 functions
// Placed here by: callers 4, neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct T_012f1770;
// @baa 0x012f1770
template INT TArray<T_012f1770*>::RemoveItem(T_012f1770* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_012f17f0(); };

// @baa 0x012f17f0
void C::sub_012f17f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012f1850 { void* Data; int Num; int Max; void sub_012f1850(); };

// @baa 0x012f1850
void C_012f1850::sub_012f1850() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012f18b0 { void* Data; int Num; int Max; void sub_012f18b0(); };

// @baa 0x012f18b0
void C_012f18b0::sub_012f18b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01305fd0 { void sub_012fded0(); void sub_01305fd0(int); };

// @baa 0x01305fd0
void C_01305fd0::sub_01305fd0(int) { sub_012fded0(); }

struct C_0130bbb0 { void sub_01307200(); void sub_0130bbb0(int); };

// @baa 0x0130bbb0
void C_0130bbb0::sub_0130bbb0(int) { sub_01307200(); }

struct C_0130bbc0 { void sub_01307e80(); void sub_0130bbc0(int); };

// @baa 0x0130bbc0
void C_0130bbc0::sub_0130bbc0(int) { sub_01307e80(); }
