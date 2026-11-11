// D3D9ShaderCompiler.cpp (part 1 of 2): 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x005ec4d0
char * sub_005ec4d0(char * param_1, rsize_t param_2, char * param_3)
{
  strcpy_s(param_1,param_2,param_3);
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00ea2fe0(); };

// @baa 0x00ea2fe0
void C::sub_00ea2fe0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ea3040 { void* Data; int Num; int Max; void sub_00ea3040(); };

// @baa 0x00ea3040
void C_00ea3040::sub_00ea3040() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
