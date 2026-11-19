// Engine_14a0000.cpp: 24 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_014ace50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ace50& operator++();
};

// @baa 0x014ace50
FSparseArrayConstIt_014ace50& FSparseArrayConstIt_014ace50::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_014a63b0(int);
};

// @baa 0x014ace70
undefined4 * UTexture2D::sub_014ace70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view *)(((char *)this + 4)))->sub_014a63b0((int)(param_2 + 1));
  return param_1;
}

struct M_014ace90 { void sub_014a5c40(); };

struct C { char pad[8]; M_014ace90 m; void sub_014ace90(); };

// @baa 0x014ace90
void C::sub_014ace90() { m.sub_014a5c40(); }

struct FSparseArrayConstIt_014ad200 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad200& operator++();
};

// @baa 0x014ad200
FSparseArrayConstIt_014ad200& FSparseArrayConstIt_014ad200::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad220 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad220& operator++();
};

// @baa 0x014ad220
FSparseArrayConstIt_014ad220& FSparseArrayConstIt_014ad220::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad240 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad240& operator++();
};

// @baa 0x014ad240
FSparseArrayConstIt_014ad240& FSparseArrayConstIt_014ad240::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad260 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad260& operator++();
};

// @baa 0x014ad260
FSparseArrayConstIt_014ad260& FSparseArrayConstIt_014ad260::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad280 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad280(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad280
FSparseArrayConstIt_014ad280::FSparseArrayConstIt_014ad280(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad2d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad2d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad2d0
FSparseArrayConstIt_014ad2d0::FSparseArrayConstIt_014ad2d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad320 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad320(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad320
FSparseArrayConstIt_014ad320::FSparseArrayConstIt_014ad320(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad370 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad370(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad370
FSparseArrayConstIt_014ad370::FSparseArrayConstIt_014ad370(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad3c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad3c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad3c0
FSparseArrayConstIt_014ad3c0::FSparseArrayConstIt_014ad3c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad410 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad410& operator++();
};

// @baa 0x014ad410
FSparseArrayConstIt_014ad410& FSparseArrayConstIt_014ad410::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad430 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad430& operator++();
};

// @baa 0x014ad430
FSparseArrayConstIt_014ad430& FSparseArrayConstIt_014ad430::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad450 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad450& operator++();
};

// @baa 0x014ad450
FSparseArrayConstIt_014ad450& FSparseArrayConstIt_014ad450::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad470 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad470& operator++();
};

// @baa 0x014ad470
FSparseArrayConstIt_014ad470& FSparseArrayConstIt_014ad470::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad490 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad490& operator++();
};

// @baa 0x014ad490
FSparseArrayConstIt_014ad490& FSparseArrayConstIt_014ad490::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_014ad4b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad4b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad4b0
FSparseArrayConstIt_014ad4b0::FSparseArrayConstIt_014ad4b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad500 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad500(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad500
FSparseArrayConstIt_014ad500::FSparseArrayConstIt_014ad500(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad550 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad550(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad550
FSparseArrayConstIt_014ad550::FSparseArrayConstIt_014ad550(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad5a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad5a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad5a0
FSparseArrayConstIt_014ad5a0::FSparseArrayConstIt_014ad5a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad5f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad5f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x014ad5f0
FSparseArrayConstIt_014ad5f0::FSparseArrayConstIt_014ad5f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_014ad640 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014ad640& operator++();
};

// @baa 0x014ad640
FSparseArrayConstIt_014ad640& FSparseArrayConstIt_014ad640::operator++()
{
    TConstIterator::operator++();
    return *this;
}

INT sub_00dbcb50(void* Value);
struct C_014ad660
{
    char pad_00[0xc];
    void* Value;

    INT sub_014ad660();
};

// @baa 0x014ad660
INT C_014ad660::sub_014ad660()
{
    return sub_00dbcb50(Value);
}
