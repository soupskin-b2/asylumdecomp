// UnrealEd_0430000.cpp (part 2 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxObject;
class wxObject {
    public:
    public: __declspec(dllimport) void Ref(wxObject const &);
    friend struct C;
};

struct C {
    void sub_00430140(wxObject *);
};

// @baa 0x00430140
void C::sub_00430140(wxObject * param_2)
{
    int param_1 = (int)this;
  if ((wxObject *)(param_1 + 0x194) != param_2) {
    ((wxObject *)((wxObject *)(param_1 + 0x194)))->wxObject::Ref(*(const wxObject *)(param_2));
    return;
  }
  return;
}

class std;
class std {
    public:
    class _Mutex {
        public:
        public: __declspec(dllimport) void _Unlock();
        friend struct C_004390d0;
    };
};

#pragma pack(push, 1)
struct _Mutex { char _pad0[1]; };

#pragma pack(pop)
struct C_004390d0 {
    void sub_004390d0();
};

// @baa 0x004390d0
void C_004390d0::sub_004390d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  if (iVar1 != 0) {
                    
                    
    ((std::_Mutex *)((_Mutex *)(iVar1 + 4)))->std::_Mutex::_Unlock();
    return;
  }
  return;
}

class wxWindowDisabler;
class wxWindowDisabler {
    public:
    public: __declspec(dllimport) ~wxWindowDisabler();
    friend struct C_0043b180;
};

struct C_0043b180 {
    void sub_0043b180();
};

int sub_0053dfa0(...);
// @baa 0x0043b180
void C_0043b180::sub_0043b180(void)
{
    int param_1 = (int)this;
  wxWindowDisabler *this_;
  this_ = *(wxWindowDisabler **)(param_1 + 0x1c0);
  if (this_ != (wxWindowDisabler *)0x0) {
    ((wxWindowDisabler *)(this_))->~wxWindowDisabler();
    sub_0053dfa0(this_);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}

struct C_0043b690 {
    void sub_0043b690(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x0043b690
void C_0043b690::sub_0043b690(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}
