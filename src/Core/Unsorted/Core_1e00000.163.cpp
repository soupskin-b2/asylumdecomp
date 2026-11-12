// Core_1e00000.cpp: 99 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxClass_025e8fd0 : public wxEvtHandler
{
public:
	void sub_013bd5f0(wxKeyEvent& In);
	void sub_013bd610(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0afa0
BEGIN_EVENT_TABLE(WxClass_025e8fd0, wxEvtHandler)
	EVT_KEY_DOWN(WxClass_025e8fd0::sub_013bd5f0)
	EVT_LEFT_DOWN(WxClass_025e8fd0::sub_013bd610)
	EVT_MIDDLE_DOWN(WxClass_025e8fd0::sub_013bd610)
	EVT_RIGHT_DOWN(WxClass_025e8fd0::sub_013bd610)
	EVT_MOUSEWHEEL(WxClass_025e8fd0::sub_013bd610)
END_EVENT_TABLE()

class WxTreeCtrl : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxUIKismetTreeControl : public WxTreeCtrl
{
public:
	void sub_0149ae20(wxTreeEvent& In);
	void sub_0149ae30(wxTreeEvent& In);
	void sub_014a7f50(wxTreeEvent& In);
	void sub_014a80a0(wxTreeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f910
BEGIN_EVENT_TABLE(WxUIKismetTreeControl, WxTreeCtrl)
	EVT_TREE_ITEM_EXPANDING(9192, WxUIKismetTreeControl::sub_0149ae30)
	EVT_TREE_ITEM_COLLAPSED(9192, WxUIKismetTreeControl::sub_0149ae20)
	EVT_TREE_ITEM_ACTIVATED(9192, WxUIKismetTreeControl::sub_014a7f50)
	EVT_TREE_ITEM_RIGHT_CLICK(9192, WxUIKismetTreeControl::sub_014a80a0)
END_EVENT_TABLE()

class WxTrackableWindow : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxBrowser : public WxTrackableWindow
{
	DECLARE_EVENT_TABLE()
};

class WxPrimitiveStatsBrowser : public WxBrowser
{
public:
	void sub_013a5070(wxSizeEvent& In);
	void sub_013bc2f0(wxListEvent& In);
	void sub_013cece0(wxListEvent& In);
	void sub_013ced50(wxListEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0ac20
BEGIN_EVENT_TABLE(WxPrimitiveStatsBrowser, WxBrowser)
	EVT_SIZE(WxPrimitiveStatsBrowser::sub_013a5070)
	EVT_LIST_COL_CLICK(20028, WxPrimitiveStatsBrowser::sub_013cece0)
	EVT_LIST_COL_RIGHT_CLICK(20028, WxPrimitiveStatsBrowser::sub_013ced50)
	EVT_LIST_ITEM_ACTIVATED(20028, WxPrimitiveStatsBrowser::sub_013bc2f0)
END_EVENT_TABLE()

class WxClass_025e9020 : public wxFrame
{
public:
	void sub_013db9e0(wxCommandEvent& In);
	void sub_013e3330(wxCloseEvent& In);
	void sub_013f9060(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0bbf0
BEGIN_EVENT_TABLE(WxClass_025e9020, wxFrame)
	EVT_CLOSE(WxClass_025e9020::sub_013e3330)
	EVT_MENU(25863, WxClass_025e9020::sub_013db9e0)
	EVT_BUTTON(25863, WxClass_025e9020::sub_013db9e0)
	EVT_MENU(25907, WxClass_025e9020::sub_013f9060)
END_EVENT_TABLE()

class WxClass_025e85b8 : public wxTextCtrl
{
	DECLARE_EVENT_TABLE()
};

class WxPropertyItemTextCtrl : public WxClass_025e85b8
{
public:
	void sub_011f40b0(wxMouseEvent& In);
	void sub_011f40e0(wxFocusEvent& In);
	void sub_011f40f0(wxMouseEvent& In);
	void sub_011f4110(wxFocusEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00c90
BEGIN_EVENT_TABLE(WxPropertyItemTextCtrl, WxClass_025e85b8)
	EVT_SET_FOCUS(WxPropertyItemTextCtrl::sub_011f40e0)
	EVT_KILL_FOCUS(WxPropertyItemTextCtrl::sub_011f4110)
	EVT_LEFT_DOWN(WxPropertyItemTextCtrl::sub_011f40b0)
	EVT_ENTER_WINDOW(WxPropertyItemTextCtrl::sub_011f40f0)
END_EVENT_TABLE()

class WxTrackableFrame : public wxFrame
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021f9f4c : public WxTrackableFrame
{
public:
	void sub_01226450(wxCloseEvent& In);
	void sub_01226550(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01be0
BEGIN_EVENT_TABLE(WxClass_021f9f4c, WxTrackableFrame)
	EVT_CLOSE(WxClass_021f9f4c::sub_01226450)
	EVT_TEXT_ENTER(0, WxClass_021f9f4c::sub_01226550)
	EVT_TEXT_ENTER(1, WxClass_021f9f4c::sub_01226550)
	EVT_TEXT_ENTER(2, WxClass_021f9f4c::sub_01226550)
END_EVENT_TABLE()

class WxClass_025e9114 : public wxFrame
{
public:
	void sub_01429cb0(wxCommandEvent& In);
	void sub_014310f0(wxCloseEvent& In);
	void sub_014312b0(wxCommandEvent& In);
	void sub_014313e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dd80
BEGIN_EVENT_TABLE(WxClass_025e9114, wxFrame)
	EVT_CLOSE(WxClass_025e9114::sub_014310f0)
	EVT_LISTBOX(16399, WxClass_025e9114::sub_01429cb0)
	EVT_BUTTON(16400, WxClass_025e9114::sub_014312b0)
	EVT_BUTTON(16401, WxClass_025e9114::sub_014313e0)
END_EVENT_TABLE()

class WxClass_025e9300 : public wxDialog
{
public:
	void sub_0144d770(wxCommandEvent& In);
	void sub_0144f4d0(wxCommandEvent& In);
	void sub_014531e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dec0
BEGIN_EVENT_TABLE(WxClass_025e9300, wxDialog)
	EVT_BUTTON(19888, WxClass_025e9300::sub_0144f4d0)
	EVT_BUTTON(19889, WxClass_025e9300::sub_0144d770)
	EVT_COMBOBOX(19890, WxClass_025e9300::sub_014531e0)
END_EVENT_TABLE()

class WxClass_025e8fb8 : public wxDialog
{
public:
	void sub_013a50b0(wxCommandEvent& In);
	void sub_013bc590(wxCommandEvent& In);
	void sub_013c0a40(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0ad30
BEGIN_EVENT_TABLE(WxClass_025e8fb8, wxDialog)
	EVT_BUTTON(16408, WxClass_025e8fb8::sub_013a50b0)
	EVT_BUTTON(16412, WxClass_025e8fb8::sub_013bc590)
	EVT_BUTTON(wxID_OK, WxClass_025e8fb8::sub_013c0a40)
END_EVENT_TABLE()

class WxClass_025e93b4 : public wxDialog
{
public:
	void sub_01477920(wxCommandEvent& In);
	void sub_01477930(wxCommandEvent& In);
	void sub_01477940(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f3b0
BEGIN_EVENT_TABLE(WxClass_025e93b4, wxDialog)
	EVT_LISTBOX(32000, WxClass_025e93b4::sub_01477930)
	EVT_LISTBOX_DCLICK(32000, WxClass_025e93b4::sub_01477940)
	EVT_BUTTON(wxID_OK, WxClass_025e93b4::sub_01477920)
END_EVENT_TABLE()

class WxTrackableWindow_01e04230 : public wxWindow
{
public:
	void sub_01284cd0(wxFocusEvent& In);
	void sub_0128c6d0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04230
BEGIN_EVENT_TABLE(WxTrackableWindow_01e04230, wxWindow)
	EVT_SET_FOCUS(WxTrackableWindow_01e04230::sub_01284cd0)
	EVT_HOTKEY(26292, WxTrackableWindow_01e04230::sub_0128c6d0)
	EVT_HOTKEY(26293, WxTrackableWindow_01e04230::sub_0128c6d0)
END_EVENT_TABLE()

class WxClass_025e93cc : public wxDialog
{
public:
	void sub_01476fb0(wxCommandEvent& In);
	void sub_01476fc0(wxCommandEvent& In);
	void sub_0147cf00(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f5c0
BEGIN_EVENT_TABLE(WxClass_025e93cc, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e93cc::sub_01476fb0)
	EVT_BUTTON(wxID_CANCEL, WxClass_025e93cc::sub_01476fc0)
	EVT_BUTTON(wxID_IGNORE, WxClass_025e93cc::sub_0147cf00)
END_EVENT_TABLE()

class WxTrackableFrame_01e04310 : public wxFrame
{
public:
	void sub_01284e30(wxActivateEvent& In);
	void sub_0128c730(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04310
BEGIN_EVENT_TABLE(WxTrackableFrame_01e04310, wxFrame)
	EVT_ACTIVATE(WxTrackableFrame_01e04310::sub_01284e30)
	EVT_HOTKEY(26292, WxTrackableFrame_01e04310::sub_0128c730)
	EVT_HOTKEY(26293, WxTrackableFrame_01e04310::sub_0128c730)
END_EVENT_TABLE()

class WxTrackableDialog : public wxDialog
{
public:
	void sub_01285000(wxActivateEvent& In);
	void sub_0128c790(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e043f0
BEGIN_EVENT_TABLE(WxTrackableDialog, wxDialog)
	EVT_ACTIVATE(WxTrackableDialog::sub_01285000)
	EVT_HOTKEY(26292, WxTrackableDialog::sub_0128c790)
	EVT_HOTKEY(26293, WxTrackableDialog::sub_0128c790)
END_EVENT_TABLE()

class WxClass_025e90bc : public wxTextCtrl
{
public:
	void sub_01436f10(wxFocusEvent& In);
	void sub_0143b6e0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0d7c0
BEGIN_EVENT_TABLE(WxClass_025e90bc, wxTextCtrl)
	EVT_KEY_DOWN(WxClass_025e90bc::sub_0143b6e0)
	EVT_KEY_UP(WxClass_025e90bc::sub_0143b6e0)
	EVT_KILL_FOCUS(WxClass_025e90bc::sub_01436f10)
END_EVENT_TABLE()

class WxClass_025e86c0 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_021e4a20 : public WxClass_025e86c0
{
public:
	void sub_011d5a10(wxCommandEvent& In);
	void sub_011eef90(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e000d0
BEGIN_EVENT_TABLE(WxClass_021e4a20, WxClass_025e86c0)
	EVT_MENU(19877, WxClass_021e4a20::sub_011d5a10)
	EVT_MENU(19878, WxClass_021e4a20::sub_011eef90)
END_EVENT_TABLE()

class WxClass_025e8fe0 : public wxDialog
{
public:
	void sub_013db450(wxCommandEvent& In);
	void sub_013ee030(wxGridEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b3b0
BEGIN_EVENT_TABLE(WxClass_025e8fe0, wxDialog)
	EVT_BUTTON(wxID_CANCEL, WxClass_025e8fe0::sub_013db450)
	EVT_GRID_CMD_LABEL_RIGHT_CLICK(25914, WxClass_025e8fe0::sub_013ee030)
END_EVENT_TABLE()

class WxClass_025e9010 : public wxDialog
{
public:
	void sub_013db860(wxCommandEvent& In);
	void sub_013db890(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0baf0
BEGIN_EVENT_TABLE(WxClass_025e9010, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9010::sub_013db860)
	EVT_BUTTON(26114, WxClass_025e9010::sub_013db890)
END_EVENT_TABLE()

class WxClass_025e9028 : public wxPanel
{
public:
	void sub_01400c90(wxTreeEvent& In);
	void sub_01400cc0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0bcc0
BEGIN_EVENT_TABLE(WxClass_025e9028, wxPanel)
	EVT_TREE_SEL_CHANGED(25904, WxClass_025e9028::sub_01400c90)
	EVT_TEXT(25905, WxClass_025e9028::sub_01400cc0)
END_EVENT_TABLE()

class WxDlgCreateUIStyle : public wxDialog
{
public:
	void sub_013e5f40(wxCommandEvent& In);
	void sub_013f1ef0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c2c0
BEGIN_EVENT_TABLE(WxDlgCreateUIStyle, wxDialog)
	EVT_RADIOBOX(26056, WxDlgCreateUIStyle::sub_013f1ef0)
	EVT_CHOICE(26057, WxDlgCreateUIStyle::sub_013e5f40)
END_EVENT_TABLE()

class WxDlgCreateUISkin : public wxDialog
{
public:
	void sub_013dbf10(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c380
BEGIN_EVENT_TABLE(WxDlgCreateUISkin, wxDialog)
	EVT_TEXT(26107, WxDlgCreateUISkin::sub_013dbf10)
	EVT_TEXT(26108, WxDlgCreateUISkin::sub_013dbf10)
END_EVENT_TABLE()

class WxDlgAddCalloutButton : public wxDialog
{
public:
	void sub_01406b30(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c940
BEGIN_EVENT_TABLE(WxDlgAddCalloutButton, wxDialog)
	EVT_TEXT(26112, WxDlgAddCalloutButton::sub_01406b30)
	EVT_TEXT(26112, WxDlgAddCalloutButton::sub_01406b30)
END_EVENT_TABLE()

class WxClass_025e9318 : public wxDialog
{
public:
	void sub_0144d980(wxCommandEvent& In);
	void sub_0144fb80(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e2f0
BEGIN_EVENT_TABLE(WxClass_025e9318, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9318::sub_0144fb80)
	EVT_BUTTON(wxID_CANCEL, WxClass_025e9318::sub_0144d980)
END_EVENT_TABLE()

class WxClass_025e9358 : public wxDialog
{
public:
	void sub_0144e150(wxCommandEvent& In);
	void sub_01461d00(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0ea50
BEGIN_EVENT_TABLE(WxClass_025e9358, wxDialog)
	EVT_BUTTON(8326, WxClass_025e9358::sub_01461d00)
	EVT_CHECKBOX(8327, WxClass_025e9358::sub_0144e150)
END_EVENT_TABLE()

class WxClass_025e93bc : public wxDialog
{
public:
	void sub_01476d60(wxCommandEvent& In);
	void sub_01479ad0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f460
BEGIN_EVENT_TABLE(WxClass_025e93bc, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e93bc::sub_01479ad0)
	EVT_BUTTON(wxID_CANCEL, WxClass_025e93bc::sub_01476d60)
END_EVENT_TABLE()

class WxClass_025e8fc8 : public wxDialog
{
public:
	void sub_013a3dc0(wxCommandEvent& In);
	void sub_013b61e0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0af10
BEGIN_EVENT_TABLE(WxClass_025e8fc8, wxDialog)
	EVT_LISTBOX(26118, WxClass_025e8fc8::sub_013a3dc0)
	EVT_KEY_DOWN(WxClass_025e8fc8::sub_013b61e0)
END_EVENT_TABLE()

class WxClass_025e8ff8 : public wxListCtrl
{
public:
	void sub_013e1cd0(wxListEvent& In);
	void sub_013e1cf0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b520
BEGIN_EVENT_TABLE(WxClass_025e8ff8, wxListCtrl)
	EVT_RIGHT_UP(WxClass_025e8ff8::sub_013e1cf0)
	EVT_LIST_ITEM_RIGHT_CLICK(25913, WxClass_025e8ff8::sub_013e1cd0)
END_EVENT_TABLE()

class WxUIEditorStatusBar : public wxWindow
{
public:
	void sub_013dc180(wxSizeEvent& In);
	void sub_013dc290(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c470
BEGIN_EVENT_TABLE(WxUIEditorStatusBar, wxWindow)
	EVT_SIZE(WxUIEditorStatusBar::sub_013dc180)
	EVT_CHECKBOX(6482, WxUIEditorStatusBar::sub_013dc290)
END_EVENT_TABLE()

class WxPropertyWindow_Base : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxPropertyWindow_Objects : public WxPropertyWindow_Base
{
public:
	void sub_011c27c0(wxEraseEvent& In);
	void sub_011c2870(wxPaintEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e008c0
BEGIN_EVENT_TABLE(WxPropertyWindow_Objects, WxPropertyWindow_Base)
	EVT_PAINT(WxPropertyWindow_Objects::sub_011c2870)
	EVT_ERASE_BACKGROUND(WxPropertyWindow_Objects::sub_011c27c0)
END_EVENT_TABLE()

class WxClass_025e8bcc : public wxTextCtrl
{
public:
	void sub_01234b40(wxKeyEvent& In);
	void sub_01234c00(wxFocusEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e02950
BEGIN_EVENT_TABLE(WxClass_025e8bcc, wxTextCtrl)
	EVT_CHAR(WxClass_025e8bcc::sub_01234b40)
	EVT_KILL_FOCUS(WxClass_025e8bcc::sub_01234c00)
END_EVENT_TABLE()

class WxClass_0221c6c8 : public WxTrackableFrame
{
public:
	void sub_0129eac0(wxCloseEvent& In);
	void sub_0129ead0(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04a20
BEGIN_EVENT_TABLE(WxClass_0221c6c8, WxTrackableFrame)
	EVT_CLOSE(WxClass_0221c6c8::sub_0129eac0)
	EVT_SIZE(WxClass_0221c6c8::sub_0129ead0)
END_EVENT_TABLE()

class WxClass_025e8fa8 : public wxPanel
{
public:
	void sub_013aaca0(wxSizeEvent& In);
	void sub_013bf2f0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0a170
BEGIN_EVENT_TABLE(WxClass_025e8fa8, wxPanel)
	EVT_SIZE(WxClass_025e8fa8::sub_013aaca0)
	EVT_LEFT_DOWN(WxClass_025e8fa8::sub_013bf2f0)
END_EVENT_TABLE()

class WxSpeedTreeEditor : public wxFrame
{
public:
	void sub_014267f0(wxSizeEvent& In);
	void sub_01426890(wxPaintEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0d6a0
BEGIN_EVENT_TABLE(WxSpeedTreeEditor, wxFrame)
	EVT_SIZE(WxSpeedTreeEditor::sub_014267f0)
	EVT_PAINT(WxSpeedTreeEditor::sub_01426890)
END_EVENT_TABLE()

class WxClass_025e9328 : public wxDialog
{
public:
	void sub_01456ab0(wxCommandEvent& In);
	void sub_01456d30(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e6c0
BEGIN_EVENT_TABLE(WxClass_025e9328, wxDialog)
	EVT_COMBOBOX(1, WxClass_025e9328::sub_01456d30)
	EVT_BUTTON(0, WxClass_025e9328::sub_01456ab0)
END_EVENT_TABLE()

class WxClass_025e8ec8 : public wxDialog
{
public:
	void sub_0130d550(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e06880
BEGIN_EVENT_TABLE(WxClass_025e8ec8, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8ec8::sub_0130d550)
END_EVENT_TABLE()

class WxClass_025e8f14 : public wxDialog
{
public:
	void sub_013698b0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08f80
BEGIN_EVENT_TABLE(WxClass_025e8f14, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8f14::sub_013698b0)
END_EVENT_TABLE()

class WxClass_025e8f1c : public wxDialog
{
public:
	void sub_0137f550(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08ff0
BEGIN_EVENT_TABLE(WxClass_025e8f1c, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8f1c::sub_0137f550)
END_EVENT_TABLE()

class WxClass_025e8fa0 : public wxDialog
{
public:
	void sub_013a6700(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e09e90
BEGIN_EVENT_TABLE(WxClass_025e8fa0, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e8fa0::sub_013a6700)
END_EVENT_TABLE()

class WxClass_025e9018 : public wxDialog
{
public:
	void sub_013e2fb0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0bb80
BEGIN_EVENT_TABLE(WxClass_025e9018, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9018::sub_013e2fb0)
END_EVENT_TABLE()

class WxPropertyWindow_Item : public WxPropertyWindow_Base
{
	DECLARE_EVENT_TABLE()
};

class WxCustomPropertyItem_MaterialInstanceConstantParameter : public WxPropertyWindow_Item
{
public:
	void sub_014075a0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0cd20
BEGIN_EVENT_TABLE(WxCustomPropertyItem_MaterialInstanceConstantParameter, WxPropertyWindow_Item)
	EVT_BUTTON(7312, WxCustomPropertyItem_MaterialInstanceConstantParameter::sub_014075a0)
END_EVENT_TABLE()

class WxCustomPropertyItem_MaterialInstanceTimeVaryingParameter : public WxPropertyWindow_Item
{
public:
	void sub_014075a0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0cec0
BEGIN_EVENT_TABLE(WxCustomPropertyItem_MaterialInstanceTimeVaryingParameter, WxPropertyWindow_Item)
	EVT_BUTTON(7317, WxCustomPropertyItem_MaterialInstanceTimeVaryingParameter::sub_014075a0)
END_EVENT_TABLE()

class WxClass_025e90cc : public wxDialog
{
public:
	void sub_014295f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0d9d0
BEGIN_EVENT_TABLE(WxClass_025e90cc, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e90cc::sub_014295f0)
END_EVENT_TABLE()

class WxClass_025e90d4 : public wxDialog
{
public:
	void sub_0142e2b0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0da40
BEGIN_EVENT_TABLE(WxClass_025e90d4, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e90d4::sub_0142e2b0)
END_EVENT_TABLE()

class WxClass_025e90dc : public wxDialog
{
public:
	void sub_01429710(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dab0
BEGIN_EVENT_TABLE(WxClass_025e90dc, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e90dc::sub_01429710)
END_EVENT_TABLE()

class WxClass_025e90fc : public wxDialog
{
public:
	void sub_01427120(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dc30
BEGIN_EVENT_TABLE(WxClass_025e90fc, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e90fc::sub_01427120)
END_EVENT_TABLE()

class WxClass_025e90e4 : public wxDialog
{
public:
	void sub_014297a0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0db20
BEGIN_EVENT_TABLE(WxClass_025e90e4, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e90e4::sub_014297a0)
END_EVENT_TABLE()

class WxClass_025e9104 : public wxDialog
{
public:
	void sub_01430a50(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dca0
BEGIN_EVENT_TABLE(WxClass_025e9104, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9104::sub_01430a50)
END_EVENT_TABLE()

class WxClass_025e910c : public wxDialog
{
public:
	void sub_0144a520(wxTimerEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dd10
BEGIN_EVENT_TABLE(WxClass_025e910c, wxDialog)
	EVT_TIMER(9998, WxClass_025e910c::sub_0144a520)
END_EVENT_TABLE()

class WxClass_025e911c : public wxDialog
{
public:
	void sub_01431cf0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0de50
BEGIN_EVENT_TABLE(WxClass_025e911c, wxDialog)
	EVT_BUTTON(19887, WxClass_025e911c::sub_01431cf0)
END_EVENT_TABLE()

class WxClass_025e9308 : public wxDialog
{
public:
	void sub_01453c00(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0df70
BEGIN_EVENT_TABLE(WxClass_025e9308, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9308::sub_01453c00)
END_EVENT_TABLE()

class WxClass_025e9308_01e0dfd0 : public wxDialog
{
	DECLARE_EVENT_TABLE()
};

class WxClass_02292208 : public WxClass_025e9308_01e0dfd0
{
public:
	void sub_01453ce0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dfd0
BEGIN_EVENT_TABLE(WxClass_02292208, WxClass_025e9308_01e0dfd0)
	EVT_BUTTON(wxID_OK, WxClass_02292208::sub_01453ce0)
END_EVENT_TABLE()

class WxClass_025e9320 : public wxDialog
{
public:
	void sub_0144dc00(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e650
BEGIN_EVENT_TABLE(WxClass_025e9320, wxDialog)
	EVT_BUTTON(9049, WxClass_025e9320::sub_0144dc00)
END_EVENT_TABLE()

class WxClass_025e9330 : public wxDialog
{
public:
	void sub_01467540(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e750
BEGIN_EVENT_TABLE(WxClass_025e9330, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9330::sub_01467540)
END_EVENT_TABLE()

class WxClass_025e9340 : public wxDialog
{
public:
	void sub_0144dec0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e810
BEGIN_EVENT_TABLE(WxClass_025e9340, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9340::sub_0144dec0)
END_EVENT_TABLE()

class WxClass_025e9350 : public wxDialog
{
public:
	void sub_01473ab0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e9e0
BEGIN_EVENT_TABLE(WxClass_025e9350, wxDialog)
	EVT_BUTTON(8361, WxClass_025e9350::sub_01473ab0)
END_EVENT_TABLE()

class WxClass_025e9348 : public wxDialog
{
public:
	void sub_01467b30(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e880
BEGIN_EVENT_TABLE(WxClass_025e9348, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e9348::sub_01467b30)
END_EVENT_TABLE()

class WxClass_025e93d4 : public wxDialog
{
public:
	void sub_01477290(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f7a0
BEGIN_EVENT_TABLE(WxClass_025e93d4, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e93d4::sub_01477290)
END_EVENT_TABLE()

class WxClass_025e93e4 : public wxDialog
{
public:
	void sub_01477100(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f880
BEGIN_EVENT_TABLE(WxClass_025e93e4, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e93e4::sub_01477100)
END_EVENT_TABLE()

class WxPropertyItemButton : public wxBitmapButton
{
public:
	void sub_011f4100(wxEraseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00b90
BEGIN_EVENT_TABLE(WxPropertyItemButton, wxBitmapButton)
	EVT_ERASE_BACKGROUND(WxPropertyItemButton::sub_011f4100)
END_EVENT_TABLE()

class WxClass_025e8714 : public wxPanel
{
public:
	void sub_011f20d0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00c00
BEGIN_EVENT_TABLE(WxClass_025e8714, wxPanel)
	EVT_CHAR(WxClass_025e8714::sub_011f20d0)
END_EVENT_TABLE()

class WxClass_025e873c : public wxWindow
{
public:
	void sub_011f36b0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01540
BEGIN_EVENT_TABLE(WxClass_025e873c, wxWindow)
	EVT_LEFT_DOWN(WxClass_025e873c::sub_011f36b0)
END_EVENT_TABLE()

class WxClass_025e874c : public wxGrid
{
public:
	void sub_01207590(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e017e0
BEGIN_EVENT_TABLE(WxClass_025e874c, wxGrid)
	EVT_CHAR(WxClass_025e874c::sub_01207590)
END_EVENT_TABLE()

class WxClass_025e8cd4 : public wxWindow
{
public:
	void sub_01277bc0(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e046a0
BEGIN_EVENT_TABLE(WxClass_025e8cd4, wxWindow)
	EVT_SIZE(WxClass_025e8cd4::sub_01277bc0)
END_EVENT_TABLE()

class WxLinkedObjEd : public WxTrackableFrame
{
public:
	void sub_01277c50(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04700
BEGIN_EVENT_TABLE(WxLinkedObjEd, WxTrackableFrame)
	EVT_SIZE(WxLinkedObjEd::sub_01277c50)
END_EVENT_TABLE()

class WxClass_025e8d3c : public wxPanel
{
public:
	void sub_0129d680(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04ab0
BEGIN_EVENT_TABLE(WxClass_025e8d3c, wxPanel)
	EVT_SIZE(WxClass_025e8d3c::sub_0129d680)
END_EVENT_TABLE()

class WxClass_025e8d44 : public wxPanel
{
public:
	void sub_0129d990(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04b20
BEGIN_EVENT_TABLE(WxClass_025e8d44, wxPanel)
	EVT_SIZE(WxClass_025e8d44::sub_0129d990)
END_EVENT_TABLE()

class WxClass_025e8e00 : public wxWindow
{
public:
	void sub_012c03a0(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e05860
BEGIN_EVENT_TABLE(WxClass_025e8e00, wxWindow)
	EVT_SIZE(WxClass_025e8e00::sub_012c03a0)
END_EVENT_TABLE()

class WxClass_025e8e08 : public wxWindow
{
public:
	void sub_012c3340(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e058d0
BEGIN_EVENT_TABLE(WxClass_025e8e08, wxWindow)
	EVT_SIZE(WxClass_025e8e08::sub_012c3340)
END_EVENT_TABLE()

class WxClass_025e8ed0 : public wxWindow
{
public:
	void sub_0130d790(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e068f0
BEGIN_EVENT_TABLE(WxClass_025e8ed0, wxWindow)
	EVT_SIZE(WxClass_025e8ed0::sub_0130d790)
END_EVENT_TABLE()

class WxClass_025e8ee0 : public wxWindow
{
public:
	void sub_0130eb10(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e070c0
BEGIN_EVENT_TABLE(WxClass_025e8ee0, wxWindow)
	EVT_SIZE(WxClass_025e8ee0::sub_0130eb10)
END_EVENT_TABLE()

class WxClass_025e8ee8 : public wxWindow
{
public:
	void sub_0131d5a0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e07130
BEGIN_EVENT_TABLE(WxClass_025e8ee8, wxWindow)
	EVT_KEY_DOWN(WxClass_025e8ee8::sub_0131d5a0)
END_EVENT_TABLE()

class WxClass_025e8f0c : public wxWindow
{
public:
	void sub_01367790(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08af0
BEGIN_EVENT_TABLE(WxClass_025e8f0c, wxWindow)
	EVT_SIZE(WxClass_025e8f0c::sub_01367790)
END_EVENT_TABLE()

class WxLogBrowser : public WxBrowser
{
public:
	void sub_013a3440(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0a7c0
BEGIN_EVENT_TABLE(WxLogBrowser, WxBrowser)
	EVT_SIZE(WxLogBrowser::sub_013a3440)
END_EVENT_TABLE()

class WxClass_025e8fe8 : public wxListCtrl
{
public:
	void sub_013e1580(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b440
BEGIN_EVENT_TABLE(WxClass_025e8fe8, wxListCtrl)
	EVT_RIGHT_DOWN(WxClass_025e8fe8::sub_013e1580)
END_EVENT_TABLE()

class WxClass_025e8ff0 : public wxListCtrl
{
public:
	void sub_013e18d0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b4b0
BEGIN_EVENT_TABLE(WxClass_025e8ff0, wxListCtrl)
	EVT_RIGHT_DOWN(WxClass_025e8ff0::sub_013e18d0)
END_EVENT_TABLE()

class WxClass_0226f274 : public WxClass_025e85b8
{
public:
	void sub_013db5e0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b920
BEGIN_EVENT_TABLE(WxClass_0226f274, WxClass_025e85b8)
	EVT_CHAR(WxClass_0226f274::sub_013db5e0)
END_EVENT_TABLE()

class WxClass_025e9098 : public wxWindow
{
public:
	void sub_01406b80(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0ca90
BEGIN_EVENT_TABLE(WxClass_025e9098, wxWindow)
	EVT_SIZE(WxClass_025e9098::sub_01406b80)
END_EVENT_TABLE()

class WxClass_025e9378 : public wxWindow
{
public:
	void sub_0144ec10(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f1b0
BEGIN_EVENT_TABLE(WxClass_025e9378, wxWindow)
	EVT_SIZE(WxClass_025e9378::sub_0144ec10)
END_EVENT_TABLE()

class WxTaskBrowser : public WxBrowser
{
public:
	void sub_0144ef90(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f2b0
BEGIN_EVENT_TABLE(WxTaskBrowser, WxBrowser)
	EVT_SIZE(WxTaskBrowser::sub_0144ef90)
END_EVENT_TABLE()

class WxClass_025e93dc : public wxWindow
{
public:
	void sub_014784d0(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f810
BEGIN_EVENT_TABLE(WxClass_025e93dc, wxWindow)
	EVT_LEFT_DOWN(WxClass_025e93dc::sub_014784d0)
END_EVENT_TABLE()

class WxClass_021e3594 : public WxClass_025e86c0
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00010
BEGIN_EVENT_TABLE(WxClass_021e3594, WxClass_025e86c0)
END_EVENT_TABLE()

class WxClass_021e35cc : public WxClass_025e86c0
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00050
BEGIN_EVENT_TABLE(WxClass_021e35cc, WxClass_025e86c0)
END_EVENT_TABLE()

class WxClass_021e49e8 : public WxClass_025e86c0
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00090
BEGIN_EVENT_TABLE(WxClass_021e49e8, WxClass_025e86c0)
END_EVENT_TABLE()

class WxClass_02212f1c : public WxClass_025e86c0
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04650
BEGIN_EVENT_TABLE(WxClass_02212f1c, WxClass_025e86c0)
END_EVENT_TABLE()

class WxClass_025e8744 : public wxPanel
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e015b0
BEGIN_EVENT_TABLE(WxClass_025e8744, wxPanel)
END_EVENT_TABLE()

class WxClass_025e8bbc : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01e40
BEGIN_EVENT_TABLE(WxClass_025e8bbc, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e8d4c : public wxPanel
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04b90
BEGIN_EVENT_TABLE(WxClass_025e8d4c, wxPanel)
END_EVENT_TABLE()

class WxClass_025e8d4c_01e04c20 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_0221c96c : public WxClass_025e8d4c_01e04c20
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04c20
BEGIN_EVENT_TABLE(WxClass_0221c96c, WxClass_025e8d4c_01e04c20)
END_EVENT_TABLE()

class WxClass_025e8df8 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e05810
BEGIN_EVENT_TABLE(WxClass_025e8df8, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e8ef4 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e083d0
BEGIN_EVENT_TABLE(WxClass_025e8ef4, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e8ed8 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e07070
BEGIN_EVENT_TABLE(WxClass_025e8ed8, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e8d4c_01e04c60 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_0221ce6c : public WxClass_025e8d4c_01e04c60
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04c60
BEGIN_EVENT_TABLE(WxClass_0221ce6c, WxClass_025e8d4c_01e04c60)
END_EVENT_TABLE()

class WxClass_025e8efc : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08730
BEGIN_EVENT_TABLE(WxClass_025e8efc, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e90ec : public wxDialog
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0db90
BEGIN_EVENT_TABLE(WxClass_025e90ec, wxDialog)
END_EVENT_TABLE()

class WxClass_025e9338 : public wxDialog
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e7c0
BEGIN_EVENT_TABLE(WxClass_025e9338, wxDialog)
END_EVENT_TABLE()

class WxClass_025e90f4 : public wxDialog
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0dbe0
BEGIN_EVENT_TABLE(WxClass_025e90f4, wxDialog)
END_EVENT_TABLE()

class WxClass_025e9370 : public wxToolBar
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f160
BEGIN_EVENT_TABLE(WxClass_025e9370, wxToolBar)
END_EVENT_TABLE()

class WxClass_025e9380 : public wxDialog
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f220
BEGIN_EVENT_TABLE(WxClass_025e9380, wxDialog)
END_EVENT_TABLE()

class WxClass_025e9388 : public wxDialog
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f270
BEGIN_EVENT_TABLE(WxClass_025e9388, wxDialog)
END_EVENT_TABLE()
