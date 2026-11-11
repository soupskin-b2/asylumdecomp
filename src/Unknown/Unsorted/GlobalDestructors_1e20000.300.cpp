// GlobalDestructors_1e20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std
{
    template<class Ch> struct char_traits { };
    template<class T> class allocator { };

    template<class Ch, class Tr, class Al>
    class basic_string
    {
    public:
        __declspec(dllimport) ~basic_string();
    };
}

extern std::basic_string<char, std::char_traits<char>, std::allocator<char> > g_027bce7c;
// @baa 0x01e28240
void sub_01e28240(void)
{
    g_027bce7c.~basic_string();
}
