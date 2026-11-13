// Editor_1020000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01023c40();
// @baa 0x0102ab80
void sub_0102ab80(void) { sub_01023c40(); }

// Passes the sub-object at +0xc to the caller's argument as `this`.
struct FTarget_
{
	void Method(void* Sub); /* 0x006397c0 */
};

struct FHolder_
{
	char Header[0xc];
	void* Inner; /* 0xc */

	void Dispatch(FTarget_* Target);
};

// @baa 0x01027210
void FHolder_::Dispatch(FTarget_* Target)
{
	Target->Method(&Inner);
}

// Passes the sub-object at +0x18 to the caller's argument as `this`.
struct FTarget_01027220
{
	void Method(void* Sub); /* 0x006397c0 */
};

struct FHolder_01027220
{
	char Header[0x18];
	void* Inner; /* 0x18 */

	void Dispatch(FTarget_01027220* Target);
};

// @baa 0x01027220
void FHolder_01027220::Dispatch(FTarget_01027220* Target)
{
	Target->Method(&Inner);
}

// Passes the sub-object at +0x24 to the caller's argument as `this`.
struct FTarget_01027230
{
	void Method(void* Sub); /* 0x006397c0 */
};

struct FHolder_01027230
{
	char Header[0x24];
	void* Inner; /* 0x24 */

	void Dispatch(FTarget_01027230* Target);
};

// @baa 0x01027230
void FHolder_01027230::Dispatch(FTarget_01027230* Target)
{
	Target->Method(&Inner);
}
