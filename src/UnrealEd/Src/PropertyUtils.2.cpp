// PropertyUtils.cpp (part 2 of 3): 32 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

extern char g_025e871c[];
// @baa 0x011f2520
int sub_011f2520(void) { return (int)g_025e871c; }

extern char g_026d2bcc[];
// @baa 0x011f2530
int sub_011f2530(void) { return (int)g_026d2bcc; }

struct C_012053a0 {
    undefined4 sub_012053a0(byte);
};

int sub_011fb5a0(void);
// @baa 0x012053a0
undefined4 C_012053a0::sub_012053a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011fb5a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0120fab0
IMPLEMENT_CLASS_AT(UPropertyInputArray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3448);

// @baa 0x0120fbc0
bool UPropertyInputArray::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0120fc00
IMPLEMENT_CLASS_AT(UPropertyInputArrayItemBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3449);

// @baa 0x0120fd10
bool UPropertyInputArrayItemBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211b30
IMPLEMENT_CLASS_AT(UPropertyInputColor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3450);

// @baa 0x01211c40
bool UPropertyInputColor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211c80
IMPLEMENT_CLASS_AT(UPropertyInputBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3451);

// @baa 0x01211d90
bool UPropertyInputBool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211dd0
IMPLEMENT_CLASS_AT(UPropertyInputArrayItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3452);

// @baa 0x01211ee0
bool UPropertyInputArrayItem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01211f20
IMPLEMENT_CLASS_AT(UPropertyInputText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3454);

// @baa 0x01212030
bool UPropertyInputText::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01212070
IMPLEMENT_CLASS_AT(UPropertyInputEditInline, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3457);

// @baa 0x01212180
bool UPropertyInputEditInline::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01213090
IMPLEMENT_CLASS_AT(UPropertyInputNumeric, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3453);

// @baa 0x012131a0
bool UPropertyInputNumeric::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01214360
IMPLEMENT_CLASS_AT(UPropertyInputRotation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3455);

// @baa 0x01214470
bool UPropertyInputRotation::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012144b0
IMPLEMENT_CLASS_AT(UPropertyInputInteger, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PropertyUtils.cpp", 3456);

// @baa 0x012145c0
bool UPropertyInputInteger::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01202850
/* Not supported by this proxy (asserts, PropertyUtils.h). */
INT UPropertyInputProxy::vf_11c(INT, INT)
{
#line 325 "UnrealEd/Inc\\PropertyUtils.h"
	check(0);
	return 0;
}

#line 285 "candidate.cpp"
