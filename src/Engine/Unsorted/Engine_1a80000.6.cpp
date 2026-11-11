// Engine_1a80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
template<class _Elem> struct char_traits;
template<class _Ty> class allocator;
template<class _Elem, class _Traits, class _Ax>
class basic_string {
public:
    __declspec(dllimport) basic_string& operator=(const basic_string& _Right);
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > string;

struct C {
    char pad[0x24];
    string Name;
    string& sub_01a83380(const string& Value);
};

// @baa 0x01a83380
string& C::sub_01a83380(const string& Value)
{
    return Name = Value;
}
