// BmSaveGameMisc.cpp: 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_017222f0();
// @baa 0x01723020
void sub_01723020(void) { sub_017222f0(); }

void sub_01722350();
// @baa 0x01723030
void sub_01723030(void) { sub_01722350(); }

struct C { C* sub_01723040(void); };

// @baa 0x01723040
C* C::sub_01723040(void) { return this; }
