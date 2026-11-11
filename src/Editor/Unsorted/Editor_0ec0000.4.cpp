// Editor_0ec0000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Count;   // 0x04
    INT* Data;   // 0x08
    INT& sub_00ec2910(UINT Index);
};

// @baa 0x00ec2910
INT& FMArray::sub_00ec2910(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}
