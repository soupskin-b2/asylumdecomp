// UnrealEd_0440000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

struct WxDlg_00445480 : public wxDialog
{
	void sub_00445330();
	void sub_00445480(int);
};

// @baa 0x00445480
void WxDlg_00445480::sub_00445480(int)
{
	sub_00445330();
	EndDialog(0x13ed);
}

// Dialog for the graph editor: after removing the node on the selection it closes with its own id.
class wxGraphDlg : public wxDialog
{
public:
    void sub_00445330();
    void sub_004454a0(wxCommandEvent& In);
};

// @baa 0x004454a0
void wxGraphDlg::sub_004454a0(wxCommandEvent& In)
{
    sub_00445330();
    EndDialog(5101);
}
