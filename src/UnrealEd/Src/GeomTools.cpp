// GeomTools.cpp: 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_011727f0(); };

// @baa 0x011727f0
void C::sub_011727f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0117a320 { int a, b, c; C_0117a320(); };

// @baa 0x0117a320
C_0117a320::C_0117a320() : a(0), b(0), c(0) {}
