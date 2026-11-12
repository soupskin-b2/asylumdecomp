// UnrealEd_0520000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00520400(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x00520400
void C::sub_00520400(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

class __declspec(dllimport) wxObject
{
public:
    wxObject() { m_refData = 0; }
    virtual ~wxObject();
    void *m_refData;
};

class __declspec(dllimport) wxGDIObject : public wxObject
{
public:
    wxGDIObject() { }
    virtual ~wxGDIObject();
};

class __declspec(dllimport) wxGDIImage : public wxGDIObject
{
public:
    wxGDIImage() { }
    virtual ~wxGDIImage();
};

class __declspec(dllimport) wxIcon : public wxGDIImage
{
public:
    wxIcon() { }
    virtual ~wxIcon();
};

class __declspec(dllimport) wxWindow
{
public:
    wxWindow();
    virtual ~wxWindow();
private:
    char m_pad[0x140];
};

struct sub_0052fec0 : public wxWindow
{
    sub_0052fec0(int a, int b, int c, int d, int e);

    void sub_0052b830(int a, int b, int c, int d, int e);

    int   m144;
    int   m148;
    char  m14c;
    char  m14d;
    char  m14e[2];
    int   m150;
    int   m154;
    int   m158;
    wxIcon m_icon1;
    wxIcon m_icon2;
    wxIcon m_icon3;
    wxIcon m_icon4;
    int   m17c;
    int   m180;
    float m184;
};

// @baa 0x0052fec0
sub_0052fec0::sub_0052fec0(int a, int b, int c, int d, int e)
    : m144(0), m148(0), m14c(0), m14d(0), m150(0), m154(0), m158(0),
      m17c(0), m180(0)
{
    m184 = -2147483648.0f;
    sub_0052b830(a, b, c, d, e);
}

struct C_00520270
{
    char pad_00[0x14];
    INT Value_14;
    char pad_18[0x5c];
    INT Value_74;

    bool sub_00520270();
};

// @baa 0x00520270
bool C_00520270::sub_00520270()
{
    return Value_74 == Value_14;
}
