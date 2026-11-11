// LaunchOpenAutomate.cpp (part 2 of 3): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef struct OA_BUF { char pad[128]; } OA_BUF;

OA_BUF *sub_01a38732(void);
int sub_01a37ef2(char *f, const char *fmt, const char *s);
int g_027d4dec;
void (*g_027d4da4)(void);
// @baa 0x004012b0
void sub_004012b0(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4da4)
        return g_027d4da4();
    return;
}

void (*g_027d4da8)(void);
// @baa 0x004012e0
void sub_004012e0(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4da8)
        return g_027d4da8();
    return;
}

void (*g_027d4db0)(void);
// @baa 0x00401340
void sub_00401340(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4db0)
        return g_027d4db0();
    return;
}

void (*g_027d4db4)(void);
// @baa 0x004013c0
void sub_004013c0(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4db4)
        return g_027d4db4();
    return;
}

void (*g_027d4dbc)(void);
// @baa 0x00401430
void sub_00401430(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4dbc)
        return g_027d4dbc();
    return;
}
