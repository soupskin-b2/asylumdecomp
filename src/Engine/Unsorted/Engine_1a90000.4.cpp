// Engine_1a90000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
template <class _Elem> struct char_traits {};
template <class _Elem> class allocator {};
template <class _Elem, class _Traits, class _Alloc>
class basic_string {
public:
    __declspec(dllimport) __declspec(noinline) ~basic_string();
};
}

// @baa 0x01a9d6c0
void sub_01a9d6c0(std::basic_string<char, std::char_traits<char>, std::allocator<char>>* p)
{
    p->~basic_string();
}
