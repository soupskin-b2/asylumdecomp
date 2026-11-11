// UnrealEd_1110000.cpp (part 4 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxBitmap;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap();
    friend struct C;
};

struct C {
    wxBitmap * sub_01114e80();
};

extern undefined * g_021bb8f0;
// @baa 0x01114e80
wxBitmap * C::sub_01114e80(void)
{
    wxBitmap * param_1 = (wxBitmap *)this;

  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap();
  *(undefined ***)param_1 = &g_021bb8f0;
  return param_1;
}
