// UnrealEd_0430000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxObject;
class wxObject {
    public:
    public: __declspec(dllimport) void Ref(wxObject const &);
    friend struct C;
};

struct C {
    void sub_00435060(wxObject *);
};

// @baa 0x00435060
void C::sub_00435060(wxObject * param_2)
{
    int param_1 = (int)this;
  if ((wxObject *)(param_1 + 0x18c) != param_2) {
    ((wxObject *)((wxObject *)(param_1 + 0x18c)))->wxObject::Ref(*(const wxObject *)(param_2));
    return;
  }
  return;
}
