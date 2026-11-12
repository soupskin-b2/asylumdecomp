// Engine_06e0000.cpp (part 14 of 14): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_006ecd60(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x006ecd60
undefined4 C::sub_006ecd60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006e13c0
{
	int x;
	int y;
	float z;

	C_006e13c0& sub_006e13c0(const C_006e13c0& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}
};

static C_006e13c0 g_006e13c0;
// @baa 0x006e13c0
void sub_006e13c1(C_006e13c0& a)
{
	g_006e13c0.sub_006e13c0(a);
}

struct S006e13e0 {
    int a;
    int b;
    int c;
    S006e13e0& sub_006e13e0(const S006e13e0& other);
};

// @baa 0x006e13e0
S006e13e0& S006e13e0::sub_006e13e0(const S006e13e0& other)
{
    a = other.a;
    b = other.b;
    c = other.c;
    return *this;
}

static void caller()
{
    S006e13e0 x, y;
    x.sub_006e13e0(y);
}

struct C_006e1400
{
	int a;
	int b;
	int c;

	C_006e1400& sub_006e1400(const C_006e1400& Other);
};

// @baa 0x006e1400
C_006e1400& C_006e1400::sub_006e1400(const C_006e1400& Other)
{
	a = Other.a;
	b = Other.b;
	c = Other.c;
	return *this;
}

void sub_006e1400_ref(C_006e1400& Self, const C_006e1400& Other)
{
	Self.sub_006e1400(Other);
}
