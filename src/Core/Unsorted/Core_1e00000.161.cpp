// Core_1e00000.cpp: 61 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxTrackableDialog : public wxDialog
{
	DECLARE_EVENT_TABLE()
};

class WxTerrainEditor : public WxTrackableDialog
{
public:
	void sub_0124b800(wxActivateEvent& In);
	void sub_0124b8a0(wxCommandEvent& In);
	void sub_0124b8b0(wxCommandEvent& In);
	void sub_0124b8c0(wxCommandEvent& In);
	void sub_0124b8d0(wxCommandEvent& In);
	void sub_0124b960(wxCommandEvent& In);
	void sub_0124b9d0(wxCommandEvent& In);
	void sub_0124ba30(wxCommandEvent& In);
	void sub_0124bc00(wxCommandEvent& In);
	void sub_0124bc20(wxMouseEvent& In);
	void sub_0124bc30(wxCommandEvent& In);
	void sub_0124bc40(wxCommandEvent& In);
	void sub_0124bc50(wxScrollEvent& In);
	void sub_0124bcd0(wxCommandEvent& In);
	void sub_0124bd00(wxCommandEvent& In);
	void sub_0124e130(wxSpinEvent& In);
	void sub_0124e150(wxCommandEvent& In);
	void sub_01257630(wxCloseEvent& In);
	void sub_012577f0(wxCommandEvent& In);
	void sub_01257930(wxCommandEvent& In);
	void sub_01257b00(wxCommandEvent& In);
	void sub_01257bc0(wxCommandEvent& In);
	void sub_01257f50(wxCommandEvent& In);
	void sub_01258180(wxCommandEvent& In);
	void sub_0125c1c0(wxCommandEvent& In);
	void sub_0125f7e0(wxCommandEvent& In);
	void sub_0125f830(wxCommandEvent& In);
	void sub_0125f840(wxCommandEvent& In);
	void sub_0125f850(wxCommandEvent& In);
	void sub_0125f910(wxCommandEvent& In);
	void sub_0125f920(wxCommandEvent& In);
	void sub_0125f990(wxCommandEvent& In);
	void sub_0125fa40(wxCommandEvent& In);
	void sub_0125fac0(wxCommandEvent& In);
	void sub_0125fad0(wxCommandEvent& In);
	void sub_012628c0(wxMouseEvent& In);
	void sub_01262980(wxCommandEvent& In);
	void sub_01262a80(wxScrollEvent& In);
	void sub_01262c60(wxCommandEvent& In);
	void sub_01262de0(wxCommandEvent& In);
	void sub_0126d040(wxCommandEvent& In);
	void sub_01272b20(wxCommandEvent& In);
	void sub_01272d80(wxCommandEvent& In);
	void sub_01273140(wxCommandEvent& In);
	void sub_01273220(wxCommandEvent& In);
	void sub_01273230(wxCommandEvent& In);
	void sub_01273240(wxCommandEvent& In);
	void sub_01273250(wxCommandEvent& In);
	void sub_01273d40(wxCommandEvent& In);
	void sub_01274260(wxCommandEvent& In);
	void sub_012742b0(wxCommandEvent& In);
	void sub_01274640(wxCommandEvent& In);
	void sub_01274820(wxCommandEvent& In);
	void sub_01274de0(wxCommandEvent& In);
	void sub_01274f30(wxCommandEvent& In);
	void sub_012769f0(wxCommandEvent& In);
	void sub_01276c00(wxCommandEvent& In);
	void sub_01276c10(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e02e00
BEGIN_EVENT_TABLE(WxTerrainEditor, WxTrackableDialog)
	EVT_ACTIVATE(WxTerrainEditor::sub_0124b800)
	EVT_BUTTON(26168, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26169, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26170, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26171, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26172, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26173, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26174, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26175, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26176, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26177, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26178, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26179, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26180, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26181, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26182, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26183, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26184, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26185, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26186, WxTerrainEditor::sub_012769f0)
	EVT_BUTTON(26187, WxTerrainEditor::sub_012769f0)
	EVT_SPINCTRL(26188, WxTerrainEditor::sub_0124e130)
	EVT_TEXT(26188, WxTerrainEditor::sub_0124e150)
	EVT_BUTTON(26189, WxTerrainEditor::sub_0126d040)
	EVT_CHECKBOX(26190, WxTerrainEditor::sub_0124b8a0)
	EVT_CHECKBOX(26191, WxTerrainEditor::sub_0124b8b0)
	EVT_BUTTON(26192, WxTerrainEditor::sub_0126d040)
	EVT_CHECKBOX(26193, WxTerrainEditor::sub_0124b8c0)
	EVT_COMBOBOX(26194, WxTerrainEditor::sub_012577f0)
	EVT_COMBOBOX(26196, WxTerrainEditor::sub_01272b20)
	EVT_BUTTON(26197, WxTerrainEditor::sub_01257930)
	EVT_BUTTON(26199, WxTerrainEditor::sub_0124b8d0)
	EVT_BUTTON(26201, WxTerrainEditor::sub_0124b960)
	EVT_BUTTON(26203, WxTerrainEditor::sub_0124b9d0)
	EVT_BUTTON(26205, WxTerrainEditor::sub_0124ba30)
	EVT_BUTTON(26208, WxTerrainEditor::sub_01257b00)
	EVT_COMMAND_RIGHT_CLICK(26203, WxTerrainEditor::sub_0124bc00)
	EVT_COMMAND_RIGHT_CLICK(26205, WxTerrainEditor::sub_0124bc00)
	EVT_TOOL_RCLICKED(wxID_ANY, WxTerrainEditor::sub_0124bc00)
	EVT_COMMAND_RIGHT_CLICK(wxID_ANY, WxTerrainEditor::sub_0124bc00)
	EVT_RIGHT_DOWN(WxTerrainEditor::sub_012628c0)
	EVT_RIGHT_UP(WxTerrainEditor::sub_0124bc20)
	EVT_BUTTON(26209, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26210, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26211, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26212, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26213, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26214, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26215, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26216, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26217, WxTerrainEditor::sub_01262980)
	EVT_BUTTON(26218, WxTerrainEditor::sub_01262980)
	EVT_COMMAND_RIGHT_CLICK(26209, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26209, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26210, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26210, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26211, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26211, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26212, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26212, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26213, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26213, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26214, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26214, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26215, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26215, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26216, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26216, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26217, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26217, WxTerrainEditor::sub_0124bc30)
	EVT_COMMAND_RIGHT_CLICK(26218, WxTerrainEditor::sub_0124bc30)
	EVT_TOOL_RCLICKED(26218, WxTerrainEditor::sub_0124bc30)
	EVT_CHECKBOX(26219, WxTerrainEditor::sub_0125f7e0)
	EVT_CHECKBOX(26234, WxTerrainEditor::sub_0125f830)
	EVT_TEXT(26235, WxTerrainEditor::sub_0125f840)
	EVT_COMBOBOX(26223, WxTerrainEditor::sub_0124bc40)
	EVT_TEXT(26223, WxTerrainEditor::sub_0125f850)
	EVT_CHECKBOX(26221, WxTerrainEditor::sub_0125f910)
	EVT_CHECKBOX(26222, WxTerrainEditor::sub_0125f920)
	EVT_COMMAND_SCROLL(26225, WxTerrainEditor::sub_01262a80)
	EVT_TEXT(26226, WxTerrainEditor::sub_01262c60)
	EVT_COMMAND_SCROLL(26228, WxTerrainEditor::sub_01262a80)
	EVT_TEXT(26229, WxTerrainEditor::sub_01262c60)
	EVT_COMMAND_SCROLL(26231, WxTerrainEditor::sub_01262a80)
	EVT_TEXT(26232, WxTerrainEditor::sub_01262c60)
	EVT_COMBOBOX(26233, WxTerrainEditor::sub_0125f990)
	EVT_BUTTON(26236, WxTerrainEditor::sub_0125fa40)
	EVT_BUTTON(26238, WxTerrainEditor::sub_0125fa40)
	EVT_SCROLL(WxTerrainEditor::sub_0124bc50)
	EVT_BUTTON(26242, WxTerrainEditor::sub_0125fac0)
	EVT_BUTTON(26243, WxTerrainEditor::sub_01276c00)
	EVT_BUTTON(26244, WxTerrainEditor::sub_01272d80)
	EVT_BUTTON(26245, WxTerrainEditor::sub_01273140)
	EVT_BUTTON(26246, WxTerrainEditor::sub_01273220)
	EVT_BUTTON(26247, WxTerrainEditor::sub_01273230)
	EVT_BUTTON(26248, WxTerrainEditor::sub_01273240)
	EVT_CHECKBOX(26249, WxTerrainEditor::sub_0124bcd0)
	EVT_MENU(19952, WxTerrainEditor::sub_01257f50)
	EVT_MENU(19953, WxTerrainEditor::sub_01258180)
	EVT_MENU(19954, WxTerrainEditor::sub_01262de0)
	EVT_MENU(19955, WxTerrainEditor::sub_01273250)
	EVT_MENU(19956, WxTerrainEditor::sub_0125fad0)
	EVT_MENU(19957, WxTerrainEditor::sub_01257bc0)
	EVT_MENU(19959, WxTerrainEditor::sub_01276c10)
	EVT_MENU(19958, WxTerrainEditor::sub_01276c10)
	EVT_MENU(19960, WxTerrainEditor::sub_01276c10)
	EVT_MENU(19961, WxTerrainEditor::sub_01273d40)
	EVT_MENU(19963, WxTerrainEditor::sub_01274260)
	EVT_MENU(19962, WxTerrainEditor::sub_01274260)
	EVT_MENU(19964, WxTerrainEditor::sub_01274260)
	EVT_MENU(19966, WxTerrainEditor::sub_012742b0)
	EVT_MENU(19965, WxTerrainEditor::sub_012742b0)
	EVT_MENU(19967, WxTerrainEditor::sub_012742b0)
	EVT_MENU(19968, WxTerrainEditor::sub_01274640)
	EVT_MENU(19969, WxTerrainEditor::sub_01274640)
	EVT_MENU(19970, WxTerrainEditor::sub_01274640)
	EVT_MENU(19971, WxTerrainEditor::sub_01274820)
	EVT_MENU(19972, WxTerrainEditor::sub_01274820)
	EVT_MENU(19973, WxTerrainEditor::sub_01274820)
	EVT_MENU(19974, WxTerrainEditor::sub_0124bd00)
	EVT_MENU(19975, WxTerrainEditor::sub_0125c1c0)
	EVT_MENU(19976, WxTerrainEditor::sub_01274de0)
	EVT_MENU(19977, WxTerrainEditor::sub_01274de0)
	EVT_MENU(19978, WxTerrainEditor::sub_01274de0)
	EVT_MENU(19979, WxTerrainEditor::sub_01274f30)
	EVT_MENU(19980, WxTerrainEditor::sub_01274f30)
	EVT_MENU(19981, WxTerrainEditor::sub_01274f30)
	EVT_CLOSE(WxTerrainEditor::sub_01257630)
END_EVENT_TABLE()

class WxTrackableFrame : public wxFrame
{
	DECLARE_EVENT_TABLE()
};

class WxAnimSetViewer : public WxTrackableFrame
{
public:
	void sub_013107e0(wxCommandEvent& In);
	void sub_013108d0(wxCommandEvent& In);
	void sub_01310910(wxCommandEvent& In);
	void sub_0131a300(wxCommandEvent& In);
	void sub_0131a540(wxCommandEvent& In);
	void sub_0131d950(wxCommandEvent& In);
	void sub_0131e430(wxCommandEvent& In);
	void sub_0131e4d0(wxCommandEvent& In);
	void sub_0131e540(wxCommandEvent& In);
	void sub_01320570(wxCommandEvent& In);
	void sub_013206c0(wxCommandEvent& In);
	void sub_01320d60(wxCommandEvent& In);
	void sub_01320e30(wxCommandEvent& In);
	void sub_01320ed0(wxCommandEvent& In);
	void sub_01335f50(wxSizeEvent& In);
	void sub_01335f80(wxCommandEvent& In);
	void sub_013361f0(wxCommandEvent& In);
	void sub_01336270(wxCommandEvent& In);
	void sub_013362f0(wxCommandEvent& In);
	void sub_01336330(wxCommandEvent& In);
	void sub_01336370(wxCommandEvent& In);
	void sub_013363b0(wxCommandEvent& In);
	void sub_01336430(wxCommandEvent& In);
	void sub_01336490(wxCommandEvent& In);
	void sub_013364f0(wxCommandEvent& In);
	void sub_01336550(wxCommandEvent& In);
	void sub_013365b0(wxCommandEvent& In);
	void sub_01336610(wxCommandEvent& In);
	void sub_01336650(wxCommandEvent& In);
	void sub_013366e0(wxCommandEvent& In);
	void sub_01336760(wxCommandEvent& In);
	void sub_013367c0(wxCommandEvent& In);
	void sub_01336820(wxCommandEvent& In);
	void sub_013368b0(wxCommandEvent& In);
	void sub_013369b0(wxCommandEvent& In);
	void sub_01336a50(wxScrollEvent& In);
	void sub_01336ab0(wxCommandEvent& In);
	void sub_01336b60(wxCommandEvent& In);
	void sub_01336bc0(wxCommandEvent& In);
	void sub_01336c00(wxCommandEvent& In);
	void sub_01336c60(wxCommandEvent& In);
	void sub_01336c90(wxCommandEvent& In);
	void sub_01336d70(wxCommandEvent& In);
	void sub_01336dd0(wxCommandEvent& In);
	void sub_01337940(wxScrollEvent& In);
	void sub_01339500(wxCommandEvent& In);
	void sub_01339540(wxCommandEvent& In);
	void sub_01339590(wxCommandEvent& In);
	void sub_01339690(wxCommandEvent& In);
	void sub_013396d0(wxCommandEvent& In);
	void sub_01339750(wxCommandEvent& In);
	void sub_0133b680(wxCommandEvent& In);
	void sub_0133b730(wxCommandEvent& In);
	void sub_0133b900(wxCommandEvent& In);
	void sub_0133bb00(wxCommandEvent& In);
	void sub_0133bc80(wxCommandEvent& In);
	void sub_01342a70(wxTreeEvent& In);
	void sub_01348c10(wxCommandEvent& In);
	void sub_01348e00(wxCommandEvent& In);
	void sub_01348fc0(wxCommandEvent& In);
	void sub_01349570(wxCommandEvent& In);
	void sub_01349930(wxCommandEvent& In);
	void sub_0134a290(wxCommandEvent& In);
	void sub_0134ebc0(wxCommandEvent& In);
	void sub_0134ed80(wxCommandEvent& In);
	void sub_0134edd0(wxCommandEvent& In);
	void sub_0134ee20(wxCommandEvent& In);
	void sub_0134ee70(wxCommandEvent& In);
	void sub_0134eec0(wxCommandEvent& In);
	void sub_0134ef10(wxCommandEvent& In);
	void sub_0134f3a0(wxCommandEvent& In);
	void sub_0134f5f0(wxCommandEvent& In);
	void sub_01354380(wxCommandEvent& In);
	void sub_01354980(wxCommandEvent& In);
	void sub_01354990(wxCommandEvent& In);
	void sub_01354b10(wxCommandEvent& In);
	void sub_01355260(wxCommandEvent& In);
	void sub_01356060(wxCommandEvent& In);
	void sub_01356070(wxCommandEvent& In);
	void sub_01357790(wxCommandEvent& In);
	void sub_013577a0(wxCommandEvent& In);
	void sub_013577b0(wxCommandEvent& In);
	void sub_013577f0(wxCommandEvent& In);
	void sub_01357f40(wxCommandEvent& In);
	void sub_01358280(wxCommandEvent& In);
	void sub_0135d980(wxCommandEvent& In);
	void sub_0135db00(wxCommandEvent& In);
	void sub_0135db10(wxCommandEvent& In);
	void sub_0135db20(wxCommandEvent& In);
	void sub_0135db30(wxCommandEvent& In);
	void sub_0135db40(wxCommandEvent& In);
	void sub_0135db50(wxCommandEvent& In);
	void sub_0135db90(wxCommandEvent& In);
	void sub_0135dba0(wxCommandEvent& In);
	void sub_0135dc90(wxCommandEvent& In);
	void sub_0135dd50(wxCommandEvent& In);
	void sub_0135dd60(wxCommandEvent& In);
	void sub_0135e5a0(wxCommandEvent& In);
	void sub_0135e5e0(wxCommandEvent& In);
	void sub_013612a0(wxCommandEvent& In);
	void sub_013612e0(wxCommandEvent& In);
	void sub_01361340(wxCommandEvent& In);
	void sub_01361350(wxCommandEvent& In);
	void sub_01361360(wxCommandEvent& In);
	void sub_01361710(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e07190
BEGIN_EVENT_TABLE(WxAnimSetViewer, WxTrackableFrame)
	EVT_SIZE(WxAnimSetViewer::sub_01335f50)
	EVT_COMBOBOX(16269, WxAnimSetViewer::sub_013612a0)
	EVT_BUTTON(16270, WxAnimSetViewer::sub_013612e0)
	EVT_COMBOBOX(16281, WxAnimSetViewer::sub_0135e5a0)
	EVT_BUTTON(16282, WxAnimSetViewer::sub_0135e5e0)
	EVT_COMBOBOX(16271, WxAnimSetViewer::sub_01335f80)
	EVT_COMBOBOX(16272, WxAnimSetViewer::sub_01335f80)
	EVT_COMBOBOX(16273, WxAnimSetViewer::sub_01335f80)
	EVT_COMBOBOX(16274, WxAnimSetViewer::sub_01335f80)
	EVT_COMBOBOX(16275, WxAnimSetViewer::sub_01335f80)
	EVT_BUTTON(16276, WxAnimSetViewer::sub_01354380)
	EVT_BUTTON(16277, WxAnimSetViewer::sub_01354380)
	EVT_BUTTON(16278, WxAnimSetViewer::sub_01354380)
	EVT_BUTTON(16279, WxAnimSetViewer::sub_01354380)
	EVT_BUTTON(16280, WxAnimSetViewer::sub_01354380)
	EVT_LISTBOX(16283, WxAnimSetViewer::sub_0135d980)
	EVT_MENU(16290, WxAnimSetViewer::sub_0135db00)
	EVT_MENU(16291, WxAnimSetViewer::sub_01361350)
	EVT_MENU(16293, WxAnimSetViewer::sub_0135db10)
	EVT_MENU(16294, WxAnimSetViewer::sub_0135db20)
	EVT_MENU(16295, WxAnimSetViewer::sub_01348c10)
	EVT_MENU(16292, WxAnimSetViewer::sub_01361340)
	EVT_MENU(16287, WxAnimSetViewer::sub_01361360)
	EVT_MENU(16288, WxAnimSetViewer::sub_01357790)
	EVT_MENU(16289, WxAnimSetViewer::sub_013577a0)
	EVT_COMBOBOX(16284, WxAnimSetViewer::sub_013577b0)
	EVT_BUTTON(16285, WxAnimSetViewer::sub_013577f0)
	EVT_LISTBOX(16286, WxAnimSetViewer::sub_01339500)
	EVT_COMMAND_SCROLL(16296, WxAnimSetViewer::sub_01337940)
	EVT_MENU(16297, WxAnimSetViewer::sub_013361f0)
	EVT_MENU(16320, WxAnimSetViewer::sub_01336270)
	EVT_MENU(16298, WxAnimSetViewer::sub_013363b0)
	EVT_MENU(16299, WxAnimSetViewer::sub_01336430)
	EVT_MENU(16300, WxAnimSetViewer::sub_01336490)
	EVT_MENU(16301, WxAnimSetViewer::sub_013364f0)
	EVT_MENU(16302, WxAnimSetViewer::sub_013362f0)
	EVT_MENU(16303, WxAnimSetViewer::sub_01336330)
	EVT_MENU(16304, WxAnimSetViewer::sub_01336370)
	EVT_MENU(16305, WxAnimSetViewer::sub_01336550)
	EVT_MENU(16306, WxAnimSetViewer::sub_013365b0)
	EVT_MENU(16307, WxAnimSetViewer::sub_01336610)
	EVT_MENU(16310, WxAnimSetViewer::sub_01336ab0)
	EVT_MENU(16311, WxAnimSetViewer::sub_01336b60)
	EVT_MENU(16312, WxAnimSetViewer::sub_01336bc0)
	EVT_MENU(16308, WxAnimSetViewer::sub_01336650)
	EVT_MENU(16309, WxAnimSetViewer::sub_013366e0)
	EVT_MENU(16313, WxAnimSetViewer::sub_01336760)
	EVT_MENU(16314, WxAnimSetViewer::sub_013367c0)
	EVT_MENU(16315, WxAnimSetViewer::sub_01336820)
	EVT_BUTTON(16317, WxAnimSetViewer::sub_01339540)
	EVT_BUTTON(16316, WxAnimSetViewer::sub_01339590)
	EVT_MENU(16319, WxAnimSetViewer::sub_0135db40)
	EVT_MENU(16323, WxAnimSetViewer::sub_01358280)
	EVT_MENU(16324, WxAnimSetViewer::sub_01356060)
	EVT_MENU(16325, WxAnimSetViewer::sub_01348e00)
	EVT_MENU(16326, WxAnimSetViewer::sub_0135dd50)
	EVT_MENU(16327, WxAnimSetViewer::sub_0135dd60)
	EVT_MENU(16331, WxAnimSetViewer::sub_0135db50)
	EVT_MENU(16332, WxAnimSetViewer::sub_0135db90)
	EVT_MENU(16333, WxAnimSetViewer::sub_01354990)
	EVT_MENU(16334, WxAnimSetViewer::sub_01361710)
	EVT_MENU(16335, WxAnimSetViewer::sub_0135dba0)
	EVT_MENU(16336, WxAnimSetViewer::sub_01336c00)
	EVT_MENU(16337, WxAnimSetViewer::sub_0134ebc0)
	EVT_MENU(16338, WxAnimSetViewer::sub_01339690)
	EVT_MENU(16339, WxAnimSetViewer::sub_013396d0)
	EVT_MENU(16340, WxAnimSetViewer::sub_01339750)
	EVT_MENU(16341, WxAnimSetViewer::sub_01336c60)
	EVT_MENU(16342, WxAnimSetViewer::sub_0134ed80)
	EVT_MENU(16343, WxAnimSetViewer::sub_0134edd0)
	EVT_MENU(16344, WxAnimSetViewer::sub_0134ee20)
	EVT_MENU(16345, WxAnimSetViewer::sub_0134ee70)
	EVT_MENU(16346, WxAnimSetViewer::sub_0134eec0)
	EVT_MENU(16347, WxAnimSetViewer::sub_0135dc90)
	EVT_MENU(16353, WxAnimSetViewer::sub_01356070)
	EVT_MENU(16354, WxAnimSetViewer::sub_01336c90)
	EVT_MENU(16355, WxAnimSetViewer::sub_0133b680)
	EVT_MENU(16356, WxAnimSetViewer::sub_0133b730)
	EVT_MENU(16360, WxAnimSetViewer::sub_0133bc80)
	EVT_MENU(16357, WxAnimSetViewer::sub_01348fc0)
	EVT_MENU(16358, WxAnimSetViewer::sub_01349570)
	EVT_MENU(16359, WxAnimSetViewer::sub_0133b900)
	EVT_MENU(16365, WxAnimSetViewer::sub_0134ef10)
	EVT_MENU(16361, WxAnimSetViewer::sub_01349930)
	EVT_MENU(16362, WxAnimSetViewer::sub_0133bb00)
	EVT_MENU(16363, WxAnimSetViewer::sub_0134a290)
	EVT_MENU(16364, WxAnimSetViewer::sub_0134f3a0)
	EVT_MENU(16348, WxAnimSetViewer::sub_0134f5f0)
	EVT_MENU(16366, WxAnimSetViewer::sub_01320570)
	EVT_MENU(16367, WxAnimSetViewer::sub_013107e0)
	EVT_BUTTON(16375, WxAnimSetViewer::sub_013206c0)
	EVT_BUTTON(16376, WxAnimSetViewer::sub_01320d60)
	EVT_LISTBOX(16374, WxAnimSetViewer::sub_0131a300)
	EVT_MENU(16377, WxAnimSetViewer::sub_013108d0)
	EVT_MENU(16378, WxAnimSetViewer::sub_013108d0)
	EVT_MENU(16379, WxAnimSetViewer::sub_01320e30)
	EVT_MENU(16380, WxAnimSetViewer::sub_0131d950)
	EVT_MENU(16381, WxAnimSetViewer::sub_01320ed0)
	EVT_MENU(16368, WxAnimSetViewer::sub_013368b0)
	EVT_MENU(16369, WxAnimSetViewer::sub_013368b0)
	EVT_MENU(16370, WxAnimSetViewer::sub_013368b0)
	EVT_MENU(16371, WxAnimSetViewer::sub_013368b0)
	EVT_MENU(16372, WxAnimSetViewer::sub_013368b0)
	EVT_MENU(16373, WxAnimSetViewer::sub_01357f40)
	EVT_MENU(16388, WxAnimSetViewer::sub_013369b0)
	EVT_MENU(16389, WxAnimSetViewer::sub_013369b0)
	EVT_MENU(16390, WxAnimSetViewer::sub_013369b0)
	EVT_MENU(16391, WxAnimSetViewer::sub_013369b0)
	EVT_MENU(16392, WxAnimSetViewer::sub_013369b0)
	EVT_MENU(16382, WxAnimSetViewer::sub_01354980)
	EVT_MENU(16383, WxAnimSetViewer::sub_0135db30)
	EVT_MENU(16384, WxAnimSetViewer::sub_01336d70)
	EVT_MENU(16385, WxAnimSetViewer::sub_01354b10)
	EVT_MENU(16386, WxAnimSetViewer::sub_01336dd0)
	EVT_COMMAND_SCROLL_CHANGED(26294, WxAnimSetViewer::sub_01336a50)
	EVT_COMMAND_SCROLL(26294, WxAnimSetViewer::sub_01336a50)
	EVT_TREE_ITEM_RIGHT_CLICK(16260, WxAnimSetViewer::sub_01342a70)
	EVT_MENU(16262, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16263, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16264, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16265, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16266, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16267, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16268, WxAnimSetViewer::sub_01355260)
	EVT_MENU(16393, WxAnimSetViewer::sub_0131e430)
	EVT_MENU(16394, WxAnimSetViewer::sub_0131e4d0)
	EVT_MENU(16395, WxAnimSetViewer::sub_0131e540)
	EVT_MENU(16397, WxAnimSetViewer::sub_0131a540)
	EVT_MENU(16398, WxAnimSetViewer::sub_01310910)
END_EVENT_TABLE()

class WxInterpEd : public WxTrackableFrame
{
public:
	void sub_012c0700(wxSizeEvent& In);
	void sub_012c0710(wxScrollEvent& In);
	void sub_012c0a20(wxCloseEvent& In);
	void sub_012dea20(wxCommandEvent& In);
	void sub_012dea60(wxCommandEvent& In);
	void sub_012dea70(wxCommandEvent& In);
	void sub_012deaa0(wxCommandEvent& In);
	void sub_012deac0(wxCommandEvent& In);
	void sub_012deb20(wxCommandEvent& In);
	void sub_012deb80(wxCommandEvent& In);
	void sub_012debe0(wxCommandEvent& In);
	void sub_012dec10(wxUpdateUIEvent& In);
	void sub_012dec40(wxCommandEvent& In);
	void sub_012decf0(wxSplitterEvent& In);
	void sub_012deda0(wxUpdateUIEvent& In);
	void sub_012dedc0(wxUpdateUIEvent& In);
	void sub_012dee10(wxUpdateUIEvent& In);
	void sub_012dee60(wxUpdateUIEvent& In);
	void sub_012deeb0(wxUpdateUIEvent& In);
	void sub_012deee0(wxCommandEvent& In);
	void sub_012e0dd0(wxCommandEvent& In);
	void sub_012e0e90(wxCommandEvent& In);
	void sub_012e0ea0(wxCommandEvent& In);
	void sub_012e0eb0(wxCommandEvent& In);
	void sub_012e0ed0(wxCommandEvent& In);
	void sub_012e0ef0(wxCommandEvent& In);
	void sub_012e3550(wxCommandEvent& In);
	void sub_012e3630(wxCommandEvent& In);
	void sub_012e3780(wxCommandEvent& In);
	void sub_012e3820(wxCommandEvent& In);
	void sub_012e3990(wxCommandEvent& In);
	void sub_012e3ac0(wxUpdateUIEvent& In);
	void sub_012e3bb0(wxCommandEvent& In);
	void sub_012e3d90(wxCommandEvent& In);
	void sub_012e3f00(wxCommandEvent& In);
	void sub_012e3f20(wxCommandEvent& In);
	void sub_012e3f80(wxCommandEvent& In);
	void sub_012e3f90(wxCommandEvent& In);
	void sub_012e7350(wxCommandEvent& In);
	void sub_012e7360(wxCommandEvent& In);
	void sub_012e7370(wxCommandEvent& In);
	void sub_012e75c0(wxCommandEvent& In);
	void sub_012e7730(wxCommandEvent& In);
	void sub_012e79b0(wxCommandEvent& In);
	void sub_012e7b40(wxCommandEvent& In);
	void sub_012e7be0(wxUpdateUIEvent& In);
	void sub_012e7e60(wxCommandEvent& In);
	void sub_012e8240(wxCommandEvent& In);
	void sub_012e8580(wxCommandEvent& In);
	void sub_012f6840(wxCommandEvent& In);
	void sub_012f6860(wxCommandEvent& In);
	void sub_012f6f50(wxCommandEvent& In);
	void sub_012f6fd0(wxCommandEvent& In);
	void sub_012f7070(wxCommandEvent& In);
	void sub_012f73e0(wxCommandEvent& In);
	void sub_012f75e0(wxCommandEvent& In);
	void sub_012f7890(wxCommandEvent& In);
	void sub_012f7b80(wxCommandEvent& In);
	void sub_012f81b0(wxCommandEvent& In);
	void sub_012f8520(wxCommandEvent& In);
	void sub_012f87e0(wxCommandEvent& In);
	void sub_012f8ce0(wxCommandEvent& In);
	void sub_012f91e0(wxCommandEvent& In);
	void sub_012f9680(wxCommandEvent& In);
	void sub_012f9b20(wxCommandEvent& In);
	void sub_012f9d30(wxCommandEvent& In);
	void sub_012f9f40(wxCommandEvent& In);
	void sub_012fa1a0(wxCommandEvent& In);
	void sub_01304d60(wxCommandEvent& In);
	void sub_01305880(wxCommandEvent& In);
	void sub_01305cf0(wxCommandEvent& In);
	void sub_01305fd0(wxCommandEvent& In);
	void sub_01305fe0(wxCommandEvent& In);
	void sub_01306310(wxCommandEvent& In);
	void sub_01306aa0(wxCommandEvent& In);
	void sub_01306c10(wxCommandEvent& In);
	void sub_01306c20(wxCommandEvent& In);
	void sub_01306c40(wxCommandEvent& In);
	void sub_0130b810(wxCommandEvent& In);
	void sub_0130b820(wxCommandEvent& In);
	void sub_0130b910(wxCommandEvent& In);
	void sub_0130bbb0(wxCommandEvent& In);
	void sub_0130bbc0(wxCommandEvent& In);
	void sub_0130bbd0(wxCommandEvent& In);
	void sub_0130c340(wxCommandEvent& In);
	void sub_0130cd90(wxCommandEvent& In);
	void sub_0130cda0(wxCommandEvent& In);
	void sub_0130cdb0(wxCommandEvent& In);
	void sub_0130d3e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e05940
BEGIN_EVENT_TABLE(WxInterpEd, WxTrackableFrame)
	EVT_SIZE(WxInterpEd::sub_012c0700)
	EVT_CLOSE(WxInterpEd::sub_012c0a20)
	EVT_MENU(13667, WxInterpEd::sub_012e8240)
	EVT_MENU(13668, WxInterpEd::sub_012e7e60)
	EVT_MENU(13669, WxInterpEd::sub_012fa1a0)
	EVT_MENU_RANGE(13676, 13776, WxInterpEd::sub_0130b820)
	EVT_MENU_RANGE(15885, 15889, WxInterpEd::sub_012e3630)
	EVT_MENU(15897, WxInterpEd::sub_012f7b80)
	EVT_MENU(15894, WxInterpEd::sub_012f73e0)
	EVT_MENU(15895, WxInterpEd::sub_012f75e0)
	EVT_MENU(15896, WxInterpEd::sub_012f7890)
	EVT_MENU(15898, WxInterpEd::sub_012e3820)
	EVT_MENU(15899, WxInterpEd::sub_012e3820)
	EVT_MENU(15900, WxInterpEd::sub_012f81b0)
	EVT_MENU(15901, WxInterpEd::sub_012f81b0)
	EVT_MENU(15902, WxInterpEd::sub_012f8520)
	EVT_MENU(15903, WxInterpEd::sub_012e3990)
	EVT_UPDATE_UI(15903, WxInterpEd::sub_012e3ac0)
	EVT_MENU(15925, WxInterpEd::sub_01306310)
	EVT_MENU(15904, WxInterpEd::sub_012f87e0)
	EVT_MENU(15905, WxInterpEd::sub_012f8ce0)
	EVT_MENU(13794, WxInterpEd::sub_01306aa0)
	EVT_MENU(15906, WxInterpEd::sub_012f91e0)
	EVT_MENU(15907, WxInterpEd::sub_012f9680)
	EVT_MENU(15908, WxInterpEd::sub_012f9b20)
	EVT_MENU(15909, WxInterpEd::sub_012f9d30)
	EVT_MENU(15910, WxInterpEd::sub_012f9f40)
	EVT_MENU(15912, WxInterpEd::sub_012e3bb0)
	EVT_MENU(15914, WxInterpEd::sub_012e3d90)
	EVT_MENU(15915, WxInterpEd::sub_012e3d90)
	EVT_MENU(15916, WxInterpEd::sub_012e3d90)
	EVT_MENU(15911, WxInterpEd::sub_01306c10)
	EVT_MENU(13796, WxInterpEd::sub_012f6860)
	EVT_MENU(13797, WxInterpEd::sub_01304d60)
	EVT_MENU(13798, WxInterpEd::sub_0130bbd0)
	EVT_MENU(13799, WxInterpEd::sub_012e79b0)
	EVT_MENU(13800, WxInterpEd::sub_012f6fd0)
	EVT_MENU(13853, WxInterpEd::sub_012f6f50)
	EVT_MENU_RANGE(13802, 13852, WxInterpEd::sub_012e7b40)
	EVT_MENU_RANGE(13855, 14855, WxInterpEd::sub_012f7070)
	EVT_MENU_RANGE(14857, 15857, WxInterpEd::sub_012f7070)
	EVT_MENU(15858, WxInterpEd::sub_012f7070)
	EVT_MENU(13787, WxInterpEd::sub_012e7370)
	EVT_MENU(13788, WxInterpEd::sub_0130bbc0)
	EVT_MENU(15877, WxInterpEd::sub_012dec40)
	EVT_MENU_RANGE(13789, 13790, WxInterpEd::sub_0130c340)
	EVT_MENU(13791, WxInterpEd::sub_012e75c0)
	EVT_MENU(15873, WxInterpEd::sub_012e7730)
	EVT_MENU(15874, WxInterpEd::sub_012e7730)
	EVT_MENU(13792, WxInterpEd::sub_012e3550)
	EVT_MENU(13793, WxInterpEd::sub_012e3550)
	EVT_MENU(13675, WxInterpEd::sub_01304d60)
	EVT_MENU(13670, WxInterpEd::sub_01304d60)
	EVT_MENU(13671, WxInterpEd::sub_01304d60)
	EVT_MENU(13672, WxInterpEd::sub_01304d60)
	EVT_MENU(13673, WxInterpEd::sub_01304d60)
	EVT_MENU(13674, WxInterpEd::sub_01304d60)
	EVT_MENU(13777, WxInterpEd::sub_0130b810)
	EVT_COMBOBOX(15884, WxInterpEd::sub_012deee0)
	EVT_MENU(13778, WxInterpEd::sub_012dea20)
	EVT_MENU(13780, WxInterpEd::sub_012dea20)
	EVT_MENU(13779, WxInterpEd::sub_012dea20)
	EVT_MENU(13781, WxInterpEd::sub_012dea60)
	EVT_MENU_RANGE(13782, 13786, WxInterpEd::sub_012e0dd0)
	EVT_MENU(13795, WxInterpEd::sub_012debe0)
	EVT_UPDATE_UI(13795, WxInterpEd::sub_012dec10)
	EVT_MENU(9193, WxInterpEd::sub_012dea70)
	EVT_MENU(15865, WxInterpEd::sub_012e0e90)
	EVT_MENU(15866, WxInterpEd::sub_012e0ea0)
	EVT_MENU(15867, WxInterpEd::sub_0130cd90)
	EVT_MENU(15868, WxInterpEd::sub_0130cda0)
	EVT_MENU(15869, WxInterpEd::sub_0130cdb0)
	EVT_UPDATE_UI(15865, WxInterpEd::sub_012e7be0)
	EVT_UPDATE_UI(15866, WxInterpEd::sub_012e7be0)
	EVT_UPDATE_UI(15867, WxInterpEd::sub_012e7be0)
	EVT_UPDATE_UI(15868, WxInterpEd::sub_012e7be0)
	EVT_UPDATE_UI(15869, WxInterpEd::sub_012e7be0)
	EVT_MENU(15891, WxInterpEd::sub_01305fe0)
	EVT_MENU(15892, WxInterpEd::sub_012e3780)
	EVT_MENU(15878, WxInterpEd::sub_012e0eb0)
	EVT_UPDATE_UI(15878, WxInterpEd::sub_012deda0)
	EVT_MENU(15879, WxInterpEd::sub_01306c20)
	EVT_UPDATE_UI(15879, WxInterpEd::sub_012dedc0)
	EVT_MENU(15880, WxInterpEd::sub_012e3f00)
	EVT_UPDATE_UI(15880, WxInterpEd::sub_012dee10)
	EVT_MENU(15881, WxInterpEd::sub_012e0ed0)
	EVT_UPDATE_UI(15881, WxInterpEd::sub_012dee60)
	EVT_MENU(15882, WxInterpEd::sub_012e0ef0)
	EVT_UPDATE_UI(15882, WxInterpEd::sub_012deeb0)
	EVT_MENU(15918, WxInterpEd::sub_012e3f20)
	EVT_MENU(15919, WxInterpEd::sub_012e8580)
	EVT_MENU(15920, WxInterpEd::sub_012e3f80)
	EVT_MENU(15921, WxInterpEd::sub_012e3f90)
	EVT_COMBOBOX(15883, WxInterpEd::sub_01306c40)
	EVT_MENU(15859, WxInterpEd::sub_01305cf0)
	EVT_MENU(15860, WxInterpEd::sub_01305880)
	EVT_MENU(15861, WxInterpEd::sub_0130b910)
	EVT_MENU(15862, WxInterpEd::sub_0130bbb0)
	EVT_MENU(15870, WxInterpEd::sub_01305fd0)
	EVT_MENU(15863, WxInterpEd::sub_012deaa0)
	EVT_MENU(15864, WxInterpEd::sub_012f6840)
	EVT_MENU(15871, WxInterpEd::sub_0130d3e0)
	EVT_MENU(15872, WxInterpEd::sub_012deac0)
	EVT_MENU(15875, WxInterpEd::sub_012deb20)
	EVT_MENU(15876, WxInterpEd::sub_012deb80)
	EVT_MENU(15926, WxInterpEd::sub_012e7350)
	EVT_MENU(15927, WxInterpEd::sub_012e7360)
	EVT_SPLITTER_SASH_POS_CHANGED(15917, WxInterpEd::sub_012decf0)
	EVT_SCROLL(WxInterpEd::sub_012c0710)
END_EVENT_TABLE()

class WxCascade : public WxTrackableFrame
{
public:
	void sub_0129deb0(wxSizeEvent& In);
	void sub_0129dee0(wxCommandEvent& In);
	void sub_0129def0(wxCommandEvent& In);
	void sub_0129e1b0(wxCommandEvent& In);
	void sub_0129e210(wxCommandEvent& In);
	void sub_0129e2a0(wxCommandEvent& In);
	void sub_0129e2e0(wxCommandEvent& In);
	void sub_0129e310(wxCommandEvent& In);
	void sub_0129e340(wxCommandEvent& In);
	void sub_0129e3d0(wxCommandEvent& In);
	void sub_0129e3f0(wxCommandEvent& In);
	void sub_0129e450(wxCommandEvent& In);
	void sub_0129e470(wxCommandEvent& In);
	void sub_0129e4d0(wxCommandEvent& In);
	void sub_0129e530(wxCommandEvent& In);
	void sub_0129e590(wxCommandEvent& In);
	void sub_0129e670(wxCommandEvent& In);
	void sub_0129e6a0(wxCommandEvent& In);
	void sub_0129e6c0(wxCommandEvent& In);
	void sub_0129e6e0(wxCommandEvent& In);
	void sub_0129e780(wxCommandEvent& In);
	void sub_0129e7b0(wxCommandEvent& In);
	void sub_0129e900(wxCommandEvent& In);
	void sub_012a0f30(wxCommandEvent& In);
	void sub_012a0f50(wxCommandEvent& In);
	void sub_012a0f60(wxCommandEvent& In);
	void sub_012a1040(wxCommandEvent& In);
	void sub_012a2600(wxCommandEvent& In);
	void sub_012a7cb0(wxCommandEvent& In);
	void sub_012a7e70(wxCommandEvent& In);
	void sub_012a7f20(wxCommandEvent& In);
	void sub_012a7f90(wxCommandEvent& In);
	void sub_012a8200(wxCommandEvent& In);
	void sub_012a8b60(wxCommandEvent& In);
	void sub_012a8d50(wxCommandEvent& In);
	void sub_012a8f50(wxCommandEvent& In);
	void sub_012a8fe0(wxCommandEvent& In);
	void sub_012a9070(wxCommandEvent& In);
	void sub_012a9100(wxCommandEvent& In);
	void sub_012a9190(wxCommandEvent& In);
	void sub_012ae3e0(wxCommandEvent& In);
	void sub_012ae440(wxCommandEvent& In);
	void sub_012b0710(wxCommandEvent& In);
	void sub_012b0d10(wxCommandEvent& In);
	void sub_012b2bd0(wxCommandEvent& In);
	void sub_012b2c80(wxCommandEvent& In);
	void sub_012b3150(wxCommandEvent& In);
	void sub_012b3650(wxCommandEvent& In);
	void sub_012b6540(wxCommandEvent& In);
	void sub_012b6550(wxCommandEvent& In);
	void sub_012b6af0(wxCommandEvent& In);
	void sub_012b6b00(wxCommandEvent& In);
	void sub_012b8a00(wxCommandEvent& In);
	void sub_012b8a10(wxCommandEvent& In);
	void sub_012b8a20(wxCommandEvent& In);
	void sub_012b8a30(wxCommandEvent& In);
	void sub_012b8a40(wxCommandEvent& In);
	void sub_012b8ac0(wxCommandEvent& In);
	void sub_012b8bd0(wxCommandEvent& In);
	void sub_012b8e90(wxCommandEvent& In);
	void sub_012b9160(wxCommandEvent& In);
	void sub_012b9260(wxCommandEvent& In);
	void sub_012bd400(wxCommandEvent& In);
	void sub_012bd410(wxCommandEvent& In);
	void sub_012bd570(wxCommandEvent& In);
	void sub_012bd6e0(wxCommandEvent& In);
	void sub_012bd6f0(wxCommandEvent& In);
	void sub_012bd830(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e04cc0
BEGIN_EVENT_TABLE(WxCascade, WxTrackableFrame)
	EVT_SIZE(WxCascade::sub_0129deb0)
	EVT_MENU(15932, WxCascade::sub_012a7cb0)
	EVT_MENU_RANGE(15933, 15943, WxCascade::sub_012b0710)
	EVT_MENU(15944, WxCascade::sub_012bd400)
	EVT_MENU(15945, WxCascade::sub_012bd410)
	EVT_MENU(15946, WxCascade::sub_012bd570)
	EVT_MENU_RANGE(15947, 16047, WxCascade::sub_012ae3e0)
	EVT_MENU(16048, WxCascade::sub_0129dee0)
	EVT_MENU(16049, WxCascade::sub_012a0f30)
	EVT_MENU(16050, WxCascade::sub_012bd6f0)
	EVT_MENU(16051, WxCascade::sub_012bd830)
	EVT_MENU(16052, WxCascade::sub_012b8a00)
	EVT_MENU(16053, WxCascade::sub_012a0f50)
	EVT_MENU(16054, WxCascade::sub_012ae440)
	EVT_MENU(16055, WxCascade::sub_012b0d10)
	EVT_MENU(16056, WxCascade::sub_012a7f20)
	EVT_MENU(16057, WxCascade::sub_012b8a10)
	EVT_MENU(16059, WxCascade::sub_012b8a30)
	EVT_MENU(16058, WxCascade::sub_012b8a20)
	EVT_MENU(16060, WxCascade::sub_012a7e70)
	EVT_MENU(16061, WxCascade::sub_012a7e70)
	EVT_MENU(16062, WxCascade::sub_012bd6e0)
	EVT_MENU(16063, WxCascade::sub_012b6540)
	EVT_MENU(16065, WxCascade::sub_012b6550)
	EVT_MENU_RANGE(16066, 16071, WxCascade::sub_0129def0)
	EVT_MENU(16073, WxCascade::sub_0129e1b0)
	EVT_MENU(16075, WxCascade::sub_0129e210)
	EVT_MENU(16076, WxCascade::sub_012b2bd0)
	EVT_MENU(16077, WxCascade::sub_0129e2a0)
	EVT_MENU(16078, WxCascade::sub_0129e2e0)
	EVT_MENU(16079, WxCascade::sub_0129e310)
	EVT_TOOL_RCLICKED(16079, WxCascade::sub_012a8b60)
	EVT_MENU(16080, WxCascade::sub_012a0f60)
	EVT_MENU(16081, WxCascade::sub_0129e340)
	EVT_MENU(16082, WxCascade::sub_0129e6a0)
	EVT_MENU(16083, WxCascade::sub_0129e6c0)
	EVT_MENU(16088, WxCascade::sub_0129e6e0)
	EVT_MENU(16087, WxCascade::sub_0129e6e0)
	EVT_MENU(16086, WxCascade::sub_0129e6e0)
	EVT_MENU(16085, WxCascade::sub_0129e6e0)
	EVT_MENU(16084, WxCascade::sub_0129e6e0)
	EVT_MENU(16089, WxCascade::sub_0129e780)
	EVT_MENU(16090, WxCascade::sub_012a1040)
	EVT_MENU(16103, WxCascade::sub_0129e7b0)
	EVT_MENU(16104, WxCascade::sub_012a9190)
	EVT_MENU(16106, WxCascade::sub_012b6af0)
	EVT_MENU(16107, WxCascade::sub_012b6b00)
	EVT_MENU(16105, WxCascade::sub_0129e900)
	EVT_MENU(16108, WxCascade::sub_012b8a40)
	EVT_MENU(16109, WxCascade::sub_012b8ac0)
	EVT_MENU(16114, WxCascade::sub_012b8bd0)
	EVT_MENU(16115, WxCascade::sub_012b8e90)
	EVT_MENU(16112, WxCascade::sub_012b9160)
	EVT_MENU(16113, WxCascade::sub_012b9260)
	EVT_MENU(16116, WxCascade::sub_012b3650)
	EVT_MENU(16117, WxCascade::sub_012b2c80)
	EVT_MENU(16118, WxCascade::sub_012b3150)
	EVT_MENU(16091, WxCascade::sub_0129e3d0)
	EVT_MENU(16092, WxCascade::sub_0129e3f0)
	EVT_MENU(16093, WxCascade::sub_0129e450)
	EVT_MENU(16094, WxCascade::sub_0129e4d0)
	EVT_MENU(16095, WxCascade::sub_0129e470)
	EVT_MENU(16096, WxCascade::sub_0129e530)
	EVT_MENU(16097, WxCascade::sub_0129e590)
	EVT_MENU(16098, WxCascade::sub_012a8d50)
	EVT_MENU(16099, WxCascade::sub_012a2600)
	EVT_MENU(16100, WxCascade::sub_012a7f90)
	EVT_MENU(16101, WxCascade::sub_012b2c80)
	EVT_MENU(16102, WxCascade::sub_012a8200)
	EVT_MENU(16072, WxCascade::sub_0129e670)
	EVT_MENU(16119, WxCascade::sub_012a8f50)
	EVT_MENU(16120, WxCascade::sub_012a8fe0)
	EVT_MENU(16121, WxCascade::sub_012a9070)
	EVT_MENU(16122, WxCascade::sub_012a9100)
END_EVENT_TABLE()

class WxTrackableWindow : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxBrowser : public WxTrackableWindow
{
	DECLARE_EVENT_TABLE()
};

class WxGenericBrowser : public WxBrowser
{
public:
	void sub_01367ee0(wxSizeEvent& In);
	void sub_01367f10(wxCommandEvent& In);
	void sub_01367f40(wxCommandEvent& In);
	void sub_01367f80(wxCommandEvent& In);
	void sub_01367ff0(wxCommandEvent& In);
	void sub_01368000(wxCommandEvent& In);
	void sub_01368010(wxCommandEvent& In);
	void sub_01368030(wxCommandEvent& In);
	void sub_01368910(wxCommandEvent& In);
	void sub_01368930(wxUpdateUIEvent& In);
	void sub_01368950(wxCommandEvent& In);
	void sub_01368980(wxUpdateUIEvent& In);
	void sub_013689a0(wxCommandEvent& In);
	void sub_01369240(wxCommandEvent& In);
	void sub_01369250(wxCommandEvent& In);
	void sub_0136f9f0(wxCommandEvent& In);
	void sub_0136fd70(wxCommandEvent& In);
	void sub_01370e70(wxCommandEvent& In);
	void sub_01371210(wxCommandEvent& In);
	void sub_01373770(wxCommandEvent& In);
	void sub_013737b0(wxCommandEvent& In);
	void sub_013737f0(wxCommandEvent& In);
	void sub_01373890(wxUpdateUIEvent& In);
	void sub_013739b0(wxCommandEvent& In);
	void sub_01379a80(wxCommandEvent& In);
	void sub_0137a230(wxCommandEvent& In);
	void sub_0137a780(wxCommandEvent& In);
	void sub_0137b770(wxCommandEvent& In);
	void sub_0137b810(wxUpdateUIEvent& In);
	void sub_01380c60(wxCommandEvent& In);
	void sub_01380c70(wxCommandEvent& In);
	void sub_01381000(wxCommandEvent& In);
	void sub_01381250(wxCommandEvent& In);
	void sub_01382090(wxCommandEvent& In);
	void sub_01382290(wxCommandEvent& In);
	void sub_01382ca0(wxCommandEvent& In);
	void sub_01383350(wxCommandEvent& In);
	void sub_013835a0(wxCommandEvent& In);
	void sub_01383620(wxUpdateUIEvent& In);
	void sub_01383710(wxUpdateUIEvent& In);
	void sub_01383800(wxUpdateUIEvent& In);
	void sub_01387670(wxCommandEvent& In);
	void sub_013916a0(wxCommandEvent& In);
	void sub_01394fe0(wxCommandEvent& In);
	void sub_01395070(wxCommandEvent& In);
	void sub_013951f0(wxCommandEvent& In);
	void sub_013966c0(wxCommandEvent& In);
	void sub_01396830(wxCommandEvent& In);
	void sub_01396f80(wxCommandEvent& In);
	void sub_013979b0(wxCommandEvent& In);
	void sub_01399760(wxCommandEvent& In);
	void sub_013998d0(wxCommandEvent& In);
	void sub_01399ab0(wxCommandEvent& In);
	void sub_0139a020(wxCommandEvent& In);
	void sub_013a00c0(wxCommandEvent& In);
	void sub_013a2eb0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e09050
BEGIN_EVENT_TABLE(WxGenericBrowser, WxBrowser)
	EVT_SIZE(WxGenericBrowser::sub_01367ee0)
	EVT_MENU(19876, WxGenericBrowser::sub_01367f10)
	EVT_MENU_RANGE(6389, 6397, WxGenericBrowser::sub_013966c0)
	EVT_MENU(6689, WxGenericBrowser::sub_01396830)
	EVT_MENU(6690, WxGenericBrowser::sub_01396f80)
	EVT_MENU(6691, WxGenericBrowser::sub_013979b0)
	EVT_MENU(19900, WxGenericBrowser::sub_01380c60)
	EVT_MENU(6692, WxGenericBrowser::sub_01380c70)
	EVT_MENU(6361, WxGenericBrowser::sub_01381000)
	EVT_MENU(6377, WxGenericBrowser::sub_013a00c0)
	EVT_MENU(6380, WxGenericBrowser::sub_01399760)
	EVT_MENU(6383, WxGenericBrowser::sub_013998d0)
	EVT_MENU(6384, WxGenericBrowser::sub_01399ab0)
	EVT_MENU(6386, WxGenericBrowser::sub_0139a020)
	EVT_MENU_RANGE(16516, 16616, WxGenericBrowser::sub_01381250)
	EVT_MENU(17152, WxGenericBrowser::sub_013a2eb0)
	EVT_MENU(17150, WxGenericBrowser::sub_01367ff0)
	EVT_MENU(17151, WxGenericBrowser::sub_01368000)
	EVT_MENU(17145, WxGenericBrowser::sub_01368010)
	EVT_MENU(17146, WxGenericBrowser::sub_013835a0)
	EVT_MENU(17147, WxGenericBrowser::sub_01369240)
	EVT_MENU(17148, WxGenericBrowser::sub_01369250)
	EVT_MENU(17149, WxGenericBrowser::sub_01368030)
	EVT_UPDATE_UI(17146, WxGenericBrowser::sub_01383710)
	EVT_UPDATE_UI(17147, WxGenericBrowser::sub_0137b810)
	EVT_UPDATE_UI(17149, WxGenericBrowser::sub_01383800)
	EVT_UPDATE_UI(17145, WxGenericBrowser::sub_01383620)
	EVT_MENU(6385, WxGenericBrowser::sub_013951f0)
	EVT_MENU(9053, WxGenericBrowser::sub_0136fd70)
	EVT_MENU(9054, WxGenericBrowser::sub_01367f80)
	EVT_MENU(9058, WxGenericBrowser::sub_01383350)
	EVT_MENU(9059, WxGenericBrowser::sub_01399760)
	EVT_MENU(16711, WxGenericBrowser::sub_0136f9f0)
	EVT_MENU(16833, WxGenericBrowser::sub_01382090)
	EVT_MENU(16712, WxGenericBrowser::sub_01379a80)
	EVT_MENU(16713, WxGenericBrowser::sub_01370e70)
	EVT_MENU(16714, WxGenericBrowser::sub_01371210)
	EVT_MENU(9066, WxGenericBrowser::sub_01382290)
	EVT_MENU(9067, WxGenericBrowser::sub_0137a230)
	EVT_MENU_RANGE(16715, 16936, WxGenericBrowser::sub_01367f40)
	EVT_MENU(16938, WxGenericBrowser::sub_013739b0)
	EVT_MENU(16937, WxGenericBrowser::sub_013737f0)
	EVT_UPDATE_UI(16937, WxGenericBrowser::sub_01373890)
	EVT_MENU(6685, WxGenericBrowser::sub_01368910)
	EVT_UPDATE_UI(6685, WxGenericBrowser::sub_01368930)
	EVT_MENU(6686, WxGenericBrowser::sub_01368950)
	EVT_UPDATE_UI(6686, WxGenericBrowser::sub_01368980)
	EVT_MENU(6687, WxGenericBrowser::sub_01373770)
	EVT_MENU(6688, WxGenericBrowser::sub_013737b0)
	EVT_MENU(17154, WxGenericBrowser::sub_013689a0)
	EVT_MENU(9060, WxGenericBrowser::sub_013916a0)
	EVT_MENU(9061, WxGenericBrowser::sub_01394fe0)
	EVT_MENU(9062, WxGenericBrowser::sub_01395070)
	EVT_MENU(9057, WxGenericBrowser::sub_0137b770)
	EVT_MENU(9063, WxGenericBrowser::sub_01387670)
	EVT_MENU(9064, WxGenericBrowser::sub_01382ca0)
	EVT_MENU(9065, WxGenericBrowser::sub_0137a780)
END_EVENT_TABLE()

class WxPhAT : public WxTrackableFrame
{
public:
	void sub_01318190(wxTreeEvent& In);
	void sub_0131ef10(wxUpdateUIEvent& In);
	void sub_0132ce70(wxTreeEvent& In);
	void sub_0132e590(wxTreeEvent& In);
	void sub_013351e0(wxCloseEvent& In);
	void sub_01335220(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e06950
BEGIN_EVENT_TABLE(WxPhAT, WxTrackableFrame)
	EVT_CLOSE(WxPhAT::sub_013351e0)
	EVT_MENU(16180, WxPhAT::sub_01335220)
	EVT_MENU(16181, WxPhAT::sub_01335220)
	EVT_MENU(16182, WxPhAT::sub_01335220)
	EVT_MENU(16183, WxPhAT::sub_01335220)
	EVT_MENU(16184, WxPhAT::sub_01335220)
	EVT_MENU(16185, WxPhAT::sub_01335220)
	EVT_MENU(16190, WxPhAT::sub_01335220)
	EVT_MENU(16212, WxPhAT::sub_01335220)
	EVT_MENU(16191, WxPhAT::sub_01335220)
	EVT_MENU(16192, WxPhAT::sub_01335220)
	EVT_MENU(16193, WxPhAT::sub_01335220)
	EVT_MENU(16194, WxPhAT::sub_01335220)
	EVT_MENU(16195, WxPhAT::sub_01335220)
	EVT_MENU(16196, WxPhAT::sub_01335220)
	EVT_MENU(16197, WxPhAT::sub_01335220)
	EVT_MENU(16198, WxPhAT::sub_01335220)
	EVT_MENU(16199, WxPhAT::sub_01335220)
	EVT_MENU(16200, WxPhAT::sub_01335220)
	EVT_MENU(16201, WxPhAT::sub_01335220)
	EVT_MENU(16202, WxPhAT::sub_01335220)
	EVT_MENU(16203, WxPhAT::sub_01335220)
	EVT_MENU(16204, WxPhAT::sub_01335220)
	EVT_MENU(16205, WxPhAT::sub_01335220)
	EVT_MENU(16206, WxPhAT::sub_01335220)
	EVT_MENU(16207, WxPhAT::sub_01335220)
	EVT_MENU(16208, WxPhAT::sub_01335220)
	EVT_MENU(16209, WxPhAT::sub_01335220)
	EVT_BUTTON(16210, WxPhAT::sub_01335220)
	EVT_COMBOBOX(16211, WxPhAT::sub_01335220)
	EVT_MENU(16213, WxPhAT::sub_01335220)
	EVT_BUTTON(16178, WxPhAT::sub_01335220)
	EVT_BUTTON(16179, WxPhAT::sub_01335220)
	EVT_BUTTON(16186, WxPhAT::sub_01335220)
	EVT_BUTTON(16187, WxPhAT::sub_01335220)
	EVT_BUTTON(16188, WxPhAT::sub_01335220)
	EVT_BUTTON(16189, WxPhAT::sub_01335220)
	EVT_MENU(16214, WxPhAT::sub_01335220)
	EVT_MENU(16215, WxPhAT::sub_01335220)
	EVT_MENU(16216, WxPhAT::sub_01335220)
	EVT_MENU(16217, WxPhAT::sub_01335220)
	EVT_MENU(16218, WxPhAT::sub_01335220)
	EVT_MENU(16219, WxPhAT::sub_01335220)
	EVT_MENU(16220, WxPhAT::sub_01335220)
	EVT_MENU(16221, WxPhAT::sub_01335220)
	EVT_MENU(16222, WxPhAT::sub_01335220)
	EVT_MENU(16223, WxPhAT::sub_01335220)
	EVT_MENU(16224, WxPhAT::sub_01335220)
	EVT_MENU(16225, WxPhAT::sub_01335220)
	EVT_MENU(16226, WxPhAT::sub_01335220)
	EVT_MENU(16227, WxPhAT::sub_01335220)
	EVT_TREE_SEL_CHANGED(16228, WxPhAT::sub_0132e590)
	EVT_TREE_ITEM_RIGHT_CLICK(16228, WxPhAT::sub_01318190)
	EVT_UPDATE_UI(16219, WxPhAT::sub_0131ef10)
	EVT_TREE_ITEM_ACTIVATED(16228, WxPhAT::sub_0132ce70)
END_EVENT_TABLE()

class WxStaticMeshEditor : public WxTrackableFrame
{
public:
	void sub_01220420(wxSizeEvent& In);
	void sub_01220430(wxPaintEvent& In);
	void sub_012204b0(wxUpdateUIEvent& In);
	void sub_012204d0(wxUpdateUIEvent& In);
	void sub_012204f0(wxUpdateUIEvent& In);
	void sub_01220540(wxUpdateUIEvent& In);
	void sub_01220570(wxUpdateUIEvent& In);
	void sub_012205a0(wxUpdateUIEvent& In);
	void sub_012205c0(wxCommandEvent& In);
	void sub_012205f0(wxCommandEvent& In);
	void sub_01220620(wxCommandEvent& In);
	void sub_012206c0(wxCommandEvent& In);
	void sub_012206e0(wxCommandEvent& In);
	void sub_01220700(wxCommandEvent& In);
	void sub_01220780(wxScrollEvent& In);
	void sub_01220c20(wxCommandEvent& In);
	void sub_012220c0(wxCommandEvent& In);
	void sub_01222100(wxCommandEvent& In);
	void sub_012247c0(wxCommandEvent& In);
	void sub_0122a510(wxCommandEvent& In);
	void sub_01231120(wxCommandEvent& In);
	void sub_01231130(wxCommandEvent& In);
	void sub_01231140(wxCommandEvent& In);
	void sub_01231150(wxCommandEvent& In);
	void sub_01231160(wxCommandEvent& In);
	void sub_01231170(wxCommandEvent& In);
	void sub_01231180(wxCommandEvent& In);
	void sub_01233530(wxCommandEvent& In);
	void sub_012396b0(wxCommandEvent& In);
	void sub_01239970(wxCommandEvent& In);
	void sub_0123fa60(wxCommandEvent& In);
	void sub_01240d10(wxCommandEvent& In);
	void sub_01242c70(wxCommandEvent& In);
	void sub_01243960(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01eb0
BEGIN_EVENT_TABLE(WxStaticMeshEditor, WxTrackableFrame)
	EVT_SIZE(WxStaticMeshEditor::sub_01220420)
	EVT_PAINT(WxStaticMeshEditor::sub_01220430)
	EVT_UPDATE_UI(17080, WxStaticMeshEditor::sub_012204b0)
	EVT_UPDATE_UI(17081, WxStaticMeshEditor::sub_012204d0)
	EVT_UPDATE_UI(17082, WxStaticMeshEditor::sub_012204f0)
	EVT_UPDATE_UI(17085, WxStaticMeshEditor::sub_01220540)
	EVT_UPDATE_UI(6659, WxStaticMeshEditor::sub_01220570)
	EVT_UPDATE_UI(17083, WxStaticMeshEditor::sub_012205a0)
	EVT_MENU(17080, WxStaticMeshEditor::sub_012205c0)
	EVT_MENU(17081, WxStaticMeshEditor::sub_012205f0)
	EVT_MENU(17082, WxStaticMeshEditor::sub_01220620)
	EVT_MENU(17085, WxStaticMeshEditor::sub_012206c0)
	EVT_MENU(6659, WxStaticMeshEditor::sub_012206e0)
	EVT_MENU(17083, WxStaticMeshEditor::sub_012247c0)
	EVT_MENU(17084, WxStaticMeshEditor::sub_01220700)
	EVT_MENU(17086, WxStaticMeshEditor::sub_01231120)
	EVT_MENU(17087, WxStaticMeshEditor::sub_01231130)
	EVT_MENU(17088, WxStaticMeshEditor::sub_01231140)
	EVT_MENU(17089, WxStaticMeshEditor::sub_01231150)
	EVT_MENU(17090, WxStaticMeshEditor::sub_01231160)
	EVT_MENU(17091, WxStaticMeshEditor::sub_01231170)
	EVT_MENU(17092, WxStaticMeshEditor::sub_012220c0)
	EVT_MENU(17096, WxStaticMeshEditor::sub_0122a510)
	EVT_MENU(17097, WxStaticMeshEditor::sub_0122a510)
	EVT_MENU(17098, WxStaticMeshEditor::sub_0122a510)
	EVT_MENU(17099, WxStaticMeshEditor::sub_0122a510)
	EVT_MENU(17100, WxStaticMeshEditor::sub_0122a510)
	EVT_MENU(17101, WxStaticMeshEditor::sub_01243960)
	EVT_MENU(17102, WxStaticMeshEditor::sub_01242c70)
	EVT_MENU(17103, WxStaticMeshEditor::sub_012396b0)
	EVT_MENU(17104, WxStaticMeshEditor::sub_01239970)
	EVT_MENU(17105, WxStaticMeshEditor::sub_01233530)
	EVT_MENU(17094, WxStaticMeshEditor::sub_01231180)
	EVT_MENU(17095, WxStaticMeshEditor::sub_01240d10)
	EVT_MENU(17093, WxStaticMeshEditor::sub_01222100)
	EVT_MENU(17106, WxStaticMeshEditor::sub_0123fa60)
	EVT_MENU(17107, WxStaticMeshEditor::sub_01220c20)
	EVT_COMMAND_SCROLL_CHANGED(26294, WxStaticMeshEditor::sub_01220780)
	EVT_COMMAND_SCROLL(26294, WxStaticMeshEditor::sub_01220780)
END_EVENT_TABLE()

class WxMaterialEditorBase : public WxTrackableFrame
{
	DECLARE_EVENT_TABLE()
};

class WxMaterialEditor : public WxMaterialEditorBase
{
public:
	void sub_0140a280(wxCommandEvent& In);
	void sub_0140a2c0(wxCommandEvent& In);
	void sub_01426610(wxCommandEvent& In);
	void sub_01426640(wxCommandEvent& In);
	void sub_01426690(wxUpdateUIEvent& In);
	void sub_014266d0(wxUpdateUIEvent& In);
	void sub_014266f0(wxUpdateUIEvent& In);
	void sub_01426720(wxUpdateUIEvent& In);
	void sub_01426760(wxUpdateUIEvent& In);
	void sub_01427e50(wxCommandEvent& In);
	void sub_01427e70(wxUpdateUIEvent& In);
	void sub_01427e90(wxCommandEvent& In);
	void sub_01429480(wxCommandEvent& In);
	void sub_01429500(wxCommandEvent& In);
	void sub_014343a0(wxCommandEvent& In);
	void sub_014343b0(wxCommandEvent& In);
	void sub_014343f0(wxListEvent& In);
	void sub_01436ae0(wxCommandEvent& In);
	void sub_01436d10(wxCommandEvent& In);
	void sub_01436d20(wxCommandEvent& In);
	void sub_0143b230(wxCommandEvent& In);
	void sub_0143b480(wxCommandEvent& In);
	void sub_0143b490(wxCommandEvent& In);
	void sub_0143b4a0(wxCommandEvent& In);
	void sub_0143b4b0(wxCommandEvent& In);
	void sub_0143b4c0(wxCommandEvent& In);
	void sub_0143b4d0(wxCommandEvent& In);
	void sub_0143b4e0(wxCommandEvent& In);
	void sub_0143b4f0(wxCommandEvent& In);
	void sub_0143b500(wxCommandEvent& In);
	void sub_0143b510(wxCommandEvent& In);
	void sub_0143b520(wxCommandEvent& In);
	void sub_0143b530(wxCommandEvent& In);
	void sub_0143b540(wxCommandEvent& In);
	void sub_0143ddc0(wxCloseEvent& In);
	void sub_0143dee0(wxCommandEvent& In);
	void sub_0143def0(wxCommandEvent& In);
	void sub_0143df00(wxCommandEvent& In);
	void sub_0143e110(wxCommandEvent& In);
	void sub_0143f3d0(wxCommandEvent& In);
	void sub_01442250(wxCommandEvent& In);
	void sub_014439d0(wxCommandEvent& In);
	void sub_014471e0(wxCommandEvent& In);
	void sub_0144d580(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0d0b0
BEGIN_EVENT_TABLE(WxMaterialEditor, WxMaterialEditorBase)
	EVT_CLOSE(WxMaterialEditor::sub_0143ddc0)
	EVT_MENU_RANGE(8892, 9042, WxMaterialEditor::sub_0143b230)
	EVT_MENU(20006, WxMaterialEditor::sub_014343a0)
	EVT_MENU(20011, WxMaterialEditor::sub_01442250)
	EVT_MENU(8891, WxMaterialEditor::sub_01436ae0)
	EVT_MENU(8867, WxMaterialEditor::sub_0140a280)
	EVT_MENU(20003, WxMaterialEditor::sub_0140a2c0)
	EVT_MENU(20008, WxMaterialEditor::sub_01426610)
	EVT_MENU(20009, WxMaterialEditor::sub_01426640)
	EVT_MENU(20005, WxMaterialEditor::sub_01427e50)
	EVT_MENU(20007, WxMaterialEditor::sub_014343b0)
	EVT_UPDATE_UI(20005, WxMaterialEditor::sub_01427e70)
	EVT_UPDATE_UI(20008, WxMaterialEditor::sub_01426690)
	EVT_MENU(20013, WxMaterialEditor::sub_0143def0)
	EVT_UPDATE_UI(20013, WxMaterialEditor::sub_014266d0)
	EVT_MENU(20014, WxMaterialEditor::sub_0143df00)
	EVT_UPDATE_UI(20014, WxMaterialEditor::sub_014266f0)
	EVT_MENU(20015, WxMaterialEditor::sub_0143e110)
	EVT_UPDATE_UI(20015, WxMaterialEditor::sub_01426720)
	EVT_MENU(20016, WxMaterialEditor::sub_0144d580)
	EVT_UPDATE_UI(20016, WxMaterialEditor::sub_01426760)
	EVT_MENU(9048, WxMaterialEditor::sub_01427e90)
	EVT_MENU(20000, WxMaterialEditor::sub_014439d0)
	EVT_LIST_BEGIN_DRAG(20012, WxMaterialEditor::sub_014343f0)
	EVT_MENU(19999, WxMaterialEditor::sub_014471e0)
	EVT_MENU(19982, WxMaterialEditor::sub_0143f3d0)
	EVT_MENU(19983, WxMaterialEditor::sub_0143dee0)
	EVT_MENU(19984, WxMaterialEditor::sub_0143b480)
	EVT_MENU(19986, WxMaterialEditor::sub_01436d10)
	EVT_MENU(19985, WxMaterialEditor::sub_01436d20)
	EVT_MENU(20017, WxMaterialEditor::sub_01429480)
	EVT_MENU(20018, WxMaterialEditor::sub_01429500)
	EVT_MENU(19987, WxMaterialEditor::sub_0143b490)
	EVT_MENU(19988, WxMaterialEditor::sub_0143b4a0)
	EVT_MENU(19989, WxMaterialEditor::sub_0143b4b0)
	EVT_MENU(19990, WxMaterialEditor::sub_0143b4c0)
	EVT_MENU(19991, WxMaterialEditor::sub_0143b4d0)
	EVT_MENU(19992, WxMaterialEditor::sub_0143b4e0)
	EVT_MENU(19993, WxMaterialEditor::sub_0143b4f0)
	EVT_MENU(19994, WxMaterialEditor::sub_0143b500)
	EVT_MENU(19995, WxMaterialEditor::sub_0143b510)
	EVT_MENU(19996, WxMaterialEditor::sub_0143b520)
	EVT_MENU(19997, WxMaterialEditor::sub_0143b530)
	EVT_MENU(19998, WxMaterialEditor::sub_0143b540)
END_EVENT_TABLE()

class WxLensFlareEditor : public wxFrame
{
public:
	void sub_0144e270(wxSizeEvent& In);
	void sub_0144e2a0(wxCommandEvent& In);
	void sub_0144e2e0(wxCommandEvent& In);
	void sub_0144e300(wxCommandEvent& In);
	void sub_0144e330(wxCommandEvent& In);
	void sub_0144e360(wxCommandEvent& In);
	void sub_0144e370(wxCommandEvent& In);
	void sub_0144e400(wxCommandEvent& In);
	void sub_0144e420(wxCommandEvent& In);
	void sub_0144e430(wxCommandEvent& In);
	void sub_0144e440(wxCommandEvent& In);
	void sub_0144e450(wxCommandEvent& In);
	void sub_0144e460(wxCommandEvent& In);
	void sub_014506c0(wxCommandEvent& In);
	void sub_014506d0(wxCommandEvent& In);
	void sub_01451a30(wxCommandEvent& In);
	void sub_0145a2f0(wxCommandEvent& In);
	void sub_0146a940(wxCommandEvent& In);
	void sub_0146d580(wxCommandEvent& In);
	void sub_0146d5c0(wxCommandEvent& In);
	void sub_0146f980(wxCommandEvent& In);
	void sub_014708d0(wxCommandEvent& In);
	void sub_01470a30(wxCommandEvent& In);
	void sub_01470a40(wxCommandEvent& In);
	void sub_01470b10(wxCommandEvent& In);
	void sub_01470e40(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0eae0
BEGIN_EVENT_TABLE(WxLensFlareEditor, wxFrame)
	EVT_SIZE(WxLensFlareEditor::sub_0144e270)
	EVT_MENU(26252, WxLensFlareEditor::sub_0144e2a0)
	EVT_MENU(26278, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26279, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26280, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26281, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26282, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26283, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26284, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26285, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26286, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26287, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26288, WxLensFlareEditor::sub_0146f980)
	EVT_MENU(26255, WxLensFlareEditor::sub_014708d0)
	EVT_MENU(26256, WxLensFlareEditor::sub_01470a40)
	EVT_MENU(26257, WxLensFlareEditor::sub_01470b10)
	EVT_MENU(26258, WxLensFlareEditor::sub_01470e40)
	EVT_MENU(26259, WxLensFlareEditor::sub_014506c0)
	EVT_MENU(26260, WxLensFlareEditor::sub_01470a30)
	EVT_MENU(26261, WxLensFlareEditor::sub_0146a940)
	EVT_MENU(26262, WxLensFlareEditor::sub_0144e2e0)
	EVT_MENU(26263, WxLensFlareEditor::sub_01451a30)
	EVT_MENU(26264, WxLensFlareEditor::sub_0144e300)
	EVT_MENU(26265, WxLensFlareEditor::sub_0144e330)
	EVT_MENU(26266, WxLensFlareEditor::sub_0144e360)
	EVT_MENU(26267, WxLensFlareEditor::sub_0144e370)
	EVT_MENU(26268, WxLensFlareEditor::sub_014506d0)
	EVT_MENU(26269, WxLensFlareEditor::sub_0144e460)
	EVT_MENU(26270, WxLensFlareEditor::sub_0146d580)
	EVT_MENU(26271, WxLensFlareEditor::sub_0146d5c0)
	EVT_MENU(26272, WxLensFlareEditor::sub_0144e400)
	EVT_MENU(26273, WxLensFlareEditor::sub_0145a2f0)
	EVT_MENU(26274, WxLensFlareEditor::sub_0144e420)
	EVT_MENU(26275, WxLensFlareEditor::sub_0144e430)
	EVT_MENU(26276, WxLensFlareEditor::sub_0144e440)
	EVT_MENU(26277, WxLensFlareEditor::sub_0144e450)
END_EVENT_TABLE()

class WxFractureTool : public wxDialog
{
public:
	void sub_012208a0(wxCommandEvent& In);
	void sub_01220900(wxCommandEvent& In);
	void sub_01220960(wxCommandEvent& In);
	void sub_012209c0(wxCommandEvent& In);
	void sub_01220a50(wxCommandEvent& In);
	void sub_01220ac0(wxCommandEvent& In);
	void sub_01220ad0(wxCloseEvent& In);
	void sub_01220b20(wxScrollEvent& In);
	void sub_01220b70(wxCommandEvent& In);
	void sub_0122abd0(wxCommandEvent& In);
	void sub_01233d10(wxCommandEvent& In);
	void sub_01233d70(wxCommandEvent& In);
	void sub_01233dd0(wxCommandEvent& In);
	void sub_01233e80(wxCommandEvent& In);
	void sub_01233f20(wxCommandEvent& In);
	void sub_012340a0(wxCommandEvent& In);
	void sub_012342a0(wxCommandEvent& In);
	void sub_012342e0(wxCommandEvent& In);
	void sub_01234320(wxCommandEvent& In);
	void sub_01234360(wxCommandEvent& In);
	void sub_012343a0(wxCommandEvent& In);
	void sub_012343e0(wxCommandEvent& In);
	void sub_0123ef80(wxCommandEvent& In);
	void sub_01249360(wxCommandEvent& In);
	void sub_0124a570(wxCommandEvent& In);
	void sub_0124a5e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e024d0
BEGIN_EVENT_TABLE(WxFractureTool, wxDialog)
	EVT_TEXT_ENTER(17109, WxFractureTool::sub_01233d10)
	EVT_TEXT_ENTER(17110, WxFractureTool::sub_01233d70)
	EVT_TEXT_ENTER(17111, WxFractureTool::sub_01233dd0)
	EVT_BUTTON(17121, WxFractureTool::sub_01233e80)
	EVT_BUTTON(17119, WxFractureTool::sub_01233f20)
	EVT_BUTTON(17120, WxFractureTool::sub_012340a0)
	EVT_BUTTON(17123, WxFractureTool::sub_01249360)
	EVT_CHECKBOX(17114, WxFractureTool::sub_012208a0)
	EVT_CHECKBOX(17115, WxFractureTool::sub_01220900)
	EVT_CHECKBOX(17116, WxFractureTool::sub_01220960)
	EVT_COMBOBOX(17117, WxFractureTool::sub_012209c0)
	EVT_CHECKBOX(17118, WxFractureTool::sub_01220a50)
	EVT_BUTTON(wxID_CLOSE, WxFractureTool::sub_01220ac0)
	EVT_COMMAND_SCROLL(17112, WxFractureTool::sub_01220b20)
	EVT_COMBOBOX(17113, WxFractureTool::sub_01220b70)
	EVT_CHECKBOX(17124, WxFractureTool::sub_0122abd0)
	EVT_BUTTON(17125, WxFractureTool::sub_012342a0)
	EVT_BUTTON(17126, WxFractureTool::sub_012342e0)
	EVT_BUTTON(17127, WxFractureTool::sub_01234320)
	EVT_BUTTON(17128, WxFractureTool::sub_01234360)
	EVT_BUTTON(17129, WxFractureTool::sub_012343a0)
	EVT_BUTTON(17130, WxFractureTool::sub_0124a570)
	EVT_BUTTON(17131, WxFractureTool::sub_0124a5e0)
	EVT_BUTTON(17132, WxFractureTool::sub_0123ef80)
	EVT_BUTTON(17133, WxFractureTool::sub_012343e0)
	EVT_CLOSE(WxFractureTool::sub_01220ad0)
END_EVENT_TABLE()

class WxLevelBrowser : public WxBrowser
{
public:
	void sub_013a32b0(wxSizeEvent& In);
	void sub_013a3310(wxCommandEvent& In);
	void sub_013a3410(wxCommandEvent& In);
	void sub_013a4880(wxCommandEvent& In);
	void sub_013a6e20(wxCommandEvent& In);
	void sub_013a6e40(wxCommandEvent& In);
	void sub_013abca0(wxCommandEvent& In);
	void sub_013b2920(wxCommandEvent& In);
	void sub_013b2ec0(wxCommandEvent& In);
	void sub_013b2f60(wxCommandEvent& In);
	void sub_013b2f90(wxCommandEvent& In);
	void sub_013bbbd0(wxCommandEvent& In);
	void sub_013bbc00(wxCommandEvent& In);
	void sub_013bc040(wxCommandEvent& In);
	void sub_013bc060(wxCommandEvent& In);
	void sub_013bc080(wxCommandEvent& In);
	void sub_013bc1c0(wxCommandEvent& In);
	void sub_013bc1d0(wxCommandEvent& In);
	void sub_013bc1e0(wxCommandEvent& In);
	void sub_013bc1f0(wxCommandEvent& In);
	void sub_013bc200(wxCommandEvent& In);
	void sub_013bc210(wxCommandEvent& In);
	void sub_013bc220(wxCommandEvent& In);
	void sub_013bc250(wxCommandEvent& In);
	void sub_013c0560(wxCommandEvent& In);
	void sub_013c05a0(wxCommandEvent& In);
	void sub_013c6ea0(wxCommandEvent& In);
	void sub_013c6ec0(wxCommandEvent& In);
	void sub_013c6ee0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0a3b0
BEGIN_EVENT_TABLE(WxLevelBrowser, WxBrowser)
	EVT_SIZE(WxLevelBrowser::sub_013a32b0)
	EVT_MENU(19876, WxLevelBrowser::sub_013a3310)
	EVT_MENU(17174, WxLevelBrowser::sub_013c6ea0)
	EVT_MENU(17175, WxLevelBrowser::sub_013c6ec0)
	EVT_MENU(17176, WxLevelBrowser::sub_013c6ee0)
	EVT_MENU(17177, WxLevelBrowser::sub_013c0560)
	EVT_MENU(17179, WxLevelBrowser::sub_013bbbd0)
	EVT_MENU(17180, WxLevelBrowser::sub_013c05a0)
	EVT_MENU(17181, WxLevelBrowser::sub_013bbc00)
	EVT_MENU(17199, WxLevelBrowser::sub_013a4880)
	EVT_MENU(17200, WxLevelBrowser::sub_013abca0)
	EVT_MENU(17201, WxLevelBrowser::sub_013b2920)
	EVT_MENU(17202, WxLevelBrowser::sub_013bc080)
	EVT_MENU(17210, WxLevelBrowser::sub_013bc1c0)
	EVT_MENU(17211, WxLevelBrowser::sub_013bc1d0)
	EVT_MENU(17203, WxLevelBrowser::sub_013bc1e0)
	EVT_MENU(17204, WxLevelBrowser::sub_013bc1f0)
	EVT_MENU(17205, WxLevelBrowser::sub_013a6e20)
	EVT_MENU(17206, WxLevelBrowser::sub_013a6e40)
	EVT_MENU(17207, WxLevelBrowser::sub_013bc200)
	EVT_MENU(17208, WxLevelBrowser::sub_013bc210)
	EVT_MENU(17209, WxLevelBrowser::sub_013bc220)
	EVT_MENU(17212, WxLevelBrowser::sub_013a3410)
	EVT_MENU(17214, WxLevelBrowser::sub_013b2ec0)
	EVT_MENU(17213, WxLevelBrowser::sub_013bc250)
	EVT_MENU(17215, WxLevelBrowser::sub_013b2f60)
	EVT_MENU(17216, WxLevelBrowser::sub_013b2f90)
	EVT_MENU(17203, WxLevelBrowser::sub_013bc1e0)
	EVT_MENU(17188, WxLevelBrowser::sub_013bc040)
	EVT_MENU(17189, WxLevelBrowser::sub_013bc060)
END_EVENT_TABLE()

class WxGBRightContainer : public wxPanel
{
public:
	void sub_01368360(wxSizeEvent& In);
	void sub_01368460(wxCommandEvent& In);
	void sub_013684a0(wxCommandEvent& In);
	void sub_013684d0(wxCommandEvent& In);
	void sub_013684f0(wxCommandEvent& In);
	void sub_01368530(wxListEvent& In);
	void sub_01368680(wxUpdateUIEvent& In);
	void sub_013686f0(wxUpdateUIEvent& In);
	void sub_01368710(wxUpdateUIEvent& In);
	void sub_013687b0(wxUpdateUIEvent& In);
	void sub_013687d0(wxUpdateUIEvent& In);
	void sub_013688e0(wxScrollEvent& In);
	void sub_013699b0(wxCommandEvent& In);
	void sub_01369a70(wxListEvent& In);
	void sub_01373360(wxListEvent& In);
	void sub_013736d0(wxCommandEvent& In);
	void sub_013848e0(wxCommandEvent& In);
	void sub_01388d70(wxCommandEvent& In);
	void sub_01388e80(wxCommandEvent& In);
	void sub_0138b0c0(wxListEvent& In);
	void sub_01395870(wxListEvent& In);
	void sub_013958d0(wxListEvent& In);
	void sub_0139db10(wxListEvent& In);
	void sub_0139dbb0(wxUpdateUIEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e09a60
BEGIN_EVENT_TABLE(WxGBRightContainer, wxPanel)
	EVT_SIZE(WxGBRightContainer::sub_01368360)
	EVT_LIST_ITEM_SELECTED(8336, WxGBRightContainer::sub_01395870)
	EVT_LIST_ITEM_DESELECTED(8336, WxGBRightContainer::sub_013958d0)
	EVT_LIST_ITEM_RIGHT_CLICK(8336, WxGBRightContainer::sub_01369a70)
	EVT_LIST_ITEM_ACTIVATED(8336, WxGBRightContainer::sub_01368530)
	EVT_LIST_COL_CLICK(8336, WxGBRightContainer::sub_0139db10)
	EVT_LIST_ITEM_ACTIVATED(8342, WxGBRightContainer::sub_0138b0c0)
	EVT_LIST_COL_CLICK(8342, WxGBRightContainer::sub_01373360)
	EVT_MENU(6430, WxGBRightContainer::sub_013684a0)
	EVT_MENU(17153, WxGBRightContainer::sub_013684d0)
	EVT_MENU(17154, WxGBRightContainer::sub_01368460)
	EVT_MENU(17155, WxGBRightContainer::sub_013684f0)
	EVT_MENU_RANGE(8337, 8340, WxGBRightContainer::sub_013699b0)
	EVT_UPDATE_UI_RANGE(8337, 8340, WxGBRightContainer::sub_01368680)
	EVT_MENU_RANGE(9043, 9047, WxGBRightContainer::sub_01388d70)
	EVT_UPDATE_UI_RANGE(9043, 9047, WxGBRightContainer::sub_01368710)
	EVT_UPDATE_UI(17153, WxGBRightContainer::sub_013687b0)
	EVT_UPDATE_UI(17154, WxGBRightContainer::sub_013686f0)
	EVT_UPDATE_UI(17155, WxGBRightContainer::sub_013687d0)
	EVT_UPDATE_UI(19870, WxGBRightContainer::sub_0139dbb0)
	EVT_COMBOBOX(8343, WxGBRightContainer::sub_01388e80)
	EVT_TEXT(8344, WxGBRightContainer::sub_013736d0)
	EVT_MENU(19937, WxGBRightContainer::sub_013848e0)
	EVT_SCROLL(WxGBRightContainer::sub_013688e0)
END_EVENT_TABLE()

class WxReferencedAssetsBrowser : public WxBrowser
{
public:
	void sub_013a3750(wxCommandEvent& In);
	void sub_013a3770(wxSizeEvent& In);
	void sub_013a3810(wxCommandEvent& In);
	void sub_013a38a0(wxCommandEvent& In);
	void sub_013a38d0(wxCommandEvent& In);
	void sub_013a3900(wxCommandEvent& In);
	void sub_013a3920(wxUpdateUIEvent& In);
	void sub_013a3970(wxUpdateUIEvent& In);
	void sub_013a39e0(wxUpdateUIEvent& In);
	void sub_013a3a00(wxUpdateUIEvent& In);
	void sub_013a3a20(wxUpdateUIEvent& In);
	void sub_013a4d00(wxCommandEvent& In);
	void sub_013a4d60(wxScrollEvent& In);
	void sub_013ac3b0(wxTreeEvent& In);
	void sub_013c08b0(wxListEvent& In);
	void sub_013c0980(wxListEvent& In);
	void sub_013cc1a0(wxListEvent& In);
	void sub_013d2fe0(wxTreeEvent& In);
	void sub_013d3110(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0a820
BEGIN_EVENT_TABLE(WxReferencedAssetsBrowser, WxBrowser)
	EVT_LIST_ITEM_SELECTED(8336, WxReferencedAssetsBrowser::sub_013c08b0)
	EVT_LIST_ITEM_DESELECTED(8336, WxReferencedAssetsBrowser::sub_013c0980)
	EVT_LIST_COL_CLICK(8336, WxReferencedAssetsBrowser::sub_013cc1a0)
	EVT_TREE_SEL_CHANGED(8347, WxReferencedAssetsBrowser::sub_013d2fe0)
	EVT_TREE_ITEM_ACTIVATED(8347, WxReferencedAssetsBrowser::sub_013ac3b0)
	EVT_MENU(19876, WxReferencedAssetsBrowser::sub_013a3750)
	EVT_SIZE(WxReferencedAssetsBrowser::sub_013a3770)
	EVT_SCROLL(WxReferencedAssetsBrowser::sub_013a4d60)
	EVT_UPDATE_UI(8337, WxReferencedAssetsBrowser::sub_013a3920)
	EVT_UPDATE_UI(8339, WxReferencedAssetsBrowser::sub_013a3920)
	EVT_UPDATE_UI_RANGE(8348, 8351, WxReferencedAssetsBrowser::sub_013a3970)
	EVT_UPDATE_UI(8353, WxReferencedAssetsBrowser::sub_013a39e0)
	EVT_UPDATE_UI(8354, WxReferencedAssetsBrowser::sub_013a3a00)
	EVT_UPDATE_UI(17153, WxReferencedAssetsBrowser::sub_013a3a20)
	EVT_MENU(8337, WxReferencedAssetsBrowser::sub_013a3810)
	EVT_MENU(8339, WxReferencedAssetsBrowser::sub_013a3810)
	EVT_MENU_RANGE(8348, 8351, WxReferencedAssetsBrowser::sub_013a4d00)
	EVT_MENU(8353, WxReferencedAssetsBrowser::sub_013a38a0)
	EVT_MENU(8354, WxReferencedAssetsBrowser::sub_013a38d0)
	EVT_MENU(17153, WxReferencedAssetsBrowser::sub_013d3110)
	EVT_TEXT(8352, WxReferencedAssetsBrowser::sub_013a3900)
END_EVENT_TABLE()

class WxRemoteControlRenderPage : public wxPanel
{
public:
	void sub_011f3390(wxCommandEvent& In);
	void sub_011f33b0(wxCommandEvent& In);
	void sub_011f33d0(wxCommandEvent& In);
	void sub_011f33f0(wxCommandEvent& In);
	void sub_011f3410(wxCommandEvent& In);
	void sub_011f3430(wxCommandEvent& In);
	void sub_011f3450(wxCommandEvent& In);
	void sub_011f3470(wxCommandEvent& In);
	void sub_011f3490(wxCommandEvent& In);
	void sub_011f34b0(wxCommandEvent& In);
	void sub_011f34d0(wxCommandEvent& In);
	void sub_011f34f0(wxCommandEvent& In);
	void sub_011f3510(wxCommandEvent& In);
	void sub_011f3530(wxCommandEvent& In);
	void sub_011f3550(wxCommandEvent& In);
	void sub_011f3570(wxCommandEvent& In);
	void sub_011f3590(wxCommandEvent& In);
	void sub_011f35b0(wxCommandEvent& In);
	void sub_011f35d0(wxCommandEvent& In);
	void sub_011f35f0(wxCommandEvent& In);
	void sub_011f3610(wxCommandEvent& In);
	void sub_011f3630(wxCommandEvent& In);
	void sub_011f3650(wxCommandEvent& In);
	void sub_011f3670(wxCommandEvent& In);
	void sub_011f3690(wxCommandEvent& In);
	void sub_0120ca00(wxCommandEvent& In);
	void sub_0120cab0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01170
BEGIN_EVENT_TABLE(WxRemoteControlRenderPage, wxPanel)
	EVT_MENU(6583, WxRemoteControlRenderPage::sub_011f3390)
	EVT_MENU(6586, WxRemoteControlRenderPage::sub_011f33b0)
	EVT_MENU(6587, WxRemoteControlRenderPage::sub_011f33d0)
	EVT_MENU(6588, WxRemoteControlRenderPage::sub_011f33f0)
	EVT_MENU(6620, WxRemoteControlRenderPage::sub_011f3410)
	EVT_MENU(6581, WxRemoteControlRenderPage::sub_011f3430)
	EVT_MENU(6589, WxRemoteControlRenderPage::sub_011f3450)
	EVT_MENU(6592, WxRemoteControlRenderPage::sub_011f3470)
	EVT_MENU(6595, WxRemoteControlRenderPage::sub_011f3490)
	EVT_MENU(6596, WxRemoteControlRenderPage::sub_011f34b0)
	EVT_MENU(6598, WxRemoteControlRenderPage::sub_011f34d0)
	EVT_MENU(6597, WxRemoteControlRenderPage::sub_011f34f0)
	EVT_MENU(6601, WxRemoteControlRenderPage::sub_011f3510)
	EVT_MENU(6604, WxRemoteControlRenderPage::sub_011f3530)
	EVT_MENU(6605, WxRemoteControlRenderPage::sub_011f3550)
	EVT_MENU(17239, WxRemoteControlRenderPage::sub_011f3570)
	EVT_MENU(17240, WxRemoteControlRenderPage::sub_011f3590)
	EVT_MENU(17241, WxRemoteControlRenderPage::sub_011f35b0)
	EVT_MENU(17243, WxRemoteControlRenderPage::sub_0120cab0)
	EVT_MENU(17242, WxRemoteControlRenderPage::sub_0120ca00)
	EVT_MENU(6611, WxRemoteControlRenderPage::sub_011f35d0)
	EVT_MENU(6612, WxRemoteControlRenderPage::sub_011f35f0)
	EVT_MENU(6619, WxRemoteControlRenderPage::sub_011f3610)
	EVT_MENU(6610, WxRemoteControlRenderPage::sub_011f3630)
	EVT_MENU(6622, WxRemoteControlRenderPage::sub_011f3650)
	EVT_MENU(6624, WxRemoteControlRenderPage::sub_011f3570)
	EVT_MENU(6617, WxRemoteControlRenderPage::sub_011f3690)
	EVT_MENU(6625, WxRemoteControlRenderPage::sub_011f3670)
END_EVENT_TABLE()

class WxSentinel : public wxFrame
{
public:
	void sub_011f3ba0(wxCloseEvent& In);
	void sub_011f3bf0(wxScrollEvent& In);
	void sub_011f3c30(wxCommandEvent& In);
	void sub_011f3c60(wxCommandEvent& In);
	void sub_01200480(wxScrollEvent& In);
	void sub_012124f0(wxCommandEvent& In);
	void sub_0121fff0(wxCommandEvent& In);
	void sub_01220030(wxCommandEvent& In);
	void sub_01220070(wxCommandEvent& In);
	void sub_012200b0(wxCommandEvent& In);
	void sub_012200e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01850
BEGIN_EVENT_TABLE(WxSentinel, wxFrame)
	EVT_CHECKBOX(13013, WxSentinel::sub_0121fff0)
	EVT_COMBOBOX(13014, WxSentinel::sub_01220030)
	EVT_COMBOBOX(13015, WxSentinel::sub_01220070)
	EVT_COMBOBOX(13016, WxSentinel::sub_012200b0)
	EVT_COMBOBOX(13017, WxSentinel::sub_012200e0)
	EVT_COMBOBOX(13018, WxSentinel::sub_012124f0)
	EVT_COMMAND_SCROLL(13019, WxSentinel::sub_011f3bf0)
	EVT_CHECKBOX(13020, WxSentinel::sub_011f3c30)
	EVT_COMMAND_SCROLL(13021, WxSentinel::sub_01200480)
	EVT_COMBOBOX(13023, WxSentinel::sub_011f3c60)
	EVT_CLOSE(WxSentinel::sub_011f3ba0)
END_EVENT_TABLE()

class WxAnimTreeEditor : public WxTrackableFrame
{
public:
	void sub_013373d0(wxCommandEvent& In);
	void sub_013373f0(wxCommandEvent& In);
	void sub_01337410(wxCommandEvent& In);
	void sub_01337430(wxCommandEvent& In);
	void sub_01337450(wxCommandEvent& In);
	void sub_01337470(wxCommandEvent& In);
	void sub_01338930(wxCommandEvent& In);
	void sub_01346680(wxCloseEvent& In);
	void sub_01346950(wxCommandEvent& In);
	void sub_01346ac0(wxCommandEvent& In);
	void sub_01346c30(wxCommandEvent& In);
	void sub_01346da0(wxCommandEvent& In);
	void sub_01346e50(wxCommandEvent& In);
	void sub_0134da00(wxCommandEvent& In);
	void sub_0134dc40(wxCommandEvent& In);
	void sub_0134de50(wxCommandEvent& In);
	void sub_0134df00(wxCommandEvent& In);
	void sub_0134e170(wxCommandEvent& In);
	void sub_01353890(wxCommandEvent& In);
	void sub_01353bf0(wxCommandEvent& In);
	void sub_01353fe0(wxCommandEvent& In);
	void sub_01353ff0(wxCommandEvent& In);
	void sub_01360c80(wxCommandEvent& In);
	void sub_01362740(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e087a0
BEGIN_EVENT_TABLE(WxAnimTreeEditor, WxTrackableFrame)
	EVT_CLOSE(WxAnimTreeEditor::sub_01346680)
	EVT_MENU_RANGE(13344, 13444, WxAnimTreeEditor::sub_01346950)
	EVT_MENU_RANGE(13445, 13545, WxAnimTreeEditor::sub_01346ac0)
	EVT_MENU_RANGE(13546, 13646, WxAnimTreeEditor::sub_01346c30)
	EVT_MENU(13647, WxAnimTreeEditor::sub_01353fe0)
	EVT_MENU(13648, WxAnimTreeEditor::sub_0134da00)
	EVT_MENU(13649, WxAnimTreeEditor::sub_0134dc40)
	EVT_MENU(13650, WxAnimTreeEditor::sub_01346da0)
	EVT_MENU(13651, WxAnimTreeEditor::sub_0134de50)
	EVT_MENU(13652, WxAnimTreeEditor::sub_0134df00)
	EVT_MENU(13653, WxAnimTreeEditor::sub_01353890)
	EVT_MENU(13654, WxAnimTreeEditor::sub_0134e170)
	EVT_MENU(13655, WxAnimTreeEditor::sub_01353bf0)
	EVT_MENU(13656, WxAnimTreeEditor::sub_013373d0)
	EVT_MENU(13657, WxAnimTreeEditor::sub_01353ff0)
	EVT_MENU(13658, WxAnimTreeEditor::sub_013373f0)
	EVT_MENU(13659, WxAnimTreeEditor::sub_01337410)
	EVT_MENU(13660, WxAnimTreeEditor::sub_01337430)
	EVT_MENU(13661, WxAnimTreeEditor::sub_01337450)
	EVT_MENU(13662, WxAnimTreeEditor::sub_01337470)
	EVT_MENU(13663, WxAnimTreeEditor::sub_01338930)
	EVT_MENU(13664, WxAnimTreeEditor::sub_01360c80)
	EVT_MENU(13665, WxAnimTreeEditor::sub_01362740)
	EVT_MENU(13666, WxAnimTreeEditor::sub_01346e50)
END_EVENT_TABLE()

class WxDlgUISkinEditor : public wxDialog
{
public:
	void sub_013db5b0(wxTreeEvent& In);
	void sub_013df1e0(wxTreeEvent& In);
	void sub_013df220(wxListEvent& In);
	void sub_013df280(wxCommandEvent& In);
	void sub_013e2330(wxTreeEvent& In);
	void sub_013e2740(wxListEvent& In);
	void sub_013e27e0(wxCommandEvent& In);
	void sub_013e2a70(wxListEvent& In);
	void sub_013e2b10(wxCommandEvent& In);
	void sub_013e9f50(wxCommandEvent& In);
	void sub_013ee1d0(wxCommandEvent& In);
	void sub_013f5410(wxListEvent& In);
	void sub_013f5460(wxCommandEvent& In);
	void sub_013fa6a0(wxCommandEvent& In);
	void sub_013fa7e0(wxCommandEvent& In);
	void sub_013fc8d0(wxListEvent& In);
	void sub_013fc900(wxCommandEvent& In);
	void sub_013fd7c0(wxCommandEvent& In);
	void sub_013fdda0(wxCommandEvent& In);
	void sub_01400fe0(wxTreeEvent& In);
	void sub_01401070(wxCommandEvent& In);
	void sub_01401410(wxCommandEvent& In);
	void sub_01401560(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b5e0
BEGIN_EVENT_TABLE(WxDlgUISkinEditor, wxDialog)
	EVT_TREE_SEL_CHANGED(25910, WxDlgUISkinEditor::sub_01400fe0)
	EVT_TREE_ITEM_RIGHT_CLICK(25910, WxDlgUISkinEditor::sub_013db5b0)
	EVT_TREE_ITEM_ACTIVATED(25909, WxDlgUISkinEditor::sub_013df1e0)
	EVT_TREE_ITEM_RIGHT_CLICK(25909, WxDlgUISkinEditor::sub_013e2330)
	EVT_MENU(25868, WxDlgUISkinEditor::sub_01401070)
	EVT_MENU(25869, WxDlgUISkinEditor::sub_01401070)
	EVT_MENU(25870, WxDlgUISkinEditor::sub_013df280)
	EVT_MENU(25873, WxDlgUISkinEditor::sub_01401410)
	EVT_MENU(25872, WxDlgUISkinEditor::sub_01401560)
	EVT_LIST_ITEM_ACTIVATED(25911, WxDlgUISkinEditor::sub_013f5410)
	EVT_LIST_ITEM_RIGHT_CLICK(25911, WxDlgUISkinEditor::sub_013e2740)
	EVT_MENU(25879, WxDlgUISkinEditor::sub_013fd7c0)
	EVT_MENU(25880, WxDlgUISkinEditor::sub_013f5460)
	EVT_MENU(25881, WxDlgUISkinEditor::sub_013fdda0)
	EVT_MENU(25882, WxDlgUISkinEditor::sub_013fa6a0)
	EVT_LIST_ITEM_ACTIVATED(25912, WxDlgUISkinEditor::sub_013fc8d0)
	EVT_LIST_ITEM_RIGHT_CLICK(25912, WxDlgUISkinEditor::sub_013e2a70)
	EVT_MENU(25883, WxDlgUISkinEditor::sub_013fa7e0)
	EVT_MENU(25884, WxDlgUISkinEditor::sub_013fc900)
	EVT_MENU(25885, WxDlgUISkinEditor::sub_013e2b10)
	EVT_LIST_COL_CLICK(25913, WxDlgUISkinEditor::sub_013df220)
	EVT_MENU(25886, WxDlgUISkinEditor::sub_013e27e0)
	EVT_MENU(25887, WxDlgUISkinEditor::sub_013e9f50)
	EVT_MENU(25888, WxDlgUISkinEditor::sub_013ee1d0)
END_EVENT_TABLE()

class WxDlgUIEventKeyBindings : public wxDialog
{
public:
	void sub_013a5140(wxUpdateUIEvent& In);
	void sub_013ae5b0(wxListEvent& In);
	void sub_013c4110(wxUpdateUIEvent& In);
	void sub_013c7200(wxListEvent& In);
	void sub_013c7250(wxListEvent& In);
	void sub_013d5f00(wxCommandEvent& In);
	void sub_013d6120(wxCommandEvent& In);
	void sub_013d6220(wxListEvent& In);
	void sub_013d62b0(wxCommandEvent& In);
	void sub_013d6af0(wxCommandEvent& In);
	void sub_013d6c20(wxCommandEvent& In);
	void sub_013d6c90(wxListEvent& In);
	void sub_013d76d0(wxCommandEvent& In);
	void sub_013dacf0(wxCommandEvent& In);
	void sub_013db060(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b080
BEGIN_EVENT_TABLE(WxDlgUIEventKeyBindings, wxDialog)
	EVT_LISTBOX(26116, WxDlgUIEventKeyBindings::sub_013d5f00)
	EVT_LISTBOX(26117, WxDlgUIEventKeyBindings::sub_013d6120)
	EVT_CHECKLISTBOX(26120, WxDlgUIEventKeyBindings::sub_013d62b0)
	EVT_CHECKBOX(26121, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_CHECKBOX(26122, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_CHECKBOX(26123, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_CHECKBOX(26124, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_CHECKBOX(26125, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_CHECKBOX(26126, WxDlgUIEventKeyBindings::sub_013d76d0)
	EVT_LIST_ITEM_SELECTED(26119, WxDlgUIEventKeyBindings::sub_013c7200)
	EVT_LIST_ITEM_DESELECTED(26119, WxDlgUIEventKeyBindings::sub_013c7250)
	EVT_LIST_ITEM_RIGHT_CLICK(26119, WxDlgUIEventKeyBindings::sub_013ae5b0)
	EVT_LIST_KEY_DOWN(26119, WxDlgUIEventKeyBindings::sub_013d6220)
	EVT_LIST_ITEM_ACTIVATED(26119, WxDlgUIEventKeyBindings::sub_013d6c90)
	EVT_MENU(26127, WxDlgUIEventKeyBindings::sub_013d6af0)
	EVT_MENU(26128, WxDlgUIEventKeyBindings::sub_013d6c20)
	EVT_BUTTON(26127, WxDlgUIEventKeyBindings::sub_013d6af0)
	EVT_BUTTON(wxID_OK, WxDlgUIEventKeyBindings::sub_013dacf0)
	EVT_COMBOBOX(26129, WxDlgUIEventKeyBindings::sub_013db060)
	EVT_UPDATE_UI_RANGE(26120, 26126, WxDlgUIEventKeyBindings::sub_013a5140)
	EVT_UPDATE_UI(26127, WxDlgUIEventKeyBindings::sub_013c4110)
	EVT_UPDATE_UI(26119, WxDlgUIEventKeyBindings::sub_013c4110)
	EVT_UPDATE_UI(26129, WxDlgUIEventKeyBindings::sub_013c4110)
END_EVENT_TABLE()

class WxAnimAimOffsetEditor : public WxTrackableFrame
{
public:
	void sub_01337120(wxCloseEvent& In);
	void sub_01337190(wxCommandEvent& In);
	void sub_013371b0(wxCommandEvent& In);
	void sub_0133a120(wxCommandEvent& In);
	void sub_0134c800(wxCommandEvent& In);
	void sub_0134c8e0(wxCommandEvent& In);
	void sub_0134c990(wxCommandEvent& In);
	void sub_01352cf0(wxCommandEvent& In);
	void sub_013532a0(wxCommandEvent& In);
	void sub_01353390(wxCommandEvent& In);
	void sub_01353410(wxCommandEvent& In);
	void sub_01357bb0(wxCommandEvent& In);
	void sub_01362770(wxCommandEvent& In);
	void sub_01365340(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08410
BEGIN_EVENT_TABLE(WxAnimAimOffsetEditor, WxTrackableFrame)
	EVT_CLOSE(WxAnimAimOffsetEditor::sub_01337120)
	EVT_TOGGLEBUTTON(3, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(4, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(5, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(6, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(7, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(8, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(9, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(10, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_TOGGLEBUTTON(11, WxAnimAimOffsetEditor::sub_0134c800)
	EVT_CHECKBOX(12, WxAnimAimOffsetEditor::sub_013371b0)
	EVT_TEXT_ENTER(13, WxAnimAimOffsetEditor::sub_0133a120)
	EVT_TEXT_ENTER(14, WxAnimAimOffsetEditor::sub_0133a120)
	EVT_TEXT_ENTER(15, WxAnimAimOffsetEditor::sub_0133a120)
	EVT_CHECKBOX(16, WxAnimAimOffsetEditor::sub_01337190)
	EVT_LISTBOX(17, WxAnimAimOffsetEditor::sub_0134c8e0)
	EVT_BUTTON(18, WxAnimAimOffsetEditor::sub_01352cf0)
	EVT_BUTTON(19, WxAnimAimOffsetEditor::sub_013532a0)
	EVT_MENU(20, WxAnimAimOffsetEditor::sub_0134c990)
	EVT_MENU(21, WxAnimAimOffsetEditor::sub_0134c990)
	EVT_MENU(22, WxAnimAimOffsetEditor::sub_01365340)
	EVT_MENU(23, WxAnimAimOffsetEditor::sub_01362770)
	EVT_COMBOBOX(0, WxAnimAimOffsetEditor::sub_01353390)
	EVT_BUTTON(1, WxAnimAimOffsetEditor::sub_01353410)
	EVT_BUTTON(2, WxAnimAimOffsetEditor::sub_01357bb0)
END_EVENT_TABLE()

class WxDlgGeometryTools : public wxDialog
{
public:
	void sub_0144f6b0(wxCommandEvent& In);
	void sub_0144f710(wxCommandEvent& In);
	void sub_0144f740(wxCommandEvent& In);
	void sub_0144f770(wxCommandEvent& In);
	void sub_0144f7a0(wxCommandEvent& In);
	void sub_0144f7d0(wxUpdateUIEvent& In);
	void sub_0144f800(wxUpdateUIEvent& In);
	void sub_0144f830(wxUpdateUIEvent& In);
	void sub_0144f860(wxUpdateUIEvent& In);
	void sub_0144f890(wxUpdateUIEvent& In);
	void sub_0144f8c0(wxCommandEvent& In);
	void sub_0144f900(wxCommandEvent& In);
	void sub_0144f940(wxCommandEvent& In);
	void sub_0144f9a0(wxCommandEvent& In);
	void sub_0144fa50(wxUpdateUIEvent& In);
	void sub_0144fa90(wxUpdateUIEvent& In);
	void sub_0144fad0(wxUpdateUIEvent& In);
	void sub_0144fb10(wxUpdateUIEvent& In);
	void sub_01454ea0(wxUpdateUIEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e040
BEGIN_EVENT_TABLE(WxDlgGeometryTools, wxDialog)
	EVT_MENU(17072, WxDlgGeometryTools::sub_0144f6b0)
	EVT_MENU(16637, WxDlgGeometryTools::sub_0144f710)
	EVT_MENU(16638, WxDlgGeometryTools::sub_0144f740)
	EVT_MENU(16639, WxDlgGeometryTools::sub_0144f770)
	EVT_MENU(16640, WxDlgGeometryTools::sub_0144f7a0)
	EVT_UPDATE_UI(17072, WxDlgGeometryTools::sub_0144f7d0)
	EVT_UPDATE_UI(16637, WxDlgGeometryTools::sub_0144f800)
	EVT_UPDATE_UI(16638, WxDlgGeometryTools::sub_0144f830)
	EVT_UPDATE_UI(16639, WxDlgGeometryTools::sub_0144f860)
	EVT_UPDATE_UI(16640, WxDlgGeometryTools::sub_0144f890)
	EVT_CHECKBOX(17163, WxDlgGeometryTools::sub_0144f8c0)
	EVT_CHECKBOX(17164, WxDlgGeometryTools::sub_0144f900)
	EVT_CHECKBOX(17165, WxDlgGeometryTools::sub_0144f940)
	EVT_TEXT(17166, WxDlgGeometryTools::sub_0144f9a0)
	EVT_UPDATE_UI(17163, WxDlgGeometryTools::sub_0144fa50)
	EVT_UPDATE_UI(17164, WxDlgGeometryTools::sub_0144fa90)
	EVT_UPDATE_UI(17165, WxDlgGeometryTools::sub_0144fad0)
	EVT_UPDATE_UI(17166, WxDlgGeometryTools::sub_01454ea0)
	EVT_UPDATE_UI(17167, WxDlgGeometryTools::sub_0144fb10)
END_EVENT_TABLE()

class WxPropertyWindow_Base : public wxWindow
{
public:
	void sub_011c2480(wxCommandEvent& In);
	void sub_011c4520(wxMouseEvent& In);
	void sub_011ce760(wxMouseEvent& In);
	void sub_011ce820(wxFocusEvent& In);
	void sub_011d39a0(wxKeyEvent& In);
	void sub_011d6420(wxMouseEvent& In);
	void sub_011d6580(wxMouseEvent& In);
	void sub_011d6620(wxMouseEvent& In);
	void sub_011e6630(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00600
BEGIN_EVENT_TABLE(WxPropertyWindow_Base, wxWindow)
	EVT_LEFT_DOWN(WxPropertyWindow_Base::sub_011ce760)
	EVT_LEFT_UP(WxPropertyWindow_Base::sub_011d6580)
	EVT_LEFT_DCLICK(WxPropertyWindow_Base::sub_011d6620)
	EVT_RIGHT_DOWN(WxPropertyWindow_Base::sub_011d6420)
	EVT_SET_FOCUS(WxPropertyWindow_Base::sub_011ce820)
	EVT_MENU_RANGE(16415, 16515, WxPropertyWindow_Base::sub_011e6630)
	EVT_BUTTON(16404, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16405, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16406, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16407, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16408, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16409, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16410, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16411, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16412, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16413, WxPropertyWindow_Base::sub_011c2480)
	EVT_BUTTON(16414, WxPropertyWindow_Base::sub_011c2480)
	EVT_MOTION(WxPropertyWindow_Base::sub_011c4520)
	EVT_CHAR(WxPropertyWindow_Base::sub_011d39a0)
END_EVENT_TABLE()

class WxTagBrowser : public WxBrowser
{
public:
	void sub_01221440(wxCommandEvent& In);
	void sub_012214d0(wxSizeEvent& In);
	void sub_012228d0(wxScrollEvent& In);
	void sub_0122daa0(wxCommandEvent& In);
	void sub_01235a80(wxCommandEvent& In);
	void sub_0123fe40(wxCommandEvent& In);
	void sub_0124a620(wxCommandEvent& In);
	void sub_0124adb0(wxCommandEvent& In);
	void sub_0124ae40(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e02ba0
BEGIN_EVENT_TABLE(WxTagBrowser, WxBrowser)
	EVT_SCROLL(WxTagBrowser::sub_012228d0)
	EVT_SIZE(WxTagBrowser::sub_012214d0)
	EVT_COMBOBOX(6670, WxTagBrowser::sub_0123fe40)
	EVT_COMBOBOX(6675, WxTagBrowser::sub_0124a620)
	EVT_CHECKLISTBOX(6671, WxTagBrowser::sub_0124a620)
	EVT_CHECKLISTBOX(6672, WxTagBrowser::sub_0124ae40)
	EVT_BUTTON(6674, WxTagBrowser::sub_0122daa0)
	EVT_CHECKBOX(6673, WxTagBrowser::sub_01221440)
	EVT_MENU(16833, WxTagBrowser::sub_0124adb0)
	EVT_MENU(17062, WxTagBrowser::sub_01235a80)
END_EVENT_TABLE()

class WxGBLeftContainer : public wxPanel
{
public:
	void sub_01368170(wxTreeEvent& In);
	void sub_01368180(wxCommandEvent& In);
	void sub_01368190(wxCommandEvent& In);
	void sub_01368270(wxUpdateUIEvent& In);
	void sub_01369990(wxTreeEvent& In);
	void sub_0137c330(wxCommandEvent& In);
	void sub_013846a0(wxCommandEvent& In);
	void sub_013847f0(wxCommandEvent& In);
	void sub_01384850(wxCommandEvent& In);
	void sub_013889d0(wxCommandEvent& In);
	void sub_0138f1d0(wxCommandEvent& In);
	void sub_0138f970(wxCommandEvent& In);
	void sub_0139c910(wxCommandEvent& In);
	void sub_013a1e60(wxCommandEvent& In);
	void sub_013a1e70(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e09810
BEGIN_EVENT_TABLE(WxGBLeftContainer, wxPanel)
	EVT_TREE_SEL_CHANGED(8334, WxGBLeftContainer::sub_01368170)
	EVT_TREE_SEL_CHANGING(8334, WxGBLeftContainer::sub_01369990)
	EVT_SIZE(wxPanel::OnSize)
	EVT_MENU_RANGE(16942, 17046, WxGBLeftContainer::sub_013889d0)
	EVT_MENU(17047, WxGBLeftContainer::sub_013a1e60)
	EVT_MENU(17048, WxGBLeftContainer::sub_013a1e70)
	EVT_MENU(17049, WxGBLeftContainer::sub_0139c910)
	EVT_MENU(16939, WxGBLeftContainer::sub_0137c330)
	EVT_MENU(16940, WxGBLeftContainer::sub_0138f1d0)
	EVT_MENU(16941, WxGBLeftContainer::sub_0138f970)
	EVT_CHECKLISTBOX(13025, WxGBLeftContainer::sub_013847f0)
	EVT_LISTBOX_DCLICK(13025, WxGBLeftContainer::sub_013846a0)
	EVT_CHECKLISTBOX(8341, WxGBLeftContainer::sub_01368190)
	EVT_LISTBOX_DCLICK(8341, WxGBLeftContainer::sub_01368180)
	EVT_CHECKBOX(13026, WxGBLeftContainer::sub_01384850)
	EVT_UPDATE_UI(13026, WxGBLeftContainer::sub_01368270)
END_EVENT_TABLE()

class WxGroupBrowser : public WxBrowser
{
public:
	void sub_013a2f50(wxCommandEvent& In);
	void sub_013a2f70(wxSizeEvent& In);
	void sub_013a2fa0(wxMouseEvent& In);
	void sub_013aa160(wxListEvent& In);
	void sub_013b9e30(wxCommandEvent& In);
	void sub_013b9e50(wxCommandEvent& In);
	void sub_013b9ec0(wxCommandEvent& In);
	void sub_013ba210(wxCommandEvent& In);
	void sub_013ba480(wxCommandEvent& In);
	void sub_013ba490(wxCommandEvent& In);
	void sub_013ba4a0(wxCommandEvent& In);
	void sub_013ba940(wxCommandEvent& In);
	void sub_013c62c0(wxListEvent& In);
	void sub_013c6320(wxCommandEvent& In);
	void sub_013c6330(wxCommandEvent& In);
	void sub_013c6460(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e09ef0
BEGIN_EVENT_TABLE(WxGroupBrowser, WxBrowser)
	EVT_RIGHT_DOWN(WxGroupBrowser::sub_013a2fa0)
	EVT_MENU(19876, WxGroupBrowser::sub_013a2f50)
	EVT_MENU(6660, WxGroupBrowser::sub_013b9ec0)
	EVT_MENU(6662, WxGroupBrowser::sub_013ba210)
	EVT_MENU(6665, WxGroupBrowser::sub_013ba480)
	EVT_MENU(6666, WxGroupBrowser::sub_013ba490)
	EVT_MENU(6667, WxGroupBrowser::sub_013b9e50)
	EVT_MENU(6661, WxGroupBrowser::sub_013ba4a0)
	EVT_MENU(6663, WxGroupBrowser::sub_013c6460)
	EVT_MENU(6664, WxGroupBrowser::sub_013ba940)
	EVT_CHECKLISTBOX(6668, WxGroupBrowser::sub_013b9e30)
	EVT_LISTBOX(6668, WxGroupBrowser::sub_013c6320)
	EVT_LISTBOX_DCLICK(6668, WxGroupBrowser::sub_013c6330)
	EVT_LIST_COL_CLICK(6669, WxGroupBrowser::sub_013c62c0)
	EVT_LIST_ITEM_ACTIVATED(6669, WxGroupBrowser::sub_013aa160)
	EVT_SIZE(WxGroupBrowser::sub_013a2f70)
END_EVENT_TABLE()

class WxClass_025e9038 : public wxScrolledWindow
{
public:
	void sub_013ea570(wxCommandEvent& In);
	void sub_013ea590(wxCommandEvent& In);
	void sub_013ea5b0(wxCommandEvent& In);
	void sub_013ea5d0(wxSpinEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c040
BEGIN_EVENT_TABLE(WxClass_025e9038, wxScrolledWindow)
	EVT_SPINCTRL(26143, WxClass_025e9038::sub_013ea5d0)
	EVT_SPINCTRL(26144, WxClass_025e9038::sub_013ea5d0)
	EVT_SPINCTRL(26145, WxClass_025e9038::sub_013ea5d0)
	EVT_SPINCTRL(26146, WxClass_025e9038::sub_013ea5d0)
	EVT_COMBOBOX(26135, WxClass_025e9038::sub_013ea5b0)
	EVT_COMBOBOX(26136, WxClass_025e9038::sub_013ea5b0)
	EVT_COMBOBOX(26137, WxClass_025e9038::sub_013ea5b0)
	EVT_COMBOBOX(26138, WxClass_025e9038::sub_013ea5b0)
	EVT_COMBOBOX(26131, WxClass_025e9038::sub_013ea570)
	EVT_COMBOBOX(26132, WxClass_025e9038::sub_013ea570)
	EVT_COMBOBOX(26133, WxClass_025e9038::sub_013ea570)
	EVT_COMBOBOX(26134, WxClass_025e9038::sub_013ea570)
	EVT_COMBOBOX(26139, WxClass_025e9038::sub_013ea590)
	EVT_COMBOBOX(26140, WxClass_025e9038::sub_013ea590)
	EVT_COMBOBOX(26141, WxClass_025e9038::sub_013ea590)
	EVT_COMBOBOX(26142, WxClass_025e9038::sub_013ea590)
END_EVENT_TABLE()

class WxNumericPropertySpinner : public wxPanel
{
public:
	void sub_01205450(wxMouseEvent& In);
	void sub_012059f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00d50
BEGIN_EVENT_TABLE(WxNumericPropertySpinner, wxPanel)
	EVT_MOUSE_EVENTS(WxNumericPropertySpinner::sub_01205450)
	EVT_BUTTON(8868, WxNumericPropertySpinner::sub_012059f0)
	EVT_BUTTON(8869, WxNumericPropertySpinner::sub_012059f0)
END_EVENT_TABLE()

class WxMaterialEditorBase_01e0caf0 : public WxTrackableFrame
{
public:
	void sub_01406ce0(wxUpdateUIEvent& In);
	void sub_01406d00(wxUpdateUIEvent& In);
	void sub_01406d20(wxUpdateUIEvent& In);
	void sub_01406d40(wxUpdateUIEvent& In);
	void sub_01406d60(wxUpdateUIEvent& In);
	void sub_01407590(wxCommandEvent& In);
	void sub_0140a280(wxCommandEvent& In);
	void sub_0140a2c0(wxCommandEvent& In);
	void sub_0140a320(wxCommandEvent& In);
	void sub_0140a340(wxUpdateUIEvent& In);
	void sub_01410090(wxCommandEvent& In);
	void sub_014100b0(wxCommandEvent& In);
	void sub_014100d0(wxCommandEvent& In);
	void sub_014100f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0caf0
BEGIN_EVENT_TABLE(WxMaterialEditorBase_01e0caf0, WxTrackableFrame)
	EVT_MENU(8867, WxMaterialEditorBase_01e0caf0::sub_0140a280)
	EVT_MENU(20003, WxMaterialEditorBase_01e0caf0::sub_0140a2c0)
	EVT_MENU(9044, WxMaterialEditorBase_01e0caf0::sub_01410090)
	EVT_MENU(9045, WxMaterialEditorBase_01e0caf0::sub_014100b0)
	EVT_MENU(9046, WxMaterialEditorBase_01e0caf0::sub_014100d0)
	EVT_MENU(9043, WxMaterialEditorBase_01e0caf0::sub_014100f0)
	EVT_MENU(20004, WxMaterialEditorBase_01e0caf0::sub_0140a320)
	EVT_MENU(20002, WxMaterialEditorBase_01e0caf0::sub_01407590)
	EVT_UPDATE_UI(9044, WxMaterialEditorBase_01e0caf0::sub_01406ce0)
	EVT_UPDATE_UI(9045, WxMaterialEditorBase_01e0caf0::sub_01406d00)
	EVT_UPDATE_UI(9046, WxMaterialEditorBase_01e0caf0::sub_01406d20)
	EVT_UPDATE_UI(9043, WxMaterialEditorBase_01e0caf0::sub_01406d40)
	EVT_UPDATE_UI(20004, WxMaterialEditorBase_01e0caf0::sub_0140a340)
	EVT_UPDATE_UI(20003, WxMaterialEditorBase_01e0caf0::sub_01406d60)
END_EVENT_TABLE()

class WxClass_025e9030 : public wxPanel
{
public:
	void sub_013e4500(wxCommandEvent& In);
	void sub_013f69c0(wxCommandEvent& In);
	void sub_013f69f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0be70
BEGIN_EVENT_TABLE(WxClass_025e9030, wxPanel)
	EVT_COMBOBOX(26131, WxClass_025e9030::sub_013f69c0)
	EVT_COMBOBOX(26132, WxClass_025e9030::sub_013f69c0)
	EVT_COMBOBOX(26133, WxClass_025e9030::sub_013f69c0)
	EVT_COMBOBOX(26134, WxClass_025e9030::sub_013f69c0)
	EVT_COMBOBOX(26139, WxClass_025e9030::sub_013f69f0)
	EVT_COMBOBOX(26140, WxClass_025e9030::sub_013f69f0)
	EVT_COMBOBOX(26141, WxClass_025e9030::sub_013f69f0)
	EVT_COMBOBOX(26142, WxClass_025e9030::sub_013f69f0)
	EVT_COMBOBOX(26135, WxClass_025e9030::sub_013e4500)
	EVT_COMBOBOX(26136, WxClass_025e9030::sub_013e4500)
	EVT_COMBOBOX(26137, WxClass_025e9030::sub_013e4500)
	EVT_COMBOBOX(26138, WxClass_025e9030::sub_013e4500)
END_EVENT_TABLE()

class WxSceneManager : public WxBrowser
{
public:
	void sub_011f39f0(wxCommandEvent& In);
	void sub_011f3ad0(wxCommandEvent& In);
	void sub_01200030(wxCommandEvent& In);
	void sub_01200070(wxCommandEvent& In);
	void sub_012082e0(wxGridEvent& In);
	void sub_01208380(wxCommandEvent& In);
	void sub_012083c0(wxCommandEvent& In);
	void sub_012083f0(wxCommandEvent& In);
	void sub_0120d330(wxGridRangeSelectEvent& In);
	void sub_0120d350(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e015f0
BEGIN_EVENT_TABLE(WxSceneManager, WxBrowser)
	EVT_MENU(6681, WxSceneManager::sub_01200070)
	EVT_MENU(19876, WxSceneManager::sub_011f39f0)
	EVT_CHECKBOX(6682, WxSceneManager::sub_011f3ad0)
	EVT_BUTTON(6682, WxSceneManager::sub_011f3ad0)
	EVT_BUTTON(6683, WxSceneManager::sub_01200030)
	EVT_BUTTON(6681, WxSceneManager::sub_01200070)
	EVT_BUTTON(19876, WxSceneManager::sub_011f39f0)
	EVT_COMBOBOX(10005, WxSceneManager::sub_01208380)
	EVT_CHECKBOX(10004, WxSceneManager::sub_012083c0)
	EVT_TEXT_ENTER(10006, WxSceneManager::sub_012083f0)
	EVT_GRID_CMD_RANGE_SELECT(10007, WxSceneManager::sub_0120d330)
	EVT_GRID_LABEL_LEFT_CLICK(WxSceneManager::sub_012082e0)
	EVT_LISTBOX(10008, WxSceneManager::sub_0120d350)
END_EVENT_TABLE()

class WxClass_025e8bd4 : public wxWindow
{
public:
	void sub_01220d60(wxCommandEvent& In);
	void sub_01220d80(wxCommandEvent& In);
	void sub_01220da0(wxCommandEvent& In);
	void sub_01220dc0(wxSizeEvent& In);
	void sub_0122d260(wxCommandEvent& In);
	void sub_0122d2e0(wxCommandEvent& In);
	void sub_0122d3c0(wxCommandEvent& In);
	void sub_0122d4c0(wxUpdateUIEvent& In);
	void sub_01232930(wxCommandEvent& In);
	void sub_01232950(wxCommandEvent& In);
	void sub_01232970(wxCommandEvent& In);
	void sub_01232990(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e029e0
BEGIN_EVENT_TABLE(WxClass_025e8bd4, wxWindow)
	EVT_SIZE(WxClass_025e8bd4::sub_01220dc0)
	EVT_CHECKBOX(6482, WxClass_025e8bd4::sub_01220d60)
	EVT_CHECKBOX(6484, WxClass_025e8bd4::sub_01220d80)
	EVT_CHECKBOX(6486, WxClass_025e8bd4::sub_01220da0)
	EVT_CHECKBOX(6487, WxClass_025e8bd4::sub_0122d260)
	EVT_TEXT_ENTER(16641, WxClass_025e8bd4::sub_0122d2e0)
	EVT_TEXT_ENTER(6488, WxClass_025e8bd4::sub_01232930)
	EVT_TEXT_ENTER(6489, WxClass_025e8bd4::sub_01232950)
	EVT_TEXT_ENTER(6490, WxClass_025e8bd4::sub_01232970)
	EVT_TEXT_ENTER(6491, WxClass_025e8bd4::sub_01232990)
	EVT_COMBOBOX(16641, WxClass_025e8bd4::sub_0122d3c0)
	EVT_UPDATE_UI(16642, WxClass_025e8bd4::sub_0122d4c0)
END_EVENT_TABLE()

class WxClass_025e8fb0 : public wxWindow
{
public:
	void sub_013a3200(wxEraseEvent& In);
	void sub_013a3260(wxCommandEvent& In);
	void sub_013a6cc0(wxCommandEvent& In);
	void sub_013ab620(wxCommandEvent& In);
	void sub_013b0750(wxPaintEvent& In);
	void sub_013bab00(wxMouseEvent& In);
	void sub_013bf300(wxCommandEvent& In);
	void sub_013bf4f0(wxMouseEvent& In);
	void sub_013bf510(wxCommandEvent& In);
	void sub_013bf610(wxCommandEvent& In);
	void sub_013bf6e0(wxCommandEvent& In);
	void sub_013c6500(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0a200
BEGIN_EVENT_TABLE(WxClass_025e8fb0, wxWindow)
	EVT_PAINT(WxClass_025e8fb0::sub_013b0750)
	EVT_LEFT_DOWN(WxClass_025e8fb0::sub_013c6500)
	EVT_RIGHT_DOWN(WxClass_025e8fb0::sub_013bab00)
	EVT_LEFT_DCLICK(WxClass_025e8fb0::sub_013bf4f0)
	EVT_CHECKBOX(17192, WxClass_025e8fb0::sub_013bf300)
	EVT_CHECKBOX(17193, WxClass_025e8fb0::sub_013a3260)
	EVT_BUTTON(17217, WxClass_025e8fb0::sub_013bf510)
	EVT_BUTTON(17218, WxClass_025e8fb0::sub_013bf610)
	EVT_BUTTON(17219, WxClass_025e8fb0::sub_013bf6e0)
	EVT_ERASE_BACKGROUND(WxClass_025e8fb0::sub_013a3200)
	EVT_BUTTON(17197, WxClass_025e8fb0::sub_013ab620)
	EVT_BUTTON(17198, WxClass_025e8fb0::sub_013a6cc0)
END_EVENT_TABLE()

class WxPropertyWindow : public wxWindow
{
public:
	void sub_011c21b0(wxKeyEvent& In);
	void sub_011d6080(wxSizeEvent& In);
	void sub_011d61f0(wxCommandEvent& In);
	void sub_011d6200(wxScrollEvent& In);
	void sub_011d6250(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00400
BEGIN_EVENT_TABLE(WxPropertyWindow, wxWindow)
	EVT_SIZE(WxPropertyWindow::sub_011d6080)
	EVT_SCROLL(WxPropertyWindow::sub_011d6200)
	EVT_MENU(wxID_REFRESH, WxPropertyWindow::sub_011d61f0)
	EVT_MOUSEWHEEL(WxPropertyWindow::sub_011d6250)
	EVT_KEY_DOWN(WxPropertyWindow::sub_011c21b0)
END_EVENT_TABLE()

class WxSoundCueEditor : public wxFrame
{
public:
	void sub_012201e0(wxSizeEvent& In);
	void sub_01221b60(wxCommandEvent& In);
	void sub_012269c0(wxCommandEvent& In);
	void sub_01226a60(wxCommandEvent& In);
	void sub_01230010(wxCommandEvent& In);
	void sub_012428b0(wxCommandEvent& In);
	void sub_012434f0(wxCommandEvent& In);
	void sub_012436b0(wxCommandEvent& In);
	void sub_01243920(wxCommandEvent& In);
	void sub_01243930(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01cb0
BEGIN_EVENT_TABLE(WxSoundCueEditor, wxFrame)
	EVT_MENU_RANGE(13027, 13127, WxSoundCueEditor::sub_012434f0)
	EVT_MENU(13128, WxSoundCueEditor::sub_012436b0)
	EVT_MENU(13129, WxSoundCueEditor::sub_012269c0)
	EVT_MENU(13130, WxSoundCueEditor::sub_01230010)
	EVT_MENU(13131, WxSoundCueEditor::sub_01243920)
	EVT_MENU(13132, WxSoundCueEditor::sub_01226a60)
	EVT_MENU(13133, WxSoundCueEditor::sub_01221b60)
	EVT_MENU(13134, WxSoundCueEditor::sub_01243930)
	EVT_MENU(13135, WxSoundCueEditor::sub_012428b0)
	EVT_SIZE(WxSoundCueEditor::sub_012201e0)
END_EVENT_TABLE()

class WxDlgMapCheck : public WxTrackableDialog
{
public:
	void sub_0144da10(wxCommandEvent& In);
	void sub_0144da30(wxCommandEvent& In);
	void sub_0144daa0(wxUpdateUIEvent& In);
	void sub_01455dd0(wxCommandEvent& In);
	void sub_01456020(wxListEvent& In);
	void sub_01460bd0(wxCommandEvent& In);
	void sub_01460c00(wxCommandEvent& In);
	void sub_014691e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e380
BEGIN_EVENT_TABLE(WxDlgMapCheck, WxTrackableDialog)
	EVT_BUTTON(wxID_CANCEL, WxDlgMapCheck::sub_0144da10)
	EVT_BUTTON(17156, WxDlgMapCheck::sub_01460bd0)
	EVT_BUTTON(17157, WxDlgMapCheck::sub_01455dd0)
	EVT_BUTTON(17158, WxDlgMapCheck::sub_014691e0)
	EVT_BUTTON(17161, WxDlgMapCheck::sub_01460c00)
	EVT_BUTTON(17160, WxDlgMapCheck::sub_0144da30)
	EVT_LIST_ITEM_ACTIVATED(17159, WxDlgMapCheck::sub_01456020)
	EVT_UPDATE_UI(17157, WxDlgMapCheck::sub_0144daa0)
	EVT_UPDATE_UI(17158, WxDlgMapCheck::sub_0144daa0)
	EVT_UPDATE_UI(17160, WxDlgMapCheck::sub_0144daa0)
END_EVENT_TABLE()

class WxClass_025e93f4 : public wxPanel
{
public:
	void sub_014a94a0(wxCommandEvent& In);
	void sub_014a9610(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0fdb0
BEGIN_EVENT_TABLE(WxClass_025e93f4, wxPanel)
	EVT_COMBOBOX(25945, WxClass_025e93f4::sub_014a94a0)
	EVT_COMBOBOX(25947, WxClass_025e93f4::sub_014a94a0)
	EVT_COMBOBOX(25946, WxClass_025e93f4::sub_014a94a0)
	EVT_COMBOBOX(25948, WxClass_025e93f4::sub_014a94a0)
	EVT_TEXT_ENTER(25949, WxClass_025e93f4::sub_014a9610)
	EVT_TEXT_ENTER(25950, WxClass_025e93f4::sub_014a9610)
	EVT_TEXT_ENTER(25951, WxClass_025e93f4::sub_014a9610)
	EVT_TEXT_ENTER(25952, WxClass_025e93f4::sub_014a9610)
	EVT_TEXT_ENTER(25953, WxClass_025e93f4::sub_014a9610)
	EVT_TEXT_ENTER(25954, WxClass_025e93f4::sub_014a9610)
END_EVENT_TABLE()

class WxClass_025e8df0 : public wxWindow
{
public:
	void sub_012bfda0(wxSizeEvent& In);
	void sub_012bff80(wxMouseEvent& In);
	void sub_012c1c80(wxScrollEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e05640
BEGIN_EVENT_TABLE(WxClass_025e8df0, wxWindow)
	EVT_SIZE(WxClass_025e8df0::sub_012bfda0)
	EVT_SCROLL(WxClass_025e8df0::sub_012c1c80)
	EVT_MOUSEWHEEL(WxClass_025e8df0::sub_012bff80)
END_EVENT_TABLE()

class WxClass_025e9368 : public wxWindow
{
public:
	void sub_0144e810(wxSizeEvent& In);
	void sub_0144e9f0(wxScrollEvent& In);
	void sub_0144ea90(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0efd0
BEGIN_EVENT_TABLE(WxClass_025e9368, wxWindow)
	EVT_SIZE(WxClass_025e9368::sub_0144e810)
	EVT_SCROLL(WxClass_025e9368::sub_0144e9f0)
	EVT_MOUSEWHEEL(WxClass_025e9368::sub_0144ea90)
END_EVENT_TABLE()

class WxStyleBrowser : public wxPanel
{
public:
	void sub_0149b9f0(wxSizeEvent& In);
	void sub_014a06d0(wxCommandEvent& In);
	void sub_014a2b90(wxTreeEvent& In);
	void sub_014a2bc0(wxCommandEvent& In);
	void sub_014a2bf0(wxUpdateUIEvent& In);
	void sub_014b51d0(wxCommandEvent& In);
	void sub_014b5260(wxCommandEvent& In);
	void sub_014b55e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0fbb0
BEGIN_EVENT_TABLE(WxStyleBrowser, wxPanel)
	EVT_SIZE(WxStyleBrowser::sub_0149b9f0)
	EVT_TREE_ITEM_ACTIVATED(25909, WxStyleBrowser::sub_014a2b90)
	EVT_BUTTON(26165, WxStyleBrowser::sub_014b51d0)
	EVT_MENU(25868, WxStyleBrowser::sub_014b5260)
	EVT_MENU(25869, WxStyleBrowser::sub_014b5260)
	EVT_MENU(25870, WxStyleBrowser::sub_014a2bc0)
	EVT_MENU(25872, WxStyleBrowser::sub_014b55e0)
	EVT_CHOICE(25898, WxStyleBrowser::sub_014a06d0)
	EVT_UPDATE_UI(25872, WxStyleBrowser::sub_014a2bf0)
END_EVENT_TABLE()

class WxClass_025e90c4 : public wxFrame
{
public:
	void sub_01426a80(wxKeyEvent& In);
	void sub_0142d530(wxCommandEvent& In);
	void sub_0142d780(wxCommandEvent& In);
	void sub_01434a30(wxCloseEvent& In);
	void sub_01434a50(wxCommandEvent& In);
	void sub_01434ca0(wxCommandEvent& In);
	void sub_01434dd0(wxCommandEvent& In);
	void sub_01440900(wxTreeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0d860
BEGIN_EVENT_TABLE(WxClass_025e90c4, wxFrame)
	EVT_CLOSE(WxClass_025e90c4::sub_01434a30)
	EVT_BUTTON(8364, WxClass_025e90c4::sub_01434a50)
	EVT_BUTTON(8365, WxClass_025e90c4::sub_0142d530)
	EVT_BUTTON(8363, WxClass_025e90c4::sub_01434ca0)
	EVT_BUTTON(wxID_OK, WxClass_025e90c4::sub_01434dd0)
	EVT_TREE_SEL_CHANGED(8362, WxClass_025e90c4::sub_01440900)
	EVT_COMMAND_RANGE(8366, 8866, wxEVT_COMMAND_BUTTON_CLICKED, WxClass_025e90c4::sub_0142d780)
	EVT_KEY_DOWN(WxClass_025e90c4::sub_01426a80)
	EVT_CHAR(WxClass_025e90c4::sub_01426a80)
END_EVENT_TABLE()

class WxClass_025e85c0 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_02292c30 : public WxClass_025e85c0
{
public:
	void sub_014515f0(wxCommandEvent& In);
	void sub_014516d0(wxCommandEvent& In);
	void sub_01456620(wxCommandEvent& In);
	void sub_01456630(wxCommandEvent& In);
	void sub_014566c0(wxCommandEvent& In);
	void sub_01460d40(wxCommandEvent& In);
	void sub_014699a0(wxCommandEvent& In);
	void sub_01470650(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e500
BEGIN_EVENT_TABLE(WxClass_02292c30, WxClass_025e85c0)
	EVT_CHECKLISTBOX(20020, WxClass_02292c30::sub_01456630)
	EVT_LISTBOX(20020, WxClass_02292c30::sub_014566c0)
	EVT_TEXT(20021, WxClass_02292c30::sub_014515f0)
	EVT_TEXT(20022, WxClass_02292c30::sub_014516d0)
	EVT_BUTTON(20024, WxClass_02292c30::sub_014699a0)
	EVT_BUTTON(20023, WxClass_02292c30::sub_01470650)
	EVT_CHECKBOX(20025, WxClass_02292c30::sub_01460d40)
	EVT_CHECKBOX(20026, WxClass_02292c30::sub_01456620)
END_EVENT_TABLE()

class WxTreeCtrl : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxSceneTreeCtrl : public WxTreeCtrl
{
public:
	void sub_0149b5d0(wxTreeEvent& In);
	void sub_0149b600(wxTreeEvent& In);
	void sub_0149b610(wxTreeEvent& In);
	void sub_0149b7f0(wxTreeEvent& In);
	void sub_0149e930(wxTreeEvent& In);
	void sub_014a2900(wxTreeEvent& In);
	void sub_014a2980(wxTreeEvent& In);
	void sub_014a8310(wxTreeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0fa00
BEGIN_EVENT_TABLE(WxSceneTreeCtrl, WxTreeCtrl)
	EVT_TREE_KEY_DOWN(25899, WxSceneTreeCtrl::sub_0149b610)
	EVT_TREE_ITEM_ACTIVATED(25899, WxSceneTreeCtrl::sub_0149b5d0)
	EVT_TREE_BEGIN_DRAG(25899, WxSceneTreeCtrl::sub_014a2900)
	EVT_TREE_END_DRAG(25899, WxSceneTreeCtrl::sub_014a2980)
	EVT_TREE_BEGIN_LABEL_EDIT(25899, WxSceneTreeCtrl::sub_0149b7f0)
	EVT_TREE_END_LABEL_EDIT(25899, WxSceneTreeCtrl::sub_014a8310)
	EVT_TREE_SEL_CHANGED(25899, WxSceneTreeCtrl::sub_0149b600)
	EVT_TREE_SEL_CHANGING(25899, WxSceneTreeCtrl::sub_0149e930)
END_EVENT_TABLE()

class WxPropertyWindowFrame : public wxFrame
{
public:
	void sub_011c1d10(wxSizeEvent& In);
	void sub_011c1da0(wxCommandEvent& In);
	void sub_011c1dc0(wxUpdateUIEvent& In);
	void sub_011c4410(wxCloseEvent& In);
	void sub_011edc90(wxCommandEvent& In);
	void sub_011ef320(wxCommandEvent& In);
	void sub_011ef690(wxCommandEvent& In);
	void sub_011f0330(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00280
BEGIN_EVENT_TABLE(WxPropertyWindowFrame, wxFrame)
	EVT_SIZE(WxPropertyWindowFrame::sub_011c1d10)
	EVT_CLOSE(WxPropertyWindowFrame::sub_011c4410)
	EVT_MENU(6432, WxPropertyWindowFrame::sub_011f0330)
	EVT_MENU(6433, WxPropertyWindowFrame::sub_011ef320)
	EVT_MENU(17074, WxPropertyWindowFrame::sub_011edc90)
	EVT_MENU(17075, WxPropertyWindowFrame::sub_011ef690)
	EVT_MENU(17073, WxPropertyWindowFrame::sub_011c1da0)
	EVT_UPDATE_UI(17073, WxPropertyWindowFrame::sub_011c1dc0)
END_EVENT_TABLE()

class WxClass_025e8d34 : public wxWindow
{
public:
	void sub_0129d310(wxSizeEvent& In);
	void sub_0129d3d0(wxFocusEvent& In);
	void sub_0129d400(wxCommandEvent& In);
	void sub_0129d420(wxCommandEvent& In);
	void sub_0129d440(wxCommandEvent& In);
	void sub_0129d460(wxUpdateUIEvent& In);
	void sub_0129d4a0(wxUpdateUIEvent& In);
	void sub_0129d4e0(wxUpdateUIEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e048e0
BEGIN_EVENT_TABLE(WxClass_025e8d34, wxWindow)
	EVT_SIZE(WxClass_025e8d34::sub_0129d310)
	EVT_SET_FOCUS(WxClass_025e8d34::sub_0129d3d0)
	EVT_MENU(17058, WxClass_025e8d34::sub_0129d400)
	EVT_MENU(17059, WxClass_025e8d34::sub_0129d420)
	EVT_MENU(17060, WxClass_025e8d34::sub_0129d440)
	EVT_UPDATE_UI(17058, WxClass_025e8d34::sub_0129d460)
	EVT_UPDATE_UI(17059, WxClass_025e8d34::sub_0129d4a0)
	EVT_UPDATE_UI(17060, WxClass_025e8d34::sub_0129d4e0)
END_EVENT_TABLE()

class WxClass_025e8724 : public wxPanel
{
public:
	void sub_011f28d0(wxCommandEvent& In);
	void sub_011f2900(wxCommandEvent& In);
	void sub_011f5690(wxCommandEvent& In);
	void sub_011f5710(wxTreeEvent& In);
	void sub_011f57b0(wxTreeEvent& In);
	void sub_011fce90(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00f50
BEGIN_EVENT_TABLE(WxClass_025e8724, wxPanel)
	EVT_MENU(17245, WxClass_025e8724::sub_011f28d0)
	EVT_MENU(17248, WxClass_025e8724::sub_011f2900)
	EVT_MENU(17249, WxClass_025e8724::sub_011f2900)
	EVT_MENU(17246, WxClass_025e8724::sub_011f5690)
	EVT_MENU(17247, WxClass_025e8724::sub_011fce90)
	EVT_TREE_SEL_CHANGED(17244, WxClass_025e8724::sub_011f5710)
	EVT_TREE_ITEM_ACTIVATED(17244, WxClass_025e8724::sub_011f57b0)
END_EVENT_TABLE()

class WxClass_025e8fc0 : public wxDialog
{
public:
	void sub_013a3c30(wxCommandEvent& In);
	void sub_013a3c50(wxCommandEvent& In);
	void sub_013a3c70(wxListEvent& In);
	void sub_013a3c90(wxListEvent& In);
	void sub_013a7110(wxCommandEvent& In);
	void sub_013ad220(wxListEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0ade0
BEGIN_EVENT_TABLE(WxClass_025e8fc0, wxDialog)
	EVT_BUTTON(26167, WxClass_025e8fc0::sub_013a3c50)
	EVT_BUTTON(26166, WxClass_025e8fc0::sub_013a3c30)
	EVT_BUTTON(wxID_OK, WxClass_025e8fc0::sub_013a7110)
	EVT_LIST_ITEM_ACTIVATED(26118, WxClass_025e8fc0::sub_013a3c90)
	EVT_LIST_ITEM_ACTIVATED(26119, WxClass_025e8fc0::sub_013a3c70)
	EVT_LIST_COL_CLICK(26118, WxClass_025e8fc0::sub_013ad220)
	EVT_LIST_COL_CLICK(26119, WxClass_025e8fc0::sub_013ad220)
END_EVENT_TABLE()

class WxActorBrowser : public WxBrowser
{
public:
	void sub_013679b0(wxCommandEvent& In);
	void sub_0136a840(wxCommandEvent& In);
	void sub_0136a930(wxCommandEvent& In);
	void sub_0136d200(wxCommandEvent& In);
	void sub_0136d540(wxCommandEvent& In);
	void sub_0136d880(wxCommandEvent& In);
	void sub_0136da60(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e08b50
BEGIN_EVENT_TABLE(WxActorBrowser, WxBrowser)
	EVT_MENU(6676, WxActorBrowser::sub_0136d200)
	EVT_MENU(6677, WxActorBrowser::sub_0136d540)
	EVT_MENU(26250, WxActorBrowser::sub_0136a840)
	EVT_MENU(26251, WxActorBrowser::sub_0136d880)
	EVT_MENU(6678, WxActorBrowser::sub_0136da60)
	EVT_MENU(6679, WxActorBrowser::sub_0136a930)
	EVT_MENU(6680, WxActorBrowser::sub_013679b0)
END_EVENT_TABLE()

class WxClass_025e9028 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_02270354 : public WxClass_025e9028
{
public:
	void sub_013dbb50(wxCommandEvent& In);
	void sub_013dcba0(wxListEvent& In);
	void sub_013e41f0(wxCommandEvent& In);
	void sub_013e4200(wxUpdateUIEvent& In);
	void sub_013f6220(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0bd40
BEGIN_EVENT_TABLE(WxClass_02270354, WxClass_025e9028)
	EVT_LIST_ITEM_SELECTED(25906, WxClass_02270354::sub_013dcba0)
	EVT_BUTTON(25902, WxClass_02270354::sub_013f6220)
	EVT_BUTTON(25901, WxClass_02270354::sub_013e41f0)
	EVT_TEXT(25903, WxClass_02270354::sub_013dbb50)
	EVT_UPDATE_UI(25902, WxClass_02270354::sub_013e4200)
	EVT_UPDATE_UI(25901, WxClass_02270354::sub_013e4200)
	EVT_UPDATE_UI(25863, WxClass_02270354::sub_013e4200)
END_EVENT_TABLE()

class WxDlgEditSoundCue : public wxDialog
{
public:
	void sub_013db690(wxCommandEvent& In);
	void sub_013db780(wxCommandEvent& In);
	void sub_013db830(wxCloseEvent& In);
	void sub_013e2d30(wxCommandEvent& In);
	void sub_013ee8b0(wxCommandEvent& In);
	void sub_013ee9e0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0b9c0
BEGIN_EVENT_TABLE(WxDlgEditSoundCue, wxDialog)
	EVT_CHOICE(26066, WxDlgEditSoundCue::sub_013db690)
	EVT_TEXT(26067, WxDlgEditSoundCue::sub_013db780)
	EVT_BUTTON(16412, WxDlgEditSoundCue::sub_013ee8b0)
	EVT_BUTTON(16408, WxDlgEditSoundCue::sub_013ee9e0)
	EVT_BUTTON(wxID_OK, WxDlgEditSoundCue::sub_013e2d30)
	EVT_BUTTON(wxID_CANCEL, WxDlgEditSoundCue::sub_013e2d30)
	EVT_CLOSE(WxDlgEditSoundCue::sub_013db830)
END_EVENT_TABLE()

class WxUILayerBrowser : public wxPanel
{
public:
	void sub_013dc590(wxPaintEvent& In);
	void sub_013dc5c0(wxSizeEvent& In);
	void sub_013f73b0(wxCommandEvent& In);
	void sub_01404500(wxCommandEvent& In);
	void sub_01404550(wxCommandEvent& In);
	void sub_014045a0(wxCommandEvent& In);
	void sub_014045f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c620
BEGIN_EVENT_TABLE(WxUILayerBrowser, wxPanel)
	EVT_PAINT(WxUILayerBrowser::sub_013dc590)
	EVT_SIZE(WxUILayerBrowser::sub_013dc5c0)
	EVT_MENU(25874, WxUILayerBrowser::sub_01404500)
	EVT_MENU(25875, WxUILayerBrowser::sub_01404550)
	EVT_MENU(25876, WxUILayerBrowser::sub_014045a0)
	EVT_MENU(25877, WxUILayerBrowser::sub_013f73b0)
	EVT_MENU(25878, WxUILayerBrowser::sub_014045f0)
END_EVENT_TABLE()

class WxClass_025e8ccc : public wxDialog
{
public:
	void sub_012772d0(wxKeyEvent& In);
	void sub_0127dc70(wxKeyEvent& In);
	void sub_0127ffb0(wxMouseEvent& In);
	void sub_0127fff0(wxMouseEvent& In);
	void sub_01285280(wxPaintEvent& In);
	void sub_01285820(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e044a0
BEGIN_EVENT_TABLE(WxClass_025e8ccc, wxDialog)
	EVT_PAINT(WxClass_025e8ccc::sub_01285280)
	EVT_KEY_UP(WxClass_025e8ccc::sub_012772d0)
	EVT_KEY_DOWN(WxClass_025e8ccc::sub_0127dc70)
	EVT_MOTION(WxClass_025e8ccc::sub_01285820)
	EVT_LEFT_DOWN(WxClass_025e8ccc::sub_0127ffb0)
	EVT_LEFT_UP(WxClass_025e8ccc::sub_0127fff0)
END_EVENT_TABLE()

class WxClass_025e9088 : public wxWindow
{
public:
	void sub_0140dc50(wxCommandEvent& In);
	void sub_0140dd70(wxCommandEvent& In);
	void sub_0140deb0(wxCommandEvent& In);
	void sub_0140dfd0(wxCommandEvent& In);
	void sub_0140e110(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c820
BEGIN_EVENT_TABLE(WxClass_025e9088, wxWindow)
	EVT_MENU_RANGE(25761, 25861, WxClass_025e9088::sub_0140e110)
	EVT_MENU(20699, WxClass_025e9088::sub_0140deb0)
	EVT_MENU(20700, WxClass_025e9088::sub_0140dfd0)
	EVT_MENU(20701, WxClass_025e9088::sub_0140dc50)
	EVT_MENU(20702, WxClass_025e9088::sub_0140dd70)
END_EVENT_TABLE()

class WxMaterialInstanceConstantEditor : public WxMaterialEditorBase
{
public:
	void sub_014070e0(wxCommandEvent& In);
	void sub_01413030(wxListEvent& In);
	void sub_0141b940(wxCommandEvent& In);
	void sub_01423480(wxCommandEvent& In);
	void sub_01423490(wxListEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0cdb0
BEGIN_EVENT_TABLE(WxMaterialInstanceConstantEditor, WxMaterialEditorBase)
	EVT_MENU(7314, WxMaterialInstanceConstantEditor::sub_0141b940)
	EVT_MENU(7315, WxMaterialInstanceConstantEditor::sub_01423480)
	EVT_LIST_ITEM_ACTIVATED(7313, WxMaterialInstanceConstantEditor::sub_01423490)
	EVT_LIST_ITEM_RIGHT_CLICK(7313, WxMaterialInstanceConstantEditor::sub_01413030)
	EVT_MENU(7316, WxMaterialInstanceConstantEditor::sub_014070e0)
END_EVENT_TABLE()

class WxClass_02293e40 : public WxTrackableDialog
{
public:
	void sub_0144e080(wxListEvent& In);
	void sub_01450180(wxListEvent& In);
	void sub_01460f40(wxTimerEvent& In);
	void sub_01474730(wxCommandEvent& In);
	void sub_01474790(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0e8f0
BEGIN_EVENT_TABLE(WxClass_02293e40, WxTrackableDialog)
	EVT_BUTTON(19894, WxClass_02293e40::sub_01474730)
	EVT_BUTTON(19895, WxClass_02293e40::sub_01474790)
	EVT_LIST_ITEM_ACTIVATED(19896, WxClass_02293e40::sub_01450180)
	EVT_LIST_ITEM_SELECTED(19896, WxClass_02293e40::sub_0144e080)
	EVT_TIMER(9999, WxClass_02293e40::sub_01460f40)
END_EVENT_TABLE()

class WxMaterialInstanceTimeVaryingEditor : public WxMaterialEditorBase
{
public:
	void sub_01407300(wxCommandEvent& In);
	void sub_014137d0(wxListEvent& In);
	void sub_0141bea0(wxCommandEvent& In);
	void sub_01425180(wxCommandEvent& In);
	void sub_01425190(wxListEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0cf50
BEGIN_EVENT_TABLE(WxMaterialInstanceTimeVaryingEditor, WxMaterialEditorBase)
	EVT_MENU(7319, WxMaterialInstanceTimeVaryingEditor::sub_0141bea0)
	EVT_MENU(7320, WxMaterialInstanceTimeVaryingEditor::sub_01425180)
	EVT_LIST_ITEM_ACTIVATED(7318, WxMaterialInstanceTimeVaryingEditor::sub_01425190)
	EVT_LIST_ITEM_RIGHT_CLICK(7318, WxMaterialInstanceTimeVaryingEditor::sub_014137d0)
	EVT_MENU(7316, WxMaterialInstanceTimeVaryingEditor::sub_01407300)
END_EVENT_TABLE()

class WxClass_025e86c8 : public wxFrame
{
public:
	void sub_011c1700(wxCloseEvent& In);
	void sub_011c41d0(wxSizeEvent& In);
	void sub_011d2cf0(wxCommandEvent& In);
	void sub_011d6030(wxCommandEvent& In);
	void sub_011e6270(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00160
BEGIN_EVENT_TABLE(WxClass_025e86c8, wxFrame)
	EVT_CLOSE(WxClass_025e86c8::sub_011c1700)
	EVT_MENU_RANGE(13136, 13236, WxClass_025e86c8::sub_011e6270)
	EVT_MENU(13237, WxClass_025e86c8::sub_011d6030)
	EVT_MENU(13238, WxClass_025e86c8::sub_011d2cf0)
	EVT_SIZE(WxClass_025e86c8::sub_011c41d0)
END_EVENT_TABLE()

class WxPropertyWindow_Base_01e00a70 : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxPropertyWindow_Item : public WxPropertyWindow_Base_01e00a70
{
public:
	void sub_011c12e0(wxEraseEvent& In);
	void sub_011c2ab0(wxCommandEvent& In);
	void sub_011c2ad0(wxCommandEvent& In);
	void sub_011c60b0(wxCommandEvent& In);
	void sub_011d4080(wxPaintEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00a70
BEGIN_EVENT_TABLE(WxPropertyWindow_Item, WxPropertyWindow_Base_01e00a70)
	EVT_PAINT(WxPropertyWindow_Item::sub_011d4080)
	EVT_ERASE_BACKGROUND(WxPropertyWindow_Item::sub_011c12e0)
	EVT_TEXT_ENTER(16402, WxPropertyWindow_Item::sub_011c60b0)
	EVT_TEXT(16402, WxPropertyWindow_Item::sub_011c2ab0)
	EVT_COMBOBOX(16403, WxPropertyWindow_Item::sub_011c2ad0)
END_EVENT_TABLE()

class WxPropertyWindow_Base_01e00970 : public wxWindow
{
	DECLARE_EVENT_TABLE()
};

class WxPropertyWindow_Category : public WxPropertyWindow_Base_01e00970
{
public:
	void sub_011c12c0(wxEraseEvent& In);
	void sub_011c2a70(wxMouseEvent& In);
	void sub_011cfd80(wxPaintEvent& In);
	void sub_011d3e00(wxMouseEvent& In);
	void sub_011d3e40(wxMouseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e00970
BEGIN_EVENT_TABLE(WxPropertyWindow_Category, WxPropertyWindow_Base_01e00970)
	EVT_LEFT_DOWN(WxPropertyWindow_Category::sub_011d3e00)
	EVT_RIGHT_DOWN(WxPropertyWindow_Category::sub_011d3e40)
	EVT_PAINT(WxPropertyWindow_Category::sub_011cfd80)
	EVT_ERASE_BACKGROUND(WxPropertyWindow_Category::sub_011c12c0)
	EVT_MOTION(WxPropertyWindow_Category::sub_011c2a70)
END_EVENT_TABLE()

class WxClass_025e872c : public wxFrame
{
public:
	void sub_011f2c10(wxCloseEvent& In);
	void sub_011f2c30(wxCommandEvent& In);
	void sub_011f2c40(wxCommandEvent& In);
	void sub_011f2c50(wxActivateEvent& In);
	void sub_011f2c80(wxNotebookEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e01080
BEGIN_EVENT_TABLE(WxClass_025e872c, wxFrame)
	EVT_CLOSE(WxClass_025e872c::sub_011f2c10)
	EVT_MENU(17232, WxClass_025e872c::sub_011f2c30)
	EVT_MENU(17233, WxClass_025e872c::sub_011f2c40)
	EVT_ACTIVATE(WxClass_025e872c::sub_011f2c50)
	EVT_NOTEBOOK_PAGE_CHANGED(17234, WxClass_025e872c::sub_011f2c80)
END_EVENT_TABLE()

class WxClass_025e93c4 : public wxDialog
{
public:
	void sub_01476f50(wxCommandEvent& In);
	void sub_0147c580(wxCommandEvent& In);
	void sub_0147c600(wxCommandEvent& In);
	void sub_0148e2c0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0f4f0
BEGIN_EVENT_TABLE(WxClass_025e93c4, wxDialog)
	EVT_BUTTON(wxID_OK, WxClass_025e93c4::sub_0148e2c0)
	EVT_BUTTON(wxID_NOTOALL, WxClass_025e93c4::sub_0147c600)
	EVT_BUTTON(wxID_IGNORE, WxClass_025e93c4::sub_0147c580)
	EVT_CHECKBOX(wxID_SAVE, WxClass_025e93c4::sub_01476f50)
END_EVENT_TABLE()

class WxUILayerTreeCtrl : public WxTreeCtrl
{
public:
	void sub_013dc470(wxTreeEvent& In);
	void sub_013e7f10(wxTreeEvent& In);
	void sub_013e7fa0(wxTreeEvent& In);
	void sub_01404140(wxTreeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c520
BEGIN_EVENT_TABLE(WxUILayerTreeCtrl, WxTreeCtrl)
	EVT_TREE_BEGIN_DRAG(25900, WxUILayerTreeCtrl::sub_013dc470)
	EVT_TREE_END_DRAG(25900, WxUILayerTreeCtrl::sub_01404140)
	EVT_TREE_BEGIN_LABEL_EDIT(25900, WxUILayerTreeCtrl::sub_013e7f10)
	EVT_TREE_END_LABEL_EDIT(25900, WxUILayerTreeCtrl::sub_013e7fa0)
END_EVENT_TABLE()

class WxClass_025e9080 : public wxWindow
{
public:
	void sub_014062b0(wxCommandEvent& In);
	void sub_0140d740(wxCommandEvent& In);
	void sub_0140d880(wxCommandEvent& In);
	void sub_0140d9f0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e0c750
BEGIN_EVENT_TABLE(WxClass_025e9080, wxWindow)
	EVT_MENU_RANGE(25761, 25861, WxClass_025e9080::sub_0140d9f0)
	EVT_MENU(20697, WxClass_025e9080::sub_0140d740)
	EVT_MENU(20698, WxClass_025e9080::sub_0140d880)
	EVT_MENU(20692, WxClass_025e9080::sub_014062b0)
END_EVENT_TABLE()
