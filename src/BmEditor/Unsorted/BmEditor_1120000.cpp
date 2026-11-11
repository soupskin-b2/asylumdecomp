// BmEditor_1120000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __cdecl sub_0112ec10(int);
struct S {
    void sub_0112f0a0(int arg1);
};

// @baa 0x0112f0a0
void __thiscall S::sub_0112f0a0(int arg1)
{
    sub_0112ec10(1);
}

int sub_0112ec10(int arg1);
// @baa 0x0112f0b0
void __stdcall sub_0112f0b0(int arg1)
{
	sub_0112ec10(0);
}

void sub_007da560();
// @baa 0x0112f0c0
void sub_0112f0c0(void) { sub_007da560(); }
