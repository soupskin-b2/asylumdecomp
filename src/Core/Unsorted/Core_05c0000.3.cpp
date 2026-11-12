// Core_05c0000.cpp (part 3 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x005c2960
wchar_t * sub_005c2960(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x100,param_2);
  return param_1;
}

// @baa 0x005c2dc0
wchar_t * sub_005c2dc0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x40,param_2);
  return param_1;
}

struct S
{
    char Pad[0xd8];
    unsigned Flags;

    int sub_005c3310(unsigned Mask);
};

// @baa 0x005c3310
int S::sub_005c3310(unsigned Mask)
{
    return (Flags & Mask) == Mask;
}

struct C
{
    INT field_00;
    INT field_04;
    INT field_08;

    C* sub_005c1980();
};

// @baa 0x005c1980
C* C::sub_005c1980()
{
    field_08 = 0;
    field_00 = 0;
    field_04 = 0;
    return this;
}

// @baa 0x005c18b0
int sub_005c18b0(int n, int v)
{
    int t = v ? -1 : 0;
    return (t + 2) * (n + 1) + 0x10;
}

struct C_005c2e50 {
    int f0;
    int f4;
    int f8;
    C_005c2e50& sub_005c2e50(const C_005c2e50& r);
};

// @baa 0x005c2e50
C_005c2e50& C_005c2e50::sub_005c2e50(const C_005c2e50& r)
{
    f0 = r.f0;
    f4 = r.f4;
    f8 = r.f8;
    return *this;
}

struct S005c86d0
{
	int sub_005c86d0();
};

// @baa 0x005c86d0
// Returns 4 * (5 * *(int*)(this + 0x08) + *(int*)(this + 0x24) / 32).
int S005c86d0::sub_005c86d0()
{
	int DataStart = *(int*)((char*)this + 8);
	int EntryCount = *(int*)((char*)this + 0x24);
	return (DataStart * 5 + EntryCount / 32) * 4;
}
