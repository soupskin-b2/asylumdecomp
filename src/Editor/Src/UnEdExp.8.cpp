// UnEdExp.cpp (part 8 of 19): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    UINT Count;  // 0x04
    INT* Data;   // 0x08
    INT* sub_00eed530();
};

// @baa 0x00eed530
INT* FMArray::sub_00eed530()
{
    if (!(Count > 0))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 495);
    return Data;
}
