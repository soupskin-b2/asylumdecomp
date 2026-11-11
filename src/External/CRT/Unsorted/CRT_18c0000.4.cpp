// CRT_18c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace std
{
    class exception
    {
    public:
        __declspec(dllimport) virtual ~exception();
    };

    class bad_alloc : public exception
    {
    public:
        virtual ~bad_alloc();
    };
}

// @baa 0x018c86d0
std::bad_alloc::~bad_alloc()
{
}
