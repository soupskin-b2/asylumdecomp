// Core_1e00000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

// This dialog's source file was built without optimization (its GetEventTable at 0x012775e0 and
// this table's initializer both keep a frame pointer and evaluate arguments one by one).
#pragma optimize("", off)
class WxClass_026d5180 : public wxDialog
{
public:
	void sub_01277560(wxCommandEvent& In);
	void sub_01277590(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e045c0
BEGIN_EVENT_TABLE(WxClass_026d5180, wxDialog)
	EVT_BUTTON(9051, WxClass_026d5180::sub_01277560)
	EVT_BUTTON(9052, WxClass_026d5180::sub_01277590)
END_EVENT_TABLE()
