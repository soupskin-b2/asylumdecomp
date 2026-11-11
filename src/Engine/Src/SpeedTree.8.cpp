// SpeedTree.cpp (part 8 of 8): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
    template<class E> struct char_traits {};
    template<class T> class allocator {};
    template<class E, class Tr, class A> class basic_string {
    public:
        __declspec(dllimport) basic_string();
        __declspec(dllimport) ~basic_string();
        char _Data[28];
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct CSpeedTreeVec3 { float x, y, z; CSpeedTreeVec3() { x = y = z = 0.0f; } };

struct CSpeedTreeEntry {
    CSpeedTreeVec3 A;
    CSpeedTreeVec3 B;
    CSpeedTreeVec3 C;
    std::string Name;
    CSpeedTreeEntry();
};

// @baa 0x01a947a0
CSpeedTreeEntry::CSpeedTreeEntry()
{
}
