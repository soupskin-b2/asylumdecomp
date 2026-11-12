// Engine_0d60000.cpp (part 3 of 3): 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006efb40(void);
// @baa 0x00d6ed10
undefined4 ULensFlare::sub_00d6ed10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006efb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct ANxCylindricalForceFieldCapsule_ : public ANxCylindricalForceFieldCapsule {
	void sub_00d6b740();
};

// @baa 0x00d6b740
void ANxCylindricalForceFieldCapsule_::sub_00d6b740()
{
	Kernel.Dummy = 0;
	ForceField.Dummy = 0;
	vf_238();
}

// @baa 0x00d6b7d0
void ANxGenericForceFieldBox::vf_354()
{
	ForceField.Dummy = 0;
	LinearKernel.Dummy = 0;
	vf_238();
}

// F00d6cb30: small record that counts a float's arrival, keeping its raw bits.
struct F00d6cb30Record {
    INT  Count;      // 0x0: number of values seen
    FLOAT RangeMin;  // 0x4
    FLOAT RangeMax;  // 0x8
    INT  LastValue;  // 0xc: bit pattern of the most recent value

    void sub_00d6cb30(FLOAT Value);
};

// @baa 0x00d6cb30
void F00d6cb30Record::sub_00d6cb30(FLOAT Value)
{
    FLOAT NewValue = Value;
    Count += 1;
    LastValue = *(INT*)&NewValue;
}

struct sub_00d6cb10_Cls {
    int Count;      // +0x00
    char pad[4];
    int Value;      // +0x08

    void sub_00d6cb10(float NewValue);
};

// @baa 0x00d6cb10
void sub_00d6cb10_Cls::sub_00d6cb10(float NewValue)
{
    float f = NewValue;
    ++Count;
    Value = *(int*)&f;
}

struct C {
    INT  Field0;   // 0x00
    float Pad1;    // 0x04
    float Pad2;    // 0x08
    float Pad3;    // 0x0c
    INT  Field4;   // 0x10

    void sub_00d6cb50(float Value);
};

// @baa 0x00d6cb50
void C::sub_00d6cb50(float Value)
{
    Field0++;
    float X = Value;
    Field4 = *(INT*)&X;
}

struct S00d6cb90
{
    int Count;
    char _pad[0x14];
    int Bits;

    void sub_00d6cb90(float f);
};

// @baa 0x00d6cb90
void S00d6cb90::sub_00d6cb90(float f)
{
    ++Count;
    float x = f;
    Bits = *(int*)&x;
}

struct S00d6cb70 {
    int Counter;
    int B;
    int C;
    int D;
    int E;
    int Value;

    void sub_00d6cb70(float Value);
};

// @baa 0x00d6cb70
void S00d6cb70::sub_00d6cb70(float Value)
{
    float Local = Value;
    Counter++;
    this->Value = *(int*)&Local;
}

struct S00d6cbb0
{
	INT Count;
	float A;
	float B;
	float C;
	float D;
	float E;
	float F;
	DWORD ValueBits;

	void sub_00d6cbb0(float Value);
};

// @baa 0x00d6cbb0
void S00d6cbb0::sub_00d6cbb0(float Value)
{
	float Tmp = Value;
	Count++;
	ValueBits = *(DWORD*)&Tmp;
}

// A small per-frame counter that remembers the last value submitted.
// Member layout: Counter at 0x0, Value at 0x20.
struct FSub_00d6cbd0
{
    INT  Counter;     // 0x00  how many times sub_00d6cbd0 was called
    char pad[28];     // 0x04
    INT  Value;       // 0x20  the bits of the last InValue (float stored as int)

    void sub_00d6cbd0(FLOAT InValue);
};

// @baa 0x00d6cbd0
void FSub_00d6cbd0::sub_00d6cbd0(FLOAT InValue)
{
    FLOAT tmp = InValue;
    Counter++;
    Value = *(INT*)&tmp;
}

struct C_00d6e080
{
	int A;
	int B;
	int C;

	C_00d6e080* sub_00d6e080(const C_00d6e080* Src);
};

// @baa 0x00d6e080
C_00d6e080* C_00d6e080::sub_00d6e080(const C_00d6e080* Src)
{
	A = Src->A;
	B = Src->B;
	C = Src->C;
	return this;
}

static void ForceSub()
{
	C_00d6e080 Dst, Src;
	Dst.sub_00d6e080(&Src);
}

struct FD6CC10 {
    INT     RefCount;
    char    Pad1[0x24];
    INT     LastValue;

    void sub_00d6cc10(FLOAT Value);
};

// @baa 0x00d6cc10
void FD6CC10::sub_00d6cc10(FLOAT Value)
{
    RefCount += 1;
    FLOAT Last = Value;
    LastValue = *(INT*)&Last;
}

// 25-byte member function:
//   movss xmm0, [esp+4]        // arg1 (float)
//   add   dword ptr [ecx], 1
//   movss [esp+4], xmm0        // spill the float local back to the slot
//   mov   eax, [esp+4]         // reload its bits as an int
//   mov   dword ptr [ecx+0x34], eax
//   ret 4
// The odd spill/reload happens when a float LOCAL occupies [esp+4] and the
// member store reads its bits as an int.
struct CD6CC60_ {
    INT Count;        // 0x00
    float Pad1;       // 0x04
    float Pad2;       // 0x08
    float Pad3;       // 0x0c
    float Pad4;       // 0x10
    float Pad5;       // 0x14
    float Pad6;       // 0x18
    float Pad7;       // 0x1c
    float Pad8;       // 0x20
    float Pad9;       // 0x24
    float PadA;       // 0x28
    float PadB;       // 0x2c
    float PadC;       // 0x30
    INT StoredBits;   // 0x34

    void sub_00d6cc60(float X);
};

// @baa 0x00d6cc60
void CD6CC60_::sub_00d6cc60(float X)
{
    Count += 1;
    float Sample = X;
    StoredBits = *(INT*)&Sample;
}

struct Sub_00D6CAF0
{
    INT Count;
    INT LastValue;
    void sub_00D6CAF0(float Value);
};

// @baa 0x00d6caf0
void Sub_00D6CAF0::sub_00D6CAF0(float Value)
{
    Count++;
    float V = Value;
    LastValue = *(INT*)&V;
}

struct S00d6de30
{
	INT First;
	INT Second;
	INT Third;

	S00d6de30& sub_00d6de30(S00d6de30* In);
};

// @baa 0x00d6de30
S00d6de30& S00d6de30::sub_00d6de30(S00d6de30* In)
{
	First = In->First;
	Second = In->Second;
	Third = In->Third;
	return *this;
}

void S00d6de30_caller()
{
	S00d6de30 A;
	S00d6de30 B;
	A.sub_00d6de30(&B);
}

// 00d6cc40: member of a struct; increments its counter field at 0x0
// and stores its float argument (as a bit pattern) into the field at 0x30.
struct F_00d6cc40
{
	INT Count;
	char pad_0004[0x2c];
	INT Value;

	void sub_00d6cc40(float NewValue)
	{
		float t = NewValue;
		Count++;
		Value = *(INT*)&t;
	}
};

// @baa 0x00d6cc40
// keeps sub_00d6cc40 in the object
F_00d6cc40* sub_00d6cd00(F_00d6cc40* Self, float NewValue)
{
	Self->sub_00d6cc40(NewValue);
	return Self;
}

struct T_00d6d200
{
    INT x0;
    INT x4;
    INT x8;

    T_00d6d200 *sub_00d6d200(INT a, INT b, INT c)
    {
        x0 = a;
        x4 = b;
        x8 = c;
        return this;
    }
};

static T_00d6d200 *g_00d6d200 = 0;
// @baa 0x00d6d200
void sub_00d6d201(INT a, INT b, INT c)
{
    T_00d6d200 *T = g_00d6d200;
    T->sub_00d6d200(a, b, c);
}

// Member function: increments a DWORD at offset 0,
// stores a float (bitcast) argument at offset 0x24.
struct FSomeState
{
    union
    {
        struct
        {
            DWORD Counter;
            char Space[0x20];
            int Value;
        };
    };

    void sub_00d6cbf0(float NewValue);
};

// @baa 0x00d6cbf0
void FSomeState::sub_00d6cbf0(float NewValue)
{
    ++Counter;
    float Tmp = NewValue;
    Value = *reinterpret_cast<int*>(&Tmp);
}
