// UnrealEd_1110000.cpp (part 5 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxBitmap;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap();
    friend struct C;
};

struct C {
    wxBitmap * sub_01114eb0();
};

extern undefined * g_021bb930;
// @baa 0x01114eb0
wxBitmap * C::sub_01114eb0(void)
{
    wxBitmap * param_1 = (wxBitmap *)this;

  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap();
  *(undefined ***)param_1 = &g_021bb930;
  return param_1;
}
