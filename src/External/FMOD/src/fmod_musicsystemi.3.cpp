// fmod_musicsystemi.cpp (part 3 of 3): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_017f7fc0 { void sub_017f7c70(); };

struct C { char pad[32]; M_017f7fc0 m; void sub_017f7fc0(); };

// @baa 0x017f7fc0
void C::sub_017f7fc0() { m.sub_017f7c70(); }

struct M_017f7fd0 { void sub_017f7c80(); };

struct C_017f7fd0 { char pad[32]; M_017f7fd0 m; void sub_017f7fd0(); };

// @baa 0x017f7fd0
void C_017f7fd0::sub_017f7fd0() { m.sub_017f7c80(); }
