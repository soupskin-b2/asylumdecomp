// Engine_1a60000.cpp (part 3 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
template <class _Elem> struct char_traits;
template <class _Ty> class allocator;
template <class _Elem, class _Traits, class _Alloc> class basic_string {
public:
    __declspec(dllimport) ~basic_string();
};
}

struct S {
    char pad[0x24];
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > s;
    void sub_01a62df0();
};

// @baa 0x01a62df0
void S::sub_01a62df0() { s.~basic_string(); }
