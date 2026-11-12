// GFx_19c0000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S019CA970
{
	int  Data0;
	int  Data4;
	int  Data8;
	int  DataC;
	int  Value;

	__declspec(noinline) S019CA970* sub_019ca970(int NewValue)
	{
		Data0 = 0;
		Data4 = 0;
		Data8 = 0;
		DataC = 0;
		Value = NewValue;
		return this;
	}
};

// @baa 0x019ca970
void s019c()
{
	S019CA970 s;
	s.sub_019ca970(3);
}

// 019c9f10: thiscall, ret 4. Loads this vtable, takes slot 0x24 (virtual #9) and
// invokes it with (int*, int). No callers and no known class, so the enclosing
// class and its virtual slot are reconstructed below.
struct FSlot9Target_
{
    // The class exposes at least ten virtuals; the one at offset 0x24 is used here.
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual void v4() {}
    virtual void v5() {}
    virtual void v6() {}
    virtual void v7() {}
    virtual void v8() {}
    virtual void Slot0x24(int* Value, int Count) {}

    void sub_019c9f10(int InValue)
    {
        int Value = InValue;
        this->Slot0x24(&Value, 4);
    }
};

static FSlot9Target_ g_019c9f10;
// @baa 0x019c9f10
void sub_019c9f00()
{
    g_019c9f10.sub_019c9f10(0);
}

// A Scaleform text/formatting object. Its formatter takes four ints (thiscall,
// ret 16). The forwarder at 0x019ca140 forwards its three arguments and forces
// the last flag on (the sibling at 0x018e8910 does the same call with 0).
struct GFxText_
{
	void sub_019314a0( INT A, INT B, INT C, INT D ); /* 0x019314a0 */
	void sub_019ca140( INT A, INT B, INT C );        /* 0x019ca140 */
};

// @baa 0x019ca140
void GFxText_::sub_019ca140( INT A, INT B, INT C )
{
	sub_019314a0( A, B, C, 1 );
}

// Virtual base object reached through an object member; its method sits at
// vtable offset 0x14.
struct GFxObject_
{
    virtual ~GFxObject_() {}
    virtual void M0() {}
    virtual void M1() {}
    virtual void M2() {}
    virtual void M2b() {}
    virtual void M3(void *A, INT B) {}   // 0x14
};

struct GFxView_
{
    void *   Value;      // 0x0
    GFxObject_ *Obj;     // 0x4

    void sub_019ca0a0(INT Arg1);
};

// @baa 0x019ca0a0
void GFxView_::sub_019ca0a0(INT Arg1)
{
    Obj->M3(Value, Arg1);
}
