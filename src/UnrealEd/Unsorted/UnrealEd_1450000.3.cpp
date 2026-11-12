// UnrealEd_1450000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

class WxSelectionHandler
{
public:
    void sub_014517b0(INT Selection);
    void sub_014566c0(wxCommandEvent& Event);
};

// @baa 0x014566c0
void WxSelectionHandler::sub_014566c0(wxCommandEvent& Event)
{
    sub_014517b0(Event.GetSelection());
}
