// Dialogs.cpp: 7 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_025e90f4[];
// @baa 0x01426e50
int sub_01426e50(void) { return (int)g_025e90f4; }

extern char g_026db3d0[];
// @baa 0x01426e60
int sub_01426e60(void) { return (int)g_026db3d0; }

extern char g_025e90fc[];
// @baa 0x01426e70
int sub_01426e70(void) { return (int)g_025e90fc; }

extern char g_026db3fc[];
// @baa 0x01426e80
int sub_01426e80(void) { return (int)g_026db3fc; }

class wxColourDialog;
class wxColourDialog {
    public:
    public: __declspec(dllimport) wxColourDialog();
    friend struct C;
};

struct C {
    wxColourDialog * sub_01426e90();
};

extern undefined * g_0228ca78;
// @baa 0x01426e90
wxColourDialog * C::sub_01426e90(void)
{
    wxColourDialog * param_1 = (wxColourDialog *)this;

  ((wxColourDialog *)(param_1))->wxColourDialog::wxColourDialog();
  *(undefined ***)param_1 = &g_0228ca78;
  return param_1;
}

struct C_0142fbc0 { void sub_0142eb30(); void sub_0142fbc0(int); };

// @baa 0x0142fbc0
void C_0142fbc0::sub_0142fbc0(int) { sub_0142eb30(); }

struct S_0142eb30 {
    void sub_0142eb30();
};

struct S_0142fd40 {
    char pad[0x1a0];
    S_0142eb30* f_1a0;
    void sub_0142fd40();
};

// @baa 0x0142fd40
void S_0142fd40::sub_0142fd40()
{
    f_1a0->sub_0142eb30();
}
