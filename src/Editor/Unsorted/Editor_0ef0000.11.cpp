// Editor_0ef0000.cpp (part 11 of 11): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" void __cdecl sub_018260a0(const char* File, int Line);
// fcollada FMArray: element count at 0x04, element size / capacity at 0x08
struct FMArrayInt {
    int Unk00; // 0x00
    unsigned int Num; // 0x04
    int ElementSize; // 0x08
    int sub_00ef47d0();
};

// @baa 0x00ef47d0
int FMArrayInt::sub_00ef47d0()
{
    if (Num)
    {
        if (Num > 0)
            return ElementSize;
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 495);
    }
    else
        return 0;
    return ElementSize;
}

void __stdcall sub_00ef6060(INT A, INT B);
// @baa 0x00efbc80
void __stdcall sub_00efbc80(INT Value)
{
    sub_00ef6060(-1, Value);
}
