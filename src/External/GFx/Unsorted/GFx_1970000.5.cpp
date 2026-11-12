// GFx_1970000.cpp: 14 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// A small buffer of 16-bit values plus its element count.
struct GFxWordBuffer {
    unsigned short* Words;
    unsigned int Num;

    // Drop a trailing element when it is zero.
    void sub_01978380();
};

// @baa 0x01978380
void GFxWordBuffer::sub_01978380()
{
    if (Num > 0 && Words[Num - 1] == 0) {
        --Num;
    }
}

struct UGFxDataStoreSubscriber_ : public UGFxDataStoreSubscriber {
    bool sub_01978400();
    UINT sub_01978450();
};

// @baa 0x01978450
UINT UGFxDataStoreSubscriber_::sub_01978450()
{
    UINT v = (UINT)ObjectInternalInteger;

    if (v > 0 && sub_01978400())
        --v;

    return v;
}

// Virtual method of GASTextFieldCtorFunction (vtable slot 12). It forwards to
// sub_01972280, passing the enclosing object pointer and a zero flag, and
// returns its argument unchanged.
struct sub_01972280_Class
{
    int sub_01972280(int Arg0, int Arg1);
};

class GASTextFieldCtorFunction
{
public:
    virtual int sub_01972970(int Arg);
};

// @baa 0x01972970
int GASTextFieldCtorFunction::sub_01972970(int Arg)
{
    ((sub_01972280_Class*)Arg)->sub_01972280((int)((char*)this - 0x10), 0);
    return Arg;
}

struct FDataStoreSubscriber
{
    void* A;     /* 0x00 */
    void* B;     /* 0x04 */
    void* C;     /* 0x08 */
    void* D;     /* 0x0c */
    void* E;     /* 0x10 */
    void** Data; /* 0x14 */
    INT Count;   /* 0x18 */

    INT sub_0197a980();
};

// @baa 0x0197a980
INT FDataStoreSubscriber::sub_0197a980()
{
    int Index = Count - 1;
    if (Index >= 0 && Index < Count)
        return (INT)Data[Index];
    return 0;
}

struct C {
    char Pad_0x00[0x30];
    int Member_0x30;
    int sub_019729b0(int A, int B);
    C* sub_01974d20(C* Other);
};

// @baa 0x01974d20
C* C::sub_01974d20(C* Other)
{
    Other->sub_019729b0((int)&Member_0x30, 0);
    return Other;
}

struct FDataStoreSubscriber2
{
    void* A;     /* 0x00 */
    void* B;     /* 0x04 */
    void* C;     /* 0x08 */
    void* D;     /* 0x0c */
    void* E;     /* 0x10 */
    void** Data; /* 0x14 */
    INT Count;   /* 0x18 */

    INT sub_0197a9a0();
};

// @baa 0x0197a9a0
INT FDataStoreSubscriber2::sub_0197a9a0()
{
    int Index = Count - 1;
    if (Index >= 0 && Index < Count)
        return (INT)Data[Index];
    return 0;
}

class GASSuperObject
{
public:
    INT __thiscall sub_019729b0(GASSuperObject* A, INT B);
    GASSuperObject* __thiscall sub_01973a50(GASSuperObject* A, INT B);
};

// @baa 0x01973a50
GASSuperObject* __thiscall GASSuperObject::sub_01973a50(GASSuperObject* A, INT B)
{
    A->sub_019729b0((GASSuperObject*)((char*)this + 0x2c), 0);
    return A;
}

// 0x01970db0
// Member function with three stack arguments (ret 0xc); stores them into this.
struct F01970db0 {
    int a;
    int b;
    int c;
    F01970db0* sub_01970db0(int x, int y, int z);
};

// @baa 0x01970db0
F01970db0* F01970db0::sub_01970db0(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
    return this;
}

static void g_caller_01970db0()
{
    F01970db0 obj;
    obj.sub_01970db0(1, 2, 3);
}

// A virtual dispatch helper reached through a global object (0x018d7170).
void __stdcall sub_018d7170(int InValue);
 // 0x018d7170
// Small data block that sub_01978190 clears after dispatching its first word.
struct FDataStoreSlot {
    int Primary;    // +0x0
    int Secondary;  // +0x4
    int Tertiary;   // +0x8
    void Release(int InValue); /* 0x01978190 */
};

// @baa 0x01978190
void FDataStoreSlot::Release(int InValue)
{
    sub_018d7170(Primary);
    Primary = 0;
    Tertiary = 0;
    Secondary = 0;
}

extern void sub_018f3e30(float Value);
struct UGFxDataStoreSubscriber__01979710 : public UGFxDataStoreSubscriber
{
	void sub_01979710(); /* 0x01979710 */
};

// @baa 0x01979710
void UGFxDataStoreSubscriber__01979710::sub_01979710()
{
	// A 16-bit value stored at 0x26 is reinterpreted as a float and passed on.
	sub_018f3e30((float)*(unsigned short*)((char*)this + 0x26));
}

struct sub_01998aa0_ctx;
 // struct read by 0x01998aa0 (fields at 0x04, 0x0a, 0x0c, 0xa4)
struct sub_01975990_owner
{
    INT Field_0x00;
    INT Field_0x04;
    INT Field_0x08;
    INT Field_0x0C;
    INT Field_0x10;
    INT Field_0x14;

    sub_01998aa0_ctx* Sub_0x18; // 0x01975990 reads this
    void sub_01975990(const char* ClassName, void* A, void* B); // 0x01975990
};

void sub_01998aa0(sub_01998aa0_ctx* Ctx, const char* Message, const char* Name);
// @baa 0x01975990
 // 0x01998aa0
void sub_01975990_owner::sub_01975990(const char* ClassName, void* A, void* B)
{
    sub_01998aa0(Sub_0x18, "Error: Null or invalid 'this' is used for a method of %s class.\n", ClassName);
}

struct UGFxDataStoreSubscriber__0197ed10 : public UGFxDataStoreSubscriber {
    void sub_0197ecd0(UINT Count, UINT Count2); /* 0x0197ecd0 */
    void sub_0197ed10(UINT Count); /* 0x0197ed10 */
};

// @baa 0x0197ed10
void UGFxDataStoreSubscriber__0197ed10::sub_0197ed10(UINT Count)
{
    UINT N = (UINT)ObjectInternalInteger;
    if (Count >= N)
        Count = N;
    sub_0197ecd0(N - Count, N);
}

void sub_0197ed0a(UGFxDataStoreSubscriber__0197ed10& Subscriber, UINT Count)
{
    Subscriber.sub_0197ed10(Count);
}

// GFx data-store XML entity parser state (0x14 bytes), passed as `this`.
struct FGFxXmlParseState
{
public:
    WORD* Data;      /* 0x00 */
    WORD* Position;  /* 0x04 */
    WORD* End;       /* 0x08 */
    INT Value;       /* 0x0c */
    BYTE bInEntity;  /* 0x10 */
};

void __fastcall sub_0197a370(FGFxXmlParseState* State);
// @baa 0x0197a6a0
 /* 0x0197a370 */
// 0x0197a6a0: enter the entity parse if we are not inside an entity yet and
// the text starts with '&'.
void __fastcall sub_0197a6a0(FGFxXmlParseState* State)
{
    BYTE b = State->bInEntity;
    State->bInEntity = 1;
    if (b || *State->Data != TEXT('&'))
        return;
    sub_0197a370(State);
}

struct FUCharStream
{
	unsigned short* First;	// 0x00
	unsigned short* Next;	// 0x04
	unsigned short* Last;	// 0x08
	unsigned Value;			// 0x0C

	unsigned sub_01977f50(); // 0x01977f50
};

// @baa 0x01977f50
unsigned FUCharStream::sub_01977f50()
{
	if (First < Last)
	{
		Value = (unsigned)*First;
		Next = First + 1;
		return Value;
	}
	return 0;
}
