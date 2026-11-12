// Core_1df0000.cpp: 26 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxClass_025e8688 : public wxFrame
{
public:
	void sub_0119d9b0(wxCommandEvent& In);
	void sub_0119db30(wxCommandEvent& In);
	void sub_0119db80(wxCloseEvent& In);
	void sub_011a9540(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfef60
BEGIN_EVENT_TABLE(WxClass_025e8688, wxFrame)
	EVT_CLOSE(WxClass_025e8688::sub_0119db80)
	EVT_LISTBOX(12953, WxClass_025e8688::sub_0119db30)
	EVT_BUTTON(12951, WxClass_025e8688::sub_0119d9b0)
	EVT_BUTTON(12952, WxClass_025e8688::sub_011a9540)
END_EVENT_TABLE()

class WxClass_025e8590 : public wxDialog
{
public:
	void sub_01114f60(wxCommandEvent& In);
	void sub_0111a140(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa0a0
BEGIN_EVENT_TABLE(WxClass_025e8590, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8590::sub_0111a140)
	EVT_BUTTON(wxID_CLOSE, WxClass_025e8590::sub_01114f60)
END_EVENT_TABLE()

class WxTrackableWindow : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxBrowser : public WxTrackableWindow
{
	DECLARE_EVENT_TABLE()
};

class WxDynamicShadowStatsBrowser : public WxBrowser
{
public:
	void sub_0111bdb0(wxSizeEvent& In);
	void sub_01127ef0(wxListEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb620
BEGIN_EVENT_TABLE(WxDynamicShadowStatsBrowser, WxBrowser)
	EVT_SIZE(WxDynamicShadowStatsBrowser::sub_0111bdb0)
	EVT_LIST_ITEM_ACTIVATED(20029, WxDynamicShadowStatsBrowser::sub_01127ef0)
END_EVENT_TABLE()

class WxTrackableDialog : public wxDialog
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021c9294 : public WxTrackableDialog
{
public:
	void sub_0115b310(wxCommandEvent& In);
	void sub_0115b330(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfe570
BEGIN_EVENT_TABLE(WxClass_021c9294, WxTrackableDialog)
	EVT_BUTTON(wxID_OK, WxClass_021c9294::sub_0115b310)
	EVT_SIZE(WxClass_021c9294::sub_0115b330)
END_EVENT_TABLE()

class WxClass_025e85b0 : public wxBitmapButton
{
public:
	void sub_01115390(wxMouseEvent& In);
	void sub_011153c0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa4d0
BEGIN_EVENT_TABLE(WxClass_025e85b0, wxBitmapButton)
	EVT_RIGHT_DOWN(WxClass_025e85b0::sub_01115390)
	EVT_RIGHT_UP(WxClass_025e85b0::sub_011153c0)
END_EVENT_TABLE()

class WxDockableWindowMenuHandler : public wxEvtHandler
{
public:
	void sub_01116c60(wxAuiManagerEvent& In);
	void sub_0111e9d0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb5a0
BEGIN_EVENT_TABLE(WxDockableWindowMenuHandler, wxEvtHandler)
	EVT_MENU(wxID_ANY, WxDockableWindowMenuHandler::sub_0111e9d0)
	EVT_AUI_PANE_CLOSE(WxDockableWindowMenuHandler::sub_01116c60)
END_EVENT_TABLE()

class WxClass_025e85c0 : public wxPanel
{
public:
	void sub_011327f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa6d0
BEGIN_EVENT_TABLE(WxClass_025e85c0, wxPanel)
	EVT_BUTTON(17143, WxClass_025e85c0::sub_011327f0)
END_EVENT_TABLE()

class WxClass_025e8610 : public wxDialog
{
public:
	void sub_01116d20(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb770
BEGIN_EVENT_TABLE(WxClass_025e8610, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8610::sub_01116d20)
END_EVENT_TABLE()

class WxClass_025e85b0_01dfa550 : public wxBitmapButton
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021afb50 : public WxClass_025e85b0_01dfa550
{
public:
	void sub_01115570(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa550
BEGIN_EVENT_TABLE(WxClass_021afb50, WxClass_025e85b0_01dfa550)
	EVT_COMMAND_RANGE(6398, 6404, wxEVT_COMMAND_BUTTON_CLICKED, WxClass_021afb50::sub_01115570)
END_EVENT_TABLE()

class WxClass_025e8618 : public wxDialog
{
public:
	void sub_01136e30(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb7e0
BEGIN_EVENT_TABLE(WxClass_025e8618, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8618::sub_01136e30)
END_EVENT_TABLE()

class WxClass_025e8620 : public wxDialog
{
public:
	void sub_01116d80(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb850
BEGIN_EVENT_TABLE(WxClass_025e8620, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8620::sub_01116d80)
END_EVENT_TABLE()

class WxClass_025e85b0_01dffd30 : public wxBitmapButton
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021dfbd0 : public WxClass_025e85b0_01dffd30
{
public:
	void sub_011c0f80(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dffd30
BEGIN_EVENT_TABLE(WxClass_021dfbd0, WxClass_025e85b0_01dffd30)
	EVT_BUTTON(6405, WxClass_021dfbd0::sub_011c0f80)
END_EVENT_TABLE()

class WxClass_025e85a8 : public wxPanel
{
public:
	void sub_01131930(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa460
BEGIN_EVENT_TABLE(WxClass_025e85a8, wxPanel)
	EVT_SIZE(WxClass_025e85a8::sub_01131930)
END_EVENT_TABLE()

class WxClass_025e85b0_01dfa5b0 : public wxBitmapButton
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021afc18 : public WxClass_025e85b0_01dfa5b0
{
public:
	void sub_01115630(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa5b0
BEGIN_EVENT_TABLE(WxClass_021afc18, WxClass_025e85b0_01dfa5b0)
	EVT_LEFT_DOWN(WxClass_021afc18::sub_01115630)
END_EVENT_TABLE()

class WxClass_025e85b8 : public wxTextCtrl
{
public:
	void sub_011158e0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa660
BEGIN_EVENT_TABLE(WxClass_025e85b8, wxTextCtrl)
	EVT_CHAR(WxClass_025e85b8::sub_011158e0)
END_EVENT_TABLE()

class WxTreeCtrl : public wxWindow
{
public:
	void sub_01119080(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa770
BEGIN_EVENT_TABLE(WxTreeCtrl, wxWindow)
	EVT_RIGHT_DOWN(WxTreeCtrl::sub_01119080)
END_EVENT_TABLE()

class WxEventCatchingAuiManager : public wxAuiManager
{
public:
	void sub_01116bc0(wxAuiManagerEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfb500
BEGIN_EVENT_TABLE(WxEventCatchingAuiManager, wxAuiManager)
	EVT_AUI_PANE_CLOSE(WxEventCatchingAuiManager::sub_01116bc0)
END_EVENT_TABLE()

class WxClass_025e8660 : public wxComboBox
{
public:
	void sub_0115b120(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfe450
BEGIN_EVENT_TABLE(WxClass_025e8660, wxComboBox)
	EVT_MOUSEWHEEL(WxClass_025e8660::sub_0115b120)
END_EVENT_TABLE()

class WxClass_025e8680 : public wxFrame
{
public:
	void sub_011a9450(wxCloseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfeef0
BEGIN_EVENT_TABLE(WxClass_025e8680, wxFrame)
	EVT_CLOSE(WxClass_025e8680::sub_011a9450)
END_EVENT_TABLE()

class WxClass_025e8698 : public wxHtmlWindow
{
public:
	void sub_011c0cc0(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dffa90
BEGIN_EVENT_TABLE(WxClass_025e8698, wxHtmlWindow)
	EVT_SIZE(WxClass_025e8698::sub_011c0cc0)
END_EVENT_TABLE()

class WxLogWindowFrame : public wxFrame
{
public:
	void sub_011c0d60(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dffb30
BEGIN_EVENT_TABLE(WxLogWindowFrame, wxFrame)
	EVT_SIZE(WxLogWindowFrame::sub_011c0d60)
END_EVENT_TABLE()

class WxClass_025e85b0_01dfa610 : public wxBitmapButton
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021afc18_01dfa610 : public WxClass_025e85b0_01dfa610
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021afda0 : public WxClass_021afc18_01dfa610
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa610
BEGIN_EVENT_TABLE(WxClass_021afda0, WxClass_021afc18_01dfa610)
END_EVENT_TABLE()

class WxClass_025e85e8 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfaf70
BEGIN_EVENT_TABLE(WxClass_025e85e8, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e8598 : public wxEvtHandler
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfa130
BEGIN_EVENT_TABLE(WxClass_025e8598, wxEvtHandler)
END_EVENT_TABLE()

class WxClass_025e86c0 : public wxPanel
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfffd0
BEGIN_EVENT_TABLE(WxClass_025e86c0, wxPanel)
END_EVENT_TABLE()

class WxClass_025e8678 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01dfeea0
BEGIN_EVENT_TABLE(WxClass_025e8678, wxToolBar)
END_EVENT_TABLE()
