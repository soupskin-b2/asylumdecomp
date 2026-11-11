// UnEdExp.cpp (part 2 of 19): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Count;   // 0x04
    INT* Data;   // 0x08
    INT& sub_00eed290(UINT Index);
};

// @baa 0x00eed290
INT& FMArray::sub_00eed290(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

extern char g_0213c708[];
struct S_00f0f0b0 { void sub_0060b320(); };

// @baa 0x00f0f0b0
void sub_00f0f0b0(S_00f0f0b0 *p) { if (p) { p->sub_0060b320(); *(int *)p = (int)g_0213c708; } }
