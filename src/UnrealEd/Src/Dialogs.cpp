// Dialogs.cpp: 16 functions
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

class wxDialog
{
public:
    __declspec(dllimport) virtual ~wxDialog();
};

extern void* g_0228d0a8[];
struct C_01427090 : public wxDialog
{
    void sub_01427090();
};

// @baa 0x01427090
void C_01427090::sub_01427090()
{
    *(void**)this = g_0228d0a8;
    ((wxDialog*)this)->wxDialog::~wxDialog();
}

void __stdcall sub_0142ea40(INT A, INT B);
// @baa 0x0142efa0
void __stdcall sub_0142efa0(INT Unused)
{
    sub_0142ea40(1, 0);
}

// @baa 0x0142efb0
void __stdcall sub_0142efb0(INT Unused)
{
    sub_0142ea40(4, 0);
}

// @baa 0x0142efc0
void __stdcall sub_0142efc0(INT Unused)
{
    sub_0142ea40(16, 0);
}

// @baa 0x0142efd0
void __stdcall sub_0142efd0(INT Unused)
{
    sub_0142ea40(64, 0);
}

// @baa 0x0142f200
void __stdcall sub_0142f200(INT Unused)
{
    sub_0142ea40(0, 1);
}

// @baa 0x0142f210
void __stdcall sub_0142f210(INT Unused)
{
    sub_0142ea40(0, 4);
}

// @baa 0x0142f220
void __stdcall sub_0142f220(INT Unused)
{
    sub_0142ea40(0, 16);
}

// @baa 0x0142f230
void __stdcall sub_0142f230(INT Unused)
{
    sub_0142ea40(0, 64);
}
