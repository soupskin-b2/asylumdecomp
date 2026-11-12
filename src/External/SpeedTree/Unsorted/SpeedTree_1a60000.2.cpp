// SpeedTree_1a60000.cpp (part 2 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01a63300
void* sub_01a63300(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct ST_DynArray_
{
	INT Num;
	INT Cursor;
	INT Size;
	unsigned char *Buffer;
	void sub_01a6bb60(unsigned char *pValue);
};

struct ST_Parent_
{
	INT Header;
	ST_DynArray_ Bytes;
	void sub_01a6c450(unsigned char Value);
};

// @baa 0x01a6c450
void ST_Parent_::sub_01a6c450(unsigned char Value)
{
	unsigned char Byte = Value;
	Bytes.sub_01a6bb60(&Byte);
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01a6cd40();
};

// @baa 0x01a6cd40
C* C::sub_01a6cd40()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
