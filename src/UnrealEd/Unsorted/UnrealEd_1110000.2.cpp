// UnrealEd_1110000.cpp (part 2 of 8): 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxBitmap;
class wxImage;
class wxBitmap {
    public:
    public: __declspec(dllimport) wxBitmap(wxImage const &,int);
    friend struct C;
};

class wxImage {
    public:
};

struct C {
    wxBitmap * sub_01114e20(wxImage *, int);
};

extern undefined * g_021bb8b0;
// @baa 0x01114e20
wxBitmap * C::sub_01114e20(wxImage * param_2, int param_3)
{
    wxBitmap * param_1 = (wxBitmap *)this;
  ((wxBitmap *)(param_1))->wxBitmap::wxBitmap(*(const wxImage *)(param_2), param_3);
  *(undefined ***)param_1 = &g_021bb8b0;
  return param_1;
}

class wxBitmapButton;
class wxBitmapButton {
    public:
    public: __declspec(dllimport) wxBitmapButton();
    friend struct C_01115440;
};

struct C_01115440 {
    wxBitmapButton * sub_01115440();
};

extern undefined * g_021bbc58;
// @baa 0x01115440
wxBitmapButton * C_01115440::sub_01115440(void)
{
    wxBitmapButton * param_1 = (wxBitmapButton *)this;

  ((wxBitmapButton *)(param_1))->wxBitmapButton::wxBitmapButton();
  *(undefined ***)param_1 = &g_021bbc58;
  *(undefined4 *)(param_1 + 0x188) = 0;
  return param_1;
}

class wxCloseEvent;
class wxWindowBase;
class wxCloseEvent {
    public:
    public: __declspec(dllimport) void Veto(bool);
    friend struct C_01116ad0;
};

class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Hide();
    friend struct C_01116ad0;
};

struct C_01116ad0 {
    void sub_01116ad0(wxCloseEvent *);
};

// @baa 0x01116ad0
void C_01116ad0::sub_01116ad0(wxCloseEvent * param_2)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  ((wxWindowBase *)(param_1))->wxWindowBase::Hide();
  ((wxCloseEvent *)(param_2))->wxCloseEvent::Veto(true);
  return;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01117d50;
};

struct C_01117d50 {
    void sub_01117d50(wxUpdateUIEvent *);
};

// @baa 0x01117d50
void C_01117d50::sub_01117d50(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x1e8) == 1);
  return;
}

class wxComboBox;
class wxPoint;
class wxSize;
class wxString;
class wxValidator;
class wxWindow;
class wxComboBox {
    public:
    public: __declspec(dllimport) wxComboBox(wxWindow *,int,wxString const &,wxPoint const &,wxSize const &,int,wxString const * const,long,wxValidator const &,wxString const &);
    friend struct C_011191c0;
};

class wxPoint {
    public:
};

class wxSize {
    public:
};

class wxString {
    public:
};

class wxValidator {
    public:
};

class wxWindow {
    public:
};

struct C_011191c0 {
    wxComboBox * sub_011191c0(wxWindow *, int, wxString *, wxPoint *, wxSize *, int, wxString *, long, wxValidator *, wxString *);
};

extern undefined4 g_021bd2e8;
extern undefined * g_021bd328;
// @baa 0x011191c0
wxComboBox * C_011191c0::sub_011191c0(wxWindow * param_2, int param_3, wxString * param_4, wxPoint * param_5, wxSize * param_6, int param_7, wxString * param_8, long param_9, wxValidator * param_10, wxString * param_11)
{
    wxComboBox * param_1 = (wxComboBox *)this;
  ((wxComboBox *)(param_1))->wxComboBox::wxComboBox(param_2, param_3, *(const wxString *)(param_4), *(const wxPoint *)(param_5), *(const wxSize *)(param_6), param_7, param_8, param_9, *(const wxValidator *)(param_10), *(const wxString *)(param_11));
  *(undefined ***)param_1 = &g_021bd328;
  *(undefined ***)(param_1 + 0x150) = (undefined **)(&g_021bd2e8);
  return param_1;
}

class wxAuiManager;
class wxAuiManager {
    public:
    public: __declspec(dllimport) wxAuiManager(wxWindow *,unsigned int);
    friend struct C_01119240;
};

struct C_01119240 {
    wxAuiManager * sub_01119240(wxWindow *, uint);
};

extern undefined * g_021bd658;
// @baa 0x01119240
wxAuiManager * C_01119240::sub_01119240(wxWindow * param_2, uint param_3)
{
    wxAuiManager * param_1 = (wxAuiManager *)this;

  ((wxAuiManager *)(param_1))->wxAuiManager::wxAuiManager(param_2, param_3);
  *(undefined ***)param_1 = &g_021bd658;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return param_1;
}

class wxEvent;
class wxEvent {
    public:
    protected: __declspec(dllimport) wxEvent(wxEvent const &);
    friend struct C_01119350;
};

struct C_01119350 {
    wxEvent * sub_01119350(wxEvent *);
};

extern undefined * g_021bd6a0;
// @baa 0x01119350
wxEvent * C_01119350::sub_01119350(wxEvent * param_2)
{
    wxEvent * param_1 = (wxEvent *)this;
  ((wxEvent *)(param_1))->wxEvent::wxEvent(*(const wxEvent *)(param_2));
  *(undefined ***)param_1 = &g_021bd6a0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}

int sub_00c38ac0(void);
int sub_0053dfa0(...);
// @baa 0x0111d710
undefined4 UObject::sub_0111d710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d730
undefined4 UObject::sub_0111d730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d750
undefined4 UObject::sub_0111d750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d770
undefined4 UObject::sub_0111d770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d790
undefined4 UObject::sub_0111d790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d7b0
undefined4 UObject::sub_0111d7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0111d7d0
undefined4 UObject::sub_0111d7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
