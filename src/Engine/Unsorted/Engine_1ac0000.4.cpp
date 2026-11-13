// Engine_1ac0000.cpp (part 4 of 4): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca4f8;
extern "C" C* __cdecl sub_01ac22b0(void);
// @baa 0x01ac2ee0
short __cdecl sub_01ac2ee0(void)
{
    if (g_027ca4f8 == 0)
        g_027ca4f8 = sub_01ac22b0();
    return g_027ca4f8->sub_01ab5e50();
}

extern C* g_027ca500;
extern "C" C* __cdecl sub_01ac60b0(void);
// @baa 0x01ac61e0
short __cdecl sub_01ac61e0(void)
{
    if (g_027ca500 == 0)
        g_027ca500 = sub_01ac60b0();
    return g_027ca500->sub_01ab5e50();
}

// Forwards the value to the target object's sub_01ac0e70.
struct FTarget_01ac1660
{
	void sub_01ac0e70(void* Value);
};

// @baa 0x01ac1660
void sub_01ac1660(void* Value, FTarget_01ac1660* Target)
{
	Target->sub_01ac0e70(Value);
}

// Forwards the value to the target object's sub_01ac7770.
struct FTarget_01ac7b30
{
	void sub_01ac7770(void* Value);
};

// @baa 0x01ac7b30
void sub_01ac7b30(void* Value, FTarget_01ac7b30* Target)
{
	Target->sub_01ac7770(Value);
}

// Forwards the value to the target object's sub_01ac8450.
struct FTarget_01ac88f0
{
	void sub_01ac8450(void* Value);
};

// @baa 0x01ac88f0
void sub_01ac88f0(void* Value, FTarget_01ac88f0* Target)
{
	Target->sub_01ac8450(Value);
}
