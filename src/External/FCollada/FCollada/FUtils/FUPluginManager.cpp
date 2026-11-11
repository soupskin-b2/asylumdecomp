// FUPluginManager.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_01877de0 { void sub_01878aa0(); };

struct C { char pad[32]; M_01877de0 m; void sub_01877de0(); };

// @baa 0x01877de0
void C::sub_01877de0() { m.sub_01878aa0(); }
