// OnlineGameInterfaceImpl.cpp (part 2 of 5): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <stdlib.h>

struct FOnlineGameInterfaceImpl_ {
    void sub_00e2a170(unsigned char* Buffer, unsigned int Length);
};

// @baa 0x00e2a170
void FOnlineGameInterfaceImpl_::sub_00e2a170(unsigned char* Buffer, unsigned int Length)
{
    for (unsigned int Index = 0; Index < Length; Index++)
    {
        Buffer[Index] = (unsigned char)rand();
    }
}
