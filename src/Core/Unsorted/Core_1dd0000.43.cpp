// Core_1dd0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* FaceFX Studio. This comment stands before the include on purpose: FaceFX Studio was not built
 * with the editor's precompiled header, and wxWidgets' inline members (here the event table
 * entry's constructor) are only expanded in place when the header is not precompiled. */
#include "ue3/Wx.h"

class FxCurveWidget : public wxWindow
{
public:
	void sub_004c0f90(wxMouseEvent& In);
	void sub_004c0fa0(wxKeyEvent& In);
	void sub_004c0fb0(wxCommandEvent& In);
	void sub_004c0ff0(wxCommandEvent& In);
	void sub_004c1030(wxCommandEvent& In);
	void sub_004c1070(wxCommandEvent& In);
	void sub_004c11d0(wxFocusEvent& In);
	void sub_004c11f0(wxFocusEvent& In);
	void sub_004c1210(wxCommandEvent& In);
	void sub_004c1300(wxCommandEvent& In);
	void sub_004c13f0(wxHelpEvent& In);
	void sub_004c7c60(wxMouseEvent& In);
	void sub_004cd4e0(wxMouseEvent& In);
	void sub_004cde40(wxMouseEvent& In);
	void sub_004ce590(wxMouseEvent& In);
	void sub_004ced00(wxMouseEvent& In);
	void sub_004cefa0(wxCommandEvent& In);
	void sub_004cf030(wxCommandEvent& In);
	void sub_004cf0e0(wxCommandEvent& In);
	void sub_004cf500(wxCommandEvent& In);
	void sub_004d4a50(wxMouseEvent& In);
	void sub_004d51b0(wxSizeEvent& In);
	void sub_004d51e0(wxCommandEvent& In);
	void sub_004d5380(wxCommandEvent& In);
	void sub_004d54f0(wxCommandEvent& In);
	void sub_004de7b0(wxPaintEvent& In);
	void sub_004df020(wxMouseEvent& In);
	void sub_004df0f0(wxCommandEvent& In);
	void sub_004e7160(wxCommandEvent& In);
	void sub_004e7360(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd58b0
BEGIN_EVENT_TABLE(FxCurveWidget, wxWindow)
	EVT_PAINT(FxCurveWidget::sub_004de7b0)
	EVT_MOUSEWHEEL(FxCurveWidget::sub_004df020)
	EVT_LEFT_DOWN(FxCurveWidget::sub_004cd4e0)
	EVT_LEFT_UP(FxCurveWidget::sub_004cde40)
	EVT_MOTION(FxCurveWidget::sub_004d4a50)
	EVT_RIGHT_DOWN(FxCurveWidget::sub_004c0f90)
	EVT_RIGHT_UP(FxCurveWidget::sub_004ce590)
	EVT_MIDDLE_DOWN(FxCurveWidget::sub_004c7c60)
	EVT_MIDDLE_UP(FxCurveWidget::sub_004ced00)
	EVT_KEY_DOWN(FxCurveWidget::sub_004c0fa0)
	EVT_SIZE(FxCurveWidget::sub_004d51b0)
	EVT_MENU(6083, FxCurveWidget::sub_004df0f0)
	EVT_MENU(6084, FxCurveWidget::sub_004cefa0)
	EVT_MENU(6085, FxCurveWidget::sub_004c0fb0)
	EVT_MENU(6086, FxCurveWidget::sub_004c0ff0)
	EVT_MENU(6087, FxCurveWidget::sub_004cf030)
	EVT_MENU(6089, FxCurveWidget::sub_004c1070)
	EVT_MENU(6090, FxCurveWidget::sub_004c1030)
	EVT_MENU(6091, FxCurveWidget::sub_004e7160)
	EVT_MENU(6092, FxCurveWidget::sub_004e7360)
	EVT_MENU(6093, FxCurveWidget::sub_004cf0e0)
	EVT_SET_FOCUS(FxCurveWidget::sub_004c11d0)
	EVT_KILL_FOCUS(FxCurveWidget::sub_004c11f0)
	EVT_BUTTON(6094, FxCurveWidget::sub_004e7360)
	EVT_BUTTON(6095, FxCurveWidget::sub_004e7160)
	EVT_BUTTON(6096, FxCurveWidget::sub_004cf0e0)
	EVT_BUTTON(6097, FxCurveWidget::sub_004c0fb0)
	EVT_BUTTON(6098, FxCurveWidget::sub_004c0ff0)
	EVT_BUTTON(6102, FxCurveWidget::sub_004d5380)
	EVT_BUTTON(6101, FxCurveWidget::sub_004d51e0)
	EVT_BUTTON(6103, FxCurveWidget::sub_004d54f0)
	EVT_BUTTON(6104, FxCurveWidget::sub_004c1300)
	EVT_BUTTON(6105, FxCurveWidget::sub_004c1210)
	EVT_TEXT_ENTER(6106, FxCurveWidget::sub_004cf500)
	EVT_TEXT_ENTER(6107, FxCurveWidget::sub_004cf500)
	EVT_TEXT_ENTER(6108, FxCurveWidget::sub_004cf500)
	EVT_TEXT_ENTER(6109, FxCurveWidget::sub_004cf500)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxCurveWidget::sub_004c13f0)
END_EVENT_TABLE()

class FxFaceGraphWidget : public wxWindow
{
public:
	void sub_004e7cb0(wxSizeEvent& In);
	void sub_004e7cf0(wxMouseEvent& In);
	void sub_004e7e00(wxFocusEvent& In);
	void sub_004e7e20(wxFocusEvent& In);
	void sub_004e7e40(wxHelpEvent& In);
	void sub_004e7f40(wxCommandEvent& In);
	void sub_004e8090(wxCommandEvent& In);
	void sub_004e80c0(wxCommandEvent& In);
	void sub_004e80f0(wxCommandEvent& In);
	void sub_004e8110(wxCommandEvent& In);
	void sub_004e8130(wxCommandEvent& In);
	void sub_004e8160(wxTimerEvent& In);
	void sub_004edce0(wxCommandEvent& In);
	void sub_004f7ee0(wxMouseEvent& In);
	void sub_004f7fc0(wxCommandEvent& In);
	void sub_004f8040(wxCommandEvent& In);
	void sub_004fb3c0(wxMouseEvent& In);
	void sub_004fbe70(wxMouseEvent& In);
	void sub_004fc7c0(wxMouseEvent& In);
	void sub_004fd5b0(wxCommandEvent& In);
	void sub_004fd820(wxCommandEvent& In);
	void sub_005036b0(wxPaintEvent& In);
	void sub_005042b0(wxMouseEvent& In);
	void sub_00504830(wxCommandEvent& In);
	void sub_0050ea40(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd62f0
BEGIN_EVENT_TABLE(FxFaceGraphWidget, wxWindow)
	EVT_PAINT(FxFaceGraphWidget::sub_005036b0)
	EVT_SIZE(FxFaceGraphWidget::sub_004e7cb0)
	EVT_LEFT_DOWN(FxFaceGraphWidget::sub_004fb3c0)
	EVT_MOTION(FxFaceGraphWidget::sub_004fbe70)
	EVT_MOUSEWHEEL(FxFaceGraphWidget::sub_004f7ee0)
	EVT_LEFT_UP(FxFaceGraphWidget::sub_005042b0)
	EVT_RIGHT_DOWN(FxFaceGraphWidget::sub_004fc7c0)
	EVT_RIGHT_UP(FxFaceGraphWidget::sub_004fc7c0)
	EVT_MIDDLE_DOWN(FxFaceGraphWidget::sub_004e7cf0)
	EVT_MIDDLE_UP(FxFaceGraphWidget::sub_004e7cf0)
	EVT_SET_FOCUS(FxFaceGraphWidget::sub_004e7e00)
	EVT_KILL_FOCUS(FxFaceGraphWidget::sub_004e7e20)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxFaceGraphWidget::sub_004e7e40)
	EVT_MENU(6114, FxFaceGraphWidget::sub_004edce0)
	EVT_MENU(6117, FxFaceGraphWidget::sub_004e7f40)
	EVT_MENU(6115, FxFaceGraphWidget::sub_00504830)
	EVT_MENU(6116, FxFaceGraphWidget::sub_004fd5b0)
	EVT_MENU(6118, FxFaceGraphWidget::sub_004e8090)
	EVT_MENU(6119, FxFaceGraphWidget::sub_004e80c0)
	EVT_MENU(6120, FxFaceGraphWidget::sub_004e80f0)
	EVT_MENU(6122, FxFaceGraphWidget::sub_004e8110)
	EVT_MENU(6121, FxFaceGraphWidget::sub_004e8130)
	EVT_MENU(6123, FxFaceGraphWidget::sub_004f7fc0)
	EVT_MENU(6124, FxFaceGraphWidget::sub_0050ea40)
	EVT_MENU(6125, FxFaceGraphWidget::sub_004f8040)
	EVT_MENU_RANGE(9285, 9413, FxFaceGraphWidget::sub_004fd820)
	EVT_TIMER(154, FxFaceGraphWidget::sub_004e8160)
	EVT_TIMER(155, FxFaceGraphWidget::sub_004e8160)
END_EVENT_TABLE()

class FxPhonemeWidget : public wxWindow
{
public:
	void sub_004ec000(wxMouseEvent& In);
	void sub_004ec060(wxCommandEvent& In);
	void sub_004ec0a0(wxFocusEvent& In);
	void sub_004ec0c0(wxFocusEvent& In);
	void sub_004ec0e0(wxHelpEvent& In);
	void sub_004f2ae0(wxMouseEvent& In);
	void sub_004f2b30(wxMouseEvent& In);
	void sub_004f2ea0(wxMouseEvent& In);
	void sub_004f2f30(wxMouseEvent& In);
	void sub_004f51d0(wxCommandEvent& In);
	void sub_004f5300(wxCommandEvent& In);
	void sub_004f7060(wxPaintEvent& In);
	void sub_004f9130(wxMouseEvent& In);
	void sub_004f93b0(wxMouseEvent& In);
	void sub_004f9450(wxCommandEvent& In);
	void sub_004f9560(wxCommandEvent& In);
	void sub_004f9900(wxCommandEvent& In);
	void sub_004f9a30(wxCommandEvent& In);
	void sub_004f9b50(wxCommandEvent& In);
	void sub_004f9cb0(wxCommandEvent& In);
	void sub_004f9e50(wxCommandEvent& In);
	void sub_004f9fb0(wxCommandEvent& In);
	void sub_004fa0e0(wxCommandEvent& In);
	void sub_004fa390(wxCommandEvent& In);
	void sub_004fa410(wxCommandEvent& In);
	void sub_004fa490(wxCommandEvent& In);
	void sub_0050e320(wxCommandEvent& In);
	void sub_0050e930(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd7250
BEGIN_EVENT_TABLE(FxPhonemeWidget, wxWindow)
	EVT_MENU(6161, FxPhonemeWidget::sub_004ec060)
	EVT_MENU(6162, FxPhonemeWidget::sub_004f51d0)
	EVT_MENU(6163, FxPhonemeWidget::sub_004f9450)
	EVT_MENU(6164, FxPhonemeWidget::sub_004f9560)
	EVT_MENU(6165, FxPhonemeWidget::sub_004f9900)
	EVT_MENU(6166, FxPhonemeWidget::sub_004f9cb0)
	EVT_MENU(6167, FxPhonemeWidget::sub_004f9e50)
	EVT_MENU(6168, FxPhonemeWidget::sub_004f9fb0)
	EVT_MENU(6170, FxPhonemeWidget::sub_0050e930)
	EVT_MENU(6171, FxPhonemeWidget::sub_0050e320)
	EVT_MENU(6172, FxPhonemeWidget::sub_004fa0e0)
	EVT_MENU(6173, FxPhonemeWidget::sub_004fa390)
	EVT_MENU(6174, FxPhonemeWidget::sub_004fa410)
	EVT_MENU(6175, FxPhonemeWidget::sub_004f5300)
	EVT_MENU(6176, FxPhonemeWidget::sub_004fa490)
	EVT_MENU(6177, FxPhonemeWidget::sub_004f9b50)
	EVT_SET_FOCUS(FxPhonemeWidget::sub_004ec0a0)
	EVT_KILL_FOCUS(FxPhonemeWidget::sub_004ec0c0)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxPhonemeWidget::sub_004ec0e0)
	EVT_PAINT(FxPhonemeWidget::sub_004f7060)
	EVT_MOUSEWHEEL(FxPhonemeWidget::sub_004f2ae0)
	EVT_MOTION(FxPhonemeWidget::sub_004f2b30)
	EVT_LEFT_DOWN(FxPhonemeWidget::sub_004f9130)
	EVT_LEFT_UP(FxPhonemeWidget::sub_004f2ea0)
	EVT_LEFT_DCLICK(FxPhonemeWidget::sub_004f93b0)
	EVT_RIGHT_UP(FxPhonemeWidget::sub_004f2f30)
	EVT_MIDDLE_DOWN(FxPhonemeWidget::sub_004ec000)
	EVT_MENU_RANGE(9285, 9349, FxPhonemeWidget::sub_004f9a30)
END_EVENT_TABLE()

class FxWorkspaceEditWidget : public wxWindow
{
public:
	void sub_005158a0(wxListEvent& In);
	void sub_00515980(wxKeyEvent& In);
	void sub_005159b0(wxHelpEvent& In);
	void sub_0051e850(wxSysColourChangedEvent& In);
	void sub_00520fb0(wxCommandEvent& In);
	void sub_005255f0(wxListEvent& In);
	void sub_00529580(wxCommandEvent& In);
	void sub_00529590(wxCommandEvent& In);
	void sub_00529670(wxCommandEvent& In);
	void sub_0052cb90(wxCommandEvent& In);
	void sub_00530680(wxMouseEvent& In);
	void sub_005335f0(wxCommandEvent& In);
	void sub_00533990(wxSizeEvent& In);
	void sub_005339b0(wxMouseEvent& In);
	void sub_00533c70(wxMouseEvent& In);
	void sub_00534520(wxCommandEvent& In);
	void sub_00534780(wxCommandEvent& In);
	void sub_00534790(wxKeyEvent& In);
	void sub_00537be0(wxCommandEvent& In);
	void sub_00539810(wxCommandEvent& In);
	void sub_0053b7b0(wxCommandEvent& In);
	void sub_0053c0e0(wxCommandEvent& In);
	void sub_0053c630(wxCommandEvent& In);
	void sub_0053c7e0(wxCommandEvent& In);
	void sub_0053c800(wxPaintEvent& In);
	void sub_0053cba0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd8940
BEGIN_EVENT_TABLE(FxWorkspaceEditWidget, wxWindow)
	EVT_SIZE(FxWorkspaceEditWidget::sub_00533990)
	EVT_PAINT(FxWorkspaceEditWidget::sub_0053c800)
	EVT_CHOICE(6225, FxWorkspaceEditWidget::sub_00529580)
	EVT_LIST_BEGIN_DRAG(6226, FxWorkspaceEditWidget::sub_005158a0)
	EVT_LIST_COL_CLICK(6226, FxWorkspaceEditWidget::sub_005255f0)
	EVT_BUTTON(6227, FxWorkspaceEditWidget::sub_00529590)
	EVT_BUTTON(6228, FxWorkspaceEditWidget::sub_00529670)
	EVT_CHOICE(6229, FxWorkspaceEditWidget::sub_00539810)
	EVT_BUTTON(6230, FxWorkspaceEditWidget::sub_0053cba0)
	EVT_BUTTON(6231, FxWorkspaceEditWidget::sub_0053b7b0)
	EVT_BUTTON(6232, FxWorkspaceEditWidget::sub_00537be0)
	EVT_BUTTON(6233, FxWorkspaceEditWidget::sub_0053c0e0)
	EVT_BUTTON(6234, FxWorkspaceEditWidget::sub_0053c630)
	EVT_BUTTON(6235, FxWorkspaceEditWidget::sub_0052cb90)
	EVT_BUTTON(6236, FxWorkspaceEditWidget::sub_00534520)
	EVT_BUTTON(6237, FxWorkspaceEditWidget::sub_00534780)
	EVT_BUTTON(6238, FxWorkspaceEditWidget::sub_0053c7e0)
	EVT_BUTTON(6239, FxWorkspaceEditWidget::sub_00520fb0)
	EVT_BUTTON(6240, FxWorkspaceEditWidget::sub_005335f0)
	EVT_LEFT_DOWN(FxWorkspaceEditWidget::sub_005339b0)
	EVT_MOTION(FxWorkspaceEditWidget::sub_00530680)
	EVT_LEFT_UP(FxWorkspaceEditWidget::sub_00533c70)
	EVT_KEY_DOWN(FxWorkspaceEditWidget::sub_00534790)
	EVT_KEY_UP(FxWorkspaceEditWidget::sub_00515980)
	EVT_SYS_COLOUR_CHANGED(FxWorkspaceEditWidget::sub_0051e850)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxWorkspaceEditWidget::sub_005159b0)
END_EVENT_TABLE()

class FxWorkspaceWidget : public wxWindow
{
public:
	void sub_00519db0(wxHelpEvent& In);
	void sub_00520290(wxSysColourChangedEvent& In);
	void sub_005240c0(wxCommandEvent& In);
	void sub_00527c20(wxCommandEvent& In);
	void sub_0052f1a0(wxSizeEvent& In);
	void sub_0052f1d0(wxCommandEvent& In);
	void sub_0052f470(wxCommandEvent& In);
	void sub_00535450(wxMouseEvent& In);
	void sub_00535860(wxKeyEvent& In);
	void sub_00535a10(wxCommandEvent& In);
	void sub_00535a60(wxCommandEvent& In);
	void sub_00535ae0(wxCommandEvent& In);
	void sub_00536710(wxCommandEvent& In);
	void sub_005368f0(wxCommandEvent& In);
	void sub_00536a90(wxCommandEvent& In);
	void sub_00538a60(wxPaintEvent& In);
	void sub_00538b90(wxCommandEvent& In);
	void sub_00538ba0(wxCommandEvent& In);
	void sub_00539c70(wxCommandEvent& In);
	void sub_0053cb80(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01dd8eb0
BEGIN_EVENT_TABLE(FxWorkspaceWidget, wxWindow)
	EVT_SIZE(FxWorkspaceWidget::sub_0052f1a0)
	EVT_PAINT(FxWorkspaceWidget::sub_00538a60)
	EVT_MOUSE_EVENTS(FxWorkspaceWidget::sub_00535450)
	EVT_KEY_DOWN(FxWorkspaceWidget::sub_00535860)
	EVT_SYS_COLOUR_CHANGED(FxWorkspaceWidget::sub_00520290)
	EVT_HELP_RANGE(wxID_ANY, 5999, FxWorkspaceWidget::sub_00519db0)
	EVT_CHOICE(6242, FxWorkspaceWidget::sub_00538b90)
	EVT_BUTTON(6243, FxWorkspaceWidget::sub_0053cb80)
	EVT_CHOICE(6245, FxWorkspaceWidget::sub_00539c70)
	EVT_BUTTON(6247, FxWorkspaceWidget::sub_00535a10)
	EVT_BUTTON(6248, FxWorkspaceWidget::sub_00535a60)
	EVT_BUTTON(6246, FxWorkspaceWidget::sub_00535a60)
	EVT_BUTTON(6249, FxWorkspaceWidget::sub_00535ae0)
	EVT_BUTTON(6250, FxWorkspaceWidget::sub_0052f1d0)
	EVT_BUTTON(6251, FxWorkspaceWidget::sub_0052f470)
	EVT_BUTTON(6252, FxWorkspaceWidget::sub_00536710)
	EVT_BUTTON(6253, FxWorkspaceWidget::sub_005368f0)
	EVT_BUTTON(6254, FxWorkspaceWidget::sub_00527c20)
	EVT_BUTTON(6256, FxWorkspaceWidget::sub_005240c0)
	EVT_CHOICE(6255, FxWorkspaceWidget::sub_00536a90)
	EVT_BUTTON(6244, FxWorkspaceWidget::sub_00538ba0)
END_EVENT_TABLE()
