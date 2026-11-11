// PhysX_1a50000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_024088e4[];
struct C { void sub_01a55e60(void); };

// @baa 0x01a55e60
void C::sub_01a55e60(void) { *(int*)((char*)this + 0) = (int)g_024088e4; }

struct C_01a56ef0 { void sub_01a56ef0(void); };

// @baa 0x01a56ef0
void C_01a56ef0::sub_01a56ef0(void) { *(int*)((char*)this + 0) = (int)g_024088e4; }

extern char g_0240918c[];
struct C_01a57c10 { void sub_01a57c10(void); };

// @baa 0x01a57c10
void C_01a57c10::sub_01a57c10(void) { *(int*)((char*)this + 0) = (int)g_0240918c; }
