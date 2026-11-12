// Core_1e10000.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxStylePropertiesGroup : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxStyleCommonPropertiesGroup : public WxStylePropertiesGroup
{
public:
	void sub_014e6660(wxCommandEvent& In);
	void sub_014f19b0(wxCommandEvent& In);
	void sub_014f64b0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11610
BEGIN_EVENT_TABLE(WxStyleCommonPropertiesGroup, WxStylePropertiesGroup)
	EVT_MENU(25889, WxStyleCommonPropertiesGroup::sub_014f64b0)
	EVT_CHECKLISTBOX(26063, WxStyleCommonPropertiesGroup::sub_014f19b0)
	EVT_COMBOBOX(26064, WxStyleCommonPropertiesGroup::sub_014e6660)
	EVT_TEXT_ENTER(26064, WxStyleCommonPropertiesGroup::sub_014e6660)
END_EVENT_TABLE()

class WxDlgDiffStateProperties : public wxDialog
{
public:
	void sub_014ddab0(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11c80
BEGIN_EVENT_TABLE(WxDlgDiffStateProperties, wxDialog)
	EVT_RADIOBUTTON(26105, WxDlgDiffStateProperties::sub_014ddab0)
	EVT_RADIOBUTTON(26104, WxDlgDiffStateProperties::sub_014ddab0)
END_EVENT_TABLE()

class WxTextPreviewPanel : public wxPanel
{
public:
	void sub_014dc320(wxCommandEvent& In);
	void sub_014dc330(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10ec0
BEGIN_EVENT_TABLE(WxTextPreviewPanel, wxPanel)
	EVT_TEXT(26080, WxTextPreviewPanel::sub_014dc320)
	EVT_SIZE(WxTextPreviewPanel::sub_014dc330)
END_EVENT_TABLE()

class WxImagePreviewPanelBase : public wxPanel
{
public:
	void sub_014dc480(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10f80
BEGIN_EVENT_TABLE(WxImagePreviewPanelBase, wxPanel)
	EVT_BUTTON(16408, WxImagePreviewPanelBase::sub_014dc480)
END_EVENT_TABLE()

class WxImagePreviewPanelBase_01e11100 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxImagePreviewPanel : public WxImagePreviewPanelBase_01e11100
{
public:
	void sub_014e8d40(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11100
BEGIN_EVENT_TABLE(WxImagePreviewPanel, WxImagePreviewPanelBase_01e11100)
	EVT_BUTTON(16412, WxImagePreviewPanel::sub_014e8d40)
END_EVENT_TABLE()

class WxImagePreviewPanelBase_01e11070 : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxDefaultImagePreviewPanel : public WxImagePreviewPanelBase_01e11070
{
public:
	void sub_014e8b90(wxCommandEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11070
BEGIN_EVENT_TABLE(WxDefaultImagePreviewPanel, WxImagePreviewPanelBase_01e11070)
	EVT_BUTTON(16412, WxDefaultImagePreviewPanel::sub_014e8b90)
END_EVENT_TABLE()

class WxClass_025e9400 : public wxPanel
{
public:
	void sub_014c5d40(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10180
BEGIN_EVENT_TABLE(WxClass_025e9400, wxPanel)
	EVT_CHAR(WxClass_025e9400::sub_014c5d40)
END_EVENT_TABLE()

class WxStylePropertiesGroup_01e115a0 : public wxPanel
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e115a0
BEGIN_EVENT_TABLE(WxStylePropertiesGroup_01e115a0, wxPanel)
END_EVENT_TABLE()

class WxStyleImagePropertiesGroup : public WxStylePropertiesGroup
{
public:
	DECLARE_EVENT_TABLE()
};

// @baa 0x01e11970
BEGIN_EVENT_TABLE(WxStyleImagePropertiesGroup, WxStylePropertiesGroup)
END_EVENT_TABLE()

class WxClass_025e8d3c : public wxPanel
{
	DECLARE_EVENT_TABLE()
};

class WxClass_022b5294 : public WxClass_025e8d3c
{
public:
	void sub_014c6010(wxSizeEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e101e0
BEGIN_EVENT_TABLE(WxClass_022b5294, WxClass_025e8d3c)
	EVT_SIZE(WxClass_022b5294::sub_014c6010)
END_EVENT_TABLE()

class WxClass_025e8688 : public wxFrame
{
	DECLARE_EVENT_TABLE()
};

class WxClass_022b7f90 : public WxClass_025e8688
{
public:
	void sub_014c6ed0(wxCloseEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10d20
BEGIN_EVENT_TABLE(WxClass_022b7f90, WxClass_025e8688)
	EVT_CLOSE(WxClass_022b7f90::sub_014c6ed0)
END_EVENT_TABLE()

class WxClass_025e85b8 : public wxTextCtrl
{
	DECLARE_EVENT_TABLE()
};

class WxClass_022bb8a8 : public WxClass_025e85b8
{
public:
	void sub_014e54b0(wxKeyEvent& In);

	DECLARE_EVENT_TABLE()
};

// @baa 0x01e10fe0
BEGIN_EVENT_TABLE(WxClass_022bb8a8, WxClass_025e85b8)
	EVT_CHAR(WxClass_022bb8a8::sub_014e54b0)
END_EVENT_TABLE()
