// UnUIEditorControls.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxToolBar
{
public:
    __declspec(dllimport) virtual ~wxToolBar();
};

extern void* g_022b0ee8[];
struct C : public wxToolBar
{
    void sub_0149bad0();
};

// @baa 0x0149bad0
void C::sub_0149bad0()
{
    *(void**)this = g_022b0ee8;
    ((wxToolBar*)this)->wxToolBar::~wxToolBar();
}

struct C_0149bb70 : public wxToolBar
{
    void sub_0149bb70();
};

// @baa 0x0149bb70
void C_0149bb70::sub_0149bb70()
{
    *(void**)this = g_022b0ee8;
    ((wxToolBar*)this)->wxToolBar::~wxToolBar();
}
