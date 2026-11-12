// UnrealEd_1110000.cpp (part 6 of 8): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxBitmap;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap(wxBitmap const &);
    friend struct C;
};

struct C {
    wxBitmap * sub_01114fb0(wxBitmap *);
};

extern undefined * g_021bb8b0;
// @baa 0x01114fb0
wxBitmap * C::sub_01114fb0(wxBitmap * param_2)
{
    wxBitmap * param_1 = (wxBitmap *)this;
  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap(*(const wxBitmap *)(param_2));
  *(undefined ***)param_1 = &g_021bb8b0;
  return param_1;
}

struct Sub
{
    void sub_0127c7b0();
};

extern Sub* g_026d4dfc;
// @baa 0x01117870
void __stdcall sub_01117870(INT Unused)
{
    g_026d4dfc->sub_0127c7b0();
}
