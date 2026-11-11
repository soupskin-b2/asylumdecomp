// PropertyUtils.cpp (part 2 of 3): 8 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxBitmap;
class wxBitmapButton;
class wxPoint;
class wxSize;
class wxString;
class wxValidator;
class wxWindow;
class wxBitmap {
    public:
};

class wxBitmapButton {
    public:
    public: __declspec(dllimport) wxBitmapButton(wxWindow *,int,wxBitmap const &,wxPoint const &,wxSize const &,long,wxValidator const &,wxString const &);
    friend struct C;
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

struct C {
    wxBitmapButton * sub_011f1fa0(wxWindow *, int, wxBitmap *, wxPoint *, wxSize *, long, wxValidator *, wxString *);
};

extern undefined * g_021f4be0;
// @baa 0x011f1fa0
wxBitmapButton * C::sub_011f1fa0(wxWindow * param_2, int param_3, wxBitmap * param_4, wxPoint * param_5, wxSize * param_6, long param_7, wxValidator * param_8, wxString * param_9)
{
    wxBitmapButton * param_1 = (wxBitmapButton *)this;
  ((wxBitmapButton *)(param_1))->wxBitmapButton::wxBitmapButton(param_2, param_3, *(const wxBitmap *)(param_4), *(const wxPoint *)(param_5), *(const wxSize *)(param_6), param_7, *(const wxValidator *)(param_8), *(const wxString *)(param_9));
  *(undefined ***)param_1 = &g_021f4be0;
  return param_1;
}

struct C_011f4610 {
    undefined4 sub_011f4610(byte);
};

int sub_0053dfa0(...);
int sub_011157c0(void);
// @baa 0x011f4610
undefined4 C_011f4610::sub_011f4610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011157c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df70(...);
// @baa 0x01200c20
void UObject::sub_01200c20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_0040fcc0(void);
// @baa 0x01202520
undefined4 UObject::sub_01202520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01202540
undefined4 UObject::sub_01202540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01202560
undefined4 UObject::sub_01202560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01202580
undefined4 UObject::sub_01202580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011fa040
{
    INT field_00;
    INT field_04;
    INT field_08;
    INT field_0c;
    INT field_10;
    INT Value;

    INT* sub_011fa040(INT* Out);
};

// @baa 0x011fa040
INT* C_011fa040::sub_011fa040(INT* Out)
{
    *Out = Value;
    return Out;
}
