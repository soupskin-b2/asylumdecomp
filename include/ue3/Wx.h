/* The editor's wxWidgets: the real 2.8.6 headers (third_party/wxWidgets-2.8.6), configured as the game's
 * wxmsw28u_*_custom.dll were built (Unicode, MSW, used as DLLs: methods are dllimport). Their vtables and
 * class sizes match the DLLs, so declare editor classes as UE3 did: `class WxDlgAddSpecial : public wxDialog`,
 * and call wx by name (`GDlgAddSpecial->Show(TRUE)`, `wxString`, `wxCommandEvent& In`). Include it after the
 * engine headers: <windows.h> comes with it, and its macros would rename script enumerators (PF_..) declared later. */
#ifndef UE3_WX_H
#define UE3_WX_H
#include "Classes.h"

#ifndef __WXMSW__
#define __WXMSW__
#endif
#define WXUSINGDLL
#ifndef UNICODE
#define UNICODE
#endif
#ifndef _UNICODE
#define _UNICODE
#endif
#include "wx/wx.h"
#include "wx/treectrl.h"
#include "wx/listctrl.h"
#include "wx/notebook.h"
#include "wx/splitter.h"
#include "wx/spinctrl.h"
#include "wx/grid.h"
#include "wx/propdlg.h"
#include "wx/tglbtn.h"
#include "wx/clrpicker.h"
#include "wx/aui/aui.h"
#include "wx/html/htmlwin.h"
#include "wx/xrc/xmlres.h"
#endif
