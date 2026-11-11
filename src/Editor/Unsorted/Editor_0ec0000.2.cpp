// Editor_0ec0000.cpp (part 2 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int __cdecl sub_018260a0(const char* File, DWORD Line);
// fcollada FMArray: size + T* data (T is 4 bytes)
struct FMArray {
    INT Unk00;   // 0x00
    INT Count;   // 0x04
    INT* Data;   // 0x08
    INT& sub_00ec2640(UINT Index);
};

// @baa 0x00ec2640
INT& FMArray::sub_00ec2640(UINT Index)
{
    if (!(Index < Count))
        sub_018260a0("e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506);
    return Data[Index];
}

typedef uint size_t;

struct C {
    void sub_00ece3f0(void *);
};

int sub_0053df70(...);
void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00ece3f0
void C::sub_00ece3f0(void * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  sub_01a375f0(param_2,*(void **)(param_1 + 0x14),*(size_t *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x14),0,8);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
  }
  return;
}
