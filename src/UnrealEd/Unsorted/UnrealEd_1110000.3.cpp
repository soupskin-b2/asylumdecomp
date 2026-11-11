// UnrealEd_1110000.cpp (part 3 of 8): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxBitmap;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap(int,int,int);
    friend struct C;
};

struct C {
    wxBitmap * sub_01114e50(int, int, int);
};

extern undefined * g_021bb8b0;
// @baa 0x01114e50
wxBitmap * C::sub_01114e50(int param_2, int param_3, int param_4)
{
    wxBitmap * param_1 = (wxBitmap *)this;

  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap(param_2, param_3, param_4);
  *(undefined ***)param_1 = &g_021bb8b0;
  return param_1;
}

int sub_0053df40(...);
extern int g_021bd2e8[];
extern int g_021bd328[];
struct wxComboBox { __declspec(dllimport) wxComboBox(); char pad[0x15c]; };

struct W : wxComboBox {
    W() { *(void**)this = g_021bd328; *(void**)((char*)this + 0x150) = g_021bd2e8; }
    void* operator new(unsigned int s) { return (void*)sub_0053df40(s, 8); }
    void operator delete(void* p) {}
};

// @baa 0x0111a320
W* sub_0111a320() { return new W; }

class wxEvent;
class wxEvtHandler;
class wxEvent {
    public:
};

class wxEvtHandler {
    public:
    public: __declspec(dllimport) void AddPendingEvent(wxEvent &);
    friend struct C_0111b490;
};

struct C_0111b490 {
    void sub_0111b490(wxEvent *);
};

// @baa 0x0111b490
void C_0111b490::sub_0111b490(wxEvent * param_2)
{
    int param_1 = (int)this;
  if (*(wxEvtHandler **)(param_1 + 0x1a8) != (wxEvtHandler *)0x0) {
    ((wxEvtHandler *)(*(wxEvtHandler **)(param_1 + 0x1a8)))->wxEvtHandler::AddPendingEvent(*(wxEvent *)(param_2));
    return;
  }
  return;
}
