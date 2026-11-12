// AnimAimOffsetEditor.cpp (part 1 of 2): 8 functions
// Placed here by: neighbours 2, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01337190(wxCommandEvent *);
};

// @baa 0x01337190
void C::sub_01337190(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 500) = (uint)bVar1;
  return;
}

// @baa 0x013394e0
IMPLEMENT_CLASS_AT(UAnimNodeEditInfo_AimOffset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimAimOffsetEditor.cpp", 15);

// @baa 0x0133a060
class wxEvent;
class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C_0134c800;
};

struct C_0134c800 {
    void sub_0134c800(wxEvent *);
    int sub_013371e0(int);
    int sub_01343310();
};

// @baa 0x0134c800
void C_0134c800::sub_0134c800(wxEvent * param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x1ec) = 1;
  }
  else if (iVar1 == 5) {
    *(undefined4 *)(param_1 + 0x1ec) = 2;
  }
  else if (iVar1 == 6) {
    *(undefined4 *)(param_1 + 0x1ec) = 3;
  }
  else if (iVar1 == 7) {
    *(undefined4 *)(param_1 + 0x1ec) = 4;
  }
  else if (iVar1 == 8) {
    *(undefined4 *)(param_1 + 0x1ec) = 5;
  }
  else if (iVar1 == 9) {
    *(undefined4 *)(param_1 + 0x1ec) = 6;
  }
  else if (iVar1 == 10) {
    *(undefined4 *)(param_1 + 0x1ec) = 7;
  }
  else if (iVar1 == 0xb) {
    *(undefined4 *)(param_1 + 0x1ec) = 8;
  }
  ((C_0134c800 *)(this))->sub_013371e0(*(undefined4 *)(param_1 + 0x1ec));
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x38) + 0xe0) =
       *(undefined1 *)(param_1 + 0x1ec);
  ((C_0134c800 *)(this))->sub_01343310();
  return;
}

extern char g_02251ba4[];
// @baa 0x013370c0
int sub_013370c0(void) { return (int)g_02251ba4; }

extern char g_026d7d44[];
// @baa 0x013370d0
int sub_013370d0(void) { return (int)g_026d7d44; }

// @baa 0x01342f70

// @baa 0x01343080
bool UAnimNodeEditInfo_AimOffset::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
