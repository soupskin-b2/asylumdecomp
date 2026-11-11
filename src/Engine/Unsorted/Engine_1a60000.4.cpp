// Engine_1a60000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std {
    template<class T> struct char_traits { };
    template<class T> class allocator { };
    template<class C, class T, class A> class basic_string {
    public:
        __declspec(dllimport) basic_string(const C*);
        __declspec(dllimport) ~basic_string();
    private:
        int _pad[7];
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > FStr;

struct CReader {
    int sub_01a74a50();
    float sub_01a749a0();
    char sub_01a63660();
};

struct CErrInfo {
    int _pad[7];
    void sub_01a5f450(const FStr& msg, bool useErrno);
};

extern char g_0259f940[4];
__declspec(noreturn) void __stdcall sub_01a379de(void* obj, void* throwInfo);
struct CTarget {
    char pad00[0xa4];
    float f_a4;
    float f_a8;
    float f_ac;
    float f_b0;
    float f_b4;
    float f_b8;
    float f_bc;
    float f_c0;
    void sub_01a66b70(CReader* reader);
};

// @baa 0x01a66b70
void CTarget::sub_01a66b70(CReader* reader)
{
    int tok = reader->sub_01a74a50();
    do {
        switch (tok - 0x7532) {
        case 0: f_a4 = reader->sub_01a749a0(); break;
        case 1: f_a8 = reader->sub_01a749a0(); break;
        case 2: f_ac = reader->sub_01a749a0(); break;
        case 3: f_b0 = reader->sub_01a749a0(); break;
        case 4: f_b4 = reader->sub_01a749a0(); break;
        case 5: f_b8 = reader->sub_01a749a0(); break;
        case 6: f_c0 = reader->sub_01a749a0(); break;
        case 7: f_bc = reader->sub_01a749a0(); break;
        default: {
            FStr msg("malformed standard shader support info");
            CErrInfo info;
            info.sub_01a5f450(msg, false);
            sub_01a379de(&info, g_0259f940);
        }
        }
        if (reader->sub_01a63660()) {
            FStr msg("premature end of file reached parsing standard shader support info");
            CErrInfo info;
            info.sub_01a5f450(msg, false);
            sub_01a379de(&info, g_0259f940);
        }
        tok = reader->sub_01a74a50();
    } while (tok != 0x7531);
}
