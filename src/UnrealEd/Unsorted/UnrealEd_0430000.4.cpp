// UnrealEd_0430000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxObject;
class wxObject {
    public:
    public: __declspec(dllimport) void Ref(wxObject const &);
    friend struct C;
};

struct C {
    void sub_00435080(wxObject *);
};

// @baa 0x00435080
void C::sub_00435080(wxObject * param_2)
{
    int param_1 = (int)this;
  if ((wxObject *)(param_1 + 0x194) != param_2) {
    ((wxObject *)((wxObject *)(param_1 + 0x194)))->wxObject::Ref(*(const wxObject *)(param_2));
    return;
  }
  return;
}
