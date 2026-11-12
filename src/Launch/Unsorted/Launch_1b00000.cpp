// Launch_1b00000.cpp (part 1 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" double fabs(double);
// @baa 0x01b03810
double sub_01b03810(double param_1)
{
    return fabs(param_1);
}

struct Triple24_
{
	double A;
	double B;
	double C;
	Triple24_* sub_01b03850(const Triple24_* Other);
};

// @baa 0x01b03850
__declspec(noinline) Triple24_* Triple24_::sub_01b03850(const Triple24_* Other)
{
	A = Other->A;
	B = Other->B;
	C = Other->C;
	return this;
}

static Triple24_* s01b0(Triple24_* Self, Triple24_* Other)
{
	return Self->sub_01b03850(Other);
}
