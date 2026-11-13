// Engine_1a60000.cpp (part 5 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01a6fd30
void* sub_01a6fd30(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a6fda0
void* sub_01a6fda0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// Forwards the call to sub_01a6b8a0, which takes the object and a flag.
void __stdcall sub_sub_01a6b8a0(void* Object, int bFlag);
struct FForwarder_01a6bb50
{
	void sub_01a6bb50(void* Object);
};

// @baa 0x01a6bb50
void FForwarder_01a6bb50::sub_01a6bb50(void* Object)
{
	sub_sub_01a6b8a0(Object, 0);
}
