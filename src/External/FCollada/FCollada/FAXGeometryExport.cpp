// FAXGeometryExport.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_base {
    INT sub_018357b0(INT arg1);
};

struct C_this {
    char pad[0x24];
    C_base* ptr;
    INT sub_01847370(INT arg1);
};

// @baa 0x01847370
INT C_this::sub_01847370(INT arg1) {
    return ptr->sub_018357b0(arg1);
}
