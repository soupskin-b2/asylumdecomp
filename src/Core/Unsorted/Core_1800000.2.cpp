// Core_1800000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct sub_018041c0_C
{
	int sub_018041c0_a;
	int sub_018041c0_b;
	void (*sub_018041c0_fn)(sub_018041c0_C*);
};

struct sub_018041c0_T
{
	int sub_018041c0_a;
	int sub_018041c0_b;
	int sub_018041c0_c;
	sub_018041c0_C* sub_018041c0_C;
};

// @baa 0x018041c0
void sub_018041c0(sub_018041c0_T* T)
{
	sub_018041c0_C* C = T->sub_018041c0_C;
	if (C != 0 && C->sub_018041c0_fn != 0)
		C->sub_018041c0_fn(C);
}
