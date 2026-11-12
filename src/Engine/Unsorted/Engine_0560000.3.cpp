// Engine_0560000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long volatile* Value);
// @baa 0x00565f70
void sub_00565f70(long volatile* Value)
{
    InterlockedIncrement(Value);
}

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile* Value);
// @baa 0x00565f80
void sub_00565f80(long volatile* Value)
{
    InterlockedDecrement(Value);
}

struct C
{
    char pad_00[0x54];
    float Value;

    void sub_00566190(float In);
};

// @baa 0x00566190
void C::sub_00566190(float In)
{
    Value = In;
}

struct F12ByteStruct
{
    INT A;
    INT B;
    INT C;

    F12ByteStruct& operator=(const F12ByteStruct& Other);
};

// @baa 0x0056a090
F12ByteStruct& F12ByteStruct::operator=(const F12ByteStruct& Other)
{
    A = Other.A;
    B = Other.B;
    C = Other.C;
    return *this;
}

struct sub_0056a030_T
{
	INT A;
	INT B;
	INT C;

	sub_0056a030_T& sub_0056a030(const sub_0056a030_T& Other);
};

// @baa 0x0056a030
sub_0056a030_T& sub_0056a030_T::sub_0056a030(const sub_0056a030_T& Other)
{
	A = Other.A;
	B = Other.B;
	C = Other.C;
	return *this;
}

void sub_0056a031()
{
	sub_0056a030_T X, Y;
	X.sub_0056a030(Y);
}
