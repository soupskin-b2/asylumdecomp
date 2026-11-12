// GFx_1970000.cpp: 7 functions
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
