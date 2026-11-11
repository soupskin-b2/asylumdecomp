// CRT_18c0000.cpp (part 3 of 3): 17 functions
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
