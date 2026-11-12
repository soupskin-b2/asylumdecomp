// UIEditorDialogs.cpp: 3 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_013f1850(byte);
};

int sub_0053dfa0(...);
int sub_013f17e0(void);
// @baa 0x013f1850
undefined4 C::sub_013f1850(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013f17e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013f1870 {
    void sub_013f1870(undefined4);
};

int sub_013ec340(...);
// @baa 0x013f1870
void C_013f1870::sub_013f1870(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_013ec340(param_2,param_1 + 8);
  return;
}

// UIEditorDialogs.cpp
class wxCommandEvent
{
public:
	__declspec(dllimport) int GetSelection() const;
};

struct C_013f1ef0
{
	void sub_013f1c20(int Selection);
	void sub_013f1ef0(wxCommandEvent* Command);
};

// @baa 0x013f1ef0
void C_013f1ef0::sub_013f1ef0(wxCommandEvent* Command)
{
	sub_013f1c20(Command->GetSelection());
}
