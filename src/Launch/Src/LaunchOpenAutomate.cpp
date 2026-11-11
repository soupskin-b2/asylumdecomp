// LaunchOpenAutomate.cpp (part 1 of 3): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct OA_BUF;
struct OA_BUF * __cdecl sub_01a38732(void);
int __cdecl sub_01a37ef2(char *, char const *, char const *);
extern int g_027d4dec;
typedef int (__cdecl *DispatchFn)(void);

extern DispatchFn g_027d4da0;
// @baa 0x00401240
int __cdecl sub_00401240(void)
{
    if (g_027d4dec == 0)
    {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return 0;
    }
    if (g_027d4da0 == 0)
        return 0;
    return g_027d4da0();
}

extern "C" char* _iob_func(void);
extern "C" int fprintf(char* stream, const char* fmt, ...);
typedef void (*OA_Fn)(void);

extern "C" OA_Fn g_027d4dac;
// @baa 0x00401310
void sub_00401310()
{
    if (!g_027d4dec)
    {
        fprintf(_iob_func() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (!g_027d4dac)
        return;
    g_027d4dac();
}

extern DispatchFn g_027d4dc4;
// @baa 0x00401370
int __cdecl sub_00401370(void)
{
    if (g_027d4dec == 0)
    {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return 0;
    }
    if (g_027d4dc4 == 0)
        return 0;
    return g_027d4dc4();
}
