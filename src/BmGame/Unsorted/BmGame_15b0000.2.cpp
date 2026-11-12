// BmGame_15b0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

class C_015be490 {
public:
    C_015be490* sub_015be490(INT Size)
    {
        memset(this, 0, 0x184);
        return this;
    }
};

// @baa 0x015be490
void g_caller(C_015be490* Obj, INT Size)
{
    Obj->sub_015be490(Size);
}

struct sub_015be450_cls {
    char data[0x114];
    void* sub_015be450(int arg);
};

// @baa 0x015be450
void* sub_015be450_cls::sub_015be450(int arg) {
    memset(this, 0, sizeof(data));
    return this;
}
