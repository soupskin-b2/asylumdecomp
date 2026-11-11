// EditorFrame.cpp: 22 functions
// Placed here by: neighbours 21, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_0118e670(); void sub_01117360(int); };

// @baa 0x01117360
void C::sub_01117360(int) { sub_0118e670(); }

struct C_01117370 { void sub_0118e340(); void sub_01117370(int); };

// @baa 0x01117370
void C_01117370::sub_01117370(int) { sub_0118e340(); }

int __cdecl sub_0118e7a0(int);
struct S {
    void sub_01117390(int arg1);
};

// @baa 0x01117390
void __thiscall S::sub_01117390(int arg1)
{
    sub_0118e7a0(1);
}

int sub_0118e7a0(int arg1);
// @baa 0x011173a0
void __stdcall sub_011173a0(int arg1)
{
	sub_0118e7a0(0);
}

struct S_011173b0 {
    void sub_011173b0(int arg1);
};

// @baa 0x011173b0
void __thiscall S_011173b0::sub_011173b0(int arg1)
{
    sub_0118e7a0(1);
}

int sub_0118deb0(int arg1);
// @baa 0x011173c0
void __stdcall sub_011173c0(int arg1)
{
	sub_0118deb0(0);
}

int __cdecl sub_0118deb0(int);
struct S_011173d0 {
    void sub_011173d0(int arg1);
};

// @baa 0x011173d0
void __thiscall S_011173d0::sub_011173d0(int arg1)
{
    sub_0118deb0(1);
}

int sub_0117f4f0(int arg1);
// @baa 0x011173e0
void __stdcall sub_011173e0(int arg1)
{
	sub_0117f4f0(0);
}

int __cdecl sub_0117f4f0(int);
struct S_011173f0 {
    void sub_011173f0(int arg1);
};

// @baa 0x011173f0
void __thiscall S_011173f0::sub_011173f0(int arg1)
{
    sub_0117f4f0(1);
}

extern int g_025d5748;
// @baa 0x011176c0
void __stdcall sub_011176c0(int param)
{
    g_025d5748 ^= 1;
}

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C_01117710;
};

struct C_01117710 {
    void sub_01117710(wxCommandEvent *);
    int sub_0129db10();
};

// @baa 0x01117710
void C_01117710::sub_01117710(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x1e8) = 1;
    ((C_01117710 *)((*(char **)((char *)this + 0x1b8))))->sub_0129db10();
    return;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  return;
}

class wxDialog;
class wxDialog {
    public:
    public: __declspec(dllimport) virtual int ShowModal();
    friend struct C_0112b960;
};

struct C_0112b960 {
    void sub_0112b960(undefined4);
    int sub_00547da0(int);
};

// @baa 0x0112b960
void C_0112b960::sub_0112b960(undefined4 param_2)
{
    wxDialog * param_1 = (wxDialog *)this;
  ((C_0112b960 *)(((char *)this + 0x1ac)))->sub_00547da0(param_2);
  ((wxDialog *)(param_1))->wxDialog::ShowModal();
  return;
}

struct C_0112b980 {
    undefined4 sub_0112b980(byte);
};

int sub_0053dfa0(...);
int sub_0112b8a0(void);
// @baa 0x0112b980
undefined4 C_0112b980::sub_0112b980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0112b8a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0112ba60 {
    undefined4 sub_0112ba60(byte);
};

int sub_0112b9a0(void);
// @baa 0x0112ba60
undefined4 C_0112ba60::sub_0112ba60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0112b9a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0113a870(int);
struct S0113aa30 {
    void sub_0113aa30(int);
};

// @baa 0x0113aa30
void S0113aa30::sub_0113aa30(int arg)
{
    sub_0113a870(-1);
}

int sub_01145110(int);
struct Frame {
  void sub_01145370(int a1);
};

// @baa 0x01145370
void Frame::sub_01145370(int a1)
{
  sub_01145110(-1);
}

struct C_01154b50 {
    int sub_01154b50();
};

int sub_011465c0(void);
// @baa 0x01154b50
int C_01154b50::sub_01154b50(void)
{
    int param_1 = (int)this;

  sub_011465c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01154b70 {
    int sub_01154b70();
};

int sub_01146620(void);
// @baa 0x01154b70
int C_01154b70::sub_01154b70(void)
{
    int param_1 = (int)this;

  sub_01146620();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01154b90 {
    int sub_01154b90();
};

int sub_01146680(void);
// @baa 0x01154b90
int C_01154b90::sub_01154b90(void)
{
    int param_1 = (int)this;

  sub_01146680();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01154df0 { void sub_01154bb0(int); C_01154df0 *sub_01154df0(int); };

// @baa 0x01154df0
C_01154df0 *C_01154df0::sub_01154df0(int a) { sub_01154bb0(a); return this; }

struct C_0147baf0 {
    undefined4 sub_0147baf0(byte);
};

int sub_01118ab0(void);
// @baa 0x0147baf0
undefined4 C_0147baf0::sub_0147baf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01118ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0155abf0
void sub_0155abf0(void) {  }
