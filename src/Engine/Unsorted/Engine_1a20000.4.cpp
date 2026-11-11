// Engine_1a20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
template <class _Elem> struct char_traits {};
template <class _Elem> class allocator {};
template <class _Elem, class _Traits = char_traits<_Elem>, class _Alloc = allocator<_Elem>>
class basic_string { public:
    __declspec(dllimport) ~basic_string();
};
}

struct C {
    char pad[0xc];
    std::basic_string<wchar_t> s;
    void sub_01a29a00();
};

// @baa 0x01a29a00
void C::sub_01a29a00()
{
    s.~basic_string();
}
