// CRT_18c0000.cpp (part 3 of 3): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x018cb9f0
void* sub_018cb9f0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cbab0
void* sub_018cbab0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cbae0
void* sub_018cbae0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cbb10
void* sub_018cbb10(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void);
struct _Iter {
    void* _Mycont;
    int* _Ptr;
    bool sub_018ccb30(const _Iter& _Right) const;
};

// @baa 0x018ccb30
bool _Iter::sub_018ccb30(const _Iter& _Right) const
{
    if (!(_Mycont != 0 && _Mycont == _Right._Mycont))
        _invalid_parameter_noinfo();
    return _Ptr != _Right._Ptr;
}

// @baa 0x018cd060
void* sub_018cd060(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd120
void* sub_018cd120(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd150
void* sub_018cd150(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd180
void* sub_018cd180(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd800
void* sub_018cd800(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd8c0
void* sub_018cd8c0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd8f0
void* sub_018cd8f0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018cd920
void* sub_018cd920(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018ce330
void* sub_018ce330(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018ce360
void* sub_018ce360(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018ce390
void* sub_018ce390(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x018ce3c0
void* sub_018ce3c0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct C
{
    char pad_00[0x10];
    void* Pointer;
    char pad_14[0x10];
    UINT Count;

    void* sub_018c8790();
};

// @baa 0x018c8790
void* C::sub_018c8790()
{
    if (Count >= 0x10)
        return Pointer;
    return (void*)((char*)this + 0x10);
}

void sub_00402660(INT Value);
// @baa 0x018c8c00
void __stdcall sub_018c8c00(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x018c8c80
void __stdcall sub_018c8c80(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x018c8ca0
void __stdcall sub_018c8ca0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x018c8d80
void __stdcall sub_018c8d80(INT A, INT B)
{
    sub_00402660(A);
}

struct C_018c97e0
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018c97e0* sub_018c97e0();
};

// @baa 0x018c97e0
C_018c97e0* C_018c97e0::sub_018c97e0()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}

void __stdcall sub_018c9d90(INT A, INT B);
// @baa 0x018c9e50
void __stdcall sub_018c9e50(INT Value)
{
    sub_018c9d90(Value, 0);
}

struct C_018c97f0
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018c97f0* sub_018c97f0();
};

// @baa 0x018c97f0
C_018c97f0* C_018c97f0::sub_018c97f0()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}

struct C_018c9800
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018c9800* sub_018c9800();
};

// @baa 0x018c9800
C_018c9800* C_018c9800::sub_018c9800()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}

struct C_018c9810
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018c9810* sub_018c9810();
};

// @baa 0x018c9810
C_018c9810* C_018c9810::sub_018c9810()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}

// @baa 0x018cb130
void __stdcall sub_018cb130(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x018cb1a0
void __stdcall sub_018cb1a0(INT A, INT B)
{
    sub_00402660(A);
}

struct C_018cd980
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018cd980* sub_018cd980();
};

// @baa 0x018cd980
C_018cd980* C_018cd980::sub_018cd980()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}

struct C_018ce460
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_018ce460* sub_018ce460();
};

// @baa 0x018ce460
C_018ce460* C_018ce460::sub_018ce460()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_0c = 0;
    return this;
}
