// Editor_0ef0000.cpp (part 9 of 11): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    UINT Count;  // 0x04
    INT* Data;   // 0x08
    INT* sub_00ef15e0();
};

// @baa 0x00ef15e0
INT* FMArray::sub_00ef15e0()
{
    if (!(Count > 0))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 495);
    return Data;
}
