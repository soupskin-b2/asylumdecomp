// Core_1e10000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxUIEditorBase : public wxFrame
{
public:
	void sub_014c6550(wxUpdateUIEvent& In);
	void sub_014c6590(wxSizeEvent& In);
	void sub_014c65d0(wxCommandEvent& In);
	void sub_014c6730(wxCommandEvent& In);
	void sub_014c67c0(wxCommandEvent& In);
	void sub_014c68a0(wxCommandEvent& In);
	void sub_014c68d0(wxSpinEvent& In);
	void sub_014c6950(wxCommandEvent& In);
	void sub_014c69d0(wxCommandEvent& In);
	void sub_014c6b00(wxUpdateUIEvent& In);
	void sub_014c6bd0(wxCommandEvent& In);
	void sub_014c6cf0(wxCommandEvent& In);
	void sub_014c6d00(wxCommandEvent& In);
	void sub_014c6d30(wxCommandEvent& In);
	void sub_014c6d60(wxCommandEvent& In);
	void sub_014c6de0(wxCommandEvent& In);
	void sub_014c6e00(wxUpdateUIEvent& In);
	void sub_014c6e40(wxCommandEvent& In);
	void sub_014c6ea0(wxCommandEvent& In);
	void sub_014c9430(wxCommandEvent& In);
	void sub_014c9640(wxCommandEvent& In);
	void sub_014caa80(wxCommandEvent& In);
	void sub_014cda10(wxUpdateUIEvent& In);
	void sub_014cdc90(wxCloseEvent& In);
	void sub_014cdd80(wxCommandEvent& In);
	void sub_014cde40(wxCommandEvent& In);
	void sub_014d2cd0(wxCommandEvent& In);
	void sub_014d3240(wxCommandEvent& In);
	void sub_014d3410(wxCommandEvent& In);
	void sub_014d3670(wxCommandEvent& In);
	void sub_014d3690(wxCommandEvent& In);
	void sub_014d36b0(wxCommandEvent& In);
	void sub_014d36d0(wxCommandEvent& In);
	void sub_014d3880(wxCommandEvent& In);
	void sub_014d3970(wxCommandEvent& In);
	void sub_014d3a30(wxCommandEvent& In);
	void sub_014d3c00(wxCommandEvent& In);
	void sub_014d3d00(wxCommandEvent& In);
	void sub_014d3e00(wxCommandEvent& In);
	void sub_014d3f00(wxCommandEvent& In);
	void sub_014d4000(wxCommandEvent& In);
	void sub_014d4100(wxCommandEvent& In);
	void sub_014d7170(wxCommandEvent& In);
	void sub_014d7180(wxCommandEvent& In);
	void sub_014d7300(wxCommandEvent& In);
	void sub_014d77b0(wxCommandEvent& In);
	void sub_014d8670(wxCommandEvent& In);
	void sub_014d8690(wxCommandEvent& In);
	void sub_014d8740(wxCommandEvent& In);
	void sub_014d8760(wxCommandEvent& In);
	void sub_014d92b0(wxCommandEvent& In);
	void sub_014d94f0(wxCommandEvent& In);
	void sub_014d98a0(wxCommandEvent& In);
	void sub_014d9d10(wxUpdateUIEvent& In);
	void sub_014dae60(wxCommandEvent& In);
	void sub_014dae70(wxCommandEvent& In);
	void sub_014db2d0(wxCommandEvent& In);
	void sub_014db6c0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10250
BEGIN_EVENT_TABLE(WxUIEditorBase, wxFrame)
	EVT_CLOSE(WxUIEditorBase::sub_014cdc90)
	EVT_SIZE(WxUIEditorBase::sub_014c6590)
	EVT_MENU_RANGE(20054, 20154, WxUIEditorBase::sub_014d3410)
	EVT_MENU(20052, WxUIEditorBase::sub_014c6ea0)
	EVT_MENU(9056, WxUIEditorBase::sub_014d7180)
	EVT_MENU(9057, WxUIEditorBase::sub_014d3670)
	EVT_MENU_RANGE(20159, 20671, WxUIEditorBase::sub_014d4100)
	EVT_MENU_RANGE(20709, 25709, WxUIEditorBase::sub_014d94f0)
	EVT_MENU_RANGE(26026, 26054, WxUIEditorBase::sub_014d36d0)
	EVT_MENU(25870, WxUIEditorBase::sub_014d98a0)
	EVT_MENU_RANGE(25710, 25760, WxUIEditorBase::sub_014d98a0)
	EVT_MENU(25871, WxUIEditorBase::sub_014d36b0)
	EVT_MENU(20686, WxUIEditorBase::sub_014d7300)
	EVT_MENU(20679, WxUIEditorBase::sub_014d77b0)
	EVT_MENU(20680, WxUIEditorBase::sub_014d77b0)
	EVT_MENU(20677, WxUIEditorBase::sub_014d77b0)
	EVT_MENU(20678, WxUIEditorBase::sub_014d77b0)
	EVT_MENU(20692, WxUIEditorBase::sub_014d3690)
	EVT_MENU(20693, WxUIEditorBase::sub_014d3970)
	EVT_MENU(6364, WxUIEditorBase::sub_014d3880)
	EVT_MENU(25865, WxUIEditorBase::sub_014d3a30)
	EVT_MENU(25917, WxUIEditorBase::sub_014db2d0)
	EVT_MENU(25918, WxUIEditorBase::sub_014db6c0)
	EVT_MENU_RANGE(25919, 25929, WxUIEditorBase::sub_014db2d0)
	EVT_MENU_RANGE(25930, 25940, WxUIEditorBase::sub_014db6c0)
	EVT_MENU(20672, WxUIEditorBase::sub_014d3c00)
	EVT_MENU(20673, WxUIEditorBase::sub_014d3d00)
	EVT_MENU(20674, WxUIEditorBase::sub_014d3e00)
	EVT_MENU(20675, WxUIEditorBase::sub_014d3f00)
	EVT_MENU(20676, WxUIEditorBase::sub_014d4000)
	EVT_MENU(25941, WxUIEditorBase::sub_014c6cf0)
	EVT_MENU(6428, WxUIEditorBase::sub_014c6d00)
	EVT_MENU(6429, WxUIEditorBase::sub_014c6d30)
	EVT_MENU(6432, WxUIEditorBase::sub_014dae60)
	EVT_MENU(6431, WxUIEditorBase::sub_014dae70)
	EVT_MENU(6434, WxUIEditorBase::sub_014d8670)
	EVT_MENU(20687, WxUIEditorBase::sub_014d8690)
	EVT_MENU(20688, WxUIEditorBase::sub_014d8740)
	EVT_MENU(20689, WxUIEditorBase::sub_014d8760)
	EVT_MENU(20690, WxUIEditorBase::sub_014c6d60)
	EVT_MENU(20691, WxUIEditorBase::sub_014c6de0)
	EVT_UPDATE_UI(6428, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(6429, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(6432, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(6431, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(6434, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(20687, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(9057, WxUIEditorBase::sub_014d9d10)
	EVT_UPDATE_UI(25917, WxUIEditorBase::sub_014d9d10)
	EVT_MENU(25915, WxUIEditorBase::sub_014c9640)
	EVT_MENU(25916, WxUIEditorBase::sub_014cde40)
	EVT_MENU(25867, WxUIEditorBase::sub_014d2cd0)
	EVT_MENU(25866, WxUIEditorBase::sub_014d3240)
	EVT_UPDATE_UI(25915, WxUIEditorBase::sub_014c6e00)
	EVT_MENU(20696, WxUIEditorBase::sub_014c6e40)
	EVT_MENU(26130, WxUIEditorBase::sub_014d7170)
	EVT_MENU_RANGE(25979, 25984, WxUIEditorBase::sub_014c65d0)
	EVT_UPDATE_UI_RANGE(25979, 25984, WxUIEditorBase::sub_014cda10)
	EVT_MENU_RANGE(25985, 25990, WxUIEditorBase::sub_014c69d0)
	EVT_UPDATE_UI_RANGE(25985, 25990, WxUIEditorBase::sub_014cda10)
	EVT_MENU(26147, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26148, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26149, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26150, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26152, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26151, WxUIEditorBase::sub_014c9430)
	EVT_MENU(26159, WxUIEditorBase::sub_014d92b0)
	EVT_MENU(26161, WxUIEditorBase::sub_014d92b0)
	EVT_MENU(26162, WxUIEditorBase::sub_014d92b0)
	EVT_MENU(26164, WxUIEditorBase::sub_014d92b0)
	EVT_MENU(26163, WxUIEditorBase::sub_014d92b0)
	EVT_MENU(26160, WxUIEditorBase::sub_014d92b0)
	EVT_MENU_RANGE(25991, 26025, WxUIEditorBase::sub_014caa80)
	EVT_UPDATE_UI_RANGE(25991, 26025, WxUIEditorBase::sub_014c6550)
	EVT_COMBOBOX(25978, WxUIEditorBase::sub_014c6730)
	EVT_COMBOBOX(25956, WxUIEditorBase::sub_014c67c0)
	EVT_COMBOBOX(25955, WxUIEditorBase::sub_014c68a0)
	EVT_COMBOBOX(26129, WxUIEditorBase::sub_014cdd80)
	EVT_TEXT_ENTER(25956, WxUIEditorBase::sub_014c67c0)
	EVT_TEXT(25977, WxUIEditorBase::sub_014c6950)
	EVT_SPINCTRL(25977, WxUIEditorBase::sub_014c68d0)
	EVT_UPDATE_UI(25977, WxUIEditorBase::sub_014cda10)
	EVT_MENU_RANGE(6493, 6505, WxUIEditorBase::sub_014c6bd0)
	EVT_UPDATE_UI_RANGE(6493, 6505, WxUIEditorBase::sub_014c6b00)
END_EVENT_TABLE()

class WxStylePropertiesGroup : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxStyleTextPropertiesGroup : public WxStylePropertiesGroup
{
public:
	void sub_014dd670(wxCommandEvent& In);
	void sub_014e6f80(wxCommandEvent& In);
	void sub_014e7060(wxCommandEvent& In);
	void sub_014e7150(wxCommandEvent& In);
	void sub_014e7220(wxCommandEvent& In);
	void sub_014e72f0(wxSpinEvent& In);
	void sub_014e73e0(wxSpinEvent& In);
	void sub_014e74d0(wxCommandEvent& In);
	void sub_014e75c0(wxCommandEvent& In);
	void sub_014e7690(wxSpinEvent& In);
	void sub_014e7760(wxSpinEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11700
BEGIN_EVENT_TABLE(WxStyleTextPropertiesGroup, WxStylePropertiesGroup)
	EVT_CHOICE(26076, WxStyleTextPropertiesGroup::sub_014e6f80)
	EVT_CHOICE(26077, WxStyleTextPropertiesGroup::sub_014e7060)
	EVT_CHOICE(26078, WxStyleTextPropertiesGroup::sub_014e7060)
	EVT_CHOICE(26098, WxStyleTextPropertiesGroup::sub_014e7150)
	EVT_CHOICE(26099, WxStyleTextPropertiesGroup::sub_014e7220)
	EVT_CHECKLISTBOX(26079, WxStyleTextPropertiesGroup::sub_014dd670)
	EVT_SPINCTRL(26068, WxStyleTextPropertiesGroup::sub_014e72f0)
	EVT_SPINCTRL(26069, WxStyleTextPropertiesGroup::sub_014e72f0)
	EVT_CHOICE(26072, WxStyleTextPropertiesGroup::sub_014e75c0)
	EVT_SPINCTRL(26073, WxStyleTextPropertiesGroup::sub_014e7690)
	EVT_SPINCTRL(26074, WxStyleTextPropertiesGroup::sub_014e7760)
	EVT_SPINCTRL(26075, WxStyleTextPropertiesGroup::sub_014e7760)
	EVT_SPINCTRL(26071, WxStyleTextPropertiesGroup::sub_014e73e0)
	EVT_SPINCTRL(26070, WxStyleTextPropertiesGroup::sub_014e73e0)
	EVT_TEXT_ENTER(26071, WxStyleTextPropertiesGroup::sub_014e74d0)
	EVT_TEXT_ENTER(26070, WxStyleTextPropertiesGroup::sub_014e74d0)
END_EVENT_TABLE()

class WxImageAdjustmentPanel : public wxPanel
{
public:
	void sub_014e5d70(wxCommandEvent& In);
	void sub_014e5f30(wxSpinEvent& In);
	void sub_014e6000(wxCommandEvent& In);
	void sub_014e6140(wxSpinEvent& In);
	void sub_014e6260(wxCommandEvent& In);
	void sub_014e63f0(wxSpinEvent& In);
	void sub_014e64f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11360
BEGIN_EVENT_TABLE(WxImageAdjustmentPanel, wxPanel)
	EVT_CHOICE(26082, WxImageAdjustmentPanel::sub_014e5d70)
	EVT_CHOICE(26083, WxImageAdjustmentPanel::sub_014e5d70)
	EVT_SPINCTRL(26084, WxImageAdjustmentPanel::sub_014e6140)
	EVT_SPINCTRL(26085, WxImageAdjustmentPanel::sub_014e6140)
	EVT_SPINCTRL(26086, WxImageAdjustmentPanel::sub_014e63f0)
	EVT_SPINCTRL(26087, WxImageAdjustmentPanel::sub_014e63f0)
	EVT_SPINCTRL(26088, WxImageAdjustmentPanel::sub_014e5f30)
	EVT_SPINCTRL(26089, WxImageAdjustmentPanel::sub_014e5f30)
	EVT_TEXT_ENTER(26084, WxImageAdjustmentPanel::sub_014e6260)
	EVT_TEXT_ENTER(26085, WxImageAdjustmentPanel::sub_014e6260)
	EVT_TEXT_ENTER(26086, WxImageAdjustmentPanel::sub_014e64f0)
	EVT_TEXT_ENTER(26087, WxImageAdjustmentPanel::sub_014e64f0)
	EVT_TEXT_ENTER(26088, WxImageAdjustmentPanel::sub_014e6000)
	EVT_TEXT_ENTER(26089, WxImageAdjustmentPanel::sub_014e6000)
END_EVENT_TABLE()

class WxColorAdjustmentPanel : public wxPanel
{
public:
	void sub_014e56f0(wxCommandEvent& In);
	void sub_014e5820(wxScrollEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e111a0
BEGIN_EVENT_TABLE(WxColorAdjustmentPanel, wxPanel)
	EVT_BUTTON(26061, WxColorAdjustmentPanel::sub_014e56f0)
	EVT_COMMAND_SCROLL(26062, WxColorAdjustmentPanel::sub_014e5820)
END_EVENT_TABLE()

class WxStyleComboPropertiesGroup : public WxStylePropertiesGroup
{
public:
	void sub_014e7e60(wxCommandEvent& In);
	void sub_014f3670(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e119e0
BEGIN_EVENT_TABLE(WxStyleComboPropertiesGroup, WxStylePropertiesGroup)
	EVT_CHOICE(26090, WxStyleComboPropertiesGroup::sub_014f3670)
	EVT_CHOICE(26092, WxStyleComboPropertiesGroup::sub_014f3670)
	EVT_CHOICE(26091, WxStyleComboPropertiesGroup::sub_014f3670)
	EVT_CHOICE(26093, WxStyleComboPropertiesGroup::sub_014f3670)
	EVT_RADIOBUTTON(26094, WxStyleComboPropertiesGroup::sub_014e7e60)
	EVT_RADIOBUTTON(26095, WxStyleComboPropertiesGroup::sub_014e7e60)
	EVT_RADIOBUTTON(26096, WxStyleComboPropertiesGroup::sub_014e7e60)
	EVT_RADIOBUTTON(26097, WxStyleComboPropertiesGroup::sub_014e7e60)
END_EVENT_TABLE()

class WxTrackableFrame : public wxFrame
{
	DECLARE_EVENT_TABLE()
};

class WxLinkedObjEd : public WxTrackableFrame
{
	DECLARE_EVENT_TABLE()
};

class WxKismet : public WxLinkedObjEd
{
	DECLARE_EVENT_TABLE()
};

class WxUIKismetEditor : public WxKismet
{
public:
	void sub_014c7020(wxCommandEvent& In);
	void sub_014c7030(wxCommandEvent& In);
	void sub_014c7160(wxTreeEvent& In);
	void sub_014c71b0(wxCommandEvent& In);
	void sub_014c9820(wxCommandEvent& In);
	void sub_014ce350(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10d80
BEGIN_EVENT_TABLE(WxUIKismetEditor, WxKismet)
	EVT_MENU(20695, WxUIKismetEditor::sub_014c71b0)
	EVT_TREE_SEL_CHANGED(9192, WxUIKismetEditor::sub_014c7160)
	EVT_MENU(12959, WxUIKismetEditor::sub_014ce350)
	EVT_MENU(12960, WxUIKismetEditor::sub_014c7020)
	EVT_MENU_RANGE(12961, 13011, WxUIKismetEditor::sub_014c7030)
	EVT_MENU(12948, WxUIKismetEditor::sub_014c9820)
END_EVENT_TABLE()

class WxDlgEditUIStyle : public wxDialog
{
public:
	void sub_014dcea0(wxCloseEvent& In);
	void sub_014f3df0(wxCommandEvent& In);
	void sub_014f88e0(wxCommandEvent& In);
	void sub_014f8940(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11b60
BEGIN_EVENT_TABLE(WxDlgEditUIStyle, wxDialog)
	EVT_BUTTON(wxID_OK, WxDlgEditUIStyle::sub_014f8940)
	EVT_BUTTON(wxID_CANCEL, WxDlgEditUIStyle::sub_014f8940)
	EVT_CLOSE(WxDlgEditUIStyle::sub_014dcea0)
	EVT_CHECKLISTBOX(26063, WxDlgEditUIStyle::sub_014f88e0)
	EVT_LISTBOX(26063, WxDlgEditUIStyle::sub_014f3df0)
END_EVENT_TABLE()
