// UnrealEd_0510000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

struct wxWindowBase_0510970 : public wxWindowBase {
    wxRect sub_00510970();
};

// @baa 0x00510970
wxRect wxWindowBase_0510970::sub_00510970()
{
    wxRect Rect = GetClientRect();
    Rect.width -= 0x1e;
    Rect.x += 0xf;
    return Rect;
}
