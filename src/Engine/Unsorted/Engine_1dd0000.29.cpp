// Engine_1dd0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* FaceFX Studio. This comment stands before the include on purpose: FaceFX Studio was not built
 * with the editor's precompiled header, and wxWidgets' inline members (here the event table
 * entry's constructor) are only expanded in place when the header is not precompiled. */
#include "ue3/Wx.h"

/* FaceFX Studio's main window. It has no wxClassInfo of its own, so the image keeps no name for
 * it; FxStudioMainWin is what the FaceFX Studio sources call their main frame. */
extern const wxEventType g_0261762c;
class FxStudioMainWin : public wxFrame
{
public:
	void sub_00405a30(wxMenuEvent& In);
	void sub_00405a40(wxCommandEvent& In);
	void sub_00405a50(wxCommandEvent& In);
	void sub_00405a60(wxCommandEvent& In);
	void sub_00405a70(wxCommandEvent& In);
	void sub_00405a80(wxCommandEvent& In);
	void sub_00405a90(wxCommandEvent& In);
	void sub_00405aa0(wxCommandEvent& In);
	void sub_00405b00(wxNotebookEvent& In);
	void sub_00405c40(wxCommandEvent& In);
	void sub_00405ff0(wxCommandEvent& In);
	void sub_004060c0(wxSizeEvent& In);
	void sub_004060d0(wxPaintEvent& In);
	void sub_00408f70(wxCommandEvent& In);
	void sub_004090c0(wxHelpEvent& In);
	void sub_0040f2f0(wxCommandEvent& In);
	void sub_0040f430(wxCommandEvent& In);
	void sub_0040f560(wxCommandEvent& In);
	void sub_00418630(wxCommandEvent& In);
	void sub_004188f0(wxUpdateUIEvent& In);
	void sub_0041da20(wxCommandEvent& In);
	void sub_0041db90(wxCommandEvent& In);
	void sub_0041ded0(wxCommandEvent& In);
	void sub_00422c90(wxCommandEvent& In);
	void sub_00427600(wxCommandEvent& In);
	void sub_00429c30(wxCommandEvent& In);
	void sub_0042a2e0(wxCommandEvent& In);
	void sub_0042a360(wxCommandEvent& In);
	void sub_0042a3e0(wxCommandEvent& In);
	void sub_0042a6f0(wxCommandEvent& In);
	void sub_0042ac70(wxCommandEvent& In);
	void sub_0042b460(wxCommandEvent& In);
	void sub_0042b870(wxCommandEvent& In);
	void sub_0042ba30(wxCommandEvent& In);
	void sub_0042be40(wxCommandEvent& In);
	void sub_0042c2b0(wxCommandEvent& In);
	void sub_0042c450(wxCommandEvent& In);
	void sub_0042c5f0(wxCommandEvent& In);
	void sub_0042c6a0(wxCloseEvent& In);
	void sub_0042e360(wxCommandEvent& In);
	void sub_0042e3e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd0a90
BEGIN_EVENT_TABLE(FxStudioMainWin, wxFrame)
	EVT_MENU_OPEN(FxStudioMainWin::sub_00405a30)
	EVT_MENU(wxID_EXIT, FxStudioMainWin::sub_0042c5f0)
	EVT_MENU(6000, FxStudioMainWin::sub_00405a40)
	EVT_MENU(6001, FxStudioMainWin::sub_00405a50)
	wx__DECLARE_EVT2(g_0261762c, 6001, wxID_ANY, wxCommandEventHandler(FxStudioMainWin::sub_00405a60))
	EVT_MENU_RANGE(wxID_FILE1, wxID_FILE9, FxStudioMainWin::sub_00405a70)
	EVT_MENU(6002, FxStudioMainWin::sub_00405a80)
	EVT_MENU(6003, FxStudioMainWin::sub_00427600)
	EVT_MENU(6004, FxStudioMainWin::sub_00422c90)
	EVT_MENU(6005, FxStudioMainWin::sub_00405a90)
	EVT_MENU(6006, FxStudioMainWin::sub_00429c30)
	EVT_MENU(6007, FxStudioMainWin::sub_0042e360)
	EVT_MENU(6008, FxStudioMainWin::sub_0042a2e0)
	EVT_MENU(6009, FxStudioMainWin::sub_0042e3e0)
	EVT_MENU(6010, FxStudioMainWin::sub_0042a360)
	EVT_MENU(6011, FxStudioMainWin::sub_0040f2f0)
	EVT_MENU(6012, FxStudioMainWin::sub_00405aa0)
	EVT_MENU(6013, FxStudioMainWin::sub_0042a3e0)
	EVT_MENU(6014, FxStudioMainWin::sub_0040f430)
	EVT_MENU(6015, FxStudioMainWin::sub_0040f560)
	EVT_MENU(6016, FxStudioMainWin::sub_00418630)
	EVT_MENU(6027, FxStudioMainWin::sub_0041da20)
	EVT_MENU(6029, FxStudioMainWin::sub_00405c40)
	EVT_MENU(6030, FxStudioMainWin::sub_00405ff0)
	EVT_MENU(6017, FxStudioMainWin::sub_0042a6f0)
	EVT_MENU(6018, FxStudioMainWin::sub_0042ac70)
	EVT_MENU(6019, FxStudioMainWin::sub_0042b460)
	EVT_MENU(6020, FxStudioMainWin::sub_0042b870)
	EVT_MENU(6021, FxStudioMainWin::sub_0042ba30)
	EVT_MENU(6022, FxStudioMainWin::sub_0042be40)
	EVT_MENU(6023, FxStudioMainWin::sub_0041db90)
	EVT_MENU(6024, FxStudioMainWin::sub_0041ded0)
	EVT_MENU(6025, FxStudioMainWin::sub_0042c2b0)
	EVT_MENU(6026, FxStudioMainWin::sub_0042c450)
	EVT_SIZE(FxStudioMainWin::sub_004060c0)
	EVT_NOTEBOOK_PAGE_CHANGED(6036, FxStudioMainWin::sub_00405b00)
	EVT_CLOSE(FxStudioMainWin::sub_0042c6a0)
	EVT_PAINT(FxStudioMainWin::sub_004060d0)
	EVT_UPDATE_UI_RANGE(6000, 6029, FxStudioMainWin::sub_004188f0)
	EVT_MENU_RANGE(6031, 6035, FxStudioMainWin::sub_00408f70)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxStudioMainWin::sub_004090c0)
END_EVENT_TABLE()
