// Engine_1a80000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
template<class _Elem> struct char_traits {};
template<class _Elem> class allocator {};
template<class _Elem, class _Traits, class _Alloc>
struct basic_string { __declspec(dllimport) ~basic_string(); };
}

struct C {
    char pad[0x14];
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> s;
    void sub_01a832a0();
};

// @baa 0x01a832a0
void C::sub_01a832a0()
{
    s.~basic_string();
}
