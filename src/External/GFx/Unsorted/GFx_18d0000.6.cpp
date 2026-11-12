// GFx_18d0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Target, long Value);
struct C
{
    long Counter;

    INT sub_018d4840(INT Value);
};

// @baa 0x018d4840
INT C::sub_018d4840(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}

// @baa 0x018d5ff0
INT __stdcall sub_018d5ff0(UINT Value)
{
    return (Value >> 6) ^ Value;
}

struct C_018d8780
{
    INT Value_00;
    char pad_04[0x18];
    INT Value_1c;
    INT Value_20;
    INT Value_24;

    C_018d8780* sub_018d8780();
};

// @baa 0x018d8780
C_018d8780* C_018d8780::sub_018d8780()
{
    Value_1c = 0;
    Value_20 = 0;
    Value_24 = 0;
    return this;
}

struct C_018de3c0
{
    float Value_00;
    float Value_04;
    float Value_08;

    float sub_018de3c0();
};

// @baa 0x018de3c0
float C_018de3c0::sub_018de3c0()
{
    return Value_08 - Value_00;
}

// 0x018d6160 — copy-assign a 12-byte struct, returns *this
struct FCopyable
{
	DWORD Value0;
	DWORD Value1;
	DWORD Value2;

	FCopyable& operator=(const FCopyable& Other);
};

// @baa 0x018d6160
FCopyable& FCopyable::operator=(const FCopyable& Other)
{
	Value0 = Other.Value0;
	Value1 = Other.Value1;
	Value2 = Other.Value2;
	return *this;
}

void __stdcall sub_018d7170(void* Object);
void __fastcall sub_018d86f0(void* Object);
struct S_018d8750
{
	int Unknown_00;
	int Unknown_04;
	int Unknown_08;
	int Unknown_0C;
	int field10[4];
	int* field20;

	void sub_018d8750();
};

// @baa 0x018d8750
void S_018d8750::sub_018d8750()
{
	if (field20 != 0)
	{
		sub_018d7170(field20);
	}
	sub_018d86f0(&field10);
}
