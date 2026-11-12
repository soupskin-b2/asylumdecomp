// UnrealEd_0420000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Wx.h"

struct WxDialog_ : public wxDialog
{
    int Flag0;
    int Flag1;
    wxWindowBase *ChildWindow;

    virtual void InitDialog(); // 0x0042f4f0
};

// @baa 0x0042f4f0
void WxDialog_::InitDialog()
{
    wxWindowBase::InitDialog();
    ChildWindow->SetFocus();
}
